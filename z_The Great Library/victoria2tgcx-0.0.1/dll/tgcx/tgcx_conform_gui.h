// TPL-1 Conform window (board 6-conform; D12, D13), route B: native GUI from
// tools/tgcx_conform_gui.py, placed beside the unit panel. Only GUI state is
// written directly; Conform itself is tgcx_CfConformWith (engine commands).
#pragma once
#include "tgcx_conform_layout.h"

// ---------------------------------------------------------------- the Changes list (pure)

// One row of board 6's Changes: built (green), not buildable now (yellow),
// a finished regiment brought from nearby (green), or detached (red).
enum tgcx_CfRowKind { TGCX_CF_ROW_BUILD,TGCX_CF_ROW_SHORT,TGCX_CF_ROW_GATHER,TGCX_CF_ROW_DETACH };
struct tgcx_CfRow { tgcx_CfRowKind kind;int unit;unsigned count; };
struct tgcx_CfRows {
    unsigned count,more;tgcx_CfRow row[tgcx_cf_changes];
    unsigned build,shortfall,gather,detach;   // regiments, every row counted
};
// placed[unit]: how many of plan.build TPL-0's recruit planner can place now.
// Rows are grouped by unit and kind; additions in unit order, then detaches,
// as on the board. Rows past the list's length are counted in more.
static void tgcx_CfRowsOf(const tgcx_CfPlan& plan,const int* placed,tgcx_CfRows* out) {
    memset(out,0,sizeof(*out));
    auto add=[&](tgcx_CfRowKind kind,int unit,unsigned n) {
        if(!n)return;
        if(out->count<tgcx_cf_changes)out->row[out->count++]={kind,unit,n};else ++out->more;
    };
    unsigned gathered[tgcx_tpl_units]={},detached[tgcx_tpl_units]={};
    for(unsigned i=0;i<plan.gather_count;++i)if(plan.gather[i].unit>=0 && plan.gather[i].unit<static_cast<int>(tgcx_tpl_units))++gathered[plan.gather[i].unit];
    for(unsigned i=0;i<plan.detach_count;++i)if(plan.detach[i].unit>=0 && plan.detach[i].unit<static_cast<int>(tgcx_tpl_units))++detached[plan.detach[i].unit];
    for(unsigned u=0;u<tgcx_tpl_units;++u) {
        int want=plan.build[u]>0?plan.build[u]:0,fit=(std::min)(want,(std::max)(0,placed?placed[u]:0));
        add(TGCX_CF_ROW_BUILD,static_cast<int>(u),fit);add(TGCX_CF_ROW_SHORT,static_cast<int>(u),want-fit);
        add(TGCX_CF_ROW_GATHER,static_cast<int>(u),gathered[u]);
        out->build+=fit;out->shortfall+=want-fit;out->gather+=gathered[u];
    }
    for(unsigned u=0;u<tgcx_tpl_units;++u) { add(TGCX_CF_ROW_DETACH,static_cast<int>(u),detached[u]);out->detach+=detached[u]; }
}

// ---------------------------------------------------------------- the window

struct tgcx_CfPanel {
    uintptr_t view,root,window,tab;DWORD thread,tick;
    bool open,disabled,land,bound[TGCX_CF_BUTTONS];
    uintptr_t seen;                       // the stack the unit panel showed last tick
    tgcx_CfId stack;uintptr_t vtable;     // the stack being conformed, found again by id
    unsigned selected,list_page;uint32_t preview_date;
    bool planned;tgcx_CfRefusal refusal;tgcx_CfRows rows;int kind[tgcx_tpl_units];   // unit index -> catalogue kind
    unsigned char glue[TGCX_CF_BUTTONS][44];
    char text[TGCX_CF_TEXTS][192],summary[192],status[192];bool text_set[TGCX_CF_TEXTS];
    unsigned char shown[tgcx_tpl_capacity*28+64];
};
static tgcx_CfPanel tgcx_cf_panels[_countof(tgcx_cf_views)]={};

