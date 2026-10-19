// Isolated Bill view-model/string tests; no game process or state mutation.
#pragma once
struct tgcx_BillTestValue { const char* name; int value; };
static tgcx_BillTestValue tgcx_bill_test_values[]={
    {"tgcx_house_total",100000},{"tgcx_gui_schema",1000},{"tgcx_gui_active",1000},{"tgcx_gui_bill_id",1000},
    {"tgcx_yes",10000},{"tgcx_no",85000},{"tgcx_margin",-75000},{"tgcx_quorum",95000},
    {"tgcx_favours",1000},{"tgcx_rate",3000},{"tgcx_spent",2000},{"tgcx_favours_ticks",4000},
    {"tgcx_gui_ruling",0},{"tgcx_gui_government",3000},{"tgcx_gui_crown_veto",1000},{"tgcx_gui_crown_signs",0},
    {"tgcx_gui_rate_prestige",1000},{"tgcx_gui_rate_order",1000},
    {"tgcx_seats_conservative",85000},{"tgcx_seats_liberal",10000},{"tgcx_seats_reactionary",5000},
    {"tgcx_base_yes_liberal",10000},{"tgcx_left_conservative",80000},{"tgcx_left_reactionary",5000},
    {"tgcx_opposed_conservative",85000},{"tgcx_opposed_reactionary",5000},
    {"tgcx_buy_conservative_total",5000},{"tgcx_gui_stance_conservative",-1000},{"tgcx_gui_stance_reactionary",-2000},
    {"tgcx_gui_stance_liberal",2000},{"tgcx_buy_reactionary_total",0},
    {"tgcx_buy_conservative_yes",0},{"tgcx_gui_promised_conservative",0}
};
static int tgcx_BillTestRead(uintptr_t country,const char* key,bool* ok) {
    if(!country){*ok=false;return 0;}
    for(const auto& item:tgcx_bill_test_values)if(strcmp(item.name,key)==0)return item.value;
    return 0;
}
static void tgcx_BillTestSet(const char* key,int value) {
    for(auto& item:tgcx_bill_test_values)if(strcmp(item.name,key)==0){item.value=value;return;}
    tgcx_Expect(false,"Bill test key exists");
}
static unsigned tgcx_BillTestIdeology(const char* name) {
    unsigned i=0;for(;i<tgcx_ideology_count;++i)if(strcmp(tgcx_ideology_candidates[i],name)==0)break;
    tgcx_Expect(i<tgcx_ideology_count,"Bill test ideology exists");return i;
}
static uint32_t tgcx_bill_test_dispatch_count=0;
static char tgcx_bill_test_dispatched[96]={};
static void __stdcall tgcx_BillTestDecision(void* element) {
    auto* name=reinterpret_cast<tgcx_GameString*>(static_cast<unsigned char*>(element)+0x14);
    const char* text=name->capacity>15?*reinterpret_cast<const char**>(name->data):name->data;
    strcpy_s(tgcx_bill_test_dispatched,text);++tgcx_bill_test_dispatch_count;
}
static void tgcx_BillViewTests() {
    auto reader=tgcx_bill_reader;tgcx_bill_reader=tgcx_BillTestRead;
    unsigned cons=tgcx_BillTestIdeology("conservative"),reac=tgcx_BillTestIdeology("reactionary"),lib=tgcx_BillTestIdeology("liberal");
    tgcx_BillTestSet("tgcx_favours",30000);
    tgcx_BillModel m={};tgcx_Expect(tgcx_BillReadModel(1,&m),"board-like model is valid");
    tgcx_Expect(m.government==3 && m.crown_veto && !m.crown_signs && m.ticks==4 && m.rate_part[0]==1 && m.rate_part[2]==1,
        "Crown, government and favour-rate breakdown are read from GUI metadata");
    tgcx_BillTimers t={};t.known=true;tgcx_BillView v={};
    tgcx_BillBuildView(m,t,2,0,25,&v);
    tgcx_Expect(v.slots==3 && v.pages==1 && v.slot[0]==lib && v.slot[1]==cons && v.slot[2]==reac,"default order matches the board: friendliest first");
    tgcx_Expect(!v.card[0].a.visible && !v.card[0].b.visible && v.card[0].note && strstr(v.card[0].note,"nothing to buy"),"a bloc already voting Aye offers nothing to buy");
    const auto& c=v.card[1];
    tgcx_Expect(c.a.visible && c.a.enabled && c.a.price==10 && strcmp(c.a.decision,"tgcx_buy_abstain_conservative_m1_25")==0,"against: Abstain 25 costs 10 and names the 25-seat decision");
    tgcx_Expect(c.b.visible && c.b.enabled && c.b.price==25 && strcmp(c.b.decision,"tgcx_buy_vote_conservative_m1_25")==0,"against: Aye 25 costs 25");
    tgcx_Expect(v.card[2].a.price==25 && strcmp(v.card[2].b.decision,"tgcx_promise_reactionary")==0 && v.card[2].b.enabled,"strongly against: Abstain 25 costs 25; Aye is a promise");
    tgcx_Expect(!v.card[2].a.enabled,"25 seats cannot be bought from a 5-seat bloc");
    tgcx_BillBuildView(m,t,2,0,5,&v);
    tgcx_Expect(v.card[2].a.enabled && v.card[2].a.price==5 && strcmp(v.card[2].a.decision,"tgcx_buy_abstain_reactionary_m2")==0,"5-seat lot uses the unsuffixed decision");
    t.broken[cons]=1;tgcx_BillBuildView(m,t,2,0,25,&v);
    tgcx_Expect(v.card[1].a.price==20 && strcmp(v.card[1].a.decision,"tgcx_buy_abstain_conservative_m1_25_x2")==0,"a broken promise doubles prices and uses the twin decision");
    t.broken[cons]=0;t.debt[reac]=1;tgcx_BillBuildView(m,t,2,0,25,&v);
    tgcx_Expect(v.card[2].b.visible && !v.card[2].b.enabled,"an outstanding debt blocks a second promise");
    t.debt[reac]=0;tgcx_BillTestSet("tgcx_favours",9000);tgcx_BillReadModel(1,&m);tgcx_BillBuildView(m,t,2,0,25,&v);
    tgcx_Expect(!v.card[1].a.enabled && !v.card[1].b.enabled && !v.audience.enabled,"unaffordable purchases and audience are disabled");
    tgcx_BillTestSet("tgcx_favours",30000);tgcx_BillTestSet("tgcx_left_reactionary",0);
    tgcx_BillTestSet("tgcx_no",80000);tgcx_BillTestSet("tgcx_margin",-70000);tgcx_BillTestSet("tgcx_quorum",90000);
    tgcx_BillTestSet("tgcx_buy_reactionary_total",5000);
    tgcx_Expect(tgcx_BillReadModel(1,&m),"bought reactionary abstention model is valid");tgcx_BillBuildView(m,t,2,0,25,&v);
    tgcx_Expect(!v.card[2].a.visible && v.card[2].b.visible && v.card[2].b.enabled,"a promise still converts bought abstentions when no Nay is left");
    tgcx_BillTestSet("tgcx_buy_reactionary_total",0);tgcx_BillTestSet("tgcx_left_reactionary",5000);
    tgcx_BillTestSet("tgcx_no",85000);tgcx_BillTestSet("tgcx_margin",-75000);tgcx_BillTestSet("tgcx_quorum",95000);
    t.debate=900000;tgcx_BillReadModel(1,&m);tgcx_BillBuildView(m,t,2,0,25,&v);
    tgcx_Expect(!v.vote.enabled && v.audience.enabled && v.count.enabled && v.withdraw.enabled,"the vote waits for the debate; Count, Withdraw and Audience do not");
    t.known=false;tgcx_BillBuildView(m,t,2,0,25,&v);
    tgcx_Expect(v.vote.enabled,"unknown timers leave the decision to the script");
    t={};t.known=true;tgcx_BillBuildView(m,t,0,0,25,&v);
    tgcx_Expect(v.slot[0]==cons && v.slot[1]==lib && v.slot[2]==reac,"Bloc header sorts by seats");
    tgcx_BillTestSet("tgcx_gui_bill_id",0);tgcx_BillReadModel(1,&m);tgcx_BillBuildView(m,t,2,0,25,&v);
    tgcx_Expect(!v.card[1].a.visible && !v.card[1].b.visible && !v.audience.enabled,"an unidentified saved bill offers no purchases");
    tgcx_BillTestSet("tgcx_gui_bill_id",1000);
    tgcx_BillTestSet("tgcx_gui_rate_order",9000);tgcx_Expect(!tgcx_BillReadModel(1,&m),"out-of-range rate part rejected");
    tgcx_BillTestSet("tgcx_gui_rate_order",1000);
    tgcx_BillTestSet("tgcx_gui_government",99000);tgcx_Expect(!tgcx_BillReadModel(1,&m),"unknown government index rejected");
    tgcx_BillTestSet("tgcx_gui_government",3000);
    tgcx_BillTestSet("tgcx_favours",1000);
    // Log: purchases and promises stamped with the game date.
    tgcx_BillModel a={},b={};tgcx_BillReadModel(1,&a);b=a;
    b.bloc[cons].bought+=25;b.spent+=10;b.bloc[reac].promised=true;
    tgcx_BillTimers lt={};lt.known=true;lt.debt[reac]=(5000+1841)*8760;
    tgcx_bill_log_count=0;tgcx_BillObserve(a,b,lt,(5000+1836)*8760+13*24);
    tgcx_Expect(tgcx_bill_log_count==2 && strcmp(tgcx_bill_log[0],"14 Jan 1836: 25 Conservative seats will abstain (10 favours).")==0,"purchase logged as on the board");
    tgcx_Expect(strstr(tgcx_bill_log[1],"Reactionaries promised a law of their choice before Jan 1841.")!=nullptr,"promise logged with its deadline");
    for(int n=0;n<5;++n)tgcx_BillLogLine(0,"x");
    tgcx_Expect(tgcx_bill_log_count==4,"log keeps the newest four lines");tgcx_bill_log_count=0;
    char date[32];tgcx_BillDate((5000+1835)*8760+347*24,date,sizeof(date));
    tgcx_Expect(strcmp(date,"14 Dec 1835")==0,"engine calendar date format");
    // Generic dispatch: only our decision names reach the native handler.
    uintptr_t fn=tgcx_bill_decision_fn;tgcx_bill_decision_fn=reinterpret_cast<uintptr_t>(&tgcx_BillTestDecision);
    tgcx_bill_test_dispatch_count=0;
    tgcx_Expect(tgcx_BillDispatch("tgcx_buy_abstain_conservative_m1_25") && strcmp(tgcx_bill_test_dispatched,"POLITICSVIEW_DECISIONtgcx_buy_abstain_conservative_m1_25")==0,"guarded dispatch uses the native decision prefix");
    tgcx_Expect(!tgcx_BillDispatch("other_decision") && !tgcx_BillDispatch("tgcx_Bad name") && tgcx_bill_test_dispatch_count==1,"foreign or malformed decision names are refused");
    tgcx_BillAction disabled={"tgcx_withdraw",0,true,false};
    tgcx_Expect(!tgcx_BillSend(disabled,"TST") && tgcx_bill_test_dispatch_count==1,"a disabled button sends nothing");
    // Automatic favours: only while time advances, once per absence.
    tgcx_Snapshot s={};s.country=7;s.date_hours=1000;tgcx_BillTimers ft={};ft.known=true;
    tgcx_favour_country=0;
    tgcx_Expect(!tgcx_FavourStep(s,ft),"a new country is observed before any request");
    tgcx_Expect(!tgcx_FavourStep(s,ft),"a paused date sends nothing");
    s.date_hours+=24;tgcx_Expect(tgcx_FavourStep(s,ft),"a missing monthly tick is collected when the day advances");
    s.date_hours+=24;tgcx_Expect(!tgcx_FavourStep(s,ft),"a pending request is not repeated the next day");
    s.date_hours+=24;tgcx_Expect(tgcx_FavourStep(s,ft),"an unanswered request is retried after two days");
    ft.tick=1;s.date_hours+=24;tgcx_Expect(!tgcx_FavourStep(s,ft) && !tgcx_favour_pending,"the tick modifier clears the request");
    ft.known=false;ft.tick=0;s.date_hours+=24;tgcx_Expect(!tgcx_FavourStep(s,ft),"unreadable timers send nothing");
    s.country=9;s.date_hours+=24;ft.known=true;tgcx_Expect(!tgcx_FavourStep(s,ft) && !tgcx_favour_pending,"a country change resets the request");
    tgcx_favour_country=0;tgcx_bill_decision_fn=fn;tgcx_bill_reader=reader;
    // The DDS loader refuses anything but our uncompressed format before any device call.
    unsigned char bad[128]={'D','D','S',' '};tgcx_BillTexture texture={};
    tgcx_Expect(!tgcx_BillTextureFromDds(nullptr,bad,sizeof(bad),&texture) && !texture.texture,"malformed DDS refused before any device call");
    printf("Bill controls: board order, prices/lots/twins, promises, timers, log, guarded dispatch and favour pacing checked\n");
}
static void tgcx_BillTests() {
    auto reader=tgcx_bill_reader;tgcx_bill_reader=tgcx_BillTestRead;
    tgcx_BillModel model={};
    tgcx_Expect(tgcx_BillReadModel(1,&model),"saved 10 Aye / 5 abstain / 85 Nay model is valid");
    unsigned cons=tgcx_BillTestIdeology("conservative");
    tgcx_Expect(model.bloc[cons].yes==0 && model.bloc[cons].abstain==5 && model.bloc[cons].no==80,"bloc purchases are separated from native Aye");
    tgcx_BillTestSet("tgcx_gui_promised_conservative",1000);
    tgcx_BillTestSet("tgcx_left_conservative",0);
    tgcx_BillTestSet("tgcx_yes",95000);tgcx_BillTestSet("tgcx_no",5000);
    tgcx_BillTestSet("tgcx_margin",90000);tgcx_BillTestSet("tgcx_quorum",100000);
    tgcx_Expect(tgcx_BillReadModel(1,&model) && model.bloc[cons].yes==85 && model.bloc[cons].abstain==0,"promise converts old abstentions exactly once in display");
    tgcx_BillTestSet("tgcx_gui_promised_conservative",0);
    tgcx_BillTestSet("tgcx_buy_conservative_total",100000);tgcx_BillTestSet("tgcx_buy_conservative_yes",100000);
    tgcx_Expect(tgcx_BillReadModel(1,&model) && model.bloc[cons].yes==85,"sunk purchased seats clip to remaining opposition");
    tgcx_BillTestSet("tgcx_favours",1500);tgcx_Expect(!tgcx_BillReadModel(1,&model),"fractional corrupted counter rejected");
    tgcx_BillTestSet("tgcx_favours",1000);
    tgcx_BillTestSet("tgcx_quorum",95000);tgcx_Expect(!tgcx_BillReadModel(1,&model),"inconsistent quorum rejected");tgcx_BillTestSet("tgcx_quorum",100000);
    tgcx_BillTestSet("tgcx_gui_bill_id",145000);tgcx_Expect(!tgcx_BillReadModel(1,&model),"unknown catalogue ID rejected");tgcx_BillTestSet("tgcx_gui_bill_id",0);
    tgcx_BillTestSet("tgcx_gui_schema",0);tgcx_BillTestSet("tgcx_gui_active",0);
    tgcx_Expect(tgcx_BillReadModel(1,&model) && model.id==0,"pre-GUI active save can show totals before Count migration");
    tgcx_BillTestSet("tgcx_gui_schema",1000);
    tgcx_Expect(!tgcx_BillReadModel(1,&model),"count recovery after withdrawal cannot create a phantom active Bill");
    tgcx_Expect(!tgcx_BillReadModel(0,&model),"no country refuses Bill model");
    // Restore the board fixture for the controls tests.
    tgcx_BillTestSet("tgcx_gui_active",1000);tgcx_BillTestSet("tgcx_gui_bill_id",1000);
    tgcx_BillTestSet("tgcx_left_conservative",80000);tgcx_BillTestSet("tgcx_yes",10000);tgcx_BillTestSet("tgcx_no",85000);
    tgcx_BillTestSet("tgcx_margin",-75000);tgcx_BillTestSet("tgcx_quorum",95000);
    tgcx_BillTestSet("tgcx_buy_conservative_total",5000);tgcx_BillTestSet("tgcx_buy_conservative_yes",0);
    tgcx_bill_reader=reader;
    auto small_string=tgcx_BorrowString("tgcx_test");
    tgcx_Expect(small_string.capacity==15 && small_string.length==9 && strcmp(small_string.data,"tgcx_test")==0,"native small-string ABI includes terminator");
    const char* text="POLITICSVIEW_DECISIONtgcx_count_votes";auto long_string=tgcx_BorrowString(text);
    tgcx_Expect(long_string.length==strlen(text) && long_string.capacity>15 && *reinterpret_cast<const char**>(long_string.data)==text,"native long-string ABI borrows stable caller storage");
    // Disabled callback must not mutate GUI or invoke an engine command.
    tgcx_bill_enabled=false;tgcx_bill_window=0;
    for(auto thunk:tgcx_bill_thunks)thunk();
    tgcx_Expect(!tgcx_bill_open,"disabled native callbacks preserve fallback");
    printf("Bill: live-view model, promises, clipped purchases, invalid counters and borrowed strings checked\n");
    tgcx_BillViewTests();
}

