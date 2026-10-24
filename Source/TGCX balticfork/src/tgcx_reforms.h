// LAW-2 Reforms tab and Decisions list (mockup board 1-politics): GUI only.
// A bill is presented from the Reforms tab through the engine's decision
// command, which validates the decision's potential and allow itself
// (CExecuteDecisionCommand slot 14, FUN_00906B40; P39). The Decisions tab
// hides the tgcx_ decisions the Bill and the Reforms tab already offer, and the
// "decision taken" popup is skipped for decisions the DLL sent (R5, R6).
#pragma once

// MSVC std::string: buffer/pointer +0, size +0x10, capacity +0x14. Read-only.
static bool tgcx_ReadGameString(uintptr_t at,char* out,size_t size) {
    uint32_t length=*reinterpret_cast<uint32_t*>(at+0x10),capacity=*reinterpret_cast<uint32_t*>(at+0x14);
    if(length>=size || capacity<length || capacity>0x10000)return false;
    const char* text=capacity>15?*reinterpret_cast<const char**>(at):reinterpret_cast<const char*>(at);
    if(!text)return false;
    memcpy(out,text,length);out[length]=0;return true;
}

// ---------------------------------------------------------------- what the tab offers

struct tgcx_ReformRef { int group,index; };
static bool tgcx_ReformFind(const char* key,tgcx_ReformRef* out) {
    for(unsigned g=0;g<_countof(tgcx_bill_groups);++g)
        for(unsigned i=0;i<tgcx_bill_groups[g].count;++i)
            if(!strcmp(tgcx_bill_option_keys[g][i],key)) { *out={static_cast<int>(g),static_cast<int>(i)};return true; }
    return false;
}
// The catalogue bill (tgcx_gui_bill_id, 1-based) from the current law to a target; 0 = none.
static int tgcx_ReformBill(int group,int from,int to) {
    for(unsigned n=0;n<_countof(tgcx_bill_catalog);++n) {
        const auto& b=tgcx_bill_catalog[n];
        if(b.group==group && b.from_index==from && b.to_index==to)return static_cast<int>(n)+1;
    }
    return 0;
}
// Refreshed by tgcx_BillTick from fresh script state. offer_from[g] is the
// monthly collection's tgcx_gui_offer_<group>: 1 + the law whose next step
// passes its own TGC allow (D14 B), 0 = none or not collected yet.
struct tgcx_ReformOffer { bool known,legislature,cooldown,active,delay_open;int target_group,target_index;
    int offer_from[_countof(tgcx_bill_groups)]; };
static tgcx_ReformOffer tgcx_reform_offer={};
static bool tgcx_reform_rebuild=false,tgcx_reform_refresh_ok=false;
static unsigned tgcx_reform_pass_lit=0,tgcx_reform_pass_dark=0,tgcx_reform_pass_ours=0;
static int tgcx_reform_current[_countof(tgcx_bill_groups)];
static bool tgcx_reform_native[_countof(tgcx_bill_groups)][8];
static bool tgcx_reforms_installed=false;
static unsigned tgcx_reform_rows=0,tgcx_decisions_hidden=0;

