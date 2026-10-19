// Directional native path ABI and land-only recruitment regressions.
#pragma once
static uintptr_t tgcx_route_start,tgcx_route_args[4];
static bool tgcx_route_success=true;
static uintptr_t tgcx_route_node[4];static unsigned tgcx_route_clears,tgcx_route_queries;
static void __stdcall tgcx_RouteRecord(uintptr_t start,uintptr_t finder,uintptr_t army,uintptr_t destination,tgcx_CfPath* path) {
    tgcx_route_start=start;tgcx_route_args[0]=finder;tgcx_route_args[1]=army;
    tgcx_route_args[2]=destination;tgcx_route_args[3]=reinterpret_cast<uintptr_t>(path);++tgcx_route_queries;
    if(tgcx_route_success){path->head=reinterpret_cast<uintptr_t>(tgcx_route_node);path->count=1;}
}
__declspec(naked) static void tgcx_RouteFakeQuery() {
    // Original four arguments remain below the helper's five arguments.
    __asm { push ebp } __asm { mov ebp,esp }
    __asm { push [ebp+20] } __asm { push [ebp+16] } __asm { push [ebp+12] } __asm { push [ebp+8] }
    __asm { push eax } __asm { call tgcx_RouteRecord }
    __asm { movzx eax,tgcx_route_success } __asm { pop ebp } __asm { ret 16 }
}
static void __fastcall tgcx_RouteFakeClear(tgcx_CfPath* path,void*) {++tgcx_route_clears;memset(path,0,sizeof(*path));}
static void tgcx_ConformRouteTests() {
    uintptr_t saved_base=tgcx_base,saved_query=tgcx_cf_path_fn,saved_clear=tgcx_cf_path_clear_fn;
    auto* image=static_cast<unsigned char*>(VirtualAlloc(nullptr,tgcx_world_rva+4096,MEM_RESERVE|MEM_COMMIT,PAGE_READWRITE));
    tgcx_Expect(image!=nullptr,"Conform route isolated globals allocation");if(!image)return;
    static unsigned char world[0xB00],army[0xE0],province[3][0x60],map[3][0x30];static uintptr_t provinces[4];
    auto ptr=[](const void* p){return reinterpret_cast<uintptr_t>(p);};
    tgcx_base=ptr(image);*reinterpret_cast<uintptr_t*>(image+tgcx_world_rva)=ptr(world);
    tgcx_CfPut<uintptr_t>(world,0xACC,ptr(provinces));
    for(unsigned i=0;i<3;++i){provinces[i+1]=ptr(province[i]);tgcx_CfPut<uintptr_t>(province[i],0x5C,ptr(map[i]));map[i][0x2A]=1;}
    tgcx_CfPut<uintptr_t>(army,0xDC,ptr(province[1]));
    tgcx_cf_path_fn=ptr(tgcx_RouteFakeQuery);tgcx_cf_path_clear_fn=ptr(tgcx_RouteFakeClear);
    tgcx_route_node[0]=2;tgcx_route_node[2]=0;tgcx_route_success=true;tgcx_route_clears=tgcx_route_queries=0;
    tgcx_Expect(tgcx_CfReachNative(ptr(army),1) && tgcx_route_start==ptr(province[0]) &&
        tgcx_route_args[1]==ptr(army) && tgcx_route_args[2]==ptr(province[1]) && tgcx_route_clears==1,
        "Conform native query uses recruit source in EAX and target destination, then native list cleanup");
    tgcx_route_success=false;
    tgcx_Expect(!tgcx_CfReachNative(ptr(army),1) && tgcx_route_clears==2,"Conform no-route result is excluded and cleaned");
    tgcx_route_success=true;map[2][0x2A]=0;tgcx_route_node[0]=3;
    tgcx_Expect(!tgcx_CfReachNative(ptr(army),1),"Conform rejects a native route containing a sea node");
    unsigned queries=tgcx_route_queries;
    tgcx_Expect(!tgcx_CfReachNative(ptr(army),3) && tgcx_route_queries==queries,"Conform rejects sea origins before querying");
    tgcx_Expect(tgcx_CfReachNative(ptr(army),2) && tgcx_route_queries==queries,"Conform same land province needs no path query");
    map[1][0x2A]=0;
    tgcx_Expect(!tgcx_CfReachNative(ptr(army),1) && tgcx_route_queries==queries,
        "Conform rejects a sea destination before querying");
    map[1][0x2A]=1;
    tgcx_base=saved_base;tgcx_cf_path_fn=saved_query;tgcx_cf_path_clear_fn=saved_clear;VirtualFree(image,0,MEM_RELEASE);

    // Two pops share one unreachable province; probe it once. A scarce
    // custom type only available overseas remains a reported shortage.
    tgcx_TplPop pops[3]={{1,0,10,2,1ull<<3},{2,0,20,30,1ull<<3},{3,0,20,30,1ull<<3}};
    pops[2].can_build.set(700);unsigned probes=0;
    auto reach=[](void* p,int id){++*static_cast<unsigned*>(p);return id==10;};
    tgcx_Expect(tgcx_TplFilterPops(pops,3,reach,&probes)==2 && probes==2,
        "Conform scopes all pops and caches unreachable province results within the snapshot");
    int want[tgcx_tpl_units]={};want[3]=4;want[700]=1;tgcx_TplPlan plan={};
    tgcx_TplMakePlan(want,pops,3,&plan);
    tgcx_Expect(plan.count==2 && plan.missing==3 && plan.orders[0].pop==0 && plan.orders[1].pop==0,
        "Conform preview places only reachable regiments including shortage for an overseas-only custom type");
    printf("Conform routes: directional ABI, land-only scope, cleanup, caching and shortage checked\n");
}
