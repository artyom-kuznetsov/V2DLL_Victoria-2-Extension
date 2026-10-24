// CCore_ModLoader.cpp - loads optional plugin DLLs.
//
// Two sources, both speaking the same V2ModAPI / V2Mod_Init interface:
//
//  1. "v2dll_mod.dll" in the folder of every active -mod= (LoadV2Mods).
//     V2TechButton.cpp calls it once per active mod (command-line order) at
//     the end of Install(). Every mod ships the same (empty) v2dll_mod.dll
//     built from V2Mod_Template.cpp; a modder who wants custom logic rebuilds
//     ONLY that DLL and drops it in the mod folder.
//
//  2. Every "*.dll" in "<z_CreatineCore folder>\dll_Submods\" (LoadV2Submods), in
//     alphabetical order and with no settings. Such a DLL may export V2Mod_Init
//     (it then gets V2ModAPI) or be a plain patch DLL that works in DllMain.
//
// Several plugins can be loaded at once. Each one gets its own V2ModAPI and
// modFolder storage, because the plugin keeps the pointer.
#include <windows.h>
#include <string.h>
#include <stdio.h>
#include "CCore_Shared.h"
#include "V2ModAPI.h"

static const char* const MOD_DLL_NAMES[] = { "v2dll_mod.dll", "ccore_mod.dll" };
static const char* const SUBMODS_DIR_NAME = "dll_Submods";

#define V2MOD_MAX_PLUGINS 16
static char      g_modFolders[V2MOD_MAX_PLUGINS][MAX_PATH];   // api.modFolder points here
static char      g_modDllPaths[V2MOD_MAX_PLUGINS][MAX_PATH];  // for the "load once" check
static V2ModAPI  g_modApis[V2MOD_MAX_PLUGINS];
static int       g_modPluginCount = 0;

// Every plugin DLL (mod folders and dll_Submods) that loaded and did not refuse/crash in V2Mod_Init
// (file names without ".dll", load order).
static char      g_runningPlugins[V2MOD_MAX_PLUGINS][64];
static int       g_runningPluginCount = 0;

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

// Loads one plugin DLL (absolute `dllPath`) and calls its V2Mod_Init.
// `folder` is what the plugin sees in api->modFolder. A DLL that was already
// loaded is skipped silently; a full slot table is logged.
// modFolder: for a plugin from a mod folder - that folder (its last component is shown in brackets), else NULL.
static void NoteRunningPlugin(const char* dllPath, const char* modFolder)
{
    const char* name = strrchr(dllPath, '\\');
    name = name ? name + 1 : dllPath;
    if (g_runningPluginCount >= V2MOD_MAX_PLUGINS)
        return;
    char* dst = g_runningPlugins[g_runningPluginCount++];
    char base[64];
    strncpy_s(base, sizeof(base), name, _TRUNCATE);
    size_t len = strlen(base);
    if (len > 4 && _stricmp(base + len - 4, ".dll") == 0)
        base[len - 4] = 0;
    if (modFolder && modFolder[0])
    {
        char folder[MAX_PATH];
        strncpy_s(folder, sizeof(folder), modFolder, _TRUNCATE);
        size_t fl = strlen(folder);
        while (fl > 0 && (folder[fl - 1] == '\\' || folder[fl - 1] == '/'))
            folder[--fl] = 0;
        const char* leaf = folder;
        for (const char* p = folder; *p; ++p)
            if (*p == '\\' || *p == '/')
                leaf = p + 1;
        _snprintf_s(dst, 64, _TRUNCATE, "%.34s (%.24s)", base, leaf);
    }
    else
        strncpy_s(dst, 64, base, _TRUNCATE);
}

int V2_GetRunningPlugins(char names[][64], int maxCount)
{
    int n = g_runningPluginCount < maxCount ? g_runningPluginCount : maxCount;
    for (int i = 0; i < n; ++i)
        strcpy_s(names[i], 64, g_runningPlugins[i]);
    return n;
}

