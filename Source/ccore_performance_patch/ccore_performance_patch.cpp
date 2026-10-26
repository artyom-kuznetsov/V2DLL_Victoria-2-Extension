// ccore_performance_patch.cpp - CreatineCore submod (dll_Submods\ccore_performance_patch.dll).
//
// The performance / stability patches by av213238 that used to be built into creatinecore.dll (moved out in 6.25):
//
//   PATCH_FPU_FORTRESS        FPU control word pinned (53-bit, round to nearest, FTZ/DAZ) at the start of the main loop
//   PATCH_D3D_FPU_PRESERVE    D3DCREATE_FPU_PRESERVE for the D3D9 device (D3D no longer resets the control word)
//   PATCH_THREAD_FPU_PIN      the same pin at the start of every thread created by the exe / tbb.dll
//   PATCH_HEAP_LFH            Low Fragmentation Heap on all process heaps
//   ENGINE_WORKER_THREADS     cap of the engine's TBB pool (0 = leave it)
//   PATCH_POP_QUANTIZE        rounds the low fractional bits of pop money/needs after the daily pop pass (FUN_00485E40)
//   REMOVE_SLEEPERS           Sleep()/WaitForSingleObject() 16-50 ms clamped, main loop Sleep(100) shortened, MP client pump
//   PATCH_D3D_NO_VSYNC        PresentationInterval = IMMEDIATE
//   D3D_FPS_LIMIT             soft FPS cap in Present
//   FIX_SFX_MIXER_LAG         select() of the sound mixer (14-20 ms) -> 1 ms (a copy of the timeval)
//   PATCH_HIGH_PRIORITY       ABOVE_NORMAL priority class, no power throttling
//   FIX_ARMY_WINDOW_LAG       nested CInGameIdler::Idle (RVA 0x254D80) is skipped while units are selected (moved in 6.26,
//                             together with the idle / army-window timing hooks it was built into)
//   (always) timeBeginPeriod(1) / NtSetTimerResolution
//
// All players of a multiplayer game must run the same settings (FPU, quantize and the worker cap change the
// simulation): creatinecore.dll adds this module's effective settings (CCorePerf_ConfigLines) to the config
// fingerprint hash, and a missing DLL gets its own mark in that hash.
//
// Settings: ccore_performance_patch.ini next to this DLL (created on first start).
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <float.h>
#include <intrin.h>
#include <xmmintrin.h>
#include <pmmintrin.h>
#include "V2ModAPI.h"

static const V2ModAPI* g_api = 0;
static DWORD   g_base = 0;
static DWORD   g_imageSize = 0;
static HMODULE g_self = 0;
static char    g_iniPath[MAX_PATH];

struct PerfSettings
{
    int enabled              = 1;
    int patchFpuFortress     = 1;
    int patchD3dFpuPreserve  = 1;
    int patchHeapLfh         = 1;
    int patchThreadFpuPin    = 1;
    int engineWorkerThreads  = 0;
    int patchPopQuantize     = 1;
    int popQuantizeKeepBits  = 12;
    int removeSleepers       = 1;
    int mpClientSleepMs      = 1;
    int mainLoopSleepMs      = 1;
    int patchD3dNoVsync      = 0;
    int d3dFpsLimit          = 70;
    int fixSfxMixerLag       = 1;
    int patchHighPriority    = 1;
    int fixArmyWindowLag     = 0;   // off by default since 6.29: it freezes the picture during the daily tick while units are selected
    int debugLog             = 0;
};
static PerfSettings g_cfg;

// Same text as before the move (no module prefix): the lines are looked for in v2dll.log by their tags.
static void Log(const char* fmt, ...)
{
    char buf[768];
    va_list ap;
    va_start(ap, fmt);
    _vsnprintf_s(buf, sizeof(buf), _TRUNCATE, fmt, ap);
    va_end(ap);
    if (g_api && g_api->Log)
        g_api->Log("%s", buf);
}
#define LogDbg(...) do { if (g_cfg.debugLog) Log(__VA_ARGS__); } while (0)

// ---------------------------------------------------------------
// ini
// ---------------------------------------------------------------
static void WriteDefaultIni()
{
    FILE* f = 0;
    if (fopen_s(&f, g_iniPath, "w") != 0 || !f)
        return;
    fprintf(f,
        "; ccore_performance_patch.dll settings. These change the simulation or the engine timing, so every player\n"
        "; of a multiplayer game must use the same values (creatinecore.dll hashes them into the config fingerprint).\n"
        "\n"
        "; 0 = module does nothing (no patch below is applied)\n"
        "ENABLE=%d\n"
        "\n"
        "; FPU control word pinned at the start of the main loop\n"
        "PATCH_FPU_FORTRESS=%d\n"
        "; D3DCREATE_FPU_PRESERVE for the D3D9 device\n"
        "PATCH_D3D_FPU_PRESERVE=%d\n"
        "; Low Fragmentation Heap on the process heaps\n"
        "PATCH_HEAP_LFH=%d\n"
        "; FPU pin at the start of every thread created by the exe / tbb.dll\n"
        "PATCH_THREAD_FPU_PIN=%d\n"
        "; cap of the TBB worker pool, 0 = leave the game's own choice (all cores)\n"
        "ENGINE_WORKER_THREADS=%d\n"
        "; round the low fractional bits of pop money / needs after the daily pass\n"
        "PATCH_POP_QUANTIZE=%d\n"
        "; fractional bits kept (15 = vanilla, no rounding)\n"
        "POP_QUANTIZE_KEEP_BITS=%d\n"
        "; Sleep()/WaitForSingleObject() clamps, shorter main loop sleep, MP client pump\n"
        "REMOVE_SLEEPERS=%d\n"
        "; force PresentationInterval=IMMEDIATE (may cause tearing / stutters)\n"
        "PATCH_D3D_NO_VSYNC=%d\n"
        "; soft FPS limit, 0 = off\n"
        "D3D_FPS_LIMIT=%d\n"
        "; select() of the sound mixer 14-20 ms -> 1 ms\n"
        "FIX_SFX_MIXER_LAG=%d\n"
        "; ABOVE_NORMAL priority, no power throttling\n"
        "PATCH_HIGH_PRIORITY=%d\n"
        "; skip the nested in-game idle pass while units are selected (army window stutters)\n"
        "FIX_ARMY_WINDOW_LAG=%d\n"
        "\n"
        "; extra diagnostic lines in v2dll.log\n"
        "DEBUG_LOG=%d\n",
        g_cfg.enabled, g_cfg.patchFpuFortress, g_cfg.patchD3dFpuPreserve, g_cfg.patchHeapLfh, g_cfg.patchThreadFpuPin,
        g_cfg.engineWorkerThreads, g_cfg.patchPopQuantize, g_cfg.popQuantizeKeepBits, g_cfg.removeSleepers,
        g_cfg.patchD3dNoVsync, g_cfg.d3dFpsLimit, g_cfg.fixSfxMixerLag, g_cfg.patchHighPriority, g_cfg.fixArmyWindowLag,
        g_cfg.debugLog);
    fclose(f);
}

static void ApplyKey(const char* key, const char* value)
{
    int v = atoi(value);
    int b = v != 0;
    if      (_stricmp(key, "ENABLE") == 0)                  g_cfg.enabled = b;
    else if (_stricmp(key, "PATCH_FPU_FORTRESS") == 0)      g_cfg.patchFpuFortress = b;
    else if (_stricmp(key, "PATCH_D3D_FPU_PRESERVE") == 0)  g_cfg.patchD3dFpuPreserve = b;
    else if (_stricmp(key, "PATCH_HEAP_LFH") == 0)          g_cfg.patchHeapLfh = b;
    else if (_stricmp(key, "PATCH_THREAD_FPU_PIN") == 0)    g_cfg.patchThreadFpuPin = b;
    else if (_stricmp(key, "ENGINE_WORKER_THREADS") == 0)   g_cfg.engineWorkerThreads = v < 0 ? 0 : (v > 32 ? 32 : v);
    else if (_stricmp(key, "PATCH_POP_QUANTIZE") == 0)      g_cfg.patchPopQuantize = b;
    else if (_stricmp(key, "POP_QUANTIZE_KEEP_BITS") == 0)  g_cfg.popQuantizeKeepBits = v;
    else if (_stricmp(key, "REMOVE_SLEEPERS") == 0 || _stricmp(key, "PATCH_MP_CLIENT_SLEEP") == 0 ||
             _stricmp(key, "PATCH_MAIN_LOOP_SLEEP0") == 0)  g_cfg.removeSleepers = b;
    else if (_stricmp(key, "MP_CLIENT_SLEEP_MS") == 0)      g_cfg.mpClientSleepMs = v;
    else if (_stricmp(key, "MAIN_LOOP_SLEEP_MS") == 0)      g_cfg.mainLoopSleepMs = v;
    else if (_stricmp(key, "PATCH_D3D_NO_VSYNC") == 0)      g_cfg.patchD3dNoVsync = b;
    else if (_stricmp(key, "D3D_FPS_LIMIT") == 0)           g_cfg.d3dFpsLimit = v < 0 ? 0 : v;
    else if (_stricmp(key, "FIX_SFX_MIXER_LAG") == 0)       g_cfg.fixSfxMixerLag = b;
    else if (_stricmp(key, "PATCH_HIGH_PRIORITY") == 0)     g_cfg.patchHighPriority = b;
    else if (_stricmp(key, "FIX_ARMY_WINDOW_LAG") == 0)     g_cfg.fixArmyWindowLag = b;
    else if (_stricmp(key, "DEBUG_LOG") == 0)               g_cfg.debugLog = b;
}

static void LoadIni()
{
    FILE* f = 0;
    if (fopen_s(&f, g_iniPath, "r") != 0 || !f)
    {
        WriteDefaultIni();
        Log("ccore_performance_patch: created %s with default settings", g_iniPath);
        return;
    }
    char line[512];
    while (fgets(line, sizeof(line), f))
    {
        if (line[0] == ';' || line[0] == '#')
            continue;
        char* eq = strchr(line, '=');
        if (!eq)
            continue;
        *eq = 0;
        char* key = line;
        while (*key == ' ' || *key == '\t')
            ++key;
        size_t n = strlen(key);
        while (n && (key[n - 1] == ' ' || key[n - 1] == '\t'))
            key[--n] = 0;
        ApplyKey(key, eq + 1);
    }
    fclose(f);
}

// KEY=VALUE lines of the effective settings, for the config fingerprint of creatinecore.dll.
static char g_cfgLines[1024];
static const char* BuildConfigLines()
{
    _snprintf_s(g_cfgLines, sizeof(g_cfgLines), _TRUNCATE,
        "ENABLE=%d\nPATCH_FPU_FORTRESS=%d\nPATCH_D3D_FPU_PRESERVE=%d\nPATCH_HEAP_LFH=%d\nPATCH_THREAD_FPU_PIN=%d\n"
        "ENGINE_WORKER_THREADS=%d\nPATCH_POP_QUANTIZE=%d\nPOP_QUANTIZE_KEEP_BITS=%d\nREMOVE_SLEEPERS=%d\n"
        "MP_CLIENT_SLEEP_MS=%d\nMAIN_LOOP_SLEEP_MS=%d\nPATCH_D3D_NO_VSYNC=%d\nD3D_FPS_LIMIT=%d\n"
        "FIX_SFX_MIXER_LAG=%d\nPATCH_HIGH_PRIORITY=%d\nFIX_ARMY_WINDOW_LAG=%d\nDEBUG_LOG=%d\n",
        g_cfg.enabled, g_cfg.patchFpuFortress, g_cfg.patchD3dFpuPreserve, g_cfg.patchHeapLfh, g_cfg.patchThreadFpuPin,
        g_cfg.engineWorkerThreads, g_cfg.patchPopQuantize, g_cfg.popQuantizeKeepBits, g_cfg.removeSleepers,
        g_cfg.mpClientSleepMs, g_cfg.mainLoopSleepMs, g_cfg.patchD3dNoVsync, g_cfg.d3dFpsLimit,
        g_cfg.fixSfxMixerLag, g_cfg.patchHighPriority, g_cfg.fixArmyWindowLag, g_cfg.debugLog);
    return g_cfgLines;
}

extern "C" __declspec(dllexport) const char* __cdecl CCorePerf_ConfigLines()
{
    return BuildConfigLines();
}

// ---------------------------------------------------------------
// shared declarations (as they were in V2TechButton.cpp)
// ---------------------------------------------------------------
typedef DWORD (WINAPI* tGetTickCount)(void);
typedef HANDLE (WINAPI* tCreateThread)(LPSECURITY_ATTRIBUTES, SIZE_T, LPTHREAD_START_ROUTINE, LPVOID, DWORD, LPDWORD);
typedef DWORD_PTR (__cdecl *tBeginThreadEx)(void*, unsigned, LPTHREAD_START_ROUTINE, void*, unsigned, unsigned*);
typedef HMODULE (WINAPI* tLoadLibraryA)(LPCSTR);
typedef HMODULE (WINAPI* tLoadLibraryW)(LPCWSTR);
typedef void* (WINAPI* tDirect3DCreate9)(UINT);
typedef HRESULT (WINAPI* tD3D9CreateDevice)(void*, UINT, UINT, HWND, DWORD, void*, void**);
typedef HRESULT (WINAPI* tD3D9Reset)(void*, void*);
typedef HRESULT (WINAPI* tD3D9Present)(void*, const void*, const void*, HWND, const void*);
typedef void (WINAPI* tSleep)(DWORD);
typedef DWORD (WINAPI* tWaitForSingleObject)(HANDLE, DWORD);
typedef DWORD (WINAPI* tTimeGetTime)(void);
typedef BOOL (WINAPI* tPeekMessageA)(LPMSG, HWND, UINT, UINT, UINT);
typedef LRESULT (WINAPI* tDispatchMessageA)(const MSG*);
static tPeekMessageA       g_realPeekMessageA = 0;
static tDispatchMessageA   g_realDispatchMessageA = 0;

static void TryPatchLateModules();
static HMODULE WINAPI HookLoadLibraryA(LPCSTR name);
static HMODULE WINAPI HookLoadLibraryW(LPCWSTR name);
static HRESULT WINAPI HookPresent(void* device, const void* src, const void* dest, HWND wnd, const void* dirty);

static tGetTickCount       g_realGetTickCount = 0;
static tCreateThread       g_realCreateThread = 0;
static tBeginThreadEx      g_realBeginThreadEx = 0;
static tLoadLibraryA       g_realLoadLibraryA = 0;
static tLoadLibraryW       g_realLoadLibraryW = 0;
static tDirect3DCreate9    g_realDirect3DCreate9 = 0;
static tD3D9CreateDevice   g_realCreateDevice = 0;
static tD3D9Reset          g_realReset = 0;
static tD3D9Present        g_realPresent = 0;
static void*               g_realTbbInit = 0;
static tSleep              g_realSleep = 0;
static tWaitForSingleObject g_realWFSO = 0;
typedef int (WINAPI* tSelect)(int, void*, void*, void*, struct SockTimeVal*);
static tSelect             g_realSelect = 0;
static DWORD               g_seenSelectRva[12];
static LONG                g_seenSelectN = 0;
static DWORD               g_seenWfsoMs[16];
static DWORD               g_seenWfsoRva[16];
static LONG                g_seenWfsoN = 0;
static tTimeGetTime        g_timeGetTime = 0;

static LONGLONG QpcNow()
{
    LARGE_INTEGER v;
    v.QuadPart = 0;
    QueryPerformanceCounter(&v);
    return v.QuadPart;
}


// ---------------------------------------------------------------
// constants
// ---------------------------------------------------------------
static const DWORD RVA_MAIN_LOOP = 0x5DF550;
static const unsigned char MAIN_LOOP_SIG[5] = { 0x55, 0x8B, 0xEC, 0x6A, 0xFF };
static const DWORD D3DCREATE_FPU_PRESERVE_FLAG = 0x00000002;
static const DWORD D3DPRESENT_INTERVAL_IMMEDIATE = 0x80000000;
static const int D3DPRESENT_INTERVAL_OFF = 52;
static const int D3D9_VT_CREATEDEVICE = 16;
static const int D3D9DEV_VT_RESET = 16;
static const int D3D9DEV_VT_PRESENT = 17;
static const char TBB_INIT_MANGLE[] = "?initialize@task_scheduler_init@tbb@@QAEXHI@Z";
static DWORD g_mainLoopResume = 0;
static int g_tbbMaxThreads = 8;
static const DWORD RVA_SLEEP_IAT = 0x88A0EC;
static const DWORD RVA_MAIN_SLEEP_A = 0x5DF2D5;
static const DWORD RVA_MAIN_SLEEP_B = 0x5DF684;
static HANDLE g_fpsTimer = 0;
static LONGLONG g_fpsNextQpc = 0;
static const DWORD RVA_POP_DAILY = 0x85E40;
static const int POP_ID_TYPE = 46;
static const int POP_STRIDE = 0x2A8;
static DWORD g_popDailyRet = 0;
static void* g_popDailyArg0 = 0;
static void* g_popDailyEcx = 0;
static void* g_popDailyTramp = 0;
static const DWORD RVA_MP_CLIENT_SLEEP = 0x71DD2C;

// ---------------------------------------------------------------
// IAT hooking (copy of the core helpers)
// ---------------------------------------------------------------
static bool HookIat(HMODULE module, const char* dllName, const char* funcName, void* hook, void** orig)
{
    if (!module || !dllName || !funcName || !hook)
        return false;

    unsigned char* base = (unsigned char*)module;
    bool ok = false;
    __try
    {
        IMAGE_DOS_HEADER* dos = (IMAGE_DOS_HEADER*)base;
        if (dos->e_magic != IMAGE_DOS_SIGNATURE)
            return false;

        IMAGE_NT_HEADERS32* nt = (IMAGE_NT_HEADERS32*)(base + dos->e_lfanew);
        if (nt->Signature != IMAGE_NT_SIGNATURE)
            return false;

        DWORD imageSize = nt->OptionalHeader.SizeOfImage;
        DWORD importRva = nt->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_IMPORT].VirtualAddress;
        DWORD importSize = nt->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_IMPORT].Size;
        if (!importRva || importRva >= imageSize)
            return false;

        IMAGE_IMPORT_DESCRIPTOR* desc = (IMAGE_IMPORT_DESCRIPTOR*)(base + importRva);
        IMAGE_IMPORT_DESCRIPTOR* descEnd = importSize
            ? (IMAGE_IMPORT_DESCRIPTOR*)(base + importRva + importSize)
            : desc + 64;

        for (; desc < descEnd && desc->Name; ++desc)
        {
            if (desc->Name >= imageSize || desc->FirstThunk >= imageSize)
                continue;
            // Без OriginalFirstThunk FirstThunk уже адреса функций, не RVA имён.
            if (!desc->OriginalFirstThunk || desc->OriginalFirstThunk >= imageSize)
                continue;

            const char* name = (const char*)(base + desc->Name);
            if (_stricmp(name, dllName) != 0)
                continue;

            IMAGE_THUNK_DATA32* thunk = (IMAGE_THUNK_DATA32*)(base + desc->FirstThunk);
            IMAGE_THUNK_DATA32* origThunk = (IMAGE_THUNK_DATA32*)(base + desc->OriginalFirstThunk);

            for (; thunk->u1.Function; ++thunk, ++origThunk)
            {
                if ((unsigned char*)origThunk >= base + imageSize)
                    break;
                if (origThunk->u1.Ordinal & IMAGE_ORDINAL_FLAG32)
                    continue;

                DWORD aod = origThunk->u1.AddressOfData;
                if (!aod || aod >= imageSize)
                    continue;

                IMAGE_IMPORT_BY_NAME* byName = (IMAGE_IMPORT_BY_NAME*)(base + aod);
                if (strcmp((const char*)byName->Name, funcName) != 0)
                    continue;

                DWORD* slot = (DWORD*)&thunk->u1.Function;
                if (*slot == (DWORD)(DWORD_PTR)hook)
                    return true;

                HMODULE expected = GetModuleHandleA(dllName);
                if (expected)
                {
                    MEMORY_BASIC_INFORMATION mbi;
                    memset(&mbi, 0, sizeof(mbi));
                    if (!VirtualQuery((void*)(DWORD_PTR)*slot, &mbi, sizeof(mbi)))
                        return false;
                    if (mbi.AllocationBase == module)
                        return false;
                }

                DWORD oldProtect = 0;
                if (!VirtualProtect(slot, sizeof(DWORD), PAGE_EXECUTE_READWRITE, &oldProtect))
                    return false;

                if (orig && !*orig)
                    *orig = (void*)(DWORD_PTR)*slot;
                *slot = (DWORD)(DWORD_PTR)hook;
                VirtualProtect(slot, sizeof(DWORD), oldProtect, &oldProtect);
                ok = true;
                return true;
            }
        }
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        return false;
    }
    return ok;
}

static bool HookIatOrdinal(HMODULE module, const char* dllName, WORD ordinal, void* hook, void** orig)
{
    if (!module || !dllName || !ordinal || !hook)
        return false;

    unsigned char* base = (unsigned char*)module;
    __try
    {
        IMAGE_DOS_HEADER* dos = (IMAGE_DOS_HEADER*)base;
        if (dos->e_magic != IMAGE_DOS_SIGNATURE)
            return false;
        IMAGE_NT_HEADERS32* nt = (IMAGE_NT_HEADERS32*)(base + dos->e_lfanew);
        if (nt->Signature != IMAGE_NT_SIGNATURE)
            return false;

        DWORD imageSize = nt->OptionalHeader.SizeOfImage;
        DWORD importRva = nt->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_IMPORT].VirtualAddress;
        DWORD importSize = nt->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_IMPORT].Size;
        if (!importRva || importRva >= imageSize)
            return false;

        IMAGE_IMPORT_DESCRIPTOR* desc = (IMAGE_IMPORT_DESCRIPTOR*)(base + importRva);
        IMAGE_IMPORT_DESCRIPTOR* descEnd = importSize
            ? (IMAGE_IMPORT_DESCRIPTOR*)(base + importRva + importSize)
            : desc + 64;

        for (; desc < descEnd && desc->Name; ++desc)
        {
            if (desc->Name >= imageSize || desc->FirstThunk >= imageSize)
                continue;
            if (!desc->OriginalFirstThunk || desc->OriginalFirstThunk >= imageSize)
                continue;
            const char* name = (const char*)(base + desc->Name);
            if (_stricmp(name, dllName) != 0)
                continue;

            IMAGE_THUNK_DATA32* thunk = (IMAGE_THUNK_DATA32*)(base + desc->FirstThunk);
            IMAGE_THUNK_DATA32* origThunk = (IMAGE_THUNK_DATA32*)(base + desc->OriginalFirstThunk);
            for (; thunk->u1.Function; ++thunk, ++origThunk)
            {
                if ((unsigned char*)origThunk >= base + imageSize)
                    break;
                if (!(origThunk->u1.Ordinal & IMAGE_ORDINAL_FLAG32))
                    continue;
                if ((WORD)(origThunk->u1.Ordinal & 0xFFFF) != ordinal)
                    continue;

                DWORD* slot = (DWORD*)&thunk->u1.Function;
                if (*slot == (DWORD)(DWORD_PTR)hook)
                    return true;

                DWORD oldProtect = 0;
                if (!VirtualProtect(slot, sizeof(DWORD), PAGE_EXECUTE_READWRITE, &oldProtect))
                    return false;
                if (orig && !*orig)
                    *orig = (void*)(DWORD_PTR)*slot;
                *slot = (DWORD)(DWORD_PTR)hook;
                VirtualProtect(slot, sizeof(DWORD), oldProtect, &oldProtect);
                return true;
            }
        }
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        return false;
    }
    return false;
}

// ---------------------------------------------------------------
// moved code
// ---------------------------------------------------------------

static void PinFpu()
{
    unsigned int ignored = 0;
    _controlfp_s(&ignored, _PC_53, _MCW_PC);
    _controlfp_s(&ignored, _RC_NEAR, _MCW_RC);
    _MM_SET_FLUSH_ZERO_MODE(_MM_FLUSH_ZERO_ON);
    _MM_SET_DENORMALS_ZERO_MODE(_MM_DENORMALS_ZERO_ON);
}

static bool PatchVtableSlot(void* obj, int slot, void* hook, void** orig)
{
    if (!obj || !hook)
        return false;

    void** vtable = *(void***)obj;
    if (!vtable)
        return false;

    if (vtable[slot] == hook)
        return true;

    DWORD oldProtect = 0;
    if (!VirtualProtect(&vtable[slot], sizeof(void*), PAGE_EXECUTE_READWRITE, &oldProtect))
        return false;

    if (orig && !*orig)
        *orig = vtable[slot];
    vtable[slot] = hook;
    VirtualProtect(&vtable[slot], sizeof(void*), oldProtect, &oldProtect);
    return true;
}

static DWORD WINAPI HookGetTickCount(void)
{
    static LONG attempts = 0;
    if (attempts < 256)
    {
        InterlockedIncrement(&attempts);
        TryPatchLateModules();
    }
    return g_realGetTickCount ? g_realGetTickCount() : 0;
}

struct ThreadStartWrap
{
    LPTHREAD_START_ROUTINE orig;
    LPVOID param;
};

static DWORD WINAPI PinnedThreadStart(LPVOID raw)
{
    ThreadStartWrap* wrap = (ThreadStartWrap*)raw;
    LPTHREAD_START_ROUTINE orig = wrap->orig;
    LPVOID param = wrap->param;
    HeapFree(GetProcessHeap(), 0, wrap);
    PinFpu();
    return orig(param);
}

static HANDLE WINAPI HookCreateThread(
    LPSECURITY_ATTRIBUTES sa, SIZE_T stack, LPTHREAD_START_ROUTINE start,
    LPVOID param, DWORD flags, LPDWORD id)
{
    if (!g_realCreateThread)
        return 0;

    if (!start || start == PinnedThreadStart)
        return g_realCreateThread(sa, stack, start, param, flags, id);

    ThreadStartWrap* wrap = (ThreadStartWrap*)HeapAlloc(
        GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(ThreadStartWrap));
    if (!wrap)
        return g_realCreateThread(sa, stack, start, param, flags, id);

    wrap->orig = start;
    wrap->param = param;

    HANDLE h = g_realCreateThread(sa, stack, PinnedThreadStart, wrap, flags, id);
    if (!h)
        HeapFree(GetProcessHeap(), 0, wrap);
    return h;
}

static DWORD_PTR __cdecl HookBeginThreadEx(
    void* security, unsigned stack, LPTHREAD_START_ROUTINE start,
    void* arg, unsigned flags, unsigned* id)
{
    if (!g_realBeginThreadEx)
        return 0;

    if (!start || start == PinnedThreadStart)
        return g_realBeginThreadEx(security, stack, start, arg, flags, id);

    ThreadStartWrap* wrap = (ThreadStartWrap*)HeapAlloc(
        GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(ThreadStartWrap));
    if (!wrap)
        return g_realBeginThreadEx(security, stack, start, arg, flags, id);

    wrap->orig = start;
    wrap->param = arg;

    DWORD_PTR h = g_realBeginThreadEx(security, stack, PinnedThreadStart, wrap, flags, id);
    if (!h)
        HeapFree(GetProcessHeap(), 0, wrap);
    return h;
}

static HANDLE FpsTimerHandle()
{
    if (g_fpsTimer)
        return g_fpsTimer;

    HMODULE k32 = GetModuleHandleW(L"kernel32.dll");
    typedef HANDLE (WINAPI* tCreateWaitableTimerExW)(LPSECURITY_ATTRIBUTES, LPCWSTR, DWORD, DWORD);
    tCreateWaitableTimerExW pEx = k32
        ? (tCreateWaitableTimerExW)GetProcAddress(k32, "CreateWaitableTimerExW")
        : 0;
    if (pEx)
        g_fpsTimer = pEx(0, 0, 0x00000002, TIMER_ALL_ACCESS);
    if (!g_fpsTimer)
        g_fpsTimer = CreateWaitableTimerW(0, TRUE, 0);
    return g_fpsTimer;
}

static void WaitFpsCap()
{
    int fps = g_cfg.d3dFpsLimit;
    if (fps < 1)
        return;

    static LARGE_INTEGER freq;
    if (!freq.QuadPart)
        QueryPerformanceFrequency(&freq);
    if (!freq.QuadPart)
        return;

    LONGLONG step = freq.QuadPart / fps;
    if (step < 1)
        step = 1;

    LONGLONG now = QpcNow();
    if (g_fpsNextQpc == 0)
    {
        g_fpsNextQpc = now + step;
        return;
    }

    if (now > g_fpsNextQpc + step * 2)
        g_fpsNextQpc = now;
    else if (now < g_fpsNextQpc)
    {
        LONGLONG remain = g_fpsNextQpc - now;
        LONGLONG hundredNs = (remain * 10000000LL) / freq.QuadPart;
        if (hundredNs > 8000)
        {
            HANDLE timer = FpsTimerHandle();
            if (timer)
            {
                LARGE_INTEGER due;
                due.QuadPart = -(hundredNs - 3000);
                if (SetWaitableTimer(timer, &due, 0, 0, 0, FALSE))
                    WaitForSingleObject(timer, 40);
            }
        }
        while (QpcNow() < g_fpsNextQpc)
            YieldProcessor();
    }

    g_fpsNextQpc += step;
}

static void ForceImmediatePresent(void* params)
{
    if (!params || !g_cfg.patchD3dNoVsync)
        return;
    __try
    {
        *(DWORD*)((char*)params + D3DPRESENT_INTERVAL_OFF) = D3DPRESENT_INTERVAL_IMMEDIATE;
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
    }
}

static HRESULT WINAPI HookReset(void* self, void* params)
{
    ForceImmediatePresent(params);
    return g_realReset ? g_realReset(self, params) : E_FAIL;
}

static HRESULT WINAPI HookCreateDevice(
    void* self, UINT adapter, UINT type, HWND hwnd, DWORD flags,
    void* params, void** outDevice)
{
    if (g_cfg.patchD3dFpuPreserve)
        flags |= D3DCREATE_FPU_PRESERVE_FLAG;
    ForceImmediatePresent(params);

    HRESULT hr = g_realCreateDevice
        ? g_realCreateDevice(self, adapter, type, hwnd, flags, params, outDevice)
        : E_FAIL;

    if (hr >= 0 && outDevice && *outDevice)
    {
        PatchVtableSlot(*outDevice, D3D9DEV_VT_RESET, (void*)HookReset, (void**)&g_realReset);
        if (PatchVtableSlot(*outDevice, D3D9DEV_VT_PRESENT, (void*)HookPresent, (void**)&g_realPresent))
        {
            DWORD interval = 0;
            if (params)
                interval = *(DWORD*)((char*)params + D3DPRESENT_INTERVAL_OFF);
            Log("D3D9: Present перехвачен, FPU_PRESERVE=%d noVsync=%d interval=%08X",
                (int)g_cfg.patchD3dFpuPreserve,
                (int)g_cfg.patchD3dNoVsync,
                interval);
        }
    }
    return hr;
}

