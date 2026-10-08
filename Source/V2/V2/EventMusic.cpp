// EventMusic.cpp - sonidos asociados a imágenes de eventos de Victoria 2.
// EventMusic.dll se carga desde la DLL principal solo si ENABLE_EVENT_SOUNDS=1.
// Compilar como DLL Win32; requiere MinHook (MinHook.h y biblioteca MinHook x86).
#ifdef _WIN64
#error EventMusic.dll debe compilarse para Win32 (x86)
#endif
#include <windows.h>
#include <shellapi.h>
#include <mmsystem.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <wchar.h>
#include "MinHook.h"
#pragma comment(lib, "winmm.lib")
#pragma comment(lib, "shell32.lib")

static volatile LONG g_eventMusicLogging = 1;
static void EventMusicLog(const char* fmt, ...)
{
    if (!g_eventMusicLogging) return;
    wchar_t exe[MAX_PATH] = {};
    DWORD n = GetModuleFileNameW(NULL, exe, MAX_PATH);
    if (!n || n >= MAX_PATH) return;
    wchar_t* slash = wcsrchr(exe, L'\\');
    if (!slash) return;
    *slash = 0;
    wchar_t dir[MAX_PATH], file[MAX_PATH];
    swprintf_s(dir, L"%s\\Logs", exe);
    CreateDirectoryW(dir, NULL);
    swprintf_s(file, L"%s\\v2dll.log", dir);
    FILE* f = 0;
    if (_wfopen_s(&f, file, L"a") || !f) return;
    fprintf(f, "[%u] ", GetCurrentProcessId());
    va_list ap; va_start(ap, fmt); vfprintf(f, fmt, ap); va_end(ap);
    fputc('\n', f); fclose(f);
}

extern "C" __declspec(dllexport) BOOL WINAPI EventMusic_Start(BOOL enableLogging);

// Sonido asociado a la imagen de un evento: la lista watch/music.txt y
// los archivos sound/ se buscan en los mods activos, empezando por el
// Ãºltimo cargado. SFX_ONLY_MODS=1 desactiva el fallback al juego base.
#ifndef SFX_ONLY_MODS
#define SFX_ONLY_MODS 1
#endif
#define SFX_MAX_ROOTS 16
static char g_sfxRoots[SFX_MAX_ROOTS][MAX_PATH];
static int g_sfxRootCount = 0;
static bool g_sfxRootsReady = false;
static HANDLE (WINAPI *g_sfxOrigCreateFileW)(LPCWSTR,DWORD,DWORD,LPSECURITY_ATTRIBUTES,DWORD,DWORD,HANDLE) = 0;
static __declspec(thread) bool t_sfxInHook = false;
static DWORD g_sfxLastTick = 0;
static char g_sfxLastStem[128] = {};

static bool SfxReadTextFile(const char* path, char* buffer, size_t cap)
{
    if (!path || !buffer || cap < 2) return false;
    FILE* f = 0;
    if (fopen_s(&f, path, "rb") || !f) return false;
    size_t n = fread(buffer, 1, cap - 1, f);
    fclose(f);
    buffer[n] = 0;
    return true;
}

static bool SfxGetMusicForKey(const char* data, const char* key, char* out, size_t cap)
{
    if (!data || !key || !out || !cap) return false;
    out[0] = 0;
    size_t kl = strlen(key);
    if ((unsigned char)data[0] == 0xEF && (unsigned char)data[1] == 0xBB && (unsigned char)data[2] == 0xBF) data += 3;
    for (const char* p = data; *p; ) {
        const char* e = strchr(p, '\n'); if (!e) e = p + strlen(p);
        const char* s = p; while (s < e && (*s == ' ' || *s == '\t' || *s == '\r')) ++s;
        if (s < e && *s != '#') {
            const char* eq = (const char*)memchr(s, '=', (size_t)(e - s));
            if (eq) {
                const char* ke = eq; while (ke > s && (ke[-1] == ' ' || ke[-1] == '\t')) --ke;
                if ((size_t)(ke - s) == kl && _strnicmp(s, key, kl) == 0) {
                    const char* q1 = (const char*)memchr(eq, '"', (size_t)(e - eq));
                    const char* q2 = q1 ? (const char*)memchr(q1 + 1, '"', (size_t)(e - q1 - 1)) : 0;
                    if (q1 && q2 && q2 > q1 + 1 && (size_t)(q2 - q1 - 1) < cap) {
                        memcpy(out, q1 + 1, (size_t)(q2 - q1 - 1)); out[q2 - q1 - 1] = 0; return true;
                    }
                }
            }
        }
        p = *e ? e + 1 : e;
    }
    return false;
}

