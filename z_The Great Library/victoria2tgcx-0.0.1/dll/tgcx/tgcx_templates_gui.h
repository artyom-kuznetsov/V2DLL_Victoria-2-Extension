// TPL-0 native Templates panel. Only GUI state and a local preference file
// are written directly. Recruit sends guarded CConstructUnitCommand objects.
#pragma once
#include "tgcx_templates.h"
#include "tgcx_templates_store.h"

struct tgcx_TplPanel {
    uintptr_t view,root,window,tab;DWORD thread,tick,cooldown;
    bool open,disabled,bound[TGCX_TPL_BUTTONS];unsigned selected,list_page,unit_page;
    unsigned char glue[TGCX_TPL_BUTTONS][44];
    char text[TGCX_TPL_TEXTS][192],status[192];
    bool text_set[TGCX_TPL_TEXTS];
    unsigned char shown[tgcx_tpl_capacity*21+64];
};
static tgcx_TplPanel tgcx_tpl_panels[8]={};
static uintptr_t tgcx_tpl_update_original=0,tgcx_tpl_destroy_original=0;
static bool tgcx_tpl_gui_enabled=false;

static void tgcx_TplVisible(uintptr_t object,bool show) {
    if(!object)return;auto* vt=*reinterpret_cast<uintptr_t**>(object);
    // Independent Universal roots never receive their host's recursive Show.
    // Primary slot 8 only exposes the root renderer; the CGui subobject's
    // Show activates buttons/icons/child windows too. Do this on transition
    // only: repeating it every poll would reset intentionally hidden covers.
    if(tgcx_army_universal && show && !*reinterpret_cast<unsigned char*>(object+0x67)) {
        uintptr_t gui=object+0x18;auto* secondary=*reinterpret_cast<uintptr_t**>(gui);
        if(!secondary || secondary[13]!=tgcx_base+0x5E4490) {
            tgcx_Log("Universal Army: subtree Show refused object=%08X",object);return;
        }
        reinterpret_cast<tgcx_GuiZero>(secondary[13])(gui,nullptr);return;
    }
    unsigned slot=show?8:9;
    if(vt[slot]==tgcx_base+(show?0x5E4450:0x5E4030))reinterpret_cast<tgcx_GuiZero>(vt[slot])(object,nullptr);
}
static void tgcx_TplTextNative(uintptr_t host,const char* name,const char* text) {
    uintptr_t box=tgcx_BillFind(host,15,0x5E4D00,name);if(!box)return;
    tgcx_GameString str=tgcx_BorrowString(text);
    typedef void(__fastcall* Assign)(uintptr_t,void*,const void*,unsigned,unsigned);
    reinterpret_cast<Assign>(tgcx_base+0x8ED0)(box+0xDC,nullptr,&str,0,0xFFFFFFFFu);
    uintptr_t inner=*reinterpret_cast<uintptr_t*>(box+0xA0);if(!inner)return;
    uintptr_t fn=tgcx_base+0x65ECC0;const void* arg=&str;
    __asm { push esi } __asm { push 0 } __asm { push arg } __asm { mov esi,inner } __asm { call fn } __asm { pop esi }
}
static void tgcx_TplText(tgcx_TplPanel* p,unsigned id,const char* format,...) {
    char text[192];va_list args;va_start(args,format);_vsnprintf_s(text,sizeof(text),_TRUNCATE,format,args);va_end(args);
    if(p->text_set[id] && !strcmp(p->text[id],text))return;
    strncpy_s(p->text[id],text,_TRUNCATE);p->text_set[id]=true;
    tgcx_TplTextNative(p->window,tgcx_tpl_text_names[id],text);
}
// An inner matrix (+0x84, -0x88) is relative to its owner (+0xE4). The large
// build root is a child of the Military window, so its screen position is
// the sum along the owner chain up to the renderer's scene (+0x6B9E0), whose
// direct children are in screen pixels (P40). Refuse any other topology.
static bool tgcx_TplRootScreen(uintptr_t inner,uintptr_t scene,float* x,float* y,unsigned* depth) {
    float sx=0,sy=0;
    for(unsigned level=0;level<8;++level) {
        uintptr_t vt=*reinterpret_cast<uintptr_t*>(inner);
        if(vt<tgcx_base || vt>=tgcx_base+tgcx_image_size)return false;
        sx+=*reinterpret_cast<float*>(inner+0x84);sy-=*reinterpret_cast<float*>(inner+0x88);
        uintptr_t owner=*reinterpret_cast<uintptr_t*>(inner+0xE4);
        if(owner==scene) {*x=sx;*y=sy;*depth=level+1;return true;}
        if(!owner)return false;inner=owner;
    }
    return false;
}
#include "tgcx_army_universal.h"

