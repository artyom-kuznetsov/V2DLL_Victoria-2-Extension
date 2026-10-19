// TPL-0 local interface preferences (D12). Keys, never engine unit indices,
// are persisted. Bounded parsing and atomic replacement preserve a bad file.
#pragma once
#include "tgcx_templates_metadata.h"
#include <shlobj.h>
#pragma comment(lib,"shell32.lib")

constexpr unsigned tgcx_tpl_slots=12;
struct tgcx_TplComposition { int count[tgcx_tpl_capacity]; };
struct tgcx_TplLibrary { unsigned size; tgcx_TplComposition item[tgcx_tpl_slots]; };
static tgcx_TplLibrary tgcx_tpl_library={};
static bool tgcx_tpl_loaded=false,tgcx_tpl_storage_ok=false;
static wchar_t tgcx_tpl_path[MAX_PATH]={};

static unsigned tgcx_TplTotal(const tgcx_TplComposition& c) {
    unsigned n=0;for(int v:c.count)if(v>0)n+=v;return n;
}
static void tgcx_TplName(const tgcx_TplComposition& c,char* out,size_t size) {
    out[0]=0;
    for(unsigned i=0;i<tgcx_tpl_kinds;++i)if(c.count[i]) {
        char part[32];sprintf_s(part,"%s%d %s",out[0]?" / ":"",c.count[i],tgcx_tpl_catalog[i].abbr);
        strncat_s(out,size,part,_TRUNCATE);
    }
    if(!out[0])strncpy_s(out,size,"Empty template",_TRUNCATE);
}
static int tgcx_TplBaseDays(const tgcx_TplComposition& c) {
    int days=0;for(unsigned i=0;i<tgcx_tpl_kinds;++i)if(c.count[i])days=(std::max)(days,tgcx_tpl_catalog[i].days);return days;
}
// No defaults invented: start empty. Empty compositions may be saved while
// editing; limits keep both the command count and parser's arithmetic bounded.
static bool tgcx_TplLoadFile(const wchar_t* path,tgcx_TplLibrary* out) {
    FILE* file=nullptr;
    if(_wfopen_s(&file,path,L"rb"))return false;
    tgcx_TplLibrary candidate={};char line[128];bool valid=true,inside=false,header=false;
    while(fgets(line,sizeof(line),file)) {
        size_t length=strlen(line);
        if(length==sizeof(line)-1 && line[length-1]!='\n') { valid=false;break; }
        while(length && (line[length-1]=='\r' || line[length-1]=='\n'))line[--length]=0;
        if(!header) { header=!strcmp(line,"tgcx_templates 1");if(!header) { valid=false;break; }continue; }
        if(!strcmp(line,"template")) {
            if(inside || candidate.size>=tgcx_tpl_slots) { valid=false;break; }
            inside=true;++candidate.size;continue;
        }
        if(!strcmp(line,"end")) { if(!inside){valid=false;break;}inside=false;continue; }
        char key[64]={};unsigned value=0;const char* equal=strchr(line,'=');
        if(!inside || !equal || equal==line || equal-line>=static_cast<int>(sizeof(key)) || !equal[1]) {valid=false;break;}
        memcpy(key,line,equal-line);
        for(const char* digit=equal+1;*digit;++digit) {
            if(*digit<'0' || *digit>'9' || value>128) {valid=false;break;}
            value=value*10+(*digit-'0');
        }
        if(!valid || !value || value>128) {valid=false;break;}
        unsigned u=0;while(u<tgcx_tpl_kinds && strcmp(key,tgcx_tpl_catalog[u].key))++u;
        if(u==tgcx_tpl_kinds || candidate.item[candidate.size-1].count[u]) { valid=false;break; }
        candidate.item[candidate.size-1].count[u]=static_cast<int>(value);
        if(tgcx_TplTotal(candidate.item[candidate.size-1])>128) { valid=false;break; }
    }
    valid=valid && header && !inside && !ferror(file);fclose(file);
    if(valid)*out=candidate;return valid;
}
static bool tgcx_TplSaveFile(const wchar_t* path,const tgcx_TplLibrary& library) {
    if(library.size>tgcx_tpl_slots)return false;
    wchar_t temporary[MAX_PATH];if(swprintf_s(temporary,L"%s.pending",path)<0)return false;
    // A stale pending file belongs to an interrupted write; do not replace it.
    HANDLE handle=CreateFileW(temporary,GENERIC_WRITE,0,nullptr,CREATE_NEW,FILE_ATTRIBUTE_NORMAL,nullptr);
    if(handle==INVALID_HANDLE_VALUE)return false;
    char bytes[262144];size_t used=0;
    auto append=[&](const char* text){size_t n=strlen(text);if(used+n>sizeof(bytes))return false;memcpy(bytes+used,text,n);used+=n;return true;};
    bool valid=append("tgcx_templates 1\r\n");
    for(unsigned s=0;s<library.size && valid;++s) {
        valid=tgcx_TplTotal(library.item[s])<=128 && append("template\r\n");
        for(unsigned u=tgcx_tpl_kinds;u<tgcx_tpl_capacity;++u)if(library.item[s].count[u])valid=false;
        for(unsigned u=0;u<tgcx_tpl_kinds && valid;++u) {
            int n=library.item[s].count[u];if(n<0 || n>128) {valid=false;break;}
            if(n) {char line[80];sprintf_s(line,"%s=%d\r\n",tgcx_tpl_catalog[u].key,n);valid=append(line);}
        }
        valid=valid && append("end\r\n");
    }
    DWORD written=0;
    bool ok=valid && WriteFile(handle,bytes,static_cast<DWORD>(used),&written,nullptr) && written==used && FlushFileBuffers(handle);
    CloseHandle(handle);
    if(ok)ok=MoveFileExW(temporary,path,MOVEFILE_REPLACE_EXISTING|MOVEFILE_WRITE_THROUGH)!=0;
    if(!ok)DeleteFileW(temporary);
    return ok;
}
// MOD-2 (S4): the settings folder of the ticked combination, set at initialisation.
static char tgcx_tpl_settings[MAX_PATH]="TGC252_TGCX";
// A combination without templates yet takes the newest file another combination
// saved (e.g. TGC252_TGCX -> TGC252 when only Army is ticked). Nothing is deleted.
static void tgcx_TplCarryOver(const wchar_t* root,const wchar_t* path) {
    if(GetFileAttributesW(path)!=INVALID_FILE_ATTRIBUTES)return;
    wchar_t pattern[MAX_PATH],best[MAX_PATH]={},candidate[MAX_PATH];
    FILETIME newest={};
    WIN32_FIND_DATAW entry;
    if(swprintf_s(pattern,L"%s\\*",root)<0)return;
    HANDLE find=FindFirstFileW(pattern,&entry);
    if(find==INVALID_HANDLE_VALUE)return;
    do {
        if(!(entry.dwFileAttributes&FILE_ATTRIBUTE_DIRECTORY) || entry.cFileName[0]==L'.')continue;
        WIN32_FILE_ATTRIBUTE_DATA data;
        if(swprintf_s(candidate,L"%s\\%s\\tgcx_templates.txt",root,entry.cFileName)<0)continue;
        if(_wcsicmp(candidate,path)==0 || !GetFileAttributesExW(candidate,GetFileExInfoStandard,&data))continue;
        tgcx_TplLibrary compatible={};
        if(!tgcx_TplLoadFile(candidate,&compatible))continue;
        if(CompareFileTime(&data.ftLastWriteTime,&newest)>0){newest=data.ftLastWriteTime;wcscpy_s(best,candidate);}
    } while(FindNextFileW(find,&entry));
    FindClose(find);
    if(best[0] && CopyFileW(best,path,TRUE))tgcx_Log("Templates carried over from %ls",best);
}
static void tgcx_TplLoadLibrary() {
    if(tgcx_tpl_loaded)return;tgcx_tpl_loaded=true;
    wchar_t docs[MAX_PATH],root[MAX_PATH],settings[MAX_PATH];
    if(FAILED(SHGetFolderPathW(nullptr,CSIDL_PERSONAL,nullptr,SHGFP_TYPE_CURRENT,docs)))return;
    if(!MultiByteToWideChar(CP_ACP,0,tgcx_tpl_settings,-1,settings,MAX_PATH))return;
    if(swprintf_s(root,L"%s\\Paradox Interactive\\Victoria II",docs)<0)return;
    if(swprintf_s(tgcx_tpl_path,settings[0]?L"%s\\%s\\tgcx_templates.txt":L"%s%s\\tgcx_templates.txt",root,settings)<0)return;
    wchar_t folder[MAX_PATH];wcscpy_s(folder,tgcx_tpl_path);*wcsrchr(folder,L'\\')=0;
    if(SHCreateDirectoryExW(nullptr,folder,nullptr)!=ERROR_SUCCESS && GetFileAttributesW(folder)==INVALID_FILE_ATTRIBUTES)return;
    tgcx_TplCarryOver(root,tgcx_tpl_path);
    DWORD attributes=GetFileAttributesW(tgcx_tpl_path),error=GetLastError();
    if(attributes==INVALID_FILE_ATTRIBUTES && (error==ERROR_FILE_NOT_FOUND || error==ERROR_PATH_NOT_FOUND))tgcx_tpl_storage_ok=true;
    else tgcx_tpl_storage_ok=tgcx_TplLoadFile(tgcx_tpl_path,&tgcx_tpl_library);
    tgcx_Log("Templates local file: %ls loaded=%u editable=%u",tgcx_tpl_path,tgcx_tpl_library.size,tgcx_tpl_storage_ok);
}
static bool tgcx_TplCommit(const tgcx_TplLibrary& next) {
    if(!tgcx_tpl_storage_ok || !tgcx_TplSaveFile(tgcx_tpl_path,next))return false;
    tgcx_tpl_library=next;return true;
}