static void SfxAddRoot(const char* dir)
{
    if (!dir || !*dir || g_sfxRootCount >= SFX_MAX_ROOTS) return;
    for (int i=0; i<g_sfxRootCount; ++i) if (!_stricmp(dir,g_sfxRoots[i])) return;
    strcpy_s(g_sfxRoots[g_sfxRootCount++], MAX_PATH, dir);
}

static void SfxBuildRoots()
{
    g_sfxRootCount = 0;
    char exeDir[MAX_PATH] = {};
    DWORD n = GetModuleFileNameA(NULL, exeDir, MAX_PATH);
    if (!n || n >= MAX_PATH) { g_sfxRootsReady = true; return; }
    char* slash = strrchr(exeDir, '\\'); if (!slash) { g_sfxRootsReady = true; return; } *slash = 0;
    char mods[SFX_MAX_ROOTS][MAX_PATH]; int count = 0, argc = 0;
    LPWSTR* argv = CommandLineToArgvW(GetCommandLineW(), &argc);
    if (argv) {
        for (int i=1; i<argc && count<SFX_MAX_ROOTS; ++i) {
            if (_wcsnicmp(argv[i], L"-mod=", 5)) continue;
            char rel[MAX_PATH] = {}; if (!WideCharToMultiByte(CP_ACP,0,argv[i]+5,-1,rel,MAX_PATH,0,0)) continue;
            for (char* c=rel; *c; ++c) if (*c=='/') *c='\\';
            char* r=rel; while (*r=='\\') ++r; size_t len=strlen(r);
            while (len && r[len-1]=='\\') r[--len]=0;
            if (len>4 && !_stricmp(r+len-4,".mod")) r[len-=4]=0;
            if (!len) continue;
            char dir[MAX_PATH] = {};
            if (r[1]==':') strcpy_s(dir,MAX_PATH,r); else _snprintf_s(dir,MAX_PATH,_TRUNCATE,"%s\\%s",exeDir,r);
            char mf[MAX_PATH]={}, cfg[4096], modPath[MAX_PATH]={};
            _snprintf_s(mf,MAX_PATH,_TRUNCATE,"%s.mod",dir);
            if (SfxReadTextFile(mf,cfg,sizeof(cfg)) && SfxGetMusicForKey(cfg,"path",modPath,sizeof(modPath))) {
                for(char* c=modPath;*c;++c) if(*c=='/')*c='\\';
                char* mp=modPath; while(*mp=='\\')++mp;
                if (*mp) { if(mp[1]==':') strcpy_s(dir,MAX_PATH,mp); else _snprintf_s(dir,MAX_PATH,_TRUNCATE,"%s\\%s",exeDir,mp); }
            }
            strcpy_s(mods[count++],MAX_PATH,dir);
        }
        LocalFree(argv);
    }
    for (int i=count-1;i>=0;--i) SfxAddRoot(mods[i]);
    #if !SFX_ONLY_MODS
    SfxAddRoot(exeDir);
    #endif
    g_sfxRootsReady=true;
    for(int i=0;i<g_sfxRootCount;++i) EventMusicLog("[SFX] Carpeta %d: %s",i+1,g_sfxRoots[i]);
}

