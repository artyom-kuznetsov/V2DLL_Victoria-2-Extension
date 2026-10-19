// TPL-0 persistence, malformed-input preservation and native view lifetimes.
#pragma once
static void tgcx_TplGuiTests() {
    wchar_t folder[MAX_PATH],path[MAX_PATH];GetTempPathW(_countof(folder),folder);
    tgcx_Expect(GetTempFileNameW(folder,L"tgc",0,path)!=0,"Templates isolated local file");
    tgcx_TplLibrary a={},b={};a.size=2;a.item[0].count[0]=4;a.item[0].count[3]=1;a.item[0].count[7]=1;
    a.item[1].count[1]=2;
    tgcx_Expect(tgcx_TplSaveFile(path,a) && tgcx_TplLoadFile(path,&b) && !memcmp(&a,&b,sizeof(a)),
        "Templates key-based local file round trip preserves several compositions");
    char name[160];tgcx_TplName(a.item[0],name,sizeof(name));
    tgcx_Expect(!strcmp(name,"4 Inf / 1 Art / 1 Hus") && tgcx_TplBaseDays(a.item[0])==120 && tgcx_TplTotal(a.item[0])==6,
        "Templates composition name, parallel base time and regiment total");
    unsigned leading=0,mini[4]={};
    tgcx_Expect(tgcx_TplMinis(a.item[0],&leading,mini)==3 && leading==0 && mini[0]==0 && mini[1]==3 && mini[2]==7,
        "Templates board-5 miniatures: non-empty groups in catalogue order, largest group leads");
    tgcx_TplComposition wide={};for(unsigned u=0;u<6;++u)wide.count[u]=1;wide.count[5]=3;
    tgcx_Expect(tgcx_TplMinis(wide,&leading,mini)==4 && leading==5 && mini[3]==3,
        "Templates miniatures stop at four places; a later larger group still leads");
    tgcx_TplComposition none={};
    tgcx_Expect(tgcx_TplMinis(none,&leading,mini)==0 && leading==tgcx_tpl_kinds,"Templates empty composition shows no icon");
    tgcx_TplLibrary invalid=a;invalid.item[0].count[0]=129;
    tgcx_Expect(!tgcx_TplSaveFile(path,invalid) && tgcx_TplLoadFile(path,&b) && !memcmp(&a,&b,sizeof(a)),
        "Templates invalid replacement preserves the previous file");
    wchar_t pending[MAX_PATH];swprintf_s(pending,L"%s.pending",path);
    FILE* file=nullptr;_wfopen_s(&file,pending,L"wb");if(file)fclose(file);
    tgcx_Expect(!tgcx_TplSaveFile(path,a) && GetFileAttributesW(pending)!=INVALID_FILE_ATTRIBUTES,
        "Templates interrupted pending write is preserved instead of overwritten");DeleteFileW(pending);
    const char* bad[]={"tgcx_templates 2\n", "tgcx_templates 1\ntemplate\ninfantry=-1\nend\n",
        "tgcx_templates 1\ntemplate\ninfantry=4294967297\nend\n",
        "tgcx_templates 1\ntemplate\ninfantry=1\ninfantry=2\nend\n",
        "tgcx_templates 1\ntemplate\nunknown_unit=1\nend\n",
        "tgcx_templates 1\ntemplate\ninfantry=128\nartillery=1\nend\n",
        "tgcx_templates 1\ntemplate\ninfantry=1\n", "tgcx_templates 1\nend\n"};
    for(const char* text:bad) {
        _wfopen_s(&file,path,L"wb");if(file){fputs(text,file);fclose(file);}
        b=a;tgcx_Expect(!tgcx_TplLoadFile(path,&b) && !memcmp(&a,&b,sizeof(a)),
            "Templates malformed file rejected without changing the in-memory library");
    }
    DeleteFileW(path);
    // Capture and destructor callbacks never touch the simulation or run the
    // library loader. Each native view gets separate stable observer memory.
    tgcx_tpl_gui_enabled=true;tgcx_TplCapture(0x1234);tgcx_TplCapture(0x5678);tgcx_TplCapture(0x1234);
    tgcx_Expect(tgcx_tpl_panels[0].view==0x1234 && tgcx_tpl_panels[1].view==0x5678 && !tgcx_tpl_panels[2].view,
        "Templates views captured once, with independent contexts");
    tgcx_tpl_panels[0].glue[0][0]=0xA5;tgcx_TplDestroy(0x1234);
    tgcx_Expect(!tgcx_tpl_panels[0].view && tgcx_tpl_panels[0].glue[0][0]==0xA5 && tgcx_tpl_panels[1].view==0x5678,
        "Templates destroying one view preserves live observer memory and other views");
    tgcx_TplDestroy(0x5678);tgcx_tpl_gui_enabled=false;
    printf("Templates: local file round trip, atomic failure, malformed inputs and view lifetimes checked\n");
}