// Foreground promotion is the same confirmed native path as the Bill (P37).
// Anchor to the build view's screen position, so the native right queue stays
// where the engine placed it. Promotion happens only on opening.
static bool tgcx_TplPlace(tgcx_TplPanel* p,bool promote) {
    auto* vt=*reinterpret_cast<uintptr_t**>(p->window);
    if(vt[11]!=tgcx_base+0x5E2FC0 || vt[6]!=tgcx_base+0x5E3BA0)return false;
    uintptr_t inner=*reinterpret_cast<uintptr_t*>(p->root+0x494);
    uintptr_t renderer=*reinterpret_cast<uintptr_t*>(p->root+0x90);
    if(!inner || !renderer || *reinterpret_cast<uintptr_t*>(inner)!=tgcx_base+0xA38350)return false;
    float x=0,y=0;unsigned depth=0;
    if(!tgcx_TplRootScreen(inner,renderer+0x6B9E0,&x,&y,&depth))return false;
    if(promote)tgcx_Log("Templates anchor: root local %.0f,%.0f, screen %.0f,%.0f through %u owner levels",
        *reinterpret_cast<float*>(inner+0x84),-*reinterpret_cast<float*>(inner+0x88),x,y,depth);
    x+=5;y+=69;
    int width=*reinterpret_cast<int*>(renderer+0x6B9BC),height=*reinterpret_cast<int*>(renderer+0x6B9C0);
    if(!(x>=0 && y>=64 && x+652<=width && y+528<=height))return false;
    if(promote)reinterpret_cast<tgcx_GuiZero>(vt[11])(p->window,nullptr);
    uint32_t position=static_cast<uint16_t>(x)|(static_cast<uint32_t>(static_cast<uint16_t>(y))<<16);
    typedef void(__fastcall* Position)(uintptr_t,void*,uint32_t);
    reinterpret_cast<Position>(vt[6])(p->window,nullptr,position);return true;
}
static bool tgcx_TplPanelLive(const tgcx_TplPanel* p) {
    if(!p->view || *reinterpret_cast<uintptr_t*>(p->view)!=tgcx_base+0xA12A14 || !p->root ||
       *reinterpret_cast<uintptr_t*>(p->view+0x60)!=p->root)return false;
    if(!*reinterpret_cast<unsigned char*>(p->root+0x67) || !*reinterpret_cast<unsigned char*>(p->view+0x78) ||
       *reinterpret_cast<unsigned char*>(p->view+0x5C))return false;
    return true;
}
// Child windows only: buttons have another class and the guarded window
// show/hide refuses them. Each window's last state is cached so a tick
// does no lookup unless something changed; rebinding or showing the panel
// clears the cache.
static void tgcx_TplShow(tgcx_TplPanel* p,unsigned id,const char* key,bool show) {
    unsigned char want=show?1:2;
    if(id<sizeof(p->shown) && p->shown[id]==want)return;
    uintptr_t window=tgcx_BillFind(p->window,27,0x5E4A20,key);if(!window)return;
    tgcx_TplVisible(window,show);if(id<sizeof(p->shown))p->shown[id]=want;
}
// Board 5: the leading icon is the largest group (first on a tie); the
// miniatures list the non-empty groups in catalogue order, as many as fit.
static unsigned tgcx_TplMinis(const tgcx_TplComposition& c,unsigned* leading,unsigned mini[4]) {
    unsigned n=0;*leading=tgcx_tpl_kinds;
    for(unsigned u=0;u<tgcx_tpl_kinds;++u) {
        if(!c.count[u])continue;
        if(*leading==tgcx_tpl_kinds || c.count[u]>c.count[*leading])*leading=u;
        if(n<4)mini[n++]=u;
    }
    return n;
}
enum {TGCX_TPL_SHOW_SEL=0,TGCX_TPL_SHOW_BLANK=4,TGCX_TPL_SHOW_PAGER=8,TGCX_TPL_SHOW_PAGES=9,
    TGCX_TPL_SHOW_ICON=TGCX_TPL_SHOW_PAGES+(tgcx_tpl_capacity+7)/8,TGCX_TPL_SHOW_MINI=TGCX_TPL_SHOW_ICON+4*tgcx_tpl_capacity,
    TGCX_TPL_SHOW_END=TGCX_TPL_SHOW_MINI+4*4*tgcx_tpl_capacity};