static void* WINAPI HookDirect3DCreate9(UINT sdk)
{
    void* obj = g_realDirect3DCreate9 ? g_realDirect3DCreate9(sdk) : 0;
    if (obj)
        PatchVtableSlot(obj, D3D9_VT_CREATEDEVICE, (void*)HookCreateDevice, (void**)&g_realCreateDevice);
    return obj;
}

__declspec(naked) static void HookTbbInit()
{
    __asm {
        mov eax, g_tbbMaxThreads
        cmp eax, 1
        jl go_real
        mov dword ptr [esp + 4], eax
    go_real:
        jmp dword ptr [g_realTbbInit]
    }
}

static void HookTbbModule(HMODULE tbb)
{
    if (!tbb || !g_cfg.patchThreadFpuPin)
        return;

    static LONG loggedCt = 0;
    static LONG loggedBt = 0;
    static LONG loggedFail = 0;

    bool ct = HookIat(tbb, "kernel32.dll", "CreateThread",
        (void*)HookCreateThread, (void**)&g_realCreateThread);
    bool bt = HookIat(tbb, "MSVCR100.dll", "_beginthreadex",
        (void*)HookBeginThreadEx, (void**)&g_realBeginThreadEx);

    if (ct && InterlockedCompareExchange(&loggedCt, 1, 0) == 0)
        Log("TBB: CreateThread перехвачен");
    if (bt && InterlockedCompareExchange(&loggedBt, 1, 0) == 0)
        Log("TBB: _beginthreadex перехвачен");
    if (!ct && !bt && InterlockedCompareExchange(&loggedFail, 1, 0) == 0)
        Log("TBB: ни CreateThread, ни _beginthreadex в IAT");
}

static void HookTbbInitOnExe()
{
    if (g_cfg.engineWorkerThreads < 1)
    {
        static LONG loggedOff = 0;
        if (InterlockedCompareExchange(&loggedOff, 1, 0) == 0)
            Log("TBB: кап снят (ENGINE_WORKER_THREADS=0), initialize не трогаем");
        return;
    }

    static LONG hooked = 0;
    if (hooked)
        return;

    HMODULE tbb = GetModuleHandleA("tbb.dll");
    if (!tbb)
        return;

    g_tbbMaxThreads = g_cfg.engineWorkerThreads;
    if (!g_realTbbInit)
        g_realTbbInit = (void*)GetProcAddress(tbb, TBB_INIT_MANGLE);

    if (!g_realTbbInit)
    {
        Log("TBB: initialize не найден в tbb.dll");
        hooked = 1;
        return;
    }

    if (HookIat(GetModuleHandleA(NULL), "tbb.dll", TBB_INIT_MANGLE, (void*)HookTbbInit, &g_realTbbInit))
    {
        hooked = 1;
        Log("TBB: initialize капим на %d потоков", g_tbbMaxThreads);
    }
}

static void TryPatchLateModules()
{
    HMODULE exe = GetModuleHandleA(NULL);

    if (g_cfg.patchThreadFpuPin)
    {
        HookIat(exe, "kernel32.dll", "CreateThread", (void*)HookCreateThread, (void**)&g_realCreateThread);
        HookIat(exe, "kernel32.dll", "LoadLibraryA", (void*)HookLoadLibraryA, (void**)&g_realLoadLibraryA);
        HookIat(exe, "kernel32.dll", "LoadLibraryW", (void*)HookLoadLibraryW, (void**)&g_realLoadLibraryW);
        HookIat(exe, "kernel32.dll", "GetTickCount", (void*)HookGetTickCount, (void**)&g_realGetTickCount);
    }

    HMODULE d3d9 = GetModuleHandleA("d3d9.dll");
    static LONG d3dHooked = 0;
    if (g_cfg.patchD3dFpuPreserve && d3d9 && d3dHooked == 0)
    {
        if (!g_realDirect3DCreate9)
            g_realDirect3DCreate9 = (tDirect3DCreate9)GetProcAddress(d3d9, "Direct3DCreate9");
        if (g_realDirect3DCreate9 &&
            HookIat(exe, "d3d9.dll", "Direct3DCreate9", (void*)HookDirect3DCreate9, (void**)&g_realDirect3DCreate9))
        {
            d3dHooked = 1;
            Log("D3D9: Direct3DCreate9 перехвачен");
        }
    }

    HMODULE tbb = GetModuleHandleA("tbb.dll");
    if (tbb)
    {
        HookTbbModule(tbb);
        HookTbbInitOnExe();
    }

}

static bool NameHasTbbA(const char* name)
{
    if (!name)
        return false;
    for (const char* p = name; *p; ++p)
    {
        if ((p[0] == 't' || p[0] == 'T') &&
            (p[1] == 'b' || p[1] == 'B') &&
            (p[2] == 'b' || p[2] == 'B'))
            return true;
    }
    return false;
}

static bool NameHasTbbW(const wchar_t* name)
{
    if (!name)
        return false;
    for (const wchar_t* p = name; *p; ++p)
    {
        if ((p[0] == L't' || p[0] == L'T') &&
            (p[1] == L'b' || p[1] == L'B') &&
            (p[2] == L'b' || p[2] == L'B'))
            return true;
    }
    return false;
}

static HMODULE WINAPI HookLoadLibraryA(LPCSTR name)
{
    HMODULE m = g_realLoadLibraryA ? g_realLoadLibraryA(name) : 0;
    if (m && NameHasTbbA(name))
        HookTbbModule(m);
    return m;
}

static HMODULE WINAPI HookLoadLibraryW(LPCWSTR name)
{
    HMODULE m = g_realLoadLibraryW ? g_realLoadLibraryW(name) : 0;
    if (m && NameHasTbbW(name))
        HookTbbModule(m);
    return m;
}

__declspec(naked) static void MainLoopThunk()
{
    __asm {
        pushad
        call PinFpu
        call TryPatchLateModules
        popad
        push ebp
        mov ebp, esp
        push -1
        jmp dword ptr [g_mainLoopResume]
    }
}

static bool InstallMainLoopFpuPin()
{
    unsigned char* hook = (unsigned char*)(g_base + RVA_MAIN_LOOP);
    if (memcmp(hook, MAIN_LOOP_SIG, sizeof(MAIN_LOOP_SIG)) != 0)
    {
        Log("FPU: сигнатура главного цикла не совпала (%02X %02X %02X %02X %02X)",
            hook[0], hook[1], hook[2], hook[3], hook[4]);
        return false;
    }

    g_mainLoopResume = g_base + RVA_MAIN_LOOP + 5;

    unsigned char patch[5];
    patch[0] = 0xE9;
    *(DWORD*)(patch + 1) = (DWORD)(DWORD_PTR)&MainLoopThunk - ((DWORD)hook + 5);

    DWORD oldProtect = 0;
    if (!VirtualProtect(hook, sizeof(patch), PAGE_EXECUTE_READWRITE, &oldProtect))
        return false;
    memcpy(hook, patch, sizeof(patch));
    VirtualProtect(hook, sizeof(patch), oldProtect, &oldProtect);

    Log("FPU: пин на главном цикле rva %06X", RVA_MAIN_LOOP);
    return true;
}

static void InstallHeapLfh()
{
    HANDLE heaps[128];
    DWORD n = GetProcessHeaps(128, heaps);
    DWORD lfh = 2;
    DWORD ok = 0;
    for (DWORD i = 0; i < n; ++i)
    {
        if (HeapSetInformation(heaps[i], (HEAP_INFORMATION_CLASS)0, &lfh, sizeof(lfh)))
            ++ok;
    }
    Log("Heap: LFH включён на %u из %u куч (LAA exe=%d)",
        ok, n,
        (((IMAGE_NT_HEADERS32*)((unsigned char*)g_base +
            ((IMAGE_DOS_HEADER*)g_base)->e_lfanew))->FileHeader.Characteristics & IMAGE_FILE_LARGE_ADDRESS_AWARE) ? 1 : 0);
}

static bool PatchImm8Sleep(DWORD rvaPush, unsigned char expectMs, unsigned char newMs, const char* tag)
{
    unsigned char* p = (unsigned char*)(g_base + rvaPush);
    DWORD iat = g_base + RVA_SLEEP_IAT;
    if (p[0] != 0x6A || p[2] != 0xFF || p[3] != 0x15 || *(DWORD*)(p + 4) != iat)
    {
        Log("%s: сигнатура Sleep не совпала rva %06X (%02X %02X %02X %02X)",
            tag, rvaPush, p[0], p[1], p[2], p[3]);
        return false;
    }
    if (p[1] != expectMs && p[1] != newMs)
    {
        Log("%s: неожиданный imm Sleep(%u) rva %06X", tag, (unsigned)p[1], rvaPush);
        return false;
    }

    DWORD oldProtect = 0;
    if (!VirtualProtect(p, 2, PAGE_EXECUTE_READWRITE, &oldProtect))
        return false;
    p[1] = newMs;
    VirtualProtect(p, 2, oldProtect, &oldProtect);
    Log("%s: Sleep(%u) -> Sleep(%u) rva %06X", tag, (unsigned)expectMs, (unsigned)newMs, rvaPush);
    return true;
}

static void InstallTimerResolution()
{
    // Clausewitz зовёт timeGetDevCaps и timeBeginPeriod(1) в rva 68B190,
    // но разбирает TIMECAPS как два байта, а не два UINT. На Win32
    // wPeriodMin=1 → после shr 8 проверка max==1 всегда ложна, Begin
    // не вызывается. Sleep(1) тогда округляется до кванта ~15.6 мс.
    HMODULE winmm = LoadLibraryA("winmm.dll");
    if (!winmm)
    {
        Log("Timer: winmm.dll не загрузился");
        return;
    }
    typedef UINT (WINAPI* tTimeBeginPeriod)(UINT);
    tTimeBeginPeriod fn = (tTimeBeginPeriod)GetProcAddress(winmm, "timeBeginPeriod");
    if (!fn)
    {
        Log("Timer: timeBeginPeriod не найден");
        return;
    }
    UINT err = fn(1);
    Log("Timer: timeBeginPeriod(1) = %u", err);

    g_timeGetTime = (tTimeGetTime)GetProcAddress(winmm, "timeGetTime");

    HMODULE ntdll = GetModuleHandleA("ntdll.dll");
    if (!ntdll)
        return;
    typedef LONG (NTAPI* tNtSetTimerResolution)(ULONG, BOOLEAN, ULONG*);
    tNtSetTimerResolution ntSet = (tNtSetTimerResolution)GetProcAddress(ntdll, "NtSetTimerResolution");
    if (!ntSet)
        return;
    ULONG cur = 0;
    LONG st = ntSet(10000, TRUE, &cur);
    Log("Timer: NtSetTimerResolution(1ms) status=%08X cur=%u", st, cur);
}

static void InstallMainLoopSleep0()
{
    // 6A 00 EB 02 6A 64 FF 15 [Sleep IAT] — ветка Sleep(0) vs Sleep(100).
    // 3.15: Sleep(0) оставляем хосту. Раньше оба плеча ставили в 1 мс,
    // и без рабочего timeBeginPeriod это давало потолок ~40 FPS.
    int ms = g_cfg.mainLoopSleepMs;
    if (ms < 0)
        ms = 0;
    if (ms > 127)
        ms = 127;

    unsigned char* a = (unsigned char*)(g_base + RVA_MAIN_SLEEP_A);
    unsigned char* b = (unsigned char*)(g_base + RVA_MAIN_SLEEP_B);
    if (a[-4] != 0x6A || a[-3] != 0x00 || a[-2] != 0xEB || a[-1] != 0x02 ||
        b[-4] != 0x6A || b[-3] != 0x00 || b[-2] != 0xEB || b[-1] != 0x02)
    {
        Log("MainLoopSleep0: префикс 6A 00 EB 02 не совпал");
        return;
    }
    PatchImm8Sleep(RVA_MAIN_SLEEP_A, 100, (unsigned char)ms, "MainLoopSleep0");
    PatchImm8Sleep(RVA_MAIN_SLEEP_B, 100, (unsigned char)ms, "MainLoopSleep0");
}

static void InstallHighPriority()
{
    if (SetPriorityClass(GetCurrentProcess(), ABOVE_NORMAL_PRIORITY_CLASS))
        Log("CPU: priority ABOVE_NORMAL");
    else
        Log("CPU: SetPriorityClass failed %u", GetLastError());

    HMODULE k32 = GetModuleHandleA("kernel32.dll");
    if (!k32)
        return;

    typedef BOOL (WINAPI* tSetProcessInformation)(HANDLE, int, LPVOID, DWORD);
    tSetProcessInformation fn = (tSetProcessInformation)GetProcAddress(k32, "SetProcessInformation");
    if (!fn)
        return;

    struct PowerThrottle
    {
        ULONG Version;
        ULONG ControlMask;
        ULONG StateMask;
    } state;
    state.Version = 1;
    state.ControlMask = 0x1; // PROCESS_POWER_THROTTLING_EXECUTION_SPEED
    state.StateMask = 0;
    if (fn(GetCurrentProcess(), 4, &state, sizeof(state)))
        Log("CPU: power throttling off");
}

static bool ShouldClampSleep(DWORD ms)
{
    // 30/35 — аудио около 00A63Bxx. Остальное 16..50 мс: кадровая
    // пауза часто Sleep(40-elapsed), не ровно 40.
    if (ms < 16 || ms > 50)
        return false;
    if (ms == 30 || ms == 35)
        return false;
    return true;
}

struct SockTimeVal
{
    long tv_sec;
    long tv_usec;
};

static void NoteSelect(DWORD rva, long sec, long usec, int clamped)
{
    LONG n = g_seenSelectN;
    for (LONG i = 0; i < n && i < (LONG)(sizeof(g_seenSelectRva) / sizeof(g_seenSelectRva[0])); ++i)
    {
        if (g_seenSelectRva[i] == rva)
            return;
    }
    LONG idx = InterlockedIncrement(&g_seenSelectN) - 1;
    if (idx < 0 || idx >= (LONG)(sizeof(g_seenSelectRva) / sizeof(g_seenSelectRva[0])))
        return;
    g_seenSelectRva[idx] = rva;
    LogDbg("Select: rva %06X timeout %ld.%06ld%s",
        rva, sec, usec, clamped ? " -> 1мс" : "");
}

static int WINAPI HookSelect(int nfds, void* r, void* w, void* e, SockTimeVal* tv)
{
    DWORD ret = (DWORD)(DWORD_PTR)_ReturnAddress();
    DWORD rva = (g_base && ret >= g_base && ret < g_base + g_imageSize) ? ret - g_base : 0;
    long sec = tv ? tv->tv_sec : 0;
    long usec = tv ? tv->tv_usec : 0;
    bool mixer = rva >= 0x689C00 && rva < 0x68C000;
    SockTimeVal localTv;
    SockTimeVal* useTv = tv;
    if (!tv)
    {
        static LONG loggedNull = 0;
        if (InterlockedCompareExchange(&loggedNull, 1, 0) == 0)
            LogDbg("Select: NULL timeout (блокирующий) rva %06X", rva);
    }
    // 3.24: только микшер 0x68B47D / диапазон 689C00-68C000.
    // Таймаут копируем — поле timeval в объекте игры не трогаем.
    if (tv && mixer && (sec > 0 || usec > 2000))
    {
        NoteSelect(rva, sec, usec, 1);
        localTv.tv_sec = 0;
        localTv.tv_usec = 1000;
        useTv = &localTv;
    }
    else if (tv && (sec || usec > 0))
        NoteSelect(rva, sec, usec, 0);
    return g_realSelect ? g_realSelect(nfds, r, w, e, useTv) : -1;
}

static void InstallSelectHook()
{
    HMODULE exe = GetModuleHandleA(NULL);
    if (HookIatOrdinal(exe, "ws2_32.dll", 18, (void*)HookSelect, (void**)&g_realSelect) ||
        HookIatOrdinal(exe, "WS2_32.dll", 18, (void*)HookSelect, (void**)&g_realSelect))
        Log("Select: ws2_32.select перехвачен (микшер 68B47D >2мс -> 1мс, timeval копия)");
    else
        Log("Select: IAT select не найден");
}

static void NoteWfso(DWORD rva, DWORD origMs, DWORD newMs)
{
    LONG n = g_seenWfsoN;
    for (LONG i = 0; i < n && i < (LONG)(sizeof(g_seenWfsoRva) / sizeof(g_seenWfsoRva[0])); ++i)
    {
        if (g_seenWfsoRva[i] == rva && g_seenWfsoMs[i] == origMs)
            return;
    }
    LONG idx = InterlockedIncrement(&g_seenWfsoN) - 1;
    if (idx < 0 || idx >= (LONG)(sizeof(g_seenWfsoRva) / sizeof(g_seenWfsoRva[0])))
        return;
    g_seenWfsoRva[idx] = rva;
    g_seenWfsoMs[idx] = origMs;
    LogDbg("WFSO: timeout %u rva %06X -> %u", origMs, rva, newMs);
}

static DWORD WINAPI HookWaitForSingleObject(HANDLE h, DWORD ms)
{
    DWORD orig = ms;
    DWORD ret = (DWORD)(DWORD_PTR)_ReturnAddress();
    DWORD rva = (g_base && ret >= g_base && ret < g_base + g_imageSize) ? ret - g_base : 0;
    if (g_cfg.removeSleepers && ms != INFINITE && ShouldClampSleep(ms))
    {
        int nms = g_cfg.mpClientSleepMs;
        if (nms < 0)
            nms = 0;
        if (nms > 127)
            nms = 127;
        ms = (DWORD)nms;
    }
    if (orig != INFINITE && orig <= 2000)
        NoteWfso(rva, orig, ms);
    return g_realWFSO ? g_realWFSO(h, ms) : WAIT_FAILED;
}

// WFSO IAT: часть PATCH_MP_CLIENT_SLEEP (ожидания pump через WFSO).
// Использует уже существующий HookWaitForSingleObject / g_realWFSO.
static void InstallWfsoHook()
{
    HMODULE exe = GetModuleHandleA(NULL);
    HMODULE k32 = GetModuleHandleA("kernel32.dll");
    if (k32 && !g_realWFSO)
        g_realWFSO = (tWaitForSingleObject)GetProcAddress(k32, "WaitForSingleObject");
    if (HookIat(exe, "kernel32.dll", "WaitForSingleObject", (void*)HookWaitForSingleObject, (void**)&g_realWFSO))
        Log("WFSO: WaitForSingleObject exe перехвачен (16-50мс -> %d, INFINITE не трогаем)",
            g_cfg.mpClientSleepMs);
    else
        Log("WFSO: IAT WaitForSingleObject не найден");
}

static const unsigned char POP_DAILY_SIG[9] =
    { 0x55, 0x8B, 0xEC, 0x64, 0xA1, 0x00, 0x00, 0x00, 0x00 };

static const int POP_QUANTIZE_OFFS[] =
{
    0x118, 0x120, 0x128, 0x130, 0x138, 0x140,
    0x180, 0x1B0, 0x1C8,
    0x1D8, 0x1E0, 0x1E8, 0x1F0, 0x1F8, 0x200, 0x208, 0x210, 0x218,
    0x250
};

static const int POP_QUANTIZE_OFFS_N = sizeof(POP_QUANTIZE_OFFS) / sizeof(POP_QUANTIZE_OFFS[0]);

static void QuantizeFixed15(void* slot)
{
    int keep = g_cfg.popQuantizeKeepBits;
    if (keep >= 15)
        return;
    if (keep < 0)
        keep = 0;

    unsigned drop = (unsigned)(15 - keep);
    __int64 v = *(__int64*)slot;
    __int64 bias = 1i64 << (drop - 1);
    if (v >= 0)
        v = ((v + bias) >> drop) << drop;
    else
        v = ((v - bias) >> drop) << drop;
    *(__int64*)slot = v;
}

static bool LooksLikePop(void* p)
{
    // FUN_00485E40 is entered with a junk ECX (often 1): reading it raised an access violation on every call
    // (two per call, about 700 per game day), which cost far more than the quantizing itself
    if ((DWORD_PTR)p < 0x10000)
        return false;
    __try
    {
        return *(int*)((char*)p + 8) == POP_ID_TYPE;
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        return false;
    }
}

static void QuantizeOnePop(void* pop)
{
    if (!LooksLikePop(pop))
        return;
    __try
    {
        for (int i = 0; i < POP_QUANTIZE_OFFS_N; ++i)
            QuantizeFixed15((char*)pop + POP_QUANTIZE_OFFS[i]);
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
    }
}

static void QuantizePopObject(void* obj)
{
    if ((DWORD_PTR)obj < 0x10000)
        return;

    if (LooksLikePop(obj))
    {
        int n = 0;
        void* p = obj;
        while (p && n < 400000)
        {
            QuantizeOnePop(p);
            ++n;
            __try { p = *(void**)((char*)p + 0x27C); }
            __except (EXCEPTION_EXECUTE_HANDLER) { break; }
            if (p == obj)
                break;
        }
        return;
    }

    void** begin = 0;
    void** end = 0;
    __try
    {
        begin = *(void***)((char*)obj + 0x44);
        end = *(void***)((char*)obj + 0x48);
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        return;
    }

    if (!begin || !end || end < begin)
        return;

    int count = (int)(end - begin);
    if (count > 0 && count < 500000 && LooksLikePop(*begin))
    {
        for (void** it = begin; it < end; ++it)
            QuantizeOnePop(*it);
        return;
    }

    int bytes = (int)((char*)end - (char*)begin);
    if (bytes >= POP_STRIDE && (bytes % POP_STRIDE) == 0 && bytes / POP_STRIDE < 500000
        && LooksLikePop(begin))
    {
        char* p = (char*)begin;
        char* e = (char*)end;
        for (; p < e; p += POP_STRIDE)
            QuantizeOnePop(p);
    }
}

static void AfterPopDaily()
{
    PinFpu();
    QuantizePopObject(g_popDailyArg0);
    if (g_popDailyEcx != g_popDailyArg0)
        QuantizePopObject(g_popDailyEcx);
}

__declspec(naked) static void PopDailyAfterThunk()
{
    __asm {
        pushad
        call AfterPopDaily
        popad
        jmp dword ptr [g_popDailyRet]
    }
}

__declspec(naked) static void PopDailyEntryThunk()
{
    __asm {
        mov dword ptr [g_popDailyEcx], ecx
        mov eax, dword ptr [esp + 4]
        mov dword ptr [g_popDailyArg0], eax
        pop dword ptr [g_popDailyRet]
        push offset PopDailyAfterThunk
        jmp dword ptr [g_popDailyTramp]
    }
}

static bool InstallPopQuantize()
{
    if (g_cfg.popQuantizeKeepBits >= 15)
    {
        Log("PopQuantize: KEEP_BITS>=15 - квантование выключено");
        return false;
    }

    unsigned char* hook = (unsigned char*)(g_base + RVA_POP_DAILY);
    if (memcmp(hook, POP_DAILY_SIG, sizeof(POP_DAILY_SIG)) != 0)
    {
        Log("PopQuantize: сигнатура FUN_00485E40 не совпала");
        return false;
    }

    unsigned char* cave = (unsigned char*)VirtualAlloc(
        0, 32, MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);
    if (!cave)
        return false;

    memcpy(cave, hook, 9);
    cave[9] = 0xE9;
    *(DWORD*)(cave + 10) = (DWORD)(hook + 9) - (DWORD)(cave + 14);
    g_popDailyTramp = cave;

    unsigned char patch[9];
    patch[0] = 0xE9;
    *(DWORD*)(patch + 1) = (DWORD)(DWORD_PTR)&PopDailyEntryThunk - ((DWORD)hook + 5);
    memset(patch + 5, 0x90, 4);

    DWORD oldProtect = 0;
    if (!VirtualProtect(hook, sizeof(patch), PAGE_EXECUTE_READWRITE, &oldProtect))
        return false;
    memcpy(hook, patch, sizeof(patch));
    VirtualProtect(hook, sizeof(patch), oldProtect, &oldProtect);

    Log("PopQuantize: FUN_00485E40, keep_bits=%d", g_cfg.popQuantizeKeepBits);
    return true;
}

static void MpClientPumpIdle()
{
    DWORD ms = (DWORD)g_cfg.mpClientSleepMs;
    if ((int)ms < 0)
        ms = 0;
    if (ms > 127)
        ms = 1;
    if (g_realSleep)
        g_realSleep(ms);
    else
    {
        HMODULE k32 = GetModuleHandleA("kernel32.dll");
        tSleep s = k32 ? (tSleep)GetProcAddress(k32, "Sleep") : 0;
        if (s)
            s(ms);
    }
}

static bool InstallMpClientSleep()
{
    if (!g_realSleep)
    {
        HMODULE k32 = GetModuleHandleA("kernel32.dll");
        if (k32)
            g_realSleep = (tSleep)GetProcAddress(k32, "Sleep");
    }
    unsigned char* p = (unsigned char*)(g_base + RVA_MP_CLIENT_SLEEP);
    DWORD iat = g_base + RVA_SLEEP_IAT;
    if (p[0] != 0x6A || (p[1] != 40 && p[1] != (unsigned char)g_cfg.mpClientSleepMs) ||
        p[2] != 0xFF || p[3] != 0x15 || *(DWORD*)(p + 4) != iat)
    {
        Log("MpClientSleep: сигнатура Sleep не совпала rva %06X (%02X %02X %02X %02X)",
            RVA_MP_CLIENT_SLEEP, p[0], p[1], p[2], p[3]);
        return false;
    }

    unsigned char expectMs = p[1];
    unsigned char patch[8];
    patch[0] = 0xE8;
    *(DWORD*)(patch + 1) = (DWORD)(DWORD_PTR)&MpClientPumpIdle - ((DWORD)(DWORD_PTR)p + 5);
    patch[5] = 0x90;
    patch[6] = 0x90;
    patch[7] = 0x90;

    DWORD oldProtect = 0;
    if (!VirtualProtect(p, sizeof(patch), PAGE_EXECUTE_READWRITE, &oldProtect))
        return false;
    memcpy(p, patch, sizeof(patch));
    VirtualProtect(p, sizeof(patch), oldProtect, &oldProtect);

    Log("MpClientSleep: pump Sleep(%u) -> Sleep(%d) rva %06X",
        (unsigned)expectMs, g_cfg.mpClientSleepMs, RVA_MP_CLIENT_SLEEP);
    return true;
}


// ---------------------------------------------------------------
// code patching helpers (copies of the core ones)
// ---------------------------------------------------------------

static bool StealToTrampoline(DWORD rva, unsigned steal, unsigned char* tramp, int trampSize,
    const unsigned char* expect, void* hook, void** orig, const char* tag)
{
    unsigned char* src = (unsigned char*)(g_base + rva);
    if (steal < 5 || steal > 16 || trampSize < (int)(steal + 5))
        return false;
    if (memcmp(src, expect, steal) != 0)
    {
        Log("%s: сигнатура не совпала rva %06X (%02X %02X %02X %02X)",
            tag, rva, src[0], src[1], src[2], src[3]);
        return false;
    }

    DWORD old = 0;
    if (!VirtualProtect(tramp, trampSize, PAGE_EXECUTE_READWRITE, &old))
        return false;
    memcpy(tramp, src, steal);
    tramp[steal] = 0xE9;
    *(DWORD*)(tramp + steal + 1) = (DWORD)(src + steal) - ((DWORD)(tramp + steal + 5));
    *orig = tramp;

    if (!VirtualProtect(src, steal, PAGE_EXECUTE_READWRITE, &old))
        return false;
    unsigned char jmp[16];
    memset(jmp, 0x90, steal);
    jmp[0] = 0xE9;
    *(DWORD*)(jmp + 1) = (DWORD)(DWORD_PTR)hook - ((DWORD)src + 5);
    memcpy(src, jmp, steal);
    VirtualProtect(src, steal, old, &old);
    FlushInstructionCache(GetCurrentProcess(), src, steal);
    FlushInstructionCache(GetCurrentProcess(), tramp, trampSize);
    LogDbg("%s: idle rva %06X", tag, rva);
    return true;
}
// Mid-CALL wrap: jmp на хук, который сам вызывает оригинал и возвращается
// на src+n. Нельзя StealToTrampoline — tramp с E8+jmp-after не возвращает.
static bool PlantMidJump(DWORD rva, unsigned n, const unsigned char* expect, void* hook, const char* tag)
{
    unsigned char* src = (unsigned char*)(g_base + rva);
    if (n < 5 || n > 16)
        return false;
    if (memcmp(src, expect, n) != 0)
    {
        Log("%s: сигнатура не совпала rva %06X (%02X %02X %02X %02X)",
            tag, rva, src[0], src[1], src[2], src[3]);
        return false;
    }
    DWORD old = 0;
    if (!VirtualProtect(src, n, PAGE_EXECUTE_READWRITE, &old))
        return false;
    unsigned char jmp[16];
    memset(jmp, 0x90, n);
    jmp[0] = 0xE9;
    *(DWORD*)(jmp + 1) = (DWORD)(DWORD_PTR)hook - ((DWORD)src + 5);
    memcpy(src, jmp, n);
    VirtualProtect(src, n, old, &old);
    FlushInstructionCache(GetCurrentProcess(), src, n);
    LogDbg("%s: mid rva %06X n=%u", tag, rva, n);
    return true;
}

