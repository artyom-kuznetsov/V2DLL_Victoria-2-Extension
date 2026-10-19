// LAW-2 native Bill (mockup board 2-negotiation): GUI writes and drawing only.
// Every change to the game goes through the engine's decision click, and each
// decision's own effect re-checks its conditions (R5; tools/gen_law_catalog.py).
#pragma once
#include "tgcx_bill_catalog.h"

// from V2DLL: V2TechButton.cpp, GStr memory layout (borrowed inputs only).
struct tgcx_GameString {
    char data[16]; uint32_t length, capacity;
};
// from V2DLL: V2TechButton.cpp, GStr/MakeStr borrowed-string ABI.
static tgcx_GameString tgcx_BorrowString(const char* text) {
    tgcx_GameString s={};s.length=static_cast<uint32_t>(strlen(text));s.capacity=15;
    if(s.length<16)memcpy(s.data,text,s.length+1);
    else { *reinterpret_cast<const char**>(s.data)=text;s.capacity=s.length; }
    return s;
}
typedef uintptr_t(__fastcall* tgcx_GuiOne)(uintptr_t,void*,const void*);
typedef void(__fastcall* tgcx_GuiZero)(uintptr_t,void*);
typedef int(*tgcx_BillVarReader)(uintptr_t,const char*,bool*);

// from V2DLL: V2TechButton.cpp, MintReadCountryVar. Missing variable is zero.
static int tgcx_ReadBillVar(uintptr_t country,const char* key,bool* ok) {
    __try {
        uintptr_t vars=country+0x1DC;
        auto* table=*reinterpret_cast<uintptr_t**>(vars);
        if(reinterpret_cast<uintptr_t>(table)!=tgcx_base+0x9FBB60 || table[1]!=tgcx_base+0x241BA0) {
            *ok=false;return 0;
        }
        tgcx_GameString name=tgcx_BorrowString(key);
        uintptr_t node=reinterpret_cast<tgcx_GuiOne>(table[1])(vars,nullptr,&name);
        return node?*reinterpret_cast<int*>(node+0x1C):0;
    } __except(EXCEPTION_EXECUTE_HANDLER) { *ok=false;return 0; }
}
static tgcx_BillVarReader tgcx_bill_reader=tgcx_ReadBillVar;

// ---------------------------------------------------------------- timed modifiers