// The board's tan row is the native enabled reform button (politics_reform_select).
// With a bill open only its target is lit, native rows included. Otherwise
// (D14) the next step the chamber blocks today, where a chamber exists, no
// cooldown or native reform delay runs and TGC's allow for it holds. Steps
// back are never negotiated: the ones the game allows are lit natively.
static bool tgcx_ReformOffers(const tgcx_ReformOffer& o,int group,int current,int index) {
    if(!o.known)return false;
    if(o.active)return o.target_group==group && o.target_index==index;
    if(!o.legislature || o.cooldown || !o.delay_open || index!=current+1)return false;
    return o.offer_from[group]==current+1 && tgcx_ReformBill(group,current,index)>0;
}
// The native minimum delay between reforms (FUN_005268F0: EAX = country,
// AL = open, plain RET). Read-only; ESP is restored whatever the callee does.
static uintptr_t tgcx_reform_delay_fn=0;
__declspec(naked) static int __cdecl tgcx_CallReformDelay(uintptr_t) {
    __asm { push ebp } __asm { mov ebp,esp } __asm { push ebx } __asm { push esi } __asm { push edi }
    __asm { mov eax,[ebp+8] } __asm { call dword ptr [tgcx_reform_delay_fn] } __asm { movzx eax,al }
    __asm { lea esp,[ebp-12] } __asm { pop edi } __asm { pop esi } __asm { pop ebx } __asm { pop ebp } __asm { ret }
}
static bool tgcx_ReformDelayOpen(uintptr_t country) {
    if(!tgcx_reform_delay_fn)return true;  // guard failed: the script cooldown alone applies
    __try { return tgcx_CallReformDelay(country)!=0; } __except(EXCEPTION_EXECUTE_HANDLER) { return true; }
}
static void tgcx_ReformRefresh(uintptr_t country,const tgcx_BillModel& model,bool model_valid) {
    tgcx_ReformOffer o={};bool ok=country!=0;
    tgcx_BillTimers timers={};
    if(ok)ok=tgcx_bill_timer_reader(country,&timers);
    int legislature=ok?tgcx_BillValue(country,"tgcx_gui_legislature",&ok):0;
    if(ok) {
        o.known=true;o.legislature=legislature==1;o.cooldown=timers.cooldown!=0;
        o.active=model_valid && model.active;o.target_group=o.target_index=-1;
        o.delay_open=tgcx_ReformDelayOpen(country);
        for(unsigned g=0;g<_countof(tgcx_bill_groups);++g) {
            char key[64];bool has=true;sprintf_s(key,"tgcx_gui_offer_%s",tgcx_bill_group_keys[g]);
            int from=tgcx_BillValue(country,key,&has);
            o.offer_from[g]=has && from>0 && from<=static_cast<int>(tgcx_bill_groups[g].count)?from:0;
        }
        if(o.active && model.id>0 && model.id<=static_cast<int>(_countof(tgcx_bill_catalog))) {
            o.target_group=tgcx_bill_catalog[model.id-1].group;o.target_index=tgcx_bill_catalog[model.id-1].to_index;
        }
    }
    // P46: the rows keep their state until the view rebuilds them.
    if(memcmp(&o,&tgcx_reform_offer,sizeof(o))!=0)tgcx_reform_rebuild=true;
    tgcx_reform_offer=o;
}
// Ask the native view to rebuild every row (slot 11, as its show does), on
// the GUI thread, after the offer changed. Logs each pass's tally.
static void tgcx_ReformAfterTick(uintptr_t view) {
    if(tgcx_reform_pass_lit || tgcx_reform_pass_dark) {
        tgcx_Log("Reforms rows evaluated: lit=%u (ours=%u) dark=%u active=%u",tgcx_reform_pass_lit,tgcx_reform_pass_ours,
                 tgcx_reform_pass_dark,tgcx_reform_offer.active);
        tgcx_reform_pass_lit=tgcx_reform_pass_dark=tgcx_reform_pass_ours=0;
    }
    if(!tgcx_reform_rebuild || !tgcx_reform_refresh_ok || !tgcx_reforms_installed || !view)return;
    tgcx_reform_rebuild=false;
    __try {
        auto* table=*reinterpret_cast<uintptr_t**>(view);
        if(reinterpret_cast<uintptr_t>(table)!=tgcx_base+0xA0E458 || table[11]!=tgcx_base+0x2D7180)return;
        reinterpret_cast<void(__fastcall*)(uintptr_t)>(table[11])(view);
    } __except(EXCEPTION_EXECUTE_HANDLER) { tgcx_reform_refresh_ok=false;tgcx_Log("Reforms rebuild disabled after a read fault"); }
}

// ---------------------------------------------------------------- native hooks