// ---------------------------------------------------------------
// FIX_ARMY_WINDOW_LAG and the idle / army-window diagnostics (moved from V2TechButton.cpp in 6.26)
// ---------------------------------------------------------------
static volatile LONG       g_presentFrames = 0;
static volatile LONG       g_presentWaitMs = 0;
static volatile LONG       g_presentWaitMax = 0;
static volatile LONG       g_sleepCalls = 0;
static volatile LONG       g_sleepSumMs = 0;
static volatile LONG       g_tgtCalls = 0;
static volatile LONG       g_selectCalls = 0;
static volatile LONG       g_recvCalls = 0;
static volatile LONG       g_recvSumMs = 0;
static volatile LONG       g_wfsoCalls = 0;
static volatile LONG       g_wfsoSumMs = 0;
static volatile LONG       g_qpcCalls = 0;
static volatile LONG       g_idleEu3N = 0;
static volatile LONG       g_idleEu3Ms = 0;
static volatile LONG       g_idleNudgeN = 0;
static volatile LONG       g_idleNudgeMs = 0;
static volatile LONG       g_idleIngameN = 0;
static volatile LONG       g_idleIngameMs = 0;
static volatile LONG       g_idleIngameMax = 0;
static volatile LONG       g_selMainN = 0;
static volatile LONG       g_selMainMs = 0;
static volatile LONG       g_gapToIdleMs = 0;
static volatile LONG       g_gapToPresentMs = 0;
static volatile LONG       g_stallSumMs = 0;
static volatile LONG       g_stallMaxMs = 0;
static volatile LONG       g_dirtyN = 0;
static volatile LONG       g_dirtyUs = 0;
static volatile LONG       g_dirtyMax = 0;
static volatile LONG       g_pickN = 0;
static volatile LONG       g_pickUs = 0;
static volatile LONG       g_moveN = 0;
static volatile LONG       g_moveUs = 0;
static volatile LONG       g_projSkipN = 0;
static volatile LONG       g_uvN = 0;
static volatile LONG       g_uvUs = 0;
static volatile LONG       g_uvReuseN = 0;
static volatile LONG       g_uvPoolLive = 0;
static volatile LONG       g_uvPoolBusy = 0;
static volatile LONG       g_projN = 0;
static volatile LONG       g_projUs = 0;
static volatile LONG       g_ntfN = 0;
static volatile LONG       g_ntfUs = 0;
static volatile LONG       g_uvSkipRebuildN = 0;
static volatile LONG       g_uvSkipLocN = 0;
static volatile LONG       g_evtN = 0;
static volatile LONG       g_evtUs = 0;
static volatile LONG       g_dlgN = 0;
static volatile LONG       g_dlgUs = 0;
static volatile LONG       g_infN = 0;
static volatile LONG       g_infUs = 0;
static volatile LONG       g_mapN = 0;
static volatile LONG       g_mapUs = 0;
static volatile LONG       g_winReuseN = 0;
static volatile LONG       g_ovlN = 0;
static volatile LONG       g_ovlUs = 0;
static volatile LONG       g_ovlMax = 0;
static volatile LONG       g_camN = 0;
static volatile LONG       g_camUs = 0;
static volatile LONG       g_camMax = 0;
static volatile LONG       g_mtxN = 0;
static volatile LONG       g_mtxUs = 0;
static volatile LONG       g_mtxMax = 0;
static volatile LONG       g_vwN = 0;
static volatile LONG       g_vwUs = 0;
static volatile LONG       g_vwMax = 0;
static volatile LONG       g_icoN = 0;
static volatile LONG       g_icoUs = 0;
static volatile LONG       g_icoMax = 0;
static volatile LONG       g_gfxN = 0;
static volatile LONG       g_gfxUs = 0;
static volatile LONG       g_gfxMax = 0;
static volatile LONG       g_preN = 0;
static volatile LONG       g_preUs = 0;
static volatile LONG       g_preMax = 0;
static volatile LONG       g_gui2N = 0;
static volatile LONG       g_gui2Us = 0;
static volatile LONG       g_gui2Max = 0;
static volatile LONG       g_clnN = 0;
static volatile LONG       g_clnUs = 0;
static volatile LONG       g_clnMax = 0;
static volatile LONG       g_tailN = 0;
static volatile LONG       g_tailUs = 0;
static volatile LONG       g_tailMax = 0;
static volatile LONG       g_hdN = 0;
static volatile LONG       g_hdUs = 0;
static volatile LONG       g_hdMax = 0;
static volatile LONG       g_aftN = 0;
static volatile LONG       g_aftUs = 0;
static volatile LONG       g_aftMax = 0;
static volatile LONG       g_lkpN = 0;
static volatile LONG       g_lkpUs = 0;
static volatile LONG       g_lkpMax = 0;
static volatile LONG       g_spikeLogs = 0;
static LONG                g_idleDepth = 0;
static LONGLONG            g_idleQ0 = 0;
static LONG                g_idleHeadMark = 0;
static LONG                g_idleOvlMark = 0;
static LONG                g_idleCamLoc = 0;
static LONG                g_idleOvlLoc = 0;
static LONG                g_idleIcoLoc = 0;
static LONG                g_idlePreLoc = 0;
static LONG                g_idleGui2Loc = 0;
static LONG                g_idleStrLoc = 0;
static LONG                g_idleCluLoc = 0;
static LONG                g_idleCamN = 0;
static LONG                g_idleOvlN = 0;
static LONG                g_idleCamLeave0 = 0;
static LONG                g_idleCamLeave1 = 0;
static LONG                g_idleOvlEnter0 = 0;
static LONG                g_idleOvlEnter1 = 0;
static LONG                g_idleOvlLeave0 = 0;
static LONG                g_idleOvlLeave1 = 0;
static LONG                g_idleOvlGapMax = 0;
static LONG                g_idleNestN = 0;
static LONG                g_idleDepthMax = 0;
static LONG                g_idleInCam = 0;
static LONG                g_idleInOvl = 0;
static LONG                g_idlePresCam = 0;
static LONG                g_idlePresOvl = 0;
static LONG                g_idlePresElse = 0;
static LONG                g_idlePeekN = 0;
static LONG                g_idlePeekUs = 0;
static LONG                g_idleDispN = 0;
static LONG                g_idleDispUs = 0;
static DWORD               g_idleTid = 0;
static DWORD               g_idlePeekRva = 0;
static DWORD               g_idleDispRva = 0;
static DWORD               g_idlePresStk[4] = { 0, 0, 0, 0 };
static LONG                g_idlePresStkN = 0;
static LONG                g_idlePumpLoc = 0;
static LONG                g_idlePumpN = 0;
static LONG                g_idlePumpCam = 0;
static LONG                g_idlePumpNest = 0;
static DWORD               g_idlePumpRva = 0;
static DWORD               g_idlePumpStk[4] = { 0, 0, 0, 0 };
static LONG                g_idlePumpStkN = 0;
static LONG                g_idleChkLoc = 0;
static LONG                g_idleChkN = 0;
static LONG                g_idleWckLoc = 0;
static LONG                g_idleWckN = 0;
static LONG                g_idleWckSkip = 0;
static LONG                g_pumpDepth = 0;
static volatile LONG       g_strN = 0;
static volatile LONG       g_strUs = 0;
static volatile LONG       g_strMax = 0;
static volatile LONG       g_cluN = 0;
static volatile LONG       g_cluUs = 0;
static volatile LONG       g_cluMax = 0;
static volatile LONG       g_pumpN = 0;
static volatile LONG       g_pumpUs = 0;
static volatile LONG       g_pumpMax = 0;
static volatile LONG       g_chkN = 0;
static volatile LONG       g_chkUs = 0;
static volatile LONG       g_chkMax = 0;
static volatile LONG       g_wckN = 0;
static volatile LONG       g_wckUs = 0;
static volatile LONG       g_wckMax = 0;
static volatile LONG       g_wckSkipN = 0;
static volatile LONG       g_camSkipN = 0;
static volatile LONG       g_bb0N = 0;
static volatile LONG       g_bb0Us = 0;
static volatile LONG       g_bb0Max = 0;
static volatile LONG       g_bb0hN = 0;
static volatile LONG       g_bb0hUs = 0;
static volatile LONG       g_bb0hMax = 0;
static volatile LONG       g_bb0tN = 0;
static volatile LONG       g_bb0tUs = 0;
static volatile LONG       g_bb0tMax = 0;
static volatile LONG       g_rorgN = 0;
static volatile LONG       g_rorgUs = 0;
static volatile LONG       g_rorgMax = 0;
static volatile LONG       g_rbldN = 0;
static volatile LONG       g_rbldUs = 0;
static volatile LONG       g_rbldMax = 0;
static volatile LONG       g_bb0sN = 0;
static volatile LONG       g_bb0sUs = 0;
static volatile LONG       g_bb0sMax = 0;
static volatile LONG       g_bb0fN = 0;
static volatile LONG       g_bb0fUs = 0;
static volatile LONG       g_bb0fMax = 0;
static volatile LONG       g_bb0lN = 0;
static volatile LONG       g_bb0lUs = 0;
static volatile LONG       g_bb0lMax = 0;
static volatile LONG       g_bb0gN = 0;
static volatile LONG       g_bb0gUs = 0;
static volatile LONG       g_bb0gMax = 0;
static volatile LONG       g_bb0oN = 0;
static volatile LONG       g_bb0oUs = 0;
static volatile LONG       g_bb0oMax = 0;
static volatile LONG       g_bb0uN = 0;
static volatile LONG       g_bb0uUs = 0;
static volatile LONG       g_bb0uMax = 0;
static volatile LONG       g_bb0chN = 0;
static volatile LONG       g_bb0chUs = 0;
static volatile LONG       g_bb0chMax = 0;
static volatile LONG       g_bb0c1N = 0;
static volatile LONG       g_bb0c1Us = 0;
static volatile LONG       g_bb0c1Max = 0;
static volatile LONG       g_bb0c2N = 0;
static volatile LONG       g_bb0c2Us = 0;
static volatile LONG       g_bb0c2Max = 0;
static volatile LONG       g_bb0c3N = 0;
static volatile LONG       g_bb0c3Us = 0;
static volatile LONG       g_bb0c3Max = 0;
static volatile LONG       g_bb0c4N = 0;
static volatile LONG       g_bb0c4Us = 0;
static volatile LONG       g_bb0c4Max = 0;
static volatile LONG       g_bb0cxN = 0;
static volatile LONG       g_bb0cxUs = 0;
static volatile LONG       g_bb0cxMax = 0;
static volatile LONG       g_bb0rbN = 0;
static volatile LONG       g_bb0rbUs = 0;
static volatile LONG       g_bb0rbMax = 0;
static volatile LONG       g_bb0eqAN = 0;
static volatile LONG       g_bb0eqAUs = 0;
static volatile LONG       g_bb0eqAMax = 0;
static volatile LONG       g_bb0eqBN = 0;
static volatile LONG       g_bb0eqBUs = 0;
static volatile LONG       g_bb0eqBMax = 0;
static volatile LONG       g_bb0eqHN = 0;
static volatile LONG       g_bb0eqHUs = 0;
static volatile LONG       g_bb0eqHMax = 0;
static volatile LONG       g_bb0eqVN = 0;
static volatile LONG       g_bb0eqVUs = 0;
static volatile LONG       g_bb0eqVMax = 0;
static volatile LONG       g_bb0eqVpN = 0;
static volatile LONG       g_bb0eqVpUs = 0;
static volatile LONG       g_bb0eqVpMax = 0;
static volatile LONG       g_bb0eqVvN = 0;
static volatile LONG       g_bb0eqVvUs = 0;
static volatile LONG       g_bb0eqVvMax = 0;
static volatile LONG       g_bb0eqVlN = 0;
static volatile LONG       g_bb0eqVlUs = 0;
static volatile LONG       g_bb0eqVlMax = 0;
static volatile LONG       g_bb0eqTaN = 0;
static volatile LONG       g_bb0eqTaUs = 0;
static volatile LONG       g_bb0eqTaMax = 0;
static volatile LONG       g_bb0eqTbN = 0;
static volatile LONG       g_bb0eqTbUs = 0;
static volatile LONG       g_bb0eqTbMax = 0;
static volatile LONG       g_bb0eqTbCN = 0;
static volatile LONG       g_bb0eqTbCUs = 0;
static volatile LONG       g_bb0eqTbCMax = 0;
static volatile LONG       g_bb0eqTbNstN = 0;
static volatile LONG       g_bb0eqTbNstUs = 0;
static volatile LONG       g_bb0eqTbNstMax = 0;
static volatile LONG       g_bb0eqNstAN = 0;
static volatile LONG       g_bb0eqNstAUs = 0;
static volatile LONG       g_bb0eqNstAMax = 0;
static volatile LONG       g_bb0eqNstBN = 0;
static volatile LONG       g_bb0eqNstBUs = 0;
static volatile LONG       g_bb0eqNstBMax = 0;
static volatile LONG       g_tbCntN = 0;
static volatile LONG       g_tbCntSum = 0;
static volatile LONG       g_tbCntMax = 0;
static volatile LONG       g_tbEarlyN = 0;
static volatile LONG       g_tbFullN = 0;
static volatile LONG       g_nstSkipN = 0;
static volatile LONG       g_nstWorkN = 0;
static volatile LONG       g_nstCheapN = 0;
static volatile LONG       g_bb0eqTcN = 0;
static volatile LONG       g_bb0eqTcUs = 0;
static volatile LONG       g_bb0eqTcMax = 0;
static volatile LONG       g_bb0eqTdN = 0;
static volatile LONG       g_bb0eqTdUs = 0;
static volatile LONG       g_bb0eqTdMax = 0;
static volatile LONG       g_bb0eqVwN = 0;
static volatile LONG       g_bb0eqVwUs = 0;
static volatile LONG       g_bb0eqVwMax = 0;
static volatile LONG       g_bb0eqVxN = 0;
static volatile LONG       g_bb0eqVxUs = 0;
static volatile LONG       g_bb0eqVxMax = 0;
static volatile LONG       g_bb0eqVxHit = 0;
static volatile LONG       g_bb0eqSN = 0;
static volatile LONG       g_bb0eqSUs = 0;
static volatile LONG       g_bb0eqSMax = 0;
static volatile LONG       g_bb0eqRN = 0;
static volatile LONG       g_bb0eqRUs = 0;
static volatile LONG       g_bb0eqRMax = 0;
static volatile LONG       g_syncMissN = 0;
static volatile LONG       g_eqVSkipN = 0;
static volatile LONG       g_uvFlushExN = 0;
static void*               g_uvLastIdler = 0;
static volatile DWORD      g_presentTid = 0;
static void UvFlushSinglePanel();
static DWORD               g_lastPresentEnd = 0;
static DWORD               g_lastIdleEnd = 0;
static DWORD               g_presentStamp = 0;
static DWORD               g_seenPresentRva = 0;
static volatile LONG g_dllReady = 0;






static DWORD NowMs()
{
    if (!g_timeGetTime)
    {
        // timeBeginPeriod(1) is set by ccore_performance_patch.dll; here we only need the 1 ms clock
        static bool tried = false;
        if (!tried)
        {
            tried = true;
            HMODULE winmm = GetModuleHandleA("winmm.dll");
            if (winmm)
                g_timeGetTime = (tTimeGetTime)GetProcAddress(winmm, "timeGetTime");
        }
    }
    if (g_timeGetTime)
        return g_timeGetTime();
    return g_realGetTickCount ? g_realGetTickCount() : GetTickCount();
}

static DWORD QpcUs(LONGLONG t0)
{
    static LARGE_INTEGER freq;
    if (!freq.QuadPart)
        QueryPerformanceFrequency(&freq);
    LARGE_INTEGER v;
    v.QuadPart = 0;
    QueryPerformanceCounter(&v);
    if (!freq.QuadPart)
        return 0;
    LONGLONG dt = v.QuadPart - t0;
    if (dt < 0)
        dt = 0;
    return (DWORD)((dt * 1000000) / freq.QuadPart);
}

static void AccUsVal(volatile LONG* n, volatile LONG* us, volatile LONG* mx, LONG dt)
{
    if (dt < 0)
        dt = 0;
    InterlockedIncrement(n);
    InterlockedExchangeAdd(us, dt);
    if (!mx)
        return;
    LONG cur = *mx;
    while (dt > cur)
    {
        LONG prev = InterlockedCompareExchange(mx, dt, cur);
        if (prev == cur)
            break;
        cur = prev;
    }
}

static void AccUs(volatile LONG* n, volatile LONG* us, volatile LONG* mx, LONGLONG t0)
{
    AccUsVal(n, us, mx, (LONG)QpcUs(t0));
}

static void AccUsIdle(volatile LONG* n, volatile LONG* us, volatile LONG* mx, LONGLONG t0, LONG* loc)
{
    LONG dt = (LONG)QpcUs(t0);
    AccUsVal(n, us, mx, dt);
    if (loc && g_idleDepth > 0)
        *loc += dt;
}

static LONG IdleMarkNow()
{
    if (g_idleDepth <= 0 || !g_idleQ0)
        return 0;
    return (LONG)QpcUs(g_idleQ0);
}

static LONGLONG __stdcall DiagNow()
{
    return QpcNow();
}

static void __stdcall AccStr(LONGLONG t0)
{
    LONG dt = (LONG)QpcUs(t0);
    AccUsVal(&g_strN, &g_strUs, &g_strMax, dt);
    if (g_idleDepth > 0)
        g_idleStrLoc += dt;
}

static void __stdcall AccClu(LONGLONG t0)
{
    LONG dt = (LONG)QpcUs(t0);
    AccUsVal(&g_cluN, &g_cluUs, &g_cluMax, dt);
    if (g_idleDepth > 0)
        g_idleCluLoc += dt;
}

static DWORD ExeRvaOf(DWORD addr)
{
    if (g_base && addr >= g_base && addr < g_base + g_imageSize)
        return addr - g_base;
    return 0;
}

static bool IdleOnThisThread()
{
    return g_idleDepth > 0 && g_idleTid && GetCurrentThreadId() == g_idleTid;
}

typedef USHORT (WINAPI* tCSBT)(ULONG, ULONG, PVOID*, PULONG);
static tCSBT GetCsbt()
{
    static tCSBT csbt = 0;
    static int tried = 0;
    if (!tried)
    {
        tried = 1;
        HMODULE k32 = GetModuleHandleA("kernel32.dll");
        if (k32)
        {
            csbt = (tCSBT)GetProcAddress(k32, "RtlCaptureStackBackTrace");
            if (!csbt)
                csbt = (tCSBT)GetProcAddress(k32, "CaptureStackBackTrace");
        }
    }
    return csbt;
}

static void IdleAddStkRva(DWORD rva)
{
    if (!rva || g_idlePresStkN >= 4)
        return;
    if (rva >= 0x595900 && rva < 0x595980)
        return;
    for (LONG i = 0; i < g_idlePresStkN; i++)
    {
        if (g_idlePresStk[i] == rva)
            return;
    }
    g_idlePresStk[g_idlePresStkN++] = rva;
}

static void IdleAddPumpRva(DWORD rva)
{
    if (!rva || g_idlePumpStkN >= 4)
        return;
    if (rva >= 0x5DF2B0 && rva < 0x5DF550)
        return;
    if (rva >= 0x285620 && rva < 0x285780)
        return;
    if (rva >= 0x595900 && rva < 0x595980)
        return;
    for (LONG i = 0; i < g_idlePumpStkN; i++)
    {
        if (g_idlePumpStk[i] == rva)
            return;
    }
    g_idlePumpStk[g_idlePumpStkN++] = rva;
}

static void __stdcall PumpEnter(DWORD retaddr)
{
    if (IdleOnThisThread())
    {
        if (g_pumpDepth > 0)
            g_idlePumpNest++;
        if (!g_idlePumpRva)
            g_idlePumpRva = ExeRvaOf(retaddr);
    }
    g_pumpDepth++;
}

static void __stdcall AccPump(LONGLONG t0)
{
    LONG dt = (LONG)QpcUs(t0);
    AccUsVal(&g_pumpN, &g_pumpUs, &g_pumpMax, dt);
    if (g_pumpDepth > 0)
        g_pumpDepth--;
    if (!IdleOnThisThread())
        return;
    g_idlePumpLoc += dt;
    g_idlePumpN++;
    if (g_idleInCam)
        g_idlePumpCam++;
    if (g_idlePumpStkN >= 4)
        return;
    tCSBT csbt = GetCsbt();
    if (!csbt)
        return;
    void* stk[12];
    USHORT n = csbt(1, 12, stk, 0);
    for (USHORT i = 0; i < n && g_idlePumpStkN < 4; i++)
        IdleAddPumpRva(ExeRvaOf((DWORD)(DWORD_PTR)stk[i]));
}

static void __stdcall AccChk(LONGLONG t0)
{
    LONG dt = (LONG)QpcUs(t0);
    AccUsVal(&g_chkN, &g_chkUs, &g_chkMax, dt);
    if (!IdleOnThisThread())
        return;
    g_idleChkLoc += dt;
    g_idleChkN++;
}

static int __stdcall WckEnter(DWORD retaddr)
{
    DWORD rva = ExeRvaOf(retaddr);
    if (false && IdleOnThisThread() && rva == 0x283AB6)
    {
        InterlockedIncrement(&g_wckSkipN);
        if (IdleOnThisThread())
            g_idleWckSkip++;
        return 1;
    }
    return 0;
}

static void __stdcall AccWck(LONGLONG t0)
{
    LONG dt = (LONG)QpcUs(t0);
    AccUsVal(&g_wckN, &g_wckUs, &g_wckMax, dt);
    if (!IdleOnThisThread())
        return;
    g_idleWckLoc += dt;
    g_idleWckN++;
}

static void IdleNotePresent()
{
    if (!IdleOnThisThread())
        return;
    if (g_idleInCam)
        g_idlePresCam++;
    else if (g_idleInOvl)
        g_idlePresOvl++;
    else
        g_idlePresElse++;
    if (g_idlePresStkN >= 4)
        return;
    tCSBT csbt = GetCsbt();
    IdleAddStkRva(ExeRvaOf((DWORD)(DWORD_PTR)_ReturnAddress()));
    if (!csbt)
        return;
    void* stk[12];
    USHORT n = csbt(1, 12, stk, 0);
    for (USHORT i = 0; i < n && g_idlePresStkN < 4; i++)
        IdleAddStkRva(ExeRvaOf((DWORD)(DWORD_PTR)stk[i]));
}




// Present, before the real call: army-window panel flush and the DEBUG_LOG statistics (these two functions were exports of
// creatinecore.dll in 6.25; HookPresent below calls them around the real Present).
static void __cdecl CCore_PresentBegin(DWORD* t0Out)
{
    g_presentTid = GetCurrentThreadId();
    UvFlushSinglePanel();
    DWORD t0 = NowMs();
    if (g_lastPresentEnd)
    {
        DWORD stall = t0 - g_lastPresentEnd;
        if (stall < 4000)
        {
            InterlockedExchangeAdd(&g_stallSumMs, (LONG)stall);
            LONG oldMax = g_stallMaxMs;
            while ((LONG)stall > oldMax)
            {
                LONG prev = InterlockedCompareExchange(&g_stallMaxMs, (LONG)stall, oldMax);
                if (prev == oldMax)
                    break;
                oldMax = prev;
            }
        }
    }
    if (g_lastIdleEnd)
    {
        DWORD gap = t0 - g_lastIdleEnd;
        if (gap < 200)
            InterlockedExchangeAdd(&g_gapToPresentMs, (LONG)gap);
    }
    *t0Out = t0;
}