// A view may retain a just-merged stack. Check its small identity under SEH,
// then the registry, before reading ownership or calling a virtual method.
static uintptr_t tgcx_CfShownStack(const tgcx_CfGlobals& g,uintptr_t stack) {
    __try {
        if(stack && tgcx_CfLookup(g,tgcx_CfStackId(stack))==stack+8)return stack;
    } __except(EXCEPTION_EXECUTE_HANDLER) {}
    return 0;
}

enum {TGCX_CF_SHOW_SEL=0,TGCX_CF_SHOW_BLANK=4,TGCX_CF_SHOW_PAGER=8,TGCX_CF_SHOW_ROW=9,
    TGCX_CF_SHOW_ICON=TGCX_CF_SHOW_ROW+tgcx_cf_changes,TGCX_CF_SHOW_MINI=TGCX_CF_SHOW_ICON+tgcx_cf_slots*tgcx_tpl_capacity,
    TGCX_CF_SHOW_CHANGE=TGCX_CF_SHOW_MINI+tgcx_cf_slots*tgcx_cf_minis*tgcx_tpl_capacity,
    TGCX_CF_SHOW_END=TGCX_CF_SHOW_CHANGE+tgcx_cf_changes*tgcx_tpl_capacity};

static void tgcx_CfText(tgcx_CfPanel* p,unsigned id,const char* format,...) {
    char text[192];va_list args;va_start(args,format);_vsnprintf_s(text,sizeof(text),_TRUNCATE,format,args);va_end(args);
    if(p->text_set[id] && !strcmp(p->text[id],text))return;
    strncpy_s(p->text[id],text,_TRUNCATE);p->text_set[id]=true;
    tgcx_TplTextNative(p->window,tgcx_cf_text_names[id],text);
}
// Child windows only, each one's last state cached; showing the window
// clears the cache (P42).
static void tgcx_CfShow(tgcx_CfPanel* p,unsigned id,const char* key,bool show) {
    unsigned char want=show?1:2;
    if(id<sizeof(p->shown) && p->shown[id]==want)return;
    uintptr_t window=tgcx_BillFind(p->window,27,0x5E4A20,key);if(!window)return;
    tgcx_TplVisible(window,show);if(id<sizeof(p->shown))p->shown[id]=want;
}
static void tgcx_CfClose(tgcx_CfPanel* p) { p->open=false;if(p->window)tgcx_TplVisible(p->window,false); }

