// TPL-0 army templates (mockup board 5-templates): recruit a composition in one
// go. Every regiment is the engine's own CConstructUnitCommand, built as the
// build view builds it (FUN_00732520) and posted to the command queue (R5);
// the engine re-checks each one when it executes (slot 14, FUN_005141D0).
// Templates are an interface preference kept in a local file (D12). Offsets
// and ABIs: docs/symbols.md "TPL-0: building a brigade".
#pragma once

#include <bitset>

constexpr unsigned tgcx_tpl_units=1024;       // bounded engine unit type index (+0x24)
static bool tgcx_army_universal=false;
constexpr unsigned tgcx_tpl_pops=1024,tgcx_tpl_orders=128;
constexpr uint32_t tgcx_tpl_command_size=0x68;
constexpr uint32_t tgcx_tpl_country_manager_rva=0xE587E4,tgcx_tpl_unit_db_rva=0xE5FDD8,tgcx_tpl_pop_types_rva=0xF1BB34;
constexpr uint32_t tgcx_tpl_command_vtable_rva=0xA00CF4;

// ---------------------------------------------------------------- planning (pure)

// A soldier pop: free regiments it can still raise and the unit types it may build.
struct tgcx_TplPop { uintptr_t pop,province;int province_id,free;std::bitset<tgcx_tpl_units> can_build; };
struct tgcx_TplOrder { int unit,pop; };
struct tgcx_TplPlan { unsigned count,missing;tgcx_TplOrder orders[tgcx_tpl_orders]; };

// One order per regiment, from the pop with the most free regiments that may
// build that unit (ties: the earlier pop, which is the native list order).
// Scarcer unit types go first so a common type does not take the only pop a
// rare one could use. What cannot be placed is counted in missing (D12).
static void tgcx_TplMakePlan(const int* counts,tgcx_TplPop* pops,unsigned pop_count,tgcx_TplPlan* out) {
    out->count=out->missing=0;
    int order[tgcx_tpl_units];unsigned units=0,eligible[tgcx_tpl_units]={};
    for(unsigned u=0;u<tgcx_tpl_units;++u) if(counts[u]>0) {
        for(unsigned p=0;p<pop_count;++p) if(pops[p].free>0 && pops[p].can_build.test(u))eligible[u]+=pops[p].free;
        order[units++]=static_cast<int>(u);
    }
    std::stable_sort(order,order+units,[&](int a,int b){ return eligible[a]<eligible[b]; });
    for(unsigned i=0;i<units;++i) for(int n=0;n<counts[order[i]];++n) {
        int u=order[i],best=-1;
        for(unsigned p=0;p<pop_count;++p)
            if(pops[p].free>0 && pops[p].can_build.test(u) && (best<0 || pops[p].free>pops[best].free))best=static_cast<int>(p);
        if(best<0 || out->count>=tgcx_tpl_orders) { ++out->missing;continue; }
        --pops[best].free;out->orders[out->count++]={u,best};
    }
}

// ---------------------------------------------------------------- native entry points

// Replaceable for the fixture tests; the defaults call the guarded game functions.
struct tgcx_TplNative {
    bool(*can_build)(uintptr_t unit,uintptr_t pop,uintptr_t country,uintptr_t province);
    int(*free_regiments)(uintptr_t pop);
    void*(*make_command)(uintptr_t unit,int province_id,uintptr_t pop,uint32_t tag,int country);
    bool(*post)(void* command);
};
static uintptr_t tgcx_tpl_can_build_fn=0,tgcx_tpl_supports_fn=0,tgcx_tpl_has_fn=0,tgcx_tpl_new_fn=0,tgcx_tpl_ctor_fn=0;
static bool tgcx_templates_installed=false;