static void __cdecl CCore_PresentEnd(DWORD t0)
{
    DWORD wait = NowMs() - t0;
    g_lastPresentEnd = t0 + wait;

    InterlockedExchangeAdd(&g_presentWaitMs, (LONG)wait);
    LONG oldMax = g_presentWaitMax;
    while ((LONG)wait > oldMax)
    {
        LONG prev = InterlockedCompareExchange(&g_presentWaitMax, (LONG)wait, oldMax);
        if (prev == oldMax)
            break;
        oldMax = prev;
    }

    InterlockedIncrement(&g_presentFrames);
    IdleNotePresent();
    DWORD now = t0 + wait;
    DWORD stamp = g_presentStamp;
    if (!g_seenPresentRva)
    {
        DWORD ret = (DWORD)(DWORD_PTR)_ReturnAddress();
        DWORD rva = (g_base && ret >= g_base && ret < g_base + g_imageSize) ? ret - g_base : ret;
        g_seenPresentRva = rva;
        LogDbg("Present: caller rva %08X", rva);
    }
    if (!stamp)
    {
        g_presentStamp = now;
    }
    else if (now - stamp >= 5000)
    {
        g_presentStamp = now;
        LONG frames = InterlockedExchange(&g_presentFrames, 0);
        LONG waitSum = InterlockedExchange(&g_presentWaitMs, 0);
        LONG waitMax = InterlockedExchange(&g_presentWaitMax, 0);
        LONG sleepN = InterlockedExchange(&g_sleepCalls, 0);
        LONG sleepMs = InterlockedExchange(&g_sleepSumMs, 0);
        LONG tgtN = InterlockedExchange(&g_tgtCalls, 0);
        LONG selN = InterlockedExchange(&g_selectCalls, 0);
        LONG recvN = InterlockedExchange(&g_recvCalls, 0);
        LONG recvMs = InterlockedExchange(&g_recvSumMs, 0);
        LONG wfsoN = InterlockedExchange(&g_wfsoCalls, 0);
        LONG wfsoMs = InterlockedExchange(&g_wfsoSumMs, 0);
        LONG qpcN = InterlockedExchange(&g_qpcCalls, 0);
        LONG eu3N = InterlockedExchange(&g_idleEu3N, 0);
        LONG eu3Ms = InterlockedExchange(&g_idleEu3Ms, 0);
        LONG nudgeN = InterlockedExchange(&g_idleNudgeN, 0);
        LONG nudgeMs = InterlockedExchange(&g_idleNudgeMs, 0);
        LONG ingN = InterlockedExchange(&g_idleIngameN, 0);
        LONG ingMs = InterlockedExchange(&g_idleIngameMs, 0);
        LONG ingMax = InterlockedExchange(&g_idleIngameMax, 0);
        LONG selMainN = InterlockedExchange(&g_selMainN, 0);
        LONG selMainMs = InterlockedExchange(&g_selMainMs, 0);
        LONG gapIdle = InterlockedExchange(&g_gapToIdleMs, 0);
        LONG gapPres = InterlockedExchange(&g_gapToPresentMs, 0);
        LONG stallSum = InterlockedExchange(&g_stallSumMs, 0);
        LONG stallMax = InterlockedExchange(&g_stallMaxMs, 0);
        LONG dirtyN = InterlockedExchange(&g_dirtyN, 0);
        LONG dirtyUs = InterlockedExchange(&g_dirtyUs, 0);
        LONG dirtyMax = InterlockedExchange(&g_dirtyMax, 0);
        LONG pickN = InterlockedExchange(&g_pickN, 0);
        LONG pickUs = InterlockedExchange(&g_pickUs, 0);
        LONG moveN = InterlockedExchange(&g_moveN, 0);
        LONG moveUs = InterlockedExchange(&g_moveUs, 0);
        LONG projSkip = InterlockedExchange(&g_projSkipN, 0);
        LONG uvN = InterlockedExchange(&g_uvN, 0);
        LONG uvUs = InterlockedExchange(&g_uvUs, 0);
        LONG uvReuse = InterlockedExchange(&g_uvReuseN, 0);
        LONG projN = InterlockedExchange(&g_projN, 0);
        LONG projUs = InterlockedExchange(&g_projUs, 0);
        LONG ntfN = InterlockedExchange(&g_ntfN, 0);
        LONG ntfUs = InterlockedExchange(&g_ntfUs, 0);
        LONG skipRb = InterlockedExchange(&g_uvSkipRebuildN, 0);
        LONG skipLoc = InterlockedExchange(&g_uvSkipLocN, 0);
        LONG evtN = InterlockedExchange(&g_evtN, 0);
        LONG evtUs = InterlockedExchange(&g_evtUs, 0);
        LONG dlgN = InterlockedExchange(&g_dlgN, 0);
        LONG dlgUs = InterlockedExchange(&g_dlgUs, 0);
        LONG infN = InterlockedExchange(&g_infN, 0);
        LONG infUs = InterlockedExchange(&g_infUs, 0);
        LONG mapN = InterlockedExchange(&g_mapN, 0);
        LONG mapUs = InterlockedExchange(&g_mapUs, 0);
        LONG winReuse = InterlockedExchange(&g_winReuseN, 0);
        LONG ovlN = InterlockedExchange(&g_ovlN, 0);
        LONG ovlUs = InterlockedExchange(&g_ovlUs, 0);
        LONG ovlMax = InterlockedExchange(&g_ovlMax, 0);
        LONG camN = InterlockedExchange(&g_camN, 0);
        LONG camUs = InterlockedExchange(&g_camUs, 0);
        LONG camMax = InterlockedExchange(&g_camMax, 0);
        LONG mtxN = InterlockedExchange(&g_mtxN, 0);
        LONG mtxUs = InterlockedExchange(&g_mtxUs, 0);
        LONG mtxMax = InterlockedExchange(&g_mtxMax, 0);
        LONG vwN = InterlockedExchange(&g_vwN, 0);
        LONG vwUs = InterlockedExchange(&g_vwUs, 0);
        LONG vwMax = InterlockedExchange(&g_vwMax, 0);
        LONG icoN = InterlockedExchange(&g_icoN, 0);
        LONG icoUs = InterlockedExchange(&g_icoUs, 0);
        LONG icoMax = InterlockedExchange(&g_icoMax, 0);
        LONG gfxN = InterlockedExchange(&g_gfxN, 0);
        LONG gfxUs = InterlockedExchange(&g_gfxUs, 0);
        LONG gfxMax = InterlockedExchange(&g_gfxMax, 0);
        LONG preN = InterlockedExchange(&g_preN, 0);
        LONG preUs = InterlockedExchange(&g_preUs, 0);
        LONG preMax = InterlockedExchange(&g_preMax, 0);
        LONG gui2N = InterlockedExchange(&g_gui2N, 0);
        LONG gui2Us = InterlockedExchange(&g_gui2Us, 0);
        LONG gui2Max = InterlockedExchange(&g_gui2Max, 0);
        LONG clnN = InterlockedExchange(&g_clnN, 0);
        LONG clnUs = InterlockedExchange(&g_clnUs, 0);
        LONG clnMax = InterlockedExchange(&g_clnMax, 0);
        LONG tailN = InterlockedExchange(&g_tailN, 0);
        LONG tailUs = InterlockedExchange(&g_tailUs, 0);
        LONG tailMax = InterlockedExchange(&g_tailMax, 0);
        LONG hdN = InterlockedExchange(&g_hdN, 0);
        LONG hdUs = InterlockedExchange(&g_hdUs, 0);
        LONG hdMax = InterlockedExchange(&g_hdMax, 0);
        LONG aftN = InterlockedExchange(&g_aftN, 0);
        LONG aftUs = InterlockedExchange(&g_aftUs, 0);
        LONG aftMax = InterlockedExchange(&g_aftMax, 0);
        LONG lkpN = InterlockedExchange(&g_lkpN, 0);
        LONG lkpUs = InterlockedExchange(&g_lkpUs, 0);
        LONG lkpMax = InterlockedExchange(&g_lkpMax, 0);
        LONG strN = InterlockedExchange(&g_strN, 0);
        LONG strUs = InterlockedExchange(&g_strUs, 0);
        LONG strMax = InterlockedExchange(&g_strMax, 0);
        LONG cluN = InterlockedExchange(&g_cluN, 0);
        LONG cluUs = InterlockedExchange(&g_cluUs, 0);
        LONG cluMax = InterlockedExchange(&g_cluMax, 0);
        LONG pmpN = InterlockedExchange(&g_pumpN, 0);
        LONG pmpUs = InterlockedExchange(&g_pumpUs, 0);
        LONG pmpMax = InterlockedExchange(&g_pumpMax, 0);
        LONG chkN = InterlockedExchange(&g_chkN, 0);
        LONG chkUs = InterlockedExchange(&g_chkUs, 0);
        LONG chkMax = InterlockedExchange(&g_chkMax, 0);
        LONG wckN = InterlockedExchange(&g_wckN, 0);
        LONG wckUs = InterlockedExchange(&g_wckUs, 0);
        LONG wckMax = InterlockedExchange(&g_wckMax, 0);
        LONG wckSkip = InterlockedExchange(&g_wckSkipN, 0);
        LONG camSkip = InterlockedExchange(&g_camSkipN, 0);
        LONG bb0N = InterlockedExchange(&g_bb0N, 0);
        LONG bb0Us = InterlockedExchange(&g_bb0Us, 0);
        LONG bb0Max = InterlockedExchange(&g_bb0Max, 0);
        LONG bb0hN = InterlockedExchange(&g_bb0hN, 0);
        LONG bb0hUs = InterlockedExchange(&g_bb0hUs, 0);
        LONG bb0hMax = InterlockedExchange(&g_bb0hMax, 0);
        LONG bb0tN = InterlockedExchange(&g_bb0tN, 0);
        LONG bb0tUs = InterlockedExchange(&g_bb0tUs, 0);
        LONG bb0tMax = InterlockedExchange(&g_bb0tMax, 0);
        LONG rorgN = InterlockedExchange(&g_rorgN, 0);
        LONG rorgUs = InterlockedExchange(&g_rorgUs, 0);
        LONG rorgMax = InterlockedExchange(&g_rorgMax, 0);
        LONG rbldN = InterlockedExchange(&g_rbldN, 0);
        LONG rbldUs = InterlockedExchange(&g_rbldUs, 0);
        LONG rbldMax = InterlockedExchange(&g_rbldMax, 0);
        LONG bb0sN = InterlockedExchange(&g_bb0sN, 0);
        LONG bb0sUs = InterlockedExchange(&g_bb0sUs, 0);
        LONG bb0sMax = InterlockedExchange(&g_bb0sMax, 0);
        LONG bb0fN = InterlockedExchange(&g_bb0fN, 0);
        LONG bb0fUs = InterlockedExchange(&g_bb0fUs, 0);
        LONG bb0fMax = InterlockedExchange(&g_bb0fMax, 0);
        LONG bb0lN = InterlockedExchange(&g_bb0lN, 0);
        LONG bb0lUs = InterlockedExchange(&g_bb0lUs, 0);
        LONG bb0lMax = InterlockedExchange(&g_bb0lMax, 0);
        LONG bb0gN = InterlockedExchange(&g_bb0gN, 0);
        LONG bb0gUs = InterlockedExchange(&g_bb0gUs, 0);
        LONG bb0gMax = InterlockedExchange(&g_bb0gMax, 0);
        LONG bb0oN = InterlockedExchange(&g_bb0oN, 0);
        LONG bb0oUs = InterlockedExchange(&g_bb0oUs, 0);
        LONG bb0oMax = InterlockedExchange(&g_bb0oMax, 0);
        LONG bb0uN = InterlockedExchange(&g_bb0uN, 0);
        LONG bb0uUs = InterlockedExchange(&g_bb0uUs, 0);
        LONG bb0uMax = InterlockedExchange(&g_bb0uMax, 0);
        LONG bb0chN = InterlockedExchange(&g_bb0chN, 0);
        LONG bb0chUs = InterlockedExchange(&g_bb0chUs, 0);
        LONG bb0chMax = InterlockedExchange(&g_bb0chMax, 0);
        LONG bb0c1N = InterlockedExchange(&g_bb0c1N, 0);
        LONG bb0c1Us = InterlockedExchange(&g_bb0c1Us, 0);
        LONG bb0c1Max = InterlockedExchange(&g_bb0c1Max, 0);
        LONG bb0c2N = InterlockedExchange(&g_bb0c2N, 0);
        LONG bb0c2Us = InterlockedExchange(&g_bb0c2Us, 0);
        LONG bb0c2Max = InterlockedExchange(&g_bb0c2Max, 0);
        LONG bb0c3N = InterlockedExchange(&g_bb0c3N, 0);
        LONG bb0c3Us = InterlockedExchange(&g_bb0c3Us, 0);
        LONG bb0c3Max = InterlockedExchange(&g_bb0c3Max, 0);
        LONG bb0c4N = InterlockedExchange(&g_bb0c4N, 0);
        LONG bb0c4Us = InterlockedExchange(&g_bb0c4Us, 0);
        LONG bb0c4Max = InterlockedExchange(&g_bb0c4Max, 0);
        LONG bb0cxN = InterlockedExchange(&g_bb0cxN, 0);
        LONG bb0cxUs = InterlockedExchange(&g_bb0cxUs, 0);
        LONG bb0cxMax = InterlockedExchange(&g_bb0cxMax, 0);
        LONG bb0rbN = InterlockedExchange(&g_bb0rbN, 0);
        LONG bb0rbUs = InterlockedExchange(&g_bb0rbUs, 0);
        LONG bb0rbMax = InterlockedExchange(&g_bb0rbMax, 0);
        LONG bb0eqAN = InterlockedExchange(&g_bb0eqAN, 0);
        LONG bb0eqAUs = InterlockedExchange(&g_bb0eqAUs, 0);
        LONG bb0eqAMax = InterlockedExchange(&g_bb0eqAMax, 0);
        LONG bb0eqBN = InterlockedExchange(&g_bb0eqBN, 0);
        LONG bb0eqBUs = InterlockedExchange(&g_bb0eqBUs, 0);
        LONG bb0eqBMax = InterlockedExchange(&g_bb0eqBMax, 0);
        LONG bb0eqHN = InterlockedExchange(&g_bb0eqHN, 0);
        LONG bb0eqHUs = InterlockedExchange(&g_bb0eqHUs, 0);
        LONG bb0eqHMax = InterlockedExchange(&g_bb0eqHMax, 0);
        LONG bb0eqVN = InterlockedExchange(&g_bb0eqVN, 0);
        LONG bb0eqVUs = InterlockedExchange(&g_bb0eqVUs, 0);
        LONG bb0eqVMax = InterlockedExchange(&g_bb0eqVMax, 0);
        LONG bb0eqVpN = InterlockedExchange(&g_bb0eqVpN, 0);
        LONG bb0eqVpUs = InterlockedExchange(&g_bb0eqVpUs, 0);
        LONG bb0eqVpMax = InterlockedExchange(&g_bb0eqVpMax, 0);
        LONG bb0eqVvN = InterlockedExchange(&g_bb0eqVvN, 0);
        LONG bb0eqVvUs = InterlockedExchange(&g_bb0eqVvUs, 0);
        LONG bb0eqVvMax = InterlockedExchange(&g_bb0eqVvMax, 0);
        LONG bb0eqVlN = InterlockedExchange(&g_bb0eqVlN, 0);
        LONG bb0eqVlUs = InterlockedExchange(&g_bb0eqVlUs, 0);
        LONG bb0eqVlMax = InterlockedExchange(&g_bb0eqVlMax, 0);
        LONG bb0eqTaN = InterlockedExchange(&g_bb0eqTaN, 0);
        LONG bb0eqTaUs = InterlockedExchange(&g_bb0eqTaUs, 0);
        LONG bb0eqTaMax = InterlockedExchange(&g_bb0eqTaMax, 0);
        LONG bb0eqTbN = InterlockedExchange(&g_bb0eqTbN, 0);
        LONG bb0eqTbUs = InterlockedExchange(&g_bb0eqTbUs, 0);
        LONG bb0eqTbMax = InterlockedExchange(&g_bb0eqTbMax, 0);
        LONG bb0eqTbCN = InterlockedExchange(&g_bb0eqTbCN, 0);
        LONG bb0eqTbCUs = InterlockedExchange(&g_bb0eqTbCUs, 0);
        LONG bb0eqTbCMax = InterlockedExchange(&g_bb0eqTbCMax, 0);
        LONG bb0eqTbNstN = InterlockedExchange(&g_bb0eqTbNstN, 0);
        LONG bb0eqTbNstUs = InterlockedExchange(&g_bb0eqTbNstUs, 0);
        LONG bb0eqTbNstMax = InterlockedExchange(&g_bb0eqTbNstMax, 0);
        LONG bb0eqNstAN = InterlockedExchange(&g_bb0eqNstAN, 0);
        LONG bb0eqNstAUs = InterlockedExchange(&g_bb0eqNstAUs, 0);
        LONG bb0eqNstAMax = InterlockedExchange(&g_bb0eqNstAMax, 0);
        LONG bb0eqNstBN = InterlockedExchange(&g_bb0eqNstBN, 0);
        LONG bb0eqNstBUs = InterlockedExchange(&g_bb0eqNstBUs, 0);
        LONG bb0eqNstBMax = InterlockedExchange(&g_bb0eqNstBMax, 0);
        LONG tbCntN = InterlockedExchange(&g_tbCntN, 0);
        LONG tbCntSum = InterlockedExchange(&g_tbCntSum, 0);
        LONG tbCntMax = InterlockedExchange(&g_tbCntMax, 0);
        LONG tbEarly = InterlockedExchange(&g_tbEarlyN, 0);
        LONG tbFull = InterlockedExchange(&g_tbFullN, 0);
        LONG nstSkip = InterlockedExchange(&g_nstSkipN, 0);
        LONG nstWork = InterlockedExchange(&g_nstWorkN, 0);
        LONG nstCheap = InterlockedExchange(&g_nstCheapN, 0);
        LONG bb0eqTcN = InterlockedExchange(&g_bb0eqTcN, 0);
        LONG bb0eqTcUs = InterlockedExchange(&g_bb0eqTcUs, 0);
        LONG bb0eqTcMax = InterlockedExchange(&g_bb0eqTcMax, 0);
        LONG bb0eqTdN = InterlockedExchange(&g_bb0eqTdN, 0);
        LONG bb0eqTdUs = InterlockedExchange(&g_bb0eqTdUs, 0);
        LONG bb0eqTdMax = InterlockedExchange(&g_bb0eqTdMax, 0);
        LONG bb0eqVwN = InterlockedExchange(&g_bb0eqVwN, 0);
        LONG bb0eqVwUs = InterlockedExchange(&g_bb0eqVwUs, 0);
        LONG bb0eqVwMax = InterlockedExchange(&g_bb0eqVwMax, 0);
        LONG bb0eqVxN = InterlockedExchange(&g_bb0eqVxN, 0);
        LONG bb0eqVxUs = InterlockedExchange(&g_bb0eqVxUs, 0);
        LONG bb0eqVxMax = InterlockedExchange(&g_bb0eqVxMax, 0);
        LONG bb0eqVxHit = InterlockedExchange(&g_bb0eqVxHit, 0);
        LONG bb0eqSN = InterlockedExchange(&g_bb0eqSN, 0);
        LONG bb0eqSUs = InterlockedExchange(&g_bb0eqSUs, 0);
        LONG bb0eqSMax = InterlockedExchange(&g_bb0eqSMax, 0);
        LONG bb0eqRN = InterlockedExchange(&g_bb0eqRN, 0);
        LONG bb0eqRUs = InterlockedExchange(&g_bb0eqRUs, 0);
        LONG bb0eqRMax = InterlockedExchange(&g_bb0eqRMax, 0);
        LONG syncm = InterlockedExchange(&g_syncMissN, 0);
        LONG eqVskip = InterlockedExchange(&g_eqVSkipN, 0);
        LONG flx = InterlockedExchange(&g_uvFlushExN, 0);
        DWORD da8 = 0;
        int hasReorg = 0;
        if (g_uvLastIdler)
        {
            __try
            {
                da8 = *(DWORD*)((char*)g_uvLastIdler + 0xDA8);
                hasReorg = *(void**)((char*)g_uvLastIdler + 0x1644) ? 1 : 0;
            }
            __except (EXCEPTION_EXECUTE_HANDLER)
            {
            }
        }
        InterlockedExchange(&g_spikeLogs, 0);
        DWORD dt = now - stamp;
        if (dt == 0)
            dt = 1;
        if (frames < 1)
            frames = 1;
        LogDbg("Present: tid=%u %d кадр / %u мс (~%u fps), inside %u/%u мс, sleep %d/%d мс, tgt=%d sel=%d/%d/%d "
            "recv=%d/%d wfso=%d/%d qpc=%d eu3=%d/%d nudge=%d/%d ing=%d/%d/%d stall=%u/%u dirty=%d/%d/%d pick=%d/%d move=%d/%d proj=%d/%d projskip=%d uv=%d/%d reuse=%d pool=%d/%d ntf=%d/%d skiprb=%d skiploc=%d "
            "evt=%d/%d dlg=%d/%d inf=%d/%d map=%d/%d winreuse=%d ovl=%d/%d/%d cam=%d/%d/%d mtx=%d/%d/%d vw=%d/%d/%d ico=%d/%d/%d gfx=%d/%d/%d pre=%d/%d/%d gui2=%d/%d/%d cln=%d/%d/%d tail=%d/%d/%d hd=%d/%d/%d aft=%d/%d/%d lkp=%d/%d/%d str=%d/%d/%d clu=%d/%d/%d pump=%d/%d/%d chk=%d/%d/%d wck=%d/%d/%d wskip=%d cskip=%d "
            "da8=%u rw=%d bb0=%d/%d/%d bb0h=%d/%d/%d bb0t=%d/%d/%d rorg=%d/%d/%d rbld=%d/%d/%d "
            "bb0s=%d/%d/%d bb0f=%d/%d/%d bb0l=%d/%d/%d bb0g=%d/%d/%d bb0o=%d/%d/%d "
            "bb0u=%d/%d/%d bb0ch=%d/%d/%d "
            "bb0c1=%d/%d/%d bb0c2=%d/%d/%d bb0c3=%d/%d/%d bb0c4=%d/%d/%d bb0cx=%d/%d/%d "
            "bb0rb=%d/%d/%d bb0eqA=%d/%d/%d bb0eqB=%d/%d/%d "
            "bb0eqH=%d/%d/%d bb0eqV=%d/%d/%d bb0eqVp=%d/%d/%d bb0eqVv=%d/%d/%d bb0eqVl=%d/%d/%d "
            "bb0eqTa=%d/%d/%d bb0eqTb=%d/%d/%d bb0eqTbC=%d/%d/%d bb0eqTbNst=%d/%d/%d "
            "nstA=%d/%d/%d nstB=%d/%d/%d tbCnt=%d/%d/%d tbEF=%d/%d nstSWC=%d/%d/%d "
            "bb0eqTc=%d/%d/%d bb0eqTd=%d/%d/%d "
            "bb0eqVw=%d/%d/%d bb0eqVx=%d/%d/%d/%d bb0eqS=%d/%d/%d bb0eqR=%d/%d/%d "
            "eqVskip=%d syncm=%d flx=%d",
            GetCurrentThreadId(),
            frames, dt, (unsigned)((frames * 1000u) / dt),
            (unsigned)(waitSum / frames), (unsigned)waitMax,
            sleepN, sleepMs, tgtN, selN, selMainN, selMainMs,
            recvN, recvMs, wfsoN, wfsoMs, qpcN,
            eu3N, eu3Ms, nudgeN, nudgeMs, ingN, (int)(ingMs / 1000), (int)(ingMax / 1000),
            (unsigned)(stallSum / frames), (unsigned)stallMax,
            dirtyN, (int)(dirtyUs / 1000), (int)(dirtyMax / 1000),
            pickN, (int)(pickUs / 1000),
            moveN, (int)(moveUs / 1000),
            projN, (int)(projUs / 1000),
            projSkip, uvN, (int)(uvUs / 1000), uvReuse,
            (int)g_uvPoolBusy, (int)g_uvPoolLive,
            ntfN, (int)(ntfUs / 1000), (int)skipRb, (int)skipLoc,
            evtN, (int)(evtUs / 1000),
            dlgN, (int)(dlgUs / 1000),
            infN, (int)(infUs / 1000),
            mapN, (int)(mapUs / 1000),
            (int)winReuse,
            ovlN, (int)(ovlUs / 1000), (int)(ovlMax / 1000),
            camN, (int)(camUs / 1000), (int)(camMax / 1000),
            mtxN, (int)(mtxUs / 1000), (int)(mtxMax / 1000),
            vwN, (int)(vwUs / 1000), (int)(vwMax / 1000),
            icoN, (int)(icoUs / 1000), (int)(icoMax / 1000),
            gfxN, (int)(gfxUs / 1000), (int)(gfxMax / 1000),
            preN, (int)(preUs / 1000), (int)(preMax / 1000),
            gui2N, (int)(gui2Us / 1000), (int)(gui2Max / 1000),
            clnN, (int)(clnUs / 1000), (int)(clnMax / 1000),
            tailN, (int)(tailUs / 1000), (int)(tailMax / 1000),
            hdN, (int)(hdUs / 1000), (int)(hdMax / 1000),
            aftN, (int)(aftUs / 1000), (int)(aftMax / 1000),
            lkpN, (int)(lkpUs / 1000), (int)(lkpMax / 1000),
            strN, (int)(strUs / 1000), (int)(strMax / 1000),
            cluN, (int)(cluUs / 1000), (int)(cluMax / 1000),
            pmpN, (int)(pmpUs / 1000), (int)(pmpMax / 1000),
            chkN, (int)(chkUs / 1000), (int)(chkMax / 1000),
            wckN, (int)(wckUs / 1000), (int)(wckMax / 1000),
            (int)wckSkip, (int)camSkip,
            da8, hasReorg,
            bb0N, (int)(bb0Us / 1000), (int)(bb0Max / 1000),
            bb0hN, (int)(bb0hUs / 1000), (int)(bb0hMax / 1000),
            bb0tN, (int)(bb0tUs / 1000), (int)(bb0tMax / 1000),
            rorgN, (int)(rorgUs / 1000), (int)(rorgMax / 1000),
            rbldN, (int)(rbldUs / 1000), (int)(rbldMax / 1000),
            bb0sN, (int)(bb0sUs / 1000), (int)(bb0sMax / 1000),
            bb0fN, (int)(bb0fUs / 1000), (int)(bb0fMax / 1000),
            bb0lN, (int)(bb0lUs / 1000), (int)(bb0lMax / 1000),
            bb0gN, (int)(bb0gUs / 1000), (int)(bb0gMax / 1000),
            bb0oN, (int)(bb0oUs / 1000), (int)(bb0oMax / 1000),
            bb0uN, (int)(bb0uUs / 1000), (int)(bb0uMax / 1000),
            bb0chN, (int)(bb0chUs / 1000), (int)(bb0chMax / 1000),
            bb0c1N, (int)(bb0c1Us / 1000), (int)(bb0c1Max / 1000),
            bb0c2N, (int)(bb0c2Us / 1000), (int)(bb0c2Max / 1000),
            bb0c3N, (int)(bb0c3Us / 1000), (int)(bb0c3Max / 1000),
            bb0c4N, (int)(bb0c4Us / 1000), (int)(bb0c4Max / 1000),
            bb0cxN, (int)(bb0cxUs / 1000), (int)(bb0cxMax / 1000),
            bb0rbN, (int)(bb0rbUs / 1000), (int)(bb0rbMax / 1000),
            bb0eqAN, (int)(bb0eqAUs / 1000), (int)(bb0eqAMax / 1000),
            bb0eqBN, (int)(bb0eqBUs / 1000), (int)(bb0eqBMax / 1000),
            bb0eqHN, (int)(bb0eqHUs / 1000), (int)(bb0eqHMax / 1000),
            bb0eqVN, (int)(bb0eqVUs / 1000), (int)(bb0eqVMax / 1000),
            bb0eqVpN, (int)(bb0eqVpUs / 1000), (int)(bb0eqVpMax / 1000),
            bb0eqVvN, (int)(bb0eqVvUs / 1000), (int)(bb0eqVvMax / 1000),
            bb0eqVlN, (int)(bb0eqVlUs / 1000), (int)(bb0eqVlMax / 1000),
            bb0eqTaN, (int)(bb0eqTaUs / 1000), (int)(bb0eqTaMax / 1000),
            bb0eqTbN, (int)(bb0eqTbUs / 1000), (int)(bb0eqTbMax / 1000),
            bb0eqTbCN, (int)(bb0eqTbCUs / 1000), (int)(bb0eqTbCMax / 1000),
            bb0eqTbNstN, (int)(bb0eqTbNstUs / 1000), (int)(bb0eqTbNstMax / 1000),
            bb0eqNstAN, (int)(bb0eqNstAUs / 1000), (int)(bb0eqNstAMax / 1000),
            bb0eqNstBN, (int)(bb0eqNstBUs / 1000), (int)(bb0eqNstBMax / 1000),
            (int)tbCntN, (int)tbCntSum, (int)tbCntMax,
            (int)tbEarly, (int)tbFull,
            (int)nstSkip, (int)nstWork, (int)nstCheap,
            bb0eqTcN, (int)(bb0eqTcUs / 1000), (int)(bb0eqTcMax / 1000),
            bb0eqTdN, (int)(bb0eqTdUs / 1000), (int)(bb0eqTdMax / 1000),
            bb0eqVwN, (int)(bb0eqVwUs / 1000), (int)(bb0eqVwMax / 1000),
            bb0eqVxN, (int)(bb0eqVxUs / 1000), (int)(bb0eqVxMax / 1000), (int)bb0eqVxHit,
            bb0eqSN, (int)(bb0eqSUs / 1000), (int)(bb0eqSMax / 1000),
            bb0eqRN, (int)(bb0eqRUs / 1000), (int)(bb0eqRMax / 1000),
            (int)eqVskip, (int)syncm, (int)flx);
    }
}
static BOOL WINAPI HookPeekMessageA(LPMSG msg, HWND wnd, UINT min, UINT max, UINT remove)
{
    bool acc = IdleOnThisThread();
    LONGLONG t0 = 0;
    if (acc)
        t0 = QpcNow();
    BOOL r = g_realPeekMessageA ? g_realPeekMessageA(msg, wnd, min, max, remove) : FALSE;
    if (acc)
    {
        g_idlePeekN++;
        g_idlePeekUs += (LONG)QpcUs(t0);
        if (!g_idlePeekRva)
            g_idlePeekRva = ExeRvaOf((DWORD)(DWORD_PTR)_ReturnAddress());
    }
    return r;
}

static LRESULT WINAPI HookDispatchMessageA(const MSG* msg)
{
    bool acc = IdleOnThisThread();
    LONGLONG t0 = 0;
    if (acc)
        t0 = QpcNow();
    LRESULT r = g_realDispatchMessageA ? g_realDispatchMessageA(msg) : 0;
    if (acc)
    {
        g_idleDispN++;
        g_idleDispUs += (LONG)QpcUs(t0);
        if (!g_idleDispRva)
            g_idleDispRva = ExeRvaOf((DWORD)(DWORD_PTR)_ReturnAddress());
    }
    return r;
}








typedef int (WINAPI* tRecv)(UINT s, char* buf, int len, int flags);
typedef BOOL (WINAPI* tQueryPerformanceCounter)(LARGE_INTEGER*);
typedef void (__thiscall* tIdlerIdle)(void* self, int arg);

static tRecv g_realRecv = 0;
static tQueryPerformanceCounter g_realQpc = 0;
static tIdlerIdle g_realIdleEu3 = 0;
static tIdlerIdle g_realIdleNudge = 0;
static tIdlerIdle g_realIdleIngame = 0;
static DWORD g_seenRecvRva[8];
static LONG g_seenRecvN = 0;

__declspec(align(16)) static unsigned char g_trampIdleEu3[32];
__declspec(align(16)) static unsigned char g_trampIdleNudge[32];
__declspec(align(16)) static unsigned char g_trampIdleIngame[32];




static void NoteRecv(DWORD rva, DWORD dt, int result)
{
    LONG n = g_seenRecvN;
    for (LONG i = 0; i < n && i < (LONG)(sizeof(g_seenRecvRva) / sizeof(g_seenRecvRva[0])); ++i)
    {
        if (g_seenRecvRva[i] == rva)
            return;
    }
    LONG idx = InterlockedIncrement(&g_seenRecvN) - 1;
    if (idx < 0 || idx >= (LONG)(sizeof(g_seenRecvRva) / sizeof(g_seenRecvRva[0])))
        return;
    g_seenRecvRva[idx] = rva;
    LogDbg("Recv: rva %06X dt=%u ret=%d", rva, dt, result);
}

static int WINAPI HookRecv(UINT s, char* buf, int len, int flags)
{
    DWORD ret = (DWORD)(DWORD_PTR)_ReturnAddress();
    DWORD rva = (g_base && ret >= g_base && ret < g_base + g_imageSize) ? ret - g_base : 0;
    DWORD t0 = NowMs();
    int r = g_realRecv ? g_realRecv(s, buf, len, flags) : -1;
    DWORD dt = NowMs() - t0;
    InterlockedIncrement(&g_recvCalls);
    InterlockedExchangeAdd(&g_recvSumMs, (LONG)dt);
    if (dt >= 2)
        NoteRecv(rva, dt, r);
    return r;
}

static BOOL WINAPI HookQpc(LARGE_INTEGER* v)
{
    InterlockedIncrement(&g_qpcCalls);
    return g_realQpc ? g_realQpc(v) : FALSE;
}

static void AccountIdle(volatile LONG* n, volatile LONG* ms, DWORD t0)
{
    DWORD dt = NowMs() - t0;
    InterlockedIncrement(n);
    InterlockedExchangeAdd(ms, (LONG)dt);
}

static void MarkGapToIdle(DWORD t0)
{
    if (!g_lastPresentEnd)
        return;
    DWORD gap = t0 - g_lastPresentEnd;
    if (gap < 200)
        InterlockedExchangeAdd(&g_gapToIdleMs, (LONG)gap);
}

static void __fastcall HookIdleEu3(void* self, void* edx, int arg)
{
    (void)edx;
    DWORD t0 = NowMs();
    MarkGapToIdle(t0);
    if (g_realIdleEu3)
        g_realIdleEu3(self, arg);
    AccountIdle(&g_idleEu3N, &g_idleEu3Ms, t0);
    g_lastIdleEnd = NowMs();
}

static void __fastcall HookIdleNudge(void* self, void* edx, int arg)
{
    (void)edx;
    DWORD t0 = NowMs();
    MarkGapToIdle(t0);
    if (g_realIdleNudge)
        g_realIdleNudge(self, arg);
    AccountIdle(&g_idleNudgeN, &g_idleNudgeMs, t0);
    g_lastIdleEnd = NowMs();
}

static LONG UsDelta(LONG after, LONG before)
{
    LONG d = after - before;
    return d > 0 ? d : 0;
}

// FIX_ARMY_WINDOW_LAG пропускает вложенный IdleInGame только пока выбраны юниты (CInGameIdler+0xDA8 -
// число выбранных; 1 = одна армия, >1 = несколько, как в UvFlushSinglePanel/UvHideDetailIfMulti).
// Вложенный IdleInGame возникает внутри насоса сообщений (FUN_009DF2B0 из FUN_00685620): их зовут и
// панель армии при выборе, и дневной тик сессии (FUN_006859C0, 11 вызовов насоса). Без выбора вложенные
// кадры - это отрисовка во время дневного тика; если их пропускать, картинка замирает на всё время тика
// (статтеры раз в игровой день независимо от окна армии).
static bool ArmySelectionActive(void* idler)
{
    if (!idler)
        return false;
    __try
    {
        DWORD n = *(DWORD*)((char*)idler + 0xDA8);
        return n >= 1 && n < 100000;
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        return false;
    }
}