// Beside the unit panel (its Select button ends at x=435), inside the screen.
// The owner chain and the native setters are TPL-0's (P37, P40).
static bool tgcx_CfPlace(tgcx_CfPanel* p,bool promote) {
    auto* vt=*reinterpret_cast<uintptr_t**>(p->window);
    if(vt[11]!=tgcx_base+0x5E2FC0 || vt[6]!=tgcx_base+0x5E3BA0)return false;
    uintptr_t inner=*reinterpret_cast<uintptr_t*>(p->root+0x494);
    uintptr_t renderer=*reinterpret_cast<uintptr_t*>(p->root+0x90);
    if(!inner || !renderer || *reinterpret_cast<uintptr_t*>(inner)!=tgcx_base+0xA38350)return false;
    float x=0,y=0;unsigned depth=0;
    if(!tgcx_TplRootScreen(inner,renderer+0x6B9E0,&x,&y,&depth))return false;
    int width=*reinterpret_cast<int*>(renderer+0x6B9BC),height=*reinterpret_cast<int*>(renderer+0x6B9C0);
    if(width<tgcx_cf_width || height<tgcx_cf_height)return false;
    if(promote)tgcx_Log("Conform anchor: unit panel screen %.0f,%.0f through %u owner levels, screen %dx%d",x,y,depth,width,height);
    x+=331;y+=26;
    if(x+tgcx_cf_width>width)x=static_cast<float>(width-tgcx_cf_width);
    if(y+tgcx_cf_height>height)y=static_cast<float>(height-tgcx_cf_height);
    if(x<0)x=0;if(y<0)y=0;
    if(promote)reinterpret_cast<tgcx_GuiZero>(vt[11])(p->window,nullptr);
    uint32_t position=static_cast<uint16_t>(x)|(static_cast<uint32_t>(static_cast<uint16_t>(y))<<16);
    typedef void(__fastcall* Position)(uintptr_t,void*,uint32_t);
    reinterpret_cast<Position>(vt[6])(p->window,nullptr,position);return true;
}
static bool tgcx_CfPanelLive(const tgcx_CfPanel* p) {
    if(!p->view || *reinterpret_cast<uintptr_t*>(p->view)!=tgcx_base+tgcx_cf_view_vt_rva || !p->root ||
       *reinterpret_cast<uintptr_t*>(p->view+0x20)!=p->root)return false;
    return *reinterpret_cast<unsigned char*>(p->root+0x67)!=0;
}
// The conformed stack, found again by id each time (never a kept pointer).
static uintptr_t tgcx_CfTarget(const tgcx_CfGlobals& g,const tgcx_CfPanel* p) {
    return p->vtable?tgcx_CfStackOf(g,p->stack,p->vtable):0;
}
// The selected template as want[unit index], for this country's unit types.
static void tgcx_CfWant(const tgcx_CfPanel* p,const tgcx_TplCountry& country,int* want,int* kind) {
    memset(want,0,sizeof(int)*tgcx_tpl_units);
    for(unsigned u=0;u<tgcx_tpl_units;++u)kind[u]=-1;
    for(unsigned k=0;k<tgcx_tpl_kinds;++k) {
        int u=tgcx_TplUnitByName(country,tgcx_tpl_catalog[k].key);if(u<0)continue;
        kind[u]=static_cast<int>(k);
        if(p->selected<tgcx_tpl_library.size)want[u]=tgcx_tpl_library.item[p->selected].count[k];
    }
}
// The preview: the plan Conform would carry out now, and how many of its
// builds TPL-0's recruit planner can place on free soldier pops.
static void tgcx_CfPreview(tgcx_CfPanel* p) {
    static tgcx_TplCountry country;static tgcx_CfPlan plan;static tgcx_CfStack target;static tgcx_TplPop pops[tgcx_tpl_pops];
    static tgcx_TplPlan builds;
    p->planned=false;p->summary[0]=0;memset(&p->rows,0,sizeof(p->rows));
    auto g=tgcx_CfLiveGlobals();
    p->preview_date=g.world?tgcx_TplRead<uint32_t>(g.world+0xB0C):0;
    if(p->selected>=tgcx_tpl_library.size) {
        strcpy_s(p->summary,tgcx_tpl_library.size?"Select a template.":"No templates yet: create one in Build Army, Templates.");return;
    }
    if(!tgcx_TplScan(tgcx_TplLiveGlobals(),tgcx_tpl_native,&country)) { strcpy_s(p->summary,"Cannot read the player's unit types.");return; }
    if(!tgcx_TplCatalogueFits(country)) { strcpy_s(p->summary,"Unit catalogue changed; regenerate Army for this base.");return; }
    int want[tgcx_tpl_units];tgcx_CfWant(p,country,want,p->kind);
    uintptr_t stack=tgcx_CfTarget(g,p);
    if(!stack || !tgcx_CfPrepare(g,tgcx_cf_native,stack,country.unit,want,&plan,&target)) {
        strcpy_s(p->summary,"This army can no longer be read: select it again.");return;
    }
    p->refusal=plan.refusal;
    if(plan.refusal==TGCX_CF_MATCHES) { strcpy_s(p->summary,"This army already matches the template (counting regiments on their way).");return; }
    if(plan.refusal==TGCX_CF_NOTHING_KEPT) { strcpy_s(p->summary,"No regiment of this army is in the template: nothing would stay. Nothing is changed.");return; }
    if(plan.refusal==TGCX_CF_TOO_LARGE) { strcpy_s(p->summary,"Armies and templates are limited to 128 regiments.");return; }
    int placed[tgcx_tpl_units]={};
    memcpy(pops,country.pops,sizeof(tgcx_TplPop)*country.pop_count);
    tgcx_CfScopePops(tgcx_cf_native,stack,pops,country.pop_count);
    tgcx_TplMakePlan(plan.build,pops,country.pop_count,&builds);
    for(unsigned i=0;i<builds.count;++i)++placed[builds.orders[i].unit];
    tgcx_CfRowsOf(plan,placed,&p->rows);
    p->planned=true;
    bool leaving=plan.detach_count && tgcx_CfLeaving(target.id);
    sprintf_s(p->summary,"%u to build within land reach, %u to detach%s. Nothing is disbanded.",
        p->rows.build,p->rows.detach,leaving?" (already leaving)":"");
}
static void tgcx_CfLabels(tgcx_CfPanel* p) {
    static_assert(TGCX_CF_SHOW_END<=sizeof(p->shown),"Conform visibility cache");
    unsigned pages=(std::max)(1u,(tgcx_tpl_library.size+tgcx_cf_slots-1)/tgcx_cf_slots);
    p->list_page%=pages;
    char key[128];
    for(unsigned row=0;row<tgcx_cf_slots;++row) {
        unsigned s=p->list_page*tgcx_cf_slots+row;bool used=s<tgcx_tpl_library.size;
        sprintf_s(key,"tgcx_cf_slot_sel_%u",row);tgcx_CfShow(p,TGCX_CF_SHOW_SEL+row,key,used && s==p->selected);
        sprintf_s(key,"tgcx_cf_slot_blank_%u",row);tgcx_CfShow(p,TGCX_CF_SHOW_BLANK+row,key,!used);
        const unsigned text=TGCX_CF_T_SLOT_0+row*(TGCX_CF_T_SLOT_1-TGCX_CF_T_SLOT_0);
        char name[160]={};if(used)tgcx_TplName(tgcx_tpl_library.item[s],name,sizeof(name));
        tgcx_CfText(p,text,"%s",name);
        const auto& c=tgcx_tpl_library.item[used?s:0];unsigned total=tgcx_TplTotal(c);
        tgcx_CfText(p,text+1,used?"%u %s":"",total,total==1?"regiment":"regiments");
        unsigned leading=tgcx_tpl_kinds,mini[4]={},minis=0;
        if(used)minis=tgcx_TplMinis(c,&leading,mini);
        for(unsigned k=0;k<tgcx_cf_minis;++k)tgcx_CfText(p,text+2+k,k<minis?"\xD7%d":"",k<minis?c.count[mini[k]]:0);
        if(tgcx_army_universal) {
            char sprite[96];sprintf_s(key,"tgcx_cf_slot_icon_%u_unit",row);sprintf_s(sprite,"tgcx_cf_slot_sprite_%u_unit",row);
            tgcx_UnivIcon(p->window,key,sprite,leading,leading<tgcx_tpl_kinds);
            for(unsigned k=0;k<tgcx_cf_minis;++k) {
                sprintf_s(key,"tgcx_cf_mini_%u_%u_unit",row,k);sprintf_s(sprite,"tgcx_cf_mini_sprite_%u_%u_unit",row,k);
                tgcx_UnivIcon(p->window,key,sprite,mini[k],k<minis);
            }
        } else for(unsigned u=0;u<tgcx_tpl_kinds;++u) {
            sprintf_s(key,"tgcx_cf_slot_icon_%u_%s",row,tgcx_tpl_catalog[u].key);
            tgcx_CfShow(p,TGCX_CF_SHOW_ICON+row*tgcx_tpl_kinds+u,key,u==leading);
            for(unsigned k=0;k<tgcx_cf_minis;++k) {
                sprintf_s(key,"tgcx_cf_mini_%u_%u_%s",row,k,tgcx_tpl_catalog[u].key);
                tgcx_CfShow(p,TGCX_CF_SHOW_MINI+(row*tgcx_cf_minis+k)*tgcx_tpl_kinds+u,key,k<minis && mini[k]==u);
            }
        }
    }
    tgcx_CfShow(p,TGCX_CF_SHOW_PAGER,"tgcx_cf_pager_blank",pages==1);
    tgcx_CfText(p,TGCX_CF_T_LIST_PAGE,pages>1?"%u / %u":"",p->list_page+1,pages);
    for(unsigned r=0;r<tgcx_cf_changes;++r) {
        bool used=p->planned && r<p->rows.count;const tgcx_CfRow& row=p->rows.row[r];
        int k=used && row.unit>=0 && row.unit<static_cast<int>(tgcx_tpl_units)?p->kind[row.unit]:-1;
        const char* label=k>=0?tgcx_tpl_catalog[k].label:"Regiment";
        sprintf_s(key,"tgcx_cf_change_row_%u",r);tgcx_CfShow(p,TGCX_CF_SHOW_ROW+r,key,used);
        if(tgcx_army_universal) {
            char sprite[96];sprintf_s(key,"tgcx_cf_change_icon_%u_unit",r);sprintf_s(sprite,"tgcx_cf_change_sprite_%u_unit",r);
            tgcx_UnivIcon(p->window,key,sprite,used?static_cast<unsigned>(k):tgcx_tpl_kinds,used && k>=0);
        } else for(unsigned u=0;u<tgcx_tpl_kinds;++u) {
            sprintf_s(key,"tgcx_cf_change_icon_%u_%s",r,tgcx_tpl_catalog[u].key);
            tgcx_CfShow(p,TGCX_CF_SHOW_CHANGE+r*tgcx_tpl_kinds+u,key,used && k==static_cast<int>(u));
        }
        const unsigned text=TGCX_CF_T_CHANGE_0+r*(TGCX_CF_T_CHANGE_1-TGCX_CF_T_CHANGE_0);
        if(!used) { tgcx_CfText(p,text,"");tgcx_CfText(p,text+1,"");continue; }
        switch(row.kind) {
        case TGCX_CF_ROW_BUILD:
            tgcx_CfText(p,text,"\xA7G+%u %s\xA7!",row.count,label);
            tgcx_CfText(p,text+1,"built; marches and joins (%d days)",k>=0?tgcx_tpl_catalog[k].days:0);break;
        case TGCX_CF_ROW_SHORT:
            tgcx_CfText(p,text,"\xA7Y+%u %s\xA7!",row.count,label);
            tgcx_CfText(p,text+1,"no free soldier pop within land reach: not built");break;
        case TGCX_CF_ROW_GATHER:
            tgcx_CfText(p,text,"\xA7G+%u %s\xA7!",row.count,label);
            tgcx_CfText(p,text+1,"a finished regiment nearby marches and joins");break;
        default:
            tgcx_CfText(p,text,"\xA7R-%u %s\xA7!",row.count,label);
            tgcx_CfText(p,text+1,"detached into a new stack here");break;
        }
    }
    tgcx_CfText(p,TGCX_CF_T_TITLE,"Conform to template");
    tgcx_CfText(p,TGCX_CF_T_CHANGES,"Changes");
    if(p->planned && p->rows.more)tgcx_CfText(p,TGCX_CF_T_SUMMARY,"%s (%u more rows)",p->summary,p->rows.more);
    else tgcx_CfText(p,TGCX_CF_T_SUMMARY,"%s",p->summary);
    if(p->status[0])tgcx_CfText(p,TGCX_CF_T_STATUS,"%s",p->status);
    else if(p->planned && p->rows.shortfall)tgcx_CfText(p,TGCX_CF_T_STATUS,"%u cannot be built now and are left out.",p->rows.shortfall);
    else tgcx_CfText(p,TGCX_CF_T_STATUS,"");
    tgcx_CfText(p,TGCX_CF_T_CONFORM,"Conform");tgcx_CfText(p,TGCX_CF_T_CANCEL,"Cancel");
}
static void tgcx_CfOpen(tgcx_CfPanel* p,uintptr_t stack) {
    tgcx_TplLoadLibrary();
    p->stack=tgcx_CfStackId(stack);p->vtable=tgcx_TplRead<uintptr_t>(stack);
    if(p->selected>=tgcx_tpl_library.size)p->selected=0;
    p->list_page=p->selected/tgcx_cf_slots;p->status[0]=0;
    if(!tgcx_CfPlace(p,!p->open)) { tgcx_Log("Conform window does not fit beside the unit panel");return; }
    // Showing a window re-shows its whole subtree (P42).
    p->open=true;tgcx_TplVisible(p->window,true);memset(p->shown,0,sizeof(p->shown));memset(p->text_set,0,sizeof(p->text_set));
    tgcx_CfPreview(p);p->tick=0;
    tgcx_Log("Conform window opened for stack %u/%u",p->stack.type,p->stack.id);
}
static void tgcx_CfConformClick(tgcx_CfPanel* p) {
    static tgcx_TplCountry country;static tgcx_CfPlan plan;
    if(!p->planned) { strcpy_s(p->status,"Nothing to do: see above.");return; }
    auto g=tgcx_CfLiveGlobals();uintptr_t stack=tgcx_CfTarget(g,p);
    if(!stack || !tgcx_TplScan(tgcx_TplLiveGlobals(),tgcx_tpl_native,&country)) { strcpy_s(p->status,"Cannot read this army now.");return; }
    if(!tgcx_TplCatalogueFits(country)) { strcpy_s(p->status,"Unit catalogue changed; regenerate Army for this base.");return; }
    int want[tgcx_tpl_units];tgcx_CfWant(p,country,want,p->kind);
    tgcx_CfResult r=tgcx_CfConformWith(g,tgcx_cf_native,stack,country.unit,want,&plan);
    if(!r.read)strcpy_s(p->status,"Cannot read this army now.");
    else if(r.refusal!=TGCX_CF_OK)strcpy_s(p->status,"Nothing sent: the plan changed. See above.");
    else sprintf_s(p->status,"%u to detach, %u orders queued, %u left out%s. Unpause to process them.",
        r.detached,r.queued,r.missing,r.failed?" (some orders refused: see the log)":"");
    tgcx_CfPreview(p);
}
static void tgcx_CfClickImpl(tgcx_CfPanel* p,unsigned action) {
    if(!tgcx_cf_enabled || !p || GetCurrentThreadId()!=p->thread || action>=TGCX_CF_BUTTONS)return;
    __try {
        if(p->disabled || !tgcx_CfPanelLive(p))return;
        if(action==TGCX_CF_B_OPEN) {
            uintptr_t stack=tgcx_CfShownStack(tgcx_CfLiveGlobals(),*reinterpret_cast<uintptr_t*>(p->view+0x28));
            if(p->open && stack && tgcx_CfSame(tgcx_CfStackId(stack),p->stack)) { tgcx_CfClose(p);return; }
            if(stack && p->land)tgcx_CfOpen(p,stack);
            return;
        }
        if(!p->open)return;
        p->tick=0;
        if(action==TGCX_CF_B_CLOSE || action==TGCX_CF_B_CANCEL) { tgcx_CfClose(p);return; }
        if(action>=TGCX_CF_B_SLOT_0 && action<=TGCX_CF_B_SLOT_3) {
            unsigned s=p->list_page*tgcx_cf_slots+action-TGCX_CF_B_SLOT_0;
            if(s<tgcx_tpl_library.size && s!=p->selected) { p->selected=s;p->status[0]=0;tgcx_CfPreview(p); }
            return;
        }
        if(action==TGCX_CF_B_LIST_PREV || action==TGCX_CF_B_LIST_NEXT) {
            unsigned pages=(std::max)(1u,(tgcx_tpl_library.size+tgcx_cf_slots-1)/tgcx_cf_slots);
            p->list_page=(p->list_page+(action==TGCX_CF_B_LIST_NEXT?1:pages-1))%pages;return;
        }
        if(action==TGCX_CF_B_CONFORM)tgcx_CfConformClick(p);
    } __except(EXCEPTION_EXECUTE_HANDLER) { tgcx_Log("Conform click rejected: guarded native read fault"); }
}
static void __cdecl tgcx_CfClick(tgcx_CfPanel* p,unsigned action) { tgcx_CpuScope cpu;tgcx_CfClickImpl(p,action); }
// from V2DLL: V2TechButton.cpp, native observer thunk pattern; extended CPU
// preservation. The native trampoline passes our panel pointer in ECX.
#define TGCX_CF_THUNK(n) \
__declspec(naked) static void tgcx_CfThunk##n() { \
    __asm { pushfd } __asm { pushad } __asm { mov ebx,esp } \
    __asm { sub esp,528 } __asm { and esp,-16 } __asm { fxsave [esp] } \
    __asm { cld } __asm { push n } __asm { push ecx } __asm { call tgcx_CfClick } __asm { add esp,8 } \
    __asm { fxrstor [esp] } __asm { mov esp,ebx } __asm { popad } __asm { popfd } __asm { ret } \
}
TGCX_CF_THUNKS(TGCX_CF_THUNK)
#undef TGCX_CF_THUNK
#define TGCX_CF_POINTER(n) tgcx_CfThunk##n,
static void(*const tgcx_cf_thunks[])()={TGCX_CF_THUNKS(TGCX_CF_POINTER)};
#undef TGCX_CF_POINTER
static void tgcx_CfBind(tgcx_CfPanel* p,unsigned action) {
    if(p->bound[action])return;
    // Lookups are flat: the open button lives in the tab window.
    uintptr_t host=action==TGCX_CF_B_OPEN?p->tab:p->window;if(!host)return;
    uintptr_t button=tgcx_BillFind(host,13,0x5E4C80,tgcx_cf_button_names[action]);if(!button)return;
    uintptr_t observable=button+0x54;auto* vt=*reinterpret_cast<uintptr_t**>(observable);
    if(vt[1]<tgcx_base || vt[1]>=tgcx_base+tgcx_image_size)return;
    unsigned char* glue=p->glue[action];memset(glue,0,44);
    // from V2DLL: V2TechButton.cpp, 44-byte Politics observer. Its deletion
    // notification uses +0x20 (left zero); +4 is our stable panel, +8 callback.
    *reinterpret_cast<uintptr_t*>(glue)=tgcx_base+0xA0E48C;
    *reinterpret_cast<uintptr_t*>(glue+4)=reinterpret_cast<uintptr_t>(p);
    *reinterpret_cast<uintptr_t*>(glue+8)=reinterpret_cast<uintptr_t>(tgcx_cf_thunks[action]);
    reinterpret_cast<tgcx_GuiOne>(vt[1])(observable,nullptr,glue);p->bound[action]=true;
}
static void tgcx_CfReset(tgcx_CfPanel* p) {
    tgcx_UnivRelease(p->window);tgcx_UnivRelease(p->tab);
    p->root=p->window=p->tab=p->seen=0;p->open=p->land=p->disabled=false;p->tick=0;
    memset(p->bound,0,sizeof(p->bound));memset(p->text_set,0,sizeof(p->text_set));memset(p->shown,0,sizeof(p->shown));
    // Observer memory stays valid until native GUI destruction.
}
// The previous root can already be destroyed: never hide its cached children.
static void tgcx_CfRootChanged(tgcx_CfPanel* p,uintptr_t root) {
    if(root==p->root)return;
    tgcx_CfReset(p);p->root=root;
}
static void tgcx_CfPanelRelease(uintptr_t view) {
    for(auto& p:tgcx_cf_panels)if(p.view==view) {
        __try { if(p.window)tgcx_TplVisible(p.window,false); } __except(EXCEPTION_EXECUTE_HANDLER) {}
        tgcx_CfReset(&p);p.view=0;
    }
}
static void tgcx_CfPanelTick(tgcx_CfPanel* p) {
    const char* volatile step="view/root";
    __try {
        if(GetCurrentThreadId()!=p->thread)return;
        if(!p->view || *reinterpret_cast<uintptr_t*>(p->view)!=tgcx_base+tgcx_cf_view_vt_rva)return;
        uintptr_t root=*reinterpret_cast<uintptr_t*>(p->view+0x20);
        tgcx_CfRootChanged(p,root);
        step="view/stack";
        uintptr_t shown=*reinterpret_cast<uintptr_t*>(p->view+0x28);
        if(p->disabled) {
            if(shown==p->seen)return;
            // A new selection can recover without re-registering observers.
            p->disabled=false;p->tick=0;p->land=false;
        }
        step="visibility";
        if(!tgcx_CfPanelLive(p)) {
            if(p->open)tgcx_CfClose(p);
            // Universal's entry is a separate scene root: hiding its host
            // does not hide it. Reset visibility so reopening promotes it.
            if(tgcx_army_universal)tgcx_TplVisible(p->tab,false);
            return;
        }
        DWORD now=GetTickCount();if(p->tick && now-p->tick<100)return;p->tick=now;
        if(!p->window) {
            if(tgcx_army_universal) {
                if(!tgcx_UnivPair(p->root,"tgcx_cf_window","tgcx_cf_tab",p->window,p->tab))return;
            } else {
            step="marker/window/tab lookup";
            // Without our GUI fragment there is nothing to bind: the button
            // lookup is silent, a window lookup is not. It searches only the
            // panel's own children, so the probe is the top-level marker.
            if(!tgcx_BillFind(p->root,13,0x5E4C80,"tgcx_cf_marker"))return;
            p->window=tgcx_BillFind(p->root,27,0x5E4A20,"tgcx_cf_window");if(!p->window)return;
            p->tab=tgcx_BillFind(p->root,27,0x5E4A20,"tgcx_cf_tab");
            tgcx_TplVisible(p->window,false);tgcx_Log("Conform native window found view=%08X root=%08X tab=%d",p->view,p->root,p->tab!=0);
            }
        }
        step="stack registry/owner/land";
        uintptr_t stack=tgcx_CfShownStack(tgcx_CfLiveGlobals(),shown);
        {
            p->seen=shown;p->land=stack && tgcx_TplRead<int>(stack+0xC4)==tgcx_CfPlayer(tgcx_CfLiveGlobals()) && tgcx_cf_native.land(stack);
            // Another army selected: the window belonged to the previous one.
            if(p->open && (!stack || !tgcx_CfSame(tgcx_CfStackId(stack),p->stack)))tgcx_CfClose(p);
        }
        // Fleets and foreign stacks have no Conform. Re-applied every tick:
        // showing the unit panel re-shows its subtree (P42).
        step="tab visibility";
        bool placed=!tgcx_army_universal || tgcx_UnivCfTab(p->root,p->tab);
        tgcx_TplVisible(p->tab,p->land && placed);
        step="bind";
        for(unsigned b=0;b<TGCX_CF_BUTTONS;++b)tgcx_CfBind(p,b);
        if(p->open) {
            step="place";
            if(!tgcx_CfPlace(p,false)) { tgcx_CfClose(p);return; }
            auto g=tgcx_CfLiveGlobals();
            // Once per game day: regiments arrive, merge, or finish building.
            step="preview";
            if(g.world && tgcx_TplRead<uint32_t>(g.world+0xB0C)!=p->preview_date)tgcx_CfPreview(p);
            step="labels";
            tgcx_CfLabels(p);
        }
    } __except(EXCEPTION_EXECUTE_HANDLER) {
        p->open=false;__try { if(p->window)tgcx_TplVisible(p->window,false); } __except(EXCEPTION_EXECUTE_HANDLER) {}
        if(!p->disabled)tgcx_Log("Conform window disabled after guarded GUI read fault: step=%s view=%08X root=%08X stack=%08X",step,p->view,p->root,p->seen);
        p->disabled=true;
    }
}
static void tgcx_CfPanelForget(uintptr_t view) {
    for(auto& p:tgcx_cf_panels)if(p.view==view) { tgcx_CfReset(&p);p.view=0; }
}
// The panel of a captured view; a panel whose view left the table is freed
// first (P47), so slots never run out while views come and go.
static tgcx_CfPanel* tgcx_CfPanelFor(const tgcx_CfView& v) {
    tgcx_CfPanel* found=nullptr;tgcx_CfPanel* empty=nullptr;
    for(auto& p:tgcx_cf_panels) {
        if(!p.view)continue;
        bool known=false;for(const auto& w:tgcx_cf_views)if(w.view==p.view)known=true;
        if(!known) { tgcx_CfReset(&p);p.view=0; }
    }
    for(auto& p:tgcx_cf_panels) { if(p.view==v.view)found=&p;if(!p.view && !empty)empty=&p; }
    if(!found && empty) { found=empty;tgcx_CfReset(found);found->view=v.view;found->thread=v.thread;found->disabled=false; }
    return found;
}
static void tgcx_CfPanelsTick() {
    if(!tgcx_cf_enabled)return;
    for(const auto& v:tgcx_cf_views) {
        if(!v.view)continue;
        if(tgcx_CfPanel* p=tgcx_CfPanelFor(v))tgcx_CfPanelTick(p);
    }
}
