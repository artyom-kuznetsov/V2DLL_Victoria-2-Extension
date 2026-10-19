// MOD-5: generated per-base metadata is read at runtime by the same DLL.
// The engine's current country still supplies every recruitable unit pointer.
#pragma once
#include "tgcx_templates_catalog.h"

struct tgcx_TplMetadataRow { char key[64],label[96],abbr[16];int days; };
static tgcx_TplMetadataRow tgcx_tpl_metadata[tgcx_tpl_capacity];
static unsigned tgcx_univ_icons[tgcx_tpl_capacity];
static bool tgcx_univ_catalogue_ready=false;
static bool tgcx_TplLoadMetadata(const wchar_t* path) {
    FILE* file=nullptr;if(_wfopen_s(&file,path,L"rb"))return false;
    static tgcx_TplMetadataRow candidate[tgcx_tpl_capacity];
    memset(candidate,0,sizeof(candidate));unsigned count=0;char line[256];
    bool ok=fgets(line,sizeof(line),file) && (!strcmp(line,"tgcx_units 1\n") || !strcmp(line,"tgcx_units 1\r\n"));
    while(ok && fgets(line,sizeof(line),file)) {
        size_t length=strlen(line);
        if(!length || (length==sizeof(line)-1 && line[length-1]!='\n') || count>=tgcx_tpl_capacity) {ok=false;break;}
        while(length && (line[length-1]=='\r' || line[length-1]=='\n'))line[--length]=0;
        char* fields[4]={line};
        for(unsigned i=1;i<4;++i) {
            char* separator=strchr(fields[i-1],'|');
            if(!separator){ok=false;break;}*separator=0;fields[i]=separator+1;
        }
        if(!ok)break;
        auto& row=candidate[count];
        if(!fields[0][0] || strlen(fields[0])>=sizeof(row.key) || !fields[1][0] || strlen(fields[1])>=sizeof(row.label) ||
           !fields[2][0] || strlen(fields[2])>=sizeof(row.abbr)) {ok=false;break;}
        for(const unsigned char* p=reinterpret_cast<const unsigned char*>(fields[0]);*p;++p)
            if(!((*p>='a' && *p<='z') || (*p>='A' && *p<='Z') || (*p>='0' && *p<='9') || *p=='_'))ok=false;
        for(unsigned i=0;i<count;++i)if(!strcmp(candidate[i].key,fields[0]))ok=false;
        unsigned days=0;
        for(const char* p=fields[3];*p;++p) {
            if(*p<'0' || *p>'9' || days>100000) {ok=false;break;}
            days=days*10+(*p-'0');
        }
        if(!days || days>100000)ok=false;
        if(!ok)break;
        strcpy_s(row.key,fields[0]);strcpy_s(row.label,fields[1]);strcpy_s(row.abbr,fields[2]);row.days=static_cast<int>(days);++count;
    }
    ok=ok && count && !ferror(file);fclose(file);
    if(!ok)return false;    // Invalid metadata leaves the current catalogue intact.
    memcpy(tgcx_tpl_metadata,candidate,sizeof(candidate));
    for(unsigned i=0;i<count;++i) {
        auto& row=tgcx_tpl_metadata[i];tgcx_tpl_catalog[i]={row.key,row.label,row.abbr,row.days};
    }
    tgcx_tpl_kinds=count;return true;
}