static void __fastcall HookIdleIngame(void* self, void* edx, int arg)
{
    (void)edx;
    g_uvLastIdler = self;
    UvFlushSinglePanel();
    bool outer = (g_idleDepth == 0);
    if (!outer)
        g_idleNestN++;
    g_idleDepth++;
    if (g_idleDepth > g_idleDepthMax)
        g_idleDepthMax = g_idleDepth;
    if (!outer && g_cfg.fixArmyWindowLag && ArmySelectionActive(self))
    {
        g_idleDepth--;
        return;
    }
    LONGLONG q0 = QpcNow();
    if (outer)
    {
        g_idleQ0 = q0;
        g_idleHeadMark = 0;
        g_idleOvlMark = 0;
        g_idleCamLoc = 0;
        g_idleOvlLoc = 0;
        g_idleIcoLoc = 0;
        g_idlePreLoc = 0;
        g_idleGui2Loc = 0;
        g_idleStrLoc = 0;
        g_idleCluLoc = 0;
        g_idleCamN = 0;
        g_idleOvlN = 0;
        g_idleCamLeave0 = 0;
        g_idleCamLeave1 = 0;
        g_idleOvlEnter0 = 0;
        g_idleOvlEnter1 = 0;
        g_idleOvlLeave0 = 0;
        g_idleOvlLeave1 = 0;
        g_idleOvlGapMax = 0;
        g_idleNestN = 0;
        g_idleDepthMax = g_idleDepth;
        g_idleInCam = 0;
        g_idleInOvl = 0;
        g_idlePresCam = 0;
        g_idlePresOvl = 0;
        g_idlePresElse = 0;
        g_idlePeekN = 0;
        g_idlePeekUs = 0;
        g_idleDispN = 0;
        g_idleDispUs = 0;
        g_idlePeekRva = 0;
        g_idleDispRva = 0;
        g_idlePresStk[0] = 0;
        g_idlePresStk[1] = 0;
        g_idlePresStk[2] = 0;
        g_idlePresStk[3] = 0;
        g_idlePresStkN = 0;
        g_idlePumpLoc = 0;
        g_idlePumpN = 0;
        g_idlePumpCam = 0;
        g_idlePumpNest = 0;
        g_idlePumpRva = 0;
        g_idlePumpStk[0] = 0;
        g_idlePumpStk[1] = 0;
        g_idlePumpStk[2] = 0;
        g_idlePumpStk[3] = 0;
        g_idlePumpStkN = 0;
        g_idleChkLoc = 0;
        g_idleChkN = 0;
        g_idleWckLoc = 0;
        g_idleWckN = 0;
        g_idleWckSkip = 0;
        g_idleTid = GetCurrentThreadId();
    }
    DWORD t0 = NowMs();
    MarkGapToIdle(t0);
    LONG dirty0 = g_dirtyUs;
    LONG cln0 = g_clnUs;
    LONG tail0 = g_tailUs;
    LONG lkp0 = g_lkpUs;
    LONG dlg0 = g_dlgUs;
    LONG inf0 = g_infUs;
    LONG map0 = g_mapUs;
    LONG evt0 = g_evtUs;
    LONG sleep0 = g_sleepSumMs;
    LONG wfso0 = g_wfsoSumMs;
    LONG pres0 = g_presentFrames;
    if (g_realIdleIngame)
        g_realIdleIngame(self, arg);
    DWORD us = QpcUs(q0);
    AccUs(&g_idleIngameN, &g_idleIngameMs, &g_idleIngameMax, q0);
    g_lastIdleEnd = NowMs();
    LONG head = 0;
    LONG aft = 0;
    if (outer)
    {
        head = g_idleHeadMark > 0 ? g_idleHeadMark : (LONG)us;
        if (g_idleOvlMark > 0)
        {
            aft = (LONG)us - g_idleOvlMark;
            if (aft < 0)
                aft = 0;
        }
        AccUsVal(&g_hdN, &g_hdUs, &g_hdMax, head);
        AccUsVal(&g_aftN, &g_aftUs, &g_aftMax, aft);
        g_idleQ0 = 0;
        g_idleTid = 0;
    }
    g_idleDepth--;
    if (us < 80000 || !outer)
        return;
    LONG cam = g_idleCamLoc;
    LONG ovl = g_idleOvlLoc;
    LONG ico = g_idleIcoLoc;
    LONG pre = g_idlePreLoc;
    LONG gui2 = g_idleGui2Loc;
    LONG str = g_idleStrLoc;
    LONG clu = g_idleCluLoc;
    LONG dirty = UsDelta(g_dirtyUs, dirty0);
    LONG cln = UsDelta(g_clnUs, cln0);
    LONG tail = UsDelta(g_tailUs, tail0);
    LONG lkp = UsDelta(g_lkpUs, lkp0);
    LONG dlg = UsDelta(g_dlgUs, dlg0);
    LONG inf = UsDelta(g_infUs, inf0);
    LONG map = UsDelta(g_mapUs, map0);
    LONG evt = UsDelta(g_evtUs, evt0);
    LONG accounted = cam + ovl + pre + gui2 + clu + cln + tail + lkp;
    LONG leftover = (LONG)us - accounted;
    if (leftover < 0)
        leftover = 0;
    if (InterlockedIncrement(&g_spikeLogs) > 8)
        return;
    LONG camL0 = g_idleCamLeave0;
    LONG ovlE0 = g_idleOvlEnter0;
    LONG gapCO = 0;
    LONG midOvl = 0;
    if (ovlE0 > 0 && camL0 > 0)
        gapCO = ovlE0 - camL0;
    if (g_idleOvlN >= 2 && g_idleOvlEnter1 > 0 && g_idleOvlLeave0 > 0)
        midOvl = g_idleOvlEnter1 - g_idleOvlLeave0;
    if (gapCO < 0)
        gapCO = 0;
    if (midOvl < 0)
        midOvl = 0;
    LogDbg("IdleSpike: %u мс leftover=%d head=%d aft=%d cam=%d ovl=%d ico=%d pre=%d str=%d clu=%d gui2=%d "
        "lkp=%d cln=%d tail=%d dirty=%d dlg=%d inf=%d map=%d evt=%d sleep=%d wfso=%d present=%d "
        "camN=%d ovlN=%d gapCO=%d midOvl=%d camL=%d ovlE=%d "
        "nest=%d dmax=%d pCam=%d pOvl=%d pElse=%d ovlGap=%d peek=%d/%d disp=%d/%d "
        "stk=%06X,%06X,%06X,%06X peekR=%06X dispR=%06X "
        "pump=%d/%d pCamP=%d pNest=%d pumpR=%06X pstk=%06X,%06X,%06X,%06X chk=%d/%d wck=%d/%d wskip=%d",
        us / 1000, leftover / 1000, head / 1000, aft / 1000,
        cam / 1000, ovl / 1000, ico / 1000, pre / 1000, str / 1000, clu / 1000, gui2 / 1000,
        lkp / 1000, cln / 1000, tail / 1000, dirty / 1000,
        dlg / 1000, inf / 1000, map / 1000, evt / 1000,
        (int)UsDelta(g_sleepSumMs, sleep0),
        (int)UsDelta(g_wfsoSumMs, wfso0),
        (int)UsDelta(g_presentFrames, pres0),
        (int)g_idleCamN, (int)g_idleOvlN,
        gapCO / 1000, midOvl / 1000, camL0 / 1000, ovlE0 / 1000,
        (int)g_idleNestN, (int)g_idleDepthMax,
        (int)g_idlePresCam, (int)g_idlePresOvl, (int)g_idlePresElse,
        g_idleOvlGapMax / 1000,
        (int)g_idlePeekN, g_idlePeekUs / 1000,
        (int)g_idleDispN, g_idleDispUs / 1000,
        g_idlePresStk[0], g_idlePresStk[1], g_idlePresStk[2], g_idlePresStk[3],
        g_idlePeekRva, g_idleDispRva,
        (int)g_idlePumpN, g_idlePumpLoc / 1000,
        (int)g_idlePumpCam, (int)g_idlePumpNest, g_idlePumpRva,
        g_idlePumpStk[0], g_idlePumpStk[1], g_idlePumpStk[2], g_idlePumpStk[3],
        (int)g_idleChkN, g_idleChkLoc / 1000,
        (int)g_idleWckN, g_idleWckLoc / 1000, (int)g_idleWckSkip);
}

// Выбор/ход армии: не single_unitpanel (3.28 panel=0 при реальных кликах).
// Звук army_selected / navy_selected + selection_projection: rva 1CC530.
// Приказ хода army_move + legal/illegal projection: rva 1CCEC0.
static const DWORD RVA_PROV_DIRTY = 0x3FC360;
static const DWORD RVA_ARMY_PICK  = 0x1CC530;
static const DWORD RVA_ARMY_MOVE  = 0x1CCEC0;
static const DWORD RVA_SEL_PROJ   = 0x1D4540;

typedef void (__stdcall* tProvDirty)(void* a, int b, void* c);
typedef void (__thiscall* tArmyPick)(void* self, DWORD a);
typedef void (__thiscall* tArmyMove)(void* self, DWORD a, DWORD b);
typedef void (__stdcall* tSelProj)(void* mgr, void* obj130);

static tProvDirty g_realProvDirty = 0;
static tArmyPick  g_realArmyPick = 0;
static tArmyMove  g_realArmyMove = 0;
static tSelProj   g_realSelProj = 0;
typedef void* (__thiscall* tUnitViewCtor)(void* idler, void* buf, void* army, int z, void* extra);
typedef void (__cdecl* tGameDelete)(void*);
typedef void (__thiscall* tIdlerNotify)(void* idler, void* army);
static tUnitViewCtor g_realUnitViewCtor = 0;
static tGameDelete   g_gameDelete = 0;
static tIdlerNotify  g_realIdlerNotify = 0;

// Пул CUnitView: игра на каждый клик делала new(0x320)+разбор unitpanel.gui.
// Держим до 10 живых панелей (UI only, checksum не трогаем). Свободный слот
// перевязывает army на +0x28 вместо ctor. На deselect — Hide unitpanel
// (vfunc +0x38 у token+0x18), не destroy: иначе карточки и «Выбрать»
// залипают сбоку. Больше 10 одновременных — родной ctor/dtor. Смену idler
// (выход в меню) забываем без dtor: родительский GUI уже разобран.
static const int UV_POOL_MAX = 10;
static const DWORD RVA_CUNITVIEW_VT = 0xA16850;
struct UnitViewSlot
{
    void* view;
    bool  inUse;
};
static UnitViewSlot g_uvPool[UV_POOL_MAX];
static void*        g_uvOwner = 0;
static void*        g_uvPendingPanel = 0;
static void*        g_uvSingleArmy = 0;
static bool         g_uvNeedRebuild = false;
static void*        g_real393510 = 0;
static void*        g_real393290 = 0;
static void*        g_real391BB0 = 0;
static void*        g_real391C6E = 0;
static void*        g_real3810A0 = 0;
static void*        g_realListClear = 0;
static void*        g_afterListClear = 0;
static void*        g_uvLastList = 0;
static void*        g_bb0Epilogue = 0;
static int          g_uvSkipListTail = 0;
static LONGLONG     g_bb0TailMark = 0;
static LONGLONG     g_bb0sT0 = 0;
static LONGLONG     g_bb0fT0 = 0;
static LONGLONG     g_bb0lT0 = 0;
static LONGLONG     g_bb0gT0 = 0;
static LONG         g_bb0sThis = 0;
static LONG         g_bb0fThis = 0;
static LONG         g_bb0lThis = 0;
static LONG         g_bb0gThis = 0;
static void*        g_fn009350 = 0;
static void*        g_fn19C160 = 0;
static void*        g_bb0ContStr = 0;
static void*        g_bb0ContFind = 0;
static void*        g_bb0ContList = 0;
static void*        g_bb0ContHash = 0;
static void*        g_bb0ContChild = 0;
static void*        g_real5B2750 = 0;
static void*        g_fn38B4C0 = 0;
static void*        g_bb0ContSync = 0;
static void*        g_fn38B2E0 = 0;
static void*        g_fn38B140 = 0;
static void*        g_fn731C00 = 0;
static void*        g_fn008ED0 = 0;
static void*        g_fn38A4D0 = 0;
static void*        g_bb0ContEqA = 0;
static void*        g_bb0ContEqB = 0;
static void*        g_bb0ContEqH = 0;
static void*        g_bb0ContEqV = 0;
static void*        g_bb0ContEqS = 0;
static void*        g_bb0ContEqR = 0;
static void*        g_bb0ContEqVp = 0;
static void*        g_bb0ContEqVv = 0;
static void*        g_bb0ContEqVl = 0;
static void*        g_bb0ContEqTb = 0;
static void*        g_bb0ContEqTc = 0;
static void*        g_bb0ContEqTd = 0;
static void*        g_bb0ContEqTbC = 0;
static void*        g_bb0ContEqVw = 0;
static void*        g_bb0ContEqVx = 0;
static LONGLONG     g_bb0eqAT0 = 0;
static LONGLONG     g_bb0rbT0 = 0;
static LONGLONG     g_bb0eqBT0 = 0;
static LONGLONG     g_bb0eqHT0 = 0;
static LONGLONG     g_bb0eqVT0 = 0;
static LONGLONG     g_bb0eqST0 = 0;
static LONGLONG     g_bb0eqRT0 = 0;
static LONGLONG     g_eqVSliceT0 = 0;
static int          g_eqVSlice = -1;
static LONG         g_eqVSlicesOn = 0;
static LONG         g_eqVActive = 0;
static LONG         g_eqVSkipShow = 0;
static LONG         g_eqVArmed = 0;
static void*        g_eqVFpList = 0;
static DWORD        g_eqVFpCount = 0;
static DWORD        g_eqVFpHash = 0;
static LONG         g_list7cLogged = 0;
static LONG         g_syncDiagN = 0;
static DWORD        g_child24Seen[8];
static DWORD        g_eqVSeen[8];
static DWORD        g_tbFnSeen[8];
static DWORD        g_tbVtSeen[8];
static DWORD        g_tbNstFnSeen[8];
static DWORD        g_tbNstVtSeen[8];
static DWORD        g_nstASeen[4];
static DWORD        g_nstBSeen[4];
static LONGLONG     g_bb0chT0 = 0;
static DWORD        g_bb0chRva = 0;
static BYTE*        g_uvLocContinue = 0;
static BYTE*        g_uvLocEpilogue = 0;

static void UvRecount()
{
    LONG live = 0, busy = 0;
    for (int i = 0; i < UV_POOL_MAX; i++)
    {
        if (!g_uvPool[i].view)
            continue;
        live++;
        if (g_uvPool[i].inUse)
            busy++;
    }
    InterlockedExchange(&g_uvPoolLive, live);
    InterlockedExchange(&g_uvPoolBusy, busy);
}

static void WinPoolReset();

static void UvPoolReset()
{
    memset(g_uvPool, 0, sizeof(g_uvPool));
    g_uvOwner = 0;
    g_uvLastIdler = 0;
    g_uvPendingPanel = 0;
    g_uvSingleArmy = 0;
    g_uvNeedRebuild = false;
    g_uvSkipListTail = 0;
    g_uvLastList = 0;
    g_eqVSkipShow = 0;
    g_eqVArmed = 0;
    g_eqVFpList = 0;
    g_eqVFpCount = 0;
    g_eqVFpHash = 0;
    UvRecount();
    WinPoolReset();
}

static bool UvViewAlive(void* view)
{
    if (!view || !g_base)
        return false;
    __try
    {
        return *(DWORD*)view == (g_base + RVA_CUNITVIEW_VT);
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        return false;
    }
}

static int UvFind(void* view)
{
    if (!view)
        return -1;
    for (int i = 0; i < UV_POOL_MAX; i++)
    {
        if (g_uvPool[i].view == view)
            return i;
    }
    return -1;
}

static void UvDropDead()
{
    for (int i = 0; i < UV_POOL_MAX; i++)
    {
        if (g_uvPool[i].view && !UvViewAlive(g_uvPool[i].view))
            memset(&g_uvPool[i], 0, sizeof(g_uvPool[i]));
    }
    UvRecount();
}

// token = CUnitView+0x20 ("unitpanel"), inner CGuiObject = token+0x18.
// Игра прячет так: add ecx,0x18; call [vtable+0x38] (dtor 39D646, layout 26A7C6).
// Show — соседний слот +0x34 (26A8F8, без лишних аргументов).
static void UvCallGui(void* view, unsigned voff)
{
    if (!view)
        return;
    __try
    {
        void* tok = *(void**)((char*)view + 0x20);
        if (!tok)
            return;
        void* gui = (char*)tok + 0x18;
        void** vt = *(void***)gui;
        if (!vt)
            return;
        typedef void (__thiscall* tFn)(void*);
        tFn fn = (tFn)vt[voff / 4];
        if (fn)
            fn(gui);
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
    }
}

static void UvHide(void* view)
{
    UvCallGui(view, 0x38);
}

static void UvShow(void* view)
{
    UvCallGui(view, 0x34);
}

// Токен GUI: объект+0x18. Hide +0x38, Show +0x34 (393570 / 393510).
static void UvCallGuiToken(void* tok, unsigned voff)
{
    if (!tok)
        return;
    __try
    {
        void* gui = (char*)tok + 0x18;
        void** vt = *(void***)gui;
        if (!vt)
            return;
        typedef void (__thiscall* tFn)(void*);
        tFn fn = (tFn)vt[voff / 4];
        if (fn)
            fn(gui);
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
    }
}

static void UvHideGuiToken(void* tok)
{
    UvCallGuiToken(tok, 0x38);
}

static void UvCallGuiObj(void* gui, unsigned voff)
{
    if (!gui)
        return;
    __try
    {
        void** vt = *(void***)gui;
        if (!vt)
            return;
        typedef void (__thiscall* tFn)(void*);
        tFn fn = (tFn)vt[voff / 4];
        if (fn)
            fn(gui);
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
    }
}

static void UvHideGuiObj(void* gui)
{
    UvCallGuiObj(gui, 0x38);
}

static void UvShowGuiObj(void* gui)
{
    UvCallGuiObj(gui, 0x34);
}

static void UvLayoutGui(void* gui)
{
    UvCallGuiObj(gui, 0x6C);
}

static void UvShowGuiToken(void* tok)
{
    UvCallGuiToken(tok, 0x34);
}

static void UvShowDetail(void* panel)
{
    if (!panel)
        return;
    __try
    {
        UvShowGuiToken(*(void**)((char*)panel + 4));
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
    }
}

static void UvFinishPanelLayout()
{
    if (!g_uvLastList)
        return;
    UvShowGuiObj(g_uvLastList);
    UvLayoutGui(g_uvLastList);
    UvLayoutGui(g_uvLastList);
}

// 39332D: дети list в this+0x60 (5B2750). +0x64/+0x68 — layout (3.71).
// 3.73 только обнулил голову — старые виджеты остались наверху, реорг
// мёртв из‑за skip 391BB0. NeedRebuild: Hide детей, голова = 0, размер нет.
static void __stdcall UvUnlinkListHead(void* list)
{
    if (!list)
        return;
    void* node = 0;
    __try
    {
        node = *(void**)((char*)list + 0x60);
        *(void**)((char*)list + 0x60) = 0;
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        return;
    }
    DWORD uvVt = g_base ? (g_base + RVA_CUNITVIEW_VT) : 0;
    int n = 0;
    while (node && n++ < 256)
    {
        void* child = 0;
        void* next = 0;
        __try
        {
            child = *(void**)node;
            next = *(void**)((char*)node + 8);
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            break;
        }
        if (child)
        {
            __try
            {
                DWORD vt0 = *(DWORD*)child;
                if (uvVt && vt0 == uvVt)
                    UvHide(child);
                else
                    UvHideGuiObj(child);
            }
            __except (EXCEPTION_EXECUTE_HANDLER)
            {
            }
        }
        node = next;
    }
}

// 393570 ванили: Hide + vfunc +0x5C (чистка детей list) + Hide по вектору.
// Чистка убивает окно бригад — в 3.40 после skip 393290 показывать было нечего.
// Оставляем виджеты, только прячем.
static void __stdcall UvHideDetailKeep(void* panel)
{
    if (!panel)
        return;
    __try
    {
        // Hide +0x38 не рекурсивный: прятать panel+4 сносит рамку, строки
        // списка остаются и едут на карту. Прячем list и vector.
        if (g_uvLastList)
            UvHideGuiObj(g_uvLastList);
        void** begin = *(void***)((char*)panel + 0x10);
        void** end = *(void***)((char*)panel + 0x14);
        if (begin && end && end > begin)
        {
            for (void** p = begin; p < end; p++)
                UvHideGuiToken(*p);
        }
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
    }
}

static void UvInvalidateBrigadePanel()
{
    g_uvSingleArmy = 0;
    g_uvNeedRebuild = true;
}

static void UvHideDetailIfMulti(void* idler)
{
    if (!idler)
        return;
    __try
    {
        DWORD n = *(DWORD*)((char*)idler + 0xDA8);
        if (n == 1)
            return;
        UvInvalidateBrigadePanel();
        void* panel = *(void**)((char*)idler + 0x1640);
        if (n <= 1)
            return;
        if (panel)
            UvHideDetailKeep(panel);
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
    }
}

static void __stdcall UvDeferPanelRefresh(void* panel)
{
    g_uvPendingPanel = panel;
}

static void UvCall393510(void* panel)
{
    void* fn = g_real393510;
    if (!fn || !panel)
        return;
    __asm {
        mov eax, panel
        call fn
    }
}

static void __stdcall UvOn393510(void* panel)
{
    // Не звать 393510 на стеке pick: 3.68 NeedRebuild+сразу → +0x5C
    // по строке "status" (eax=stat), eip в windows.storage.
    g_uvPendingPanel = panel;
}

// Рамка/клики: 393510 при da8==1 на ПЕРВОЙ армии, окно потом прячут.
// Копим вызов до idle/Present: если к кадру уже >1 — не собираем.
static void UvFlushSinglePanel()
{
    void* idler = g_uvLastIdler;
    if (!idler || !g_real393510)
        return;
    __try
    {
        if (!g_uvNeedRebuild && g_uvOwner && idler != g_uvOwner)
            return;
        if (*(DWORD*)((char*)idler + 0xDA8) != 1)
            return;
        void* live = *(void**)((char*)idler + 0x1640);
        void* panel = g_uvPendingPanel;
        if (!panel && g_uvNeedRebuild)
            panel = live;
        if (!panel)
            return;
        if (live)
            panel = live;
        g_uvPendingPanel = 0;
        UvShowDetail(panel);
        UvCall393510(panel);
        UvShowDetail(panel);
        UvFinishPanelLayout();
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        g_uvPendingPanel = 0;
        InterlockedIncrement(&g_uvFlushExN);
    }
}

// 3.98: 393290 из 391C6E не скипаем (dirty split/newunit).
// 4.00: coop skip 393290@393510 откатан — только таймер.
static int __stdcall UvOnPanelRebuild(void* panel, DWORD retaddr)
{
    (void)panel;
    (void)retaddr;
    return 0;
}

static void __stdcall UvNoteRebuildArmy(void* panel)
{
    if (!panel)
        return;
    __try
    {
        g_uvSingleArmy = *(void**)((char*)panel + 8);
        g_uvNeedRebuild = false;
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        g_uvSingleArmy = 0;
    }
}

static void __stdcall UvTimeCall393290(void* panel, DWORD retaddr)
{
    DWORD rva = ExeRvaOf(retaddr);
    static LONG logged = 0;
    LONG n = InterlockedIncrement(&logged);
    if (n <= 16)
        LogDbg("ArmySelect: 393290 run ret=%06X", rva);
    LONGLONG t0 = QpcNow();
    void* fn = g_real393290;
    __asm {
        mov esi, panel
        call fn
    }
    AccUs(&g_rbldN, &g_rbldUs, &g_rbldMax, t0);
}

static void __stdcall UvBb0SliceEnter(LONGLONG* t0)
{
    *t0 = QpcNow();
}

static void __stdcall UvBb0SliceLeave(LONGLONG t0, volatile LONG* n, volatile LONG* us, volatile LONG* mx, LONG* thisCall)
{
    LONG dt = (LONG)QpcUs(t0);
    *thisCall = dt;
    AccUsVal(n, us, mx, dt);
}

static void __stdcall UvBb0sEnter() { UvBb0SliceEnter(&g_bb0sT0); }
static void __stdcall UvBb0sLeave() { UvBb0SliceLeave(g_bb0sT0, &g_bb0sN, &g_bb0sUs, &g_bb0sMax, &g_bb0sThis); }
static void __stdcall UvBb0fEnter() { UvBb0SliceEnter(&g_bb0fT0); }
static void __stdcall UvBb0fLeave() { UvBb0SliceLeave(g_bb0fT0, &g_bb0fN, &g_bb0fUs, &g_bb0fMax, &g_bb0fThis); }
static void __stdcall UvBb0lEnter() { UvBb0SliceEnter(&g_bb0lT0); }
static void __stdcall UvBb0lLeave() { UvBb0SliceLeave(g_bb0lT0, &g_bb0lN, &g_bb0lUs, &g_bb0lMax, &g_bb0lThis); }
static void __stdcall UvBb0gEnter() { UvBb0SliceEnter(&g_bb0gT0); }
static void __stdcall UvBb0gLeave() { UvBb0SliceLeave(g_bb0gT0, &g_bb0gN, &g_bb0gUs, &g_bb0gMax, &g_bb0gThis); }

static void __stdcall UvNoteList7c(void* fn)
{
    if (InterlockedCompareExchange(&g_list7cLogged, 1, 0) != 0)
        return;
    LogDbg("ArmySelect: list +0x7C rva %06X (ждём 5B2750 = Update детей listbox)",
        ExeRvaOf((DWORD)(DWORD_PTR)fn));
}

static void __stdcall UvNoteChild24(void* fn)
{
    DWORD rva = ExeRvaOf((DWORD)(DWORD_PTR)fn);
    for (int i = 0; i < 8; i++)
    {
        if (g_child24Seen[i] == rva)
            return;
        if (g_child24Seen[i] == 0)
        {
            g_child24Seen[i] = rva;
            const char* tag = "other";
            if (rva == 0x3993B0)
                tag = "thunk";
            else if (rva == 0x38C550)
                tag = "supply/kph/speed";
            else if (rva == 0x38E820)
                tag = "attach/detach";
            else if (rva == 0x38AF00)
                tag = "list-sync";
            LogDbg("ArmySelect: list child +0x24 rva %06X (%s)", rva, tag);
            return;
        }
    }
}

static void __stdcall UvBb0chEnter(void* fn)
{
    UvNoteChild24(fn);
    g_bb0chRva = ExeRvaOf((DWORD)(DWORD_PTR)fn);
    g_bb0chT0 = QpcNow();
}

static void __stdcall UvBb0chLeave()
{
    LONG dt = (LONG)QpcUs(g_bb0chT0);
    AccUsVal(&g_bb0chN, &g_bb0chUs, &g_bb0chMax, dt);
    switch (g_bb0chRva)
    {
    case 0x3993B0:
        AccUsVal(&g_bb0c1N, &g_bb0c1Us, &g_bb0c1Max, dt);
        break;
    case 0x38C550:
        AccUsVal(&g_bb0c2N, &g_bb0c2Us, &g_bb0c2Max, dt);
        break;
    case 0x38E820:
        AccUsVal(&g_bb0c3N, &g_bb0c3Us, &g_bb0c3Max, dt);
        break;
    case 0x38AF00:
        AccUsVal(&g_bb0c4N, &g_bb0c4Us, &g_bb0c4Max, dt);
        break;
    default:
        AccUsVal(&g_bb0cxN, &g_bb0cxUs, &g_bb0cxMax, dt);
        break;
    }
}

static void __stdcall UvTime5B2750(void* self)
{
    LONGLONG t0 = QpcNow();
    void* fn = g_real5B2750;
    __asm {
        mov ecx, self
        call fn
    }
    AccUs(&g_bb0uN, &g_bb0uUs, &g_bb0uMax, t0);
}

// 38AF3A: call 38B4C0 после push esi. Не StealToTrampoline на 38B4C0 —
// 3.80 портил ESI во вложенном вызове из 393290 → AV [esi+8]+0x74.
static void UvEqVInvalidateShow()
{
    g_eqVSkipShow = 0;
    g_eqVArmed = 0;
    g_eqVFpList = 0;
    g_eqVFpCount = 0;
    g_eqVFpHash = 0;
}

static int UvEqVHashList(void* list, DWORD* countOut, DWORD* hashOut)
{
    if (!list || !countOut || !hashOut)
        return 0;
    __try
    {
        DWORD n = *(DWORD*)((char*)list + 0x58);
        DWORD* arr = *(DWORD**)((char*)list + 0x5C);
        *countOut = n;
        DWORD h = n;
        DWORD lim = n;
        if (lim > 64)
            lim = 64;
        if (arr)
        {
            for (DWORD i = 0; i < lim; i++)
                h ^= arr[i] + (i * 0x9E3779B9u);
            if (n > 64)
                h ^= arr[n - 1];
        }
        *hashOut = h;
        return 1;
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        return 0;
    }
}

static void __stdcall UvTimeSyncMissEnter(void* outer)
{
    UvEqVInvalidateShow();
    InterlockedIncrement(&g_syncMissN);
    LONG n = InterlockedIncrement(&g_syncDiagN);
    if (n <= 8 && outer)
    {
        __try
        {
            unsigned char* inner = (unsigned char*)outer + 0x1C;
            DWORD begin = *(DWORD*)(inner + 0x50);
            DWORD end = *(DWORD*)(inner + 0x54);
            DWORD parent = *(DWORD*)(inner + 0x0C);
            DWORD cached = parent ? *(DWORD*)(parent + 0x40) : 0;
            DWORD count = (end >= begin) ? ((end - begin) / 40u) : 0;
            LogDbg("ArmySelect: sync-miss #%d vec=%u cached=%u delta=%d outer=%p parent=%p",
                (int)n, count, cached, (int)count - (int)cached, outer, (void*)parent);
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            LogDbg("ArmySelect: sync-miss #%d (read AV)", (int)n);
        }
    }
    g_bb0rbT0 = QpcNow();
}

static void __stdcall UvTimeSyncMissLeave()
{
    AccUs(&g_bb0rbN, &g_bb0rbUs, &g_bb0rbMax, g_bb0rbT0);
}

// 38AF41 equal-path: call 38B2E0 (scrollbar) затем 38B140 (per-row refresh).
static void __stdcall UvBb0eqAEnter()
{
    g_bb0eqAT0 = QpcNow();
}

static void __stdcall UvBb0eqALeave()
{
    AccUs(&g_bb0eqAN, &g_bb0eqAUs, &g_bb0eqAMax, g_bb0eqAT0);
}

static void __stdcall UvBb0eqBEnter(void* list)
{
    g_bb0eqBT0 = QpcNow();
    g_eqVSkipShow = 0;
    DWORD count = 0, hash = 0;
    if (list && UvEqVHashList(list, &count, &hash)
        && g_eqVArmed
        && list == g_eqVFpList
        && count == g_eqVFpCount
        && hash == g_eqVFpHash
        && count > 0)
        g_eqVSkipShow = 1;
    g_eqVFpList = list;
}

static void __stdcall UvBb0eqBLeave()
{
    AccUs(&g_bb0eqBN, &g_bb0eqBUs, &g_bb0eqBMax, g_bb0eqBT0);
    if (!g_eqVSkipShow && g_eqVFpList)
    {
        DWORD count = 0, hash = 0;
        if (UvEqVHashList(g_eqVFpList, &count, &hash) && count > 0)
        {
            g_eqVFpCount = count;
            g_eqVFpHash = hash;
            g_eqVArmed = 1;
        }
    }
    g_eqVSkipShow = 0;
}

static void __stdcall UvBb0eqHEnter()
{
    g_bb0eqHT0 = QpcNow();
}

static void __stdcall UvBb0eqHLeave()
{
    AccUs(&g_bb0eqHN, &g_bb0eqHUs, &g_bb0eqHMax, g_bb0eqHT0);
}

static void __stdcall UvBb0eqVEnter()
{
    g_bb0eqVT0 = QpcNow();
}

static void __stdcall UvBb0eqVLeave()
{
    AccUs(&g_bb0eqVN, &g_bb0eqVUs, &g_bb0eqVMax, g_bb0eqVT0);
}