// Expiry (game hours) of the country's timed modifiers this view needs; 0 =
// absent. CCountry+0x4D8 is the list has_country_modifier walks (FUN_008CD8C0):
// node +0 item, +8 next; CTimedModifier +8 modifier, +0xC date (saved as the
// modifier's date by FUN_0044E340). A modifier's name is a std::string at +0x30.
struct tgcx_BillTimers { bool known; int debate,tick,cooldown,debt[tgcx_ideology_count],broken[tgcx_ideology_count]; };
typedef bool(*tgcx_BillTimerReader)(uintptr_t,tgcx_BillTimers*);
static bool tgcx_ModifierName(uintptr_t modifier,const char** text,uint32_t* length) {
    uint32_t size=*reinterpret_cast<uint32_t*>(modifier+0x40),capacity=*reinterpret_cast<uint32_t*>(modifier+0x44);
    if(size>128 || capacity<size)return false;
    *text=capacity>15?*reinterpret_cast<const char**>(modifier+0x30):reinterpret_cast<const char*>(modifier+0x30);
    *length=size;return *text!=nullptr;
}
static bool tgcx_ReadBillTimers(uintptr_t country,tgcx_BillTimers* out) {
    *out={};
    __try {
        auto* node=*reinterpret_cast<uintptr_t**>(country+0x4D8);
        for(unsigned n=0;node;++n,node=reinterpret_cast<uintptr_t*>(node[2])) {
            if(n>=4096)return false;
            uintptr_t item=node[0];
            if(!item || *reinterpret_cast<uintptr_t*>(item)!=tgcx_base+0x9F9978)return false;
            uintptr_t modifier=*reinterpret_cast<uintptr_t*>(item+8);
            const char* text=nullptr;uint32_t size=0;
            if(!modifier || !tgcx_ModifierName(modifier,&text,&size))return false;
            if(size<6 || memcmp(text,"tgcx_",5))continue;
            int expiry=(std::max)(1,*reinterpret_cast<int*>(item+0xC));
            char name[132]={};memcpy(name,text,size);
            if(!strcmp(name,"tgcx_debate"))out->debate=expiry;
            else if(!strcmp(name,"tgcx_favours_tick"))out->tick=expiry;
            else if(!strcmp(name,"tgcx_bill_cooldown"))out->cooldown=expiry;
            else for(unsigned i=0;i<tgcx_ideology_count;++i) {
                char key[64];
                sprintf_s(key,"tgcx_debt_deadline_%s",tgcx_ideology_candidates[i]);if(!strcmp(name,key))out->debt[i]=expiry;
                sprintf_s(key,"tgcx_debt_broken_%s",tgcx_ideology_candidates[i]);if(!strcmp(name,key))out->broken[i]=expiry;
            }
        }
        out->known=true;return true;
    } __except(EXCEPTION_EXECUTE_HANDLER) { *out={};return false; }
}
static tgcx_BillTimerReader tgcx_bill_timer_reader=tgcx_ReadBillTimers;
// Whether the loaded mods define a modifier: the manager FUN_005661B0 searches
// (global RVA 0xE5A69C, hash (h+c)*61, bucket node +0 object, +4 next).
static bool tgcx_ModifierDefined(const char* key) {
    __try {
        uintptr_t manager=*reinterpret_cast<uintptr_t*>(tgcx_base+0xE5A69C);
        if(!manager)return false;
        uint32_t buckets=*reinterpret_cast<uint32_t*>(manager+4);
        auto* table=*reinterpret_cast<uintptr_t**>(manager+8);
        if(!buckets || buckets>65536 || !table)return false;
        uint32_t hash=0;
        for(const char* p=key;*p;++p)hash=(hash+static_cast<uint32_t>(static_cast<int>(*p)))*61;
        auto* node=reinterpret_cast<uintptr_t*>(table[hash%buckets]);
        for(unsigned n=0;node && n<256;++n,node=reinterpret_cast<uintptr_t*>(node[1])) {
            const char* text=nullptr;uint32_t size=0;
            if(node[0] && tgcx_ModifierName(node[0],&text,&size) && size==strlen(key) && !memcmp(text,key,size))return true;
        }
    } __except(EXCEPTION_EXECUTE_HANDLER) {}
    return false;
}
// Game hours to "14 Jan 1836" (the engine's 365-day calendar, FUN_0043ACD0).
static void tgcx_BillDate(int hours,char* out,size_t size,bool with_day=true) {
    static const char* months[]={"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
    static const int lengths[]={31,28,31,30,31,30,31,31,30,31,30,31};
    int days=hours/24,year=days/365-5000,day=days%365,month=0;
    while(month<11 && day>=lengths[month])day-=lengths[month++];
    if(with_day)sprintf_s(out,size,"%d %s %d",day+1,months[month],year);
    else sprintf_s(out,size,"%s %d",months[month],year);
}

// ---------------------------------------------------------------- model

struct tgcx_BillBloc { int seats,base,yes,no,abstain,bought,bought_yes,opposed,stance; bool promised; };
static constexpr unsigned tgcx_bill_rate_parts=5;
static const char* const tgcx_bill_rate_names[tgcx_bill_rate_parts]={"prestige","house","order","franchise","leader"};
struct tgcx_BillModel {
    uintptr_t country;
    int id,yes,no,abstain,margin,quorum,favours,rate,spent,ticks,ruling,government,rate_part[tgcx_bill_rate_parts];
    bool active,audience,crown_veto,crown_signs,valid;
    tgcx_BillBloc bloc[tgcx_ideology_count];
};
static int tgcx_BillValue(uintptr_t country,const char* key,bool* ok) {
    int raw=tgcx_bill_reader(country,key,ok);
    if(raw%1000) { *ok=false;return 0; }
    return raw/1000;
}
static bool tgcx_BillReadModel(uintptr_t country,tgcx_BillModel* out) {
    *out={};out->country=country;bool ok=country!=0;
    int house=tgcx_BillValue(country,"tgcx_house_total",&ok);
    int schema=tgcx_BillValue(country,"tgcx_gui_schema",&ok);
    out->active=schema==1?tgcx_BillValue(country,"tgcx_gui_active",&ok)==1:schema==0 && house==100;
    if(!ok || !out->active)return false;
    out->id=tgcx_BillValue(country,"tgcx_gui_bill_id",&ok);
    out->yes=tgcx_BillValue(country,"tgcx_yes",&ok);
    out->no=tgcx_BillValue(country,"tgcx_no",&ok);
    out->margin=tgcx_BillValue(country,"tgcx_margin",&ok);
    out->quorum=tgcx_BillValue(country,"tgcx_quorum",&ok);
    out->favours=tgcx_BillValue(country,"tgcx_favours",&ok);
    out->rate=tgcx_BillValue(country,"tgcx_rate",&ok);
    out->spent=tgcx_BillValue(country,"tgcx_spent",&ok);
    out->ticks=tgcx_BillValue(country,"tgcx_favours_ticks",&ok);
    out->ruling=tgcx_BillValue(country,"tgcx_gui_ruling",&ok);
    out->government=tgcx_BillValue(country,"tgcx_gui_government",&ok);
    out->audience=tgcx_BillValue(country,"tgcx_gui_crown_audience",&ok)==1;
    out->crown_veto=tgcx_BillValue(country,"tgcx_gui_crown_veto",&ok)==1;
    out->crown_signs=tgcx_BillValue(country,"tgcx_gui_crown_signs",&ok)==1;
    for(unsigned p=0;p<tgcx_bill_rate_parts;++p) {
        char key[64];sprintf_s(key,"tgcx_gui_rate_%s",tgcx_bill_rate_names[p]);
        out->rate_part[p]=tgcx_BillValue(country,key,&ok);
        if(out->rate_part[p]<-8 || out->rate_part[p]>8)ok=false;
    }
    int sum=0,aye=0,nay=0;
    for(unsigned i=0;i<tgcx_ideology_count;++i) {
        auto& b=out->bloc[i];char key[96];
#define TGCX_BILL_READ(field,prefix) sprintf_s(key,"tgcx_" prefix "_%s",tgcx_ideology_candidates[i]);b.field=tgcx_BillValue(country,key,&ok)
        TGCX_BILL_READ(seats,"seats");TGCX_BILL_READ(base,"base_yes");TGCX_BILL_READ(no,"left");
        TGCX_BILL_READ(stance,"gui_stance");TGCX_BILL_READ(opposed,"opposed");
#undef TGCX_BILL_READ
        sprintf_s(key,"tgcx_buy_%s_total",tgcx_ideology_candidates[i]);b.bought=tgcx_BillValue(country,key,&ok);
        sprintf_s(key,"tgcx_buy_%s_yes",tgcx_ideology_candidates[i]);b.bought_yes=tgcx_BillValue(country,key,&ok);
        sprintf_s(key,"tgcx_gui_promised_%s",tgcx_ideology_candidates[i]);b.promised=tgcx_BillValue(country,key,&ok)==1;
        if(b.seats<0 || b.seats>100 || b.seats%5 || b.base<0 || b.base>b.seats || b.base%5 ||
           b.no<0 || b.no>b.seats || b.no%5 || b.bought<0 || b.bought>100 || b.bought_yes<0 ||
           b.bought_yes>b.bought || b.stance<-2 || b.stance>2 || b.opposed<0 || b.opposed>100)ok=false;
        int opposed=(std::max)(0,b.seats-b.base);
        b.abstain=b.promised?0:(std::min)(b.bought,opposed)-(std::min)(b.bought_yes,opposed);
        b.yes=b.seats-b.no-b.abstain;
        if(b.yes<0 || b.yes>b.seats || b.abstain<0 || b.abstain>b.seats)ok=false;
        sum+=b.seats;aye+=b.yes;nay+=b.no;
    }
    out->abstain=100-out->yes-out->no;
    out->valid=ok && house==100 && sum==100 && aye==out->yes && nay==out->no &&
        out->yes>=0 && out->no>=0 && out->abstain>=0 && out->margin==out->yes-out->no &&
        out->quorum==out->yes+out->no && out->id>=0 && out->id<=static_cast<int>(_countof(tgcx_bill_catalog)) &&
        out->favours>=0 && out->favours<=100 && out->rate>=0 && out->rate<=8 && out->spent>=0 && out->ticks>=0 &&
        out->ruling>=0 && out->ruling<=static_cast<int>(tgcx_ideology_count) &&
        out->government>=0 && out->government<=static_cast<int>(_countof(tgcx_bill_governments));
    return out->valid;
}

// ---------------------------------------------------------------- view plan

// One button: the decision it sends, its price and whether it is shown/usable.
// The DLL only greys out what the script would refuse; the script decides.
struct tgcx_BillAction { char decision[64]; int price; bool visible,enabled; };
struct tgcx_BillCardPlan { tgcx_BillAction a,b; const char* note; };
struct tgcx_BillView {
    unsigned slots,slot[tgcx_bill_cards],pages,page;
    tgcx_BillCardPlan card[tgcx_bill_cards];
    tgcx_BillAction audience,count,withdraw,vote;
};
static int tgcx_BillPrice(const int* table,int stance,int lot,bool broken) {
    return table[stance+2]*lot/5*(broken?tgcx_bill_broken_factor:1);
}
static void tgcx_BillPlanCard(const tgcx_BillModel& m,const tgcx_BillTimers& t,unsigned i,int lot,tgcx_BillCardPlan* out) {
    *out={};const auto& b=m.bloc[i];
    const char* code=tgcx_bill_stance_codes[b.stance+2];bool broken=t.broken[i]!=0;
    if(!m.id) { out->note="Count the votes to identify this bill.";return; }
    if(b.promised) {
        out->b={"",0,true,false};return;
    }
    const char* suffix=lot==25?"_25":"";const char* twin=broken?"_x2":"";
    if(b.stance<=-1 && b.no>0) {
        auto& a=out->a;a.visible=true;a.price=tgcx_BillPrice(tgcx_bill_abstain_price,b.stance,lot,broken);
        sprintf_s(a.decision,"tgcx_buy_abstain_%s_%s%s%s",tgcx_ideology_candidates[i],code,suffix,twin);
        a.enabled=m.favours>=a.price && b.no>=lot;
    }
    if(b.stance==-2) {
        // Securing every opposing seat needs one not already bought to vote Aye.
        auto& p=out->b;p.visible=true;sprintf_s(p.decision,"tgcx_promise_%s",tgcx_ideology_candidates[i]);
        p.enabled=(!t.known || !t.debt[i]) && b.opposed>b.bought_yes;
    } else if(b.no>0) {
        auto& v=out->b;v.visible=true;v.price=tgcx_BillPrice(tgcx_bill_aye_price,b.stance,lot,broken);
        sprintf_s(v.decision,"tgcx_buy_vote_%s_%s%s%s",tgcx_ideology_candidates[i],code,suffix,twin);
        v.enabled=m.favours>=v.price && b.no>=lot;
    }
    if(!out->a.visible && !out->b.visible)
        out->note=b.yes==b.seats?"Votes Aye on its own: nothing to buy.":"No seats left to buy.";
}
// Sort keys (header buttons): 0 seats, 1 most opposed first, 2 most friendly
// first (the board's order), 3 most Nay. Clicking the active key pages on.
static unsigned tgcx_BillOrder(const tgcx_BillModel& m,int sort,unsigned order[tgcx_ideology_count]) {
    unsigned n=0;
    for(unsigned i=0;i<tgcx_ideology_count;++i)if(m.bloc[i].seats)order[n++]=i;
    auto key=[&](unsigned i){const auto& b=m.bloc[i];return sort==1?-b.stance:sort==2?b.stance:sort==3?b.no:b.seats;};
    for(unsigned x=1;x<n;++x)for(unsigned y=x;y>0;--y) {
        unsigned p=order[y-1],q=order[y];
        bool swap=key(q)>key(p) || (key(q)==key(p) && (m.bloc[q].seats>m.bloc[p].seats ||
            (m.bloc[q].seats==m.bloc[p].seats && q<p)));
        if(!swap)break;order[y-1]=q;order[y]=p;
    }
    return n;
}
static void tgcx_BillBuildView(const tgcx_BillModel& m,const tgcx_BillTimers& t,int sort,unsigned page,int lot,tgcx_BillView* out) {
    *out={};unsigned order[tgcx_ideology_count]={};unsigned n=tgcx_BillOrder(m,sort,order);
    out->pages=(std::max)(1u,(n+tgcx_bill_cards-1)/tgcx_bill_cards);out->page=page%out->pages;
    for(unsigned s=0;s<tgcx_bill_cards && out->page*tgcx_bill_cards+s<n;++s) {
        out->slot[s]=order[out->page*tgcx_bill_cards+s];++out->slots;
        tgcx_BillPlanCard(m,t,out->slot[s],lot,&out->card[s]);
    }
    out->audience={"tgcx_audience",tgcx_bill_audience_price,m.crown_veto,
        m.crown_veto && m.id>0 && !m.audience && m.favours>=tgcx_bill_audience_price};
    out->count={"tgcx_count_votes",0,true,true};
    out->withdraw={"tgcx_withdraw",0,true,true};
    out->vote={"tgcx_call_vote",0,true,!t.known || !t.debate};
}

// ---------------------------------------------------------------- native window state

static bool tgcx_bill_enabled=false,tgcx_bill_open=false,tgcx_bill_was_active=false,tgcx_bill_dirty=true;
// Our GUI is loaded and the screen fits the Bill: the Reforms tab and the
// Decisions list may then rely on it (tgcx_reforms.h).
static bool tgcx_bill_usable=false,tgcx_bill_size_known=false;
// Decisions the DLL sent whose "decision taken" message is still to come.
static volatile LONG tgcx_msg_suppress=0;
static DWORD tgcx_msg_suppress_tick=0;
static bool tgcx_msg_hooked=false;
static uintptr_t tgcx_bill_root=0,tgcx_bill_window=0;
static DWORD tgcx_bill_tick=0,tgcx_bill_thread=0;
static tgcx_BillModel tgcx_bill_model={};
static tgcx_BillTimers tgcx_bill_timers={};
static tgcx_BillView tgcx_bill_view={};
static int tgcx_bill_mode=2,tgcx_bill_lot=25,tgcx_bill_sort=2;
static unsigned tgcx_bill_page=0;
static uint32_t tgcx_bill_date=0;
static constexpr unsigned tgcx_bill_actions=TGCX_B_COUNT_OF+1;   // window buttons + Politics' Open Bill
static constexpr unsigned tgcx_bill_open_action=TGCX_B_COUNT_OF;
static unsigned char tgcx_bill_glue[tgcx_bill_actions][44]={};
static bool tgcx_bill_bound[tgcx_bill_actions]={};
static uintptr_t tgcx_bill_decision_fn=0;
static unsigned int tgcx_bill_draws=0;
static char tgcx_bill_texts[TGCX_T_COUNT_OF][160]={};
static bool tgcx_bill_text_set[TGCX_T_COUNT_OF]={};
// Negotiation log: observed changes, stamped with the game date (session only).
static char tgcx_bill_log[4][128]={};
static unsigned tgcx_bill_log_count=0;

static void tgcx_BillLogLine(uint32_t hours,const char* text) {
    if(tgcx_bill_log_count==4) { memmove(tgcx_bill_log[0],tgcx_bill_log[1],3*sizeof(tgcx_bill_log[0]));--tgcx_bill_log_count; }
    char date[32];tgcx_BillDate(static_cast<int>(hours),date,sizeof(date));
    sprintf_s(tgcx_bill_log[tgcx_bill_log_count++],"%s: %s",date,text);
}
static void tgcx_BillObserve(const tgcx_BillModel& old,const tgcx_BillModel& now,const tgcx_BillTimers& timers,uint32_t hours) {
    int favours=now.spent-old.spent;char text[128],cost[32];
    auto price=[&]()->const char*{ if(favours<=0)return "";sprintf_s(cost," (%d favour%s)",favours,favours==1?"":"s");favours=0;return cost; };
    for(unsigned i=0;i<tgcx_ideology_count;++i) {
        const auto& a=old.bloc[i];const auto& b=now.bloc[i];
        if(b.promised && !a.promised) {
            char due[32]="";if(timers.debt[i])tgcx_BillDate(timers.debt[i],due,sizeof(due),false);
            sprintf_s(text,"%s promised a law of their choice%s%s.",tgcx_bill_bloc_names[i],due[0]?" before ":"",due);
            tgcx_BillLogLine(hours,text);continue;
        }
        int abstain=(b.bought-b.bought_yes)-(a.bought-a.bought_yes),aye=b.bought_yes-a.bought_yes;
        if(abstain>0) { const char* p=price();sprintf_s(text,"%d %s seats will abstain%s.",abstain,tgcx_bill_bloc_singular[i],p);tgcx_BillLogLine(hours,text); }
        if(aye>0) { const char* p=price();sprintf_s(text,"%d %s seats will vote Aye%s.",aye,tgcx_bill_bloc_singular[i],p);tgcx_BillLogLine(hours,text); }
    }
    if(now.audience && !old.audience) { sprintf_s(text,"The Crown granted an audience%s.",price());tgcx_BillLogLine(hours,text); }
}

// The native foreground method detaches the child's render subtree from
// Politics. Its position setter and the chart then share screen coordinates.
static bool tgcx_BillForeground() {
    auto* table=*reinterpret_cast<uintptr_t**>(tgcx_bill_window);
    if(table[11]!=tgcx_base+0x5E2FC0 || table[6]!=tgcx_base+0x5E3BA0)return false;
    uintptr_t renderer=*reinterpret_cast<uintptr_t*>(tgcx_bill_window+0x90);
    if(!renderer)return false;
    int width=*reinterpret_cast<int*>(renderer+0x6B9BC),height=*reinterpret_cast<int*>(renderer+0x6B9C0);
    if(width<tgcx_bill_width || width>16384 || height<tgcx_bill_height || height>16384)return false;
    reinterpret_cast<tgcx_GuiZero>(table[11])(tgcx_bill_window,nullptr);
    // Native GUI positions are screen pixels; its render transform uses a
    // centred coordinate system. The packed setter supplies that conversion.
    typedef void(__fastcall* Position)(uintptr_t,void*,uint32_t);
    uint32_t position=static_cast<uint16_t>((width-tgcx_bill_width)/2)|
        (static_cast<uint32_t>(static_cast<uint16_t>((height-tgcx_bill_height)/2))<<16);
    reinterpret_cast<Position>(table[6])(tgcx_bill_window,nullptr,position);
    return true;
}
static bool tgcx_BillScreenRect(const tgcx_GuiRect& screen,tgcx_GuiRect* out) {
    uintptr_t inner=*reinterpret_cast<uintptr_t*>(tgcx_bill_window+0x494);
    if(!inner || *reinterpret_cast<uintptr_t*>(inner)!=tgcx_base+0xA38350)return false;
    // Live 0.3.2: +FC/+100 are centred render inputs, not screen pixels.
    // The world matrix translation is screen X / negative screen Y.
    float x=*reinterpret_cast<float*>(inner+0x84),y=-*reinterpret_cast<float*>(inner+0x88);
    if(!(x>=0 && y>=0 && x+tgcx_bill_width<=screen.width && y+tgcx_bill_height<=screen.height))return false;
    *out={static_cast<int>(x),static_cast<int>(y),screen.width,screen.height};
    return true;
}

static uintptr_t tgcx_BillFind(uintptr_t host,unsigned slot,uintptr_t expected,const char* key) {
    auto* table=*reinterpret_cast<uintptr_t**>(host);
    if(table[slot]!=tgcx_base+expected)return 0;
    tgcx_GameString name=tgcx_BorrowString(key);
    return reinterpret_cast<tgcx_GuiOne>(table[slot])(host,nullptr,&name);
}
static void tgcx_BillVisibility(bool show) {
    if(!tgcx_bill_window)return;
    auto* table=*reinterpret_cast<uintptr_t**>(tgcx_bill_window);
    unsigned slot=show?8:9;
    if(table[slot]!=tgcx_base+(show?0x5E4450:0x5E4030))return;
    // Raise only on opening: repeated ticks must not put the Bill above a
    // subsequently opened event/report or change native tooltip ordering.
    if(show && !*reinterpret_cast<unsigned char*>(tgcx_bill_window+0x67) && !tgcx_BillForeground())return;
    reinterpret_cast<tgcx_GuiZero>(table[slot])(tgcx_bill_window,nullptr);
}
static void tgcx_BillReset(bool destroyed) {
    __try { tgcx_BillVisibility(false); } __except(EXCEPTION_EXECUTE_HANDLER) {}
    tgcx_bill_open=false;tgcx_bill_was_active=false;tgcx_bill_model.valid=false;tgcx_bill_dirty=true;
    if(destroyed) {
        tgcx_bill_root=0;tgcx_bill_window=0;memset(tgcx_bill_bound,0,sizeof(tgcx_bill_bound));
        memset(tgcx_bill_text_set,0,sizeof(tgcx_bill_text_set));
    }
}
// Generic guarded dispatch: the native Politics decision click with our own
// decision name. FUN_006DCE10 does not test potential/allow, so every decision
// the Bill sends checks them in its effect (LAW-2, gen_law_catalog.py).
static bool tgcx_BillDispatch(const char* decision) {
    if(!tgcx_bill_decision_fn || strncmp(decision,"tgcx_",5))return false;
    size_t length=strlen(decision);
    if(length>63)return false;
    for(size_t i=0;i<length;++i)if(!(islower(static_cast<unsigned char>(decision[i])) || isdigit(static_cast<unsigned char>(decision[i])) || decision[i]=='_'))return false;
    // from V2DLL: V2TechButton.cpp, FireDecision fake element and native prefix.
    static char text[96];sprintf_s(text,"POLITICSVIEW_DECISION%s",decision);
    unsigned char element[0x30]={};tgcx_GameString name=tgcx_BorrowString(text);
    memcpy(element+0x14,&name,sizeof(name));
    if(tgcx_msg_hooked) { if(tgcx_msg_suppress<4)InterlockedIncrement(&tgcx_msg_suppress);tgcx_msg_suppress_tick=GetTickCount(); }
    reinterpret_cast<void(__stdcall*)(void*)>(tgcx_bill_decision_fn)(element);
    return true;
}
static bool tgcx_BillSend(const tgcx_BillAction& action,const char* tag) {
    if(!action.visible || !action.enabled || !tgcx_BillDispatch(action.decision))return false;
    tgcx_bill_tick=0;tgcx_Log("Bill %s requested through native decision handler tag=%.4s",action.decision,tag);
    return true;
}
// Native observer callbacks run in the game's GUI thread, preserving CPU state.
// Every click re-reads the script state; the view it acts on is rebuilt fresh.
static void tgcx_BillClickImpl(int action) {
    if(!tgcx_bill_enabled || GetCurrentThreadId()!=tgcx_bill_thread || !tgcx_politics)return;
    __try {
        if(action==TGCX_B_CLOSE) { tgcx_bill_open=false;tgcx_BillVisibility(false);return; }
        tgcx_Snapshot sample={};bool fault=false;tgcx_BillModel fresh={};tgcx_BillTimers timers={};
        if(!tgcx_ReadSnapshot(&sample,&fault) || !tgcx_BillReadModel(sample.country,&fresh))return;
        tgcx_bill_timer_reader(sample.country,&timers);
        tgcx_bill_dirty=true;tgcx_bill_tick=0;
        if(action==static_cast<int>(tgcx_bill_open_action)) { tgcx_bill_open=true;tgcx_BillVisibility(true);return; }
        if(action>=TGCX_B_SORT_0 && action<=TGCX_B_SORT_3) {
            int sort=action-TGCX_B_SORT_0;
            if(sort==tgcx_bill_sort)++tgcx_bill_page;else { tgcx_bill_sort=sort;tgcx_bill_page=0; }
            return;
        }
        if(action>=TGCX_B_MODE_0 && action<=TGCX_B_MODE_2) { tgcx_bill_mode=action-TGCX_B_MODE_0;return; }
        if(action==TGCX_B_LOT_0 || action==TGCX_B_LOT_1) { tgcx_bill_lot=action==TGCX_B_LOT_0?5:25;return; }
        tgcx_BillView view={};tgcx_BillBuildView(fresh,timers,tgcx_bill_sort,tgcx_bill_page,tgcx_bill_lot,&view);
        if(action>=TGCX_B_CARD_0_A && action<=TGCX_B_CARD_2_B) {
            unsigned slot=(action-TGCX_B_CARD_0_A)/2;bool second=(action-TGCX_B_CARD_0_A)%2!=0;
            // A card that now shows another bloc was stale: refresh, send nothing.
            if(slot>=view.slots || !tgcx_bill_view.slots || view.slot[slot]!=tgcx_bill_view.slot[slot])return;
            tgcx_BillSend(second?view.card[slot].b:view.card[slot].a,sample.country_tag);
            return;
        }
        if(action==TGCX_B_AUDIENCE)tgcx_BillSend(view.audience,sample.country_tag);
        else if(action==TGCX_B_COUNT)tgcx_BillSend(view.count,sample.country_tag);
        else if(action==TGCX_B_WITHDRAW)tgcx_BillSend(view.withdraw,sample.country_tag);
        else if(action==TGCX_B_VOTE)tgcx_BillSend(view.vote,sample.country_tag);
    } __except(EXCEPTION_EXECUTE_HANDLER) { tgcx_Log("Bill click rejected: native GUI/command read fault"); }
}
static void __cdecl tgcx_BillClick(int action) { tgcx_CpuScope cpu;tgcx_BillClickImpl(action); }
// from V2DLL: V2TechButton.cpp, button observer thunk; CPU preservation extended.
#define TGCX_BILL_THUNK(action) \
__declspec(naked) static void tgcx_BillThunk##action() { \
    __asm { pushfd } __asm { pushad } __asm { mov ebx,esp } \
    __asm { sub esp,528 } __asm { and esp,-16 } __asm { fxsave [esp] } \
    __asm { cld } __asm { push action } __asm { call tgcx_BillClick } __asm { add esp,4 } \
    __asm { fxrstor [esp] } __asm { mov esp,ebx } __asm { popad } __asm { popfd } __asm { ret } \
}
TGCX_BILL_THUNK(0) TGCX_BILL_THUNK(1) TGCX_BILL_THUNK(2) TGCX_BILL_THUNK(3) TGCX_BILL_THUNK(4)
TGCX_BILL_THUNK(5) TGCX_BILL_THUNK(6) TGCX_BILL_THUNK(7) TGCX_BILL_THUNK(8) TGCX_BILL_THUNK(9)
TGCX_BILL_THUNK(10) TGCX_BILL_THUNK(11) TGCX_BILL_THUNK(12) TGCX_BILL_THUNK(13) TGCX_BILL_THUNK(14)
TGCX_BILL_THUNK(15) TGCX_BILL_THUNK(16) TGCX_BILL_THUNK(17) TGCX_BILL_THUNK(18) TGCX_BILL_THUNK(19)
TGCX_BILL_THUNK(20)
#undef TGCX_BILL_THUNK
static void (*const tgcx_bill_thunks[])()={
    tgcx_BillThunk0,tgcx_BillThunk1,tgcx_BillThunk2,tgcx_BillThunk3,tgcx_BillThunk4,tgcx_BillThunk5,tgcx_BillThunk6,
    tgcx_BillThunk7,tgcx_BillThunk8,tgcx_BillThunk9,tgcx_BillThunk10,tgcx_BillThunk11,tgcx_BillThunk12,tgcx_BillThunk13,
    tgcx_BillThunk14,tgcx_BillThunk15,tgcx_BillThunk16,tgcx_BillThunk17,tgcx_BillThunk18,tgcx_BillThunk19,tgcx_BillThunk20};
