// TPL-1 Conform window: board 6's Changes list from a plan (pure).
#pragma once
static void tgcx_ConformGuiTests() {
    // The view still holds an army after it leaves the registry on Merge.
    tgcx_CfFakeReset();
    tgcx_CfGlobals globals={};globals.high=reinterpret_cast<uintptr_t>(&tgcx_cf_f_high);
    uintptr_t army=tgcx_CfMakeStack(0,50,10,7);
    tgcx_Expect(tgcx_CfShownStack(globals,army)==army,"GUI accepts registered army");
    tgcx_CfFakeReset();
    tgcx_Expect(!tgcx_CfShownStack(globals,army),"GUI rejects removed army before ownership or virtual calls");
    void* freed=VirtualAlloc(nullptr,4096,MEM_COMMIT|MEM_RESERVE,PAGE_READWRITE);
    tgcx_Expect(freed!=nullptr,"GUI stale-stack fixture allocated");
    if(freed) {
        VirtualFree(freed,0,MEM_RELEASE);
        tgcx_Expect(!tgcx_CfShownStack(globals,reinterpret_cast<uintptr_t>(freed)),"GUI rejects freed army without disabling panel");
    }
    // Replaced roots must discard the old child without calling its vtable.
    static tgcx_CfPanel panel={};panel.root=1;panel.window=1;panel.disabled=true;panel.open=true;panel.tick=123;
    tgcx_CfRootChanged(&panel,2);
    tgcx_Expect(panel.root==2 && !panel.window && !panel.disabled && !panel.open && !panel.tick,"GUI replacement recovers without touching destroyed child");
    static tgcx_CfPlan p;static tgcx_CfRows rows;int want[tgcx_tpl_units]={},placed[tgcx_tpl_units]={};
    // 3 infantry(0) + 1 dragoon(2) + 1 hussar(3) against 4 inf, 1 artillery(4), 1 hussar.
    tgcx_CfRegiment regs[]={tgcx_CfR(1,0),tgcx_CfR(2,0),tgcx_CfR(3,2),tgcx_CfR(4,0),tgcx_CfR(5,3)};
    want[0]=4;want[4]=1;want[3]=1;
    tgcx_CfMakePlan(regs,5,want,nullptr,nullptr,0,&p);
    placed[0]=1;placed[4]=1;
    tgcx_CfRowsOf(p,placed,&rows);
    tgcx_Expect(rows.count==3 && rows.row[0].kind==TGCX_CF_ROW_BUILD && rows.row[0].unit==0 && rows.row[0].count==1 &&
        rows.row[1].unit==4 && rows.row[2].kind==TGCX_CF_ROW_DETACH && rows.row[2].unit==2,"conform rows: board order, builds then detaches");
    tgcx_Expect(rows.build==2 && rows.detach==1 && !rows.shortfall && !rows.gather && !rows.more,"conform rows: totals");
    // Nothing placeable: the builds become one shortfall row each.
    memset(placed,0,sizeof(placed));
    tgcx_CfRowsOf(p,placed,&rows);
    tgcx_Expect(rows.count==3 && rows.row[0].kind==TGCX_CF_ROW_SHORT && rows.shortfall==2 && !rows.build,"conform rows: no free soldier pops");
    tgcx_CfRowsOf(p,nullptr,&rows);
    tgcx_Expect(rows.shortfall==2,"conform rows: no placement information means nothing is buildable");
    // Partly placeable, gathered and grouped by unit.
    int w2[tgcx_tpl_units]={};w2[0]=6;
    tgcx_CfIdle idle[]={tgcx_CfI(7,0,1),tgcx_CfI(8,0,0)};
    tgcx_CfRegiment two[]={tgcx_CfR(1,0),tgcx_CfR(2,0)};
    tgcx_CfMakePlan(two,2,w2,nullptr,idle,2,&p);
    placed[0]=1;
    tgcx_CfRowsOf(p,placed,&rows);
    tgcx_Expect(rows.count==3 && rows.row[0].kind==TGCX_CF_ROW_BUILD && rows.row[0].count==1 && rows.row[1].kind==TGCX_CF_ROW_SHORT &&
        rows.row[1].count==1 && rows.row[2].kind==TGCX_CF_ROW_GATHER && rows.row[2].count==2,"conform rows: build, shortfall and gather grouped");
    // More kinds than rows: the rest counted.
    tgcx_CfRegiment many[12];int w3[tgcx_tpl_units]={};w3[0]=1;
    many[0]=tgcx_CfR(1,0);for(unsigned i=1;i<12;++i)many[i]=tgcx_CfR(100+i,static_cast<int>(i));
    tgcx_CfMakePlan(many,12,w3,nullptr,nullptr,0,&p);
    tgcx_CfRowsOf(p,nullptr,&rows);
    tgcx_Expect(rows.count==tgcx_cf_changes && rows.more==11-tgcx_cf_changes && rows.detach==11,"conform rows: overflow counted, totals complete");
    printf("Conform window: Changes rows checked\n");
    // P47: unit panels that die without the destructor hook free their slots,
    // so a long game never runs out (0.6.4 stopped after eight).
    bool enabled_was=tgcx_cf_enabled;tgcx_cf_enabled=true;
    for(auto& v:tgcx_cf_views)v={};for(auto& q:tgcx_cf_panels) { tgcx_CfReset(&q);q.view=0; }
    static uintptr_t views[40][16];bool every=true;
    for(unsigned i=0;i<40;++i) {
        views[i][0]=tgcx_base+tgcx_cf_view_vt_rva;
        tgcx_CfCapture(reinterpret_cast<uintptr_t>(views[i]));
        tgcx_CfPanel* slot=nullptr;
        for(const auto& v:tgcx_cf_views)if(v.view==reinterpret_cast<uintptr_t>(views[i]))slot=tgcx_CfPanelFor(v);
        every=every && slot!=nullptr && slot->view==reinterpret_cast<uintptr_t>(views[i]);
        views[i][0]=0;tgcx_CfSweepViews();                      // destroyed by another path
    }
    tgcx_Expect(every,"Conform: 40 unit panels destroyed outside the hook each get a view and a panel slot");
    unsigned left=0;for(const auto& q:tgcx_cf_panels)left+=q.view?1u:0u;for(const auto& v:tgcx_cf_views)left+=v.view?1u:0u;
    tgcx_Expect(left==0,"Conform: no slot left behind by dead unit panels");
    tgcx_cf_enabled=enabled_was;
}
