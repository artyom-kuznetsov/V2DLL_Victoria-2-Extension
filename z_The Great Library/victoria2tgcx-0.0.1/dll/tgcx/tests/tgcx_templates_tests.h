// Isolated TPL-0 template tests on synthetic engine-shaped memory: the plan,
// the read-only scan, the recruit with stub commands, and the register/stack
// ABI of each native thunk against fakes. No game process or state mutation.
#pragma once
#include "../tgcx_templates.h"

static uintptr_t tgcx_tpl_t_ecx,tgcx_tpl_t_eax,tgcx_tpl_t_a,tgcx_tpl_t_b;
__declspec(naked) static void tgcx_TplFakeCanBuild() {   // ECX unit, EAX pop, [esp+4] country, [esp+8] province, RET 8
    __asm { mov tgcx_tpl_t_ecx,ecx } __asm { mov tgcx_tpl_t_eax,eax }
    __asm { mov edx,[esp+4] } __asm { mov tgcx_tpl_t_a,edx } __asm { mov edx,[esp+8] } __asm { mov tgcx_tpl_t_b,edx }
    __asm { mov eax,0x1234501 } __asm { ret 8 }
}
__declspec(naked) static void tgcx_TplFakeHas() {        // EAX pop, [esp+4] flag, RET 4
    __asm { mov tgcx_tpl_t_eax,eax } __asm { mov edx,[esp+4] } __asm { mov tgcx_tpl_t_a,edx } __asm { mov eax,2 } __asm { ret 4 }
}
static int __stdcall tgcx_TplFakeSupports(uintptr_t pop,int flag) { tgcx_tpl_t_b=pop+flag;return 5; }
static unsigned char tgcx_tpl_t_memory[4][tgcx_tpl_command_size];static unsigned tgcx_tpl_t_allocs;
static void* __cdecl tgcx_TplFakeNew(size_t size) { return size==tgcx_tpl_command_size && tgcx_tpl_t_allocs<4?tgcx_tpl_t_memory[tgcx_tpl_t_allocs++]:nullptr; }
static uintptr_t tgcx_tpl_t_args[6];
static void* __stdcall tgcx_TplFakeConstruct(void* self,uintptr_t unit,int province,uintptr_t pop,uint32_t tag,int country) {
    uintptr_t a[6]={reinterpret_cast<uintptr_t>(self),unit,static_cast<uintptr_t>(province),pop,tag,static_cast<uintptr_t>(country)};
    memcpy(tgcx_tpl_t_args,a,sizeof(a));*reinterpret_cast<uintptr_t*>(self)=0xC0FFEE;return self;
}
static uintptr_t tgcx_tpl_t_session[0x10],tgcx_tpl_t_queue[2],tgcx_tpl_t_front[1],tgcx_tpl_t_vt_front[0x20],tgcx_tpl_t_vt_queue[8];
static void* tgcx_tpl_t_posted;
static uintptr_t __fastcall tgcx_TplFakeSession(uintptr_t self,void*) { return self==reinterpret_cast<uintptr_t>(tgcx_tpl_t_front)?reinterpret_cast<uintptr_t>(tgcx_tpl_t_session):0; }
static void __fastcall tgcx_TplFakeQueue(uintptr_t self,void*,void* command) { if(self==reinterpret_cast<uintptr_t>(tgcx_tpl_t_queue))tgcx_tpl_t_posted=command; }

// Stubs for the scan and the recruit.
static unsigned tgcx_tpl_s_made,tgcx_tpl_s_posted,tgcx_tpl_s_post_limit;
static uintptr_t tgcx_tpl_s_artillery_province,tgcx_tpl_s_vtable;
static uintptr_t tgcx_tpl_s_last[5];
static unsigned char tgcx_tpl_s_commands[16][tgcx_tpl_command_size];
static bool tgcx_TplStubCanBuild(uintptr_t unit,uintptr_t,uintptr_t,uintptr_t province) {
    return *reinterpret_cast<int*>(unit+0x24)!=4 || province==tgcx_tpl_s_artillery_province;   // artillery in one province only
}
static int tgcx_TplStubFree(uintptr_t pop) { return *reinterpret_cast<int*>(pop+0x100); }
static void* tgcx_TplStubMake(uintptr_t unit,int province,uintptr_t pop,uint32_t tag,int country) {
    if(tgcx_tpl_s_made>=16)return nullptr;
    uintptr_t a[5]={unit,static_cast<uintptr_t>(province),pop,tag,static_cast<uintptr_t>(country)};memcpy(tgcx_tpl_s_last,a,sizeof(a));
    auto* c=tgcx_tpl_s_commands[tgcx_tpl_s_made++];*reinterpret_cast<uintptr_t*>(c)=tgcx_tpl_s_vtable;return c;
}
static bool tgcx_TplStubPost(void*) { if(tgcx_tpl_s_posted>=tgcx_tpl_s_post_limit)return false;++tgcx_tpl_s_posted;return true; }