// Reform row (FUN_006DA930 at RVA 0x2DB22D, after the native enable decision):
// frame -0x3C option, -0x1C group, -0x18 country, -0x11 enabled byte (P39).
static void tgcx_ReformRowImpl(uintptr_t frame) {
    if(!tgcx_bill_enabled || !tgcx_bill_usable)return;
    __try {
        uintptr_t option=*reinterpret_cast<uintptr_t*>(frame-0x3C),group=*reinterpret_cast<uintptr_t*>(frame-0x1C);
        uintptr_t country=*reinterpret_cast<uintptr_t*>(frame-0x18);
        auto* enabled=reinterpret_cast<unsigned char*>(frame-0x11);
        char key[64];tgcx_ReformRef ref={};
        if(!option || !group || !country || !tgcx_ReadGameString(option+0x34,key,sizeof(key)) || !tgcx_ReformFind(key,&ref))return;
        // Current law: the per-category arrays the native check reads (+0x860 political, +0x850 social).
        uintptr_t list=*reinterpret_cast<uintptr_t*>(country+(tgcx_bill_group_political[ref.group]?0x860:0x850));
        int slot=*reinterpret_cast<int*>(group+0x50);
        if(!list || slot<0 || slot>=64)return;
        uintptr_t current=*reinterpret_cast<uintptr_t*>(list+4*slot);
        char now[64];tgcx_ReformRef cur={};
        if(!current || !tgcx_ReadGameString(current+0x34,now,sizeof(now)) || !tgcx_ReformFind(now,&cur) || cur.group!=ref.group)return;
        tgcx_reform_current[ref.group]=cur.index;
        tgcx_reform_native[ref.group][ref.index]=*enabled!=0;
        bool offered=tgcx_ReformOffers(tgcx_reform_offer,ref.group,cur.index,ref.index);
        if(tgcx_reform_offer.known && tgcx_reform_offer.active)*enabled=offered;  // board 1: only the target
        else if(!*enabled && offered) {
            *enabled=1;++tgcx_reform_pass_ours;
            if(++tgcx_reform_rows==1)tgcx_Log("Reforms tab offers %s (first row lit)",key);
        }
        ++(*enabled?tgcx_reform_pass_lit:tgcx_reform_pass_dark);
    } __except(EXCEPTION_EXECUTE_HANDLER) {}
}
static void __cdecl tgcx_ReformRow(uintptr_t frame) { tgcx_CpuScope cpu;tgcx_ReformRowImpl(frame); }

// Reform click (FUN_006DC990, element +0x14 "POLITICSVIEW_<POLITICAL|SOCIAL>_REFORM<key>").
// 1 = handled here; 0 = the native reform the chamber already allows.
static int tgcx_ReformClickImpl(uintptr_t element) {
    if(!tgcx_bill_enabled || !tgcx_bill_usable || GetCurrentThreadId()!=tgcx_bill_thread)return 0;
    __try {
        char text[128];
        if(!tgcx_ReadGameString(element+0x14,text,sizeof(text)))return 0;
        static const char* const prefixes[]={"POLITICSVIEW_POLITICAL_REFORM","POLITICSVIEW_SOCIAL_REFORM"};
        const char* key=nullptr;
        for(const char* p:prefixes)if(!strncmp(text,p,strlen(p)))key=text+strlen(p);
        tgcx_ReformRef ref={};
        if(!key || !tgcx_ReformFind(key,&ref))return 0;
        int current=tgcx_reform_current[ref.group];
        // With a bill open every row belongs to the Bill, native ones too: none enacts directly.
        if(current<0 || (tgcx_reform_native[ref.group][ref.index] && !tgcx_reform_offer.active))return 0;
        // Natively this row cannot be clicked; whatever happens next, the reform command is not sent.
        tgcx_Snapshot sample={};bool fault=false;tgcx_BillModel model={};
        if(!tgcx_ReadSnapshot(&sample,&fault))return 1;
        if(tgcx_BillReadModel(sample.country,&model)) {
            tgcx_bill_open=true;tgcx_bill_dirty=true;tgcx_bill_tick=0;
            tgcx_Log("Reforms tab opened the Bill tag=%.4s row=%s",sample.country_tag,key);
            return 1;
        }
        if(tgcx_reform_native[ref.group][ref.index])return 0;
        if(!tgcx_ReformOffers(tgcx_reform_offer,ref.group,current,ref.index))return 1;
        int bill=tgcx_ReformBill(ref.group,current,ref.index);
        if(!bill)return 1;
        char decision[64];
        sprintf_s(decision,"tgcx_bill_%s_%s",tgcx_bill_group_keys[ref.group],ref.index>current?"up":"down");
        if(tgcx_BillDispatch(decision)) {
            tgcx_bill_tick=0;tgcx_Log("Reforms tab presented %s (bill %d) tag=%.4s",decision,bill,sample.country_tag);
        }
        return 1;
    } __except(EXCEPTION_EXECUTE_HANDLER) { return 0; }
}
static int __cdecl tgcx_ReformClick(uintptr_t element) { tgcx_CpuScope cpu;return tgcx_ReformClickImpl(element); }