// Срезы 5E4490 только пока g_eqVActive (army list path). Иначе 5E4490 — общий Show.
static void __stdcall UvEqVSliceTo(int next)
{
    if (!g_eqVActive)
    {
        g_eqVSlice = -1;
        return;
    }
    if (g_eqVSlice >= 0)
    {
        LONG dt = (LONG)QpcUs(g_eqVSliceT0);
        if (dt < 0)
            dt = 0;
        switch (g_eqVSlice)
        {
        case 0:
            AccUsVal(&g_bb0eqVpN, &g_bb0eqVpUs, &g_bb0eqVpMax, dt);
            break;
        case 1:
            AccUsVal(&g_bb0eqVvN, &g_bb0eqVvUs, &g_bb0eqVvMax, dt);
            break;
        case 2:
            AccUsVal(&g_bb0eqVlN, &g_bb0eqVlUs, &g_bb0eqVlMax, dt);
            break;
        case 3:
            AccUsVal(&g_bb0eqTaN, &g_bb0eqTaUs, &g_bb0eqTaMax, dt);
            break;
        case 4:
            AccUsVal(&g_bb0eqTbN, &g_bb0eqTbUs, &g_bb0eqTbMax, dt);
            break;
        case 5:
            AccUsVal(&g_bb0eqTcN, &g_bb0eqTcUs, &g_bb0eqTcMax, dt);
            break;
        case 6:
            AccUsVal(&g_bb0eqTdN, &g_bb0eqTdUs, &g_bb0eqTdMax, dt);
            break;
        case 7:
            AccUsVal(&g_bb0eqVwN, &g_bb0eqVwUs, &g_bb0eqVwMax, dt);
            break;
        case 8:
            AccUsVal(&g_bb0eqVxN, &g_bb0eqVxUs, &g_bb0eqVxMax, dt);
            break;
        }
    }
    g_eqVSlice = next;
    g_eqVSliceT0 = QpcNow();
}

// 3.92 эмулировал Show через vt+0x34 — на rebuild 38B4C0 это AV в кучу.
// 3.93: skip только equal-path (флаг [self+8]=1, без Show). Иначе ванильный
// 5B1FA0 в EAX. Срезы 5E4490 по-прежнему вокруг этого вызова.
static void __stdcall UvTimeEqVInner(void* self, void* thunk)
{
    __try
    {
        if (g_eqVSkipShow)
        {
            *((BYTE*)self + 8) = 1;
            InterlockedIncrement(&g_eqVSkipN);
            return;
        }
        if (!self || !thunk)
            return;
        DWORD rva = ExeRvaOf((DWORD)(DWORD_PTR)thunk);
        for (int i = 0; i < 8; i++)
        {
            if (g_eqVSeen[i] == rva)
                break;
            if (g_eqVSeen[i] == 0)
            {
                g_eqVSeen[i] = rva;
                LogDbg("ArmySelect: eqV thunk rva %06X (ванильный 5B1FA0)", rva);
                break;
            }
        }
        g_eqVActive = 1;
        g_eqVSlice = 0;
        g_eqVSliceT0 = QpcNow();
        LONGLONG t0 = QpcNow();
        void* s = self;
        void* fn = thunk;
        __asm {
            mov ecx, s
            mov eax, fn
            call eax
        }
        UvEqVSliceTo(-1);
        g_eqVActive = 0;
        AccUs(&g_bb0eqVN, &g_bb0eqVUs, &g_bb0eqVMax, t0);
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        g_eqVActive = 0;
        g_eqVSlice = -1;
        LogDbg("ArmySelect: eqV inner AV");
    }
}

static void __stdcall UvNoteEqVxHit()
{
    if (g_eqVActive)
        InterlockedIncrement(&g_bb0eqVxHit);
}

static void __stdcall UvNoteTbCount(int n)
{
    if (!g_eqVActive || n < 0)
        return;
    InterlockedIncrement(&g_tbCntN);
    InterlockedExchangeAdd(&g_tbCntSum, n);
    for (;;)
    {
        LONG cur = g_tbCntMax;
        if (n <= cur)
            break;
        if (InterlockedCompareExchange(&g_tbCntMax, n, cur) == cur)
            break;
    }
}

// Tb loop: call child vt[+0x34]. 5C43C0 — тонкий Show: early [+0xF6] иначе
// [self+0x94].vt[+0x34] (nested).
static void __stdcall UvTimeTbChild(void* self, void* fn)
{
    if (!self || !fn)
        return;

    if (!g_eqVActive)
    {
        __asm {
            mov ecx, self
            call fn
        }
        return;
    }

    DWORD frva = ExeRvaOf((DWORD)(DWORD_PTR)fn);
    DWORD vrva = 0;
    __try
    {
        vrva = ExeRvaOf(*(DWORD*)self);
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        vrva = 0;
    }
    for (int i = 0; i < 8; i++)
    {
        if (g_tbFnSeen[i] == frva)
            break;
        if (g_tbFnSeen[i] == 0)
        {
            g_tbFnSeen[i] = frva;
            LogDbg("ArmySelect: Tb child +0x34 rva %06X%s", frva,
                frva == 0x5E4490 ? " (Show 5E4490 recurse!)" : "");
            break;
        }
    }
    for (int i = 0; i < 8; i++)
    {
        if (g_tbVtSeen[i] == vrva)
            break;
        if (g_tbVtSeen[i] == 0)
        {
            g_tbVtSeen[i] = vrva;
            LogDbg("ArmySelect: Tb child vt rva %06X", vrva);
            break;
        }
    }

    LONGLONG t0 = QpcNow();
    if (frva == 0x5C43C0)
    {
        __try
        {
            if (*((BYTE*)self + 0xF6) != 0)
            {
                InterlockedIncrement(&g_tbEarlyN);
                AccUs(&g_bb0eqTbCN, &g_bb0eqTbCUs, &g_bb0eqTbCMax, t0);
                return;
            }
            InterlockedIncrement(&g_tbFullN);
            *((BYTE*)self + 0x4F) = 1;
            *(float*)((char*)self + 0xB8) = 0.0f;
            void* nest = *(void**)((char*)self + 0x94);
            if (!nest)
            {
                AccUs(&g_bb0eqTbCN, &g_bb0eqTbCUs, &g_bb0eqTbCMax, t0);
                return;
            }
            void** nvt = *(void***)nest;
            void* nfn = nvt[0x34 / 4];
            DWORD nfrva = ExeRvaOf((DWORD)(DWORD_PTR)nfn);
            DWORD nvrva = ExeRvaOf(*(DWORD*)nest);
            for (int i = 0; i < 8; i++)
            {
                if (g_tbNstFnSeen[i] == nfrva)
                    break;
                if (g_tbNstFnSeen[i] == 0)
                {
                    g_tbNstFnSeen[i] = nfrva;
                    LogDbg("ArmySelect: Tb nested +0x34 rva %06X (via [child+0x94])", nfrva);
                    break;
                }
            }
            for (int i = 0; i < 8; i++)
            {
                if (g_tbNstVtSeen[i] == nvrva)
                    break;
                if (g_tbNstVtSeen[i] == 0)
                {
                    g_tbNstVtSeen[i] = nvrva;
                    LogDbg("ArmySelect: Tb nested vt rva %06X", nvrva);
                    break;
                }
            }
            LONGLONG t1 = QpcNow();
            if (nfrva == 0x5F9200)
            {
                // cheap: mov [ecx+0x29], 1; ret
                InterlockedIncrement(&g_nstCheapN);
                *((BYTE*)nest + 0x29) = 1;
            }
            else if (nfrva == 0x62F020)
            {
                // Show: if [+0x29] already set — skip body (vt+0x3C == 3D9710).
                if (*((BYTE*)nest + 0x29) != 0)
                {
                    InterlockedIncrement(&g_nstSkipN);
                    *((BYTE*)nest + 0x29) = 1;
                }
                else
                {
                    InterlockedIncrement(&g_nstWorkN);
                    void* obj150 = *(void**)((char*)nest + 0x150);
                    if (obj150)
                    {
                        void** vt150 = *(void***)obj150;
                        void* fnA = vt150[0x2C / 4];
                        DWORD arva = ExeRvaOf((DWORD)(DWORD_PTR)fnA);
                        for (int i = 0; i < 4; i++)
                        {
                            if (g_nstASeen[i] == arva)
                                break;
                            if (g_nstASeen[i] == 0)
                            {
                                g_nstASeen[i] = arva;
                                LogDbg("ArmySelect: nstA [+0x150]+0x2C rva %06X", arva);
                                break;
                            }
                        }
                        LONGLONG ta = QpcNow();
                        __asm {
                            mov ecx, obj150
                            call fnA
                        }
                        AccUs(&g_bb0eqNstAN, &g_bb0eqNstAUs, &g_bb0eqNstAMax, ta);
                    }
                    void** nestVt = *(void***)nest;
                    void* fnB = nestVt[0xCC / 4];
                    DWORD brva = ExeRvaOf((DWORD)(DWORD_PTR)fnB);
                    for (int i = 0; i < 4; i++)
                    {
                        if (g_nstBSeen[i] == brva)
                            break;
                        if (g_nstBSeen[i] == 0)
                        {
                            g_nstBSeen[i] = brva;
                            LogDbg("ArmySelect: nstB self vt+0xCC rva %06X", brva);
                            break;
                        }
                    }
                    int pt[2];
                    pt[0] = 0;
                    pt[1] = 0;
                    __try
                    {
                        pt[0] = (int)*(float*)((char*)nest + 0xFC);
                        pt[1] = (int)*(float*)((char*)nest + 0x100);
                    }
                    __except (EXCEPTION_EXECUTE_HANDLER)
                    {
                    }
                    LONGLONG tb = QpcNow();
                    void* pPt = pt;
                    __asm {
                        push pPt
                        mov ecx, nest
                        call fnB
                    }
                    AccUs(&g_bb0eqNstBN, &g_bb0eqNstBUs, &g_bb0eqNstBMax, tb);
                    *((BYTE*)nest + 0x29) = 1;
                }
            }
            else
            {
                __asm {
                    mov ecx, nest
                    call nfn
                }
            }
            AccUs(&g_bb0eqTbNstN, &g_bb0eqTbNstUs, &g_bb0eqTbNstMax, t1);
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            LogDbg("ArmySelect: Tb 5C43C0 expand AV");
        }
        AccUs(&g_bb0eqTbCN, &g_bb0eqTbCUs, &g_bb0eqTbCMax, t0);
        return;
    }

    __asm {
        mov ecx, self
        call fn
    }
    AccUs(&g_bb0eqTbCN, &g_bb0eqTbCUs, &g_bb0eqTbCMax, t0);
}

static void __stdcall UvBb0eqSEnter()
{
    g_bb0eqST0 = QpcNow();
}

static void __stdcall UvBb0eqSLeave()
{
    AccUs(&g_bb0eqSN, &g_bb0eqSUs, &g_bb0eqSMax, g_bb0eqST0);
}

static void __stdcall UvBb0eqREnter()
{
    g_bb0eqRT0 = QpcNow();
}

static void __stdcall UvBb0eqRLeave()
{
    AccUs(&g_bb0eqRN, &g_bb0eqRUs, &g_bb0eqRMax, g_bb0eqRT0);
}

static void __stdcall UvRun391BB0(void* panel)
{
    g_bb0TailMark = 0;
    g_bb0sThis = 0;
    g_bb0fThis = 0;
    g_bb0lThis = 0;
    g_bb0gThis = 0;
    LONGLONG t0 = QpcNow();
    void* fn = g_real391BB0;
    __asm {
        push panel
        call fn
    }
    LONG total = (LONG)QpcUs(t0);
    AccUsVal(&g_bb0N, &g_bb0Us, &g_bb0Max, total);
    LONG tail = 0;
    if (g_bb0TailMark)
    {
        tail = (LONG)QpcUs(g_bb0TailMark);
        if (tail < 0)
            tail = 0;
        if (tail > total)
            tail = total;
        AccUsVal(&g_bb0tN, &g_bb0tUs, &g_bb0tMax, tail);
        AccUsVal(&g_bb0hN, &g_bb0hUs, &g_bb0hMax, total - tail);
    }
    LONG other = total - g_bb0sThis - g_bb0fThis - g_bb0lThis - g_bb0gThis - tail;
    if (other < 0)
        other = 0;
    AccUsVal(&g_bb0oN, &g_bb0oUs, &g_bb0oMax, other);
    g_uvSkipListTail = 0;
}

static void __stdcall UvStampBb0Tail()
{
    g_bb0TailMark = QpcNow();
}

static void __stdcall UvRun3810A0(void* panel)
{
    LONGLONG t0 = QpcNow();
    void* fn = g_real3810A0;
    if (!fn)
        return;
    __asm {
        push panel
        call fn
    }
    AccUs(&g_rorgN, &g_rorgUs, &g_rorgMax, t0);
}

__declspec(naked) static void Hook393510()
{
    __asm {
        push eax
        call UvOn393510
        ret
    }
}

__declspec(naked) static void Hook393290()
{
    __asm {
        push dword ptr [esp]
        push esi
        call UvOnPanelRebuild
        test eax, eax
        jnz skip_rebuild
        push dword ptr [esp]
        push esi
        call UvTimeCall393290
        push esi
        call UvNoteRebuildArmy
        ret
    skip_rebuild:
        ret
    }
}

static int __stdcall UvOnIdleBrigadeRefresh(void* panel, DWORD retaddr)
{
    g_uvSkipListTail = 0;
    if (!false || !panel)
        return 0;
    if (ExeRvaOf(retaddr) != 0x25418C)
        return 0;
    __try
    {
        // Пока 393290 после роспуска/смены армии не отработал — не ходить
        // по старым CUnitStatusEntry. Сам idle 391BB0 иначе нужен иконкам.
        if (g_uvNeedRebuild)
        {
            InterlockedIncrement(&g_uvSkipRebuildN);
            return 1;
        }
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        g_uvSkipListTail = 0;
    }
    return 0;
}

__declspec(naked) static void Hook391BB0()
{
    __asm {
        push ebp
        mov ebp, esp
        push dword ptr [ebp + 4]
        push dword ptr [ebp + 8]
        call UvOnIdleBrigadeRefresh
        test eax, eax
        jnz bb0_skip
        push dword ptr [ebp + 8]
        call UvRun391BB0
        mov esp, ebp
        pop ebp
        ret 4
    bb0_skip:
        mov dword ptr [g_uvSkipListTail], 0
        mov esp, ebp
        pop ebp
        ret 4
    }
}

__declspec(naked) static void Hook3810A0()
{
    __asm {
        push ebp
        mov ebp, esp
        push dword ptr [ebp + 8]
        call UvRun3810A0
        mov esp, ebp
        pop ebp
        ret 4
    }
}

// После 393290 (391C6E): цикл CUnitStatusEntry / unit_icon. Реорг это не делает.
// Кнопки split/reorg в голове 391BB0 (FindChild list + hash + 393290).
__declspec(naked) static void Hook391C6E()
{
    __asm {
        cmp dword ptr [g_uvSkipListTail], 0
        je bb0_tail_real
        mov dword ptr [g_uvSkipListTail], 0
        mov byte ptr [ebx], 0
        jmp dword ptr [g_bb0Epilogue]
    bb0_tail_real:
        pushad
        pushfd
        call UvStampBb0Tail
        popfd
        popad
        jmp dword ptr [g_real391C6E]
    }
}

// 3.77: wrap CALL внутри головы 391BB0. pushad сохраняет ecx/eax/esi.
__declspec(naked) static void Hook391BEE_Str()
{
    __asm {
        pushad
        pushfd
        call UvBb0sEnter
        popfd
        popad
        call dword ptr [g_fn009350]
        pushad
        pushfd
        call UvBb0sLeave
        popfd
        popad
        jmp dword ptr [g_bb0ContStr]
    }
}

__declspec(naked) static void Hook391BFE_Find()
{
    __asm {
        lea edx, [ebp - 0x30]
        push edx
        pushad
        pushfd
        call UvBb0fEnter
        popfd
        popad
        call eax
        pushad
        pushfd
        call UvBb0fLeave
        popfd
        popad
        jmp dword ptr [g_bb0ContFind]
    }
}

__declspec(naked) static void Hook391C2D_List()
{
    __asm {
        mov edx, [esi]
        mov eax, [edx + 0x7C]
        mov ecx, esi
        pushad
        pushfd
        push eax
        call UvNoteList7c
        call UvBb0lEnter
        popfd
        popad
        call eax
        pushad
        pushfd
        call UvBb0lLeave
        popfd
        popad
        jmp dword ptr [g_bb0ContList]
    }
}

__declspec(naked) static void Hook391C44_Hash()
{
    __asm {
        pushad
        pushfd
        call UvBb0gEnter
        popfd
        popad
        call dword ptr [g_fn19C160]
        pushad
        pushfd
        call UvBb0gLeave
        popfd
        popad
        jmp dword ptr [g_bb0ContHash]
    }
}

__declspec(naked) static void Hook5B2750()
{
    __asm {
        push ecx
        call UvTime5B2750
        ret
    }
}

// 38AF39 уже сделал push esi (outer). 38B4C0 живёт в ESI — не звать из C++
// (3.80 steal / 3.92–3.93 C++ call: AV в кучу на первом sync-miss).
__declspec(naked) static void Hook38AF3A_Sync()
{
    __asm {
        pushad
        pushfd
        push dword ptr [esp + 36]
        call UvTimeSyncMissEnter
        popfd
        popad
        call dword ptr [g_fn38B4C0]
        pushad
        pushfd
        call UvTimeSyncMissLeave
        popfd
        popad
        jmp dword ptr [g_bb0ContSync]
    }
}

// 38AF44: call 38B2E0 (EDI=list). Регистры this — через pushad вокруг call.
__declspec(naked) static void Hook38AF44_EqA()
{
    __asm {
        pushad
        pushfd
        call UvBb0eqAEnter
        popfd
        popad
        call dword ptr [g_fn38B2E0]
        pushad
        pushfd
        call UvBb0eqALeave
        popfd
        popad
        jmp dword ptr [g_bb0ContEqA]
    }
}

// 38AF49: call 38B140 (ESI=list).
__declspec(naked) static void Hook38AF49_EqB()
{
    __asm {
        pushad
        pushfd
        push dword ptr [esp + 8]
        call UvBb0eqBEnter
        popfd
        popad
        call dword ptr [g_fn38B140]
        pushad
        pushfd
        call UvBb0eqBLeave
        popfd
        popad
        jmp dword ptr [g_bb0ContEqB]
    }
}

// 38B152: push ebx; push edi; call edx; call 731C00 — шапка 38B140.
__declspec(naked) static void Hook38B152_EqH()
{
    __asm {
        push ebx
        push edi
        pushad
        pushfd
        call UvBb0eqHEnter
        popfd
        popad
        call edx
        call dword ptr [g_fn731C00]
        pushad
        pushfd
        call UvBb0eqHLeave
        popfd
        popad
        jmp dword ptr [g_bb0ContEqH]
    }
}

// 38B183: add ecx,0x1C; call eax(=5B1FA0). Skip Show только equal-path;
// иначе EAX как в ванили (rebuild 38B4C0 не эмулировать).
__declspec(naked) static void Hook38B183_EqV()
{
    __asm {
        add ecx, 0x1C
        pushad
        pushfd
        push eax
        push ecx
        call UvTimeEqVInner
        popfd
        popad
        jmp dword ptr [g_bb0ContEqV]
    }
}

// Срезы 5E4490: p→v @4507, v→l @4595, l→t @4672.
__declspec(naked) static void Hook5E4507_EqVp()
{
    __asm {
        pushad
        pushfd
        push 1
        call UvEqVSliceTo
        popfd
        popad
        mov ebx, dword ptr [esi + 0x258]
        jmp dword ptr [g_bb0ContEqVp]
    }
}

__declspec(naked) static void Hook5E4595_EqVv()
{
    __asm {
        pushad
        pushfd
        push 2
        call UvEqVSliceTo
        popfd
        popad
        mov edi, dword ptr [esi + 0x41c]
        jmp dword ptr [g_bb0ContEqVv]
    }
}

__declspec(naked) static void Hook5E4672_EqTa()
{
    __asm {
        pushad
        pushfd
        push 3
        call UvEqVSliceTo
        popfd
        popad
        mov ebx, dword ptr [esi + 0x2d8]
        jmp dword ptr [g_bb0ContEqVl]
    }
}

__declspec(naked) static void Hook5E46A5_EqTb()
{
    __asm {
        pushad
        pushfd
        push 4
        call UvEqVSliceTo
        mov eax, dword ptr [esi + 0x298]
        sub eax, dword ptr [esi + 0x294]
        sar eax, 2
        push eax
        call UvNoteTbCount
        popfd
        popad
        mov ebx, dword ptr [esi + 0x298]
        jmp dword ptr [g_bb0ContEqTb]
    }
}

// 5E46C9: mov edx,[ecx]; mov eax,[edx+0x34]; call eax — Tb child Show.
__declspec(naked) static void Hook5E46C9_TbC()
{
    __asm {
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x34]
        pushad
        pushfd
        push eax
        push ecx
        call UvTimeTbChild
        popfd
        popad
        jmp dword ptr [g_bb0ContEqTbC]
    }
}

__declspec(naked) static void Hook5E46D5_EqTc()
{
    __asm {
        pushad
        pushfd
        push 5
        call UvEqVSliceTo
        popfd
        popad
        mov ebx, dword ptr [esi + 0x2f8]
        jmp dword ptr [g_bb0ContEqTc]
    }
}

__declspec(naked) static void Hook5E4705_EqTd()
{
    __asm {
        pushad
        pushfd
        push 6
        call UvEqVSliceTo
        popfd
        popad
        mov ebx, dword ptr [esi + 0x318]
        jmp dword ptr [g_bb0ContEqTd]
    }
}

// 5E4735: linked list перед спецблоком — bb0eqVw.
__declspec(naked) static void Hook5E4735_EqVw()
{
    __asm {
        pushad
        pushfd
        push 7
        call UvEqVSliceTo
        popfd
        popad
        mov edi, dword ptr [esi + 0x46c]
        jmp dword ptr [g_bb0ContEqVw]
    }
}

// 5E4762: спецблок (possible alloc) — bb0eqVx.
__declspec(naked) static void Hook5E4762_EqVx()
{
    __asm {
        pushad
        pushfd
        push 8
        call UvEqVSliceTo
        call UvNoteEqVxHit
        popfd
        popad
        or ebx, 0xffffffff
        cmp dword ptr [esi + 0x490], ebx
        jmp dword ptr [g_bb0ContEqVx]
    }
}

// 38B1C2: call 008ED0 — copy string на стек.
__declspec(naked) static void Hook38B1C2_EqS()
{
    __asm {
        pushad
        pushfd
        call UvBb0eqSEnter
        popfd
        popad
        call dword ptr [g_fn008ED0]
        pushad
        pushfd
        call UvBb0eqSLeave
        popfd
        popad
        jmp dword ptr [g_bb0ContEqS]
    }
}

// 38B1CD: call 38A4D0 — применить строку к child.
__declspec(naked) static void Hook38B1CD_EqR()
{
    __asm {
        pushad
        pushfd
        call UvBb0eqREnter
        popfd
        popad
        call dword ptr [g_fn38A4D0]
        pushad
        pushfd
        call UvBb0eqRLeave
        popfd
        popad
        jmp dword ptr [g_bb0ContEqR]
    }
}

// 5B275C: mov edx,[eax+0x24]; call edx — Update одной строки listbox.
__declspec(naked) static void Hook5B275C_Child()
{
    __asm {
        mov edx, [eax + 0x24]
        pushad
        pushfd
        push edx
        call UvBb0chEnter
        popfd
        popad
        call edx
        pushad
        pushfd
        call UvBb0chLeave
        popfd
        popad
        jmp dword ptr [g_bb0ContChild]
    }
}

static void __stdcall UvOn393570(void* panel, DWORD retaddr)
{
    UvHideDetailKeep(panel);
    // 2557E1 каждый idle при da8!=1. Invalidate оттуда → NeedRebuild
    // ещё до первого клика; 3.73 ещё и skip 391BB0 — реорг/роспуск мертвы.
    if (ExeRvaOf(retaddr) != 0x2557E6)
        UvInvalidateBrigadePanel();
}

__declspec(naked) static void Hook393570()
{
    __asm {
        push dword ptr [esp]
        push esi
        call UvOn393570
        ret
    }
}

// 39332D: list +0x5C. После роспуска дети UAF — пропускаем зачистку,
// 393290 навешивает новые виджеты.
__declspec(naked) static void Hook393ListClear()
{
    __asm {
        mov dword ptr [g_uvLastList], edi
        cmp byte ptr [g_uvNeedRebuild], 0
        je vanilla_clear
        pushad
        push edi
        call UvUnlinkListHead
        popad
        jmp dword ptr [g_afterListClear]
    vanilla_clear:
        jmp dword ptr [g_realListClear]
    }
}

__declspec(align(16)) static unsigned char g_trampProvDirty[32];
__declspec(align(16)) static unsigned char g_trampArmyPick[32];
__declspec(align(16)) static unsigned char g_trampArmyMove[32];
__declspec(align(16)) static unsigned char g_trampSelProj[32];
__declspec(align(16)) static unsigned char g_trampUnitViewCtor[32];
__declspec(align(16)) static unsigned char g_trampIdlerNotify[32];
__declspec(align(16)) static unsigned char g_trampPanelRefresh[32];
__declspec(align(16)) static unsigned char g_trampPanelRebuild[32];
__declspec(align(16)) static unsigned char g_trampBb0[32];
__declspec(align(16)) static unsigned char g_trampBb0Tail[32];
__declspec(align(16)) static unsigned char g_trampListUpd[32];
__declspec(align(16)) static unsigned char g_trampRorg[32];
__declspec(align(16)) static unsigned char g_trampListClear[32];
__declspec(align(16)) static unsigned char g_trampPanelHide[32];
__declspec(align(16)) static unsigned char g_trampDlgCtor[32];
__declspec(align(16)) static unsigned char g_trampInflate[32];
__declspec(align(16)) static unsigned char g_trampMapFn[32];
__declspec(align(16)) static unsigned char g_trampEvtCreate4[32];
__declspec(align(16)) static unsigned char g_trampOverlay[32];
__declspec(align(16)) static unsigned char g_trampCam[32];
__declspec(align(16)) static unsigned char g_trampMtx[32];
__declspec(align(16)) static unsigned char g_trampVw[32];
__declspec(align(16)) static unsigned char g_trampIco[32];
__declspec(align(16)) static unsigned char g_trampGfx[32];
__declspec(align(16)) static unsigned char g_trampPre[32];
__declspec(align(16)) static unsigned char g_trampGui2[32];
__declspec(align(16)) static unsigned char g_trampCln[32];
__declspec(align(16)) static unsigned char g_trampTail[32];
__declspec(align(16)) static unsigned char g_trampLkp[32];
__declspec(align(16)) static unsigned char g_trampStr[32];
__declspec(align(16)) static unsigned char g_trampClu[32];
__declspec(align(16)) static unsigned char g_trampPump[32];
__declspec(align(16)) static unsigned char g_trampWck[32];

static void __fastcall MaybeDeleteUnitView(void* view)
{
    int slot = UvFind(view);
    if (slot >= 0)
    {
        UvHide(view);
        g_uvPool[slot].inUse = false;
        UvRecount();
        return;
    }
    if (!view)
        return;
    void** vt = *(void***)view;
    if (!vt || !vt[0])
        return;
    typedef void (__thiscall* tDtor)(void*, int);
    ((tDtor)vt[0])(view, 1);
}

static void* __fastcall HookUnitViewCtor(void* idler, void* edx, void* buf, void* army, int z, void* extra)
{
    (void)edx;
    LONGLONG t0 = QpcNow();
    void* result = 0;

    if (idler != g_uvOwner)
        UvPoolReset();
    g_uvOwner = idler;
    UvDropDead();

    if (false && buf && army && z == 0)
    {
        for (int i = 0; i < UV_POOL_MAX; i++)
        {
            void* view = g_uvPool[i].view;
            if (!view || g_uvPool[i].inUse || !UvViewAlive(view))
                continue;
            bool rebound = false;
            __try
            {
                *(void**)((char*)view + 0x28) = army;
                *(void**)((char*)view + 0x2C) = idler;
                rebound = true;
            }
            __except (EXCEPTION_EXECUTE_HANDLER)
            {
                memset(&g_uvPool[i], 0, sizeof(g_uvPool[i]));
            }
            if (!rebound)
                continue;
            UvShow(view);
            if (buf != view && g_gameDelete)
                g_gameDelete(buf);
            g_uvPool[i].inUse = true;
            UvRecount();
            InterlockedIncrement(&g_uvReuseN);
            InterlockedIncrement(&g_uvN);
            InterlockedExchangeAdd(&g_uvUs, (LONG)QpcUs(t0));
            return view;
        }
    }

    if (g_realUnitViewCtor)
        result = g_realUnitViewCtor(idler, buf, army, z, extra);

    if (z == 0 && result && UvViewAlive(result))
    {
        int freeSlot = -1;
        if (UvFind(result) < 0)
        {
            for (int i = 0; i < UV_POOL_MAX; i++)
            {
                if (!g_uvPool[i].view)
                {
                    freeSlot = i;
                    break;
                }
            }
            if (freeSlot >= 0)
            {
                g_uvPool[freeSlot].view = result;
                g_uvPool[freeSlot].inUse = true;
                UvRecount();
            }
        }
        else
        {
            int i = UvFind(result);
            if (i >= 0)
                g_uvPool[i].inUse = true;
            UvRecount();
        }
    }

    InterlockedIncrement(&g_uvN);
    InterlockedExchangeAdd(&g_uvUs, (LONG)QpcUs(t0));
    return result;
}

static void __stdcall HookProvDirty(void* a, int b, void* c)
{
    LONGLONG t0 = QpcNow();
    if (g_realProvDirty)
        g_realProvDirty(a, b, c);
    AccUs(&g_dirtyN, &g_dirtyUs, &g_dirtyMax, t0);
}

static void __stdcall HookSelProj(void* mgr, void* obj130)
{
    LONGLONG t0 = QpcNow();
    if (!false && g_realSelProj)
        g_realSelProj(mgr, obj130);
    else
        InterlockedIncrement(&g_projSkipN);
    InterlockedIncrement(&g_projN);
    InterlockedExchangeAdd(&g_projUs, (LONG)QpcUs(t0));
}

static void __fastcall HookArmyPick(void* self, void* edx, DWORD a)
{
    (void)edx;
    UvEqVInvalidateShow();
    LONGLONG t0 = QpcNow();
    if (g_realArmyPick)
        g_realArmyPick(self, a);
    InterlockedIncrement(&g_pickN);
    InterlockedExchangeAdd(&g_pickUs, (LONG)QpcUs(t0));
}

static void __fastcall HookArmyMove(void* self, void* edx, DWORD a, DWORD b)
{
    (void)edx;
    LONGLONG t0 = QpcNow();
    if (g_realArmyMove)
        g_realArmyMove(self, a, b);
    InterlockedIncrement(&g_moveN);
    InterlockedExchangeAdd(&g_moveUs, (LONG)QpcUs(t0));
}