static_assert(_countof(tgcx_bill_thunks)==tgcx_bill_actions,"one native observer thunk per Bill button");
// from V2DLL: V2TechButton.cpp, named-button/observable binding pattern.
static void tgcx_BillBind(uintptr_t host,const char* name,unsigned action) {
    if(tgcx_bill_bound[action])return;
    uintptr_t button=tgcx_BillFind(host,13,0x5E4C80,name);
    if(!button)return;
    uintptr_t observable=button+0x54;
    auto* vt=*reinterpret_cast<uintptr_t**>(observable);
    if(vt[1]<tgcx_base || vt[1]>=tgcx_base+tgcx_image_size)return;
    unsigned char* glue=tgcx_bill_glue[action];memset(glue,0,44);
    // Politics' 44-byte observer uses +20 for deletion notification; the
    // InGameIdler template reads +38 and is not interchangeable (P31).
    *reinterpret_cast<uintptr_t*>(glue)=tgcx_base+0xA0E48C;
    *reinterpret_cast<uintptr_t*>(glue+4)=tgcx_politics;
    *reinterpret_cast<uintptr_t*>(glue+8)=reinterpret_cast<uintptr_t>(tgcx_bill_thunks[action]);
    reinterpret_cast<tgcx_GuiOne>(vt[1])(observable,nullptr,glue);
    tgcx_bill_bound[action]=true;
}
// from V2DLL: V2TechButton.cpp, BudgetUpdate string assign/ESI text setter ABI.
static void tgcx_BillSetText(const char* name,const char* text) {
    uintptr_t box=tgcx_BillFind(tgcx_bill_window,15,0x5E4D00,name);
    if(!box)return;
    tgcx_GameString str=tgcx_BorrowString(text);
    typedef void(__fastcall* Assign)(uintptr_t,void*,const void*,unsigned,unsigned);
    reinterpret_cast<Assign>(tgcx_base+0x8ED0)(box+0xDC,nullptr,&str,0,0xFFFFFFFFu);
    uintptr_t inner=*reinterpret_cast<uintptr_t*>(box+0xA0);
    if(!inner)return;
    uintptr_t fn=tgcx_base+0x65ECC0;const void* arg=&str;
    __asm { push esi }
    __asm { push 0 }
    __asm { push arg }
    __asm { mov esi,inner }
    __asm { call fn }
    __asm { pop esi }
}
// Text writes are cached: the setter runs only when a label changes.
static void tgcx_BillText(unsigned id,const char* text) {
    if(tgcx_bill_text_set[id] && !strcmp(tgcx_bill_texts[id],text))return;
    strncpy_s(tgcx_bill_texts[id],text,_TRUNCATE);tgcx_bill_text_set[id]=true;
    tgcx_BillSetText(tgcx_bill_text_names[id],tgcx_bill_texts[id]);
}
static void tgcx_BillTextf(unsigned id,const char* format,...) {
    char text[160];va_list args;va_start(args,format);vsprintf_s(text,format,args);va_end(args);tgcx_BillText(id,text);
}
static void tgcx_BillButtonLabel(unsigned id,const tgcx_BillAction& action,const char* label) {
    tgcx_BillText(id,action.visible?label:"");
}
static void tgcx_BillLabels(const tgcx_BillModel& m,const tgcx_BillTimers& t,const tgcx_BillView& v) {
    char text[160],date[32];
    const tgcx_BillInfo* law=m.id>0?&tgcx_bill_catalog[m.id-1]:nullptr;
    tgcx_BillText(TGCX_T_LAW,law?law->title:"Active bill");
    // A transition too wide for vic_18 goes to the Arial12 bold line in the same place.
    bool compact=law && law->transition_small;
    if(law)tgcx_BillTextf(compact?TGCX_T_TRANSITION_SMALL:TGCX_T_TRANSITION,"%s \xBB %s",law->transition_from,law->to);
    else tgcx_BillText(TGCX_T_TRANSITION,"Count once to identify the bill.");
    tgcx_BillText(compact?TGCX_T_TRANSITION:TGCX_T_TRANSITION_SMALL,"");
    const char* by=m.ruling>0?tgcx_bill_bloc_names[m.ruling-1]:nullptr;
    if(t.debate>1) {
        tgcx_BillDate(t.debate-tgcx_bill_debate_days*24,date,sizeof(date));
        tgcx_BillTextf(TGCX_T_INTRO,by?"Introduced %s by the %s":"Introduced %s",date,by);
    } else if(t.known)tgcx_BillText(TGCX_T_INTRO,"Debate over: the vote can be called");
    else tgcx_BillTextf(TGCX_T_INTRO,by?"Introduced by the %s":"Under debate",by);
    if(v.pages>1)tgcx_BillTextf(TGCX_T_SORT_0,"Bloc %u/%u",v.page+1,v.pages);else tgcx_BillText(TGCX_T_SORT_0,"Bloc");
    tgcx_BillTextf(TGCX_T_LEGEND_0,"%d Aye",m.yes);tgcx_BillTextf(TGCX_T_LEGEND_1,"%d Abstain",m.abstain);tgcx_BillTextf(TGCX_T_LEGEND_2,"%d Nay",m.no);
    tgcx_BillText(TGCX_T_CHART_NOTE,"TGC starting votes + negotiated seats.");
    tgcx_BillTextf(TGCX_T_FAVOURS,"%d",m.favours);
    tgcx_BillTextf(TGCX_T_RATE,"\xA7G+%d per month\xA7!",m.rate);
    tgcx_BillTextf(TGCX_T_SPENT,"Spent on this bill: %d",m.spent);
    strcpy_s(text,"From ");unsigned parts=0;
    for(unsigned p=0;p<tgcx_bill_rate_parts;++p)if(m.rate_part[p]>0) {
        if(parts++)strcat_s(text,", ");strcat_s(text,tgcx_bill_rate_names[p]);
    }
    tgcx_BillText(TGCX_T_SOURCES,parts?text:"From the base rate");
    // Price table at the chosen lot (catalogue friendly Aye = the undecided price).
    tgcx_BillText(TGCX_T_TABLE_1_ABSTAIN,"\x96");
    tgcx_BillTextf(TGCX_T_TABLE_1_AYE,"%d",tgcx_BillPrice(tgcx_bill_aye_price,0,tgcx_bill_lot,false));
    tgcx_BillTextf(TGCX_T_TABLE_2_ABSTAIN,"%d",tgcx_BillPrice(tgcx_bill_abstain_price,-1,tgcx_bill_lot,false));
    tgcx_BillTextf(TGCX_T_TABLE_2_AYE,"%d",tgcx_BillPrice(tgcx_bill_aye_price,-1,tgcx_bill_lot,false));
    tgcx_BillTextf(TGCX_T_TABLE_3_ABSTAIN,"%d",tgcx_BillPrice(tgcx_bill_abstain_price,-2,tgcx_bill_lot,false));
    tgcx_BillText(TGCX_T_TABLE_3_AYE,"promise");
    // Debts: one entry in the board's long form, several one line each.
    char lines[4][64]={};unsigned count=0,entries=0;
    for(unsigned i=0;i<tgcx_ideology_count;++i)entries+=(t.debt[i]?1:0)+(t.broken[i]?1:0);
    for(unsigned i=0;i<tgcx_ideology_count && count<4;++i) {
        if(t.debt[i]) {
            tgcx_BillDate(t.debt[i],date,sizeof(date),false);
            if(entries==1) {
                sprintf_s(lines[0],"%s: enact a law they want",tgcx_bill_bloc_names[i]);
                sprintf_s(lines[1],"before %s. If not: +%d",date,tgcx_bill_broken_militancy);
                strcpy_s(lines[2],"militancy in their pops, and their");
                sprintf_s(lines[3],"votes cost double for %d years.",tgcx_bill_broken_years);count=4;
            } else sprintf_s(lines[count++],"%s: law owed before %s",tgcx_bill_bloc_names[i],date);
        }
        if(t.broken[i] && count<4) {
            tgcx_BillDate(t.broken[i],date,sizeof(date),false);
            if(entries==1) {
                sprintf_s(lines[0],"%s: a promise was broken.",tgcx_bill_bloc_names[i]);
                sprintf_s(lines[1],"Their votes cost double until %s.",date);count=2;
            } else sprintf_s(lines[count++],"%s: double price until %s",tgcx_bill_bloc_names[i],date);
        }
    }
    if(!t.known)strcpy_s(lines[0],"Debts are listed under Decisions.");
    else if(!entries)strcpy_s(lines[0],"No promises owed.");
    for(unsigned l=0;l<4;++l)tgcx_BillText(TGCX_T_DEBT_0+l,lines[l]);
    // Bloc cards.
    for(unsigned s=0;s<tgcx_bill_cards;++s) {
        unsigned base=TGCX_T_CARD_0_NAME+s*(TGCX_T_CARD_1_NAME-TGCX_T_CARD_0_NAME);
        auto text_at=[&](unsigned field){return base+field-TGCX_T_CARD_0_NAME;};
        if(s>=v.slots) { for(unsigned f=TGCX_T_CARD_0_NAME;f<TGCX_T_CARD_1_NAME;++f)tgcx_BillText(text_at(f),"");continue; }
        unsigned i=v.slot[s];const auto& b=m.bloc[i];const auto& c=v.card[s];
        tgcx_BillText(text_at(TGCX_T_CARD_0_NAME),tgcx_bill_bloc_singular[i]);
        tgcx_BillTextf(text_at(TGCX_T_CARD_0_SEATS),"%d seats",b.seats);
        tgcx_BillTextf(text_at(TGCX_T_CARD_0_NATIVE),"TGC: %d Aye, %d Nay",b.base,b.seats-b.base);
        for(unsigned r=0;r<3;++r) {
            const char* option="";
            if(law) {
                const auto& g=tgcx_bill_groups[law->group];
                unsigned lo=(std::min)(law->from_index,law->to_index),hi=(std::max)(law->from_index,law->to_index);
                unsigned start=g.count<=3?0:(std::min)(static_cast<unsigned>(g.count-3),lo>0?lo-1:0u);
                if(hi>=start+3)start=hi-2;
                if(start+r<g.count)option=g.short_options[start+r];
            }
            tgcx_BillText(text_at(TGCX_T_CARD_0_OPTION_0)+r,option);
        }
        static const char* stance_note[]={"\x96""2, strongly","\x96""1","undecided","+1","+2, strongly"};
        if(b.promised) {
            tgcx_BillText(text_at(TGCX_T_CARD_0_STANCE),"\xA7GPromised\xA7!");tgcx_BillText(text_at(TGCX_T_CARD_0_STANCE_NOTE),"law owed");
        } else {
            tgcx_BillText(text_at(TGCX_T_CARD_0_STANCE),!m.id?"Count":b.stance>0?"\xA7GFor\xA7!":b.stance<0?"\xA7RAgainst\xA7!":"Undecided");
            tgcx_BillText(text_at(TGCX_T_CARD_0_STANCE_NOTE),m.id?stance_note[b.stance+2]:"");
        }
        tgcx_BillTextf(text_at(TGCX_T_CARD_0_AYE),"\xA7G%d Aye\xA7!",b.yes);
        tgcx_BillTextf(text_at(TGCX_T_CARD_0_ABSTAIN),"%d Abstain",b.abstain);
        tgcx_BillTextf(text_at(TGCX_T_CARD_0_NAY),"\xA7R%d Nay\xA7!",b.no);
        tgcx_BillText(text_at(TGCX_T_CARD_0_BOUGHT_LABEL),"Bought");
        if(b.promised)tgcx_BillText(text_at(TGCX_T_CARD_0_BOUGHT),"a promise");
        else if(b.bought)tgcx_BillTextf(text_at(TGCX_T_CARD_0_BOUGHT),"%d abstain, %d aye",b.bought-b.bought_yes,b.bought_yes);
        else tgcx_BillText(text_at(TGCX_T_CARD_0_BOUGHT),b.no?"nothing yet":"nothing needed");
        tgcx_BillText(text_at(TGCX_T_CARD_0_NOTE),c.note?c.note:"");
        sprintf_s(text,"Abstain %d (%d)",tgcx_bill_lot,c.a.price);tgcx_BillButtonLabel(text_at(TGCX_T_CARD_0_A),c.a,text);
        if(b.promised)strcpy_s(text,"Law promised");
        else if(b.stance==-2)strcpy_s(text,"Promise a law");
        else sprintf_s(text,"Aye %d (%d)",tgcx_bill_lot,c.b.price);
        tgcx_BillButtonLabel(text_at(TGCX_T_CARD_0_B),c.b,text);
    }
    // The Crown.
    const char* government=m.government>0?tgcx_bill_governments[m.government-1]:"";
    tgcx_BillText(TGCX_T_CROWN_NAME,government);
    if(!m.crown_veto) {
        tgcx_BillText(TGCX_T_CROWN_DESC_0,"The Crown has no veto");tgcx_BillText(TGCX_T_CROWN_DESC_1,"under this government.");
        tgcx_BillText(TGCX_T_CROWN_STANCE,"");tgcx_BillText(TGCX_T_CROWN_STANCE_NOTE,"");
        tgcx_BillText(TGCX_T_CROWN_VETO_0,"Cannot veto");tgcx_BillText(TGCX_T_CROWN_VETO_1,"");
    } else {
        bool distrust=m.ruling>0 && tgcx_bill_distrusted[m.ruling-1];
        if(m.ruling>0)tgcx_BillTextf(TGCX_T_CROWN_DESC_0,"%s the %s:",distrust?"Distrusts":"Trusts",tgcx_bill_bloc_names[m.ruling-1]);
        else tgcx_BillText(TGCX_T_CROWN_DESC_0,"");
        if(m.ruling>0)tgcx_BillTextf(TGCX_T_CROWN_DESC_1,distrust?"starts against %s bills":"signs %s bills",tgcx_bill_bloc_singular[m.ruling-1]);
        else tgcx_BillText(TGCX_T_CROWN_DESC_1,"");
        tgcx_BillText(TGCX_T_CROWN_STANCE,m.crown_signs?"\xA7GFor\xA7!":"\xA7RAgainst\xA7!");
        tgcx_BillText(TGCX_T_CROWN_STANCE_NOTE,m.crown_signs?"would sign":"would veto");
        tgcx_BillText(TGCX_T_CROWN_VETO_0,"May veto");tgcx_BillText(TGCX_T_CROWN_VETO_1,"(monarchy)");
    }
    tgcx_BillText(TGCX_T_AUDIENCE_LABEL,m.crown_veto?"Audience":"");
    tgcx_BillText(TGCX_T_AUDIENCE_STATE,!m.crown_veto?"":m.audience?"granted":"not asked");
    sprintf_s(text,"Audience (%d)",tgcx_bill_audience_price);tgcx_BillButtonLabel(TGCX_T_AUDIENCE,v.audience,text);
    for(unsigned l=0;l<4;++l)tgcx_BillText(TGCX_T_LOG_0+l,l<tgcx_bill_log_count?tgcx_bill_log[l]:"");
    if(m.quorum<50)sprintf_s(text,"No quorum: only %d seats would vote.",m.quorum);
    else if(m.margin>0)sprintf_s(text,"Would pass %d to %d%s",m.yes,m.no,m.crown_veto && !m.crown_signs?", but the Crown would veto.":".");
    else if(m.margin<0)sprintf_s(text,"Would fail %d to %d.",m.yes,m.no);
    else sprintf_s(text,"Tied %d to %d: the bill would fail.",m.yes,m.no);
    tgcx_BillTextf(TGCX_T_STATUS,"\xA7Y%s\xA7!",text);
    if(t.debate>1 && !v.vote.enabled) { tgcx_BillDate(t.debate,date,sizeof(date));tgcx_BillTextf(TGCX_T_VOTE,"Vote from %s",date); }
    else tgcx_BillText(TGCX_T_VOTE,"Call the Vote");
}
static void tgcx_ReformRefresh(uintptr_t country,const tgcx_BillModel& model,bool model_valid);
static void tgcx_ReformAfterTick(uintptr_t view);
static void tgcx_BillTick() {
    if(!tgcx_bill_enabled || !tgcx_politics)return;
    DWORD now=GetTickCount();if(tgcx_bill_tick && now-tgcx_bill_tick<250)return;tgcx_bill_tick=now;
    __try {
        tgcx_GuiRect gui={};
        if(!tgcx_ReadPoliticsRect(&gui)) { tgcx_BillVisibility(false);return; }
        uintptr_t root=*reinterpret_cast<uintptr_t*>(tgcx_politics+0x4C);
        if(root!=tgcx_bill_root) {
            tgcx_bill_root=root;tgcx_bill_window=0;memset(tgcx_bill_bound,0,sizeof(tgcx_bill_bound));
            tgcx_bill_thread=GetCurrentThreadId();tgcx_bill_was_active=false;
        }
        if(!tgcx_bill_window) {
            // A DLL with a script-only submod should not ask the native
            // window lookup for a missing child (that prints a game warning).
            if(!tgcx_BillFind(root,13,0x5E4C80,"tgcx_bill_open"))return;
            tgcx_bill_window=tgcx_BillFind(root,27,0x5E4A20,"tgcx_bill_window");
            if(!tgcx_bill_window)return;
            memset(tgcx_bill_text_set,0,sizeof(tgcx_bill_text_set));tgcx_bill_dirty=true;
            tgcx_BillVisibility(false);tgcx_Log("Bill child window found root=%08X child=%08X",root,tgcx_bill_window);
        }
        unsigned bound=0;
        tgcx_BillBind(root,"tgcx_bill_open",tgcx_bill_open_action);
        for(unsigned b=0;b<TGCX_B_COUNT_OF;++b)tgcx_BillBind(tgcx_bill_window,tgcx_bill_buttons[b].name,b);
        for(bool on:tgcx_bill_bound)bound+=on;
        static unsigned logged_bound=0;
        if(bound!=logged_bound) { logged_bound=bound;tgcx_Log("Bill native buttons bound=%u of %u",bound,tgcx_bill_actions); }
        tgcx_bill_usable=gui.width>=tgcx_bill_width && gui.height>=tgcx_bill_height;tgcx_bill_size_known=true;
        tgcx_Snapshot sample={};bool fault=false;tgcx_BillModel model={};tgcx_BillTimers timers={};
        bool snapshot=tgcx_ReadSnapshot(&sample,&fault);
        bool valid=snapshot && tgcx_BillReadModel(sample.country,&model);
        tgcx_ReformRefresh(snapshot?sample.country:0,model,valid);
        tgcx_ReformAfterTick(tgcx_politics);
        if(!valid) {
            tgcx_bill_model.valid=false;tgcx_bill_open=false;tgcx_bill_was_active=false;tgcx_bill_log_count=0;
            tgcx_BillVisibility(false);return;
        }
        tgcx_bill_timer_reader(sample.country,&timers);
        const auto& old=tgcx_bill_model;
        if(!old.valid || old.country!=model.country || old.id!=model.id) {
            if(!old.valid || old.country!=model.country)tgcx_bill_log_count=0;
            if(old.country!=model.country)tgcx_bill_page=0;
        } else tgcx_BillObserve(old,model,timers,sample.date_hours);
        bool changed=tgcx_bill_dirty || !old.valid || memcmp(&old,&model,sizeof(model))!=0 ||
            memcmp(&tgcx_bill_timers,&timers,sizeof(timers))!=0;
        tgcx_bill_model=model;tgcx_bill_timers=timers;tgcx_bill_date=sample.date_hours;
        if(!tgcx_bill_was_active)tgcx_bill_open=true;tgcx_bill_was_active=true;
        if(changed) {
            tgcx_BillBuildView(model,timers,tgcx_bill_sort,tgcx_bill_page,tgcx_bill_lot,&tgcx_bill_view);
            tgcx_bill_page=tgcx_bill_view.page;tgcx_bill_dirty=false;
            tgcx_BillLabels(model,timers,tgcx_bill_view);
        }
        tgcx_BillVisibility(tgcx_bill_open && gui.width>=tgcx_bill_width && gui.height>=tgcx_bill_height);
    } __except(EXCEPTION_EXECUTE_HANDLER) {
        __try { tgcx_BillVisibility(false); } __except(EXCEPTION_EXECUTE_HANDLER) {}
        tgcx_bill_model.valid=false;tgcx_bill_enabled=false;tgcx_Log("Bill disabled after native GUI read fault; Decisions remain available");
    }
}

