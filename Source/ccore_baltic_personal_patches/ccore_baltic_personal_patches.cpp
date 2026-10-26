// ccore_baltic_personal_patches.cpp - CreatineCore submod (dll_Submods\ccore_baltic_personal_patches.dll).
//
// National focuses that support a pop type (national_focus.txt, promotion_focus: "aristocrats = 0.20" ...)
// work like this in vanilla Victoria II:
//   1. EXCLUSIVE TARGET. When a state has such a focus, ALL promotion (and demotion) of pops of that state
//      goes to the focused type: the target chooser (FUN_0095B0D0 for promotion, FUN_0095B740 for
//      demotion) adds the focus value to the weight of that type and, as soon as that weight is positive,
//      returns that type without the random draw.
//   2. BIGGER AMOUNT. The focus value is also added to the promotion/demotion RATE (FUN_0095A780 /
//      FUN_0095AA30), so far more pops change type.
//   3. The promotion function returns 0 for pops that already are of the focused type (they never promote
//      away).
// This module makes the focus change ONE thing: the chance of becoming the focused type. For a focus value f
// (0.20 = +20 %) the weight of that target in the normal weighted random draw is multiplied by
// (1 + f); a negative f lowers the chance. The amount of pops that
// promote/demote is not touched, and nothing is forced.
//
// Patches (RVA = VA - 0x400000), all written into the running game image, nothing on disk is changed:
//   P1  0x55A893  promotion amount:  "add [esp+18h],eax / adc [esp+1Ch],edx" (focus bonus)      -> NOP x8
//   P2  0x55A8AB  promotion amount:  "jg return0" (focused type never promotes away)            -> NOP x6
//   P3  0x55AB52  demotion amount:   "add edi,eax / adc esi,edx" (focus bonus)                  -> NOP x4
//   P4  0x55B2B8..0x55B313  promotion target: focus block -> multiplicative weight, no forced target
//   P5  0x55BA02..0x55BA57  demotion target:  same
// Each site is verified against the original bytes first; a mismatch skips that patch.
//
// Settings: ccore_baltic_personal_patches.ini next to this DLL (created on first start).
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include "V2ModAPI.h"

static const V2ModAPI* g_api = 0;
static DWORD g_base = 0;
static char  g_iniPath[MAX_PATH];

struct Settings
{
    int enabled = 1;
    int removeFocusAmountBonus = 1;      // P1, P3
    int keepFocusTypePromotionBlock = 0; // 1 = keep vanilla P2 behaviour
};
static Settings g_cfg;

static void Log(const char* fmt, ...)
{
    char buf[512];
    va_list ap;
    va_start(ap, fmt);
    _vsnprintf_s(buf, sizeof(buf), _TRUNCATE, fmt, ap);
    va_end(ap);
    if (g_api && g_api->Log)
        g_api->Log("ccore_baltic_personal_patches: %s", buf);
}

// ---------------------------------------------------------------
// ini
// ---------------------------------------------------------------
static void WriteDefaultIni()
{
    FILE* f = 0;
    if (fopen_s(&f, g_iniPath, "w") != 0 || !f)
        return;
    fprintf(f,
        "; 0 = module does nothing\n"
        "ENABLE=%d\n"
        "\n"
        "; 1 = the focus no longer increases the number of promoting/demoting pops (vanilla adds the focus value\n"
        "; to the promotion and demotion rate)\n"
        "REMOVE_FOCUS_AMOUNT_BONUS=%d\n"
        "\n"
        "; 1 = keep the vanilla rule that pops that already are of the focused type never promote away.\n"
        "; 0 = they promote like any other pop (the focus then only changes the chance).\n"
        "KEEP_FOCUS_TYPE_PROMOTION_BLOCK=%d\n",
        g_cfg.enabled, g_cfg.removeFocusAmountBonus, g_cfg.keepFocusTypePromotionBlock);
    fclose(f);
}

static void ApplyKey(const char* key, const char* value)
{
    int v = atoi(value);
    if (_stricmp(key, "ENABLE") == 0)                          g_cfg.enabled = v != 0;
    else if (_stricmp(key, "REMOVE_FOCUS_AMOUNT_BONUS") == 0)  g_cfg.removeFocusAmountBonus = v != 0;
    else if (_stricmp(key, "KEEP_FOCUS_TYPE_PROMOTION_BLOCK") == 0) g_cfg.keepFocusTypePromotionBlock = v != 0;
}