static bool SfxResolve(const char* relative, char* out, size_t cap)
{
    if(!g_sfxRootsReady) SfxBuildRoots();
    for(int i=0;i<g_sfxRootCount;++i) {
        _snprintf_s(out,cap,_TRUNCATE,"%s\\%s",g_sfxRoots[i],relative);
        DWORD a=GetFileAttributesA(out); if(a!=INVALID_FILE_ATTRIBUTES && !(a&FILE_ATTRIBUTE_DIRECTORY)) return true;
    }
    if(cap) out[0]=0; return false;
}

static bool SfxFindSound(const char* key, char* out, size_t cap)
{
    if(!g_sfxRootsReady) SfxBuildRoots();
    char cfg[32768], path[MAX_PATH];
    for(int i=0;i<g_sfxRootCount;++i) {
        _snprintf_s(path,MAX_PATH,_TRUNCATE,"%s\\watch\\music.txt",g_sfxRoots[i]);
        if(SfxReadTextFile(path,cfg,sizeof(cfg)) && SfxGetMusicForKey(cfg,key,out,cap)) { EventMusicLog("[SFX] %s encontrado en %s",key,path); return true; }
    }
    return false;
}

static bool SfxEventStem(const wchar_t* path, char* out, size_t cap)
{
    static const wchar_t marker[]=L"gfx\\pictures\\events\\";
    for(const wchar_t* p=path;*p;++p) if(!_wcsnicmp(p,marker,sizeof(marker)/sizeof(marker[0])-1)) {
        const wchar_t* s=p+sizeof(marker)/sizeof(marker[0])-1; const wchar_t* end=wcschr(s,L'\\');
        const wchar_t* dot=wcsrchr(s,L'.'); if(end) return false;
        size_t len=dot?(size_t)(dot-s):wcslen(s); if(!len || len>=cap) return false;
        for(size_t i=0;i<len;++i) { if(s[i]==L'/') return false; out[i]=(char)s[i]; }
        out[len]=0; return true;
    }
    return false;
}

static void SfxOnEvent(const char* stem)
{
    DWORD now=GetTickCount(); if(!_stricmp(stem,g_sfxLastStem) && now-g_sfxLastTick<2000) return;
    g_sfxLastTick=now; strcpy_s(g_sfxLastStem,stem);
    char filename[MAX_PATH]={}, rel[MAX_PATH]={}, full[MAX_PATH]={};
    if(!SfxFindSound(stem,filename,sizeof(filename))) return;
    if(strstr(filename,"..")) return;
    _snprintf_s(rel,MAX_PATH,_TRUNCATE,"sound\\%s",filename);
    if(!SfxResolve(rel,full,sizeof(full))) { EventMusicLog("[SFX] No existe el sonido: %s",rel); return; }
    EventMusicLog("[SFX] Imagen de evento: %s -> %s",stem,full);
    PlaySoundA(full,NULL,SND_FILENAME|SND_ASYNC|SND_NODEFAULT);
}

static volatile LONG g_restartOnBackendBg = 0;
extern "C" __declspec(dllexport) void WINAPI EventMusic_SetRestartOnBackendBg(BOOL enabled)
{
    InterlockedExchange(&g_restartOnBackendBg, enabled ? 1 : 0);
}

