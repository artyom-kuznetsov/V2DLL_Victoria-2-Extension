// ccore_yearly_data_cache.cpp - CreatineCore submod (dll_Submods\ccore_yearly_data_cache.dll).
//
// Once per game year the per-country economy blocks of a game save are copied into
// z_CreatineCore\Cache\: saved_country_supply, domestic_demand_pool, actual_sold_domestic
// and the country-level stockpile (the stockpile blocks nested in factories / artisans are
// not taken). Used to study how the economy of every country develops over a campaign.
//
// The engine writes the save itself (autosave or a manual save), so the module never
// touches game memory and installs no hook: a low-priority thread watches
// the save folders (see CollectSaveDirs), waits until a changed save stops changing, reads its header
// (date / player / start_date) and, if that campaign year is not cached yet, extracts the blocks.
//
// File: Cache\<YYYY.MM.DD>_<player>_<save name>.txt, text in the save's own syntax:
//   # CreatineCore yearly data cache v1
//   # key=<year>|<player>|<start_date>
//   # date=1861.5.8
//   # source=<save file name>
//   TAG=
//   {
//   	stockpile=
//   	{ ... }
//   	...
//   }
//
// Retention: when the folder is over 50 MB, every cache file older than 30 days (file write time)
// is deleted; if nothing is older than that, nothing is deleted.
//
// Settings: ccore_yearly_data_cache.ini next to this DLL (created on first start).
#include <windows.h>
#include <shlobj.h>
#include <stdarg.h>
#include "V2ModAPI.h"
#include <string>
#include <vector>
#include <set>
#include <map>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>

static const V2ModAPI* g_api = 0;
static HMODULE g_self = 0;
static char    g_iniPath[MAX_PATH];
static int     g_enabled = 0;

static void Log(const char* fmt, ...)
{
    char buf[1024];
    va_list ap;
    va_start(ap, fmt);
    _vsnprintf_s(buf, sizeof(buf), _TRUNCATE, fmt, ap);
    va_end(ap);
    if (g_api && g_api->Log)
        g_api->Log("%s", buf);
}

static const unsigned long long CACHE_LIMIT_BYTES = 50ull * 1024 * 1024;
static const unsigned           CACHE_KEEP_DAYS   = 30;       // "a month"
static const DWORD              POLL_MS           = 3000;
static const size_t             MAX_SAVE_BYTES    = 512u * 1024 * 1024;

// ---------------------------------------------------------------
// Block extraction (pure text processing)
// ---------------------------------------------------------------
static const char* const BLOCK_NAMES[4] =
{
    "saved_country_supply", "domestic_demand_pool", "actual_sold_domestic", "stockpile"
};

struct LineRef { const char* p; size_t n; };   // n excludes the line break

static bool NextLine(const char* buf, size_t len, size_t& pos, LineRef& out)
{
    if (pos >= len)
        return false;
    const char* s = buf + pos;
    const char* nl = (const char*)memchr(s, '\n', len - pos);
    size_t n = nl ? (size_t)(nl - s) : len - pos;
    pos += nl ? n + 1 : n;
    if (n && s[n - 1] == '\r')
        --n;
    out.p = s;
    out.n = n;
    return true;
}

static bool LineIs(const LineRef& l, const char* lit)
{
    size_t n = strlen(lit);
    return l.n == n && memcmp(l.p, lit, n) == 0;
}