// ---------------------------------------------------------------- automatic favours

// Collect favours like diplomatic points (D11): when the month's tick modifier
// is gone, send the same decision the Decisions tab offers. Only while game time
// advances; one request per absence (retry after two game days); the decision's
// effect re-checks its own conditions, so a duplicate does nothing.
static uintptr_t tgcx_favour_country=0;
static uint32_t tgcx_favour_date=0,tgcx_favour_pending=0;
static int tgcx_favour_defined=-1;
static DWORD tgcx_favour_check=0;
static unsigned tgcx_favour_sent=0;
static bool tgcx_FavourStep(const tgcx_Snapshot& sample,const tgcx_BillTimers& timers) {
    if(sample.country!=tgcx_favour_country) {
        tgcx_favour_country=sample.country;tgcx_favour_date=sample.date_hours;tgcx_favour_pending=0;tgcx_favour_defined=-1;
        return false;
    }
    if(sample.date_hours==tgcx_favour_date)return false;     // paused, menu or loading
    tgcx_favour_date=sample.date_hours;
    if(!timers.known)return false;
    if(timers.tick) { tgcx_favour_pending=0;return false; }
    if(tgcx_favour_pending && sample.date_hours<tgcx_favour_pending+48)return false;
    tgcx_favour_pending=sample.date_hours;
    return true;
}
static void tgcx_FavourTick() {
    if(!tgcx_bill_enabled || !tgcx_bill_decision_fn)return;
    DWORD now=GetTickCount();if(tgcx_favour_check && now-tgcx_favour_check<250)return;tgcx_favour_check=now;
    // A sent decision's message arrives at once; never let a stale count hide a later one.
    if(tgcx_msg_suppress && now-tgcx_msg_suppress_tick>10000)InterlockedExchange(&tgcx_msg_suppress,0);
    __try {
        tgcx_Snapshot sample={};bool fault=false;tgcx_BillTimers timers={};
        if(!tgcx_ReadSnapshot(&sample,&fault))return;
        if(sample.country==tgcx_favour_country && sample.date_hours!=tgcx_favour_date)tgcx_bill_timer_reader(sample.country,&timers);
        if(!tgcx_FavourStep(sample,timers))return;
        // Without the submod the decision would not exist: ask the engine's
        // modifier table for ours first (once per country).
        if(tgcx_favour_defined<0)tgcx_favour_defined=tgcx_ModifierDefined("tgcx_favours_tick")?1:0;
        if(!tgcx_favour_defined) { tgcx_favour_pending=0;return; }
        if(tgcx_BillDispatch("tgcx_collect_favours") && ++tgcx_favour_sent<=12)
            tgcx_Log("Favours collection requested through native decision handler tag=%.4s hours=%u",sample.country_tag,sample.date_hours);
    } __except(EXCEPTION_EXECUTE_HANDLER) {
        tgcx_bill_enabled=false;tgcx_Log("Automatic favours disabled after native read fault; the decision remains available");
    }
}

