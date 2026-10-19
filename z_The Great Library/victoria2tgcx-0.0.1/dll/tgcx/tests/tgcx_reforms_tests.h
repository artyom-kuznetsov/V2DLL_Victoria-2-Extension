// Isolated Reforms tab / Decisions list / message filter tests on synthetic
// engine-shaped memory; no game process or state mutation.
#pragma once
static void tgcx_ReformTestString(unsigned char* at,const char* text) {
    tgcx_GameString s=tgcx_BorrowString(text);memcpy(at,&s,sizeof(s));
}
// An idle offer: chamber, no cooldown, reform delay open, no bill, no allow flags.
static tgcx_ReformOffer tgcx_ReformTestOffer(bool active=false,int group=-1,int index=-1) {
    tgcx_ReformOffer o={};o.known=true;o.legislature=true;o.delay_open=true;
    o.active=active;o.target_group=group;o.target_index=index;return o;
}
static void tgcx_ReformTests() {
    (void)&tgcx_InstallReforms;   // patches live code; covered by the guard table, not run here
    // MSVC std::string reads: inline, heap and malformed.
    unsigned char raw[0x60]={};char out[64];
    tgcx_ReformTestString(raw,"free_press");
    tgcx_Expect(tgcx_ReadGameString(reinterpret_cast<uintptr_t>(raw),out,sizeof(out)) && !strcmp(out,"free_press"),"Reforms inline string read");
    tgcx_ReformTestString(raw,"POLITICSVIEW_SOCIAL_REFORMhealth_care_trinket");
    tgcx_Expect(tgcx_ReadGameString(reinterpret_cast<uintptr_t>(raw),out,sizeof(out)) && !strcmp(out,"POLITICSVIEW_SOCIAL_REFORMhealth_care_trinket"),"Reforms heap string read");
    *reinterpret_cast<uint32_t*>(raw+0x14)=3;
    tgcx_Expect(!tgcx_ReadGameString(reinterpret_cast<uintptr_t>(raw),out,sizeof(out)),"Reforms malformed string refused");

    // Catalogue lookups by script key.
    tgcx_ReformRef free={},censored={},state={};
    bool found=tgcx_ReformFind("free_press",&free) && tgcx_ReformFind("censored_press",&censored) && tgcx_ReformFind("state_press",&state);
    tgcx_Expect(found && free.group==censored.group && !strcmp(tgcx_bill_group_keys[free.group],"press_rights"),"Reforms option keys map to press_rights");
    tgcx_Expect(!tgcx_ReformFind("no_such_option",&state),"Reforms unknown key refused");
    int bill=tgcx_ReformBill(free.group,censored.index,free.index);
    tgcx_Expect(bill>0 && !strcmp(tgcx_bill_catalog[bill-1].to,"Free Press"),"Reforms one-step bill found");
    tgcx_Expect(!tgcx_ReformBill(free.group,state.index,free.index),"Reforms two-step change has no bill");

    // What lights up (D14: next steps whose TGC allow held at the last collection).
    tgcx_ReformOffer o=tgcx_ReformTestOffer();
    tgcx_Expect(!tgcx_ReformOffers(o,free.group,censored.index,free.index),"Reforms no allow flag (fresh load) offers nothing");
    o.offer_from[free.group]=censored.index+1;
    tgcx_Expect(tgcx_ReformOffers(o,free.group,censored.index,free.index),"Reforms allowed next step offered");
    o.offer_from[free.group]=state.index+1;
    tgcx_Expect(!tgcx_ReformOffers(o,free.group,censored.index,free.index),"Reforms flag from another law (stale) offers nothing");
    o.offer_from[free.group]=censored.index+1;
    tgcx_Expect(!tgcx_ReformOffers(o,free.group,state.index,free.index),"Reforms non-catalogue row not offered");
    o.offer_from[free.group]=free.index+1;
    tgcx_Expect(!tgcx_ReformOffers(o,free.group,free.index,censored.index),"Reforms step back never negotiated");
    o.offer_from[free.group]=censored.index+1;
    o.delay_open=false;tgcx_Expect(!tgcx_ReformOffers(o,free.group,censored.index,free.index),"Reforms native reform delay offers nothing");
    o.delay_open=true;o.cooldown=true;tgcx_Expect(!tgcx_ReformOffers(o,free.group,censored.index,free.index),"Reforms cooldown offers nothing");
    o.cooldown=false;o.legislature=false;tgcx_Expect(!tgcx_ReformOffers(o,free.group,censored.index,free.index),"Reforms without a chamber offers nothing");
    o=tgcx_ReformTestOffer(true,free.group,free.index);
    tgcx_Expect(tgcx_ReformOffers(o,free.group,censored.index,free.index),"Reforms open bill lights its target");
    tgcx_Expect(!tgcx_ReformOffers(o,free.group,censored.index,state.index),"Reforms open bill lights nothing else");
    o.known=false;tgcx_Expect(!tgcx_ReformOffers(o,free.group,censored.index,free.index),"Reforms unknown state offers nothing");

    // Row hook on a synthetic FUN_006DA930 frame.
    static unsigned char option[0x60],current[0x60],group[0x60],country[0x900],stack[0x100];
    uintptr_t list[8]={};
    tgcx_ReformTestString(option+0x34,"free_press");tgcx_ReformTestString(current+0x34,"censored_press");
    *reinterpret_cast<int*>(group+0x50)=5;list[5]=reinterpret_cast<uintptr_t>(current);
    *reinterpret_cast<uintptr_t*>(country+0x860)=reinterpret_cast<uintptr_t>(list);
    uintptr_t frame=reinterpret_cast<uintptr_t>(stack+0x80);
    *reinterpret_cast<uintptr_t*>(frame-0x3C)=reinterpret_cast<uintptr_t>(option);
    *reinterpret_cast<uintptr_t*>(frame-0x1C)=reinterpret_cast<uintptr_t>(group);
    *reinterpret_cast<uintptr_t*>(frame-0x18)=reinterpret_cast<uintptr_t>(country);
    bool enabled_was=tgcx_bill_enabled,usable_was=tgcx_bill_usable;tgcx_ReformOffer offer_was=tgcx_reform_offer;
    tgcx_bill_enabled=true;tgcx_bill_usable=true;tgcx_reform_offer=tgcx_ReformTestOffer();
    tgcx_reform_offer.offer_from[free.group]=censored.index+1;
    stack[0x80-0x11]=0;tgcx_ReformRowImpl(frame);
    tgcx_Expect(stack[0x80-0x11]==1 && tgcx_reform_current[free.group]==censored.index && !tgcx_reform_native[free.group][free.index],
                "Reforms row hook enables a negotiable blocked row");
    stack[0x80-0x11]=1;tgcx_ReformRowImpl(frame);
    tgcx_Expect(stack[0x80-0x11]==1 && tgcx_reform_native[free.group][free.index],"Reforms row hook records a natively allowed row");
    tgcx_reform_offer.cooldown=true;stack[0x80-0x11]=0;tgcx_ReformRowImpl(frame);
    tgcx_Expect(stack[0x80-0x11]==0,"Reforms row hook leaves a cooled-down row disabled");
    // P46: a bill open darkens every other row, natively allowed ones included.
    tgcx_reform_offer=tgcx_ReformTestOffer(true,free.group,state.index);stack[0x80-0x11]=1;tgcx_ReformRowImpl(frame);
    tgcx_Expect(stack[0x80-0x11]==0,"Reforms row hook darkens a native row while a bill is open");
    tgcx_reform_offer=tgcx_ReformTestOffer(true,free.group,free.index);stack[0x80-0x11]=0;tgcx_ReformRowImpl(frame);
    tgcx_Expect(stack[0x80-0x11]==1,"Reforms row hook lights the open bill target");
    // Offer changes request one native rebuild; an unchanged one does not.
    tgcx_reform_offer=tgcx_ReformTestOffer();tgcx_reform_rebuild=false;
    tgcx_ReformOffer next=tgcx_ReformTestOffer(true,free.group,free.index);
    bool changed=memcmp(&next,&tgcx_reform_offer,sizeof(next))!=0;
    tgcx_Expect(changed,"Reforms offer change (bill starts) is detected");
    next=tgcx_ReformTestOffer();
    tgcx_Expect(memcmp(&next,&tgcx_reform_offer,sizeof(next))==0,"Reforms unchanged offer is not a change");
    tgcx_bill_usable=false;tgcx_reform_offer=tgcx_ReformTestOffer();stack[0x80-0x11]=0;tgcx_ReformRowImpl(frame);
    tgcx_Expect(stack[0x80-0x11]==0,"Reforms row hook idle without a usable Bill");
    tgcx_bill_usable=true;
    tgcx_ReformTestString(option+0x34,"tariff_policy_x");stack[0x80-0x11]=0;tgcx_ReformRowImpl(frame);
    tgcx_Expect(stack[0x80-0x11]==0,"Reforms row hook ignores unknown options");

    // Click hook: natively allowed rows and foreign prefixes stay native.
    static unsigned char element[0x30];DWORD thread_was=tgcx_bill_thread;tgcx_bill_thread=GetCurrentThreadId();
    tgcx_ReformTestString(element+0x14,"POLITICSVIEW_POLITICAL_REFORMfree_press");
    tgcx_reform_native[free.group][free.index]=true;
    tgcx_Expect(tgcx_ReformClickImpl(reinterpret_cast<uintptr_t>(element))==0,"Reforms click keeps a natively allowed reform native");
    tgcx_ReformTestString(element+0x14,"POLITICSVIEW_ECONOMIC_REFORMfree_press");
    tgcx_Expect(tgcx_ReformClickImpl(reinterpret_cast<uintptr_t>(element))==0,"Reforms click ignores other reform kinds");
    tgcx_bill_thread=thread_was;

    // Decisions list filter.
    static unsigned char decision[0x40];
    tgcx_Expect(tgcx_HiddenDecisionName("tgcx_bill_press_rights_up") && !tgcx_HiddenDecisionName("tgc_civilize"),"Decisions filter by prefix");
    bool installed_was=tgcx_reforms_installed;tgcx_reforms_installed=true;
    tgcx_ReformTestString(decision+8,"tgcx_collect_favours");
    tgcx_Expect(tgcx_DecisionHiddenImpl(reinterpret_cast<uintptr_t>(decision))==1,"Decisions list hides ours");
    tgcx_ReformTestString(decision+8,"form_germany");
    tgcx_Expect(tgcx_DecisionHiddenImpl(reinterpret_cast<uintptr_t>(decision))==0,"Decisions list keeps TGC's");
    tgcx_reforms_installed=false;tgcx_ReformTestString(decision+8,"tgcx_collect_favours");
    tgcx_Expect(tgcx_DecisionHiddenImpl(reinterpret_cast<uintptr_t>(decision))==0,"Decisions list unchanged without the Reforms tab");
    // Top-bar alert: ours count as ignored, TGC's do not; a Bill too small to show keeps them listed.
    tgcx_reforms_installed=true;bool known_was=tgcx_bill_size_known,usable_now=tgcx_bill_usable;
    tgcx_bill_size_known=false;tgcx_bill_usable=false;
    tgcx_ReformTestString(decision+8,"tgcx_withdraw");
    tgcx_Expect(tgcx_DecisionIgnoredImpl(reinterpret_cast<uintptr_t>(decision))==1,"Decisions alert skips ours before Politics is opened");
    tgcx_bill_size_known=true;
    tgcx_Expect(tgcx_DecisionIgnoredImpl(reinterpret_cast<uintptr_t>(decision))==0,"Decisions alert lists ours when the Bill cannot fit");
    tgcx_bill_usable=true;tgcx_ReformTestString(decision+8,"form_germany");
    tgcx_Expect(tgcx_DecisionIgnoredImpl(reinterpret_cast<uintptr_t>(decision))==0,"Decisions alert keeps TGC's");
    tgcx_bill_size_known=known_was;tgcx_bill_usable=usable_now;
    tgcx_reforms_installed=installed_was;

    // Each decision the DLL sends expects one message to skip (at most four pending).
    uintptr_t fn_was=tgcx_bill_decision_fn;bool hooked_was=tgcx_msg_hooked;
    tgcx_bill_decision_fn=reinterpret_cast<uintptr_t>(&tgcx_BillTestDecision);tgcx_msg_hooked=true;tgcx_msg_suppress=0;
    for(int i=0;i<6;++i)tgcx_BillDispatch("tgcx_count_votes");
    tgcx_Expect(tgcx_msg_suppress==4,"Decision messages: bounded skip count");
    tgcx_msg_hooked=false;tgcx_msg_suppress=0;tgcx_BillDispatch("tgcx_count_votes");
    tgcx_Expect(tgcx_msg_suppress==0,"Decision messages: no skip without the filter");
    tgcx_bill_decision_fn=fn_was;tgcx_msg_hooked=hooked_was;
    tgcx_bill_enabled=enabled_was;tgcx_bill_usable=usable_was;tgcx_reform_offer=offer_was;
}
