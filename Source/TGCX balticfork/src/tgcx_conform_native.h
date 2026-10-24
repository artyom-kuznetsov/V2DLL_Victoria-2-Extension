// TPL-1 Conform, native layer: the engine commands Conform posts, built
// exactly as their native callers build them; the read-only registry walk
// that turns stored ids back into objects; the daily driver that steps the
// pure tracker (tgcx_conform.h); and the CUnitView capture the Conform window
// (tgcx_conform_gui.h) binds to. The DLL writes no unit membership, position or strength (R5):
// every change is a command the engine validates when it executes. The only
// direct write is the client's next-object-id counter, taken under the
// engine's own lock exactly as the native new-stack button takes it.
// Evidence: docs/symbols.md "TPL-1" and "TPL-1 native wrappers".
#pragma once
#include "tgcx_conform.h"

constexpr uint32_t tgcx_cf_low_rva=0xE58A98,tgcx_cf_high_rva=0xE58A94,tgcx_cf_counter_rva=0xE58A9C,
    tgcx_cf_id_base_rva=0xE58A90,tgcx_cf_lock_rva=0xF1CA68;
constexpr uint32_t tgcx_cf_move_vt_rva=0xA03394,tgcx_cf_merge_vt_rva=0xA03514,tgcx_cf_transfer_vt_rva=0xA03554,
    tgcx_cf_create_vt_rva=0xA00D34,tgcx_cf_view_vt_rva=0xA16850;
// Allocation sizes as every native caller pushes them (0.6.1 used 0x48 for
// Merge; its ctor writes a byte at +0x48, a heap overflow that crashed, P45).
constexpr uint32_t tgcx_cf_move_size=0x90,tgcx_cf_merge_size=0x4C,tgcx_cf_transfer_size=0x6C,tgcx_cf_create_size=0x60;

struct tgcx_CfGlobals {
    uintptr_t world,low,high;                  // g_world and the two registry tables (pointers already read)
    uintptr_t counter,id_base,lock;            // addresses: ++dword, word, spinlock byte
    uintptr_t vt_move,vt_merge,vt_transfer,vt_create;
};
static tgcx_CfGlobals tgcx_CfLiveGlobals() {
    auto at=[](uint32_t rva){ return *reinterpret_cast<uintptr_t*>(tgcx_base+rva); };
    return {at(tgcx_world_rva),at(tgcx_cf_low_rva),at(tgcx_cf_high_rva),
            tgcx_base+tgcx_cf_counter_rva,tgcx_base+tgcx_cf_id_base_rva,tgcx_base+tgcx_cf_lock_rva,
            tgcx_base+tgcx_cf_move_vt_rva,tgcx_base+tgcx_cf_merge_vt_rva,tgcx_base+tgcx_cf_transfer_vt_rva,tgcx_base+tgcx_cf_create_vt_rva};
}

// ---------------------------------------------------------------- registry and stacks (reads only)

// ObjectRegistry_HashLookup (FUN_009C1D40), walked by hand: type > 0x1268 in
// the high table; bucket (type<<16)+id mod +4 in +8; node +0 entry, +4 next;
// entry +8 type, +0xC id. A stack object is entry-8; a regiment is the entry
// itself, as it appears in a stack's regiment list.
static uintptr_t tgcx_CfLookup(const tgcx_CfGlobals& g,const tgcx_CfId& id) {
    uintptr_t table=id.type>0x1268?g.high:g.low;
    if(!table || tgcx_CfNone(id))return 0;
    uint32_t count=tgcx_TplRead<uint32_t>(table+4);uintptr_t buckets=tgcx_TplRead<uintptr_t>(table+8);
    if(!count || !buckets)return 0;
    uint32_t key=(id.type<<16)+id.id;unsigned guard=0;
    for(uintptr_t node=tgcx_TplRead<uintptr_t>(buckets+(key%count)*4);node && guard<4096;node=tgcx_TplRead<uintptr_t>(node+4),++guard) {
        uintptr_t entry=tgcx_TplRead<uintptr_t>(node);
        if(entry && tgcx_TplRead<uint32_t>(entry+8)==id.type && tgcx_TplRead<uint32_t>(entry+0xC)==id.id)return entry;
    }
    return 0;
}
static tgcx_CfId tgcx_CfStackId(uintptr_t stack) { return {tgcx_TplRead<uint32_t>(stack+0x10),tgcx_TplRead<uint32_t>(stack+0x14)}; }
static tgcx_CfId tgcx_CfEntryId(uintptr_t entry) { return {tgcx_TplRead<uint32_t>(entry+8),tgcx_TplRead<uint32_t>(entry+0xC)}; }
static int tgcx_CfPlayer(const tgcx_CfGlobals& g) { return g.world?tgcx_TplRead<int>(g.world+0xB60):-1; }
// Where a stack is: +0xDC its province object, whose +0x58 is the province id
// (Move's ctor stores it as the start, the AI merge compares it). +0xC0 is
// the owner's tag and +0xC4 the owner's country index (U-9: "FRA", 80).
static int tgcx_CfProvince(uintptr_t stack) {
    uintptr_t province=tgcx_TplRead<uintptr_t>(stack+0xDC);
    return province?tgcx_TplRead<int>(province+0x58):-1;
}

