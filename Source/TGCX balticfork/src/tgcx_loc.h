// Fork (V2DLL): every text the panels show comes from the localisation csv files of the
// active mods (key;text;...), the English wording that used to be hard-coded is only the
// default. Nothing here touches the game's own localisation tables.
//
// Lookup order for a key: the ticked mods from the last to the first, then the game folder.
// The mod that carries tgcx_package.txt (the package) is looked at after the others, so a
// translation in the player's own mod beats the defaults shipped with the package.
// Text is the first column after the key (the ENGLISH column), bytes are used as they are
// (cp1251 for Russian); a printf template must keep the same conversions as the default.
#pragma once
#include <string>
#include <unordered_map>
#include <vector>
#include <algorithm>

static void tgcx_Log(const char* format, ...);

static std::vector<std::wstring> tgcx_loc_dirs;
static std::unordered_map<std::string,std::string> tgcx_loc_map;
static std::unordered_map<std::string,std::string> tgcx_loc_checked;
static bool tgcx_loc_loaded=false;

static std::string tgcx_LocLower(const char* text) {
    std::string out(text);
    for(char& c:out)if(c>='A' && c<='Z')c=static_cast<char>(c+32);
    return out;
}

// Called once from initialisation (no file access yet).
static void tgcx_LocSetRoots(const wchar_t* game,const tgcx_ModList& mods) {
    tgcx_loc_dirs.clear();tgcx_loc_loaded=false;tgcx_loc_map.clear();tgcx_loc_checked.clear();
    wchar_t dir[MAX_PATH];
    for(int pass=0;pass<2;++pass)
        for(int i=static_cast<int>(mods.count)-1;i>=0;--i) {
            const tgcx_Mod& mod=mods.item[i];
            if(!mod.path[0] || (mod.package[0]!=0)!=(pass==1))continue;
            if(tgcx_GamePath(game,mod.path,"localisation",dir,MAX_PATH))tgcx_loc_dirs.push_back(dir);
        }
    if(swprintf_s(dir,L"%s\\localisation",game)>0)tgcx_loc_dirs.push_back(dir);
}

static void tgcx_LocReadFile(const std::wstring& path) {
    HANDLE file=CreateFileW(path.c_str(),GENERIC_READ,FILE_SHARE_READ|FILE_SHARE_WRITE,nullptr,OPEN_EXISTING,FILE_FLAG_SEQUENTIAL_SCAN,nullptr);
    if(file==INVALID_HANDLE_VALUE)return;
    LARGE_INTEGER size={};
    if(!GetFileSizeEx(file,&size) || size.QuadPart<=0 || size.QuadPart>(64<<20)) {CloseHandle(file);return;}
    std::string data(static_cast<size_t>(size.QuadPart),'\0');
    DWORD got=0;
    bool ok=ReadFile(file,&data[0],static_cast<DWORD>(data.size()),&got,nullptr)!=0;
    CloseHandle(file);
    if(!ok)return;
    data.resize(got);
    size_t pos=0;
    if(data.size()>=3 && static_cast<unsigned char>(data[0])==0xEF && static_cast<unsigned char>(data[1])==0xBB && static_cast<unsigned char>(data[2])==0xBF)pos=3;
    while(pos<data.size()) {
        size_t end=data.find('\n',pos);if(end==std::string::npos)end=data.size();
        size_t stop=end;if(stop>pos && data[stop-1]=='\r')--stop;
        size_t semi=data.find(';',pos);
        if(semi!=std::string::npos && semi<stop && data[pos]!='#') {
            size_t text_end=data.find(';',semi+1);if(text_end==std::string::npos || text_end>stop)text_end=stop;
            std::string key=tgcx_LocLower(data.substr(pos,semi-pos).c_str());
            if(!key.empty() && text_end>semi+1)tgcx_loc_map.emplace(key,data.substr(semi+1,text_end-semi-1));
        }
        pos=end+1;
    }
}

// Reads every *.csv of the roots once, on first use (the GUI thread, never in DllMain).
static void tgcx_LocLoad() {
    if(tgcx_loc_loaded)return;
    tgcx_loc_loaded=true;
    DWORD started=GetTickCount();unsigned files=0;
    for(const std::wstring& dir:tgcx_loc_dirs) {
        std::vector<std::wstring> names;
        WIN32_FIND_DATAW found;
        HANDLE find=FindFirstFileW((dir+L"\\*.csv").c_str(),&found);
        if(find==INVALID_HANDLE_VALUE)continue;
        do {
            size_t length=wcslen(found.cFileName);
            if(!(found.dwFileAttributes&FILE_ATTRIBUTE_DIRECTORY) && length>4 && _wcsicmp(found.cFileName+length-4,L".csv")==0)names.push_back(found.cFileName);
        } while(FindNextFileW(find,&found));
        FindClose(find);
        std::sort(names.begin(),names.end());
        for(const std::wstring& name:names) {tgcx_LocReadFile(dir+L"\\"+name);++files;}
    }
    tgcx_Log("Localisation: %u csv files, %u keys, %lu ms",files,static_cast<unsigned>(tgcx_loc_map.size()),static_cast<unsigned long>(GetTickCount()-started));
}

// nullptr when no csv defines the key.
static const char* tgcx_LocFind(const char* key) {
    tgcx_LocLoad();
    auto it=tgcx_loc_map.find(tgcx_LocLower(key));
    return it==tgcx_loc_map.end()?nullptr:it->second.c_str();
}

// The conversions ("%u", "%s", ...) of a printf template, in order; "%%" is skipped.
static std::string tgcx_LocConversions(const char* text) {
    std::string out;
    for(const char* p=text;*p;++p) {
        if(*p!='%')continue;
        ++p;if(*p=='%')continue;
        while(*p && !((*p>='a' && *p<='z') || (*p>='A' && *p<='Z')))++p;
        if(!*p)break;
        out.push_back(*p);
    }
    return out;
}

// The localised template for `key`, or `fallback` (the English default) when the csv has none
// or its conversions do not match the default's - a wrong template must never reach printf.
static const char* tgcx_T(const char* key,const char* fallback) {
    auto done=tgcx_loc_checked.find(key);
    if(done!=tgcx_loc_checked.end())return done->second.empty()?fallback:done->second.c_str();
    const char* text=tgcx_LocFind(key);
    std::string accepted;
    if(text && *text) {
        if(tgcx_LocConversions(text)==tgcx_LocConversions(fallback))accepted=text;
        else tgcx_Log("Localisation: %s ignored, its printf conversions differ from the default \"%s\"",key,fallback);
    }
    auto added=tgcx_loc_checked.emplace(key,accepted);
    return added.first->second.empty()?fallback:added.first->second.c_str();
}

// "%u regiment(s)". With a "_few" form in the csv the Slavic rule is used (1 / 2-4 / 5+),
// without it the English one (1 / other).
static void tgcx_LocRegiments(unsigned n,char* out,size_t size) {
    bool slavic=tgcx_LocFind("tgcx_n_regiments_few")!=nullptr;
    const char* form="many";
    if(slavic) {
        unsigned m10=n%10,m100=n%100;
        form=(m10==1 && m100!=11)?"one":(m10>=2 && m10<=4 && (m100<12 || m100>14))?"few":"many";
    } else if(n==1)form="one";
    char key[48];sprintf_s(key,"tgcx_n_regiments_%s",form);
    sprintf_s(out,size,tgcx_T(key,n==1 && !slavic?"%u regiment":(slavic && !strcmp(form,"one"))?"%u regiment":"%u regiments"),n);
}