// FUN_005141D0: ECX unit, EAX pop, stack country then province, RET 8, AL.
static bool tgcx_TplCanBuildNative(uintptr_t unit,uintptr_t soldiers,uintptr_t country,uintptr_t province) {
    uintptr_t fn=tgcx_tpl_can_build_fn;unsigned char result=0;
    __asm { push province } __asm { push country } __asm { mov ecx,unit } __asm { mov eax,soldiers }
    __asm { call fn } __asm { mov result,al }
    return result!=0;
}
// FUN_00965870(pop,0) __stdcall RET 8 minus FUN_00965930: EAX pop, one stack byte, RET 4.
static int tgcx_TplFreeNative(uintptr_t soldiers) {
    uintptr_t fn=tgcx_tpl_has_fn;int has=0;
    __asm { push 0 } __asm { mov eax,soldiers } __asm { call fn } __asm { mov has,eax }
    int supports=reinterpret_cast<int(__stdcall*)(uintptr_t,int)>(tgcx_tpl_supports_fn)(soldiers,0);
    return supports-has;
}
// operator new(0x68) cdecl, then FUN_0057D1B0 __stdcall RET 0x18 (returns this).
static void* tgcx_TplCommandNative(uintptr_t unit,int province_id,uintptr_t pop,uint32_t tag,int country) {
    void* memory=reinterpret_cast<void*(__cdecl*)(size_t)>(tgcx_tpl_new_fn)(tgcx_tpl_command_size);
    if(!memory)return nullptr;
    typedef void*(__stdcall* Construct)(void*,uintptr_t,int,uintptr_t,uint32_t,int);
    return reinterpret_cast<Construct>(tgcx_tpl_ctor_fn)(memory,unit,province_id,pop,tag,country);
}
// (g_world+0xB24) slot 0x44 → +0x38 → slot 0x18(command): the reform/decision queue.
static bool tgcx_TplPostNative(void* command) {
    uintptr_t world=*reinterpret_cast<uintptr_t*>(tgcx_base+tgcx_world_rva);
    uintptr_t front=world?*reinterpret_cast<uintptr_t*>(world+0xB24):0;
    if(!front)return false;
    typedef uintptr_t(__fastcall* Get)(uintptr_t,void*);typedef void(__fastcall* Post)(uintptr_t,void*,void*);
    uintptr_t session=reinterpret_cast<Get>((*reinterpret_cast<uintptr_t**>(front))[0x44/4])(front,nullptr);
    uintptr_t queue=session?*reinterpret_cast<uintptr_t*>(session+0x38):0;
    if(!queue)return false;
    reinterpret_cast<Post>((*reinterpret_cast<uintptr_t**>(queue))[0x18/4])(queue,nullptr,command);
    return true;
}
static tgcx_TplNative tgcx_tpl_native={tgcx_TplCanBuildNative,tgcx_TplFreeNative,tgcx_TplCommandNative,tgcx_TplPostNative};

// ---------------------------------------------------------------- reading the game (no writes)

struct tgcx_TplGlobals { uintptr_t world,country_manager,unit_db,pop_types,command_vtable; };
struct tgcx_TplCountry {
    uintptr_t country;uint32_t tag;int index;
    uintptr_t unit[tgcx_tpl_units];char name[tgcx_tpl_units][64];   // the country's unit types, by index
    int icon[tgcx_tpl_units],days[tgcx_tpl_units];
    unsigned pop_count;tgcx_TplPop pops[tgcx_tpl_pops];
};
static tgcx_TplGlobals tgcx_TplLiveGlobals() {
    auto at=[](uint32_t rva){ return *reinterpret_cast<uintptr_t*>(tgcx_base+rva); };
    return {at(tgcx_world_rva),at(tgcx_tpl_country_manager_rva),at(tgcx_tpl_unit_db_rva),at(tgcx_tpl_pop_types_rva),
            tgcx_base+tgcx_tpl_command_vtable_rva};
}
template<class T> static T tgcx_TplRead(uintptr_t at) { return *reinterpret_cast<T*>(at); }