// A stack of the player's, of the same class as the reference (a land army),
// found again by id. Anything else does not resolve.
static uintptr_t tgcx_CfStackOf(const tgcx_CfGlobals& g,const tgcx_CfId& id,uintptr_t vtable) {
    uintptr_t entry=tgcx_CfLookup(g,id);if(!entry)return 0;
    uintptr_t stack=entry-8;
    if(tgcx_TplRead<uintptr_t>(stack)!=vtable || tgcx_TplRead<int>(stack+0xC4)!=tgcx_CfPlayer(g))return 0;
    return stack;
}
// Regiment list +0x38 (node +0 regiment, +8 next); a regiment's unit type is
// +0x38, matched against the country's own unit types (TPL-0 scan) for the index.
struct tgcx_CfStack {
    uintptr_t stack;tgcx_CfId id;int province,country;unsigned count;
    tgcx_CfRegiment regiment[tgcx_cf_regiments];uintptr_t entry[tgcx_cf_regiments];uintptr_t type[tgcx_cf_regiments];
};
static bool tgcx_CfReadStack(uintptr_t stack,const uintptr_t* units,tgcx_CfStack* out) {
    out->stack=stack;out->count=0;out->id=tgcx_CfStackId(stack);
    out->province=tgcx_CfProvince(stack);out->country=tgcx_TplRead<int>(stack+0xC4);
    unsigned guard=0;
    for(uintptr_t node=tgcx_TplRead<uintptr_t>(stack+0x38);node && guard<1024;node=tgcx_TplRead<uintptr_t>(node+8),++guard) {
        uintptr_t entry=tgcx_TplRead<uintptr_t>(node);if(!entry)continue;
        if(out->count>=tgcx_cf_regiments)return false;
        uintptr_t type=tgcx_TplRead<uintptr_t>(entry+0x38);int unit=-1;
        for(unsigned u=0;units && u<tgcx_tpl_units;++u)if(units[u] && units[u]==type) { unit=static_cast<int>(u);break; }
        out->entry[out->count]=entry;out->type[out->count]=type;out->regiment[out->count++]={tgcx_CfEntryId(entry),unit};
    }
    return guard<1024;
}
static bool tgcx_CfStackHas(uintptr_t stack,uintptr_t entry) {
    unsigned guard=0;
    for(uintptr_t node=tgcx_TplRead<uintptr_t>(stack+0x38);node && guard<1024;node=tgcx_TplRead<uintptr_t>(node+8),++guard)
        if(tgcx_TplRead<uintptr_t>(node)==entry)return true;
    return false;
}

// ---------------------------------------------------------------- commands (native entry points)

static uintptr_t tgcx_cf_move_fn=0,tgcx_cf_merge_fn=0,tgcx_cf_transfer_fn=0,tgcx_cf_create_fn=0,tgcx_cf_lock_fn=0;
static void* tgcx_CfAlloc(uint32_t size) { return reinterpret_cast<void*(__cdecl*)(size_t)>(tgcx_tpl_new_fn)(size); }

