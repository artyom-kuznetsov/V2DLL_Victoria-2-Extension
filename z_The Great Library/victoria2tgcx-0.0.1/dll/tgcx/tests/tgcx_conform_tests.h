// Isolated TPL-1 Conform tests: the planner's diff and the session tracker's
// state machine on synthetic ids. No game process or state mutation.
#pragma once
#include "../tgcx_conform.h"

static tgcx_CfRegiment tgcx_CfR(uint32_t id,int unit) { return {{0x10,id},unit}; }
static tgcx_CfIdle tgcx_CfI(uint32_t id,int unit,int cost) { return {{0x1269,id},unit,100+static_cast<int>(id),cost}; }

static void tgcx_ConformPlanTests() {
    static tgcx_CfPlan p;int want[tgcx_tpl_units]={};
    // Mixed: 3 infantry(0) + 1 cavalry(2) + 2 artillery(4) against 2 inf, 2 art, 1 engineer(5).
    tgcx_CfRegiment mixed[]={tgcx_CfR(1,0),tgcx_CfR(2,2),tgcx_CfR(3,0),tgcx_CfR(4,4),tgcx_CfR(5,0),tgcx_CfR(6,4)};
    want[0]=2;want[4]=2;want[5]=1;
    tgcx_CfMakePlan(mixed,6,want,nullptr,nullptr,0,&p);
    tgcx_Expect(p.refusal==TGCX_CF_OK,"conform mixed plan accepted");
    tgcx_Expect(p.detach_count==2 && p.detach[0].id.id==2 && p.detach[1].id.id==5,"conform detaches the cavalry and the last infantry");
    tgcx_Expect(p.build_total==1 && p.build[5]==1 && !p.gather_count,"conform builds the missing engineer");
    // Already conforming.
    tgcx_CfRegiment two[]={tgcx_CfR(1,0),tgcx_CfR(2,0)};int w2[tgcx_tpl_units]={};w2[0]=2;
    tgcx_CfMakePlan(two,2,w2,nullptr,nullptr,0,&p);
    tgcx_Expect(p.refusal==TGCX_CF_MATCHES,"conform reports a matching stack");
    // A template sharing nothing with the stack would empty it: refused.
    int w3[tgcx_tpl_units]={};w3[4]=3;
    tgcx_CfMakePlan(two,2,w3,nullptr,nullptr,0,&p);
    tgcx_Expect(p.refusal==TGCX_CF_NOTHING_KEPT && !p.detach_count,"conform refuses to empty the stack");
    // Unknown regiments stay and do not count.
    tgcx_CfRegiment unk[]={tgcx_CfR(1,-1),tgcx_CfR(2,0)};int w4[tgcx_tpl_units]={};w4[0]=2;
    tgcx_CfMakePlan(unk,2,w4,nullptr,nullptr,0,&p);
    tgcx_Expect(p.refusal==TGCX_CF_OK && !p.detach_count && p.build[0]==1,"conform keeps an unnamed regiment");
    tgcx_CfRegiment only_unk[]={tgcx_CfR(1,-1)};
    tgcx_CfMakePlan(only_unk,1,w3,nullptr,nullptr,0,&p);
    tgcx_Expect(p.refusal==TGCX_CF_OK && !p.detach_count && p.build[4]==3,"conform with only unnamed regiments only builds");
    // Pending regiments and idle stacks (D13 re-Conform) before building; cheapest idle first.
    int w5[tgcx_tpl_units]={};w5[0]=5;int pending[tgcx_tpl_units]={};pending[0]=1;
    tgcx_CfIdle idle[]={tgcx_CfI(7,0,30),tgcx_CfI(8,2,1),tgcx_CfI(9,0,10)};
    tgcx_CfMakePlan(two,2,w5,pending,idle,3,&p);
    tgcx_Expect(p.gather_count==2 && p.gather[0].stack.id==9 && p.gather[1].stack.id==7,"conform gathers idle stacks cheapest first");
    tgcx_Expect(p.build_total==0,"conform builds nothing gathered or pending");
    int w6[tgcx_tpl_units]={};w6[0]=6;
    tgcx_CfMakePlan(two,2,w6,pending,idle,3,&p);
    tgcx_Expect(p.gather_count==2 && p.build[0]==1 && p.build_total==1,"conform builds what idle stacks cannot cover");
    // Bad guards.
    int big[tgcx_tpl_units]={};big[0]=tgcx_cf_regiments+1;
    tgcx_CfMakePlan(two,2,big,nullptr,nullptr,0,&p);
    tgcx_Expect(p.refusal==TGCX_CF_TOO_LARGE,"conform refuses an oversized template");
    int neg[tgcx_tpl_units]={};neg[0]=-3;neg[2]=1;
    tgcx_CfRegiment mix2[]={tgcx_CfR(1,0),tgcx_CfR(2,2)};
    tgcx_CfMakePlan(mix2,2,neg,nullptr,nullptr,0,&p);
    tgcx_Expect(p.refusal==TGCX_CF_OK && p.detach_count==1 && p.detach[0].id.id==1,"conform treats a negative count as zero");
}

