// V2DLL_ModLoader.cpp - loads the optional per-mod plugin "v2dll_mod.dll".
// V2TechButton.cpp calls LoadV2Mods() once per active -mod= (command-line order)
// at the end of Install().
//
// Every mod ships the same (empty) v2dll_mod.dll built from V2Mod_Template.cpp.
// A modder who wants custom logic rebuilds ONLY that DLL and drops it in the
// mod folder; lua51.dll itself is never rebuilt.
//
// Several plugins can be loaded at once (one per active mod). Each one gets its
// own V2ModAPI and modFolder storage, because the plugin keeps the pointer.
#include <windows.h>
#include <string.h>
#include <stdio.h>
#include "V2DLL_Shared.h"
#include "V2ModAPI.h"

static const char* const MOD_DLL_NAME = "v2dll_mod.dll";

#define V2MOD_MAX_PLUGINS 16
static char      g_modFolders[V2MOD_MAX_PLUGINS][MAX_PATH];   // api.modFolder points here
static V2ModAPI  g_modApis[V2MOD_MAX_PLUGINS];
static int       g_modPluginCount = 0;

typedef int (__cdecl* tV2ModInit)(const V2ModAPI*);

static int __cdecl ApiPatchSlot(uint32_t rvaVtable, int slotIndex,
                                void* replacement, void** outOriginal)
{
    return PatchSlot((DWORD)rvaVtable, slotIndex, replacement, outOriginal) ? 1 : 0;
}

static int __cdecl ApiStealToTrampoline(uint32_t rva, unsigned steal,
    unsigned char* tramp, int trampSize, const unsigned char* expect,
    void* hook, void** orig, const char* tag)
{
    return StealToTrampoline((DWORD)rva, steal, tramp, trampSize, expect,
                             hook, orig, tag) ? 1 : 0;
}

static bool CallInit(tV2ModInit init, const V2ModAPI* api, int* result)
{
    __try { *result = init(api); return true; }
    __except (EXCEPTION_EXECUTE_HANDLER) { return false; }
}

void LoadV2Mods(const char* modFolderRaw)
{
    // One call per active mod. The .mod file gives a path relative to the game
    // folder (e.g. "mod/MyMod"): make it absolute.
    if (!modFolderRaw || !modFolderRaw[0])
        return;

    if (g_modPluginCount >= V2MOD_MAX_PLUGINS)
    {
        Log("ModLoader: too many plugins (max %d), skipping '%s'", V2MOD_MAX_PLUGINS, modFolderRaw);
        return;
    }

    char* modFolder = g_modFolders[g_modPluginCount];
    DWORD n = GetFullPathNameA(modFolderRaw, MAX_PATH, modFolder, NULL);
    if (!n || n >= MAX_PATH)
    {
        Log("ModLoader: cannot resolve mod folder '%s'", modFolderRaw);
        return;
    }

    // The same folder can appear twice on the command line: load it once.
    for (int i = 0; i < g_modPluginCount; ++i)
        if (!_stricmp(modFolder, g_modFolders[i]))
            return;

    char path[MAX_PATH];
    _snprintf_s(path, sizeof(path), _TRUNCATE, "%s\\%s", modFolder, MOD_DLL_NAME);
    if (GetFileAttributesA(path) == INVALID_FILE_ATTRIBUTES)
    {
        Log("ModLoader: %s has no %s (normal)", modFolder, MOD_DLL_NAME);
        return;                         // this mod has no plugin DLL: normal
    }

    V2ModAPI* api = &g_modApis[g_modPluginCount];
    memset(api, 0, sizeof(*api));
    api->size              = sizeof(V2ModAPI);
    api->apiVersion        = V2MOD_API_VERSION;
    api->gameBase          = (uint32_t)g_base;
    api->modFolder         = modFolder;
    api->Log               = &Log;
    api->PatchSlot         = &ApiPatchSlot;
    api->StealToTrampoline = &ApiStealToTrampoline;
    ++g_modPluginCount;                 // from here the slot is in use

    HMODULE m = LoadLibraryA(path);
    if (!m)
    {
        Log("ModLoader: cannot load %s (error %lu)", path, GetLastError());
        return;
    }
    tV2ModInit init = (tV2ModInit)GetProcAddress(m, "V2Mod_Init");
    if (!init) init = (tV2ModInit)GetProcAddress(m, "_V2Mod_Init");
    if (!init)
    {
        Log("ModLoader: %s has no V2Mod_Init export - skipped", path);
        return;
    }
    int result = 0;
    if (!CallInit(init, api, &result))
        Log("ModLoader: %s crashed in V2Mod_Init", path);
    else
        Log("ModLoader: %s -> %s", path, result ? "ok" : "refused (returned 0)");
}