// Like the rally point (FUN_00491E80): Move(stack, province, replace 1, safe 1, very safe 1, attach 0), RET 0x1C.
static void* tgcx_CfMoveNative(uintptr_t stack,int province) {
    void* memory=tgcx_CfAlloc(tgcx_cf_move_size);if(!memory)return nullptr;
    typedef void*(__stdcall* Construct)(void*,uintptr_t,int,int,int,int,int);
    return reinterpret_cast<Construct>(tgcx_cf_move_fn)(memory,stack,province,1,1,1,0);
}
// FUN_005E13B0(mem, list) RET 8: list {head, tail, count}, node {stack, prev, next, byte};
// the first stack stays. The ctor copies references, so the list can live here.
struct tgcx_CfNode { uintptr_t item;tgcx_CfNode* prev;tgcx_CfNode* next;uint32_t flag; };
struct tgcx_CfList { tgcx_CfNode* head;tgcx_CfNode* tail;uint32_t count; };
static void* tgcx_CfMergeNative(uintptr_t target,uintptr_t other) {
    void* memory=tgcx_CfAlloc(tgcx_cf_merge_size);if(!memory)return nullptr;
    tgcx_CfNode node[2]={{target,nullptr,&node[1],0},{other,&node[0],nullptr,0}};
    tgcx_CfList list={&node[0],&node[1],2};
    typedef void*(__stdcall* Construct)(void*,tgcx_CfList*);
    return reinterpret_cast<Construct>(tgcx_cf_merge_fn)(memory,&list);
}
// As the reorganize drop (FUN_00794350): FUN_005E1EE0(mem, target type, target id, regiment) RET 0x10.
static void* tgcx_CfTransferNative(const tgcx_CfId& target,uintptr_t regiment) {
    void* memory=tgcx_CfAlloc(tgcx_cf_transfer_size);if(!memory)return nullptr;
    typedef void*(__stdcall* Construct)(void*,uint32_t,uint32_t,uintptr_t);
    return reinterpret_cast<Construct>(tgcx_cf_transfer_fn)(memory,target.type,target.id,regiment);
}
// As the new-stack button (FUN_0079DB10): FUN_0057DB30(mem, tag +0xC0,
// country +0xC4, id, id, province id +0xDC->+0x58, kind 0 (land), split 0)
// RET 0x28: an empty stack beside the source.
static void* tgcx_CfCreateNative(uintptr_t source,const tgcx_CfId& id) {
    void* memory=tgcx_CfAlloc(tgcx_cf_create_size);if(!memory)return nullptr;
    typedef void*(__stdcall* Construct)(void*,uint32_t,int,uint32_t,uint32_t,uint32_t,uint32_t,int,int,int);
    return reinterpret_cast<Construct>(tgcx_cf_create_fn)(memory,tgcx_TplRead<uint32_t>(source+0xC0),tgcx_TplRead<int>(source+0xC4),
        id.type,id.id,id.type,id.id,tgcx_CfProvince(source),0,0);
}
// FUN_009C12D0: EAX the lock byte, spins until taken, returns the byte to store back.
static unsigned char tgcx_CfLockNative(uintptr_t lock_byte) {
    uintptr_t fn=tgcx_cf_lock_fn;unsigned char release=0;
    __asm { mov eax,lock_byte } __asm { call fn } __asm { mov release,al }
    return release;
}
// The client's next id, as the native new-stack button takes it: under the
// lock, ++[counter], type = word [base] + 0x1268. Not simulation state; it
// names the stack the Create command will make.
static bool tgcx_CfNewIdNative(const tgcx_CfGlobals& g,tgcx_CfId* out) {
    unsigned char release=tgcx_CfLockNative(g.lock);
    uint32_t id=++*reinterpret_cast<volatile uint32_t*>(g.counter);
    uint32_t type=*reinterpret_cast<const uint16_t*>(g.id_base)+0x1268u;
    *reinterpret_cast<volatile unsigned char*>(g.lock)=release;
    *out={type,id};return true;
}
// The stack's own class tests, as the new-stack button asks them (vfunc +0x3C
// gives kind 1, +0x40 kind 2): Conform works on land stacks, kind 0, only.
static bool tgcx_CfLandNative(uintptr_t stack) {
    auto* vt=*reinterpret_cast<uintptr_t**>(stack);
    if(vt[0x3C/4]<tgcx_base || vt[0x3C/4]>=tgcx_base+tgcx_image_size || vt[0x40/4]<tgcx_base || vt[0x40/4]>=tgcx_base+tgcx_image_size)return false;
    typedef char(__fastcall* Test)(uintptr_t,void*);
    return !reinterpret_cast<Test>(vt[0x3C/4])(stack,nullptr) && !reinterpret_cast<Test>(vt[0x40/4])(stack,nullptr);
}

static uintptr_t tgcx_cf_path_fn=0,tgcx_cf_path_clear_fn=0;
// FUN_005B8500: EAX the explicit start province, four stack arguments, RET
// 0x10. Use the same VerySafe predicate as our Move, without issuing orders
// or changing the army's province. Its output list belongs to the game heap.
struct tgcx_CfPath { uintptr_t head,tail;int count;uint32_t flags,extra; };
static bool tgcx_CfPathQuery(uintptr_t start,uintptr_t stack,uintptr_t destination,uintptr_t finder,tgcx_CfPath* path) {
    uintptr_t fn=tgcx_cf_path_fn;unsigned char result=0;
    __asm { push path } __asm { push destination } __asm { push stack } __asm { push finder }
    __asm { mov eax,start } __asm { call fn } __asm { mov result,al }
    return result!=0;
}
static bool tgcx_CfReachNative(uintptr_t stack,int province) {
    if(!tgcx_cf_path_fn || !tgcx_cf_path_clear_fn || !stack || province<0 || province>65535)return false;
    tgcx_CfPath path={};bool result=false;
    __try {
        uintptr_t world=*reinterpret_cast<uintptr_t*>(tgcx_base+tgcx_world_rva);
        uintptr_t provinces=world?tgcx_TplRead<uintptr_t>(world+0xACC):0;
        uintptr_t start=provinces?tgcx_TplRead<uintptr_t>(provinces+province*4):0;
        uintptr_t destination=tgcx_TplRead<uintptr_t>(stack+0xDC);
        uintptr_t start_map=start?tgcx_TplRead<uintptr_t>(start+0x5C):0;
        uintptr_t end_map=destination?tgcx_TplRead<uintptr_t>(destination+0x5C):0;
        // +0x2A is IS LAND (nonzero), not is sea. Native naval edge policy
        // rejects two nonzero endpoints and permits two zero endpoints;
        // a mixed edge is allowed only through the land province's port.
        // Straits remain native land edges; no embarked/sea node is admitted.
        if(start_map && end_map && tgcx_TplRead<unsigned char>(start_map+0x2A) &&
           tgcx_TplRead<unsigned char>(end_map+0x2A)) {
            if(start==destination)result=true;
            else {
                uintptr_t finder=tgcx_base+0xA03794;
                result=tgcx_CfPathQuery(start,stack,destination,reinterpret_cast<uintptr_t>(&finder),&path);
                unsigned visited=0;
                for(uintptr_t node=path.head;result && node;node=tgcx_TplRead<uintptr_t>(node+8)) {
                    int id=tgcx_TplRead<int>(node);
                    if(id<0 || id>65535 || ++visited>65536) {result=false;break;}
                    uintptr_t p=tgcx_TplRead<uintptr_t>(provinces+id*4);
                    uintptr_t map=p?tgcx_TplRead<uintptr_t>(p+0x5C):0;
                    if(!map || !tgcx_TplRead<unsigned char>(map+0x2A))result=false;
                }
            }
        }
    } __except(EXCEPTION_EXECUTE_HANDLER) {result=false;}
    // Match Move's cleanup on both successful and failed queries. Never
    // cross allocators or retain native list nodes after this snapshot.
    __try {
        typedef void(__fastcall* Clear)(tgcx_CfPath*,void*);
        reinterpret_cast<Clear>(tgcx_cf_path_clear_fn)(&path,nullptr);
    } __except(EXCEPTION_EXECUTE_HANDLER) {result=false;tgcx_Log("Conform: route cleanup fault; recruitment refused");}
    return result;
}