static void __fastcall HookIdlerNotify(void* idler, void* edx, void* army)
{
    (void)edx;
    LONGLONG t0 = QpcNow();
    if (g_realIdlerNotify)
        g_realIdlerNotify(idler, army);
    g_uvLastIdler = idler;
    if (false)
    {
        UvHideDetailIfMulti(idler);
        __try
        {
            if (g_uvNeedRebuild && *(DWORD*)((char*)idler + 0xDA8) == 1)
            {
                void* panel = *(void**)((char*)idler + 0x1640);
                if (panel)
                    UvDeferPanelRefresh(panel);
            }
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
        }
    }
    InterlockedIncrement(&g_ntfN);
    InterlockedExchangeAdd(&g_ntfUs, (LONG)QpcUs(t0));
}

static void __stdcall UvNoteLocSkip()
{
    InterlockedIncrement(&g_uvSkipLocN);
}

// 26A958: GetLoc ARMIES/NAVIES + sprintf на каждый add. При рамке из N
// армий это N раз за один клик. После da8==2 заголовок уже показан.
__declspec(naked) static void HookLocGate()
{
    __asm {
        mov eax, dword ptr [edi + 0x0DA8]
        cmp eax, 2
        jg skip_loc
        jmp dword ptr [g_uvLocContinue]
    skip_loc:
        call UvNoteLocSkip
        jmp dword ptr [g_uvLocEpilogue]
    }
}

// 3.44: ивенты / DefaultDialog (инфо, мобилизация) / карта.
// UI only: checksum и симуляцию не трогаем. Как unitpanel — Hide
// вместо Destroy, повторно отдаём уже собранное GUI.
// CEventWindow 4A8F30 грузит Event_*_Window через vfunc +0x2C.
// CEU3Dialog 240680 → inflate 240B90 (new 0x568 + разбор .gui).
// Оба dtor зовут vfunc +0x50 Destroy у GUI; подменяем на Hide,
// только если указатель лежит в нашем пуле.
static const int WIN_POOL = 8;
struct WinSlot
{
    void* gui;
    char  name[48];
    bool  busy;
};
static WinSlot g_evtGui[WIN_POOL];
static WinSlot g_dlgGui[WIN_POOL];
static char    g_pendingDlgName[48];

typedef void* (__thiscall* tDlgCtor)(void* factory, void* self, void* name);
typedef void* (__stdcall* tInflate)(void* a, void* b, void* c);
typedef void (__stdcall* tMapFn)(void* a);
typedef void (__stdcall* tMapIdle1)(void* a);
typedef void (__stdcall* tMapIco4)(void* a, void* b, void* c, void* d);
typedef unsigned char (__stdcall* tMapGfx1)(void* a);
typedef void (__thiscall* tPreCam)(void* self);
typedef void (__stdcall* tGui2)(void* a, unsigned b);
typedef void (__thiscall* tIdleTail)(void* self, void* a);
typedef void* (__stdcall* tLkp3)(void* a, void* b, void* c);
static tDlgCtor g_realDlgCtor = 0;
static tInflate g_realInflate = 0;
static tMapFn   g_realMapFn = 0;
static tMapIdle1 g_realOverlay = 0;
static tMapIdle1 g_realCam = 0;
static tMapIdle1 g_realMtx = 0;
static tMapIdle1 g_realVw = 0;
static tMapIco4  g_realIco = 0;
static tMapGfx1  g_realGfx = 0;
static tPreCam   g_realPre = 0;
static tGui2     g_realGui2 = 0;
static tMapIdle1 g_realCln = 0;
static tIdleTail g_realTail = 0;
static tLkp3     g_realLkp = 0;
static void*     g_realStr = 0;
static void*     g_realClu = 0;
static void*     g_realPump = 0;
static void*     g_realWck = 0;

static bool GuiPtrAlive(void* p)
{
    if (!p || !g_base)
        return false;
    __try
    {
        DWORD vt = *(DWORD*)p;
        if (g_imageSize && vt >= g_base && vt < g_base + g_imageSize)
            return true;
        vt = *(DWORD*)((char*)p + 0x18);
        return g_imageSize && vt >= g_base && vt < g_base + g_imageSize;
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        return false;
    }
}

static void GuiCallVfunc(void* obj, unsigned voff)
{
    if (!obj)
        return;
    __try
    {
        void** vt = *(void***)obj;
        if (!vt)
            return;
        typedef void (__thiscall* tFn)(void*);
        tFn fn = (tFn)vt[voff / 4];
        if (fn)
            fn(obj);
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
    }
}

static void GuiHideTree(void* gui)
{
    GuiCallVfunc(gui, 0x38);
    GuiCallVfunc((char*)gui + 0x18, 0x38);
}

static void GuiShowTree(void* gui)
{
    GuiCallVfunc(gui, 0x34);
    GuiCallVfunc((char*)gui + 0x18, 0x34);
}

static void ReadStdName(void* s, char* out, int cap)
{
    if (!out || cap < 2)
        return;
    out[0] = 0;
    if (!s)
        return;
    __try
    {
        unsigned size = *(unsigned*)((char*)s + 0x10);
        unsigned capa = *(unsigned*)((char*)s + 0x14);
        const char* p = (capa < 0x10) ? (const char*)s : *(const char**)s;
        if (!p)
            return;
        if (size > 80)
            size = 80;
        if ((int)size >= cap)
            size = (unsigned)(cap - 1);
        memcpy(out, p, size);
        out[size] = 0;
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        out[0] = 0;
    }
}

static void WinPoolReset()
{
    memset(g_evtGui, 0, sizeof(g_evtGui));
    memset(g_dlgGui, 0, sizeof(g_dlgGui));
    g_pendingDlgName[0] = 0;
}

static bool WinMarkFree(WinSlot* pool, void* gui)
{
    if (!gui)
        return false;
    bool hit = false;
    for (int i = 0; i < WIN_POOL; i++)
    {
        if (pool[i].gui == gui)
        {
            pool[i].busy = false;
            hit = true;
        }
    }
    return hit;
}

static void WinStore(WinSlot* pool, const char* name, void* gui)
{
    if (!gui || !name || !name[0])
        return;
    int empty = -1;
    for (int i = 0; i < WIN_POOL; i++)
    {
        if (pool[i].gui == gui)
        {
            strncpy_s(pool[i].name, sizeof(pool[i].name), name, _TRUNCATE);
            pool[i].busy = true;
            return;
        }
        if (pool[i].gui && !GuiPtrAlive(pool[i].gui))
            memset(&pool[i], 0, sizeof(pool[i]));
        if (!pool[i].gui && empty < 0)
            empty = i;
    }
    if (empty < 0)
        return;
    pool[empty].gui = gui;
    strncpy_s(pool[empty].name, sizeof(pool[empty].name), name, _TRUNCATE);
    pool[empty].busy = true;
}

static void* WinTake(WinSlot* pool, const char* name)
{
    if (!name || !name[0])
        return 0;
    for (int i = 0; i < WIN_POOL; i++)
    {
        if (!pool[i].gui || pool[i].busy)
            continue;
        if (_stricmp(pool[i].name, name) != 0)
            continue;
        if (!GuiPtrAlive(pool[i].gui))
        {
            memset(&pool[i], 0, sizeof(pool[i]));
            continue;
        }
        pool[i].busy = true;
        return pool[i].gui;
    }
    return 0;
}

static bool PatchBytes(DWORD rva, const void* expect, const void* neu, unsigned n, const char* tag)
{
    unsigned char* p = (unsigned char*)(g_base + rva);
    if (memcmp(p, expect, n) != 0)
    {
        Log("%s: сигнатура не совпала rva %06X (%02X %02X %02X %02X)",
            tag, rva, p[0], p[1], p[2], p[3]);
        return false;
    }
    DWORD old = 0;
    if (!VirtualProtect(p, n, PAGE_EXECUTE_READWRITE, &old))
        return false;
    memcpy(p, neu, n);
    VirtualProtect(p, n, old, &old);
    FlushInstructionCache(GetCurrentProcess(), p, n);
    return true;
}

static bool PatchE8(DWORD rva, const unsigned char* expect5, void* dest, const char* tag)
{
    unsigned char neu[5];
    neu[0] = 0xE8;
    *(DWORD*)(neu + 1) = (DWORD)(DWORD_PTR)dest - (g_base + rva + 5);
    return PatchBytes(rva, expect5, neu, 5, tag);
}

static void* __fastcall EvtCreateOrReuse(void* obj, void* edx, void* name, void* extra)
{
    (void)edx;
    LONGLONG t0 = QpcNow();
    char key[48];
    ReadStdName(name, key, 48);
    void* r = 0;
    __try
    {
        void** vt = *(void***)obj;
        typedef void* (__thiscall* tCreate)(void*, void*, void*);
        r = ((tCreate)vt[0x2C / 4])(obj, name, extra);
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        r = 0;
    }
    if (r)
        WinStore(g_evtGui, key, r);
    InterlockedIncrement(&g_evtN);
    InterlockedExchangeAdd(&g_evtUs, (LONG)QpcUs(t0));
    return r;
}

__declspec(naked) static void EvtCreateStub_m1c()
{
    __asm {
        mov ecx, dword ptr [ebp - 0x1c]
        jmp EvtCreateOrReuse
    }
}

__declspec(naked) static void EvtCreateStub_m10()
{
    __asm {
        mov ecx, dword ptr [ebp - 0x10]
        jmp EvtCreateOrReuse
    }
}

static void __fastcall HideGuiKeep(void* gui)
{
    if (!gui)
        return;
    bool kept = WinMarkFree(g_evtGui, gui) | WinMarkFree(g_dlgGui, gui);
    if (!kept)
    {
        GuiCallVfunc(gui, 0x50);
        return;
    }
    GuiHideTree(gui);
}

static void* __fastcall HookDlgCtor(void* factory, void* edx, void* self, void* name)
{
    (void)edx;
    ReadStdName(name, g_pendingDlgName, sizeof(g_pendingDlgName));
    LONGLONG t0 = QpcNow();
    void* r = g_realDlgCtor ? g_realDlgCtor(factory, self, name) : 0;
    g_pendingDlgName[0] = 0;
    InterlockedIncrement(&g_dlgN);
    InterlockedExchangeAdd(&g_dlgUs, (LONG)QpcUs(t0));
    return r;
}

// 240B90: stdcall 3 аргумента + живой ESI (шаблон GUI). C++-обёртка
// 3.44 затирала ESI → AV [esi+0xA0] на первом DefaultDialog.
__declspec(naked) static void* __stdcall CallInflateTramp(void* esiObj, void* a, void* b, void* c)
{
    __asm {
        push ebp
        mov ebp, esp
        push esi
        mov esi, dword ptr [ebp + 8]
        push dword ptr [ebp + 20]
        push dword ptr [ebp + 16]
        push dword ptr [ebp + 12]
        call dword ptr [g_realInflate]
        pop esi
        pop ebp
        ret 16
    }
}

static void* __fastcall HookInflateCore(void* esiObj, void* edx, void* a, void* b, void* c)
{
    (void)edx;
    LONGLONG t0 = QpcNow();
    void* r = g_realInflate ? CallInflateTramp(esiObj, a, b, c) : 0;
    InterlockedIncrement(&g_infN);
    InterlockedExchangeAdd(&g_infUs, (LONG)QpcUs(t0));
    return r;
}

__declspec(naked) static void HookInflate()
{
    __asm {
        mov ecx, esi
        jmp HookInflateCore
    }
}

static void __stdcall HookMapFn(void* a)
{
    LONGLONG t0 = QpcNow();
    if (g_realMapFn)
        g_realMapFn(a);
    InterlockedIncrement(&g_mapN);
    InterlockedExchangeAdd(&g_mapUs, (LONG)QpcUs(t0));
}

// 257B60: stdcall 1 аргумент (push ebx; call), ret 4. Ввод/оверлей
// карты внутри IdleInGame. 3.47 только таймер.
static void __stdcall HookOverlay(void* a)
{
    LONG tMark = IdleMarkNow();
    if (tMark)
    {
        if (g_idleOvlLeave1 > 0)
        {
            LONG gap = tMark - g_idleOvlLeave1;
            if (gap > g_idleOvlGapMax)
                g_idleOvlGapMax = gap;
        }
        if (g_idleOvlEnter0 == 0)
            g_idleOvlEnter0 = tMark;
        g_idleOvlEnter1 = tMark;
        g_idleOvlN++;
    }
    g_idleInOvl++;
    LONGLONG t0 = QpcNow();
    if (g_realOverlay)
        g_realOverlay(a);
    AccUsIdle(&g_ovlN, &g_ovlUs, &g_ovlMax, t0, &g_idleOvlLoc);
    g_idleInOvl--;
    tMark = IdleMarkNow();
    if (tMark)
    {
        if (g_idleOvlLeave0 == 0)
            g_idleOvlLeave0 = tMark;
        g_idleOvlLeave1 = tMark;
        g_idleOvlMark = tMark;
    }
}

// 2592F0: stdcall 1 аргумент, тот же call site. Копия камеры/view
// (alloca 0x4294). 3.47 только таймер. 254530 (ProvDirty-кластер)
// не хукаем: живой ESI.
//
// 3.59: не skip всей 2592F0 (пустая карта). Ваниль уже умеет не
// рисовать 3D: [CInGameIdler+0x1e08] > 0 → после иконок 3F7CE0
// прыжок на 260F0C. Load ставит 3. Мы ставим 1, если поза камеры
// (gfx+0x114, 48 байт) не менялась, нет дня/dirty/pick, и не каждый
// 8-й кадр. Иконки остаются.
static const int CAM_STILL_FULL_EVERY = 8;
static DWORD g_camPose[12];
static int   g_camPoseOk = 0;
static int   g_camStillStreak = 0;
static LONG  g_camLastDirtyN = 0;
static LONG  g_camLastPickN = 0;
static LONG  g_camLastMoveN = 0;

static void CamStillMaybeSkipDraw(void* idler)
{
    if (!false || !idler)
        return;
    __try
    {
        DWORD gfx = *(DWORD*)((char*)idler + 0x17E0);
        if (!gfx || gfx < 0x10000)
            return;
        DWORD cur[12];
        memcpy(cur, (void*)(gfx + 0x114), sizeof(cur));
        int slot = *(int*)((char*)idler + 0x1E08);
        LONG dirtyN = g_dirtyN;
        LONG pickN = g_pickN;
        LONG moveN = g_moveN;
        bool needFull = false;
        if (!g_camPoseOk)
            needFull = true;
        else if (memcmp(cur, g_camPose, sizeof(cur)) != 0)
            needFull = true;
        else if (g_idleChkN > 0 || g_idleWckN > 0)
            needFull = true;
        else if (dirtyN != g_camLastDirtyN || pickN != g_camLastPickN || moveN != g_camLastMoveN)
            needFull = true;
        memcpy(g_camPose, cur, sizeof(cur));
        g_camPoseOk = 1;
        g_camLastDirtyN = dirtyN;
        g_camLastPickN = pickN;
        g_camLastMoveN = moveN;
        if (slot > 0)
        {
            g_camStillStreak = 0;
            return;
        }
        if (needFull)
        {
            g_camStillStreak = 0;
            return;
        }
        g_camStillStreak++;
        if (g_camStillStreak % CAM_STILL_FULL_EVERY == 0)
            return;
        *(int*)((char*)idler + 0x1E08) = 1;
        InterlockedIncrement(&g_camSkipN);
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        g_camPoseOk = 0;
        g_camStillStreak = 0;
    }
}

static void __stdcall HookCam(void* a)
{
    LONG tMark = IdleMarkNow();
    if (tMark && g_idleHeadMark == 0)
        g_idleHeadMark = tMark;
    if (tMark)
        g_idleCamN++;
    g_idleInCam++;
    CamStillMaybeSkipDraw(a);
    LONGLONG t0 = QpcNow();
    if (g_realCam)
        g_realCam(a);
    AccUsIdle(&g_camN, &g_camUs, &g_camMax, t0, &g_idleCamLoc);
    g_idleInCam--;
    tMark = IdleMarkNow();
    if (tMark)
    {
        if (g_idleCamLeave0 == 0)
            g_idleCamLeave0 = tMark;
        g_idleCamLeave1 = tMark;
    }
}

// 5AE320 / 5EB7C0: stdcall 1, матрицы камеры внутри 2592F0.
static void __stdcall HookMtx(void* a)
{
    LONGLONG t0 = QpcNow();
    if (g_realMtx)
        g_realMtx(a);
    AccUs(&g_mtxN, &g_mtxUs, &g_mtxMax, t0);
}

static void __stdcall HookVw(void* a)
{
    LONGLONG t0 = QpcNow();
    if (g_realVw)
        g_realVw(a);
    AccUs(&g_vwN, &g_vwUs, &g_vwMax, t0);
}

// 3F7CE0: stdcall 4 (push×4; call из 259459), карта/иконки при graphics on.
static void __stdcall HookIco(void* a, void* b, void* c, void* d)
{
    LONGLONG t0 = QpcNow();
    if (g_realIco)
        g_realIco(a, b, c, d);
    AccUsIdle(&g_icoN, &g_icoUs, &g_icoMax, t0, &g_idleIcoLoc);
}

// 59C370: stdcall 1, возвращает al. Не void.
static unsigned char __stdcall HookGfx(void* a)
{
    LONGLONG t0 = QpcNow();
    unsigned char r = g_realGfx ? g_realGfx(a) : 0;
    AccUs(&g_gfxN, &g_gfxUs, &g_gfxMax, t0);
    return r;
}

// 254620: thiscall, 0 стековых. До камеры, mov ecx,ebx; call.
static void __fastcall HookPreCam(void* self, void* edx)
{
    (void)edx;
    LONGLONG t0 = QpcNow();
    if (g_realPre)
        g_realPre(self);
    AccUsIdle(&g_preN, &g_preUs, &g_preMax, t0, &g_idlePreLoc);
}

// 248460: stdcall 2 (push al, push ebx), ret 8. После overlay.
static void __stdcall HookGui2(void* a, unsigned b)
{
    LONGLONG t0 = QpcNow();
    if (g_realGui2)
        g_realGui2(a, b);
    AccUsIdle(&g_gui2N, &g_gui2Us, &g_gui2Max, t0, &g_idleGui2Loc);
}

// 1F7A50: stdcall 1, затем operator delete. Хвост idle.
static void __stdcall HookCln(void* a)
{
    LONGLONG t0 = QpcNow();
    if (g_realCln)
        g_realCln(a);
    AccUs(&g_clnN, &g_clnUs, &g_clnMax, t0);
}

// 24F350: thiscall + 1 стековый, ret 4. Конец IdleInGame.
static void __fastcall HookTail(void* self, void* edx, void* a)
{
    (void)edx;
    LONGLONG t0 = QpcNow();
    if (g_realTail)
        g_realTail(self, a);
    AccUs(&g_tailN, &g_tailUs, &g_tailMax, t0);
}

// 055290: единственный call 256455, stdcall 3 (два push + eax из 054EC0
// cdecl getter), ret 0xC. ESI локальный. Обход контейнера, стек 0x9e8.
static void* __stdcall HookLkp(void* a, void* b, void* c)
{
    LONGLONG t0 = QpcNow();
    void* r = g_realLkp ? g_realLkp(a, b, c) : 0;
    AccUs(&g_lkpN, &g_lkpUs, &g_lkpMax, t0);
    return r;
}

// 588F20: stdcall 1 + живые ESI (dest std::string) и ECX. 28 вызовов из 2592F0.
__declspec(naked) static void HookStr()
{
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ecx
        push esi
        call DiagNow
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], edx
        pop esi
        pop ecx
        push dword ptr [ebp + 8]
        call dword ptr [g_realStr]
        push eax
        push dword ptr [ebp - 4]
        push dword ptr [ebp - 8]
        call AccStr
        pop eax
        mov esp, ebp
        pop ebp
        ret 4
    }
}

// 254530: call 2555E8 mov esi,ebx; ret. Живой ESI = idler, стека нет.
__declspec(naked) static void HookClu()
{
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ecx
        push esi
        call DiagNow
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], edx
        pop esi
        pop ecx
        call dword ptr [g_realClu]
        push eax
        push dword ptr [ebp - 4]
        push dword ptr [ebp - 8]
        call AccClu
        pop eax
        mov esp, ebp
        pop ebp
        ret
    }
}

// 5DF2B0: stdcall 1 + живой ESI (объект насоса). Peek/Dispatch + хвост до 5DF543.
// Единственный E8: 285727 внутри 285620 (EDI+XMM — 285620 не хукаем).
__declspec(naked) static void HookPump()
{
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ecx
        push esi
        push edi
        push ebx
        push dword ptr [ebp + 4]
        call PumpEnter
        call DiagNow
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], edx
        pop ebx
        pop edi
        pop esi
        pop ecx
        push dword ptr [ebp + 8]
        call dword ptr [g_realPump]
        push eax
        push dword ptr [ebp - 4]
        push dword ptr [ebp - 8]
        call AccPump
        pop eax
        mov esp, ebp
        pop ebp
        ret 4
    }
}

// 2859C0: stdcall 1, ДНЕВНОЙ ТИК СЕССИИ (~7 КБ): 2840F0 команды,
// POP, товары, войны, газеты. 11×285620 внутри — только насос UI.
// Три E8: 283AB1 (каждый день из 282EC0), 263234/26339D (load 262010).
// PATCH_SKIP_CHK_WIN=1 глушит все расчёты после входа на карту.
// Не skip. Карта: Source2/EXE_RVA_MAP.txt §0a.
__declspec(naked) static void HookWck()
{
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ecx
        push esi
        push edi
        push ebx
        push dword ptr [ebp + 4]
        call WckEnter
        test eax, eax
        jnz wck_skip
        call DiagNow
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], edx
        pop ebx
        pop edi
        pop esi
        pop ecx
        push dword ptr [ebp + 8]
        call dword ptr [g_realWck]
        push eax
        push dword ptr [ebp - 4]
        push dword ptr [ebp - 8]
        call AccWck
        pop eax
        mov esp, ebp
        pop ebp
        ret 4
    wck_skip:
        pop ebx
        pop edi
        pop esi
        pop ecx
        mov esp, ebp
        pop ebp
        ret 4
    }
}

static void InstallDestroyHide(DWORD rva, const char* tag)
{
    static const unsigned char expect[10] =
        { 0x8B, 0x4E, 0x04, 0x8B, 0x01, 0x8B, 0x50, 0x50, 0xFF, 0xD2 };
    unsigned char neu[10];
    neu[0] = 0x8B;
    neu[1] = 0x4E;
    neu[2] = 0x04;
    neu[3] = 0xE8;
    *(DWORD*)(neu + 4) = (DWORD)(DWORD_PTR)HideGuiKeep - (g_base + rva + 3 + 5);
    neu[8] = 0x90;
    neu[9] = 0x90;
    if (PatchBytes(rva, expect, neu, 10, tag))
        LogDbg("WinReuse: %s rva %06X Destroy GUI -> Hide", tag, rva);
}

static void InstallWindowFps()
{
    static const unsigned char sigDlg[5] = { 0x55, 0x8B, 0xEC, 0x6A, 0xFF };
    static const unsigned char sigInf[8] = { 0x55, 0x8B, 0xEC, 0x83, 0xE4, 0xF8, 0x6A, 0xFF };
    static const unsigned char sigMap[6] = { 0x55, 0x8B, 0xEC, 0x83, 0xE4, 0xF8 };

    if (StealToTrampoline(0x240680, 5, g_trampDlgCtor, sizeof(g_trampDlgCtor),
        sigDlg, (void*)HookDlgCtor, (void**)&g_realDlgCtor, "DlgCtorTime"))
        LogDbg("WinReuse: таймер CEU3Dialog ctor rva 240680");
    if (StealToTrampoline(0x240B90, 8, g_trampInflate, sizeof(g_trampInflate),
        sigInf, (void*)HookInflate, (void**)&g_realInflate, "InflateTime"))
        LogDbg("WinReuse: таймер inflate DefaultDialog rva 240B90");
    if (StealToTrampoline(0x41A450, 6, g_trampMapFn, sizeof(g_trampMapFn),
        sigMap, (void*)HookMapFn, (void**)&g_realMapFn, "MapTime"))
        LogDbg("WinReuse: таймер map follow-up rva 41A450");

    static const unsigned char sigIdle[6] = { 0x55, 0x8B, 0xEC, 0x83, 0xE4, 0xF8 };
    if (StealToTrampoline(0x254D80, 6, g_trampIdleIngame, sizeof(g_trampIdleIngame),
        sigIdle, (void*)HookIdleIngame, (void**)&g_realIdleIngame, "IdleInGame"))
        LogDbg("MapScroll: таймер IdleInGame rva 254D80 (ing= QPC мкс)");

    static const unsigned char sigOvl[5] = { 0x55, 0x8B, 0xEC, 0x6A, 0xFF };
    if (StealToTrampoline(0x257B60, 5, g_trampOverlay, sizeof(g_trampOverlay),
        sigOvl, (void*)HookOverlay, (void**)&g_realOverlay, "MapOverlay"))
        LogDbg("MapScroll: таймер overlay/input rva 257B60 (ovl=)");
    if (StealToTrampoline(0x2592F0, 5, g_trampCam, sizeof(g_trampCam),
        sigOvl, (void*)HookCam, (void**)&g_realCam, "MapCamera"))
        LogDbg("MapScroll: timer camera/view rva 2592F0 (cam=)");
        LogDbg("MapScroll: таймер camera/view rva 2592F0 (cam=)");

    static const unsigned char sigMtx[6] = { 0x55, 0x8B, 0xEC, 0x83, 0xE4, 0xF8 };
    if (StealToTrampoline(0x5AE320, 6, g_trampMtx, sizeof(g_trampMtx),
        sigMtx, (void*)HookMtx, (void**)&g_realMtx, "MapMtx"))
        LogDbg("MapScroll: таймер matrix rva 5AE320 (mtx=)");
    static const unsigned char sigVw[9] =
        { 0x55, 0x8B, 0xEC, 0x81, 0xEC, 0x08, 0x01, 0x00, 0x00 };
    if (StealToTrampoline(0x5EB7C0, 9, g_trampVw, sizeof(g_trampVw),
        sigVw, (void*)HookVw, (void**)&g_realVw, "MapView"))
        LogDbg("MapScroll: таймер view rva 5EB7C0 (vw=)");
    if (StealToTrampoline(0x3F7CE0, 5, g_trampIco, sizeof(g_trampIco),
        sigOvl, (void*)HookIco, (void**)&g_realIco, "MapIcons"))
        LogDbg("MapScroll: таймер map objects rva 3F7CE0 (ico=)");
    if (StealToTrampoline(0x59C370, 6, g_trampGfx, sizeof(g_trampGfx),
        sigMtx, (void*)HookGfx, (void**)&g_realGfx, "MapGfx"))
        LogDbg("MapScroll: таймер gfx tick rva 59C370 (gfx=)");

    static const unsigned char sigPre[9] =
        { 0x55, 0x8B, 0xEC, 0x64, 0xA1, 0x00, 0x00, 0x00, 0x00 };
    if (StealToTrampoline(0x254620, 9, g_trampPre, sizeof(g_trampPre),
        sigPre, (void*)HookPreCam, (void**)&g_realPre, "IdlePre"))
        LogDbg("MapScroll: таймер pre-cam rva 254620 (pre=)");
    if (StealToTrampoline(0x248460, 9, g_trampGui2, sizeof(g_trampGui2),
        sigPre, (void*)HookGui2, (void**)&g_realGui2, "IdleGui2"))
        LogDbg("MapScroll: таймер post-ovl GUI rva 248460 (gui2=)");
    if (StealToTrampoline(0x1F7A50, 5, g_trampCln, sizeof(g_trampCln),
        sigOvl, (void*)HookCln, (void**)&g_realCln, "IdleCln"))
        LogDbg("MapScroll: таймер idle cleanup rva 1F7A50 (cln=)");
    if (StealToTrampoline(0x24F350, 5, g_trampTail, sizeof(g_trampTail),
        sigOvl, (void*)HookTail, (void**)&g_realTail, "IdleTail"))
        LogDbg("MapScroll: таймер idle tail rva 24F350 (tail=)");
    static const unsigned char sigLkp[9] =
        { 0x55, 0x8B, 0xEC, 0x81, 0xEC, 0xE8, 0x09, 0x00, 0x00 };
    if (StealToTrampoline(0x055290, 9, g_trampLkp, sizeof(g_trampLkp),
        sigLkp, (void*)HookLkp, (void**)&g_realLkp, "IdleLkp"))
        LogDbg("MapScroll: таймер lookup rva 055290 (lkp=)");
    static const unsigned char sigStr[5] = { 0x55, 0x8B, 0xEC, 0x6A, 0xFF };
    if (StealToTrampoline(0x588F20, 5, g_trampStr, sizeof(g_trampStr),
        sigStr, (void*)HookStr, (void**)&g_realStr, "CamStr"))
        LogDbg("MapScroll: таймер string rva 588F20 ESI (str=)");
    static const unsigned char sigClu[7] =
        { 0x51, 0x8B, 0x86, 0xB4, 0x0D, 0x00, 0x00 };
    if (StealToTrampoline(0x254530, 7, g_trampClu, sizeof(g_trampClu),
        sigClu, (void*)HookClu, (void**)&g_realClu, "IdleClu"))
        LogDbg("MapScroll: таймер dirty-кластер rva 254530 ESI (clu=)");
    {
        unsigned char sigPump[8];
        memcpy(sigPump, (void*)(g_base + 0x5DF2B0), 8);
        if (sigPump[0] == 0x55 && sigPump[1] == 0x8B && sigPump[2] == 0xEC && sigPump[3] == 0xA1)
        {
            if (StealToTrampoline(0x5DF2B0, 8, g_trampPump, sizeof(g_trampPump),
                sigPump, (void*)HookPump, (void**)&g_realPump, "IdlePump"))
                LogDbg("MapScroll: таймер насоса Peek/Dispatch rva 5DF2B0 ESI (pump=)");
        }
        else
            Log("MapScroll: насос 5DF2B0 сигнатура не совпала (%02X %02X %02X %02X)",
                sigPump[0], sigPump[1], sigPump[2], sigPump[3]);
    }
    {
        static const unsigned char sigWck[5] = { 0x55, 0x8B, 0xEC, 0x6A, 0xFF };
        if (StealToTrampoline(0x2859C0, 5, g_trampWck, sizeof(g_trampWck),
            sigWck, (void*)HookWck, (void**)&g_realWck, "IdleWck"))
            LogDbg("MapScroll: таймер 2859C0 дневной тик (wck=); skip выкл");
    }
    if (HookIat(GetModuleHandleA(NULL), "user32.dll", "PeekMessageA",
        (void*)HookPeekMessageA, (void**)&g_realPeekMessageA))
        LogDbg("MapScroll: PeekMessageA IAT, счёт только внутри IdleInGame");
    else
        Log("MapScroll: PeekMessageA IAT не найден");
    if (HookIat(GetModuleHandleA(NULL), "user32.dll", "DispatchMessageA",
        (void*)HookDispatchMessageA, (void**)&g_realDispatchMessageA))
        LogDbg("MapScroll: DispatchMessageA IAT, счёт только внутри IdleInGame");
    else
        Log("MapScroll: DispatchMessageA IAT не найден");
    LogDbg("MapScroll: IdleSpike pump 5DF2B0. 285620 EDI+XMM не хукаем. 2592F0 skip только через +0x1e08");

    // 3.45: Hide GUI + delete C++ = UAF в тике CEU3Gui (5C3758 / 241BA6).
    // Пул как у unitpanel можно вернуть только вместе с C++-объектом диалога.
    LogDbg("WinReuse: пул GUI выключен (таймеры dlg/inf/map живы, Hide-keep нет)");
}