static void LoadIni()
{
    FILE* f = 0;
    if (fopen_s(&f, g_iniPath, "r") != 0 || !f)
    {
        WriteDefaultIni();
        Log("created %s with default settings", g_iniPath);
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

// ---------------------------------------------------------------
// patching helpers
// ---------------------------------------------------------------
static bool BytesEqual(DWORD rva, const unsigned char* expect, size_t n)
{
    return memcmp((const void*)(g_base + rva), expect, n) == 0;
}

static bool WriteBytes(DWORD rva, const unsigned char* data, size_t n)
{
    unsigned char* p = (unsigned char*)(g_base + rva);
    DWORD old = 0;
    if (!VirtualProtect(p, n, PAGE_EXECUTE_READWRITE, &old))
        return false;
    memcpy(p, data, n);
    VirtualProtect(p, n, old, &old);
    FlushInstructionCache(GetCurrentProcess(), p, n);
    return true;
}

static bool NopSite(DWORD rva, const unsigned char* expect, size_t n, const char* tag)
{
    if (!BytesEqual(rva, expect, n))
    {
        Log("%s: bytes at rva %06X do not match - skipped", tag, rva);
        return false;
    }
    unsigned char nops[16];
    memset(nops, 0x90, sizeof(nops));
    if (!WriteBytes(rva, nops, n))
        return false;
    Log("%s: rva %06X, %u bytes removed", tag, rva, (unsigned)n);
    return true;
}

// jmp rel32 at `rva` to `target`, then NOPs until rva+len
static bool JumpSite(DWORD rva, size_t len, const unsigned char* expectHead, size_t headLen, void* target, const char* tag)
{
    if (!BytesEqual(rva, expectHead, headLen))
    {
        Log("%s: bytes at rva %06X do not match - skipped", tag, rva);
        return false;
    }
    unsigned char patch[128];
    if (len > sizeof(patch) || len < 5)
        return false;
    memset(patch, 0x90, len);
    patch[0] = 0xE9;
    *(DWORD*)(patch + 1) = (DWORD)(DWORD_PTR)target - ((g_base + rva) + 5);
    if (!WriteBytes(rva, patch, len))
        return false;
    Log("%s: rva %06X, %u bytes replaced by a jump", tag, rva, (unsigned)len);
    return true;
}

// ---------------------------------------------------------------
// weight caves (naked)
//
// Entered from the middle of FUN_0095B0D0 / FUN_0095B740 right after the engine confirmed that the state's
// national focus is a pop-type focus and loaded the focus vector (per pop type, thousandths):
//   promotion:  ecx = focus vector, edi = target type index
//   demotion:   ecx = focus vector, ebx = target type index
// The weight of the target (int array whose pointer sits at VA 0x131B950) is already computed.
// We multiply it by (1000 + focus)/1000 (min 0) and never set the "forced result" slot.
// Only eax/ecx/edx/esi are used (esi = engine scale, dead at this point).
// ---------------------------------------------------------------
static DWORD g_weightsAddr = 0;     // address of the global holding the weights array pointer
static DWORD g_alldiv = 0;          // __alldiv (stdcall, 16 bytes of arguments)
static DWORD g_retPromo = 0;
static DWORD g_retDemo = 0;

__declspec(naked) static void WeightCavePromotion()
{
    __asm {
        mov eax, dword ptr [ecx + edi*4]
        test eax, eax
        jz done
        add eax, 1000
        jns factor_ok
        xor eax, eax
    factor_ok:
        mov esi, eax
        mov ecx, dword ptr [g_weightsAddr]
        mov ecx, dword ptr [ecx]
        mov eax, dword ptr [ecx + edi*4]
        test eax, eax
        jle done
        imul esi
        push 0
        push 1000
        push edx
        push eax
        call dword ptr [g_alldiv]
        mov ecx, dword ptr [g_weightsAddr]
        mov ecx, dword ptr [ecx]
        mov dword ptr [ecx + edi*4], eax
    done:
        jmp dword ptr [g_retPromo]
    }
}

__declspec(naked) static void WeightCaveDemotion()
{
    __asm {
        mov eax, dword ptr [ecx + ebx*4]
        test eax, eax
        jz done
        add eax, 1000
        jns factor_ok
        xor eax, eax
    factor_ok:
        mov esi, eax
        mov ecx, dword ptr [g_weightsAddr]
        mov ecx, dword ptr [ecx]
        mov eax, dword ptr [ecx + ebx*4]
        test eax, eax
        jle done
        imul esi
        push 0
        push 1000
        push edx
        push eax
        call dword ptr [g_alldiv]
        mov ecx, dword ptr [g_weightsAddr]
        mov ecx, dword ptr [ecx]
        mov dword ptr [ecx + ebx*4], eax
    done:
        jmp dword ptr [g_retDemo]
    }
}

// ---------------------------------------------------------------
// install
// ---------------------------------------------------------------
static void InstallPatches()
{
    // original bytes (unrelocated parts only: no absolute addresses are compared)
    static const unsigned char P1[8] = { 0x01, 0x44, 0x24, 0x18, 0x11, 0x54, 0x24, 0x1C };
    static const unsigned char P2[6] = { 0x0F, 0x8F, 0x3A, 0xFF, 0xFF, 0xFF };
    static const unsigned char P3[4] = { 0x03, 0xF8, 0x13, 0xF2 };
    // cmp [ecx+edi*4],0 / lea eax,[ecx+edi*4] / jle +56 / mov ecx,[eax] / mov eax,esi / imul ecx / push 0 / push 3E8h
    static const unsigned char P4[18] = { 0x83, 0x3C, 0xB9, 0x00, 0x8D, 0x04, 0xB9, 0x7E, 0x56, 0x8B, 0x08, 0x8B,
                                          0xC6, 0xF7, 0xE9, 0x6A, 0x00, 0x68 };
    static const unsigned char P4tail[6] = { 0xEB, 0x04, 0x8B, 0x7C, 0x24, 0x0C };   // at 0x55B311: jmp +4 / mov edi,[esp+0Ch]
    // cmp [ecx+ebx*4],0 / lea eax,[ecx+ebx*4] / je +4C / mov ecx,[eax] / mov eax,esi / imul ecx / push 0 / push 3E8h
    static const unsigned char P5[18] = { 0x83, 0x3C, 0x99, 0x00, 0x8D, 0x04, 0x99, 0x74, 0x4C, 0x8B, 0x08, 0x8B,
                                          0xC6, 0xF7, 0xE9, 0x6A, 0x00, 0x68 };

    int done = 0;

    if (g_cfg.removeFocusAmountBonus)
    {
        if (NopSite(0x55A893, P1, sizeof(P1), "P1 promotion amount bonus"))
            ++done;
        if (NopSite(0x55AB52, P3, sizeof(P3), "P3 demotion amount bonus"))
            ++done;
    }
    if (!g_cfg.keepFocusTypePromotionBlock)
    {
        if (NopSite(0x55A8AB, P2, sizeof(P2), "P2 focused type never promotes away"))
            ++done;
    }

    g_weightsAddr = g_base + 0xF1B950;   // VA 0x131B950
    g_alldiv = g_base + 0x6C02A0;        // VA 0xAC02A0
    g_retPromo = g_base + 0x55B317;
    g_retDemo = g_base + 0x55BA57;

    if (BytesEqual(0x55B311, P4tail, sizeof(P4tail)) &&
        JumpSite(0x55B2B8, 0x55B313 - 0x55B2B8, P4, sizeof(P4), (void*)&WeightCavePromotion, "P4 promotion target"))
        ++done;
    else
        Log("P4 promotion target: not installed");

    if (JumpSite(0x55BA02, 0x55BA57 - 0x55BA02, P5, sizeof(P5), (void*)&WeightCaveDemotion, "P5 demotion target"))
        ++done;
    else
        Log("P5 demotion target: not installed");

    Log("settings: amount bonus removed=%d, focused-type block kept=%d; %d patches applied",
        g_cfg.removeFocusAmountBonus, g_cfg.keepFocusTypePromotionBlock, done);
}

static HMODULE g_self = 0;

extern "C" __declspec(dllexport) int __cdecl V2Mod_Init(const V2ModAPI* api)
{
    if (!api || api->size < sizeof(V2ModAPI) || api->apiVersion != V2MOD_API_VERSION)
        return 0;
    g_api = api;
    g_base = api->gameBase;

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
        Log("disabled (ENABLE=0 in %s)", g_iniPath);
        return 1;
    }
    InstallPatches();
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
