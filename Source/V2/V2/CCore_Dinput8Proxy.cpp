// CCore_Dinput8Proxy.cpp - dinput8.dll, the only CreatineCore file in the game folder.
//
// v2game.exe imports DINPUT8.dll, and Windows looks for it in the game folder
// before System32 (it is not a KnownDLL). This tiny proxy forwards the six
// DirectInput exports to the real dinput8.dll and, when it is loaded into the
// game, loads "<game folder>\z_CreatineCore\creatinecore.dll" - the actual CreatineCore.
// The game's own lua51.dll stays untouched.
//
// Build as a separate x86 (Win32) DLL whose output name MUST be dinput8.dll
// (V2Proxy.vcxproj). Keep it free of logic: everything else lives in the core.
#define WIN32_LEAN_AND_MEAN
#include <windows.h>

// ---- forwarding to the real dinput8.dll (System32 / SysWOW64) ----
//
// Each export is a naked stub that jumps through g_real[i]. The jump keeps the
// caller's stack untouched, so any calling convention / argument count works.
enum { EXPORT_COUNT = 6 };
static FARPROC g_real[EXPORT_COUNT];
static const char* const kNames[EXPORT_COUNT] = {
    "DirectInput8Create", "DllCanUnloadNow", "DllGetClassObject",
    "DllRegisterServer", "DllUnregisterServer", "GetdfDIJoystick"
};

#define STUB(index, name)                                                          \
    extern "C" __declspec(naked) void __cdecl v2proxy_##name() { __asm jmp dword ptr [g_real + index * 4] } \
    __pragma(comment(linker, "/export:" #name "=_v2proxy_" #name))

STUB(0, DirectInput8Create)
STUB(1, DllCanUnloadNow)
STUB(2, DllGetClassObject)
STUB(3, DllRegisterServer)
STUB(4, DllUnregisterServer)
STUB(5, GetdfDIJoystick)

static bool LoadRealDinput8()
{
    wchar_t path[MAX_PATH];
    UINT n = GetSystemDirectoryW(path, MAX_PATH);       // SysWOW64 for a 32-bit process
    if (!n || n + 14 >= MAX_PATH)
        return false;
    wcscat_s(path, L"\\dinput8.dll");
    HMODULE real = LoadLibraryW(path);
    if (!real)
        return false;
    for (int i = 0; i < EXPORT_COUNT; ++i)
        g_real[i] = GetProcAddress(real, kNames[i]);
    return g_real[0] != 0;
}

// ---- loading CreatineCore ----

// Only the game process gets CreatineCore (another exe in the folder that happens to
// use DirectInput must not be patched). v2game.exe, v2game_*.exe variants.
static bool HostIsGame()
{
    wchar_t exe[MAX_PATH];
    DWORD n = GetModuleFileNameW(NULL, exe, MAX_PATH);
    if (!n || n >= MAX_PATH)
        return false;
    const wchar_t* base = wcsrchr(exe, L'\\');
    base = base ? base + 1 : exe;
    return _wcsnicmp(base, L"v2game", 6) == 0;
}

static void LoadCCore(HMODULE self)
{
    wchar_t path[MAX_PATH];
    DWORD n = GetModuleFileNameW(self, path, MAX_PATH);
    wchar_t* slash = (n && n < MAX_PATH) ? wcsrchr(path, L'\\') : 0;
    if (!slash)
        return;
    *(slash + 1) = 0;
    if (wcslen(path) + wcslen(L"z_CreatineCore\\creatinecore.dll") + 1 >= MAX_PATH)
        return;
    wcscat_s(path, L"z_CreatineCore\\creatinecore.dll");
    if (GetFileAttributesW(path) == INVALID_FILE_ATTRIBUTES)
    {
        OutputDebugStringW(L"CreatineCore: z_CreatineCore\\creatinecore.dll not found - the game runs without z_CreatineCore\n");
        return;
    }
    // ALTERED_SEARCH_PATH: the core's own dependencies are found next to it.
    if (!LoadLibraryExW(path, NULL, LOAD_WITH_ALTERED_SEARCH_PATH))
        OutputDebugStringW(L"CreatineCore: cannot load z_CreatineCore\\creatinecore.dll\n");
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD reason, LPVOID)
{
    if (reason == DLL_PROCESS_ATTACH)
    {
        DisableThreadLibraryCalls(hModule);
        if (!LoadRealDinput8())
            return FALSE;               // the game cannot run without DirectInput anyway
        if (HostIsGame())
            LoadCCore(hModule);
    }
    return TRUE;
}