// Replaceable for the fixture tests; the defaults call the guarded game functions.
struct tgcx_CfNative {
    void*(*move)(uintptr_t stack,int province);
    void*(*merge)(uintptr_t target,uintptr_t other);
    void*(*transfer)(const tgcx_CfId& target,uintptr_t regiment);
    void*(*create)(uintptr_t source,const tgcx_CfId& id);
    bool(*new_id)(const tgcx_CfGlobals& g,tgcx_CfId* out);
    bool(*land)(uintptr_t stack);
    bool(*post)(void* command);
    tgcx_TplResult(*recruit)(uintptr_t target,const int* counts,tgcx_TplQueued queued,void* context);
    bool(*reachable)(uintptr_t target,int province);
};
static bool tgcx_CfRecruitEligible(void* target,int province) {return tgcx_CfReachNative(reinterpret_cast<uintptr_t>(target),province);}
static tgcx_TplResult tgcx_CfRecruitNative(uintptr_t target,const int* counts,tgcx_TplQueued queued,void* context) {
    return tgcx_TplRecruit(counts,queued,context,tgcx_CfRecruitEligible,reinterpret_cast<void*>(target));
}
static tgcx_CfNative tgcx_cf_native={tgcx_CfMoveNative,tgcx_CfMergeNative,tgcx_CfTransferNative,tgcx_CfCreateNative,
    tgcx_CfNewIdNative,tgcx_CfLandNative,tgcx_TplPostNative,tgcx_CfRecruitNative,tgcx_CfReachNative};

struct tgcx_CfReachContext {const tgcx_CfNative* native;uintptr_t target;};
static bool tgcx_CfScopedEligible(void* context,int province) {
    auto* c=static_cast<tgcx_CfReachContext*>(context);return c->native->reachable(c->target,province);
}
static unsigned tgcx_CfScopePops(const tgcx_CfNative& n,uintptr_t stack,tgcx_TplPop* pops,unsigned count) {
    tgcx_CfReachContext context={&n,stack};return tgcx_TplFilterPops(pops,count,tgcx_CfScopedEligible,&context);
}

// Only a command with its own class's vtable is posted; the queue owns it then.
static bool tgcx_CfSend(void* command,uintptr_t vtable,const tgcx_CfNative& n) {
    if(!command || tgcx_TplRead<uintptr_t>(reinterpret_cast<uintptr_t>(command))!=vtable)return false;
    return n.post(command);
}

// ---------------------------------------------------------------- the session (D13: memory only)