static volatile LONG g_backendRestartStarted = 0;
static DWORD WINAPI RestartForBackendBgThread(LPVOID)
{
    wchar_t exe[MAX_PATH]={}; if (!GetModuleFileNameW(NULL,exe,MAX_PATH)) return 0;
    wchar_t marker[8]={};
    const wchar_t* original=GetCommandLineW();
    if (GetEnvironmentVariableW(L"V2DLL_BACKEND_RESTARTED",marker,8) || wcsstr(original,L"-v2dll-backend-restarted")) return 0;
    SetEnvironmentVariableW(L"V2DLL_BACKEND_RESTARTED",L"1");
    wchar_t command[32768]={};
    if (wcslen(original)+32 >= 32768) return 0;
    wcscpy_s(command,original);
    wcscat_s(command,L" -v2dll-backend-restarted");
    STARTUPINFOW si={}; si.cb=sizeof(si); PROCESS_INFORMATION pi={};
    if (CreateProcessW(exe,command,NULL,NULL,FALSE,0,NULL,NULL,&si,&pi)) {
        CloseHandle(pi.hThread); CloseHandle(pi.hProcess);
        EventMusicLog("[RESTART] backend_bg.dds detectado; reinicio con los mismos argumentos");
        ExitProcess(0);
    }
    EventMusicLog("[RESTART] CreateProcessW fallo: %lu",GetLastError());
    return 0;
}

static HANDLE WINAPI SfxCreateFileHook(LPCWSTR f,DWORD acc,DWORD share,LPSECURITY_ATTRIBUTES sa,DWORD disp,DWORD flags,HANDLE tmpl)
{
    HANDLE h=g_sfxOrigCreateFileW(f,acc,share,sa,disp,flags,tmpl);
    if (h != INVALID_HANDLE_VALUE && f && !t_sfxInHook) {
        if (InterlockedCompareExchange(&g_restartOnBackendBg, 0, 0)) {
            static const wchar_t pathBackslash[] = L"gfx\\interface\\backend_bg.dds";
            static const wchar_t pathSlash[] = L"gfx/interface/backend_bg.dds";
            const size_t pathLength = sizeof(pathBackslash) / sizeof(pathBackslash[0]) - 1;
            for (const wchar_t* p=f; *p; ++p) if (!_wcsnicmp(p,pathBackslash,pathLength) || !_wcsnicmp(p,pathSlash,pathLength)) {
                if (InterlockedCompareExchange(&g_backendRestartStarted,1,0)==0) {
                    HANDLE thread=CreateThread(NULL,0,RestartForBackendBgThread,NULL,0,NULL);
                    if(thread) CloseHandle(thread);
                }
                break;
            }
        }
        char stem[128]; if(SfxEventStem(f,stem,sizeof(stem))) { t_sfxInHook=true; SfxOnEvent(stem); t_sfxInHook=false; }
    }
    return h;
}

static void InstallEventPictureHook()
{
    SfxBuildRoots();
    if(!g_sfxRootCount) EventMusicLog("[SFX] Ningun mod activo: sonidos de evento desactivados");
    MH_STATUS st=MH_Initialize();
    if(st!=MH_OK && st!=MH_ERROR_ALREADY_INITIALIZED) { EventMusicLog("[SFX] MH_Initialize fallo: %d",(int)st); return; }
    st=MH_CreateHookApi(L"kernelbase","CreateFileW",(LPVOID)SfxCreateFileHook,(LPVOID*)&g_sfxOrigCreateFileW);
    if(st!=MH_OK) { EventMusicLog("[SFX] No se pudo hookear CreateFileW: %d",(int)st); return; }
    st=MH_EnableHook(MH_ALL_HOOKS);
    if(st!=MH_OK) { EventMusicLog("[SFX] MH_EnableHook fallo: %d",(int)st); return; }
    EventMusicLog("[SFX] Hook de CreateFileW activo");
}

static DWORD WINAPI SfxInstallThread(LPVOID) { InstallEventPictureHook(); return 0; }

extern "C" __declspec(dllexport) BOOL WINAPI EventMusic_Start(BOOL enableLogging)
{
    InterlockedExchange(&g_eventMusicLogging, enableLogging ? 1 : 0);
    HANDLE h = CreateThread(NULL, 0, SfxInstallThread, NULL, 0, NULL);
    if (!h) { EventMusicLog("[SFX] No se pudo crear el hilo de instalacion"); return FALSE; }
    CloseHandle(h);
    return TRUE;
}