// ---------------------------------------------------------------- drawing

// Our two staged textures (uncompressed A8R8G8B8 DDS written by
// tools/tgcx_bill_gui.py), loaded into the managed pool per device.
struct tgcx_BillTexture { IDirect3DTexture9* texture; int width,height; };
static tgcx_BillTexture tgcx_bill_bg={},tgcx_bill_atlas={};
static IDirect3DDevice9* tgcx_bill_texture_device=nullptr;
static bool tgcx_bill_texture_failed=false;
static bool tgcx_BillTextureFromDds(IDirect3DDevice9* device,const unsigned char* data,size_t size,tgcx_BillTexture* out) {
    *out={};
    if(size<128 || memcmp(data,"DDS ",4))return false;
    auto u32=[&](size_t at){uint32_t v;memcpy(&v,data+at,4);return v;};
    uint32_t height=u32(12),width=u32(16);
    if(u32(4)!=124 || u32(76)!=32 || !(u32(80)&0x40) || u32(88)!=32 || u32(92)!=0x00FF0000 ||
       u32(96)!=0x0000FF00 || u32(100)!=0x000000FF || u32(104)!=0xFF000000)return false;
    if(!width || !height || width>4096 || height>4096 || size<128+static_cast<size_t>(width)*height*4)return false;
    IDirect3DTexture9* texture=nullptr;
    if(FAILED(device->CreateTexture(width,height,1,0,D3DFMT_A8R8G8B8,D3DPOOL_MANAGED,&texture,nullptr)))return false;
    D3DLOCKED_RECT rect={};
    if(FAILED(texture->LockRect(0,&rect,nullptr,0))) { texture->Release();return false; }
    for(uint32_t y=0;y<height;++y)memcpy(static_cast<char*>(rect.pBits)+y*rect.Pitch,data+128+static_cast<size_t>(y)*width*4,width*4);
    texture->UnlockRect(0);
    *out={texture,static_cast<int>(width),static_cast<int>(height)};
    return true;
}
static bool tgcx_BillLoadTexture(IDirect3DDevice9* device,const char* file,tgcx_BillTexture* out) {
    char path[MAX_PATH];DWORD count=GetModuleFileNameA(nullptr,path,MAX_PATH);
    if(!count || count>=MAX_PATH)return false;
    char* slash=strrchr(path,'\\');if(!slash)return false;
    *slash=0;if(strcat_s(path,"\\mod\\TGCX\\gfx\\interface\\") || strcat_s(path,file))return false;
    HANDLE handle=CreateFileA(path,GENERIC_READ,FILE_SHARE_READ,nullptr,OPEN_EXISTING,0,nullptr);
    if(handle==INVALID_HANDLE_VALUE)return false;
    DWORD size=GetFileSize(handle,nullptr),read=0;bool ok=false;
    if(size!=INVALID_FILE_SIZE && size<=64u<<20) {
        auto* data=static_cast<unsigned char*>(HeapAlloc(GetProcessHeap(),0,size));
        if(data) {
            ok=ReadFile(handle,data,size,&read,nullptr) && read==size && tgcx_BillTextureFromDds(device,data,size,out);
            HeapFree(GetProcessHeap(),0,data);
        }
    }
    CloseHandle(handle);return ok;
}
static void tgcx_BillReleaseTextures() {
    if(tgcx_bill_bg.texture)tgcx_bill_bg.texture->Release();
    if(tgcx_bill_atlas.texture)tgcx_bill_atlas.texture->Release();
    tgcx_bill_bg={};tgcx_bill_atlas={};tgcx_bill_texture_device=nullptr;tgcx_bill_texture_failed=false;
}
static void tgcx_BillTextures(IDirect3DDevice9* device) {
    if(device==tgcx_bill_texture_device)return;
    tgcx_BillReleaseTextures();tgcx_bill_texture_device=device;
    bool bg=tgcx_BillLoadTexture(device,tgcx_bill_bg_file,&tgcx_bill_bg);
    bool atlas=tgcx_BillLoadTexture(device,tgcx_bill_atlas_file,&tgcx_bill_atlas);
    tgcx_bill_texture_failed=!bg || !atlas;
    tgcx_Log("Bill textures background=%s atlas=%s",bg?"loaded":"missing",atlas?"loaded":"missing");
}