static tgcx_CfTracker tgcx_cf_tracker;
static uintptr_t tgcx_cf_world=0;static uint32_t tgcx_cf_date=0;
static void tgcx_CfForget(const char* why) {
    unsigned n=0;for(auto& t:tgcx_cf_tracker.task)if(t.used) { t.used=false;++n; }
    if(n)tgcx_Log("Conform: %u pending orders forgotten (%s); Conform the stack again to gather them",n,why);
}
// One step per game day for every task. vtable is the class of land stacks,
// remembered from the stack the player conformed.
static uintptr_t tgcx_cf_stack_vtable=0;
// A changed target location/access can strand an earlier reinforcement.
// Release only our tracking; keep the unit/construction and all user orders.
static void tgcx_CfPruneRoutes(const tgcx_CfGlobals& g,const tgcx_CfNative& n,const tgcx_CfId& target_id,uintptr_t target) {
    for(auto& t:tgcx_cf_tracker.task) {
        if(!t.used || t.kind!=TGCX_CF_JOIN || !tgcx_CfSame(t.target,target_id))continue;
        uintptr_t stack=tgcx_CfStackOf(g,t.stack,tgcx_cf_stack_vtable);
        int province=stack?tgcx_CfProvince(stack):t.origin;
        if(province>=0 && !n.reachable(target,province)) {
            t.used=false;tgcx_Log("Conform: reinforcement %u cannot reach target %u by land; left in place, no longer counted as pending",
                t.stack.id,target_id.id);
        }
    }
}
static void tgcx_CfDaily(const tgcx_CfGlobals& g,const tgcx_CfNative& n) {
    if(!g.world)return;
    uint32_t date=tgcx_TplRead<uint32_t>(g.world+0xB0C);
    if(g.world!=tgcx_cf_world || date<tgcx_cf_date) { tgcx_CfForget("another game or a reload");tgcx_cf_world=g.world; }
    if(date==tgcx_cf_date)return;
    tgcx_cf_date=date;
    for(auto& t:tgcx_cf_tracker.task) {
        if(!t.used)continue;
        uintptr_t target=tgcx_CfStackOf(g,t.target,tgcx_cf_stack_vtable),stack=tgcx_CfStackOf(g,t.stack,tgcx_cf_stack_vtable);
        tgcx_CfSeen s={target!=0,target?tgcx_CfProvince(target):-1,stack!=0,stack?tgcx_CfProvince(stack):-1,
                       !tgcx_CfNone(t.construction) && tgcx_CfLookup(g,t.construction)!=0};
        if(t.kind==TGCX_CF_JOIN && target && stack && !n.reachable(target,s.stack_province)) {
            t.used=false;tgcx_Log("Conform: reinforcement %u has no land route to target %u; left in place",t.stack.id,t.target.id);continue;
        }
        int province=-1;
        switch(tgcx_CfStep(&t,s,date,&province)) {
        case TGCX_CF_MOVE:
            if(!tgcx_CfSend(n.move(stack,province),g.vt_move,n))tgcx_Log("Conform: Move %u to province %d not queued",t.stack.id,province);
            else tgcx_Log("Conform: stack %u marches to province %d (safe path)",t.stack.id,province);
            break;
        case TGCX_CF_MERGE:
            if(!tgcx_CfSend(n.merge(target,stack),g.vt_merge,n))tgcx_Log("Conform: Merge of %u not queued",t.stack.id);
            else tgcx_Log("Conform: stack %u joins %u",t.stack.id,t.target.id);
            break;
        case TGCX_CF_TRANSFER: {
            // Only regiments still in the conformed stack, and only while the new
            // stack is beside it; the engine re-checks each one (FUN_00513F30).
            unsigned sent=0,skipped=0;
            if(s.target_province!=s.stack_province) { tgcx_Log("Conform: the conformed stack moved before its extras left; nothing detached");t.used=false;break; }
            // TPL-4: what FUN_00513F30 checks, logged so a refusal can be read
            // from tgcx.log: both stacks' +0x74 and +0x194 must be 0 and their
            // +0xDC locations equal; each regiment's +0x74 is its stack.
            tgcx_Log("Conform: transfer check new %u (+74 %X +194 %X +DC %X +40 %d) source %u (+74 %X +194 %X +DC %X +40 %d)",
                t.stack.id,tgcx_TplRead<uint32_t>(stack+0x74),tgcx_TplRead<uint32_t>(stack+0x194),tgcx_TplRead<uint32_t>(stack+0xDC),
                tgcx_TplRead<int>(stack+0x40),t.target.id,tgcx_TplRead<uint32_t>(target+0x74),tgcx_TplRead<uint32_t>(target+0x194),
                tgcx_TplRead<uint32_t>(target+0xDC),tgcx_TplRead<int>(target+0x40));
            for(unsigned i=0;i<t.regiments;++i) {
                uintptr_t entry=tgcx_CfLookup(g,t.regiment[i]);
                if(!entry || !tgcx_CfStackHas(target,entry)) { ++skipped;continue; }
                if(tgcx_CfSend(n.transfer(t.stack,entry),g.vt_transfer,n))++sent;else { ++skipped;break; }
            }
            tgcx_Log("Conform: %u extra transfers sent to stack %u, %u skipped",sent,t.stack.id,skipped);
            break;
        }
        case TGCX_CF_VERIFY: {
            // The engine refuses a Transfer silently: count what actually moved.
            unsigned arrived=0,still=0;
            for(unsigned i=0;i<t.regiments;++i) {
                uintptr_t entry=tgcx_CfLookup(g,t.regiment[i]);
                if(entry && stack && tgcx_CfStackHas(stack,entry))++arrived;
                else if(entry && target && tgcx_CfStackHas(target,entry)) {
                    ++still;
                    if(still==1)tgcx_Log("Conform: regiment %u still in stack %u (+74 %X, its +38 type +42 %u)",t.regiment[i].id,t.target.id,
                        tgcx_TplRead<uint32_t>(entry+0x74),tgcx_TplRead<unsigned char>(tgcx_TplRead<uintptr_t>(entry+0x38)+0x42));
                }
            }
            tgcx_Log("Conform: %u of %u extras arrived in stack %u, %u still in stack %u",arrived,t.regiments,t.stack.id,still,t.target.id);
            if(!stack)tgcx_Log("Conform: detach stack %u disappeared before verification; %u extras remain in the source",t.stack.id,still);
            if(stack && still && !t.retries) { t.used=true;t.transfer_sent=false;++t.retries;tgcx_Log("Conform: sending the transfers again tomorrow"); }
            break;
        }
        case TGCX_CF_TARGET_GONE: tgcx_Log("Conform: stack %u stays: the stack it was joining is gone",t.stack.id);break;
        case TGCX_CF_CANCELLED: tgcx_Log("Conform: order for stack %u dropped (construction cancelled or stack not created)",t.stack.id);break;
        default: break;
        }
    }
}

// ---------------------------------------------------------------- conforming one stack