// The player's country, its land unit types, and every soldier pop in its
// provinces with its free regiments: what FUN_004B81D0/FUN_007353D0 list.
static bool tgcx_TplScanImpl(const tgcx_TplGlobals& g,const tgcx_TplNative& n,tgcx_TplCountry* out) {
    out->pop_count=0;memset(out->unit,0,sizeof(out->unit));memset(out->name,0,sizeof(out->name));
    if(!g.world || !g.country_manager || !g.unit_db || !g.pop_types)return false;
    int index=tgcx_TplRead<int>(g.world+0xB60);
    uintptr_t countries=tgcx_TplRead<uintptr_t>(g.country_manager+4);
    if(index<0 || index>=tgcx_TplRead<int>(g.country_manager) || !countries)return false;
    uintptr_t country=tgcx_TplRead<uintptr_t>(countries+index*4);
    if(!country)return false;
    out->country=country;out->tag=tgcx_TplRead<uint32_t>(country+0x1C);out->index=tgcx_TplRead<int>(country+0x20);
    uintptr_t stats=tgcx_TplRead<uintptr_t>(country+0xBCC);
    uintptr_t types=stats?tgcx_TplRead<uintptr_t>(stats+0x310):0;
    uintptr_t first=tgcx_TplRead<uintptr_t>(g.unit_db+0xC),last=tgcx_TplRead<uintptr_t>(g.unit_db+0x10);
    if(!types || last<first || (last-first)/4>tgcx_tpl_units)return false;
    for(uintptr_t at=first+3*4;at<last;at+=4) {   // positions 0-2 are never buildable (FUN_004B81D0)
        uintptr_t base_type=tgcx_TplRead<uintptr_t>(at);
        int i=base_type?tgcx_TplRead<int>(base_type+0x24):-1;
        if(i<3)continue;
        if(i>=static_cast<int>(tgcx_tpl_units))return false;
        uintptr_t unit=tgcx_TplRead<uintptr_t>(types+i*4);
        if(!unit || !tgcx_TplRead<unsigned char>(unit+0x39))continue;   // land only
        out->unit[i]=unit;
        if(!tgcx_ReadGameString(base_type+8,out->name[i],sizeof(out->name[i])))return false;
        if(tgcx_army_universal) {
            out->icon[i]=tgcx_TplRead<int>(base_type+0x28);
            int days=tgcx_TplRead<int>(unit+0xC0);
            if(days<=0 || days>100000000)return false;
            out->days[i]=(days+999)/1000;
        }
    }
    if(tgcx_TplRead<unsigned char>(country+0xBB8))return true;   // the native list shows no rows then
    uintptr_t provinces=tgcx_TplRead<uintptr_t>(g.world+0xACC);
    uintptr_t owned=tgcx_TplRead<uintptr_t>(country+0x9D8),owned_end=tgcx_TplRead<uintptr_t>(country+0x9DC);
    uintptr_t kinds=tgcx_TplRead<uintptr_t>(g.pop_types+0xC),kinds_end=tgcx_TplRead<uintptr_t>(g.pop_types+0x10);
    if(!provinces || owned_end<owned || kinds_end<kinds || (kinds_end-kinds)/4>256)return false;
    for(uintptr_t p=owned;p<owned_end;p+=4) {
        uintptr_t province=tgcx_TplRead<uintptr_t>(provinces+tgcx_TplRead<int>(p)*4);
        uintptr_t buckets=province?tgcx_TplRead<uintptr_t>(province+0x194):0;
        if(!buckets)continue;
        for(unsigned k=1;k<(kinds_end-kinds)/4;++k) {
            uintptr_t kind=tgcx_TplRead<uintptr_t>(kinds+k*4);
            if(!kind || !tgcx_TplRead<unsigned char>(kind+0x42))continue;   // the soldier type
            unsigned guard=0;
            for(uintptr_t pop=tgcx_TplRead<uintptr_t>(buckets+k*0x10);pop && guard<4096;pop=tgcx_TplRead<uintptr_t>(pop+0x27C),++guard) {
                if(out->pop_count>=tgcx_tpl_pops)return true;
                tgcx_TplPop entry={pop,province,tgcx_TplRead<int>(province+0x58),n.free_regiments(pop),0};
                if(entry.free<=0)continue;
                for(unsigned u=0;u<tgcx_tpl_units;++u)
                    if(out->unit[u] && n.can_build(out->unit[u],pop,country,province))entry.can_build.set(u);
                if(entry.can_build.any())out->pops[out->pop_count++]=entry;
            }
        }
    }
    return true;
}
static bool tgcx_TplScan(const tgcx_TplGlobals& g,const tgcx_TplNative& n,tgcx_TplCountry* out) {
    __try { return tgcx_TplScanImpl(g,n,out); } __except(EXCEPTION_EXECUTE_HANDLER) { return false; }
}
static int tgcx_TplUnitByName(const tgcx_TplCountry& c,const char* name) {
    for(unsigned u=0;u<tgcx_tpl_units;++u)if(c.unit[u] && !strcmp(c.name[u],name))return static_cast<int>(u);
    return -1;
}

// ---------------------------------------------------------------- recruiting

