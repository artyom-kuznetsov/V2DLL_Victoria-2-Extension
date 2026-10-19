// MOD-6: live catalogue and actual x86 GUI call boundaries in an isolated image.
#pragma once
static uintptr_t tgcx_uni_test_context=0,tgcx_uni_test_windows[2]={},tgcx_uni_test_child=0,tgcx_uni_test_icon=0;
static unsigned tgcx_uni_test_created=0,tgcx_uni_test_released=0,tgcx_uni_test_frame=0;
static uintptr_t __fastcall tgcx_UniTestLookup(uintptr_t,void*,const void* str) {
    const auto& s=*static_cast<const tgcx_GameString*>(str);
    const char* key=s.capacity>15?*reinterpret_cast<const char*const*>(s.data):s.data;
    return !strncmp(key,"tgcx_",5)?1:0;
}
static uintptr_t __fastcall tgcx_UniTestCreate(uintptr_t self,void*,const void* str,uintptr_t parent) {
    tgcx_Expect(self==tgcx_uni_test_context && parent==0 && tgcx_UniTestLookup(0,nullptr,str),"Universal factory passes context, borrowed name and null parent with RET8 ABI");
    return tgcx_uni_test_created<2?tgcx_uni_test_windows[tgcx_uni_test_created++]:0;
}
static void __fastcall tgcx_UniTestHide(uintptr_t self,void*) {*reinterpret_cast<unsigned char*>(self+0x67)=0;}
static void __fastcall tgcx_UniTestRelease(uintptr_t self,void*) {++tgcx_uni_test_released;*reinterpret_cast<unsigned char*>(self+0x52)=1;}
static uintptr_t __fastcall tgcx_UniTestChild(uintptr_t,void*,const void*) {return tgcx_uni_test_child;}
static uintptr_t __fastcall tgcx_UniTestIcon(uintptr_t,void*,const void*) {return tgcx_uni_test_icon;}
static void __fastcall tgcx_UniTestFrame(uintptr_t,void*,unsigned frame) {tgcx_uni_test_frame=frame;}