// Decisions list (FUN_006DB2E0): skip the tgcx_ decisions (name std::string at +8).
static bool tgcx_HiddenDecisionName(const char* name) { return !strncmp(name,"tgcx_",5); }
static int tgcx_DecisionHiddenImpl(uintptr_t decision) {
    if(!tgcx_bill_enabled || !tgcx_bill_usable || !tgcx_reforms_installed)return 0;
    __try {
        char name[96];
        if(!decision || !tgcx_ReadGameString(decision+8,name,sizeof(name)) || !tgcx_HiddenDecisionName(name))return 0;
        if(++tgcx_decisions_hidden==1)tgcx_Log("Decisions list hides %s (and every tgcx_ decision while the Bill is usable)",name);
        return 1;
    } __except(EXCEPTION_EXECUTE_HANDLER) { return 0; }
}
static int __cdecl tgcx_DecisionHidden(uintptr_t decision) { tgcx_CpuScope cpu;return tgcx_DecisionHiddenImpl(decision); }
// Top-bar decisions alert and Politics tooltip (FUN_0053A6A0): our decisions
// count as ignored while the DLL offers them, unless the Bill cannot fit (R6).
static bool tgcx_ignored_installed=false;
static unsigned tgcx_decisions_ignored=0;
static int tgcx_DecisionIgnoredImpl(uintptr_t decision) {
    if(!tgcx_bill_enabled || !tgcx_reforms_installed || (tgcx_bill_size_known && !tgcx_bill_usable))return 0;
    __try {
        char name[96];
        if(!decision || !tgcx_ReadGameString(decision+8,name,sizeof(name)) || !tgcx_HiddenDecisionName(name))return 0;
        if(++tgcx_decisions_ignored==1)tgcx_Log("Decisions alert skips %s (and every tgcx_ decision)",name);
        return 1;
    } __except(EXCEPTION_EXECUTE_HANDLER) { return 0; }
}
static int __cdecl tgcx_DecisionIgnored(uintptr_t decision) { tgcx_CpuScope cpu;return tgcx_DecisionIgnoredImpl(decision); }