static void tgcx_ConformTrackTests() {
    static tgcx_CfTracker k;memset(&k,0,sizeof(k));int prov=-1;
    tgcx_CfId target={0x1269,50},built={0x1269,60},cons={0x20,61},none={};
    tgcx_Expect(tgcx_CfNone(none) && !tgcx_CfNone(target),"conform empty id");
    tgcx_CfTask* t=tgcx_CfAdd(&k,TGCX_CF_JOIN,target,built,cons,0,1000);
    tgcx_Expect(t && !tgcx_CfAdd(&k,TGCX_CF_JOIN,target,built,cons,0,1000),"conform one task per stack");
    int pending[tgcx_tpl_units];tgcx_CfPending(k,target,pending);
    tgcx_Expect(pending[0]==1,"conform pending counts the join");
    // Under construction, then appears elsewhere: one safe-path Move, then waits.
    tgcx_CfSeen s={true,10,false,0,true};
    tgcx_Expect(tgcx_CfStep(t,s,1001,&prov)==TGCX_CF_WAIT,"conform waits for construction");
    s.stack_alive=true;s.stack_province=20;s.construction_alive=false;
    tgcx_Expect(tgcx_CfStep(t,s,1100,&prov)==TGCX_CF_MOVE && prov==10,"conform moves the new stack to the target");
    tgcx_Expect(tgcx_CfStep(t,s,1101,&prov)==TGCX_CF_WAIT,"conform does not repeat the Move");
    s.target_province=11;prov=-1;
    tgcx_Expect(tgcx_CfStep(t,s,1102,&prov)==TGCX_CF_MOVE && prov==11,"conform follows a moving target");
    s.stack_province=11;
    tgcx_Expect(tgcx_CfStep(t,s,1110,&prov)==TGCX_CF_MERGE,"conform merges in one province");
    tgcx_Expect(tgcx_CfStep(t,s,1110,&prov)==TGCX_CF_WAIT,"conform sends one Merge per day");
    tgcx_Expect(tgcx_CfStep(t,s,1111,&prov)==TGCX_CF_MERGE,"conform retries Merge the next day");
    s.stack_alive=false;
    tgcx_Expect(tgcx_CfStep(t,s,1112,&prov)==TGCX_CF_DONE && !t->used,"conform done once merged");
    tgcx_CfPending(k,target,pending);
    tgcx_Expect(pending[0]==0,"conform pending drops the merged join");
    // Cancelled construction: seen, then two days with neither.
    t=tgcx_CfAdd(&k,TGCX_CF_JOIN,target,built,cons,0,1200);
    tgcx_CfSeen building={true,10,false,0,true},gone={true,10,false,0,false};
    tgcx_Expect(tgcx_CfStep(t,building,1201,&prov)==TGCX_CF_WAIT,"conform sees the construction");
    tgcx_Expect(tgcx_CfStep(t,gone,1202,&prov)==TGCX_CF_WAIT,"conform grace day for a missing construction");
    tgcx_Expect(tgcx_CfStep(t,gone,1203,&prov)==TGCX_CF_CANCELLED && !t->used,"conform drops a cancelled construction");
    // A construction never seen (identity inferred) only times out.
    t=tgcx_CfAdd(&k,TGCX_CF_JOIN,target,built,cons,0,2000);
    tgcx_Expect(tgcx_CfStep(t,gone,2001,&prov)==TGCX_CF_WAIT && tgcx_CfStep(t,gone,2002,&prov)==TGCX_CF_WAIT &&
        tgcx_CfStep(t,gone,2003,&prov)==TGCX_CF_WAIT,"conform keeps waiting for an unseen construction");
    tgcx_Expect(tgcx_CfStep(t,gone,2000+tgcx_cf_build_days,&prov)==TGCX_CF_CANCELLED && !t->used,"conform times out an unseen construction");
    // A gathered stack (no construction) that vanishes before appearing.
    t=tgcx_CfAdd(&k,TGCX_CF_JOIN,target,built,none,0,2100);
    tgcx_Expect(tgcx_CfStep(t,gone,2101,&prov)==TGCX_CF_WAIT && tgcx_CfStep(t,gone,2102,&prov)==TGCX_CF_CANCELLED,"conform drops a vanished gathered stack");
    // Missing target: the new stack stays.
    t=tgcx_CfAdd(&k,TGCX_CF_JOIN,target,built,cons,0,1300);
    tgcx_CfSeen orphan={false,0,true,20,false};prov=-1;
    tgcx_Expect(tgcx_CfStep(t,orphan,1301,&prov)==TGCX_CF_TARGET_GONE && prov==-1 && !t->used,"conform stops when the target is gone");
    // Detach: the FILL stack appears, then Transfers; or times out.
    tgcx_CfId fill={0x1269,70};
    t=tgcx_CfAdd(&k,TGCX_CF_FILL,target,fill,none,-1,1400);
    tgcx_CfSeen wait={true,10,false,0,false};
    tgcx_Expect(tgcx_CfStep(t,wait,1401,&prov)==TGCX_CF_WAIT,"conform waits for the detach stack");
    tgcx_CfSeen made={true,10,true,10,false};
    tgcx_Expect(tgcx_CfStep(t,made,1402,&prov)==TGCX_CF_TRANSFER && t->used,"conform transfers once the detach stack exists");
    tgcx_Expect(tgcx_CfStep(t,made,1402,&prov)==TGCX_CF_WAIT && t->used,"conform waits a day for the transfers");
    tgcx_Expect(tgcx_CfStep(t,made,1403,&prov)==TGCX_CF_VERIFY && !t->used,"conform checks the extras arrived the next day (TPL-4)");
    t=tgcx_CfAdd(&k,TGCX_CF_FILL,target,fill,none,-1,1404);
    t->transfer_sent=true;t->transfer_date=1404;
    tgcx_Expect(tgcx_CfStep(t,made,1404,&prov)==TGCX_CF_WAIT,"conform does not duplicate the initial batch transfers");
    tgcx_Expect(tgcx_CfStep(t,wait,1405,&prov)==TGCX_CF_VERIFY && !t->used,"conform reports a detach stack disappearing before verification");
    t=tgcx_CfAdd(&k,TGCX_CF_FILL,target,fill,none,-1,1500);
    tgcx_Expect(tgcx_CfStep(t,wait,1507,&prov)==TGCX_CF_CANCELLED && !t->used,"conform gives up on a detach stack after a week");
    tgcx_CfPending(k,target,pending);
    tgcx_Expect(pending[0]==0,"conform fill tasks are not pending joins");
}

static void tgcx_ConformTests() {
    tgcx_ConformPlanTests();tgcx_ConformTrackTests();
    printf("Conform: plan diff, refusals, gathering and the session tracker checked\n");
}
