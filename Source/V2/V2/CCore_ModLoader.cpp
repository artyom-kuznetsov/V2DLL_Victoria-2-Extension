// CCore_ModLoader.cpp - loads optional plugin DLLs.
//
// Two sources, both speaking the same V2ModAPI / V2Mod_Init interface:
//
//  1. Every "*.dll" in the folder of every active -mod= (LoadV2Mods; the folder
//     itself, not its subfolders). V2TechButton.cpp calls it once per active
//     mod (command-line order) at the end of Install(). "v2dll_mod.dll" and
//     "ccore_mod.dll" go first, the rest alphabetically; creatinecore.dll itself is
//     skipped, and a DLL byte-identical to an already loaded one is skipped too
//     (e.g. tgcx.dll next to its copy v2dll_mod.dll).
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
static unsigned long long g_modDllHashes[V2MOD_MAX_PLUGINS];   // content hash of each loaded DLL
static V2ModAPI  g_modApis[V2MOD_MAX_PLUGINS];
static int       g_modPluginCount = 0;
static DWORD     g_modImageLo[V2MOD_MAX_PLUGINS];   // image range of every loaded plugin (crash VEH filter)
static DWORD     g_modImageHi[V2MOD_MAX_PLUGINS];

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

// FNV-1a over the whole file (0 = unreadable).
static unsigned long long HashFile(const char* path)
{
    HANDLE h = CreateFileA(path, GENERIC_READ, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
    if (h == INVALID_HANDLE_VALUE)
        return 0;
    unsigned long long hash = 1469598103934665603ULL;
    static unsigned char buf[64 * 1024];
    DWORD got = 0;
    while (ReadFile(h, buf, sizeof(buf), &got, NULL) && got)
        for (DWORD i = 0; i < got; ++i)
            hash = (hash ^ buf[i]) * 1099511628211ULL;
    CloseHandle(h);
    return hash ? hash : 1;
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

// True when `addr` lies inside the image of a loaded plugin DLL.
bool V2_AddrInPlugin(DWORD addr)
{
    for (int i = 0; i < g_modPluginCount; ++i)
        if (g_modImageLo[i] && addr >= g_modImageLo[i] && addr < g_modImageHi[i])
            return true;
    return false;
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

    unsigned long long hash = HashFile(dllPath);
    for (int i = 0; hash && i < g_modPluginCount; ++i)
        if (g_modDllHashes[i] == hash)
        {
            Log("ModLoader: %s is identical to %s, loaded once", dllPath, g_modDllPaths[i]);
            return;
        }

    int slot = g_modPluginCount;
    g_modDllHashes[slot] = hash;
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
    {
        IMAGE_DOS_HEADER* dos = (IMAGE_DOS_HEADER*)m;
        IMAGE_NT_HEADERS32* nt = (IMAGE_NT_HEADERS32*)((unsigned char*)m + dos->e_lfanew);
        g_modImageLo[slot] = (DWORD)(DWORD_PTR)m;
        g_modImageHi[slot] = (DWORD)(DWORD_PTR)m + nt->OptionalHeader.SizeOfImage;
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

static int __cdecl CmpNames(const void* a, const void* b)
{
    return _stricmp((const char*)a, (const char*)b);
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

    // v2dll_mod.dll / ccore_mod.dll first (the original plugin names), then every other *.dll of the folder
    // alphabetically. Subfolders are not searched.
    static char names[V2MOD_MAX_PLUGINS][MAX_PATH];
    int count = 0;
    for (size_t i = 0; i < sizeof(MOD_DLL_NAMES) / sizeof(MOD_DLL_NAMES[0]); ++i)
    {
        char path[MAX_PATH];
        _snprintf_s(path, sizeof(path), _TRUNCATE, "%s\\%s", modFolder, MOD_DLL_NAMES[i]);
        if (GetFileAttributesA(path) != INVALID_FILE_ATTRIBUTES && count < V2MOD_MAX_PLUGINS)
            strncpy_s(names[count++], MAX_PATH, MOD_DLL_NAMES[i], _TRUNCATE);
    }
    int firstOther = count;

    char pattern[MAX_PATH];
    _snprintf_s(pattern, sizeof(pattern), _TRUNCATE, "%s\\*.dll", modFolder);
    WIN32_FIND_DATAA fd;
    HANDLE h = FindFirstFileA(pattern, &fd);
    if (h != INVALID_HANDLE_VALUE)
    {
        do
        {
            if (fd.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)
                continue;
            size_t len = strlen(fd.cFileName);
            if (len < 5 || _stricmp(fd.cFileName + len - 4, ".dll") != 0)
                continue;                                   // "*.dll" also matches a.dllx through 8.3 names
            if (!_stricmp(fd.cFileName, "creatinecore.dll"))
                continue;                                   // never load ourselves again
            bool listed = false;
            for (int i = 0; i < firstOther; ++i)
                if (!_stricmp(names[i], fd.cFileName))
                    listed = true;
            if (listed)
                continue;
            if (count >= V2MOD_MAX_PLUGINS)
            {
                Log("ModLoader: %s has more than %d DLLs, the rest is skipped", modFolder, V2MOD_MAX_PLUGINS);
                break;
            }
            strncpy_s(names[count++], MAX_PATH, fd.cFileName, _TRUNCATE);
        } while (FindNextFileA(h, &fd));
        FindClose(h);
    }
    qsort(names + firstOther, count - firstOther, MAX_PATH, CmpNames);

    for (int i = 0; i < count; ++i)
    {
        char path[MAX_PATH];
        _snprintf_s(path, sizeof(path), _TRUNCATE, "%s\\%s", modFolder, names[i]);
        LoadPluginDll(path, modFolder, true);
    }
    if (!count)
        Log("ModLoader: %s has no DLLs (normal)", modFolder);   // this mod has no plugin DLL: normal
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
