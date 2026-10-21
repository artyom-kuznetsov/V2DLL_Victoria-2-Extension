// V2Mod_Template.cpp - empty CreatineCore plugin. Does nothing yet.
//
// Build as a separate x86 (Win32) DLL project whose output name MUST be
// v2dll_mod.dll. The patch ships this empty build in every mod folder
// ("<game>\mod\<Name>\v2dll_mod.dll"); a modder who wants custom logic
// edits V2Mod_Init, rebuilds only this DLL and overwrites that file.
// CreatineCore finds it at startup and calls V2Mod_Init once.
#include <windows.h>
#include "V2ModAPI.h"

static const V2ModAPI* g_api = 0;

extern "C" __declspec(dllexport) int __cdecl V2Mod_Init(const V2ModAPI* api)
{
    if (!api || api->size < sizeof(V2ModAPI) || api->apiVersion != V2MOD_API_VERSION)
        return 0;                       // incompatible CreatineCore: refuse to load
    g_api = api;

    g_api->Log("MyMod: loaded (game base %08X)", api->gameBase);

    // ---- your modifications go here ----

    return 1;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD reason, LPVOID)
{
    if (reason == DLL_PROCESS_ATTACH)
        DisableThreadLibraryCalls(hModule);
    return TRUE;                        // do real work in V2Mod_Init, not here
}