struct tgcx_TplResult { bool scanned;unsigned queued,missing,failed; };
// Told about each posted order with the command's ids, read before posting:
// +0x48 construction (I), +0x50 the stack the regiment will appear in (TPL-1).
typedef void(*tgcx_TplQueued)(void* context,int unit,int province_id,const uint32_t construction[2],const uint32_t stack[2]);
typedef bool(*tgcx_TplEligible)(void* context,int province_id);
// Scope one recruitment/preview without changing native pop capacity. Cache
// the predicate per province within this snapshot, including negative results.
static unsigned tgcx_TplFilterPops(tgcx_TplPop* pops,unsigned count,tgcx_TplEligible eligible,void* context) {
    if(!eligible)return 0;
    int province[tgcx_tpl_pops];bool allowed[tgcx_tpl_pops];unsigned seen=0,excluded=0;
    for(unsigned i=0;i<count;++i) {
        unsigned j=0;while(j<seen && province[j]!=pops[i].province_id)++j;
        if(j==seen) {province[seen]=pops[i].province_id;allowed[seen++]=eligible(context,pops[i].province_id);}
        if(!allowed[j]) {pops[i].free=0;++excluded;}
    }
    return excluded;
}
static bool tgcx_TplSendOrder(const tgcx_TplGlobals& g,const tgcx_TplNative& n,const tgcx_TplCountry& c,const tgcx_TplOrder& o,
                              tgcx_TplQueued queued=nullptr,void* context=nullptr) {
    const tgcx_TplPop& pop=c.pops[o.pop];
    __try {
        void* command=n.make_command(c.unit[o.unit],pop.province_id,pop.pop,c.tag,c.index);
        // Only a real CConstructUnitCommand goes to the queue; the queue owns it after posting.
        if(!command || tgcx_TplRead<uintptr_t>(reinterpret_cast<uintptr_t>(command))!=g.command_vtable)return false;
        uint32_t construction[2],stack[2];
        memcpy(construction,reinterpret_cast<char*>(command)+0x48,8);memcpy(stack,reinterpret_cast<char*>(command)+0x50,8);
        if(!n.post(command))return false;
        if(queued)queued(context,o.unit,pop.province_id,construction,stack);
        tgcx_Log("Template regiment %s province=%d pop=%08X command=%08X tag=%.4s",
            c.name[o.unit],pop.province_id,static_cast<uint32_t>(pop.pop),static_cast<uint32_t>(reinterpret_cast<uintptr_t>(command)),
            reinterpret_cast<const char*>(&c.tag));
        return true;
    } __except(EXCEPTION_EXECUTE_HANDLER) { return false; }
}
// counts[unit index] regiments; recruit what fits and report the rest (D12).
static tgcx_TplResult tgcx_TplRecruitWith(const tgcx_TplGlobals& g,const tgcx_TplNative& n,const int* counts,
                                          tgcx_TplQueued queued=nullptr,void* context=nullptr,
                                          tgcx_TplEligible eligible=nullptr,void* eligibility_context=nullptr) {
    static tgcx_TplCountry country;static tgcx_TplPlan plan;
    tgcx_TplResult r={};
    int wanted[tgcx_tpl_units];unsigned total=0;
    for(unsigned u=0;u<tgcx_tpl_units;++u) { wanted[u]=counts[u]>0?counts[u]:0;total+=wanted[u]; }
    if(!(r.scanned=tgcx_TplScan(g,n,&country))) { r.missing=total;tgcx_Log("Template recruit refused: game read failed");return r; }
    for(unsigned u=0;u<tgcx_tpl_units;++u)if(wanted[u] && !country.unit[u]) { r.missing+=wanted[u];wanted[u]=0; }
    unsigned excluded=tgcx_TplFilterPops(country.pops,country.pop_count,eligible,eligibility_context);
    if(excluded)tgcx_Log("Template recruitment scope: %u soldier pops excluded (no land route to target)",excluded);
    tgcx_TplMakePlan(wanted,country.pops,country.pop_count,&plan);
    r.missing+=plan.missing;
    for(unsigned i=0;i<plan.count;++i) {
        if(tgcx_TplSendOrder(g,n,country,plan.orders[i],queued,context))++r.queued;
        else { ++r.failed;tgcx_Log("Template regiment %s not queued (command refused)",country.name[plan.orders[i].unit]);break; }
    }
    if(r.failed)r.missing+=plan.count-r.queued;
    tgcx_Log("Template recruit: %u queued, %u left out, %u soldier pops",r.queued,r.missing,country.pop_count);
    return r;
}

// Every RVA the recruit reads or calls (check_exe.SIGNATURES, TPL-0).
static const uint32_t tgcx_tpl_rvas[]={0x17D1B0,0x17D1EF,0x17D20E,0x17D2C6,0xA00CF4,0xA00D14,0x17DA45,0x3325D0,0x6AE9AF,0x33261B,
        0x1141D0,0x114284,0x565870,0x56589D,0x565930,0x5659E6,0x11424B,0x0B8285,0x0B82C3,0x0B8313,0x0B8343,0x0B838B,0x335416,0x335773,0x41EEB5};
static void tgcx_InstallTemplates() {
    if(!tgcx_RequireSignatures(tgcx_tpl_rvas,_countof(tgcx_tpl_rvas))) { tgcx_Log("Templates rejected: guards; nothing is recruited");return; }
    tgcx_tpl_can_build_fn=tgcx_base+0x1141D0;tgcx_tpl_supports_fn=tgcx_base+0x565870;tgcx_tpl_has_fn=tgcx_base+0x565930;
    tgcx_tpl_new_fn=tgcx_base+0x6AE9AF;tgcx_tpl_ctor_fn=tgcx_base+0x17D1B0;
    tgcx_templates_installed=true;tgcx_Log("Templates ready: CConstructUnitCommand via the engine queue");
}
static tgcx_TplResult tgcx_TplRecruit(const int* counts,tgcx_TplQueued queued=nullptr,void* context=nullptr,
                                     tgcx_TplEligible eligible=nullptr,void* eligibility_context=nullptr) {
    if(!tgcx_templates_installed) { tgcx_TplResult r={};return r; }
    return tgcx_TplRecruitWith(tgcx_TplLiveGlobals(),tgcx_tpl_native,counts,queued,context,eligible,eligibility_context);
}