static void tgcx_TemplateTests() {
    (void)&tgcx_InstallTemplates;(void)&tgcx_TplRecruit;   // live install/recruit: covered by the guard table, not run here

    // ---- planning
    tgcx_TplPop pops[3]={{1,0,101,3,(1ull<<3)|(1ull<<4)},{2,0,102,1,(1ull<<3)|(1ull<<5)},{3,0,103,0,~0ull}};
    int counts[tgcx_tpl_units]={};counts[3]=4;counts[4]=1;counts[5]=1;   // 4 infantry, 1 artillery, 1 hussar
    static tgcx_TplPlan plan;tgcx_TplMakePlan(counts,pops,3,&plan);
    tgcx_Expect(plan.count==4 && plan.missing==2,"Templates plan places what fits and counts the rest");
    tgcx_Expect(plan.orders[0].unit==5 && plan.orders[0].pop==1,"Templates scarce unit placed first on its only pop");
    tgcx_Expect(plan.orders[1].unit==4 && plan.orders[1].pop==0,"Templates artillery on the pop allowed to build it");
    tgcx_Expect(pops[0].free==0 && pops[1].free==0 && pops[2].free==0,"Templates plan spends free regiments, never below zero");
    tgcx_TplPop tie[2]={{1,0,1,2,1ull<<3},{2,0,2,2,1ull<<3}};int one[tgcx_tpl_units]={};one[3]=1;
    tgcx_TplMakePlan(one,tie,2,&plan);
    tgcx_Expect(plan.count==1 && plan.orders[0].pop==0,"Templates tie goes to the earlier pop (native order)");
    tgcx_TplPop spread[2]={{1,0,1,3,1ull<<3},{2,0,2,2,1ull<<3}};int three[tgcx_tpl_units]={};three[3]=3;
    tgcx_TplMakePlan(three,spread,2,&plan);
    tgcx_Expect(plan.count==3 && plan.orders[0].pop==0 && plan.orders[1].pop==0 && plan.orders[2].pop==1 && !plan.missing,
        "Templates regiments spread by most free first");
    int none[tgcx_tpl_units]={};none[3]=-2;tgcx_TplMakePlan(none,spread,2,&plan);
    tgcx_Expect(!plan.count && !plan.missing,"Templates negative count ignored");

    // ---- synthetic engine memory for the scan
    static unsigned char world[0xC00],manager[8],country[0x1000],stats[0x400],db[0x20],kinds_db[0x20];
    static unsigned char base_types[5][0x60],units[8][0x100],kinds[2][0x60],provinces[2][0x200],buckets[2][0x20],pop_mem[4][0x300];
    static uintptr_t countries[1],types[tgcx_tpl_units],db_vec[8],kind_vec[2],province_table[3];
    static int owned[2]={1,2};
    auto put=[](void* at,size_t off,uintptr_t v){ *reinterpret_cast<uintptr_t*>(static_cast<unsigned char*>(at)+off)=v; };
    auto ptr=[](const void* p){ return reinterpret_cast<uintptr_t>(p); };
    put(world,0xB60,0);put(world,0xACC,ptr(province_table));
    put(manager,0,1);put(manager,4,ptr(countries));countries[0]=ptr(country);
    memcpy(country+0x1C,"TST",4);put(country,0x20,7);put(country,0xBCC,ptr(stats));put(stats,0x310,ptr(types));
    put(country,0x9D8,ptr(owned));put(country,0x9DC,ptr(owned+2));
    const char* names[5]={"infantry","artillery","hussar","frigate","engineer"};
    for(int i=0;i<3;++i)db_vec[i]=0;   // positions 0-2 skipped by the scan
    for(int i=0;i<5;++i) {
        int index=3+i;put(base_types[i],0x24,index);tgcx_ReformTestString(base_types[i]+8,names[i]);
        if(3+i<7)db_vec[3+i]=ptr(base_types[i]);
        put(units[index],0x24,index);units[index][0x39]=i==3?0:1;   // the frigate is naval
        types[index]=ptr(units[index]);
    }
    put(db,0xC,ptr(db_vec));put(db,0x10,ptr(db_vec+7));   // infantry, artillery, hussar, frigate (engineer beyond the end)
    kinds[1][0x42]=1;kind_vec[0]=ptr(kinds[0]);kind_vec[1]=ptr(kinds[1]);
    put(kinds_db,0xC,ptr(kind_vec));put(kinds_db,0x10,ptr(kind_vec+2));
    for(int p=0;p<2;++p) {
        province_table[p+1]=ptr(provinces[p]);put(provinces[p],0x58,101+p);put(provinces[p],0x194,ptr(buckets[p]));
    }
    put(buckets[0],0x10,ptr(pop_mem[0]));put(pop_mem[0],0x27C,ptr(pop_mem[1]));   // province 101: two soldier pops
    put(buckets[1],0x10,ptr(pop_mem[2]));put(buckets[1],0x00,ptr(pop_mem[3]));    // 102: one soldier, one other type
    put(pop_mem[0],0x100,2);put(pop_mem[1],0x100,0);put(pop_mem[2],0x100,3);put(pop_mem[3],0x100,9);
    tgcx_TplGlobals g={ptr(world),ptr(manager),ptr(db),ptr(kinds_db),0x5150};
    tgcx_TplNative stub={tgcx_TplStubCanBuild,tgcx_TplStubFree,tgcx_TplStubMake,tgcx_TplStubPost};
    tgcx_tpl_s_artillery_province=ptr(provinces[0]);tgcx_tpl_s_vtable=0x5150;
    static tgcx_TplCountry scanned;
    tgcx_Expect(tgcx_TplScan(g,stub,&scanned),"Templates scan of synthetic memory");
    tgcx_Expect(scanned.tag==*reinterpret_cast<uint32_t*>(country+0x1C) && scanned.index==7,"Templates country tag +0x1C and index +0x20");
    tgcx_Expect(tgcx_TplUnitByName(scanned,"infantry")==3 && tgcx_TplUnitByName(scanned,"hussar")==5,"Templates land units by name");
    tgcx_Expect(tgcx_TplUnitByName(scanned,"frigate")<0 && tgcx_TplUnitByName(scanned,"engineer")<0,"Templates naval and absent units excluded");
    tgcx_Expect(scanned.unit[3]==ptr(units[3]),"Templates unit is the country's copy (+0xBCC +0x310)");
    tgcx_Expect(scanned.pop_count==2 && scanned.pops[0].pop==ptr(pop_mem[0]) && scanned.pops[1].pop==ptr(pop_mem[2]),
        "Templates soldier pops with free regiments only");
    tgcx_Expect(scanned.pops[0].province_id==101 && scanned.pops[0].can_build.test(4) && !scanned.pops[1].can_build.test(4),
        "Templates per-pop unit eligibility from the predicate");
    put(base_types[4],0x24,700);tgcx_ReformTestString(base_types[4]+8,"custom_musketeer");
    put(units[7],0x24,700);types[700]=ptr(units[7]);db_vec[7]=ptr(base_types[4]);put(db,0x10,ptr(db_vec+8));
    tgcx_Expect(tgcx_TplScan(g,stub,&scanned) && tgcx_TplUnitByName(scanned,"custom_musketeer")==700 && scanned.pops[0].can_build.test(700),
        "Templates scan supports custom land units above the old 64-bit index limit");
    int custom_counts[tgcx_tpl_units]={};custom_counts[700]=1;
    tgcx_TplMakePlan(custom_counts,scanned.pops,scanned.pop_count,&plan);
    tgcx_Expect(plan.count==1 && plan.orders[0].unit==700 && !plan.missing,"Templates planner preserves a high custom engine index");
    for(unsigned i=0;i<5;++i){put(base_types[i],0x28,i+1);put(units[i+3],0xC0,90000);}
    put(base_types[4],0x28,23);put(units[7],0xC0,60100);
    bool universal_was=tgcx_army_universal;tgcx_army_universal=true;
    tgcx_Expect(tgcx_TplScan(g,stub,&scanned) && scanned.icon[700]==23 && scanned.days[700]==61,
        "Universal scan reads live icon and rounds thousandth-day build time up");
    put(units[7],0xC0,0);
    tgcx_Expect(!tgcx_TplScan(g,stub,&scanned),"Universal invalid build time refuses the scan");
    put(units[7],0xC0,60100);tgcx_army_universal=universal_was;
    put(db,0x10,ptr(db_vec+7));types[700]=0;
    country[0xBB8]=1;tgcx_Expect(tgcx_TplScan(g,stub,&scanned) && !scanned.pop_count,"Templates blocked country lists no pops");country[0xBB8]=0;
    tgcx_TplGlobals broken=g;broken.unit_db=0x10;
    tgcx_Expect(!tgcx_TplScan(broken,stub,&scanned),"Templates unreadable memory refused, not crashed");

    // ---- recruit: 2 infantry + 1 artillery + 1 hussar + 1 frigate on 5 free regiments
    int tpl[tgcx_tpl_units]={};tpl[3]=2;tpl[4]=1;tpl[5]=1;tpl[6]=1;
    tgcx_tpl_s_post_limit=99;
    tgcx_TplResult r=tgcx_TplRecruitWith(g,stub,tpl);
    tgcx_Expect(r.scanned && r.queued==4 && r.missing==1 && !r.failed,"Templates recruit queues what fits; the naval unit is left out");
    tgcx_Expect(tgcx_tpl_s_last[3]==*reinterpret_cast<uint32_t*>(country+0x1C) && tgcx_tpl_s_last[4]==7,"Templates command tag and country");
    tgcx_tpl_s_made=tgcx_tpl_s_posted=0;
    int scoped[tgcx_tpl_units]={};scoped[3]=4;scoped[4]=1;
    auto local_only=[](void*,int province){return province==101;};
    r=tgcx_TplRecruitWith(g,stub,scoped,nullptr,nullptr,local_only);
    tgcx_Expect(r.queued==2 && r.missing==3 && !r.failed && tgcx_tpl_s_last[1]==101,
        "Conform scoped recruit ignores larger overseas capacity and reports local shortage");
    tgcx_tpl_s_made=tgcx_tpl_s_posted=0;tgcx_tpl_s_post_limit=1;
    r=tgcx_TplRecruitWith(g,stub,tpl);
    tgcx_Expect(r.queued==1 && r.failed==1 && r.missing==4,"Templates stop at the first refused post");
    tgcx_tpl_s_made=tgcx_tpl_s_posted=0;tgcx_tpl_s_post_limit=99;tgcx_tpl_s_vtable=0xBAD;
    r=tgcx_TplRecruitWith(g,stub,tpl);
    tgcx_Expect(!r.queued && r.failed==1 && !tgcx_tpl_s_posted,"Templates never post a command with the wrong vtable");
    tgcx_tpl_s_vtable=0x5150;
    // the TPL-1 observer: each posted order's construction (+0x48) and future stack (+0x50) ids
    struct Seen { unsigned n;int unit[8],province[8];uint32_t cons[8],stack[8]; } seen={};
    auto observe=[](void* ctx,int unit,int province,const uint32_t c[2],const uint32_t st[2]) {
        auto* v=static_cast<Seen*>(ctx);if(v->n<8){v->unit[v->n]=unit;v->province[v->n]=province;v->cons[v->n]=c[1];v->stack[v->n]=st[1];++v->n;}
    };
    for(unsigned i=0;i<16;++i){put(tgcx_tpl_s_commands[i],0x4C,0x100+i);put(tgcx_tpl_s_commands[i],0x54,0x200+i);}
    tgcx_tpl_s_made=tgcx_tpl_s_posted=0;tgcx_tpl_s_post_limit=2;
    r=tgcx_TplRecruitWith(g,stub,tpl,observe,&seen);
    tgcx_Expect(seen.n==2 && seen.cons[0]==0x100 && seen.stack[0]==0x200 && seen.stack[1]==0x201,"Templates observer gets the ids of posted orders only");
    tgcx_Expect(seen.unit[0]>=3 && seen.province[0]>=101,"Templates observer gets the unit and province");

    // ---- native thunk ABIs against fakes (P31)
    tgcx_tpl_can_build_fn=reinterpret_cast<uintptr_t>(&tgcx_TplFakeCanBuild);
    bool ok=tgcx_TplCanBuildNative(0x11,0x22,0x33,0x44);
    tgcx_Expect(ok && tgcx_tpl_t_ecx==0x11 && tgcx_tpl_t_eax==0x22 && tgcx_tpl_t_a==0x33 && tgcx_tpl_t_b==0x44,"Templates can-build ECX/EAX/country/province, AL result");
    tgcx_tpl_has_fn=reinterpret_cast<uintptr_t>(&tgcx_TplFakeHas);tgcx_tpl_supports_fn=reinterpret_cast<uintptr_t>(&tgcx_TplFakeSupports);
    int free_regiments=tgcx_TplFreeNative(0x500);
    tgcx_Expect(free_regiments==3 && tgcx_tpl_t_eax==0x500 && tgcx_tpl_t_a==0 && tgcx_tpl_t_b==0x500,"Templates free regiments = supports(pop,0) - has(EAX pop, 0)");
    tgcx_tpl_new_fn=reinterpret_cast<uintptr_t>(&tgcx_TplFakeNew);tgcx_tpl_ctor_fn=reinterpret_cast<uintptr_t>(&tgcx_TplFakeConstruct);
    void* command=tgcx_TplCommandNative(0x61,102,0x64,0x545354,7);
    tgcx_Expect(command==tgcx_tpl_t_memory[0] && tgcx_tpl_t_args[0]==reinterpret_cast<uintptr_t>(command) && tgcx_tpl_t_args[1]==0x61 &&
        tgcx_tpl_t_args[2]==102 && tgcx_tpl_t_args[3]==0x64 && tgcx_tpl_t_args[4]==0x545354 && tgcx_tpl_t_args[5]==7,
        "Templates ctor (mem, unit, province id, pop, tag, country)");
    uintptr_t saved_base=tgcx_base;static uintptr_t image_world;
    tgcx_base=reinterpret_cast<uintptr_t>(&image_world)-tgcx_world_rva;
    static unsigned char fake_world[0xC00];image_world=reinterpret_cast<uintptr_t>(fake_world);
    *reinterpret_cast<uintptr_t*>(fake_world+0xB24)=reinterpret_cast<uintptr_t>(tgcx_tpl_t_front);
    tgcx_tpl_t_front[0]=reinterpret_cast<uintptr_t>(tgcx_tpl_t_vt_front);tgcx_tpl_t_vt_front[0x44/4]=reinterpret_cast<uintptr_t>(&tgcx_TplFakeSession);
    tgcx_tpl_t_session[0x38/4]=reinterpret_cast<uintptr_t>(tgcx_tpl_t_queue);
    tgcx_tpl_t_queue[0]=reinterpret_cast<uintptr_t>(tgcx_tpl_t_vt_queue);tgcx_tpl_t_vt_queue[0x18/4]=reinterpret_cast<uintptr_t>(&tgcx_TplFakeQueue);
    tgcx_Expect(tgcx_TplPostNative(command) && tgcx_tpl_t_posted==command,"Templates post: (world+0xB24) slot 0x44, +0x38, slot 0x18");
    *reinterpret_cast<uintptr_t*>(fake_world+0xB24)=0;
    tgcx_Expect(!tgcx_TplPostNative(command),"Templates post refused without a front end");
    tgcx_base=saved_base;
    tgcx_tpl_can_build_fn=tgcx_tpl_supports_fn=tgcx_tpl_has_fn=tgcx_tpl_new_fn=tgcx_tpl_ctor_fn=0;
}
