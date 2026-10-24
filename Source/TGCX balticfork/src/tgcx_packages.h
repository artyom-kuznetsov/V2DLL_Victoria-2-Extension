#pragma once
// MOD-2 (D15): which of our packages the launcher ticked. The launcher passes
// one -mod=<file>.mod per ticked mod (report-mod-0-1018.md); each package
// folder holds tgcx_package.txt and its own copy of tgcx.dll. Shared by the
// loader (lua51.dll) and tgcx.dll, so it needs nothing but Win32.
#include <windows.h>
#include <string.h>
#include <stdio.h>

static const unsigned tgcx_mods_max=24;
struct tgcx_Mod {
    char file[MAX_PATH];      // as on the command line, e.g. mod/TGCX.mod
    char path[MAX_PATH];      // the .mod's path line, e.g. mod/tgcx_army_tgc252
    char user_dir[64];
    char package[16];         // "army", "politics" or empty when not ours
};
struct tgcx_ModList { unsigned count; tgcx_Mod item[tgcx_mods_max]; };

// Every -mod= value, in command-line order. A value runs to its ".mod", so a
// file name may hold spaces whether or not the launcher quotes it.
inline unsigned tgcx_ParseModArgs(const char* line, char (*out)[MAX_PATH], unsigned max) {
    unsigned count=0;
    for (const char* at=line; line && (at=strstr(at,"-mod="))!=nullptr && count<max;) {
        at+=5;
        const char* end=at;
        while (*end && !(_strnicmp(end,".mod",4)==0 && (end[4]==0 || end[4]==' ' || end[4]=='"'))) ++end;
        if (!*end) break;
        end+=4;
        size_t n=static_cast<size_t>(end-at);
        if (*at=='"') { ++at; --n; }
        if (n && n<MAX_PATH) { memcpy(out[count],at,n); out[count][n]=0; ++count; }
        at=end;
    }
    return count;
}

// The value of the first `key = "value"` (or unquoted) line. The key must start
// the line, so "path" never matches "replace_path".
inline bool tgcx_ModValue(const char* text, const char* key, char* out, size_t size) {
    size_t k=strlen(key);
    for (const char* line=text; line && *line;) {
        const char* p=line;
        while (*p==' ' || *p=='\t') ++p;
        if (_strnicmp(p,key,k)==0 && (p[k]==' ' || p[k]=='\t' || p[k]=='=')) {
            p+=k;
            while (*p==' ' || *p=='\t') ++p;
            if (*p=='=') {
                ++p;
                while (*p==' ' || *p=='\t') ++p;
                bool quoted=*p=='"';
                if (quoted) ++p;
                size_t n=0;
                while (p[n] && p[n]!='\r' && p[n]!='\n' && (quoted ? p[n]!='"' : p[n]!=' ' && p[n]!='\t')) ++n;
                if (n>=size) return false;
                memcpy(out,p,n); out[n]=0;
                return true;
            }
        }
        line=strchr(line,'\n');
        if (line) ++line;
    }
    return false;
}

// "<game>\<relative>", slashes turned round.
inline bool tgcx_GamePath(const wchar_t* game, const char* relative, const char* leaf, wchar_t* out, size_t size) {
    wchar_t wide[MAX_PATH];
    if (!MultiByteToWideChar(CP_ACP,0,relative,-1,wide,MAX_PATH)) return false;
    for (wchar_t* c=wide; *c; ++c) if (*c==L'/') *c=L'\\';
    wchar_t tail[64]={};
    if (leaf && !MultiByteToWideChar(CP_ACP,0,leaf,-1,tail,64)) return false;
    return swprintf_s(out,size,leaf ? L"%s\\%s\\%s" : L"%s\\%s",game,wide,tail)>0;
}

inline bool tgcx_ReadSmall(const wchar_t* path, char* buffer, DWORD size) {
    HANDLE file=CreateFileW(path,GENERIC_READ,FILE_SHARE_READ,nullptr,OPEN_EXISTING,0,nullptr);
    if (file==INVALID_HANDLE_VALUE) return false;
    DWORD read=0;
    BOOL ok=ReadFile(file,buffer,size-1,&read,nullptr);
    CloseHandle(file);
    buffer[ok ? read : 0]=0;
    return ok!=FALSE;
}

// Reads every ticked .mod and, in its folder, our tgcx_package.txt.
inline void tgcx_ReadMods(const wchar_t* game, const char* command_line, tgcx_ModList* list) {
    static char files[tgcx_mods_max][MAX_PATH];
    list->count=tgcx_ParseModArgs(command_line,files,tgcx_mods_max);
    static char text[16384];
    for (unsigned i=0; i<list->count; ++i) {
        tgcx_Mod& mod=list->item[i];
        memset(&mod,0,sizeof(mod));
        strcpy_s(mod.file,files[i]);
        wchar_t path[MAX_PATH];
        if (!tgcx_GamePath(game,mod.file,nullptr,path,MAX_PATH) || !tgcx_ReadSmall(path,text,sizeof(text))) continue;
        tgcx_ModValue(text,"path",mod.path,sizeof(mod.path));
        tgcx_ModValue(text,"user_dir",mod.user_dir,sizeof(mod.user_dir));
        if (mod.path[0] && tgcx_GamePath(game,mod.path,"tgcx_package.txt",path,MAX_PATH) && tgcx_ReadSmall(path,text,sizeof(text)))
            tgcx_ModValue(text,"package",mod.package,sizeof(mod.package));
    }
}

inline bool tgcx_Ticked(const tgcx_ModList& list, const char* package) {
    for (unsigned i=0; i<list.count; ++i) if (strcmp(list.item[i].package,package)==0) return true;
    return false;
}

// The game's settings folder joins the ticked mods' user_dirs with "_" in
// command-line order (TGC252 + TGCX -> TGC252_TGCX; none -> the root).
inline void tgcx_SettingsFolder(const tgcx_ModList& list, char* out, size_t size) {
    out[0]=0;
    for (unsigned i=0; i<list.count; ++i) {
        if (!list.item[i].user_dir[0]) continue;
        if (out[0]) strcat_s(out,size,"_");
        strcat_s(out,size,list.item[i].user_dir);
    }
}