struct tgcx_TexVertex { float x,y,z,rhw; DWORD color; float u,v; };
static constexpr DWORD tgcx_tex_fvf=D3DFVF_XYZRHW|D3DFVF_DIFFUSE|D3DFVF_TEX1;
static HRESULT tgcx_BillBlit(IDirect3DDevice9* device,const tgcx_BillTexture& t,int sx,int sy,int sw,int sh,float x,float y,float w,float h,DWORD color=0xFFFFFFFF) {
    if(!t.texture)return S_FALSE;
    float u0=static_cast<float>(sx)/t.width,v0=static_cast<float>(sy)/t.height;
    float u1=static_cast<float>(sx+sw)/t.width,v1=static_cast<float>(sy+sh)/t.height;
    tgcx_TexVertex v[4]={{x-0.5f,y-0.5f,0,1,color,u0,v0},{x+w-0.5f,y-0.5f,0,1,color,u1,v0},
        {x-0.5f,y+h-0.5f,0,1,color,u0,v1},{x+w-0.5f,y+h-0.5f,0,1,color,u1,v1}};
    HRESULT result=device->SetTexture(0,t.texture);
    if(SUCCEEDED(result))result=device->SetFVF(tgcx_tex_fvf);
    if(SUCCEEDED(result))result=device->DrawPrimitiveUP(D3DPT_TRIANGLESTRIP,2,v,sizeof(tgcx_TexVertex));
    return result;
}
static HRESULT tgcx_BillCell(IDirect3DDevice9* device,const int* cell,float x,float y,DWORD color=0xFFFFFFFF) {
    return tgcx_BillBlit(device,tgcx_bill_atlas,cell[0],cell[1],cell[2],cell[3],x,y,static_cast<float>(cell[2]),static_cast<float>(cell[3]),color);
}
static HRESULT tgcx_BillUntextured(IDirect3DDevice9* device) {
    HRESULT result=device->SetTexture(0,nullptr);
    if(SUCCEEDED(result))result=device->SetFVF(tgcx_fvf);
    if(SUCCEEDED(result))result=device->SetTextureStageState(0,D3DTSS_COLOROP,D3DTOP_SELECTARG1);
    if(SUCCEEDED(result))result=device->SetTextureStageState(0,D3DTSS_ALPHAOP,D3DTOP_SELECTARG1);
    return result;
}
static HRESULT tgcx_BillTextured(IDirect3DDevice9* device) {
    HRESULT result=device->SetTextureStageState(0,D3DTSS_COLOROP,D3DTOP_MODULATE);
    if(SUCCEEDED(result))result=device->SetTextureStageState(0,D3DTSS_ALPHAOP,D3DTOP_MODULATE);
    return result;
}
// The background under a rectangle: hides a native button or marker sprite.
// Without our texture, a flat panel in the board's section colour.
static HRESULT tgcx_BillPatch(IDirect3DDevice9* device,int left,int top,int x,int y,int w,int h) {
    if(tgcx_bill_bg.texture)
        return tgcx_BillBlit(device,tgcx_bill_bg,x,y,w,h,static_cast<float>(left+x),static_cast<float>(top+y),static_cast<float>(w),static_cast<float>(h));
    HRESULT result=tgcx_BillUntextured(device);
    if(SUCCEEDED(result))result=tgcx_SoftPanel(device,static_cast<float>(left+x),static_cast<float>(top+y),static_cast<float>(w),static_cast<float>(h),0,0xFFCECBC3);
    if(SUCCEEDED(result))result=tgcx_BillTextured(device);
    return result;
}
static constexpr DWORD tgcx_bill_aye=0xFF3F8F2F,tgcx_bill_abstain=0xFFE4E0D0,tgcx_bill_nay=0xFFB8322A,tgcx_bill_rule=0xFF9C9E94;