static int tgcx_bill_test_width=2560,tgcx_bill_test_height=1440;
static char __fastcall tgcx_LandFlagNavalKind(uintptr_t,void*) {return 1;}
static char __fastcall tgcx_LandFlagCanEnter(uintptr_t,void*,uintptr_t) {return 1;}
static void __fastcall tgcx_BillTestPosition(uintptr_t inner,void*,const int* xy) {
    *reinterpret_cast<float*>(inner+0xFC)=static_cast<float>(xy[0]);
    *reinterpret_cast<float*>(inner+0x100)=static_cast<float>(xy[1]);
    // Match the live native matrix convention, including the screen-centre
    // conversion omitted by the earlier fixture (0.3.2 screenshot).
    *reinterpret_cast<float*>(inner+0x84)=static_cast<float>(xy[0]-tgcx_bill_test_width/2);
    *reinterpret_cast<float*>(inner+0x88)=static_cast<float>(tgcx_bill_test_height/2-xy[1]);
}
// Execute the reference engine's foreground/unlink/position/show/hide code on
// synthetic GUI objects. The executable is mapped as data, never launched.
static void tgcx_BillWindowTests(const wchar_t* reference) {
    HANDLE file=CreateFileW(reference,GENERIC_READ,FILE_SHARE_READ,nullptr,OPEN_EXISTING,0,nullptr);
    HANDLE mapping=file==INVALID_HANDLE_VALUE?nullptr:CreateFileMappingW(file,nullptr,PAGE_READONLY,0,0,nullptr);
    auto* data=mapping?static_cast<unsigned char*>(MapViewOfFile(mapping,FILE_MAP_READ,0,0,0)):nullptr;
    auto* memory=static_cast<unsigned char*>(VirtualAlloc(nullptr,tgcx_image_size,MEM_RESERVE|MEM_COMMIT,PAGE_EXECUTE_READWRITE));
    auto* renderer=static_cast<unsigned char*>(VirtualAlloc(nullptr,0x6BD00,MEM_RESERVE|MEM_COMMIT,PAGE_READWRITE));
    tgcx_Expect(data && memory && renderer,"Bill native-window fixture allocation");
    if(data && memory && renderer) {
        const auto* dos=reinterpret_cast<const IMAGE_DOS_HEADER*>(data);
        const auto* nt=reinterpret_cast<const IMAGE_NT_HEADERS32*>(data+dos->e_lfanew);
        const auto* sections=IMAGE_FIRST_SECTION(nt);
        const unsigned rvas[]={0x5E2FC0,0x5F8FD0,0x5F9050,0x5E3BA0,0x5E4450,0x5E4030,0x5E4490,0x5EFEF0,0x5F9200,0x1B9810};
        for(unsigned rva:rvas) {
            unsigned bytes=rva==0x5E4490?0x400:rva==0x1B9810?0xC4:0x90;
            bool found=false;
            for(unsigned s=0;s<nt->FileHeader.NumberOfSections;++s) {
                const auto& section=sections[s];
                if(rva>=section.VirtualAddress && rva+bytes<=section.VirtualAddress+section.SizeOfRawData) {
                    memcpy(memory+rva,data+section.PointerToRawData+rva-section.VirtualAddress,bytes);found=true;break;
                }
            }
            tgcx_Expect(found,"Bill fixture engine function exists in reference section");
        }
        uintptr_t saved_base=tgcx_base,saved_window=tgcx_bill_window;
        tgcx_base=reinterpret_cast<uintptr_t>(memory);
        unsigned char window[0x500]={},inner[0x180]={},parent[0x180]={};
        auto put=[](unsigned char* p,unsigned off,uintptr_t value){*reinterpret_cast<uintptr_t*>(p+off)=value;};
        auto get=[](unsigned char* p,unsigned off){return *reinterpret_cast<uintptr_t*>(p+off);};
        // Independent polarity proof: execute the native naval edge policy,
        // with diplomacy and the final unit predicate stubbed permissive.
        // Its port relationships identify 1 as land and 0 as water, rather
        // than a fixture simply repeating our recruitment implementation.
        memory[0x1B9690]=0x33;memory[0x1B9691]=0xC0;memory[0x1B9692]=0xC3;
        uintptr_t naval_table[34]={};naval_table[15]=reinterpret_cast<uintptr_t>(tgcx_LandFlagNavalKind);
        naval_table[33]=reinterpret_cast<uintptr_t>(tgcx_LandFlagCanEnter);
        uintptr_t naval=reinterpret_cast<uintptr_t>(naval_table);
        unsigned char endpoints[2][0x60]={},maps[2][0xE0]={};unsigned edge[4]={};
        for(unsigned i=0;i<2;++i) {put(endpoints[i],0x58,i+1);put(endpoints[i],0x5C,reinterpret_cast<uintptr_t>(maps[i]));}
        typedef char(__stdcall* Edge)(uintptr_t,int,uintptr_t,uintptr_t,const unsigned*);
        auto edge_ok=[&](){return reinterpret_cast<Edge>(memory+0x1B9810)(reinterpret_cast<uintptr_t>(&naval),0,
            reinterpret_cast<uintptr_t>(endpoints[0]),reinterpret_cast<uintptr_t>(endpoints[1]),edge)!=0;};
        FlushInstructionCache(GetCurrentProcess(),memory,tgcx_image_size);
        tgcx_Expect(edge_ok(),"Native naval policy accepts two zero-flag water provinces");
        maps[0][0x2A]=maps[1][0x2A]=1;
        tgcx_Expect(!edge_ok(),"Native naval policy rejects two nonzero-flag land provinces");
        maps[1][0x2A]=0;
        tgcx_Expect(!edge_ok(),"Native naval policy refuses an unlinked land-to-water port edge");
        put(maps[0],0xDC,2);
        tgcx_Expect(edge_ok(),"Native naval policy permits departure through nonzero land province's linked water port");
        maps[0][0x2A]=0;maps[1][0x2A]=1;put(maps[1],0xDC,1);
        tgcx_Expect(edge_ok(),"Native naval policy permits arrival through nonzero land province's linked water port");
        tgcx_bill_window=reinterpret_cast<uintptr_t>(window);
        auto* table=reinterpret_cast<uintptr_t*>(memory+0xA3C0D8);
        table[6]=tgcx_base+0x5E3BA0;table[8]=tgcx_base+0x5E4450;table[9]=tgcx_base+0x5E4030;table[11]=tgcx_base+0x5E2FC0;
        put(window,0,reinterpret_cast<uintptr_t>(table));put(window,0x90,reinterpret_cast<uintptr_t>(renderer));
        put(window,0x494,reinterpret_cast<uintptr_t>(inner));
        auto* inner_table=reinterpret_cast<uintptr_t*>(memory+0xA38350);
        inner_table[29]=tgcx_base+0x5F9050;inner_table[32]=tgcx_base+0x5F8FD0;inner_table[51]=reinterpret_cast<uintptr_t>(&tgcx_BillTestPosition);
        put(inner,0,reinterpret_cast<uintptr_t>(inner_table));
        put(inner,0xE4,reinterpret_cast<uintptr_t>(parent));
        put(parent,0xDC,reinterpret_cast<uintptr_t>(inner));put(parent,0xE0,reinterpret_cast<uintptr_t>(inner));
        auto* scene=renderer+0x6B9E0;
        put(scene,0xDC,reinterpret_cast<uintptr_t>(parent));put(scene,0xE0,reinterpret_cast<uintptr_t>(parent));
        put(parent,0xE4,reinterpret_cast<uintptr_t>(scene));
        put(renderer,0x6B9BC,2560);put(renderer,0x6B9C0,1440);
        // Root-only Show (0.10.2) is not subtree activation. Execute both
        // actual native Show implementations with an initially hidden child.
        unsigned char native_button[0xC0]={},button_inner[0x180]={};
        uintptr_t button_vector[1]={reinterpret_cast<uintptr_t>(native_button)};
        auto* secondary=reinterpret_cast<uintptr_t*>(memory+0xA3C1A8);
        secondary[13]=tgcx_base+0x5E4490;put(window,0x18,reinterpret_cast<uintptr_t>(secondary));
        auto* button_table=reinterpret_cast<uintptr_t*>(memory+0xA08BEC);
        button_table[13]=tgcx_base+0x5EFEF0;put(native_button,0,reinterpret_cast<uintptr_t>(button_table));
        auto* button_inner_table=reinterpret_cast<uintptr_t*>(memory+0x1800);
        button_inner_table[13]=tgcx_base+0x5F9200;
        put(button_inner,0,reinterpret_cast<uintptr_t>(button_inner_table));
        put(native_button,0xA0,reinterpret_cast<uintptr_t>(button_inner));
        put(window,0x26C,reinterpret_cast<uintptr_t>(button_vector));
        put(window,0x270,reinterpret_cast<uintptr_t>(button_vector+1));put(window,0x4A8,0xFFFFFFFFu);
        reinterpret_cast<tgcx_GuiZero>(table[8])(reinterpret_cast<uintptr_t>(window),nullptr);
        tgcx_Expect(window[0x67] && !native_button[0x4F] && !button_inner[0x29],
            "Universal 0.10.2 root-only Show leaves its hidden button inactive");
        bool universal_was=tgcx_army_universal;tgcx_army_universal=true;window[0x67]=0;
        tgcx_TplVisible(reinterpret_cast<uintptr_t>(window),true);
        tgcx_Expect(window[0x67] && native_button[0x4F] && button_inner[0x29] && inner[0x124],
            "Universal subtree Show executes native child activation and exposes root and button renderers");
        native_button[0x4F]=0;button_inner[0x29]=0;
        tgcx_TplVisible(reinterpret_cast<uintptr_t>(window),true);
        tgcx_Expect(!native_button[0x4F] && !button_inner[0x29],
            "Universal visible polling does not reset intentionally hidden child state");
        window[0x67]=0;tgcx_TplVisible(reinterpret_cast<uintptr_t>(window),true);
        tgcx_Expect(native_button[0x4F] && button_inner[0x29],"Universal reopen activates children again");
        tgcx_army_universal=universal_was;put(window,0x26C,0);put(window,0x270,0);
        window[0x67]=0;inner[0x124]=0;
        // Universal entries are separate roots. Reproduce a hidden entry
        // behind the native host: position/show alone never changes order.
        put(parent,0xDC,0);put(parent,0xE0,0);put(parent,0xD4,reinterpret_cast<uintptr_t>(inner));
        put(parent,0xD8,0);put(inner,0xE4,reinterpret_cast<uintptr_t>(scene));
        put(inner,0xD4,0);put(inner,0xD8,reinterpret_cast<uintptr_t>(parent));
        put(scene,0xDC,reinterpret_cast<uintptr_t>(inner));put(scene,0xE0,reinterpret_cast<uintptr_t>(parent));
        tgcx_Expect(tgcx_UnivEntry(reinterpret_cast<uintptr_t>(parent),tgcx_bill_window,222,188),
            "Universal hidden entry uses verified native position/foreground methods");
        tgcx_Expect(get(scene,0xE0)==reinterpret_cast<uintptr_t>(inner) &&
            get(parent,0xD8)==reinterpret_cast<uintptr_t>(inner),
            "Universal first-show entry is appended after the opaque native host");
        tgcx_TplVisible(tgcx_bill_window,true);
        unsigned char entry_dialog[0x180]={};put(entry_dialog,0xE4,reinterpret_cast<uintptr_t>(scene));
        put(entry_dialog,0xD4,reinterpret_cast<uintptr_t>(inner));put(inner,0xD8,reinterpret_cast<uintptr_t>(entry_dialog));
        put(scene,0xE0,reinterpret_cast<uintptr_t>(entry_dialog));
        tgcx_Expect(tgcx_UnivEntry(reinterpret_cast<uintptr_t>(parent),tgcx_bill_window,223,188) &&
            get(scene,0xE0)==reinterpret_cast<uintptr_t>(entry_dialog),
            "Universal visible entry updates position without repeatedly covering a later entry_dialog");
        tgcx_TplVisible(tgcx_bill_window,false);
        tgcx_Expect(tgcx_UnivEntry(reinterpret_cast<uintptr_t>(parent),tgcx_bill_window,224,188) &&
            get(scene,0xE0)==reinterpret_cast<uintptr_t>(inner),
            "Universal reopening a hidden entry restores its foreground order");
        // Restore the original nested Bill fixture.
        window[0x67]=0;inner[0x124]=0;
        put(scene,0xDC,reinterpret_cast<uintptr_t>(parent));put(scene,0xE0,reinterpret_cast<uintptr_t>(parent));
        put(parent,0xDC,reinterpret_cast<uintptr_t>(inner));put(parent,0xE0,reinterpret_cast<uintptr_t>(inner));
        put(parent,0xD4,0);put(parent,0xD8,0);put(inner,0xD4,0);put(inner,0xD8,0);
        put(inner,0xE4,reinterpret_cast<uintptr_t>(parent));
        tgcx_BillVisibility(true);
        tgcx_Expect(!get(parent,0xDC) && !get(parent,0xE0),"Bill detaches from Politics render subtree");
        tgcx_Expect(get(scene,0xE0)==reinterpret_cast<uintptr_t>(inner) && get(parent,0xD8)==reinterpret_cast<uintptr_t>(inner) &&
            get(inner,0xE4)==reinterpret_cast<uintptr_t>(scene),"Bill appends after Politics, matching native draw order");
        tgcx_GuiRect screen={768,470,2560,1440},rect={};
        tgcx_Expect(window[0x67] && tgcx_BillScreenRect(screen,&rect) && rect.left==830 && rect.top==334,
            "Bill and chart share native screen position at screenshot resolution");
        uint32_t stored=get(window,0x250);
        tgcx_Expect(static_cast<int16_t>(stored)==830 && static_cast<int16_t>(stored>>16)==334,
            "persistent Bill position agrees with render translation after native refresh");
        // A later dialog belongs above the Bill. A regular visibility tick
        // must preserve that exact ordering rather than raise again.
        unsigned char dialog[0x180]={};
        put(inner,0xD8,reinterpret_cast<uintptr_t>(dialog));put(dialog,0xD4,reinterpret_cast<uintptr_t>(inner));
        put(dialog,0xE4,reinterpret_cast<uintptr_t>(scene));
        put(scene,0xE0,reinterpret_cast<uintptr_t>(dialog));
        tgcx_BillVisibility(true);
        tgcx_Expect(get(scene,0xE0)==reinterpret_cast<uintptr_t>(dialog) && get(inner,0xD8)==reinterpret_cast<uintptr_t>(dialog),
            "visible Bill ticks leave newer native dialogs above it");
        typedef void(__fastcall* PackedPosition)(uintptr_t,void*,uint32_t);
        reinterpret_cast<PackedPosition>(table[6])(tgcx_bill_window,nullptr,900u|(400u<<16));
        tgcx_Expect(tgcx_BillScreenRect(screen,&rect) && rect.left==900 && rect.top==400,"chart follows actual native translation instead of independent centering");
        *reinterpret_cast<float*>(inner+0x84)=-1;
        tgcx_Expect(!tgcx_BillScreenRect(screen,&rect),"offscreen Bill transform refuses chart draw");
        tgcx_BillVisibility(false);tgcx_Expect(!window[0x67] && !inner[0x124],"Bill hides its detached render subtree");
        tgcx_BillVisibility(true);
        tgcx_Expect(get(scene,0xE0)==reinterpret_cast<uintptr_t>(inner) && get(dialog,0xD8)==reinterpret_cast<uintptr_t>(inner),
            "explicit reopen raises Bill through the native scene path");
        for(const auto& size:{POINT{900,772},POINT{1920,1080},POINT{2560,1440}}) {
            put(renderer,0x6B9BC,size.x);put(renderer,0x6B9C0,size.y);
            tgcx_bill_test_width=size.x;tgcx_bill_test_height=size.y;
            tgcx_Expect(tgcx_BillForeground(),"Bill absolute placement supports tested screen sizes");
            uint32_t xy=get(window,0x250);
            tgcx_Expect(static_cast<int16_t>(xy)==(size.x-tgcx_bill_width)/2 && static_cast<int16_t>(xy>>16)==(size.y-tgcx_bill_height)/2,
                "Bill stores fully onscreen absolute position across resolutions");
            tgcx_GuiRect resized={0,0,size.x,size.y};
            tgcx_Expect(tgcx_BillScreenRect(resized,&rect) && rect.left==(size.x-tgcx_bill_width)/2 && rect.top==(size.y-tgcx_bill_height)/2,
                "centred native render coordinates convert to onscreen chart pixels");
        }
        // The board is 900 x 772: a smaller screen keeps the Decisions fallback.
        // TPL-0 reuses those exact native window functions. Its screen anchor
        // is the build view matrix, not the parent's stored centred inputs.
        unsigned char tpl_root[0x500]={},tpl_root_inner[0x180]={};
        put(tpl_root,0x494,reinterpret_cast<uintptr_t>(tpl_root_inner));put(tpl_root,0x90,reinterpret_cast<uintptr_t>(renderer));
        put(tpl_root_inner,0,tgcx_base+0xA38350);put(tpl_root_inner,0xE4,reinterpret_cast<uintptr_t>(scene));
        *reinterpret_cast<float*>(tpl_root_inner+0x84)=400;*reinterpret_cast<float*>(tpl_root_inner+0x88)=-200;
        tgcx_TplPanel tpl={};tpl.root=reinterpret_cast<uintptr_t>(tpl_root);tpl.window=tgcx_bill_window;
        put(renderer,0x6B9BC,1920);put(renderer,0x6B9C0,1080);tgcx_bill_test_width=1920;tgcx_bill_test_height=1080;
        tgcx_Expect(tgcx_TplPlace(&tpl,true),"Templates promoted through reference engine scene method");
        uint32_t tpl_xy=get(window,0x250);
        tgcx_Expect(static_cast<int16_t>(tpl_xy)==405 && static_cast<int16_t>(tpl_xy>>16)==269,
            "Templates native placement follows a top-level build root with left-list offsets");
        put(renderer,0x6B9C0,720);tgcx_Expect(!tgcx_TplPlace(&tpl,false),"Templates refuse offscreen build-view placement");
        // The live build root is a child of the Military window (0.4.0 U-8
        // screenshot): its matrix is parent-relative. Military is centred at
        // (768,470) on 2560x1440, the root's own translation is (335,17).
        unsigned char military_inner[0x180]={};
        put(military_inner,0,tgcx_base+0xA38350);put(military_inner,0xE4,reinterpret_cast<uintptr_t>(scene));
        *reinterpret_cast<float*>(military_inner+0x84)=768;*reinterpret_cast<float*>(military_inner+0x88)=-470;
        put(tpl_root_inner,0xE4,reinterpret_cast<uintptr_t>(military_inner));
        *reinterpret_cast<float*>(tpl_root_inner+0x84)=335;*reinterpret_cast<float*>(tpl_root_inner+0x88)=-17;
        put(renderer,0x6B9BC,2560);put(renderer,0x6B9C0,1440);tgcx_bill_test_width=2560;tgcx_bill_test_height=1440;
        tgcx_Expect(tgcx_TplPlace(&tpl,true),"Templates place under a translated Military parent");
        tpl_xy=get(window,0x250);
        tgcx_Expect(static_cast<int16_t>(tpl_xy)==1108 && static_cast<int16_t>(tpl_xy>>16)==556,
            "Templates screen anchor adds every owner translation, not only the build root's local matrix");
        tgcx_Expect(*reinterpret_cast<float*>(inner+0x84)==1108 && *reinterpret_cast<float*>(inner+0x88)==-556,
            "Templates render translation agrees with the stored packed position");
        tgcx_Expect(static_cast<int16_t>(tpl_xy)!=340 && static_cast<int16_t>(tpl_xy>>16)!=86,
            "Templates no longer reproduce the 0.4.0 detached upper-left placement");
        put(military_inner,0xE4,0);
        tgcx_Expect(!tgcx_TplPlace(&tpl,false),"Templates refuse a build root chain that never reaches the scene");
        put(military_inner,0xE4,reinterpret_cast<uintptr_t>(military_inner));
        tgcx_Expect(!tgcx_TplPlace(&tpl,false),"Templates refuse a cyclic owner chain");
        put(military_inner,0xE4,reinterpret_cast<uintptr_t>(scene));put(military_inner,0,0x10);
        tgcx_Expect(!tgcx_TplPlace(&tpl,false),"Templates refuse an owner without an image vtable");
        put(military_inner,0,tgcx_base+0xA38350);
        put(renderer,0x6B9BC,1280);put(renderer,0x6B9C0,720);
        tgcx_Expect(!tgcx_BillForeground(),"a screen smaller than the board refuses placement");
        table[11]=0;tgcx_BillVisibility(false);tgcx_BillVisibility(true);
        tgcx_Expect(!window[0x67],"unknown foreground implementation leaves Bill hidden");
        tgcx_base=saved_base;tgcx_bill_window=saved_window;
    }
    if(renderer)VirtualFree(renderer,0,MEM_RELEASE);
    if(memory)VirtualFree(memory,0,MEM_RELEASE);
    if(data)UnmapViewOfFile(data);
    if(mapping)CloseHandle(mapping);
    if(file!=INVALID_HANDLE_VALUE)CloseHandle(file);
    printf("Bill window: reference engine foreground/unlink/position/lifecycle and dialog ordering checked\n");
}