// Called once at initialisation, before any GUI/library state exists. Two
// simultaneous Army packages could disagree on sprites/keys, so refuse them.
static bool tgcx_TplPackageMetadata(const wchar_t* game,const tgcx_ModList& mods) {
    const tgcx_Mod* selected=nullptr;
    for(unsigned i=0;i<mods.count;++i)if(!strcmp(mods.item[i].package,"army")) {
        if(selected){tgcx_Log("Army disabled: select only one base's Army package");return false;}
        selected=&mods.item[i];
    }
    if(!selected)return false;
    wchar_t path[MAX_PATH];
    if(tgcx_GamePath(game,selected->path,"tgcx_universal.txt",path,MAX_PATH)) {
        char marker[64];
        if(tgcx_ReadSmall(path,marker,sizeof(marker)) && !strcmp(marker,"army_gui 1\n")) {
            tgcx_army_universal=true;
            tgcx_Log("Universal Army: native shared GUI; catalogue will come from the running game");return true;
        }
    }
    if(!tgcx_GamePath(game,selected->path,"tgcx_tpl_units.txt",path,MAX_PATH))return false;
    if(tgcx_TplLoadMetadata(path)) {
        tgcx_Log("Army catalogue: %u land types loaded from %ls",tgcx_tpl_kinds,path);return true;
    }
    // Retain the accepted 0.8.2 TGC package as a rollback. No silent TGC
    // defaults on a different base or when a present catalogue is malformed.
    DWORD attributes=GetFileAttributesW(path),error=GetLastError();
    if(attributes==INVALID_FILE_ATTRIBUTES && (error==ERROR_FILE_NOT_FOUND || error==ERROR_PATH_NOT_FOUND) &&
       !strcmp(selected->path,"mod/tgcx_army_tgc252")) {
        tgcx_Log("Army catalogue: legacy TGC v2.5.2 package (%u land types)",tgcx_tpl_kinds);return true;
    }
    tgcx_Log("Army disabled: missing or invalid unit catalogue %ls",path);return false;
}

// Unit indices and pointers come from the running game, never the metadata.
// Refuse a package generated for another active unit set, including an extra
// unit-changing submod, rather than displaying or recruiting the wrong list.
static bool tgcx_TplCatalogueFits(const tgcx_TplCountry& country) {
    for(unsigned k=0;k<tgcx_tpl_kinds;++k)
        if(tgcx_TplUnitByName(country,tgcx_tpl_catalog[k].key)<0)return false;
    for(unsigned u=0;u<tgcx_tpl_units;++u)if(country.unit[u]) {
        unsigned k=0;while(k<tgcx_tpl_kinds && strcmp(country.name[u],tgcx_tpl_catalog[k].key))++k;
        if(k==tgcx_tpl_kinds)return false;
    }
    return true;
}

static bool tgcx_UnivCatalogue(const tgcx_TplCountry& country) {
    if(!tgcx_army_universal)return true;
    if(tgcx_univ_catalogue_ready)return tgcx_TplCatalogueFits(country);
    unsigned indices[tgcx_tpl_capacity],count=0;
    for(unsigned u=0;u<tgcx_tpl_units;++u)if(country.unit[u]) {
        if(count==tgcx_tpl_capacity || !country.name[u][0] || country.icon[u]<1 || country.icon[u]>1024 ||
           country.days[u]<1 || country.days[u]>100000)return false;
        for(unsigned k=0;k<count;++k)if(!strcmp(country.name[indices[k]],country.name[u]))return false;
        indices[count++]=u;
    }
    if(!count)return false;
    const char* preferred[]={"infantry","guard","irregular","artillery","engineer","cuirassier","dragoon","hussar","cavalry","tank","plane"};
    const char* abbrev[]={"Inf","Gds","Irr","Art","Eng","Cui","Dra","Hus","Cav","Tnk","Air"};
    auto rank=[&](const char* key){for(unsigned i=0;i<_countof(preferred);++i)if(!strcmp(key,preferred[i]))return i;return static_cast<unsigned>(_countof(preferred));};
    std::sort(indices,indices+count,[&](unsigned a,unsigned b){unsigned ra=rank(country.name[a]),rb=rank(country.name[b]);return ra==rb?strcmp(country.name[a],country.name[b])<0:ra<rb;});
    for(unsigned k=0;k<count;++k) {
        unsigned u=indices[k];auto& row=tgcx_tpl_metadata[k];
        strcpy_s(row.key,country.name[u]);strcpy_s(row.label,country.name[u]);
        bool capital=true;
        for(char* p=row.label;*p;++p){if(*p=='_'){*p=' ';capital=true;}else{if(capital && *p>='a' && *p<='z')*p-=32;capital=false;}}
        unsigned r=rank(row.key);
        if(r<_countof(abbrev))strcpy_s(row.abbr,abbrev[r]);else {strncpy_s(row.abbr,row.label,3);row.abbr[3]=0;}
        row.days=country.days[u];tgcx_univ_icons[k]=country.icon[u];
        tgcx_tpl_catalog[k]={row.key,row.label,row.abbr,row.days};
    }
    tgcx_tpl_kinds=count;tgcx_univ_catalogue_ready=true;
    tgcx_Log("Universal Army: %u live land types; names/icons/build times read from engine",count);return true;
}