struct tgcx_CfResult { tgcx_CfRefusal refusal;bool read;unsigned detached,gathered,queued,missing,failed; };
struct tgcx_CfQueuedContext { tgcx_CfId target;uint32_t date;unsigned added; };
static void tgcx_CfOnQueued(void* context,int unit,int province,const uint32_t construction[2],const uint32_t stack[2]) {
    auto* c=static_cast<tgcx_CfQueuedContext*>(context);
    tgcx_CfId s={stack[0],stack[1]},k={construction[0],construction[1]};
    if(auto* task=tgcx_CfAdd(&tgcx_cf_tracker,TGCX_CF_JOIN,c->target,s,k,unit,c->date)) {task->origin=province;++c->added;}
    else tgcx_Log("Conform: tracker full; regiment from province %d will not march by itself",province);
}
// The plan for one stack, read and planned but nothing sent: what the
// Conform window previews and what Conform then carries out. False when the
// stack is not a readable land stack of the player's. Not guarded: callers are.
static bool tgcx_CfPrepare(const tgcx_CfGlobals& g,const tgcx_CfNative& n,uintptr_t stack,const uintptr_t* units,
                           const int* want,tgcx_CfPlan* plan,tgcx_CfStack* target) {
    if(!g.world || !stack || tgcx_TplRead<int>(stack+0xC4)!=tgcx_CfPlayer(g) || !n.land(stack) ||
       !tgcx_CfReadStack(stack,units,target))return false;
    tgcx_CfPruneRoutes(g,n,target->id,stack);
    int pending[tgcx_tpl_units];tgcx_CfPending(tgcx_cf_tracker,target->id,pending);
    // Missing regiments are always built (user, 2026-10-17): no idle stacks
    // are gathered, so the planner gets none.
    tgcx_CfMakePlan(target->regiment,target->count,want,pending,nullptr,0,plan);
    return true;
}
// Extras already on their way out of this stack: one Create per stack at a time.
static bool tgcx_CfLeaving(const tgcx_CfId& target) {
    for(const auto& t:tgcx_cf_tracker.task)if(t.used && t.kind==TGCX_CF_FILL && tgcx_CfSame(t.target,target))return true;
    return false;
}
// want[unit index] regiments. Plans first; nothing is sent unless the plan
// is accepted. Extras: one Create immediately followed by the Transfers in
// the same command queue submission, before an empty stack can be removed. Gathered
// stacks: tracked, marched and merged by the daily driver. Builds: TPL-0's
// recruit, each future stack tracked the same way.
static tgcx_CfResult tgcx_CfConformWith(const tgcx_CfGlobals& g,const tgcx_CfNative& n,uintptr_t stack,const uintptr_t* units,
                                        const int* want,tgcx_CfPlan* plan) {
    tgcx_CfResult r={};r.refusal=TGCX_CF_OK;
    static tgcx_CfStack target;
    __try {
        if(!tgcx_CfPrepare(g,n,stack,units,want,plan,&target)) { tgcx_Log("Conform refused: not a readable land stack of the player");return r; }
        r.read=true;
        if((r.refusal=plan->refusal)!=TGCX_CF_OK) { tgcx_Log("Conform: plan refused (%d)",plan->refusal);return r; }
        tgcx_cf_stack_vtable=tgcx_TplRead<uintptr_t>(stack);
        uint32_t date=tgcx_TplRead<uint32_t>(g.world+0xB0C);
        bool leaving=tgcx_CfLeaving(target.id);
        if(plan->detach_count && leaving)tgcx_Log("Conform: extras of stack %u are already leaving",target.id.id);
        else if(plan->detach_count) {
            tgcx_CfId id={};
            tgcx_CfTask* t=nullptr;
            if(!n.new_id(g,&id)) { ++r.failed;tgcx_Log("Conform: no new id; nothing detached"); }
            else if(!(t=tgcx_CfAdd(&tgcx_cf_tracker,TGCX_CF_FILL,target.id,id,{},-1,date))) {
                ++r.failed;tgcx_Log("Conform: tracker full; no Create queued");
            } else if(!tgcx_CfSend(n.create(stack,id),g.vt_create,n)) {
                t->used=false;++r.failed;tgcx_Log("Conform: Create not queued; nothing detached");
            } else {
                // Waiting a game day left the destination empty and unselected.
                // Transfer stores the existing regiment's reference; the new
                // destination id is resolved later, when the command executes.
                // Keep Create first, then all Transfers, in the engine queue.
                for(unsigned i=0;i<plan->detach_count;++i) {
                    t->regiment[t->regiments++]=plan->detach[i].id;
                    uintptr_t entry=tgcx_CfLookup(g,plan->detach[i].id);
                    if(i==0 && entry) {
                        uintptr_t type=tgcx_TplRead<uintptr_t>(entry+0x38);
                        tgcx_Log("Conform: first extra %u unit flags +40 %u +42 %u",plan->detach[i].id.id,
                            tgcx_TplRead<unsigned char>(type+0x40),tgcx_TplRead<unsigned char>(type+0x42));
                    }
                    if(entry && tgcx_CfStackHas(stack,entry) && tgcx_CfSend(n.transfer(id,entry),g.vt_transfer,n))++r.detached;
                    else ++r.failed;
                }
                t->transfer_sent=true;t->transfer_date=date;
                tgcx_Log("Conform: Create then %u of %u extra transfers queued together for stack %u/%u",r.detached,t->regiments,id.type,id.id);
            }
        }
        for(unsigned i=0;i<plan->gather_count;++i)
            if(tgcx_CfAdd(&tgcx_cf_tracker,TGCX_CF_JOIN,target.id,plan->gather[i].stack,{},plan->gather[i].unit,date))++r.gathered;
            else ++r.failed;
        if(plan->build_total) {
            tgcx_CfQueuedContext context={target.id,date,0};
            tgcx_TplResult built=n.recruit(stack,plan->build,tgcx_CfOnQueued,&context);
            r.queued=built.queued;r.missing=built.missing;r.failed+=built.failed;
        }
        tgcx_Log("Conform stack %u: %u detach transfers queued, %u gathered, %u built, %u left out, %u failed",
            target.id.id,r.detached,r.gathered,r.queued,r.missing,r.failed);
    } __except(EXCEPTION_EXECUTE_HANDLER) { tgcx_Log("Conform rejected: guarded native read fault"); }
    return r;
}