static uintptr_t tgcx_reform_click_resume=0,tgcx_reform_row_resume=0;
static uintptr_t tgcx_decision_resume0=0,tgcx_decision_skip0=0,tgcx_decision_resume1=0,tgcx_decision_skip1=0;
static int tgcx_reform_handled=0,tgcx_decision_hide=0,tgcx_ignored_hide=0;
static uintptr_t tgcx_ignored_resume=0;
// Original PUSH ESI / MOV ESI,[EAX+0x188] replicated; ours returns AL = 1 (ignored).
__declspec(naked) static void tgcx_IgnoredThunk() {
    __asm { pushfd } __asm { pushad } __asm { mov ebx,esp }
    __asm { sub esp,528 } __asm { and esp,-16 } __asm { fxsave [esp] } __asm { cld }
    __asm { push edi } __asm { call tgcx_DecisionIgnored } __asm { add esp,4 }
    __asm { mov tgcx_ignored_hide,eax }
    __asm { fxrstor [esp] } __asm { mov esp,ebx } __asm { popad } __asm { popfd }
    __asm { cmp tgcx_ignored_hide,0 } __asm { jne ignored }
    __asm { push esi } __asm { mov esi,[eax+0x188] }
    __asm { jmp dword ptr [tgcx_ignored_resume] }
ignored:
    __asm { mov eax,1 } __asm { ret }
}
// from V2DLL: V2TechButton.cpp, entry-hook preservation pattern; the overwritten
// prologue (push ebp / mov ebp,esp / and esp,-8) is replicated exactly; RET 4 as native.
__declspec(naked) static void tgcx_ReformClickThunk() {
    __asm { pushfd } __asm { pushad } __asm { mov ebx,esp }
    __asm { sub esp,528 } __asm { and esp,-16 } __asm { fxsave [esp] } __asm { cld }
    __asm { push dword ptr [ebx+40] } __asm { call tgcx_ReformClick } __asm { add esp,4 }
    __asm { mov tgcx_reform_handled,eax }
    __asm { fxrstor [esp] } __asm { mov esp,ebx } __asm { popad } __asm { popfd }
    __asm { cmp tgcx_reform_handled,0 } __asm { jne handled }
    __asm { push ebp } __asm { mov ebp,esp } __asm { and esp,-8 }
    __asm { jmp dword ptr [tgcx_reform_click_resume] }
handled:
    __asm { ret 4 }
}
// Original CMP byte [ebp-0x11],0 / MOV EDX,[EAX] replicated after the call.
__declspec(naked) static void tgcx_ReformRowThunk() {
    __asm { pushfd } __asm { pushad } __asm { mov ebx,esp }
    __asm { sub esp,528 } __asm { and esp,-16 } __asm { fxsave [esp] } __asm { cld }
    __asm { push dword ptr [ebx+8] } __asm { call tgcx_ReformRow } __asm { add esp,4 }
    __asm { fxrstor [esp] } __asm { mov esp,ebx } __asm { popad } __asm { popfd }
    __asm { cmp byte ptr [ebp-0x11],0 } __asm { mov edx,[eax] }
    __asm { jmp dword ptr [tgcx_reform_row_resume] }
}
// Original TEST AL,AL / JZ next / MOV ECX,[EBP-0x80] replicated; hidden = next.
__declspec(naked) static void tgcx_DecisionFilter0() {
    __asm { test al,al } __asm { jz skip }
    __asm { pushfd } __asm { pushad } __asm { mov ebx,esp }
    __asm { sub esp,528 } __asm { and esp,-16 } __asm { fxsave [esp] } __asm { cld }
    __asm { push dword ptr [ebp-0x80] } __asm { call tgcx_DecisionHidden } __asm { add esp,4 }
    __asm { mov tgcx_decision_hide,eax }
    __asm { fxrstor [esp] } __asm { mov esp,ebx } __asm { popad } __asm { popfd }
    __asm { cmp tgcx_decision_hide,0 } __asm { jne skip }
    __asm { mov ecx,[ebp-0x80] } __asm { jmp dword ptr [tgcx_decision_resume0] }
skip:
    __asm { jmp dword ptr [tgcx_decision_skip0] }
}
__declspec(naked) static void tgcx_DecisionFilter1() {
    __asm { test al,al } __asm { jz skip }
    __asm { pushfd } __asm { pushad } __asm { mov ebx,esp }
    __asm { sub esp,528 } __asm { and esp,-16 } __asm { fxsave [esp] } __asm { cld }
    __asm { push dword ptr [ebp-0x80] } __asm { call tgcx_DecisionHidden } __asm { add esp,4 }
    __asm { mov tgcx_decision_hide,eax }
    __asm { fxrstor [esp] } __asm { mov esp,ebx } __asm { popad } __asm { popfd }
    __asm { cmp tgcx_decision_hide,0 } __asm { jne skip }
    __asm { mov ecx,[ebp-0x80] } __asm { jmp dword ptr [tgcx_decision_resume1] }
skip:
    __asm { jmp dword ptr [tgcx_decision_skip1] }
}

// "Decision taken" message (FUN_00906F00, by-value message, RET 0x8C) for the
// player's decisions: for one the DLL sent, its gate byte is cleared for that
// one call, so the poster takes its own early exit and destroys its argument.
static uintptr_t tgcx_msg_original=0,tgcx_msg_gate=0,tgcx_msg_return=0;
static unsigned char tgcx_msg_saved=0;
__declspec(naked) static void tgcx_MessageThunk() {
    __asm { cmp tgcx_msg_suppress,0 } __asm { je plain }
    __asm { lock dec tgcx_msg_suppress }
    __asm { push eax } __asm { push ecx }
    __asm { mov ecx,tgcx_msg_gate } __asm { mov al,[ecx] } __asm { mov tgcx_msg_saved,al } __asm { mov byte ptr [ecx],0 }
    __asm { pop ecx } __asm { pop eax }
    __asm { pop tgcx_msg_return }
    __asm { call original }
    __asm { push eax } __asm { push ecx }
    __asm { mov ecx,tgcx_msg_gate } __asm { mov al,tgcx_msg_saved } __asm { mov [ecx],al }
    __asm { pop ecx } __asm { pop eax }
    __asm { jmp dword ptr [tgcx_msg_return] }
original:
plain:
    __asm { jmp dword ptr [tgcx_msg_original] }
}