static void InstallArmySelectDiag()
{
    static const unsigned char sigDirtyHead[6] = { 0x55, 0x8B, 0xEC, 0x6A, 0xFF, 0x68 };
    static const unsigned char sigThis[6] = { 0x55, 0x8B, 0xEC, 0x83, 0xE4, 0xF8 };
    unsigned char* dirty = (unsigned char*)(g_base + RVA_PROV_DIRTY);
    if (memcmp(dirty, sigDirtyHead, sizeof(sigDirtyHead)) != 0)
        Log("ProvDirtyTime: сигнатура не совпала rva %06X (%02X %02X %02X %02X)",
            RVA_PROV_DIRTY, dirty[0], dirty[1], dirty[2], dirty[3]);
    else if (StealToTrampoline(RVA_PROV_DIRTY, 10, g_trampProvDirty, sizeof(g_trampProvDirty),
        dirty, (void*)HookProvDirty, (void**)&g_realProvDirty, "ProvDirtyTime"))
        LogDbg("ArmySelect: таймер FUN_007FC360 rva %06X", RVA_PROV_DIRTY);
    if (StealToTrampoline(RVA_ARMY_PICK, 6, g_trampArmyPick, sizeof(g_trampArmyPick),
        sigThis, (void*)HookArmyPick, (void**)&g_realArmyPick, "ArmyPickTime"))
        LogDbg("ArmySelect: таймер army_selected rva %06X", RVA_ARMY_PICK);
    if (StealToTrampoline(RVA_ARMY_MOVE, 6, g_trampArmyMove, sizeof(g_trampArmyMove),
        sigThis, (void*)HookArmyMove, (void**)&g_realArmyMove, "ArmyMoveTime"))
        LogDbg("ArmySelect: таймер army_move rva %06X", RVA_ARMY_MOVE);
    if (StealToTrampoline(0x26A7F0, 6, g_trampIdlerNotify, sizeof(g_trampIdlerNotify),
        sigThis, (void*)HookIdlerNotify, (void**)&g_realIdlerNotify, "IdlerNotifyTime"))
        LogDbg("ArmySelect: таймер CInGameIdler notify rva 26A7F0");
    if (StealToTrampoline(RVA_SEL_PROJ, 6, g_trampSelProj, sizeof(g_trampSelProj),
        sigThis, (void*)HookSelProj, (void**)&g_realSelProj, "SelProjTime"))
        LogDbg("ArmySelect: таймер mesh selection_projection rva %06X (skip=%d)", RVA_SEL_PROJ, 0);

    // 3.32 skip 1D4540 не убрал хитч: pick всё ещё 24–65 мс, stall max ~200–280 мс.
    // На клике 3E08E0 каждый раз делает operator new(0x14C) + ctor и вешает
    // проекцию в список отрисовки (крутилка/кольцо). 20 кликов = 20 объектов
    // на кадр. 3.34–3.35: кольцо не оно (pick без него всё равно 20+ мс).
    // 3.36: круги/анимация снова родные. PATCH_SKIP_SEL_PROJ=1 только для отладки.
    if (false)
    {
        unsigned char* p = (unsigned char*)(g_base + 0x1CC5B0);
        unsigned char* tail = (unsigned char*)(g_base + 0x1CCA3B);
        static const unsigned char expect[6] = { 0x8B, 0x71, 0x58, 0x8B, 0x8B, 0x08 };
        static const unsigned char expectTail[2] = { 0x80, 0x3D };
        if (memcmp(p, expect, 6) != 0 || memcmp(tail, expectTail, 2) != 0)
        {
            Log("ArmySelect: GFX-jump сигнатура не совпала rva 1CC5B0/1CCA3B (%02X %02X / %02X %02X)",
                p[0], p[1], tail[0], tail[1]);
        }
        else
        {
            DWORD old = 0;
            if (VirtualProtect(p, 6, PAGE_EXECUTE_READWRITE, &old))
            {
                p[0] = 0xE9;
                DWORD rel = (g_base + 0x1CCA3B) - ((DWORD)(p + 5));
                memcpy(p + 1, &rel, 4);
                p[5] = 0x90;
                VirtualProtect(p, 6, old, &old);
                FlushInstructionCache(GetCurrentProcess(), p, 6);
                LogDbg("ArmySelect: GFX-jump rva 1CC5B0 -> 1CCA3B (без 3E08E0, хвост notify/звук)");
            }
        }
    }

    // 3.35: vfunc +0x78 = CInGameIdler 26A7F0 каждый клик new(0x320)+CUnitView
    // 398A50 (unitpanel.gui). Одиночная смена: перевязать army на +0x28.
    if (false)
    {
        static const unsigned char sigUv[5] = { 0x55, 0x8B, 0xEC, 0x6A, 0xFF };
        if (StealToTrampoline(0x398A50, 5, g_trampUnitViewCtor, sizeof(g_trampUnitViewCtor),
            sigUv, (void*)HookUnitViewCtor, (void**)&g_realUnitViewCtor, "UnitViewReuse"))
            LogDbg("ArmySelect: reuse CUnitView rva 398A50 (пул %d, Hide/Show unitpanel)", UV_POOL_MAX);

        unsigned char* loc = (unsigned char*)(g_base + 0x26A958);
        static const unsigned char expectLoc[6] = { 0x8B, 0x87, 0xA8, 0x0D, 0x00, 0x00 };
        if (memcmp(loc, expectLoc, 6) != 0)
        {
            Log("ArmySelect: skip-loc сигнатура не совпала rva 26A958 (%02X %02X %02X %02X)",
                loc[0], loc[1], loc[2], loc[3]);
        }
        else
        {
            g_uvLocContinue = (BYTE*)(g_base + 0x26A95E);
            g_uvLocEpilogue = (BYTE*)(g_base + 0x26AE09);
            DWORD old = 0;
            if (VirtualProtect(loc, 6, PAGE_EXECUTE_READWRITE, &old))
            {
                loc[0] = 0xE9;
                DWORD rel = (DWORD)(DWORD_PTR)HookLocGate - ((DWORD)(loc + 5));
                memcpy(loc + 1, &rel, 4);
                loc[5] = 0x90;
                VirtualProtect(loc, 6, old, &old);
                FlushInstructionCache(GetCurrentProcess(), loc, 6);
                LogDbg("ArmySelect: skip GetLoc ARMIES/NAVIES при da8>2");
            }
        }

        unsigned char* del = (unsigned char*)(g_base + 0x6AE91B);
        if (del[0] == 0x8B && del[1] == 0xFF && del[2] == 0x55 && del[3] == 0x8B && del[4] == 0xEC)
            g_gameDelete = (tGameDelete)del;
        else
            Log("ArmySelect: operator delete rva 6AE91B не совпал (%02X %02X)", del[0], del[1]);

        unsigned char* dtor = (unsigned char*)(g_base + 0x26AE98);
        static const unsigned char expectDtor[10] =
            { 0x8B, 0x07, 0x8B, 0x10, 0x6A, 0x01, 0x8B, 0xCF, 0xFF, 0xD2 };
        if (memcmp(dtor, expectDtor, 10) != 0)
        {
            Log("ArmySelect: UnitView dtor-skip сигнатура не совпала rva 26AE98 (%02X %02X %02X %02X)",
                dtor[0], dtor[1], dtor[2], dtor[3]);
        }
        else
        {
            DWORD old = 0;
            if (VirtualProtect(dtor, 10, PAGE_EXECUTE_READWRITE, &old))
            {
                dtor[0] = 0x8B;
                dtor[1] = 0xCF;
                dtor[2] = 0xE8;
                DWORD rel = (DWORD)(DWORD_PTR)MaybeDeleteUnitView - ((DWORD)(dtor + 7));
                memcpy(dtor + 3, &rel, 4);
                dtor[7] = 0x90;
                dtor[8] = 0x90;
                dtor[9] = 0x90;
                VirtualProtect(dtor, 10, old, &old);
                FlushInstructionCache(GetCurrentProcess(), dtor, 10);
                LogDbg("ArmySelect: UnitView dtor-skip rva 26AE98 (кэш панели не destroy)");
            }
        }

        static const unsigned char sigRefresh[5] = { 0x51, 0x56, 0x57, 0x8B, 0xF0 };
        if (StealToTrampoline(0x393510, 5, g_trampPanelRefresh, sizeof(g_trampPanelRefresh),
            sigRefresh, (void*)Hook393510, &g_real393510, "PanelRefresh"))
            LogDbg("ArmySelect: 393510 отложен до idle/Present (не на стеке pick)");

        static const unsigned char sigRebuild[9] =
            { 0x55, 0x8B, 0xEC, 0x64, 0xA1, 0x00, 0x00, 0x00, 0x00 };
        if (StealToTrampoline(0x393290, 9, g_trampPanelRebuild, sizeof(g_trampPanelRebuild),
            sigRebuild, (void*)Hook393290, &g_real393290, "PanelRebuild"))
            LogDbg("ArmySelect: 393290 хук (reuse; skip выключен)");

        g_afterListClear = (void*)(g_base + 0x393336);
        {
            static const unsigned char sigListClr[9] =
                { 0x8B, 0x17, 0x8B, 0x42, 0x5C, 0x8B, 0xCF, 0xFF, 0xD0 };
            if (StealToTrampoline(0x39332D, 9, g_trampListClear, sizeof(g_trampListClear),
                sigListClr, (void*)Hook393ListClear, &g_realListClear, "ListClearSkip"))
                LogDbg("ArmySelect: Hide list не panel+4; после 393510 Show+layout list");
        }

        static const unsigned char sigBb0[5] = { 0x55, 0x8B, 0xEC, 0x6A, 0xFF };
        if (StealToTrampoline(0x391BB0, 5, g_trampBb0, sizeof(g_trampBb0),
            sigBb0, (void*)Hook391BB0, &g_real391BB0, "IdleBrigade"))
            LogDbg("ArmySelect: 391BB0 жив (иконки); skip только NeedRebuild; таймер bb0/bb0h/bb0t");

        {
            static const unsigned char sigRorg[6] = { 0x55, 0x8B, 0xEC, 0x83, 0xE4, 0xF8 };
            if (StealToTrampoline(0x3810A0, 6, g_trampRorg, sizeof(g_trampRorg),
                sigRorg, (void*)Hook3810A0, &g_real3810A0, "ReorgIdlePanel"))
                LogDbg("ArmySelect: 3810A0 таймер (idle при окне реорга 1644)");
        }

        g_bb0Epilogue = (void*)(g_base + 0x39240C);
        {
            unsigned char* at = (unsigned char*)(g_base + 0x391C6E);
            unsigned char sigTail[6];
            memcpy(sigTail, at, 6);
            if (sigTail[0] == 0x8B && sigTail[1] == 0x15 &&
                StealToTrampoline(0x391C6E, 6, g_trampBb0Tail, sizeof(g_trampBb0Tail),
                    sigTail, (void*)Hook391C6E, &g_real391C6E, "IdleBrigadeTail"))
                LogDbg("ArmySelect: skip CUnitStatusEntry 391C6E -> 39240C (как reorg/1644)");
        }

        static const unsigned char sigHide[5] = { 0x55, 0x8B, 0xEC, 0x6A, 0xFF };
        static void* unusedHide = 0;
        if (StealToTrampoline(0x393570, 5, g_trampPanelHide, sizeof(g_trampPanelHide),
            sigHide, (void*)Hook393570, &unusedHide, "PanelHideKeep"))
            LogDbg("ArmySelect: 393570 Hide без destroy детей list");
    }

    // 3.76: окно ванильное. Таймеры 391BB0 / 393290 / 3810A0 без skip.
    {
        static const unsigned char sigRebuild[9] =
            { 0x55, 0x8B, 0xEC, 0x64, 0xA1, 0x00, 0x00, 0x00, 0x00 };
        if (!g_real393290 &&
            StealToTrampoline(0x393290, 9, g_trampPanelRebuild, sizeof(g_trampPanelRebuild),
            sigRebuild, (void*)Hook393290, &g_real393290, "PanelRebuildTime"))
            LogDbg("ArmySelect: таймер 393290 (ваниль, без skip)");

        static const unsigned char sigBb0[5] = { 0x55, 0x8B, 0xEC, 0x6A, 0xFF };
        if (!g_real391BB0 &&
            StealToTrampoline(0x391BB0, 5, g_trampBb0, sizeof(g_trampBb0),
            sigBb0, (void*)Hook391BB0, &g_real391BB0, "IdleBrigadeTime"))
            LogDbg("ArmySelect: таймер 391BB0 bb0/bb0h/bb0t (ваниль, без skip)");

        static const unsigned char sigRorg[6] = { 0x55, 0x8B, 0xEC, 0x83, 0xE4, 0xF8 };
        if (!g_real3810A0 &&
            StealToTrampoline(0x3810A0, 6, g_trampRorg, sizeof(g_trampRorg),
            sigRorg, (void*)Hook3810A0, &g_real3810A0, "ReorgIdlePanelTime"))
            LogDbg("ArmySelect: таймер 3810A0 (реорг)");

        g_bb0Epilogue = (void*)(g_base + 0x39240C);
        if (!g_real391C6E)
        {
            unsigned char* at = (unsigned char*)(g_base + 0x391C6E);
            unsigned char sigTail[6];
            memcpy(sigTail, at, 6);
            if (sigTail[0] == 0x8B && sigTail[1] == 0x15 &&
                StealToTrampoline(0x391C6E, 6, g_trampBb0Tail, sizeof(g_trampBb0Tail),
                    sigTail, (void*)Hook391C6E, &g_real391C6E, "IdleBrigadeTailTime"))
                LogDbg("ArmySelect: таймер хвоста 391C6E (без skip)");
        }

        if (!g_fn009350)
        {
            g_fn009350 = (void*)(g_base + 0x009350);
            g_fn19C160 = (void*)(g_base + 0x19C160);
            g_bb0ContStr = (void*)(g_base + 0x391BF3);
            g_bb0ContFind = (void*)(g_base + 0x391C04);
            g_bb0ContList = (void*)(g_base + 0x391C36);
            g_bb0ContHash = (void*)(g_base + 0x391C49);
            static const unsigned char sigStr[5] = { 0xE8, 0x5D, 0x77, 0xC7, 0xFF };
            static const unsigned char sigFind[6] = { 0x8D, 0x55, 0xD0, 0x52, 0xFF, 0xD0 };
            static const unsigned char sigList[9] =
                { 0x8B, 0x16, 0x8B, 0x42, 0x7C, 0x8B, 0xCE, 0xFF, 0xD0 };
            static const unsigned char sigHash[5] = { 0xE8, 0x17, 0xA5, 0xE0, 0xFF };
            int n = 0;
            if (PlantMidJump(0x391BEE, 5, sigStr, (void*)Hook391BEE_Str, "Bb0Str009350"))
                n++;
            if (PlantMidJump(0x391BFE, 6, sigFind, (void*)Hook391BFE_Find, "Bb0FindChild"))
                n++;
            if (PlantMidJump(0x391C2D, 9, sigList, (void*)Hook391C2D_List, "Bb0ListVfunc"))
                n++;
            if (PlantMidJump(0x391C44, 5, sigHash, (void*)Hook391C44_Hash, "Bb0Hash19C160"))
                n++;
            LogDbg("ArmySelect: split-таймеры 391BB0 %d/4 (s=009350 f=FindChild l=list+7C g=hash o=остаток)", n);
        }

        if (!g_real5B2750)
        {
            static const unsigned char sigUpd[6] = { 0x56, 0x8B, 0x71, 0x60, 0x85, 0xF6 };
            if (StealToTrampoline(0x5B2750, 6, g_trampListUpd, sizeof(g_trampListUpd),
                sigUpd, (void*)Hook5B2750, &g_real5B2750, "ListboxUpdate5B2750"))
                LogDbg("ArmySelect: таймер 5B2750 listbox Update детей (bb0u)");
            static const unsigned char sigCh[5] = { 0x8B, 0x50, 0x24, 0xFF, 0xD2 };
            g_bb0ContChild = (void*)(g_base + 0x5B2761);
            if (PlantMidJump(0x5B275C, 5, sigCh, (void*)Hook5B275C_Child, "ListboxChild24"))
                LogDbg("ArmySelect: таймер child +0x24 внутри 5B2750 (bb0ch)");
        }

        if (!g_fn38B4C0)
        {
            g_fn38B4C0 = (void*)(g_base + 0x38B4C0);
            g_bb0ContSync = (void*)(g_base + 0x38AF3F);
            // E8 rel32 к 38B4C0: rel = 0x38B4C0 - (0x38AF3A+5) = 0x581
            static const unsigned char sigSync[5] = { 0xE8, 0x81, 0x05, 0x00, 0x00 };
            if (PlantMidJump(0x38AF3A, 5, sigSync, (void*)Hook38AF3A_Sync, "ListSyncCall38AF3A"))
                LogDbg("ArmySelect: call 38B4C0 @38AF3A с ESI (bb0rb/syncm), без C++ wrap");
        }
        if (!g_fn38B2E0)
        {
            g_fn38B2E0 = (void*)(g_base + 0x38B2E0);
            g_bb0ContEqA = (void*)(g_base + 0x38AF49);
            // E8 rel32 к 38B2E0: rel = 0x38B2E0 - (0x38AF44+5) = 0x397
            static const unsigned char sigEqA[5] = { 0xE8, 0x97, 0x03, 0x00, 0x00 };
            if (PlantMidJump(0x38AF44, 5, sigEqA, (void*)Hook38AF44_EqA, "ListEqCall38B2E0"))
                LogDbg("ArmySelect: таймер call 38B2E0 @38AF44 (bb0eqA scrollbar)");
        }
        if (!g_fn38B140)
        {
            g_fn38B140 = (void*)(g_base + 0x38B140);
            g_bb0ContEqB = (void*)(g_base + 0x38AF4E);
            // E8 rel32 к 38B140: rel = 0x38B140 - (0x38AF49+5) = 0x1F2
            static const unsigned char sigEqB[5] = { 0xE8, 0xF2, 0x01, 0x00, 0x00 };
            if (PlantMidJump(0x38AF49, 5, sigEqB, (void*)Hook38AF49_EqB, "ListEqCall38B140"))
                LogDbg("ArmySelect: skip Show на equal-path (eqVskip); rebuild = ванильный 5B1FA0");
        }
        if (!g_fn731C00)
        {
            g_fn731C00 = (void*)(g_base + 0x731C00);
            g_bb0ContEqH = (void*)(g_base + 0x38B15B);
            // push ebx; push edi; call edx; call 731C00
            static const unsigned char sigEqH[9] = {
                0x53, 0x57, 0xFF, 0xD2, 0xE8, 0xA5, 0x6A, 0x3A, 0x00
            };
            if (PlantMidJump(0x38B152, 9, sigEqH, (void*)Hook38B152_EqH, "ListEqHead38B152"))
                LogDbg("ArmySelect: таймер head 38B140 @38B152 (bb0eqH)");
        }
        if (!g_bb0ContEqV)
        {
            g_bb0ContEqV = (void*)(g_base + 0x38B188);
            static const unsigned char sigEqV[5] = { 0x83, 0xC1, 0x1C, 0xFF, 0xD0 };
            if (PlantMidJump(0x38B183, 5, sigEqV, (void*)Hook38B183_EqV, "ListEqVcall38B183"))
                LogDbg("ArmySelect: eqV @38B183 skip или call EAX=5B1FA0 (bb0eqV)");
        }
        if (!g_eqVSlicesOn)
        {
            g_bb0ContEqVp = (void*)(g_base + 0x5E450D);
            g_bb0ContEqVv = (void*)(g_base + 0x5E459B);
            g_bb0ContEqVl = (void*)(g_base + 0x5E4678);
            g_bb0ContEqTb = (void*)(g_base + 0x5E46AB);
            g_bb0ContEqTc = (void*)(g_base + 0x5E46DB);
            g_bb0ContEqTd = (void*)(g_base + 0x5E470B);
            g_bb0ContEqVw = (void*)(g_base + 0x5E473B);
            g_bb0ContEqVx = (void*)(g_base + 0x5E476B);
            static const unsigned char sigVp[6] = { 0x8B, 0x9E, 0x58, 0x02, 0x00, 0x00 };
            static const unsigned char sigVv[6] = { 0x8B, 0xBE, 0x1C, 0x04, 0x00, 0x00 };
            static const unsigned char sigTa[6] = { 0x8B, 0x9E, 0xD8, 0x02, 0x00, 0x00 };
            static const unsigned char sigTb[6] = { 0x8B, 0x9E, 0x98, 0x02, 0x00, 0x00 };
            static const unsigned char sigTc[6] = { 0x8B, 0x9E, 0xF8, 0x02, 0x00, 0x00 };
            static const unsigned char sigTd[6] = { 0x8B, 0x9E, 0x18, 0x03, 0x00, 0x00 };
            static const unsigned char sigVw[6] = { 0x8B, 0xBE, 0x6C, 0x04, 0x00, 0x00 };
            static const unsigned char sigVx[9] = {
                0x83, 0xCB, 0xFF, 0x39, 0x9E, 0x90, 0x04, 0x00, 0x00
            };
            int n = 0;
            if (PlantMidJump(0x5E4507, 6, sigVp, (void*)Hook5E4507_EqVp, "EqVSlice4507"))
                n++;
            if (PlantMidJump(0x5E4595, 6, sigVv, (void*)Hook5E4595_EqVv, "EqVSlice4595"))
                n++;
            // 4672 starts Ta; Vl marker was renamed — still ends lists at 4595→4672
            if (PlantMidJump(0x5E4672, 6, sigTa, (void*)Hook5E4672_EqTa, "EqVSlice4672"))
                n++;
            if (PlantMidJump(0x5E46A5, 6, sigTb, (void*)Hook5E46A5_EqTb, "EqVSlice46A5"))
                n++;
            if (PlantMidJump(0x5E46D5, 6, sigTc, (void*)Hook5E46D5_EqTc, "EqVSlice46D5"))
                n++;
            if (PlantMidJump(0x5E4705, 6, sigTd, (void*)Hook5E4705_EqTd, "EqVSlice4705"))
                n++;
            if (PlantMidJump(0x5E4735, 6, sigVw, (void*)Hook5E4735_EqVw, "EqVSlice4735"))
                n++;
            if (PlantMidJump(0x5E4762, 9, sigVx, (void*)Hook5E4762_EqVx, "EqVSlice4762"))
                n++;
            if (n == 8)
            {
                g_eqVSlicesOn = 1;
                LogDbg("ArmySelect: срезы 5E4490 p/v/l/Ta-Td/w/x gated");
            }
            else
                LogDbg("ArmySelect: срезы 5E4490 частичные %d/8", n);
        }
        if (!g_bb0ContEqTbC)
        {
            g_bb0ContEqTbC = (void*)(g_base + 0x5E46D0);
            static const unsigned char sigTbC[7] = {
                0x8B, 0x11, 0x8B, 0x42, 0x34, 0xFF, 0xD0
            };
            if (PlantMidJump(0x5E46C9, 7, sigTbC, (void*)Hook5E46C9_TbC, "EqVTbChild34"))
                LogDbg("ArmySelect: таймер Tb child vt+0x34 @46C9 (bb0eqTbC/tbCnt)");
        }
        if (!g_fn008ED0)
        {
            g_fn008ED0 = (void*)(g_base + 0x008ED0);
            g_bb0ContEqS = (void*)(g_base + 0x38B1C7);
            static const unsigned char sigEqS[5] = { 0xE8, 0x09, 0xDD, 0xC7, 0xFF };
            if (PlantMidJump(0x38B1C2, 5, sigEqS, (void*)Hook38B1C2_EqS, "ListEqStr38B1C2"))
                LogDbg("ArmySelect: таймер call 008ED0 @38B1C2 (bb0eqS)");
        }
        if (!g_fn38A4D0)
        {
            g_fn38A4D0 = (void*)(g_base + 0x38A4D0);
            g_bb0ContEqR = (void*)(g_base + 0x38B1D2);
            static const unsigned char sigEqR[5] = { 0xE8, 0xFE, 0xF2, 0xFF, 0xFF };
            if (PlantMidJump(0x38B1CD, 5, sigEqR, (void*)Hook38B1CD_EqR, "ListEqRow38B1CD"))
                LogDbg("ArmySelect: таймер call 38A4D0 @38B1CD (bb0eqR)");
        }
        LogDbg("ArmySelect: патч окна СНЯТ — ищем утечку FPS на ванили");
    }
    InstallWindowFps();
}

// ---------------------------------------------------------------
// D3D9 Present hook: army-window panel flush + statistics (CCore_PresentBegin/End, former exports of the core),
// the real Present, FPU pin, FPS limit
// ---------------------------------------------------------------
static HRESULT WINAPI HookPresent(void* device, const void* src, const void* dest, HWND wnd, const void* dirty)
{
    DWORD t0 = 0;
    CCore_PresentBegin(&t0);
    HRESULT hr = g_realPresent
        ? g_realPresent(device, src, dest, wnd, dirty)
        : E_FAIL;
    PinFpu();
    CCore_PresentEnd(t0);
    WaitFpsCap();
    return hr;
}

// ---------------------------------------------------------------
// install (the order of the former InstallEngineStability + Install)
// ---------------------------------------------------------------
static void InstallAll()
{
    PinFpu();

    HMODULE exe = GetModuleHandleA(NULL);

    InstallTimerResolution();

    if (g_cfg.patchD3dNoVsync)
        Log("D3D9: vsync снят (PresentationInterval=IMMEDIATE), fps cap=%d", g_cfg.d3dFpsLimit);

    // fixSfxMixerLag and removeSleepers are independent; both may use select.
    if (g_cfg.fixSfxMixerLag || g_cfg.removeSleepers)
        InstallSelectHook();

    if (g_cfg.patchHighPriority)
        InstallHighPriority();

    if (g_cfg.patchHeapLfh)
        InstallHeapLfh();

    HMODULE kernel32 = GetModuleHandleA("kernel32.dll");
    if (g_cfg.patchThreadFpuPin && kernel32)
    {
        g_realCreateThread = (tCreateThread)GetProcAddress(kernel32, "CreateThread");
        g_realLoadLibraryA = (tLoadLibraryA)GetProcAddress(kernel32, "LoadLibraryA");
        g_realLoadLibraryW = (tLoadLibraryW)GetProcAddress(kernel32, "LoadLibraryW");
        g_realGetTickCount = (tGetTickCount)GetProcAddress(kernel32, "GetTickCount");

        if (HookIat(exe, "kernel32.dll", "CreateThread", (void*)HookCreateThread, (void**)&g_realCreateThread))
            Log("FPU: CreateThread exe перехвачен");
        else
            Log("FPU: CreateThread IAT не найден");

        HookIat(exe, "kernel32.dll", "LoadLibraryA", (void*)HookLoadLibraryA, (void**)&g_realLoadLibraryA);
        HookIat(exe, "kernel32.dll", "LoadLibraryW", (void*)HookLoadLibraryW, (void**)&g_realLoadLibraryW);
        if (HookIat(exe, "kernel32.dll", "GetTickCount", (void*)HookGetTickCount, (void**)&g_realGetTickCount))
            Log("FPU: GetTickCount - отложенный патч TBB/D3D");
    }

    if (g_cfg.patchFpuFortress)
        InstallMainLoopFpuPin();

    if (g_cfg.removeSleepers)
        InstallMainLoopSleep0();

    TryPatchLateModules();

    Log("Engine: FPU=%d D3D=%d LFH=%d threadPin=%d tbbCap=%d sleep0=%d noVsync=%d prio=%d",
        (int)g_cfg.patchFpuFortress,
        (int)g_cfg.patchD3dFpuPreserve,
        (int)g_cfg.patchHeapLfh,
        (int)g_cfg.patchThreadFpuPin,
        g_cfg.engineWorkerThreads,
        (int)g_cfg.removeSleepers,
        (int)g_cfg.patchD3dNoVsync,
        (int)g_cfg.patchHighPriority);

    InstallArmySelectDiag();
    Log("IdleSkipNested: FIX_ARMY_WINDOW_LAG=%d", g_cfg.fixArmyWindowLag);

    if (g_cfg.patchPopQuantize)
        InstallPopQuantize();

    if (g_cfg.removeSleepers)
    {
        InstallMpClientSleep();
        InstallWfsoHook();
    }
}

extern "C" __declspec(dllexport) int __cdecl V2Mod_Init(const V2ModAPI* api)
{
    if (!api || api->size < sizeof(V2ModAPI) || api->apiVersion != V2MOD_API_VERSION)
        return 0;
    g_api = api;
    g_base = api->gameBase;

    __try
    {
        IMAGE_DOS_HEADER* dos = (IMAGE_DOS_HEADER*)(DWORD_PTR)g_base;
        IMAGE_NT_HEADERS32* nt = (IMAGE_NT_HEADERS32*)((unsigned char*)dos + dos->e_lfanew);
        g_imageSize = nt->OptionalHeader.SizeOfImage;
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        return 0;
    }

    char dll[MAX_PATH];
    if (!GetModuleFileNameA(g_self, dll, sizeof(dll)))
        return 0;
    char* dot = strrchr(dll, '.');
    if (dot)
        *dot = 0;
    _snprintf_s(g_iniPath, sizeof(g_iniPath), _TRUNCATE, "%s.ini", dll);

    LoadIni();
    if (!g_cfg.enabled)
    {
        Log("ccore_performance_patch: disabled (ENABLE=0 in %s)", g_iniPath);
        return 1;
    }
    Log("ccore_performance_patch: install, settings from %s", g_iniPath);
    InstallAll();
    return 1;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD reason, LPVOID)
{
    if (reason == DLL_PROCESS_ATTACH)
    {
        g_self = hModule;
        DisableThreadLibraryCalls(hModule);
    }
    return TRUE;
}