// ---------------------------------------------------------------- CUnitView capture

// Primary vtable 0x00E16850: slot 8 refresh (FUN_0079B800, called each frame
// by the secondary slot 9 while visible, ECX the view) and slot 0 the deleting
// destructor (FUN_00799290). The shown stack is view+0x28. The first newly
// shown stacks are also described in the log (read only), so the regiment
// layout and the registry walk stay checkable in game (U-9).
struct tgcx_CfView { uintptr_t view,shown;DWORD thread; };
// P47: a unit panel can die without our destructor hook (its vtable just
// changes). Its slot is freed then too, and a full table is logged.
static tgcx_CfView tgcx_cf_views[32]={};
static unsigned tgcx_cf_views_lost=0,tgcx_cf_views_released=0;static bool tgcx_cf_views_full_logged=false;
static uintptr_t tgcx_cf_refresh_original=0,tgcx_cf_destroy_original=0;
static bool tgcx_cf_enabled=false;static unsigned tgcx_cf_described=0;

static void __cdecl tgcx_CfCapture(uintptr_t view) {
    DWORD error=GetLastError();
    if(tgcx_cf_enabled && *reinterpret_cast<uintptr_t*>(view)==tgcx_base+tgcx_cf_view_vt_rva) {
        tgcx_CfView* empty=nullptr;bool known=false;
        for(auto& v:tgcx_cf_views) { if(v.view==view)known=true;if(!v.view && !empty)empty=&v; }
        if(!known && empty) { empty->view=view;empty->shown=0;empty->thread=GetCurrentThreadId(); }
        else if(!known && !tgcx_cf_views_full_logged) { tgcx_cf_views_full_logged=true;tgcx_Log("Conform: unit panel table full (%u views); a new panel has no Conform",static_cast<unsigned>(_countof(tgcx_cf_views))); }
    }
    SetLastError(error);
}
static void tgcx_CfPanelRelease(uintptr_t view);   // the Conform window (tgcx_conform_gui.h)
static void tgcx_CfPanelForget(uintptr_t view);    // the same, without touching its (dead) GUI
static void tgcx_CfPanelsTick();
static void __cdecl tgcx_CfRelease(uintptr_t view) {
    DWORD error=GetLastError();
    tgcx_CfPanelRelease(view);
    for(auto& v:tgcx_cf_views)if(v.view==view) { v={};++tgcx_cf_views_released; }
    SetLastError(error);
}
#define TGCX_CF_VIEW_THUNK(name,callback,original) \
__declspec(naked) static void name() { \
    __asm { pushfd } __asm { pushad } __asm { mov ebx,esp } \
    __asm { sub esp,528 } __asm { and esp,-16 } __asm { fxsave [esp] } \
    __asm { cld } __asm { push ecx } __asm { call callback } __asm { add esp,4 } \
    __asm { fxrstor [esp] } __asm { mov esp,ebx } __asm { popad } __asm { popfd } \
    __asm { jmp dword ptr [original] } \
}
TGCX_CF_VIEW_THUNK(tgcx_CfRefreshThunk,tgcx_CfCapture,tgcx_cf_refresh_original)
TGCX_CF_VIEW_THUNK(tgcx_CfDestroyThunk,tgcx_CfRelease,tgcx_cf_destroy_original)
#undef TGCX_CF_VIEW_THUNK