static bool tgcx_RequireSignatures(const uint32_t* rvas,size_t count) {
    for(size_t i=0;i<count;++i) {
        bool found=false;
        for(const auto& s:tgcx_signatures)if(s.rva==rvas[i]) { found=true;if(!tgcx_CheckSignature(s))return false; }
        if(!found)return false;
    }
    return true;
}
static bool tgcx_CodePatch(uintptr_t rva,const void* target,size_t size,unsigned char opcode) {
    unsigned char patch[8]={opcode,0,0,0,0,0x90,0x90,0x90};
    if(size<5 || size>sizeof(patch))return false;
    uint32_t relative=static_cast<uint32_t>(reinterpret_cast<uintptr_t>(target)-(tgcx_base+rva+5));
    memcpy(patch+1,&relative,4);
    auto* site=reinterpret_cast<unsigned char*>(tgcx_base+rva);DWORD protection=0,ignored=0;
    if(!VirtualProtect(site,size,PAGE_EXECUTE_READWRITE,&protection))return false;
    memcpy(site,patch,size);
    VirtualProtect(site,size,protection,&ignored);FlushInstructionCache(GetCurrentProcess(),site,size);
    return true;
}
static void tgcx_InstallReforms() {
    for(auto& c:tgcx_reform_current)c=-1;
    static const uint32_t tab[]={0x2DC990,0x2DCCEE,0x2DB00E,0x2DB02D,0x2DB0AE,0x2DB22D,0x575F15,0x2DB52A,0x2DB5E8,0x1C2B15};
    if(!tgcx_RequireSignatures(tab,_countof(tab))) {
        tgcx_Log("Reforms tab hooks rejected: guards; bills stay under Decisions");
    } else {
        tgcx_reform_click_resume=tgcx_base+0x2DC996;tgcx_reform_row_resume=tgcx_base+0x2DB233;
        tgcx_decision_resume0=tgcx_base+0x2DB531;tgcx_decision_skip0=tgcx_base+0x2DB59D;
        tgcx_decision_resume1=tgcx_base+0x2DB5EF;tgcx_decision_skip1=tgcx_base+0x2DB649;
        bool click=tgcx_CodePatch(0x2DC990,&tgcx_ReformClickThunk,6,0xE9);
        bool row=click && tgcx_CodePatch(0x2DB22D,&tgcx_ReformRowThunk,6,0xE9);
        bool list=row && tgcx_CodePatch(0x2DB52A,&tgcx_DecisionFilter0,7,0xE9) && tgcx_CodePatch(0x2DB5E8,&tgcx_DecisionFilter1,7,0xE9);
        tgcx_reforms_installed=list;
        tgcx_Log("Reforms tab hooks click=%u row=%u decisions=%u RVA=2DC990/2DB22D/2DB52A/2DB5E8",click,row,list);
        static const uint32_t rebuild[]={0xA0E484,0x2D7180,0x2D71AE,0x2D2C2B};
        tgcx_reform_refresh_ok=list && tgcx_RequireSignatures(rebuild,_countof(rebuild));
        static const uint32_t delay[]={0x1268F0,0x12693C};
        if(list && tgcx_RequireSignatures(delay,_countof(delay)))tgcx_reform_delay_fn=tgcx_base+0x1268F0;
        tgcx_Log("Reforms rows rebuild=%u reform delay gate=%u RVA=2D7180/1268F0",tgcx_reform_refresh_ok,tgcx_reform_delay_fn!=0);
        static const uint32_t alert[]={0x13A6A0,0x13C100,0x13C2A1,0x1C2B15};
        if(list && tgcx_RequireSignatures(alert,_countof(alert))) {
            tgcx_ignored_resume=tgcx_base+0x13A6A7;
            tgcx_ignored_installed=tgcx_CodePatch(0x13A6A0,&tgcx_IgnoredThunk,7,0xE9);
        }
        tgcx_Log("Decisions alert filter %s RVA=13A6A0",tgcx_ignored_installed?"installed":"rejected: guards");
    }
    static const uint32_t message[]={0x506690,0x506F00,0x506F55,0x507542};
    if(!tgcx_RequireSignatures(message,_countof(message))) { tgcx_Log("Decision message filter rejected: guards; popups remain");return; }
    tgcx_msg_original=tgcx_base+0x506F00;tgcx_msg_gate=tgcx_base+0xB07DA6;
    tgcx_msg_hooked=tgcx_CodePatch(0x506691,&tgcx_MessageThunk,5,0xE8);
    tgcx_Log("Decision message filter %s CALL_RVA=506691 gate_RVA=B07DA6",tgcx_msg_hooked?"installed":"rejected");
}
