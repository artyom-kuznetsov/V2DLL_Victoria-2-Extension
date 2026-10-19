// MOD-5 data-driven catalogue, persistence and runtime engine-key agreement.
#pragma once
static void tgcx_TplMetadataTests() {
    tgcx_TplUnitInfo saved[tgcx_tpl_capacity];memcpy(saved,tgcx_tpl_catalog,sizeof(saved));
    unsigned saved_count=tgcx_tpl_kinds;
    tgcx_ModList packages={};
    tgcx_Expect(!tgcx_TplPackageMetadata(L".",packages),"Army requires a selected package before reading metadata");
    packages.count=2;strcpy_s(packages.item[0].package,"army");strcpy_s(packages.item[1].package,"army");
    tgcx_Expect(!tgcx_TplPackageMetadata(L".",packages),"Army refuses conflicting per-base packages together");
    wchar_t folder[MAX_PATH],path[MAX_PATH],library_path[MAX_PATH];GetTempPathW(MAX_PATH,folder);
    tgcx_Expect(GetTempFileNameW(folder,L"tgc",0,path)!=0 && GetTempFileNameW(folder,L"tgc",0,library_path)!=0,
        "Army metadata isolated files");
    FILE* file=nullptr;_wfopen_s(&file,path,L"wb");
    if(file) {
        fputs("tgcx_units 1\n",file);
        for(unsigned i=0;i<20;++i)fprintf(file,"custom_musketeer_%02u|Musketeer %u|M%u|%u\n",i,i,i,30+i);
        fclose(file);
    }
    tgcx_Expect(tgcx_TplLoadMetadata(path) && tgcx_tpl_kinds==20 && (tgcx_tpl_kinds+7)/8==3 &&
        !strcmp(tgcx_tpl_catalog[19].key,"custom_musketeer_19") && tgcx_tpl_catalog[19].days==49,
        "Army loads a non-TGC catalogue with more than two editor pages");
    static tgcx_TplCountry country;memset(&country,0,sizeof(country));
    for(unsigned i=0;i<20;++i) {
        country.unit[700+i]=i+1;strcpy_s(country.name[700+i],tgcx_tpl_catalog[i].key);
    }
    tgcx_Expect(tgcx_TplCatalogueFits(country),"Army matches metadata to high live engine indices by key");
    strcpy_s(country.name[900],"unlisted_regiment");country.unit[900]=1;
    tgcx_Expect(!tgcx_TplCatalogueFits(country),"Army refuses an additional unit-changing submod without matching metadata");
    country.unit[900]=0;country.unit[700]=0;
    tgcx_Expect(!tgcx_TplCatalogueFits(country),"Army refuses a package generated for a missing unit");country.unit[700]=1;
    tgcx_TplLibrary library={},roundtrip={};library.size=1;library.item[0].count[19]=2;
    tgcx_Expect(tgcx_TplSaveFile(library_path,library) && tgcx_TplLoadFile(library_path,&roundtrip) &&
        !memcmp(&library,&roundtrip,sizeof(library)),"Army custom unit keys persist beyond the former eleven-unit catalogue");
    tgcx_CfPanel panel={};panel.selected=0;tgcx_tpl_library=library;
    int want[tgcx_tpl_units],kind[tgcx_tpl_units];tgcx_CfWant(&panel,country,want,kind);
    tgcx_Expect(want[719]==2 && kind[719]==19 && !want[19],"Conform resolves custom catalogue kinds to live engine indices");
    const char* invalid[]={"tgcx_units 2\n", "tgcx_units 1\nfoo|Foo|Foo|0\n", "tgcx_units 1\nfoo|Foo|Foo|1\nfoo|Foo|Foo|2\n",
        "tgcx_units 1\nfoo|Foo|Foo|999999999999\n", "tgcx_units 1\n../bad|Bad|Bad|1\n"};
    for(const char* text:invalid) {
        _wfopen_s(&file,path,L"wb");if(file){fputs(text,file);fclose(file);}
        tgcx_Expect(!tgcx_TplLoadMetadata(path) && tgcx_tpl_kinds==20 && !strcmp(tgcx_tpl_catalog[19].key,"custom_musketeer_19"),
            "Army invalid metadata preserves the active catalogue");
    }
    memcpy(tgcx_tpl_catalog,saved,sizeof(saved));tgcx_tpl_kinds=saved_count;tgcx_tpl_library={};
    tgcx_TplLibrary untouched=roundtrip;
    tgcx_Expect(!tgcx_TplLoadFile(library_path,&roundtrip) && !memcmp(&untouched,&roundtrip,sizeof(roundtrip)),
        "Army incompatible cross-base template file is preserved, never silently stripped");
    DeleteFileW(path);DeleteFileW(library_path);
    printf("Army metadata: custom units, high engine indices, catalogue mismatches and persistence checked\n");
}