// The Bill's state over its native art, drawn right after the marker icon
// (declared after every button, before every text): hidden and disabled
// buttons, checks, closeness rows, seats. gui.left/top are the Bill's origin.
static HRESULT tgcx_DrawBillChart(IDirect3DDevice9* device,const tgcx_BillModel& model,const tgcx_Snapshot& sample,const tgcx_GuiRect& gui,
                                  const tgcx_BillView* view=nullptr) {
    if(!device || !model.valid || gui.width<tgcx_bill_width || gui.height<tgcx_bill_height)return S_FALSE;
    unsigned seats[tgcx_ideology_count]={};for(unsigned i=0;i<tgcx_ideology_count;++i)seats[i]=static_cast<unsigned>(model.bloc[i].seats);
    tgcx_Seat dots[100];tgcx_SeatGeometry(seats,dots);
    IDirect3DSurface9* target=nullptr;IDirect3DSurface9* back=nullptr;
    HRESULT result=device->GetRenderTarget(0,&target);
    if(SUCCEEDED(result))result=device->GetBackBuffer(0,0,D3DBACKBUFFER_TYPE_MONO,&back);
    bool valid=target && back && target==back;D3DSURFACE_DESC desc={};
    if(valid)result=back->GetDesc(&desc);if(target)target->Release();if(back)back->Release();
    if(FAILED(result))return result;if(!valid || desc.Width!=static_cast<unsigned>(gui.width) || desc.Height!=static_cast<unsigned>(gui.height))return S_FALSE;
    IDirect3DStateBlock9* state=nullptr;result=device->CreateStateBlock(D3DSBT_ALL,&state);if(FAILED(result))return result;
    result=state->Capture();if(FAILED(result)){state->Release();return result;}
    int left=gui.left,top=gui.top;
    RECT clip={left,top,left+tgcx_bill_width,top+tgcx_bill_height};D3DVIEWPORT9 viewport={0,0,static_cast<DWORD>(gui.width),static_cast<DWORD>(gui.height),0,1};
#define TGCX_BILL_SET(call) if(SUCCEEDED(result))result=(call)
    TGCX_BILL_SET(device->SetViewport(&viewport));TGCX_BILL_SET(device->SetScissorRect(&clip));TGCX_BILL_SET(device->SetRenderState(D3DRS_SCISSORTESTENABLE,TRUE));
    TGCX_BILL_SET(device->SetVertexShader(nullptr));TGCX_BILL_SET(device->SetPixelShader(nullptr));TGCX_BILL_SET(device->SetFVF(tgcx_fvf));TGCX_BILL_SET(device->SetTexture(0,nullptr));
    TGCX_BILL_SET(device->SetRenderState(D3DRS_ZENABLE,FALSE));TGCX_BILL_SET(device->SetRenderState(D3DRS_ZWRITEENABLE,FALSE));TGCX_BILL_SET(device->SetRenderState(D3DRS_CULLMODE,D3DCULL_NONE));
    TGCX_BILL_SET(device->SetRenderState(D3DRS_LIGHTING,FALSE));TGCX_BILL_SET(device->SetRenderState(D3DRS_FOGENABLE,FALSE));TGCX_BILL_SET(device->SetRenderState(D3DRS_STENCILENABLE,FALSE));
    TGCX_BILL_SET(device->SetRenderState(D3DRS_ALPHATESTENABLE,FALSE));TGCX_BILL_SET(device->SetRenderState(D3DRS_ALPHABLENDENABLE,TRUE));TGCX_BILL_SET(device->SetRenderState(D3DRS_SRCBLEND,D3DBLEND_SRCALPHA));TGCX_BILL_SET(device->SetRenderState(D3DRS_DESTBLEND,D3DBLEND_INVSRCALPHA));
    TGCX_BILL_SET(device->SetRenderState(D3DRS_BLENDOP,D3DBLENDOP_ADD));TGCX_BILL_SET(device->SetRenderState(D3DRS_SEPARATEALPHABLENDENABLE,FALSE));TGCX_BILL_SET(device->SetRenderState(D3DRS_SRGBWRITEENABLE,FALSE));TGCX_BILL_SET(device->SetRenderState(D3DRS_COLORWRITEENABLE,15));TGCX_BILL_SET(device->SetRenderState(D3DRS_FILLMODE,D3DFILL_SOLID));
    TGCX_BILL_SET(device->SetTextureStageState(0,D3DTSS_COLOROP,D3DTOP_SELECTARG1));TGCX_BILL_SET(device->SetTextureStageState(0,D3DTSS_COLORARG1,D3DTA_DIFFUSE));TGCX_BILL_SET(device->SetTextureStageState(0,D3DTSS_ALPHAOP,D3DTOP_SELECTARG1));TGCX_BILL_SET(device->SetTextureStageState(0,D3DTSS_ALPHAARG1,D3DTA_DIFFUSE));
    TGCX_BILL_SET(device->SetTextureStageState(0,D3DTSS_TEXTURETRANSFORMFLAGS,D3DTTFF_DISABLE));TGCX_BILL_SET(device->SetTextureStageState(0,D3DTSS_TEXCOORDINDEX,0));TGCX_BILL_SET(device->SetTextureStageState(0,D3DTSS_RESULTARG,D3DTA_CURRENT));TGCX_BILL_SET(device->SetTextureStageState(1,D3DTSS_COLOROP,D3DTOP_DISABLE));
    TGCX_BILL_SET(device->SetTextureStageState(0,D3DTSS_COLORARG2,D3DTA_TEXTURE));TGCX_BILL_SET(device->SetTextureStageState(0,D3DTSS_ALPHAARG2,D3DTA_TEXTURE));
    TGCX_BILL_SET(device->SetSamplerState(0,D3DSAMP_MINFILTER,D3DTEXF_POINT));TGCX_BILL_SET(device->SetSamplerState(0,D3DSAMP_MAGFILTER,D3DTEXF_POINT));TGCX_BILL_SET(device->SetSamplerState(0,D3DSAMP_MIPFILTER,D3DTEXF_NONE));
    TGCX_BILL_SET(device->SetSamplerState(0,D3DSAMP_ADDRESSU,D3DTADDRESS_CLAMP));TGCX_BILL_SET(device->SetSamplerState(0,D3DSAMP_ADDRESSV,D3DTADDRESS_CLAMP));
    // Textured pass: art over the native widgets.
    TGCX_BILL_SET(tgcx_BillTextured(device));
    TGCX_BILL_SET(tgcx_BillPatch(device,left,top,tgcx_bill_chart_patch[0],tgcx_bill_chart_patch[1],tgcx_bill_chart_patch[2],tgcx_bill_chart_patch[3]));
    auto fx=[&](int x){return static_cast<float>(left+x);};auto fy=[&](int y){return static_cast<float>(top+y);};
    auto button=[&](unsigned id,const tgcx_BillAction& action) {
        const auto& b=tgcx_bill_buttons[id];
        if(action.visible && action.enabled)return;
        TGCX_BILL_SET(tgcx_BillPatch(device,left,top,b.x,b.y,b.w,b.h));
        const int* off=b.w==111?tgcx_bill_cell_off111:b.w==177?tgcx_bill_cell_off177:tgcx_bill_cell_off144;
        if(action.visible)TGCX_BILL_SET(tgcx_BillCell(device,off,fx(b.x),fy(b.y)));
    };
    if(view) {
        for(unsigned s=0;s<tgcx_bill_cards;++s) {
            tgcx_BillAction hidden={};
            button(TGCX_B_CARD_0_A+2*s,s<view->slots?view->card[s].a:hidden);
            button(TGCX_B_CARD_0_B+2*s,s<view->slots?view->card[s].b:hidden);
        }
        button(TGCX_B_AUDIENCE,view->audience);button(TGCX_B_VOTE,view->vote);
    }
    for(unsigned n=0;n<3;++n)if(static_cast<int>(n)==tgcx_bill_mode)TGCX_BILL_SET(tgcx_BillCell(device,tgcx_bill_cell_checked,fx(tgcx_bill_mode_x[n]),fy(tgcx_bill_mode_y)));
    TGCX_BILL_SET(tgcx_BillCell(device,tgcx_bill_cell_checked,fx(tgcx_bill_lot_x[tgcx_bill_lot==25]),fy(tgcx_bill_lot_y)));
    const tgcx_BillInfo* law=model.id>0?&tgcx_bill_catalog[model.id-1]:nullptr;
    if(law) {
        int cell=tgcx_bill_icon_cell,column=law->group%tgcx_bill_icon_columns,row=law->group/tgcx_bill_icon_columns;
        TGCX_BILL_SET(tgcx_BillBlit(device,tgcx_bill_atlas,cell*column,tgcx_bill_icon_y+cell*row,cell,cell,fx(66),fy(116),32,32));
    }
    if(view && law) {
        const auto& g=tgcx_bill_groups[law->group];
        unsigned lo=(std::min)(law->from_index,law->to_index),hi=(std::max)(law->from_index,law->to_index);
        unsigned start=g.count<=3?0:(std::min)(static_cast<unsigned>(g.count-3),lo>0?lo-1:0u);
        if(hi>=start+3)start=hi-2;
        for(unsigned s=0;s<view->slots;++s) {
            int y0=tgcx_bill_card_y+tgcx_bill_card_step*static_cast<int>(s);unsigned i=view->slot[s];
            TGCX_BILL_SET(tgcx_BillCell(device,tgcx_bill_cell_plupp,fx(tgcx_bill_cb+2),fy(y0+6),sample.colors[i]));
            for(unsigned r=0;r<3 && start+r<g.count;++r) {
                float x=fx(tgcx_bill_cc+1),y=fy(y0+6+14*static_cast<int>(r));unsigned option=start+r;
                TGCX_BILL_SET(tgcx_BillCell(device,tgcx_bill_cell_row,x,y));
                if(option==law->from_index)TGCX_BILL_SET(tgcx_BillCell(device,tgcx_bill_cell_selected,x,y));
                else if(option==law->to_index)TGCX_BILL_SET(tgcx_BillCell(device,tgcx_bill_cell_select,x+15,y+1));
                if(option==law->ideal_index[i])TGCX_BILL_SET(tgcx_BillCell(device,tgcx_bill_cell_diamond,x+136,y+2));
            }
        }
    }
    // Untextured pass: rules, seats and the legend.
    TGCX_BILL_SET(tgcx_BillUntextured(device));
    if(view)for(unsigned s=0;s<view->slots;++s) {
        int y=tgcx_bill_card_y+tgcx_bill_card_step*static_cast<int>(s)+50;
        TGCX_BILL_SET(tgcx_SoftPanel(device,fx(tgcx_bill_cb+4),fy(y),static_cast<float>(tgcx_bill_ce-tgcx_bill_cb-8),1,0,tgcx_bill_rule));
    }
    float cosine[tgcx_dot_segments+1],sine[tgcx_dot_segments+1];for(unsigned i=0;i<=tgcx_dot_segments;++i){float a=6.28318530718f*static_cast<float>(i%tgcx_dot_segments)/tgcx_dot_segments;cosine[i]=cosf(a);sine[i]=sinf(a);}
    unsigned used[tgcx_ideology_count]={};
    // Geometry's angular sweep is separate from storage order. Each bloc still
    // has exactly its cached Aye/abstain/Nay seats; no new vote is calculated.
    int cx=tgcx_bill_chart[0]+tgcx_bill_chart[2]/2,cy=tgcx_bill_chart[1]+tgcx_bill_chart[3]-6;
    for(unsigned i=0;i<100;++i) {
        unsigned b=dots[i].ideology,n=used[b]++;const auto& bloc=model.bloc[b];
        DWORD vote=n<static_cast<unsigned>(bloc.yes)?tgcx_bill_aye:n<static_cast<unsigned>(bloc.yes+bloc.abstain)?tgcx_bill_abstain:tgcx_bill_nay;
        float x=fx(cx)+(dots[i].x-99)*2.0f,y=fy(cy)+(dots[i].y-183)*2.0f;
        auto* v=tgcx_seat_vertices+i*2*tgcx_disc_vertices;
        DWORD outer=tgcx_bill_mode==0?0xFF4A4636:sample.colors[b],inner=tgcx_bill_mode==1?sample.colors[b]:vote;
        tgcx_AppendDisc(v,cosine,sine,x,y,5.0f,0.7f,outer);tgcx_AppendDisc(v+tgcx_disc_vertices,cosine,sine,x,y,tgcx_bill_mode==2?2.8f:4.0f,0.5f,inner);
    }
    TGCX_BILL_SET(device->DrawPrimitiveUP(D3DPT_TRIANGLELIST,100*2*tgcx_disc_vertices/3,tgcx_seat_vertices,sizeof(tgcx_Vertex)));
    const DWORD legend[3]={tgcx_bill_aye,tgcx_bill_abstain,tgcx_bill_nay};
    for(unsigned n=0;n<3;++n) {
        auto* v=tgcx_seat_vertices+n*2*tgcx_disc_vertices;float x=fx(tgcx_bill_legend_x[n]+6),y=fy(tgcx_bill_legend_y+5);
        tgcx_AppendDisc(v,cosine,sine,x,y,5.0f,0.7f,0xFF4A4636);tgcx_AppendDisc(v+tgcx_disc_vertices,cosine,sine,x,y,4.0f,0.5f,legend[n]);
    }
    TGCX_BILL_SET(device->DrawPrimitiveUP(D3DPT_TRIANGLELIST,3*2*tgcx_disc_vertices/3,tgcx_seat_vertices,sizeof(tgcx_Vertex)));
#undef TGCX_BILL_SET
    HRESULT restore=state->Apply();state->Release();return FAILED(restore)?restore:result;
}
static void tgcx_BillAfterEntity(uintptr_t renderer,uintptr_t entity) {
    if(!tgcx_bill_enabled || !tgcx_bill_open || !tgcx_bill_model.valid || !tgcx_bill_window)return;
    __try {
        if(!*reinterpret_cast<unsigned char*>(tgcx_bill_window+0x67))return;
        uintptr_t marker=tgcx_GuiEntity(reinterpret_cast<char*>(tgcx_bill_window),renderer,"tgcx_bill_chart_overlay",0xA3FF08);
        if(marker!=entity)return;
        tgcx_GuiRect gui={};tgcx_Snapshot sample={};bool fault=false;
        if(!tgcx_ReadPoliticsRect(&gui) || !tgcx_ReadSnapshot(&sample,&fault) || sample.country!=tgcx_bill_model.country)return;
        auto* device=*reinterpret_cast<IDirect3DDevice9**>(renderer+0x64);
        tgcx_GuiRect bill={};
        if(!device || !tgcx_BillScreenRect(gui,&bill))return;
        tgcx_BillTextures(device);
        if(tgcx_DrawBillChart(device,tgcx_bill_model,sample,bill,&tgcx_bill_view)==S_OK && ++tgcx_bill_draws==1)
            tgcx_Log("Bill first ordered overlay draw origin=%d,%d Aye=%d abstain=%d Nay=%d cards=%u",
                bill.left,bill.top,tgcx_bill_model.yes,tgcx_bill_model.abstain,tgcx_bill_model.no,tgcx_bill_view.slots);
    } __except(EXCEPTION_EXECUTE_HANDLER) { tgcx_bill_model.valid=false;tgcx_Log("Bill chart rejected: native marker read fault"); }
}
