// EventMusic.cpp - sonidos asociados a imagenes de eventos de Victoria 2.
// EventMusic.dll se carga desde la DLL principal solo si ENABLE_EVENT_SOUNDS=1.
// Compilar como DLL Win32; requiere MinHook (MinHook.h y biblioteca MinHook x86).
//
// Funciones:
//  1. Al cargarse la imagen de un evento (gfx\pictures\events\<nombre>.dds) suena
//     sound\<archivo> segun watch\music.txt de los mods activos. El volumen sigue en
//     vivo al volumen de musica del juego y la musica del juego se pausa mientras
//     suena el evento y se reanuda al terminar.
//  2. Al cargarse backend_bg.dds se detiene la musica del juego.
//  3. Ctrl+Shift+M silencia / reactiva la musica del juego en cualquier momento.
#ifdef _WIN64
#error EventMusic.dll debe compilarse para Win32 (x86)
#endif
#include <windows.h>
#include <shellapi.h>
#include <mmsystem.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <wchar.h>
#include "MinHook.h"
#pragma comment(lib, "winmm.lib")
#pragma comment(lib, "shell32.lib")

// ---------------------------------------------------------------
// Log
// ---------------------------------------------------------------
static volatile LONG g_eventMusicLogging = 1;
static void EventMusicLog(const char* fmt, ...)
{
    if (!g_eventMusicLogging) return;
    wchar_t exe[MAX_PATH] = {};
    // The log sits next to this DLL (V2DLL\Logs, shared with the core); if the DLL is
    // not found by address, fall back to the game folder.
    HMODULE self = NULL;
    GetModuleHandleExW(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS | GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
        (LPCWSTR)&EventMusicLog, &self);
    DWORD n = GetModuleFileNameW(self, exe, MAX_PATH);
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
// La DLL principal (V2TechButton) la llama antes de Start. FALSE (por defecto): al cargar
// backend_bg.dds la musica del juego se mantiene detenida durante SFX_BACKEND_WINDOW_MS.
// TRUE: solo se hace un Stop y el juego elige y arranca otra cancion por su cuenta.
extern "C" __declspec(dllexport) void WINAPI EventMusic_SetRestartOnBackendBg(BOOL restart);

// ---------------------------------------------------------------
// Carpetas de mods y busqueda de sonidos
// La lista watch\music.txt y los archivos sound\ se buscan en los mods
// activos, empezando por el ultimo cargado. SFX_ONLY_MODS=1 desactiva el
// fallback al juego base.
// ---------------------------------------------------------------
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
    // Lowest priority: the V2DLL folder itself (V2DLL\watch\music.txt + V2DLL\sound\*.wav), for sounds
    // that belong to no particular mod.
    {
        HMODULE self = NULL;
        char selfDir[MAX_PATH] = {};
        if (GetModuleHandleExA(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS | GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
                (LPCSTR)&SfxBuildRoots, &self) && GetModuleFileNameA(self, selfDir, MAX_PATH) && selfDir[0]) {
            char* sl = strrchr(selfDir, '\\');
            if (sl) { *sl = 0; SfxAddRoot(selfDir); }
        }
    }
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

// ---------------------------------------------------------------
// Estado de la musica del juego (direcciones de Victoria 2 v3.04, base 0x400000)
// ---------------------------------------------------------------
static const DWORD RVA_MUSIC_STATE        = 0xB20C3C;   // DAT_00f20c3c: 0 parado, 1 suena, 2 pausa del juego, 3 sin sonido
static const DWORD RVA_MUSIC_MEDIACTL     = 0xB20C4C;   // DAT_00f20c4c: IMediaControl del grafo DirectShow
static const DWORD RVA_MUSIC_OBJECT       = 0xF1CB34;   // DAT_0131cb34: objeto CMusic
static const DWORD RVA_MUSIC_VOLUME_CACHE = 0xB1F694;   // DAT_00f1f694: volumen aplicado (0..1), -1.0 al inicio
#define SFX_BACKEND_WINDOW_MS 4000                      // tiempo que se mantiene parada la musica tras backend_bg.dds

typedef LONG (__stdcall* tMcNoArgs)(void* self);
typedef LONG (__stdcall* tMcGetState)(void* self, LONG msTimeout, LONG* state);
typedef void (__fastcall* tMusicStop)(void* self, void* edx);

static volatile LONG  g_sfxMuted = 0;            // Ctrl+Shift+M
static volatile LONG  g_sfxHolds = 0;            // sonidos de evento en curso
static volatile LONG  g_sfxBackendPending = 0;   // ventana de "parar musica" activa
static volatile DWORD g_sfxBackendUntil = 0;
static volatile LONG  g_sfxRestartOnBackend = 0; // EventMusic_SetRestartOnBackendBg
static bool           g_sfxPausedByUs = false;   // protegido por g_musicLock
static SRWLOCK        g_musicLock = SRWLOCK_INIT;

// Volumen de musica que el juego aplico a CMusic (0..1).
static float GameMusicVolume()
{
    __try {
        BYTE* base = (BYTE*)GetModuleHandleW(NULL);
        float v = *(volatile float*)(base + RVA_MUSIC_VOLUME_CACHE);
        if (!(v >= 0.0f && v <= 1.0f)) return 1.0f;   // -1.0 inicial, NaN o basura
        return v;
    } __except (EXCEPTION_EXECUTE_HANDLER) {
        return 1.0f;
    }
}

static DWORD GameMusicState()
{
    __try {
        return *(DWORD*)((BYTE*)GetModuleHandleW(NULL) + RVA_MUSIC_STATE);
    } __except (EXCEPTION_EXECUTE_HANDLER) {
        return 0xFFFFFFFF;
    }
}

// pause=true: pausa el grafo si esta corriendo. pause=false: lo reanuda si esta en pausa.
// El estado del juego queda en 1, asi que el juego no arranca otra cancion mientras tanto.
static bool GameMusicSetPaused(bool pause, LONG timeoutMs)
{
    __try {
        BYTE* base = (BYTE*)GetModuleHandleW(NULL);
        DWORD st  = *(DWORD*)(base + RVA_MUSIC_STATE);
        void* ctl = *(void**)(base + RVA_MUSIC_MEDIACTL);
        if (st != 1 || !ctl) return false;
        void** vt = *(void***)ctl;
        LONG fs = -1;                                    // 0 parado, 1 pausa, 2 corriendo
        ((tMcGetState)vt[0x28 / 4])(ctl, timeoutMs, &fs);
        if (pause && fs == 2)  { ((tMcNoArgs)vt[0x20 / 4])(ctl); return true; }   // Pause
        if (!pause && fs == 1) { ((tMcNoArgs)vt[0x1C / 4])(ctl); return true; }   // Run
    } __except (EXCEPTION_EXECUTE_HANDLER) {
        EventMusicLog("[SFX] excepcion al pausar/reanudar la musica del juego");
    }
    return false;
}

// Pausa si hay mute o sonido de evento; reanuda solo lo que pausamos nosotros.
static void GameMusicSync(LONG timeoutMs)
{
    AcquireSRWLockExclusive(&g_musicLock);
    bool want = (g_sfxMuted != 0) || (g_sfxHolds > 0);
    if (want) {
        if (GameMusicSetPaused(true, timeoutMs)) {
            g_sfxPausedByUs = true;
            EventMusicLog("[SFX] musica del juego pausada (mute=%d eventos=%d)", (int)g_sfxMuted, (int)g_sfxHolds);
        }
    } else if (g_sfxPausedByUs) {
        bool ok = GameMusicSetPaused(false, timeoutMs);
        g_sfxPausedByUs = false;
        EventMusicLog("[SFX] musica del juego reanudada: %d", (int)ok);
    }
    ReleaseSRWLockExclusive(&g_musicLock);
}

static void SfxPauseBegin() { InterlockedIncrement(&g_sfxHolds); GameMusicSync(100); }
static void SfxPauseEnd()
{
    if (InterlockedDecrement(&g_sfxHolds) < 0) InterlockedExchange(&g_sfxHolds, 0);
    GameMusicSync(100);
}

// Stop de CMusic (slot +0x10), igual que el boton "siguiente" de la DLL principal.
static void GameMusicStopIfPlaying()
{
    static volatile LONG logs = 0;
    __try {
        BYTE* base = (BYTE*)GetModuleHandleW(NULL);
        DWORD st = *(DWORD*)(base + RVA_MUSIC_STATE);
        void* music = *(void**)(base + RVA_MUSIC_OBJECT);
        if (!music || (st != 1 && st != 2)) return;
        void** vt = *(void***)music;
        ((tMusicStop)vt[0x10 / 4])(music, 0);
        if (InterlockedIncrement(&logs) <= 30)
            EventMusicLog("[SFX] backend_bg.dds: musica del juego detenida (estado %u)", st);
    } __except (EXCEPTION_EXECUTE_HANDLER) {
        EventMusicLog("[SFX] excepcion al detener la musica del juego");
    }
}

static bool GameWindowFocused()
{
    DWORD pid = 0;
    HWND fg = GetForegroundWindow();
    if (!fg) return false;
    GetWindowThreadProcessId(fg, &pid);
    return pid == GetCurrentProcessId();
}

// Hilo de control: atajo Ctrl+Shift+M, ventana de "parar musica" tras backend_bg.dds
// y vigilancia del mute (si el juego cambia de cancion estando muteado, se vuelve a pausar).
// Si no hay mute ni eventos en curso no toca el grafo de DirectShow.
static DWORD WINAPI SfxControlThread(LPVOID)
{
    bool prevDown = false;
    DWORD lastSync = 0, lastStop = 0;
    for (;;) {
        Sleep(30);
        DWORD now = GetTickCount();
        bool force = false;

        bool down = ((GetAsyncKeyState(VK_CONTROL) & 0x8000) != 0) &&
                    ((GetAsyncKeyState(VK_SHIFT)   & 0x8000) != 0) &&
                    ((GetAsyncKeyState('M')        & 0x8000) != 0);
        if (down && !prevDown && GameWindowFocused()) {
            LONG nowMuted = g_sfxMuted ? 0 : 1;
            InterlockedExchange(&g_sfxMuted, nowMuted);
            EventMusicLog("[SFX] Ctrl+Shift+M: musica %s", nowMuted ? "muteada" : "activada");
            force = true;
        }
        prevDown = down;

        if (g_sfxBackendPending) {
            if ((int)(g_sfxBackendUntil - now) <= 0) {
                InterlockedExchange(&g_sfxBackendPending, 0);
            } else if (now - lastStop >= 100) {
                lastStop = now;
                GameMusicStopIfPlaying();
            }
        }

        if (force || now - lastSync >= 100) {
            lastSync = now;
            if (g_sfxMuted || g_sfxHolds > 0 || g_sfxPausedByUs)
                GameMusicSync(force ? 100 : 0);
        }
    }
    return 0;
}

// ---------------------------------------------------------------
// Reproduccion de sonidos
// ---------------------------------------------------------------
static BYTE* g_sfxBuf = 0;   // respaldo: el buffer debe vivir mientras suena (SND_ASYNC)

// Respaldo: escala el WAV una sola vez y lo reproduce con PlaySound (volumen fijo).
static bool SfxPlayScaled(const char* path, float vol)
{
    FILE* f = 0;
    if (fopen_s(&f, path, "rb") || !f) { EventMusicLog("[SFX] escalado: no se pudo abrir"); return false; }
    fseek(f, 0, SEEK_END); long sz = ftell(f); fseek(f, 0, SEEK_SET);
    if (sz < 44 || sz > 32 * 1024 * 1024) { fclose(f); EventMusicLog("[SFX] escalado: tamano invalido %ld", sz); return false; }
    BYTE* b = (BYTE*)malloc((size_t)sz);
    if (!b || fread(b, 1, (size_t)sz, f) != (size_t)sz) { fclose(f); free(b); return false; }
    fclose(f);
    if (memcmp(b, "RIFF", 4) || memcmp(b + 8, "WAVE", 4)) { free(b); EventMusicLog("[SFX] escalado: no es RIFF/WAVE"); return false; }

    int tag = 0, bits = 0; BYTE* data = 0; long long dlen = 0;
    for (long long p = 12; p + 8 <= sz; ) {
        long long cl = *(DWORD*)(b + p + 4);
        if (!memcmp(b + p, "fmt ", 4) && p + 24 <= sz) {
            tag  = *(WORD*)(b + p + 8);
            bits = *(WORD*)(b + p + 22);
            if (tag == 0xFFFE && cl >= 40 && p + 34 <= sz) tag = *(WORD*)(b + p + 32);
        } else if (!memcmp(b + p, "data", 4)) {
            data = b + p + 8;
            dlen = (p + 8 + cl > sz) ? (sz - p - 8) : cl;
            break;
        }
        p += 8 + cl + (cl & 1);
    }
    EventMusicLog("[SFX] escalado: tag=%d bits=%d datos=%lld gain=%.3f", tag, bits, dlen, vol);
    if (!data || dlen <= 0) { free(b); EventMusicLog("[SFX] escalado: sin chunk data"); return false; }

    if (tag == 1 && bits == 16) {
        short* s = (short*)data;
        for (long long i = 0; i < dlen / 2; ++i) s[i] = (short)(s[i] * vol);
    } else if (tag == 1 && bits == 8) {
        for (long long i = 0; i < dlen; ++i) data[i] = (BYTE)(128 + ((int)data[i] - 128) * vol);
    } else if (tag == 1 && bits == 24) {
        for (long long i = 0; i + 2 < dlen; i += 3) {
            int v = (data[i] | (data[i+1] << 8) | (data[i+2] << 16));
            if (v & 0x800000) v |= ~0xFFFFFF;
            v = (int)(v * vol);
            data[i] = (BYTE)v; data[i+1] = (BYTE)(v >> 8); data[i+2] = (BYTE)(v >> 16);
        }
    } else if (tag == 1 && bits == 32) {
        int* s = (int*)data;
        for (long long i = 0; i < dlen / 4; ++i) s[i] = (int)(s[i] * (double)vol);
    } else if (tag == 3 && bits == 32) {
        float* s = (float*)data;
        for (long long i = 0; i < dlen / 4; ++i) s[i] *= vol;
    } else {
        free(b); EventMusicLog("[SFX] escalado: formato no soportado"); return false;
    }

    PlaySoundA(NULL, NULL, 0);
    free(g_sfxBuf); g_sfxBuf = b;
    return PlaySoundA((LPCSTR)b, NULL, SND_MEMORY | SND_ASYNC | SND_NODEFAULT) != 0;
}

// ---- Reproduccion en vivo: el volumen se lee del juego en cada trozo ----
struct SfxPlay {
    BYTE* mem;            // archivo completo (malloc)
    BYTE* pcm;            // inicio de los datos dentro de mem
    DWORD len;            // bytes de datos
    WAVEFORMATEX wf;
    volatile LONG stop;
};
static SfxPlay* g_sfxCur = 0;
static SRWLOCK  g_sfxLock = SRWLOCK_INIT;

// Curva: la musica del juego cae mas que lineal con el slider.
static float SfxGain() { float v = GameMusicVolume(); return v * v * v; }

static void SfxFill(const BYTE* src, BYTE* dst, DWORD n, const WAVEFORMATEX& wf, float g0, float g1)
{
    DWORD frames = n / wf.nBlockAlign; int ch = wf.nChannels;
    for (DWORD i = 0; i < frames; ++i) {
        float g = g0 + (g1 - g0) * (float)i / (float)frames;   // rampa: evita chasquidos
        for (int c = 0; c < ch; ++c) {
            if (wf.wBitsPerSample == 16) {
                short s = ((const short*)src)[i * ch + c];
                ((short*)dst)[i * ch + c] = (short)(s * g);
            } else {
                int s = (int)src[i * ch + c] - 128;
                dst[i * ch + c] = (BYTE)(128 + (int)(s * g));
            }
        }
    }
}

static DWORD WINAPI SfxPlayThread(LPVOID arg)
{
    SfxPlay* pl = (SfxPlay*)arg;
    const int NB = 4;
    HANDLE ev = CreateEventW(NULL, FALSE, FALSE, NULL);
    HWAVEOUT hw = 0;
    WAVEHDR hdr[NB]; BYTE* buf[NB];
    memset(hdr, 0, sizeof(hdr)); memset(buf, 0, sizeof(buf));
    DWORD chunk = pl->wf.nAvgBytesPerSec / 25;                   // 40 ms
    chunk -= chunk % pl->wf.nBlockAlign;
    if (!chunk) chunk = pl->wf.nBlockAlign;
    int prepared = 0;

    if (ev && waveOutOpen(&hw, WAVE_MAPPER, &pl->wf, (DWORD_PTR)ev, 0, CALLBACK_EVENT) == MMSYSERR_NOERROR) {
        for (int i = 0; i < NB; ++i) {
            buf[i] = (BYTE*)malloc(chunk);
            if (!buf[i]) break;
            hdr[i].lpData = (LPSTR)buf[i]; hdr[i].dwBufferLength = chunk;
            if (waveOutPrepareHeader(hw, &hdr[i], sizeof(WAVEHDR)) != MMSYSERR_NOERROR) break;
            ++prepared;
        }
        if (prepared == NB) {
            DWORD pos = 0, ba = pl->wf.nBlockAlign; float gPrev = SfxGain();
            while (!pl->stop && pos + ba <= pl->len) {
                bool wrote = false;
                for (int i = 0; i < NB && !pl->stop; ++i) {
                    if ((hdr[i].dwFlags & WHDR_INQUEUE) || pos + ba > pl->len) continue;
                    DWORD n = pl->len - pos; if (n > chunk) n = chunk; n -= n % ba;
                    float g = SfxGain();
                    SfxFill(pl->pcm + pos, buf[i], n, pl->wf, gPrev, g); gPrev = g;
                    hdr[i].dwBufferLength = n;
                    waveOutWrite(hw, &hdr[i], sizeof(WAVEHDR));
                    pos += n; wrote = true;
                }
                if (!wrote) WaitForSingleObject(ev, 50);
            }
            for (;;) {                                           // esperar a que termine lo encolado
                bool busy = false;
                for (int i = 0; i < NB; ++i) if (hdr[i].dwFlags & WHDR_INQUEUE) busy = true;
                if (!busy || pl->stop) break;
                WaitForSingleObject(ev, 50);
            }
        }
        waveOutReset(hw);
        for (int i = 0; i < prepared; ++i) waveOutUnprepareHeader(hw, &hdr[i], sizeof(WAVEHDR));
        waveOutClose(hw);
    } else {
        EventMusicLog("[SFX] waveOutOpen fallo");
    }
    for (int i = 0; i < NB; ++i) free(buf[i]);
    if (ev) CloseHandle(ev);

    AcquireSRWLockExclusive(&g_sfxLock);
    if (g_sfxCur == pl) g_sfxCur = 0;
    ReleaseSRWLockExclusive(&g_sfxLock);
    free(pl->mem); free(pl);

    SfxPauseEnd();                       // reanuda la musica si ya no queda ningun sonido ni mute
    return 0;
}

static bool SfxPlayLive(const char* path)
{
    FILE* f = 0;
    if (fopen_s(&f, path, "rb") || !f) return false;
    fseek(f, 0, SEEK_END); long sz = ftell(f); fseek(f, 0, SEEK_SET);
    if (sz < 44 || sz > 64 * 1024 * 1024) { fclose(f); return false; }
    BYTE* b = (BYTE*)malloc((size_t)sz);
    if (!b || fread(b, 1, (size_t)sz, f) != (size_t)sz) { fclose(f); free(b); return false; }
    fclose(f);
    if (memcmp(b, "RIFF", 4) || memcmp(b + 8, "WAVE", 4)) { free(b); return false; }

    int tag = 0, bits = 0, ch = 0; DWORD rate = 0, avg = 0; WORD ba = 0;
    BYTE* data = 0; long long dlen = 0;
    for (long long p = 12; p + 8 <= sz; ) {
        long long cl = *(DWORD*)(b + p + 4);
        if (!memcmp(b + p, "fmt ", 4) && p + 24 <= sz) {
            tag  = *(WORD*)(b + p + 8);
            ch   = *(WORD*)(b + p + 10);
            rate = *(DWORD*)(b + p + 12);
            avg  = *(DWORD*)(b + p + 16);
            ba   = *(WORD*)(b + p + 20);
            bits = *(WORD*)(b + p + 22);
            if (tag == 0xFFFE && cl >= 40 && p + 34 <= sz) tag = *(WORD*)(b + p + 32);
        } else if (!memcmp(b + p, "data", 4)) {
            data = b + p + 8;
            dlen = (p + 8 + cl > sz) ? (sz - p - 8) : cl;
            break;
        }
        p += 8 + cl + (cl & 1);
    }
    if (tag != 1 || (bits != 16 && bits != 8) || ch < 1 || ba != ch * bits / 8 || !data || dlen < ba) {
        free(b); EventMusicLog("[SFX] en vivo: formato no soportado (tag=%d bits=%d)", tag, bits); return false;
    }

    SfxPlay* pl = (SfxPlay*)calloc(1, sizeof(SfxPlay));
    if (!pl) { free(b); return false; }
    pl->mem = b; pl->pcm = data; pl->len = (DWORD)dlen;
    pl->wf.wFormatTag = WAVE_FORMAT_PCM; pl->wf.nChannels = (WORD)ch;
    pl->wf.nSamplesPerSec = rate; pl->wf.nAvgBytesPerSec = avg;
    pl->wf.nBlockAlign = ba; pl->wf.wBitsPerSample = (WORD)bits; pl->wf.cbSize = 0;

    AcquireSRWLockExclusive(&g_sfxLock);
    if (g_sfxCur) InterlockedExchange(&g_sfxCur->stop, 1);       // corta el sonido anterior
    g_sfxCur = pl;
    ReleaseSRWLockExclusive(&g_sfxLock);

    SfxPauseBegin();                     // pausa la musica del juego antes de que suene el evento

    HANDLE h = CreateThread(NULL, 0, SfxPlayThread, pl, 0, NULL);
    if (!h) {
        AcquireSRWLockExclusive(&g_sfxLock);
        if (g_sfxCur == pl) g_sfxCur = 0;
        ReleaseSRWLockExclusive(&g_sfxLock);
        free(b); free(pl);
        SfxPauseEnd();
        return false;
    }
    CloseHandle(h);
    EventMusicLog("[SFX] en vivo: %d canales %lu Hz %d bits, %lld bytes", ch, rate, bits, dlen);
    return true;
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

    float vol = GameMusicVolume();
    EventMusicLog("[SFX] volumen inicial del juego: %.3f -> gain %.3f", vol, vol * vol * vol);
    if (SfxPlayLive(full)) return;                 // sigue el volumen del juego mientras suena

    // Respaldo (formatos que no sean PCM 8/16 bits): volumen fijo al arrancar
    if (vol <= 0.0f) return;
    if (!SfxPlayScaled(full, vol * vol * vol))
        PlaySoundA(full, NULL, SND_FILENAME | SND_ASYNC | SND_NODEFAULT);
}

// ---------------------------------------------------------------
// Hook de CreateFileW
// ---------------------------------------------------------------
// Corta el sonido de evento que este sonando (en vivo o de respaldo).
static void SfxStopCurrent()
{
    AcquireSRWLockExclusive(&g_sfxLock);
    if (g_sfxCur) InterlockedExchange(&g_sfxCur->stop, 1);   // el hilo termina, resetea waveOut y reanuda/no la musica
    ReleaseSRWLockExclusive(&g_sfxLock);
    PlaySoundA(NULL, NULL, 0);                               // sonidos de respaldo (PlaySound)
}

static bool PathEndsWithI(const wchar_t* p, const wchar_t* tail)
{
    size_t lp = wcslen(p), lt = wcslen(tail);
    return lp >= lt && !_wcsicmp(p + lp - lt, tail);
}

static bool ContainsI(const wchar_t* h, const wchar_t* n)
{
    size_t ln = wcslen(n);
    for (; *h; ++h) if (!_wcsnicmp(h, n, ln)) return true;
    return false;
}

static HANDLE WINAPI SfxCreateFileHook(LPCWSTR f,DWORD acc,DWORD share,LPSECURITY_ATTRIBUTES sa,DWORD disp,DWORD flags,HANDLE tmpl)
{
    HANDLE h=g_sfxOrigCreateFileW(f,acc,share,sa,disp,flags,tmpl);
    if(h!=INVALID_HANDLE_VALUE && f && !t_sfxInHook) {
        t_sfxInHook = true;   // el log y la lectura de archivos de abajo pasan otra vez por este hook

        // Diagnostico: muestra las rutas "backend*" que abre el juego (primeras 40).
        if (ContainsI(f, L"backend")) {
            static volatile LONG seen = 0;
            if (InterlockedIncrement(&seen) <= 40) EventMusicLog("[SFX] CreateFileW backend: %ls", f);
        }
        if (PathEndsWithI(f, L"backend_bg.dds")) {
            if (!g_sfxRestartOnBackend) {   // modo "mantener parada": el hilo de control repite el Stop
                InterlockedExchange((volatile LONG*)&g_sfxBackendUntil, (LONG)(GetTickCount() + SFX_BACKEND_WINDOW_MS));
                InterlockedExchange(&g_sfxBackendPending, 1);
            }
            EventMusicLog("[SFX] backend_bg.dds detectado (estado musica=%u)", GameMusicState());
            GameMusicStopIfPlaying();      // primero la musica del juego (aunque este pausada por el evento)
            SfxStopCurrent();              // despues el sonido de evento que este sonando (superevento)
            EventMusicLog("[SFX] backend_bg.dds: sonido de evento cortado");
        }

        char stem[128];
        if (SfxEventStem(f,stem,sizeof(stem))) SfxOnEvent(stem);

        t_sfxInHook = false;
    }
    return h;
}

static void InstallEventPictureHook()
{
    SfxBuildRoots();
    if(!g_sfxRootCount) EventMusicLog("[SFX] Ningun mod activo: sin sonidos de evento (mute y backend_bg siguen activos)");
    MH_STATUS st=MH_Initialize();
    if(st!=MH_OK && st!=MH_ERROR_ALREADY_INITIALIZED) { EventMusicLog("[SFX] MH_Initialize fallo: %d",(int)st); return; }
    st=MH_CreateHookApi(L"kernelbase","CreateFileW",(LPVOID)SfxCreateFileHook,(LPVOID*)&g_sfxOrigCreateFileW);
    if(st!=MH_OK) { EventMusicLog("[SFX] No se pudo hookear CreateFileW: %d",(int)st); return; }
    st=MH_EnableHook(MH_ALL_HOOKS);
    if(st!=MH_OK) { EventMusicLog("[SFX] MH_EnableHook fallo: %d",(int)st); return; }
    EventMusicLog("[SFX] Hook de CreateFileW activo");
}

static DWORD WINAPI SfxInstallThread(LPVOID) { InstallEventPictureHook(); return 0; }

extern "C" __declspec(dllexport) void WINAPI EventMusic_SetRestartOnBackendBg(BOOL restart)
{
    InterlockedExchange(&g_sfxRestartOnBackend, restart ? 1 : 0);
    EventMusicLog("[SFX] RestartOnBackendBg=%d", restart ? 1 : 0);
}

extern "C" __declspec(dllexport) BOOL WINAPI EventMusic_Start(BOOL enableLogging)
{
    InterlockedExchange(&g_eventMusicLogging, enableLogging ? 1 : 0);

    HANDLE hc = CreateThread(NULL, 0, SfxControlThread, NULL, 0, NULL);
    if (hc) { CloseHandle(hc); EventMusicLog("[SFX] hilo de control iniciado (Ctrl+Shift+M)"); }
    else EventMusicLog("[SFX] No se pudo crear el hilo de control");

    HANDLE h = CreateThread(NULL, 0, SfxInstallThread, NULL, 0, NULL);
    if (!h) { EventMusicLog("[SFX] No se pudo crear el hilo de instalacion"); return FALSE; }
    CloseHandle(h);
    return TRUE;
}
