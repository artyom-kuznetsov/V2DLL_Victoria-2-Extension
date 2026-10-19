// MOD-2 loader (D15, D16): lua51.dll forwards the original's 128 Lua exports to
// lua51_real.dll and loads tgcx.dll from the folder of a ticked TGCX package,
// found through the -mod= list (last first). With no package ticked it is a
// plain Lua proxy and says so in Logs\tgcx.log.
#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <windows.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "../tgcx_exports.h"
#include "../tgcx_packages.h"

static_assert(sizeof(void*) == 4, "Victoria II requires Win32");
static const char tgcx_loader_marker[]="TGCX loader MOD-2 0.8.0";

// Only written when tgcx.dll never opened the log itself.
static void tgcx_LoaderLog(const wchar_t* directory, const char* text, DWORD error) {
    wchar_t path[MAX_PATH];
    if (swprintf_s(path, L"%s\\Logs", directory) < 0) return;
    CreateDirectoryW(path, nullptr);
    if (swprintf_s(path, L"%s\\Logs\\tgcx.log", directory) < 0) return;
    HANDLE log=CreateFileW(path, GENERIC_WRITE, FILE_SHARE_READ, nullptr, CREATE_ALWAYS, 0, nullptr);
    if (log == INVALID_HANDLE_VALUE) return;
    char line[512];
    int size=_snprintf_s(line, sizeof(line), _TRUNCATE, "%s: %s (error %lu); Lua forwarding only\r\n",
                         tgcx_loader_marker, text, static_cast<unsigned long>(error));
    DWORD written=0;
    if (size > 0) WriteFile(log, line, static_cast<DWORD>(size), &written, nullptr);
    CloseHandle(log);
}

BOOL WINAPI DllMain(HINSTANCE, DWORD reason, LPVOID) {
    if (reason != DLL_PROCESS_ATTACH) return TRUE;
    wchar_t directory[MAX_PATH], path[MAX_PATH];
    DWORD count=GetModuleFileNameW(nullptr, directory, _countof(directory));
    if (!count || count >= _countof(directory)) return TRUE;
    wchar_t* slash=wcsrchr(directory, L'\\');
    if (!slash) return TRUE;
    *slash=0;
    static tgcx_ModList mods;
    tgcx_ReadMods(directory, GetCommandLineA(), &mods);
    HMODULE logic=nullptr;
    DWORD error=ERROR_FILE_NOT_FOUND;
    for (unsigned i=mods.count; i-- > 0 && !logic;) {
        if (!mods.item[i].package[0]) continue;
        if (!tgcx_GamePath(directory, mods.item[i].path, "tgcx.dll", path, MAX_PATH)) continue;
        // A full path: never picks up a tgcx.dll from the search path.
        logic=LoadLibraryExW(path, nullptr, LOAD_WITH_ALTERED_SEARCH_PATH);
        if (!logic) error=GetLastError();
    }
    if (!logic) {
        tgcx_LoaderLog(directory, "no ticked TGCX package with tgcx.dll in the -mod= list; tgcx.dll not loaded", error);
        return TRUE;
    }
    using tgcx_InitFn=int (__cdecl*)(const char*);
    auto init=reinterpret_cast<tgcx_InitFn>(GetProcAddress(logic, "tgcx_Init"));
    if (!init) {
        error=GetLastError();
        FreeLibrary(logic);
        tgcx_LoaderLog(directory, "tgcx.dll has no tgcx_Init", error);
        return TRUE;
    }
    // tgcx.dll logs its own result; it stays loaded either way.
    init(tgcx_loader_marker);
    return TRUE;
}