static void tgcx_TplLabels(tgcx_TplPanel* p) {
    static_assert(TGCX_TPL_SHOW_END<=sizeof(p->shown),"Templates visibility cache");
    unsigned pages=(std::max)(1u,(tgcx_tpl_library.size+3)/4);
    p->list_page%=pages;
    char key[128];
    for(unsigned row=0;row<4;++row) {
        unsigned s=p->list_page*4+row;bool used=s<tgcx_tpl_library.size;
        sprintf_s(key,"tgcx_tpl_slot_sel_%u",row);tgcx_TplShow(p,TGCX_TPL_SHOW_SEL+row,key,used && s==p->selected);
        sprintf_s(key,"tgcx_tpl_slot_blank_%u",row);tgcx_TplShow(p,TGCX_TPL_SHOW_BLANK+row,key,!used);
        const unsigned text=TGCX_TPL_TEXT_SLOT_0+row*(TGCX_TPL_TEXT_SLOT_1-TGCX_TPL_TEXT_SLOT_0);
        char name[160]={};if(used)tgcx_TplName(tgcx_tpl_library.item[s],name,sizeof(name));
        tgcx_TplText(p,text,"%s",name);
        const auto& c=tgcx_tpl_library.item[used?s:0];unsigned total=tgcx_TplTotal(c);
        tgcx_TplText(p,text+1,used?"%u %s":"",total,total==1?"regiment":"regiments");
        tgcx_TplText(p,text+2,used?"%d Days":"",tgcx_TplBaseDays(c));
        unsigned leading=tgcx_tpl_kinds,mini[4]={},minis=0;
        if(used)minis=tgcx_TplMinis(c,&leading,mini);
        for(unsigned k=0;k<4;++k)tgcx_TplText(p,text+3+k,k<minis?"\xD7%d":"",k<minis?c.count[mini[k]]:0);
        if(tgcx_army_universal) {
            char sprite[96];sprintf_s(key,"tgcx_tpl_slot_icon_%u_unit",row);sprintf_s(sprite,"tgcx_tpl_slot_sprite_%u_unit",row);
            tgcx_UnivIcon(p->window,key,sprite,leading,leading<tgcx_tpl_kinds);
            for(unsigned k=0;k<4;++k) {
                sprintf_s(key,"tgcx_tpl_mini_%u_%u_unit",row,k);sprintf_s(sprite,"tgcx_tpl_mini_sprite_%u_%u_unit",row,k);
                tgcx_UnivIcon(p->window,key,sprite,mini[k],k<minis);
            }
        } else for(unsigned u=0;u<tgcx_tpl_kinds;++u) {
            sprintf_s(key,"tgcx_tpl_slot_icon_%u_%s",row,tgcx_tpl_catalog[u].key);
            tgcx_TplShow(p,TGCX_TPL_SHOW_ICON+row*tgcx_tpl_kinds+u,key,u==leading);
            for(unsigned k=0;k<4;++k) {
                sprintf_s(key,"tgcx_tpl_mini_%u_%u_%s",row,k,tgcx_tpl_catalog[u].key);
                tgcx_TplShow(p,TGCX_TPL_SHOW_MINI+(row*4+k)*tgcx_tpl_kinds+u,key,k<minis && mini[k]==u);
            }
        }
    }
    tgcx_TplShow(p,TGCX_TPL_SHOW_PAGER,"tgcx_tpl_pager_blank",pages==1);
    tgcx_TplText(p,TGCX_TPL_TEXT_LIST_PAGE,pages>1?"%u / %u":"",p->list_page+1,pages);
    bool selected=p->selected<tgcx_tpl_library.size;
    const auto& c=tgcx_tpl_library.item[selected?p->selected:0];
    char name[160]={};if(selected)tgcx_TplName(c,name,sizeof(name));
    tgcx_TplText(p,TGCX_TPL_TEXT_EDITOR,selected?"%s: composition":"Create a new template",name);
    tgcx_TplText(p,TGCX_TPL_TEXT_UNIT_PAGE,"%u/%u",p->unit_page+1,(tgcx_tpl_kinds+7)/8);
    for(unsigned r=0;r<8;++r) {
        unsigned u=p->unit_page*8+r;bool shown=u<tgcx_tpl_kinds;
        tgcx_TplText(p,TGCX_TPL_TEXT_UNIT_0+r*3,"%s",shown?tgcx_tpl_catalog[u].label:"");
        tgcx_TplText(p,TGCX_TPL_TEXT_DAYS_0+r*3,shown?"%d Days":"",shown?tgcx_tpl_catalog[u].days:0);
        tgcx_TplText(p,TGCX_TPL_TEXT_COUNT_0+r*3,shown && selected?"%d":"",shown?c.count[u]:0);
        if(tgcx_army_universal) {
            char sprite[80];sprintf_s(key,"tgcx_tpl_edit_icon_%u",r);sprintf_s(sprite,"tgcx_tpl_edit_sprite_%u",r);
            tgcx_UnivIcon(p->window,key,sprite,u,shown);
        }
    }
    for(unsigned page=0;!tgcx_army_universal && page<(tgcx_tpl_kinds+7)/8;++page) {
        sprintf_s(key,"tgcx_tpl_icons_%u",page);tgcx_TplShow(p,TGCX_TPL_SHOW_PAGES+page,key,page==p->unit_page);
    }
    unsigned total=selected?tgcx_TplTotal(c):0;
    if(total)tgcx_TplText(p,TGCX_TPL_TEXT_SUMMARY,"%u %s, %u,000 men, ready in %d days",total,total==1?"regiment":"regiments",total*3,tgcx_TplBaseDays(c));
    else tgcx_TplText(p,TGCX_TPL_TEXT_SUMMARY,"%s",selected?"Add regiments to the composition":"Select or create a template");
    tgcx_TplText(p,TGCX_TPL_TEXT_STATUS,"%s",!tgcx_tpl_storage_ok?"Local template file unavailable or invalid; existing file preserved.":
        p->status[0]?p->status:"One build order per regiment, from provinces with free soldier pops.");
    tgcx_TplText(p,TGCX_TPL_TEXT_RECRUIT,"Recruit Template");
    tgcx_TplText(p,TGCX_TPL_TEXT_TITLE,"Build Army: Templates");
}
static void tgcx_TplClickImpl(tgcx_TplPanel* p,unsigned action) {
    if(!tgcx_tpl_gui_enabled || !p || GetCurrentThreadId()!=p->thread || action>=TGCX_TPL_BUTTONS)return;
    __try {
        if(!tgcx_TplPanelLive(p))return;
        // Board 5 has no close button: another native folder closes the panel.
        if(action>=TGCX_TPL_NATIVE_17) {p->open=false;tgcx_TplVisible(p->window,false);return;}
        if(action==TGCX_TPL_OPEN) {
            static tgcx_TplCountry current;
            if(!tgcx_TplScan(tgcx_TplLiveGlobals(),tgcx_tpl_native,&current) || !tgcx_TplCatalogueFits(current)) {
                tgcx_Log("Templates: package catalogue does not match active land units; regenerate Army for this base");return;
            }
            tgcx_TplLoadLibrary();
            // Showing a window re-shows its whole subtree (icons, covers,
            // ring), so the cached child states are stale from here (P42).
            if(tgcx_TplPlace(p,!p->open)) {
                p->open=true;tgcx_TplVisible(p->window,true);memset(p->shown,0,sizeof(p->shown));p->tick=0;
                if(tgcx_army_universal)tgcx_UnivTplTab(p->root,p->tab,true);
            }
            else tgcx_Log("Templates panel does not fit the native build-view position");
            return;
        }
        if(!p->open)return;
        p->tick=0;
        if(action>=TGCX_TPL_SLOT_0 && action<=TGCX_TPL_SLOT_3) {
            unsigned s=p->list_page*4+action-TGCX_TPL_SLOT_0;if(s<tgcx_tpl_library.size)p->selected=s;p->status[0]=0;return;
        }
        if(action==TGCX_TPL_LIST_PREV || action==TGCX_TPL_LIST_NEXT) {
            unsigned pages=(std::max)(1u,(tgcx_tpl_library.size+3)/4);
            p->list_page=(p->list_page+(action==TGCX_TPL_LIST_NEXT?1:pages-1))%pages;return;
        }
        if(action==TGCX_TPL_UNIT_PREV || action==TGCX_TPL_UNIT_NEXT) {unsigned pages=(tgcx_tpl_kinds+7)/8;p->unit_page=(p->unit_page+(action==TGCX_TPL_UNIT_NEXT?1:pages-1))%pages;return;}
        if(action==TGCX_TPL_RECRUIT) {
            if(p->selected>=tgcx_tpl_library.size || !tgcx_TplTotal(tgcx_tpl_library.item[p->selected]))return;
            // Do not issue another plan against stale pop capacity while the
            // first batch is still paused in the engine queue. Release only
            // after game time advances, for every panel and country.
            static uintptr_t sent_world=0;static uint32_t sent_date=0;static bool pending=false;
            auto g=tgcx_TplLiveGlobals();if(!g.world)return;
            uint32_t date=*reinterpret_cast<uint32_t*>(g.world+0xB0C);
            if(pending && g.world==sent_world && date==sent_date) {
                strcpy_s(p->status,"Unpause once before recruiting another template.");return;
            }
            static tgcx_TplCountry country;
            if(!tgcx_TplScan(g,tgcx_tpl_native,&country)) {strcpy_s(p->status,"Cannot read the player's recruitable units.");return;}
            if(!tgcx_TplCatalogueFits(country)) {strcpy_s(p->status,"Unit catalogue changed; regenerate Army for this base.");return;}
            int counts[tgcx_tpl_units]={};unsigned unknown=0;
            for(unsigned k=0;k<tgcx_tpl_kinds;++k) {
                int u=tgcx_TplUnitByName(country,tgcx_tpl_catalog[k].key),n=tgcx_tpl_library.item[p->selected].count[k];
                if(u>=0)counts[u]=n;else unknown+=n;
            }
            auto result=tgcx_TplRecruit(counts);
            if(result.queued) {pending=true;sent_world=g.world;sent_date=date;}
            sprintf_s(p->status,"%u orders queued; %u left out. Unpause to process them.",result.queued,result.missing+unknown);
            return;
        }
        tgcx_TplLibrary next=tgcx_tpl_library;unsigned selected=p->selected;
        if(!tgcx_tpl_storage_ok)return;
        if(action==TGCX_TPL_NEW) {
            if(next.size>=tgcx_tpl_slots) {strcpy_s(p->status,"All 12 template slots are in use.");return;}
            selected=next.size++;next.item[selected]={};
        } else if(action==TGCX_TPL_DELETE) {
            if(selected>=next.size)return;
            for(unsigned i=selected+1;i<next.size;++i)next.item[i-1]=next.item[i];
            next.item[--next.size]={};selected=next.size?(std::min)(selected,next.size-1):0;
        } else if(action>=TGCX_TPL_MINUS_0 && action<=TGCX_TPL_PLUS_7) {
            if(selected>=next.size)return;
            unsigned u=p->unit_page*8+(action-TGCX_TPL_MINUS_0)/2;if(u>=tgcx_tpl_kinds)return;
            bool add=(action-TGCX_TPL_MINUS_0)%2!=0;
            if(add && tgcx_TplTotal(next.item[selected])>=128) {strcpy_s(p->status,"A template may contain at most 128 regiments.");return;}
            // TPL-3: Ctrl-click changes 5 regiments, Alt-click 2 (Ctrl wins), within the 128 cap.
            int step=GetKeyState(VK_CONTROL)<0?5:GetKeyState(VK_MENU)<0?2:1;
            if(add)step=(std::min)(step,static_cast<int>(128-tgcx_TplTotal(next.item[selected])));
            int& value=next.item[selected].count[u];value=(std::max)(0,value+(add?step:-step));
        } else return;
        if(tgcx_TplCommit(next)) {p->selected=selected;p->list_page=selected/4;strcpy_s(p->status,"Template saved locally.");}
        else strcpy_s(p->status,"Could not save the template; the previous composition was kept.");
    } __except(EXCEPTION_EXECUTE_HANDLER) {tgcx_Log("Templates click rejected: guarded native read fault");}
}
static void __cdecl tgcx_TplClick(tgcx_TplPanel* p,unsigned action) {tgcx_CpuScope cpu;tgcx_TplClickImpl(p,action);}
// from V2DLL: V2TechButton.cpp, native observer thunk pattern; extended CPU
// preservation. The native trampoline passes our panel pointer in ECX.
#define TGCX_TPL_THUNK(n) \
__declspec(naked) static void tgcx_TplThunk##n() { \
    __asm { pushfd } __asm { pushad } __asm { mov ebx,esp } \
    __asm { sub esp,528 } __asm { and esp,-16 } __asm { fxsave [esp] } \
    __asm { cld } __asm { push n } __asm { push ecx } __asm { call tgcx_TplClick } __asm { add esp,8 } \
    __asm { fxrstor [esp] } __asm { mov esp,ebx } __asm { popad } __asm { popfd } __asm { ret } \
}
TGCX_TPL_THUNKS(TGCX_TPL_THUNK)
#undef TGCX_TPL_THUNK
#define TGCX_TPL_POINTER(n) tgcx_TplThunk##n,
static void(*const tgcx_tpl_thunks[])()={TGCX_TPL_THUNKS(TGCX_TPL_POINTER)};
#undef TGCX_TPL_POINTER
static void tgcx_TplBind(tgcx_TplPanel* p,unsigned action) {
    if(p->bound[action])return;
    // Lookups are flat: the open button lives in the tab window.
    uintptr_t host=action==TGCX_TPL_OPEN?p->tab:action>=TGCX_TPL_NATIVE_17?p->root:p->window;if(!host)return;
    uintptr_t button=tgcx_BillFind(host,13,0x5E4C80,tgcx_tpl_button_names[action]);
    if(!button) {
        // Native folders are static children of this root. Do not repeat up
        // to 1024 absent-folder searches every 100ms on a small vanilla list.
        if(action>=TGCX_TPL_NATIVE_17)p->bound[action]=true;
        return;
    }
    uintptr_t observable=button+0x54;auto* vt=*reinterpret_cast<uintptr_t**>(observable);
    if(vt[1]<tgcx_base || vt[1]>=tgcx_base+tgcx_image_size)return;
    unsigned char* glue=p->glue[action];memset(glue,0,44);
    // from V2DLL: V2TechButton.cpp, 44-byte Politics observer. Its deletion
    // notification uses +0x20 (left zero); +4 is our stable panel, +8 callback.
    *reinterpret_cast<uintptr_t*>(glue)=tgcx_base+0xA0E48C;
    *reinterpret_cast<uintptr_t*>(glue+4)=reinterpret_cast<uintptr_t>(p);
    *reinterpret_cast<uintptr_t*>(glue+8)=reinterpret_cast<uintptr_t>(tgcx_tpl_thunks[action]);
    reinterpret_cast<tgcx_GuiOne>(vt[1])(observable,nullptr,glue);p->bound[action]=true;
}
static void __cdecl tgcx_TplCapture(uintptr_t view) {
    // Only record lifetime here: all GUI work runs after native updates, at
    // final presentation. No GUI/library allocation in DllMain.
    DWORD error=GetLastError();
    if(tgcx_tpl_gui_enabled) {
        tgcx_TplPanel* empty=nullptr;
        for(auto& p:tgcx_tpl_panels) {if(p.view==view){SetLastError(error);return;}if(!p.view && !empty)empty=&p;}
        if(empty) {empty->view=view;empty->thread=GetCurrentThreadId();}
    }
    SetLastError(error);
}
static void __cdecl tgcx_TplDestroy(uintptr_t view) {
    DWORD error=GetLastError();
    for(auto& p:tgcx_tpl_panels)if(p.view==view) {
        __try {tgcx_TplVisible(p.window,false);} __except(EXCEPTION_EXECUTE_HANDLER) {}
        tgcx_UnivRelease(p.window);tgcx_UnivRelease(p.tab);
        p.view=p.root=p.window=p.tab=0;p.open=p.disabled=false;memset(p.bound,0,sizeof(p.bound));memset(p.text_set,0,sizeof(p.text_set));memset(p.shown,0,sizeof(p.shown));
        // Keep observer memory/vtables valid until native GUI destruction.
    }
    SetLastError(error);
}
#define TGCX_TPL_VIEW_THUNK(name,callback,original) \
__declspec(naked) static void name() { \
    __asm { pushfd } __asm { pushad } __asm { mov ebx,esp } \
    __asm { sub esp,528 } __asm { and esp,-16 } __asm { fxsave [esp] } \
    __asm { cld } __asm { push ecx } __asm { call callback } __asm { add esp,4 } \
    __asm { fxrstor [esp] } __asm { mov esp,ebx } __asm { popad } __asm { popfd } \
    __asm { jmp dword ptr [original] } \
}
TGCX_TPL_VIEW_THUNK(tgcx_TplUpdateThunk,tgcx_TplCapture,tgcx_tpl_update_original)
TGCX_TPL_VIEW_THUNK(tgcx_TplDestroyThunk,tgcx_TplDestroy,tgcx_tpl_destroy_original)
#undef TGCX_TPL_VIEW_THUNK
static void tgcx_TplPanelTick(tgcx_TplPanel* p) {
    __try {
        // Build Navy shares the view and has more folders: no Templates tab.
        if(!tgcx_TplPanelLive(p)) {p->open=false;tgcx_TplVisible(p->window,false);tgcx_TplVisible(p->tab,false);return;}
        if(tgcx_army_universal && *reinterpret_cast<uintptr_t*>(p->view+0x6C)) {
            p->open=false;tgcx_TplVisible(p->window,false);tgcx_TplVisible(p->tab,false);return;
        }
        DWORD now=GetTickCount();if(p->tick && now-p->tick<100)return;p->tick=now;
        if(!p->window) {
            if(tgcx_army_universal) {
                if(!tgcx_UnivPair(p->root,"tgcx_tpl_window","tgcx_tpl_tab",p->window,p->tab))return;
            } else {
            // The province build view has no Templates tab. Lookup the
            // optional button first to avoid native missing-window warnings.
            if(!tgcx_BillFind(p->root,13,0x5E4C80,"tgcx_tpl_marker"))return;
            p->window=tgcx_BillFind(p->root,27,0x5E4A20,"tgcx_tpl_window");if(!p->window)return;
            p->tab=tgcx_BillFind(p->root,27,0x5E4A20,"tgcx_tpl_tab");
            tgcx_TplVisible(p->window,false);tgcx_Log("Templates native panel found view=%08X root=%08X tab=%d",p->view,p->root,p->tab!=0);
            }
        }
        if(tgcx_army_universal && !tgcx_UnivTplTab(p->root,p->tab)) {tgcx_TplVisible(p->tab,false);return;}
        // Re-shown each tick: showing the build root re-shows its subtree (P42).
        tgcx_TplVisible(p->tab,true);
        for(unsigned b=0;b<TGCX_TPL_BUTTONS;++b)tgcx_TplBind(p,b);
        if(p->open) {
            if(!tgcx_TplPlace(p,false)){p->open=false;tgcx_TplVisible(p->window,false);return;}
            tgcx_TplLabels(p);
        }
    } __except(EXCEPTION_EXECUTE_HANDLER) {
        p->open=false;__try{tgcx_TplVisible(p->window,false);}__except(EXCEPTION_EXECUTE_HANDLER){}
        tgcx_Log("Templates panel disabled after guarded GUI read fault");p->disabled=true;
    }
}
static void tgcx_TplTick() {
    if(!tgcx_tpl_gui_enabled)return;
    for(auto& p:tgcx_tpl_panels)if(p.view && !p.disabled) {
        __try {
            // P47: destroyed outside the hook; its GUI went with it, free the slot.
            if(*reinterpret_cast<uintptr_t*>(p.view)!=tgcx_base+0xA12A14) {
                tgcx_UnivRelease(p.window);tgcx_UnivRelease(p.tab);
                p.view=p.root=p.window=p.tab=0;p.open=false;memset(p.bound,0,sizeof(p.bound));memset(p.text_set,0,sizeof(p.text_set));memset(p.shown,0,sizeof(p.shown));
                tgcx_Log("Templates: build view gone without its destructor; slot freed");continue;
            }
            uintptr_t root=*reinterpret_cast<uintptr_t*>(p.view+0x60);
            if(root!=p.root) {
                tgcx_UnivRelease(p.window);tgcx_UnivRelease(p.tab);
                tgcx_TplVisible(p.window,false);tgcx_TplVisible(p.tab,false);p.root=root;p.window=p.tab=0;p.open=false;
                memset(p.bound,0,sizeof(p.bound));memset(p.text_set,0,sizeof(p.text_set));memset(p.shown,0,sizeof(p.shown));
            }
        } __except(EXCEPTION_EXECUTE_HANDLER) {p.disabled=true;continue;}
        tgcx_TplPanelTick(&p);
    }
}
static const uint32_t tgcx_tpl_gui_rvas[]={0xA12A14,0x334E24,0x333C0C,0x3374D3,0xA0E48C,0x5E4C80,0x5E4A20,0x5E4D00,
        0x8ED0,0x65ECC0,0x5E4450,0x5E4030,0x5E2FC0,0x5E3BA0,0xA383C4,0xA383D0,0xA3841C};
static void tgcx_InstallTemplatesGui() {
    if(!tgcx_RequireSignatures(tgcx_tpl_gui_rvas,_countof(tgcx_tpl_gui_rvas))) {tgcx_Log("Templates GUI rejected: guards");return;}
    tgcx_InstallTemplates();if(!tgcx_templates_installed)return;
    tgcx_tpl_update_original=tgcx_base+0x334E00;tgcx_tpl_destroy_original=tgcx_base+0x3340E0;
    auto* table=reinterpret_cast<uintptr_t*>(tgcx_base+0xA12A14);
    if(!tgcx_ReplacePointer(table,tgcx_tpl_destroy_original,reinterpret_cast<uintptr_t>(tgcx_TplDestroyThunk)))return;
    if(!tgcx_ReplacePointer(table+1,tgcx_tpl_update_original,reinterpret_cast<uintptr_t>(tgcx_TplUpdateThunk))) {
        tgcx_ReplacePointer(table,reinterpret_cast<uintptr_t>(tgcx_TplDestroyThunk),tgcx_tpl_destroy_original);return;
    }
    tgcx_tpl_gui_enabled=true;tgcx_Log("Templates GUI hooks installed: native build-view update/destructor; engine commands only");
}