static void tgcx_CfDescribe(const tgcx_CfGlobals& g,uintptr_t stack) {
    static tgcx_TplCountry country;static tgcx_CfStack s;
    bool scanned=tgcx_TplScan(tgcx_TplLiveGlobals(),tgcx_tpl_native,&country);
    if(!tgcx_CfReadStack(stack,scanned?country.unit:nullptr,&s)) { tgcx_Log("Conform probe: stack %08X regiment list unreadable",stack);return; }
    uintptr_t back=tgcx_CfLookup(g,s.id);
    uint32_t tag=tgcx_TplRead<uint32_t>(stack+0xC0);
    tgcx_Log("Conform probe: stack id %u/%u province %d tag %.3s country %d (player %d) regiments %u (+0x40 %d) land %d registry %s",
        s.id.type,s.id.id,s.province,reinterpret_cast<const char*>(&tag),s.country,tgcx_CfPlayer(g),s.count,tgcx_TplRead<int>(stack+0x40),tgcx_cf_native.land(stack),
        back==stack+8?"round trip":"MISMATCH");
    for(unsigned i=0;i<s.count && i<12;++i) {
        uintptr_t type=s.type[i];char name[48]={};
        if(type)tgcx_ReadGameString(type+8,name,sizeof(name));
        tgcx_Log("  regiment %u/%u type %08X +0x24 %d unit %d %s registry %s",s.regiment[i].id.type,s.regiment[i].id.id,type,
            type?tgcx_TplRead<int>(type+0x24):-1,s.regiment[i].unit,s.regiment[i].unit>=0?country.name[s.regiment[i].unit]:name,
            tgcx_CfLookup(g,s.regiment[i].id)==s.entry[i]?"round trip":"MISMATCH");
    }
}
// Views whose vtable changed were destroyed by a path the slot-0 hook does not
// see: free the view and its Conform panel (whose GUI is gone with it).
static void tgcx_CfSweepViews() {
    for(auto& v:tgcx_cf_views) {
        if(!v.view)continue;
        bool alive=false;
        __try { alive=*reinterpret_cast<uintptr_t*>(v.view)==tgcx_base+tgcx_cf_view_vt_rva; } __except(EXCEPTION_EXECUTE_HANDLER) {}
        if(alive)continue;
        tgcx_CfPanelForget(v.view);
        if(++tgcx_cf_views_lost<=8)tgcx_Log("Conform: unit panel %08X gone without its destructor (%u so far, %u by destructor); slot freed",
            v.view,tgcx_cf_views_lost,tgcx_cf_views_released);
        v={};
    }
}
static void tgcx_CfTick() {
    if(!tgcx_cf_enabled)return;
    auto g=tgcx_CfLiveGlobals();
    __try { tgcx_CfDaily(g,tgcx_cf_native); } __except(EXCEPTION_EXECUTE_HANDLER) { tgcx_Log("Conform driver fault; pending orders forgotten");tgcx_CfForget("fault"); }
    tgcx_CfSweepViews();
    for(auto& v:tgcx_cf_views) {
        if(!v.view)continue;
        __try {
            uintptr_t stack=*reinterpret_cast<uintptr_t*>(v.view+0x28);
            if(stack==v.shown)continue;
            v.shown=stack;
            if(stack && tgcx_cf_described<24) { ++tgcx_cf_described;tgcx_CfDescribe(g,stack); }
        } __except(EXCEPTION_EXECUTE_HANDLER) { tgcx_Log("Conform probe: guarded read fault; view released");v={}; }
    }
    tgcx_CfPanelsTick();
}

static const uint32_t tgcx_cf_rvas[]={
    0x1B8500,0x1B8830,0xA03794,0x449E90,0x1B984F,  // read-only land route, ABI, predicate, cleanup and sea flag
    0x1DE80F,0x1DE83E,0x1DE878,0x1DE897,0x1DE8D3,0x092342,                     // Move
    0x1E13F3,0x1E143B,0x1E1450,0x1E1580,0x26EC40,0x426A1F,                     // Merge
    0x1E1F1E,0x1E1F4D,0x1E1F67,0x1E1F81,0x1E1FBC,0x3944FF,                     // Transfer
    0x17DB6E,0x17DB8D,0x17DBA5,0x17DBBE,0x17DBE7,0x39DBD7,0x39DB84,0x39DB98,   // Create and kind
    0x39DB4C,0x39DB56,0x39DB70,0x5C12D0,                                       // new id under the lock
    0xA03394,0xA033B4,0xA03514,0xA03534,0xA03554,0xA03574,0xA00D34,0xA00D54,   // command vtables
    0x5C16D6,0x5C1D47,0x5C1D65,0x39DBC5,0x39DC05,0x1DE8B2,                     // registry, stack fields
    0x17D283,0x17D334,0x17D35B,                                                // recruit ids
    0x398B3F,0xA16850,0xA16870,0xA168B0,0x398AE8,0x3993B0};                    // CUnitView
static void tgcx_InstallConform() {
    if(!tgcx_templates_installed) { tgcx_Log("Conform rejected: templates not installed");return; }
    if(!tgcx_RequireSignatures(tgcx_cf_rvas,_countof(tgcx_cf_rvas))) { tgcx_Log("Conform rejected: guards; nothing conformed");return; }
    tgcx_cf_move_fn=tgcx_base+0x1DE7D0;tgcx_cf_merge_fn=tgcx_base+0x1E13B0;tgcx_cf_transfer_fn=tgcx_base+0x1E1EE0;
    tgcx_cf_create_fn=tgcx_base+0x17DB30;tgcx_cf_lock_fn=tgcx_base+0x5C12D0;
    tgcx_cf_path_fn=tgcx_base+0x1B8500;tgcx_cf_path_clear_fn=tgcx_base+0x449E90;
    tgcx_cf_refresh_original=tgcx_base+0x39B800;tgcx_cf_destroy_original=tgcx_base+0x399290;
    auto* table=reinterpret_cast<uintptr_t*>(tgcx_base+tgcx_cf_view_vt_rva);
    if(!tgcx_ReplacePointer(table,tgcx_cf_destroy_original,reinterpret_cast<uintptr_t>(tgcx_CfDestroyThunk)))return;
    if(!tgcx_ReplacePointer(table+8,tgcx_cf_refresh_original,reinterpret_cast<uintptr_t>(tgcx_CfRefreshThunk))) {
        tgcx_ReplacePointer(table,reinterpret_cast<uintptr_t>(tgcx_CfDestroyThunk),tgcx_cf_destroy_original);return;
    }
    tgcx_cf_enabled=true;tgcx_Log("Conform hooks installed: unit panel refresh/destructor; engine commands only");
}