// "TAG=" at column 0, TAG = 3 chars [A-Z0-9_]
static bool IsCountryHeader(const LineRef& l)
{
    if (l.n != 4 || l.p[3] != '=')
        return false;
    for (int i = 0; i < 3; ++i)
    {
        char c = l.p[i];
        if (!((c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9') || c == '_'))
            return false;
    }
    return true;
}

// "\t<name>=" for one of the four blocks -> index, else -1
static int BlockIndex(const LineRef& l)
{
    if (l.n < 3 || l.p[0] != '\t' || l.p[1] == '\t' || l.p[l.n - 1] != '=')
        return -1;
    for (int i = 0; i < 4; ++i)
    {
        size_t n = strlen(BLOCK_NAMES[i]);
        if (l.n == n + 2 && memcmp(l.p + 1, BLOCK_NAMES[i], n) == 0)
            return i;
    }
    return -1;
}

// Appends every country that has a non-empty block to `out`; returns the number of countries.
static int ExtractBlocks(const char* buf, size_t len, std::string& out)
{
    int countries = 0;
    size_t pos = 0;
    LineRef l;
    while (NextLine(buf, len, pos, l))
    {
        if (!IsCountryHeader(l))
            continue;
        LineRef hdr = l;
        size_t save = pos;
        LineRef brace;
        if (!NextLine(buf, len, pos, brace) || !LineIs(brace, "{"))
        {
            pos = save;
            continue;
        }

        std::string body;
        bool any = false;
        while (NextLine(buf, len, pos, l))
        {
            if (LineIs(l, "}"))                       // end of the country
                break;
            int bi = BlockIndex(l);
            if (bi < 0)
                continue;
            size_t afterName = pos;
            LineRef open;
            if (!NextLine(buf, len, pos, open) || !LineIs(open, "\t{"))
            {
                pos = afterName;
                continue;
            }
            std::string part;
            part.append(l.p, l.n);
            part += "\r\n\t{\r\n";
            bool content = false;
            LineRef in;
            while (NextLine(buf, len, pos, in))
            {
                if (LineIs(in, "\t}"))
                    break;
                part.append(in.p, in.n);
                part += "\r\n";
                content = true;
            }
            part += "\t}\r\n";
            body += part;
            if (content)
                any = true;
        }
        if (any)
        {
            out.append(hdr.p, hdr.n);
            out += "\r\n{\r\n";
            out += body;
            out += "}\r\n";
            ++countries;
        }
    }
    return countries;
}

// ---------------------------------------------------------------
// Save header
// ---------------------------------------------------------------
struct SaveHeader
{
    int  y, m, d;
    char player[16];
    char startDate[16];
};

static bool ParseSaveHeader(const char* buf, size_t len, SaveHeader& h)
{
    memset(&h, 0, sizeof(h));
    size_t pos = 0;
    LineRef l;
    bool haveDate = false;
    for (int i = 0; i < 12 && NextLine(buf, len, pos, l); ++i)
    {
        char tmp[64];
        size_t n = l.n < sizeof(tmp) - 1 ? l.n : sizeof(tmp) - 1;
        memcpy(tmp, l.p, n);
        tmp[n] = 0;
        if (strncmp(tmp, "date=\"", 6) == 0 && !haveDate)
        {
            haveDate = sscanf_s(tmp + 6, "%d.%d.%d", &h.y, &h.m, &h.d) == 3;
        }
        else if (strncmp(tmp, "player=\"", 8) == 0)
        {
            const char* q = strchr(tmp + 8, '"');
            size_t k = q ? (size_t)(q - (tmp + 8)) : 0;
            if (k && k < sizeof(h.player))
            {
                memcpy(h.player, tmp + 8, k);
                h.player[k] = 0;
            }
        }
    }
    // start_date sits after the flags / gameplaysettings blocks, still near the top
    const char* sd = 0;
    size_t lim = len < 8192 ? len : 8192;
    for (size_t i = 0; i + 12 < lim; ++i)
        if (buf[i] == '\n' && memcmp(buf + i + 1, "start_date=\"", 12) == 0)
        {
            sd = buf + i + 13;
            break;
        }
    if (sd)
    {
        size_t k = 0;
        while (k < sizeof(h.startDate) - 1 && sd + k < buf + lim && sd[k] != '"' && sd[k] != '\r' && sd[k] != '\n')
        {
            h.startDate[k] = sd[k];
            ++k;
        }
        h.startDate[k] = 0;
    }
    if (!h.player[0])
        strcpy_s(h.player, "NONE");
    if (!h.startDate[0])
        strcpy_s(h.startDate, "?");
    return haveDate && h.y > 0;
}

// ---------------------------------------------------------------
// Files
// ---------------------------------------------------------------
static bool ReadWholeFile(const char* path, std::string& data, bool headOnly)
{
    HANDLE h = CreateFileA(path, GENERIC_READ, FILE_SHARE_READ | FILE_SHARE_WRITE, 0, OPEN_EXISTING,
        FILE_ATTRIBUTE_NORMAL | FILE_FLAG_SEQUENTIAL_SCAN, 0);
    if (h == INVALID_HANDLE_VALUE)
        return false;
    LARGE_INTEGER sz;
    if (!GetFileSizeEx(h, &sz) || sz.QuadPart < 0 || (unsigned long long)sz.QuadPart > MAX_SAVE_BYTES)
    {
        CloseHandle(h);
        return false;
    }
    size_t want = headOnly ? (sz.QuadPart < 16384 ? (size_t)sz.QuadPart : 16384) : (size_t)sz.QuadPart;
    data.resize(want);
    size_t got = 0;
    bool ok = true;
    while (got < want)
    {
        DWORD chunk = (DWORD)((want - got) > (16u << 20) ? (16u << 20) : (want - got));
        DWORD rd = 0;
        if (!ReadFile(h, &data[got], chunk, &rd, 0) || rd == 0)
        {
            ok = false;
            break;
        }
        got += rd;
    }
    CloseHandle(h);
    data.resize(got);
    return ok && got > 0;
}

static void SanitizeName(std::string& s)
{
    for (size_t i = 0; i < s.size(); ++i)
    {
        unsigned char c = (unsigned char)s[i];
        if (c < 0x20 || strchr("\\/:*?\"<>|", c))
            s[i] = '_';
    }
}

static std::string BaseNameNoExt(const char* path)
{
    const char* b = path;
    for (const char* p = path; *p; ++p)
        if (*p == '\\' || *p == '/')
            b = p + 1;
    std::string s(b);
    size_t dot = s.rfind('.');
    if (dot != std::string::npos)
        s.resize(dot);
    return s;
}

static std::string KeyOf(const SaveHeader& h)
{
    char k[96];
    _snprintf_s(k, sizeof(k), _TRUNCATE, "%d|%s|%s", h.y, h.player, h.startDate);
    return k;
}

static std::set<std::string> g_doneKeys;       // campaign years already in the cache

static void LoadDoneKeys(const char* cacheDir)
{
    char pat[MAX_PATH];
    _snprintf_s(pat, sizeof(pat), _TRUNCATE, "%s\\*.txt", cacheDir);
    WIN32_FIND_DATAA fd;
    HANDLE ff = FindFirstFileA(pat, &fd);
    if (ff == INVALID_HANDLE_VALUE)
        return;
    do
    {
        char path[MAX_PATH];
        _snprintf_s(path, sizeof(path), _TRUNCATE, "%s\\%s", cacheDir, fd.cFileName);
        std::string head;
        if (!ReadWholeFile(path, head, true))
            continue;
        size_t pos = 0;
        LineRef l;
        for (int i = 0; i < 6 && NextLine(head.data(), head.size(), pos, l); ++i)
            if (l.n > 8 && memcmp(l.p, "# key=", 6) == 0)
            {
                g_doneKeys.insert(std::string(l.p + 6, l.n - 6));
                break;
            }
    } while (FindNextFileA(ff, &fd));
    FindClose(ff);
}

static unsigned long long FileTimeU64(const FILETIME& ft)
{
    return ((unsigned long long)ft.dwHighDateTime << 32) | ft.dwLowDateTime;
}

// Over the limit -> delete every cache file older than CACHE_KEEP_DAYS; nothing older -> nothing deleted.
static void YearlyCache_Trim(const char* cacheDir)
{
    char pat[MAX_PATH];
    _snprintf_s(pat, sizeof(pat), _TRUNCATE, "%s\\*.txt", cacheDir);
    struct Item { std::string name; unsigned long long size, time; };
    std::vector<Item> items;
    unsigned long long total = 0;
    WIN32_FIND_DATAA fd;
    HANDLE ff = FindFirstFileA(pat, &fd);
    if (ff == INVALID_HANDLE_VALUE)
        return;
    do
    {
        if (fd.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)
            continue;
        Item it;
        it.name = fd.cFileName;
        it.size = ((unsigned long long)fd.nFileSizeHigh << 32) | fd.nFileSizeLow;
        it.time = FileTimeU64(fd.ftLastWriteTime);
        total += it.size;
        items.push_back(it);
    } while (FindNextFileA(ff, &fd));
    FindClose(ff);

    if (total <= CACHE_LIMIT_BYTES)
        return;

    FILETIME nowFt;
    GetSystemTimeAsFileTime(&nowFt);
    unsigned long long age = (unsigned long long)CACHE_KEEP_DAYS * 24 * 3600 * 10000000ull;
    unsigned long long now = FileTimeU64(nowFt);
    unsigned long long cutoff = now > age ? now - age : 0;

    int removed = 0;
    unsigned long long freed = 0;
    for (size_t i = 0; i < items.size(); ++i)
    {
        if (items[i].time >= cutoff)
            continue;
        char path[MAX_PATH];
        _snprintf_s(path, sizeof(path), _TRUNCATE, "%s\\%s", cacheDir, items[i].name.c_str());
        if (DeleteFileA(path))
        {
            ++removed;
            freed += items[i].size;
        }
    }
    if (removed)
        Log("YearlyDataCache: cache %llu MB > 50 MB, deleted %d file(s) older than %u days (%llu MB)",
            total >> 20, removed, CACHE_KEEP_DAYS, freed >> 20);
    else
        Log("YearlyDataCache: cache %llu MB > 50 MB, but nothing is older than %u days - nothing deleted",
            total >> 20, CACHE_KEEP_DAYS);
}

// Returns 1 = cache file written, 0 = nothing to do (campaign year already cached / not a text save), -1 = error.
static int YearlyCache_ProcessSave(const char* savePath, const char* cacheDir)
{
    std::string head;
    if (!ReadWholeFile(savePath, head, true))
        return -1;
    SaveHeader h;
    if (!ParseSaveHeader(head.data(), head.size(), h))
        return 0;                                      // not a text save with a date line
    std::string key = KeyOf(h);
    if (g_doneKeys.count(key))
        return 0;

    std::string save;
    if (!ReadWholeFile(savePath, save, false))
        return -1;

    std::string blocks;
    int countries = ExtractBlocks(save.data(), save.size(), blocks);
    std::string().swap(save);
    if (countries == 0)
    {
        Log("YearlyDataCache: %s - no country blocks found", savePath);
        g_doneKeys.insert(key);
        return 0;
    }

    CreateDirectoryA(cacheDir, NULL);
    std::string name = BaseNameNoExt(savePath);
    SanitizeName(name);
    char dateName[32];
    _snprintf_s(dateName, sizeof(dateName), _TRUNCATE, "%04d.%02d.%02d", h.y, h.m, h.d);
    std::string player = h.player;
    SanitizeName(player);
    char fileName[MAX_PATH];
    _snprintf_s(fileName, sizeof(fileName), _TRUNCATE, "%s\\%s_%s_%s.txt", cacheDir, dateName, player.c_str(), name.c_str());
    char tmpName[MAX_PATH];
    _snprintf_s(tmpName, sizeof(tmpName), _TRUNCATE, "%s.tmp", fileName);

    char hdr[512];
    int hn = _snprintf_s(hdr, sizeof(hdr), _TRUNCATE,
        "# CreatineCore yearly data cache v1\r\n# key=%s\r\n# date=%d.%d.%d\r\n# source=%s\r\n",
        key.c_str(), h.y, h.m, h.d, name.c_str());
    if (hn < 0)
        return -1;

    HANDLE f = CreateFileA(tmpName, GENERIC_WRITE, 0, 0, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, 0);
    if (f == INVALID_HANDLE_VALUE)
        return -1;
    DWORD wr = 0;
    bool ok = WriteFile(f, hdr, (DWORD)hn, &wr, 0) != 0;
    size_t off = 0;
    while (ok && off < blocks.size())
    {
        DWORD chunk = (DWORD)((blocks.size() - off) > (16u << 20) ? (16u << 20) : (blocks.size() - off));
        ok = WriteFile(f, blocks.data() + off, chunk, &wr, 0) != 0 && wr == chunk;
        off += chunk;
    }
    CloseHandle(f);
    if (!ok || !MoveFileExA(tmpName, fileName, MOVEFILE_REPLACE_EXISTING))
    {
        DeleteFileA(tmpName);
        return -1;
    }
    g_doneKeys.insert(key);
    Log("YearlyDataCache: %d.%d.%d (%s) - %d countries, %u KB -> %s",
        h.y, h.m, h.d, player.c_str(), countries, (unsigned)(blocks.size() >> 10), fileName);
    YearlyCache_Trim(cacheDir);
    return 1;
}

// ---------------------------------------------------------------
// Watcher thread
// ---------------------------------------------------------------
struct SeenFile
{
    unsigned long long time, size;
    bool pending;          // changed since the baseline / last processing
    bool stable;           // same time+size as in the previous poll
};

struct SaveBase
{
    std::string path;
    bool        perMod;     // true: one "<path>\<mod name>\save games" per subfolder (the user's Documents folder)
};

static std::vector<SaveBase> g_saveBases;
static char g_cacheDir[MAX_PATH];

// The engine writes saves to "<Documents>\Paradox Interactive\Victoria II\<mod name>\save games" (or without the
// mod folder when no mod runs); "<game folder>\save games" is watched too (old installs, manual copies).
static void CollectSaveDirs(std::vector<std::string>& dirs)
{
    for (size_t i = 0; i < g_saveBases.size(); ++i)
    {
        const SaveBase& base = g_saveBases[i];
        dirs.push_back(base.path + "\\save games");
        if (!base.perMod)
            continue;
        WIN32_FIND_DATAA fd;
        HANDLE ff = FindFirstFileA((base.path + "\\*").c_str(), &fd);
        if (ff == INVALID_HANDLE_VALUE)
            continue;
        do
        {
            if ((fd.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY) && fd.cFileName[0] != '.')
                dirs.push_back(base.path + "\\" + fd.cFileName + "\\save games");
        } while (FindNextFileA(ff, &fd));
        FindClose(ff);
    }
}

// No C++ objects in this frame, so __try is allowed (a bad save must not kill the game).
static int SafeProcess(const char* path)
{
    __try { return YearlyCache_ProcessSave(path, g_cacheDir); }
    __except (EXCEPTION_EXECUTE_HANDLER) { return -1; }
}

static DWORD WINAPI WatchThread(void*)
{
    std::map<std::string, SeenFile> seen;
    bool baseline = true;
    for (;;)
    {
        std::vector<std::string> dirs;
        CollectSaveDirs(dirs);
        for (size_t di = 0; di < dirs.size(); ++di)
        {
            WIN32_FIND_DATAA fd;
            HANDLE ff = FindFirstFileA((dirs[di] + "\\*.v2").c_str(), &fd);
            if (ff == INVALID_HANDLE_VALUE)
                continue;
            do
            {
                if (fd.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)
                    continue;
                std::string path = dirs[di] + "\\" + fd.cFileName;
                unsigned long long t = FileTimeU64(fd.ftLastWriteTime);
                unsigned long long sz = ((unsigned long long)fd.nFileSizeHigh << 32) | fd.nFileSizeLow;
                std::map<std::string, SeenFile>::iterator it = seen.find(path);
                if (it == seen.end())
                {
                    SeenFile s = { t, sz, !baseline, false };      // existing files at start are not processed
                    seen[path] = s;
                    continue;
                }
                SeenFile& s = it->second;
                if (s.time != t || s.size != sz)
                {
                    s.time = t;
                    s.size = sz;
                    s.pending = true;
                    s.stable = false;
                    continue;
                }
                if (!s.pending)
                    continue;
                if (!s.stable)
                {
                    s.stable = true;                               // second identical poll -> processed on the next one
                    continue;
                }
                s.pending = false;
                if (SafeProcess(path.c_str()) < 0)
                    Log("YearlyDataCache: failed to process %s", path.c_str());
            } while (FindNextFileA(ff, &fd));
            FindClose(ff);
        }
        baseline = false;
        Sleep(POLL_MS);
    }
    return 0;
}

static std::string ToAnsi(const wchar_t* w)
{
    char buf[MAX_PATH * 2];
    if (WideCharToMultiByte(CP_ACP, 0, w, -1, buf, (int)sizeof(buf), 0, 0) <= 0)
        return std::string();
    return buf;
}

static bool InstallYearlyDataCache()
{
    wchar_t exe[MAX_PATH];
    DWORD n = GetModuleFileNameW(NULL, exe, MAX_PATH);
    if (!n || n >= MAX_PATH)
    {
        Log("YearlyDataCache: cannot resolve the game folder");
        return false;
    }
    wchar_t* slash = wcsrchr(exe, L'\\');
    if (slash)
        *slash = 0;

    SaveBase gameBase = { ToAnsi(exe), false };
    if (gameBase.path.empty())
        return false;
    g_saveBases.push_back(gameBase);

    wchar_t docs[MAX_PATH];
    if (SUCCEEDED(SHGetFolderPathW(NULL, CSIDL_PERSONAL, NULL, SHGFP_TYPE_CURRENT, docs)))
    {
        wchar_t v2[MAX_PATH];
        swprintf_s(v2, L"%s\\Paradox Interactive\\Victoria II", docs);
        SaveBase docBase = { ToAnsi(v2), true };
        if (!docBase.path.empty())
            g_saveBases.push_back(docBase);
    }

    wchar_t cache[MAX_PATH];
    swprintf_s(cache, L"%s\\z_CreatineCore\\Cache", exe);
    std::string cacheA = ToAnsi(cache);
    if (cacheA.empty())
        return false;
    strcpy_s(g_cacheDir, cacheA.c_str());
    wchar_t own[MAX_PATH];
    swprintf_s(own, L"%s\\z_CreatineCore", exe);
    CreateDirectoryW(own, NULL);
    CreateDirectoryA(g_cacheDir, NULL);
    LoadDoneKeys(g_cacheDir);

    HANDLE t = CreateThread(0, 0, WatchThread, 0, 0, 0);
    if (!t)
    {
        Log("YearlyDataCache: cannot start the watcher thread (%lu)", GetLastError());
        return false;
    }
    SetThreadPriority(t, THREAD_PRIORITY_BELOW_NORMAL);
    CloseHandle(t);
    for (size_t i = 0; i < g_saveBases.size(); ++i)
        Log("YearlyDataCache: watching %s%s", g_saveBases[i].path.c_str(), g_saveBases[i].perMod ? "\\<mod>\\save games" : "\\save games");
    Log("YearlyDataCache: cache folder %s (%d campaign year(s) already cached)", g_cacheDir, (int)g_doneKeys.size());
    return true;
}

// ---------------------------------------------------------------
// ini + entry points
// ---------------------------------------------------------------
static void WriteDefaultIni()
{
    FILE* f = 0;
    if (fopen_s(&f, g_iniPath, "w") != 0 || !f)
        return;
    fprintf(f,
        "; ccore_yearly_data_cache.dll settings.\n"
        "; Once per game year copies saved_country_supply, domestic_demand_pool, actual_sold_domestic and the\n"
        "; country stockpile of every country from a game save into z_CreatineCore\\Cache\\ (one text file per year).\n"
        "; The game itself writes the save, so its autosave must be on (or save by hand); only the first save of every\n"
        "; campaign year is taken. When Cache is over 50 MB, files older than a month are deleted (younger ones never).\n"
        "\n"
        "; 1 = watch the save folder and fill the cache, 0 = the module does nothing\n"
        "ENABLE=%d\n",
        g_enabled);
    fclose(f);
}

static void LoadIni()
{
    FILE* f = 0;
    if (fopen_s(&f, g_iniPath, "r") != 0 || !f)
    {
        WriteDefaultIni();
        Log("ccore_yearly_data_cache: created %s with default settings", g_iniPath);
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
        if (_stricmp(key, "ENABLE") == 0 || _stricmp(key, "YEARLY_DATA_CACHE") == 0)
            g_enabled = atoi(eq + 1) != 0;
    }
    fclose(f);
}

extern "C" __declspec(dllexport) int __cdecl V2Mod_Init(const V2ModAPI* api)
{
    if (!api || api->size < sizeof(V2ModAPI) || api->apiVersion != V2MOD_API_VERSION)
        return 0;
    g_api = api;

    char dll[MAX_PATH];
    if (!GetModuleFileNameA(g_self, dll, sizeof(dll)))
        return 0;
    char* dot = strrchr(dll, '.');
    if (dot)
        *dot = 0;
    _snprintf_s(g_iniPath, sizeof(g_iniPath), _TRUNCATE, "%s.ini", dll);

    LoadIni();
    if (!g_enabled)
    {
        Log("ccore_yearly_data_cache: disabled (ENABLE=0 in %s)", g_iniPath);
        return 1;
    }
    InstallYearlyDataCache();
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