static void LoadPluginDll(const char* dllPath, const char* folder, bool fromModFolder = false)
{
    for (int i = 0; i < g_modPluginCount; ++i)
        if (!_stricmp(dllPath, g_modDllPaths[i]))
            return;                     // the same DLL twice: load it once

    if (g_modPluginCount >= V2MOD_MAX_PLUGINS)
    {
        Log("ModLoader: too many plugins (max %d), skipping '%s'", V2MOD_MAX_PLUGINS, dllPath);
        return;
    }

    int slot = g_modPluginCount;
    strncpy_s(g_modFolders[slot], MAX_PATH, folder, _TRUNCATE);
    strncpy_s(g_modDllPaths[slot], MAX_PATH, dllPath, _TRUNCATE);

    V2ModAPI* api = &g_modApis[slot];
    memset(api, 0, sizeof(*api));
    api->size              = sizeof(V2ModAPI);
    api->apiVersion        = V2MOD_API_VERSION;
    api->gameBase          = (uint32_t)g_base;
    api->modFolder         = g_modFolders[slot];
    api->Log               = &Log;
    api->PatchSlot         = &ApiPatchSlot;
    api->StealToTrampoline = &ApiStealToTrampoline;
    ++g_modPluginCount;                 // from here the slot is in use

    // ALTERED_SEARCH_PATH: DLLs the plugin itself depends on are looked up in
    // the plugin's own folder first.
    HMODULE m = LoadLibraryExA(dllPath, NULL, LOAD_WITH_ALTERED_SEARCH_PATH);
    if (!m)
    {
        Log("ModLoader: cannot load %s (error %lu)", dllPath, GetLastError());
        return;
    }
    tV2ModInit init = (tV2ModInit)GetProcAddress(m, "V2Mod_Init");
    if (!init) init = (tV2ModInit)GetProcAddress(m, "_V2Mod_Init");
    if (!init)
    {
        // Not an error: a plain patch DLL does its work in DllMain, which already ran.
        Log("ModLoader: %s loaded (no V2Mod_Init export: DllMain only)", dllPath);
        NoteRunningPlugin(dllPath, fromModFolder ? folder : NULL);
        return;
    }
    int result = 0;
    if (!CallInit(init, api, &result))
        Log("ModLoader: %s crashed in V2Mod_Init", dllPath);
    else
    {
        Log("ModLoader: %s -> %s", dllPath, result ? "ok" : "refused (returned 0)");
        if (result)
            NoteRunningPlugin(dllPath, fromModFolder ? folder : NULL);
    }
}

void LoadV2Mods(const char* modFolderRaw)
{
    // One call per active mod. The .mod file gives a path relative to the game
    // folder (e.g. "mod/MyMod"): make it absolute.
    if (!modFolderRaw || !modFolderRaw[0])
        return;

    char modFolder[MAX_PATH];
    DWORD n = GetFullPathNameA(modFolderRaw, MAX_PATH, modFolder, NULL);
    if (!n || n >= MAX_PATH)
    {
        Log("ModLoader: cannot resolve mod folder '%s'", modFolderRaw);
        return;
    }

    // Both names are accepted (v2dll_mod.dll is the original one); a mod may ship either or both.
    bool found = false;
    for (size_t i = 0; i < sizeof(MOD_DLL_NAMES) / sizeof(MOD_DLL_NAMES[0]); ++i)
    {
        char path[MAX_PATH];
        _snprintf_s(path, sizeof(path), _TRUNCATE, "%s\\%s", modFolder, MOD_DLL_NAMES[i]);
        if (GetFileAttributesA(path) == INVALID_FILE_ATTRIBUTES)
            continue;
        found = true;
        LoadPluginDll(path, modFolder, true);
    }
    if (!found)
        Log("ModLoader: %s has no v2dll_mod.dll / ccore_mod.dll (normal)", modFolder);   // this mod has no plugin DLL: normal
}

static int __cdecl CmpNames(const void* a, const void* b)
{
    return _stricmp((const char*)a, (const char*)b);
}

void LoadV2Submods()
{
    // <z_CreatineCore>\dll_Submods\*.dll, in alphabetical order. Nothing to configure: drop a
    // DLL in the folder and it is loaded at startup (after all built-in patches).
    // Rename it to *.dll.off (or move it out) to disable it.
    char dir[MAX_PATH];
    _snprintf_s(dir, sizeof(dir), _TRUNCATE, "%s\\%s", V2_OwnDir(), SUBMODS_DIR_NAME);
    CreateDirectoryA(dir, NULL);        // makes the folder visible on first run

    char pattern[MAX_PATH];
    _snprintf_s(pattern, sizeof(pattern), _TRUNCATE, "%s\\*.dll", dir);

    static char names[V2MOD_MAX_PLUGINS][MAX_PATH];
    int count = 0;
    WIN32_FIND_DATAA fd;
    HANDLE h = FindFirstFileA(pattern, &fd);
    if (h != INVALID_HANDLE_VALUE)
    {
        do
        {
            if (fd.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)
                continue;
            // "*.dll" also matches longer extensions through 8.3 names (a.dllx): check the tail
            size_t len = strlen(fd.cFileName);
            if (len < 5 || _stricmp(fd.cFileName + len - 4, ".dll") != 0)
                continue;
            if (count >= V2MOD_MAX_PLUGINS)
            {
                Log("ModLoader: dll_Submods has more than %d DLLs, the rest is skipped", V2MOD_MAX_PLUGINS);
                break;
            }
            strncpy_s(names[count++], MAX_PATH, fd.cFileName, _TRUNCATE);
        } while (FindNextFileA(h, &fd));
        FindClose(h);
    }
    qsort(names, count, MAX_PATH, CmpNames);

    Log("ModLoader: %s: %d DLL(s)", dir, count);
    for (int i = 0; i < count; ++i)
    {
        char full[MAX_PATH];
        _snprintf_s(full, sizeof(full), _TRUNCATE, "%s\\%s", dir, names[i]);
        LoadPluginDll(full, dir);
    }
}
