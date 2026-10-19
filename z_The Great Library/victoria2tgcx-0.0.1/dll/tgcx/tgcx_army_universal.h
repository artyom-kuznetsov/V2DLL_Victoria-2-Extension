// MOD-6: shared native GUI definitions, constructed without replacing a base GUI.
// GUI ownership/state only; all simulation changes still use engine commands.
#pragma once

static bool tgcx_UnivReady() {
    if(!tgcx_army_universal || tgcx_univ_catalogue_ready)return true;
    static tgcx_TplCountry country;
    return tgcx_TplScan(tgcx_TplLiveGlobals(),tgcx_tpl_native,&country) && tgcx_UnivCatalogue(country);
}
static uintptr_t tgcx_UnivContext(uintptr_t root) {
    uintptr_t context=*reinterpret_cast<uintptr_t*>(root+0x4C);
    if(!context || *reinterpret_cast<uintptr_t*>(context)!=tgcx_base+0xA08A44 ||
       *reinterpret_cast<uintptr_t*>(context+0x30)!=*reinterpret_cast<uintptr_t*>(root+0x90))return 0;
    return context;
}
static uintptr_t tgcx_UnivMake(uintptr_t root,const char* key) {
    uintptr_t context=tgcx_UnivContext(root);if(!context)return 0;
    tgcx_GameString name=tgcx_BorrowString(key);
    uintptr_t registry=context+0x34;auto* rt=*reinterpret_cast<uintptr_t**>(registry);
    if(rt[1]<tgcx_base || rt[1]>=tgcx_base+tgcx_image_size)return 0;
    if(!reinterpret_cast<tgcx_GuiOne>(rt[1])(registry,nullptr,&name))return 0;
    auto* table=*reinterpret_cast<uintptr_t**>(context);
    if(table[11]!=tgcx_base+0x5A38F0)return 0;
    typedef uintptr_t(__fastcall* Make)(uintptr_t,void*,const void*,uintptr_t);
    uintptr_t result=reinterpret_cast<Make>(table[11])(context,nullptr,&name,0);
    if(result && *reinterpret_cast<uintptr_t*>(result)!=tgcx_base+0xA3C0D8)return 0;
    if(result)tgcx_TplVisible(result,false);
    return result;
}
// Match CUnitView teardown: hide, then mark the complete subtree for the
// GUI manager's deferred collection. Never free a registered window directly.
static void tgcx_UnivRelease(uintptr_t& window) {
    if(!tgcx_army_universal || !window)return;
    __try {
        auto* table=*reinterpret_cast<uintptr_t**>(window);
        if(table[20]==tgcx_base+0x5E3D60 && tgcx_UnivContext(window)) {
            tgcx_TplVisible(window,false);
            reinterpret_cast<tgcx_GuiZero>(table[20])(window,nullptr);
        }
    } __except(EXCEPTION_EXECUTE_HANDLER) {tgcx_Log("Universal Army: expired GUI during release; discarded reference");}
    window=0;
}
static bool tgcx_UnivPair(uintptr_t root,const char* window_name,const char* tab_name,uintptr_t& window,uintptr_t& tab) {
    if(!tgcx_UnivReady())return false;
    window=tgcx_UnivMake(root,window_name);
    if(window)tab=tgcx_UnivMake(root,tab_name);
    if(!window || !tab) {
        static unsigned diagnostics=0;
        if(diagnostics++<8)tgcx_Log("Universal Army: shared GUI creation refused for %s, context=%08X window=%08X tab=%08X",
            window_name,tgcx_UnivContext(root),window,tab);
        tgcx_UnivRelease(window);tgcx_UnivRelease(tab);return false;
    }
    tgcx_Log("Universal Army: constructed %s + %s from shared definitions",window_name,tab_name);return true;
}
static bool tgcx_UnivPosition(uintptr_t window,int x,int y,bool promote=false) {
    auto* table=*reinterpret_cast<uintptr_t**>(window);
    if(table[6]!=tgcx_base+0x5E3BA0 || table[11]!=tgcx_base+0x5E2FC0 || x<0 || y<0 || x>32767 || y>32767)return false;
    // These are independent roots, not children drawn with the host panel.
    // On first show/reopen they must be promoted after that panel, just as
    // the accepted Templates/Conform bodies are promoted when opened.
    if(promote || !*reinterpret_cast<unsigned char*>(window+0x67))
        reinterpret_cast<tgcx_GuiZero>(table[11])(window,nullptr);
    typedef void(__fastcall* Place)(uintptr_t,void*,uint32_t);
    reinterpret_cast<Place>(table[6])(window,nullptr,static_cast<uint32_t>(x)|(static_cast<uint32_t>(y)<<16));return true;
}
// Rate-limit by root and failed stage, not by frame. A missing control must
// leave a useful diagnostic rather than silently returning every 100ms.
static bool tgcx_UnivPlacementRefused(uintptr_t root,const char* stage) {
    struct Seen {uintptr_t root;const char* stage;};static Seen seen[24]={};static unsigned next=0;
    for(const auto& s:seen)if(s.root==root && s.stage==stage)return false;
    seen[next++%_countof(seen)]={root,stage};
    tgcx_Log("Universal Army: entry placement refused stage=%s root=%08X",stage,root);return false;
}
static bool tgcx_UnivEntry(uintptr_t root,uintptr_t tab,int x,int y,bool promote=false) {
    bool hidden=!*reinterpret_cast<unsigned char*>(tab+0x67);
    if(!tgcx_UnivPosition(tab,x,y,promote))return tgcx_UnivPlacementRefused(root,"entry position/foreground");
    if(hidden) {
        tgcx_TplVisible(tab,true);
        tgcx_Log("Universal Army: entry activated root=%08X tab=%08X screen=%d,%d foreground=1 subtree=%u",
            root,tab,x,y,*reinterpret_cast<unsigned char*>(tab+0x67));
        if(!*reinterpret_cast<unsigned char*>(tab+0x67))return false;
    }
    return true;
}
static bool tgcx_UnivButtonPosition(uintptr_t button,int* x,int* y) {
    auto* table=*reinterpret_cast<uintptr_t**>(button);if(table[15]!=tgcx_base+0x5EFE20)return false;
    uint32_t packed=0;
    typedef void(__fastcall* Get)(uintptr_t,void*,uint32_t*);
    reinterpret_cast<Get>(table[15])(button,nullptr,&packed);
    *x=static_cast<int16_t>(packed);*y=static_cast<int16_t>(packed>>16);return true;
}
static bool tgcx_UnivRootPosition(uintptr_t root,float* x,float* y) {
    uintptr_t renderer=*reinterpret_cast<uintptr_t*>(root+0x90),inner=*reinterpret_cast<uintptr_t*>(root+0x494);
    unsigned depth=0;
    return renderer && inner && *reinterpret_cast<uintptr_t*>(inner)==tgcx_base+0xA38350 &&
        tgcx_TplRootScreen(inner,renderer+0x6B9E0,x,y,&depth);
}
// Dense DoD rows leave no room for the 34px folder. The same compact 20px
// control fits after ordinary rows; dense rows use the free title-band cell.
static void tgcx_UnivTabCell(int right,int row_y,int* x,int* y) {
    if(right+3+20<=405){*x=right+3;*y=row_y+6;}
    else {*x=370;*y=(std::max)(0,row_y-24);}
}
static bool tgcx_UnivTplTab(uintptr_t root,uintptr_t tab,bool promote=false) {
    int right=0,row_y=31;
    for(unsigned k=0;k<tgcx_tpl_kinds;++k) {
        char name[48];sprintf_s(name,"unit_folder_%u",tgcx_univ_icons[k]);
        uintptr_t button=tgcx_BillFind(root,13,0x5E4C80,name);int x=0,y=0;
        if(button && tgcx_UnivButtonPosition(button,&x,&y) && x>=0 && x<4096 && y>=0 && y<4096) {
            if(x+32>right){right=x+32;row_y=y;}
        }
    }
    if(!right)return tgcx_UnivPlacementRefused(root,"Templates native folders/getter");
    int tx=0,ty=0;tgcx_UnivTabCell(right,row_y,&tx,&ty);
    float x=0,y=0;if(!tgcx_UnivRootPosition(root,&x,&y))return tgcx_UnivPlacementRefused(root,"Templates root screen chain");
    return tgcx_UnivEntry(root,tab,static_cast<int>(x)+tx,static_cast<int>(y)+ty,promote);
}
static bool tgcx_UnivCfTab(uintptr_t root,uintptr_t tab) {
    uintptr_t icon=tgcx_BillFind(root,17,0x5E4D40,"unitattrition_icon");
    if(!icon)return tgcx_UnivPlacementRefused(root,"Conform attrition icon lookup");
    // CIcon slot 15 copies its packed definition position from +0xBC.
    auto* table=*reinterpret_cast<uintptr_t**>(icon);
    if(table[15]!=tgcx_base+0x246620)return tgcx_UnivPlacementRefused(root,"Conform attrition position getter");
    uint32_t packed=0;typedef void(__fastcall* Get)(uintptr_t,void*,uint32_t*);
    reinterpret_cast<Get>(table[15])(icon,nullptr,&packed);
    float x=0,y=0;if(!tgcx_UnivRootPosition(root,&x,&y))return tgcx_UnivPlacementRefused(root,"Conform root screen chain");
    return tgcx_UnivEntry(root,tab,static_cast<int>(x)+static_cast<int16_t>(packed)-23,
        static_cast<int>(y)+static_cast<int16_t>(packed>>16));
}
static void tgcx_UnivIcon(uintptr_t parent,const char* window_name,const char* sprite_name,unsigned kind,bool show) {
    uintptr_t window=tgcx_BillFind(parent,27,0x5E4A20,window_name);if(!window)return;
    tgcx_TplVisible(window,show);if(!show || kind>=tgcx_tpl_kinds)return;
    uintptr_t icon=tgcx_BillFind(window,17,0x5E4D40,sprite_name);if(!icon)return;
    auto* table=*reinterpret_cast<uintptr_t**>(icon);if(table[18]!=tgcx_base+0x5C4410)return;
    typedef void(__fastcall* Frame)(uintptr_t,void*,unsigned);
    reinterpret_cast<Frame>(table[18])(icon,nullptr,tgcx_univ_icons[kind]);
}