static void tgcx_UniversalTests() {
    bool saved_mode=tgcx_army_universal,saved_ready=tgcx_univ_catalogue_ready;
    unsigned saved_count=tgcx_tpl_kinds;tgcx_TplUnitInfo saved_catalogue[tgcx_tpl_capacity];
    static tgcx_TplMetadataRow saved_metadata[tgcx_tpl_capacity];unsigned saved_icons[tgcx_tpl_capacity];
    memcpy(saved_catalogue,tgcx_tpl_catalog,sizeof(saved_catalogue));memcpy(saved_metadata,tgcx_tpl_metadata,sizeof(saved_metadata));
    memcpy(saved_icons,tgcx_univ_icons,sizeof(saved_icons));
    tgcx_army_universal=true;tgcx_univ_catalogue_ready=false;
    static tgcx_TplCountry country;memset(&country,0,sizeof(country));
    for(unsigned i=0;i<3;++i) {unsigned u=700+i;country.unit[u]=u;country.icon[u]=i+21;country.days[u]=i+40;}
    strcpy_s(country.name[700],"regular");strcpy_s(country.name[701],"infantry");strcpy_s(country.name[702],"horse_artillery");
    tgcx_Expect(tgcx_UnivCatalogue(country) && tgcx_tpl_kinds==3 && !strcmp(tgcx_tpl_catalog[0].key,"infantry") &&
        !strcmp(tgcx_tpl_catalog[1].key,"horse_artillery") && tgcx_tpl_catalog[2].days==40 && tgcx_univ_icons[1]==23,
        "Universal catalogue uses custom live keys/icons/times and stable key order");
    tgcx_Expect(!strcmp(tgcx_tpl_catalog[1].label,"Horse Artillery") && tgcx_TplCatalogueFits(country),"Universal readable labels and live key agreement");
    country.unit[703]=1;strcpy_s(country.name[703],"changed_type");
    tgcx_Expect(!tgcx_UnivCatalogue(country),"Universal rejects an unexpected catalogue change after preferences are mapped");
    country.unit[703]=0;
    int x=0,y=0;tgcx_UnivTabCell(352,31,&x,&y);
    tgcx_Expect(x==355 && y==37,"Universal compact entry follows ordinary native folder row");
    tgcx_UnivTabCell(416,31,&x,&y);
    tgcx_Expect(x==370 && y==7 && y+20<=31,"Universal dense DoD row uses title band clear of its extra unit tabs");

    auto* memory=static_cast<unsigned char*>(VirtualAlloc(nullptr,tgcx_image_size,MEM_COMMIT|MEM_RESERVE,PAGE_EXECUTE_READWRITE));
    tgcx_Expect(memory!=nullptr,"Universal isolated native-call image");
    uintptr_t saved_base=tgcx_base;
    if(memory) {
        tgcx_base=reinterpret_cast<uintptr_t>(memory);
        auto put=[](uintptr_t p,unsigned off,uintptr_t value){*reinterpret_cast<uintptr_t*>(p+off)=value;};
        auto jump=[&](unsigned rva,uintptr_t fn){memory[rva]=0xE9;*reinterpret_cast<uint32_t*>(memory+rva+1)=static_cast<uint32_t>(fn-(tgcx_base+rva+5));};
        jump(0x100,reinterpret_cast<uintptr_t>(tgcx_UniTestLookup));
        jump(0x5A38F0,reinterpret_cast<uintptr_t>(tgcx_UniTestCreate));
        jump(0x5E4030,reinterpret_cast<uintptr_t>(tgcx_UniTestHide));
        jump(0x5E3D60,reinterpret_cast<uintptr_t>(tgcx_UniTestRelease));
        jump(0x5E4A20,reinterpret_cast<uintptr_t>(tgcx_UniTestChild));
        jump(0x5E4D40,reinterpret_cast<uintptr_t>(tgcx_UniTestIcon));
        for(const auto& signature:tgcx_signatures)
            if(signature.rva==0x5C4410 || signature.rva==0x5EFE20)memcpy(memory+signature.rva,signature.bytes,signature.length);
        uintptr_t context=tgcx_base+0x2000,root=tgcx_base+0x3000;
        tgcx_uni_test_context=context;tgcx_uni_test_created=tgcx_uni_test_released=0;
        put(context,0,tgcx_base+0xA08A44);put(context,0x30,tgcx_base+0x8000);
        put(context,0x34,tgcx_base+0x1800);put(tgcx_base+0x1800,4,tgcx_base+0x100);
        put(tgcx_base+0xA08A44,11*4,tgcx_base+0x5A38F0);
        for(unsigned i=0;i<3;++i) {
            uintptr_t window=i==0?root:tgcx_base+0x4000+i*0x800;
            if(i)tgcx_uni_test_windows[i-1]=window;
            put(window,0,tgcx_base+0xA3C0D8);put(window,0x4C,context);put(window,0x90,tgcx_base+0x8000);
        }
        uintptr_t table=tgcx_base+0xA3C0D8;
        put(table,9*4,tgcx_base+0x5E4030);put(table,20*4,tgcx_base+0x5E3D60);
        put(table,27*4,tgcx_base+0x5E4A20);put(table,17*4,tgcx_base+0x5E4D40);
        FlushInstructionCache(GetCurrentProcess(),memory,tgcx_image_size);
        uintptr_t window=0,tab=0;
        tgcx_Expect(tgcx_UnivPair(root,"tgcx_tpl_window","tgcx_tpl_tab",window,tab) && tgcx_uni_test_created==2,
            "Universal creates both shared roots through the verified factory boundary");
        uintptr_t released=window;tgcx_UnivRelease(window);tgcx_UnivRelease(tab);
        tgcx_Expect(!window && !tab && tgcx_uni_test_released==2 && memory[released-tgcx_base+0x52]==1,
            "Universal release hides and marks deferred collection rather than freeing a registered window");
        put(root,0x4C,0);tgcx_Expect(!tgcx_UnivMake(root,"tgcx_tpl_window"),"Universal refuses a root without the expected GUI context");
        put(root,0x4C,context);
        uintptr_t button=tgcx_base+0x6000;put(button,0,tgcx_base+0x1900);put(tgcx_base+0x1900,15*4,tgcx_base+0x5EFE20);
        put(button,0x98,384|(31u<<16));
        tgcx_Expect(tgcx_UnivButtonPosition(button,&x,&y) && x==384 && y==31,"Universal executes actual native packed-position getter with RET4");
        tgcx_uni_test_child=tgcx_base+0x6800;tgcx_uni_test_icon=tgcx_base+0x7000;
        put(tgcx_uni_test_child,0,table);put(tgcx_uni_test_icon,0,tgcx_base+0xA3A930);
        put(tgcx_base+0xA3A930,18*4,tgcx_base+0x5C4410);
        put(tgcx_uni_test_icon,0x94,tgcx_base+0x7400);put(tgcx_base+0x7400,0,tgcx_base+0x1A00);
        put(tgcx_base+0x1A00,24*4,reinterpret_cast<uintptr_t>(tgcx_UniTestFrame));
        tgcx_uni_test_frame=0;tgcx_UnivIcon(root,"tgcx_icon","tgcx_sprite",1,true);
        tgcx_Expect(tgcx_uni_test_frame==23,"Universal executes native CIcon forwarding setter with the live custom frame");
        VirtualFree(memory,0,MEM_RELEASE);
    }
    tgcx_base=saved_base;tgcx_army_universal=saved_mode;tgcx_univ_catalogue_ready=saved_ready;tgcx_tpl_kinds=saved_count;
    memcpy(tgcx_tpl_catalog,saved_catalogue,sizeof(saved_catalogue));memcpy(tgcx_tpl_metadata,saved_metadata,sizeof(saved_metadata));
    memcpy(tgcx_univ_icons,saved_icons,sizeof(saved_icons));
    printf("Universal Army: live catalogue, DoD placement, factory ABI, deferred release and native frame/getter calls checked\n");
}
