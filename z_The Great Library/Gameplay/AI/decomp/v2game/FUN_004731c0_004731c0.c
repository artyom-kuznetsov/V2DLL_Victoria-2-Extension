// FUN_004731c0 @ 004731c0 body=[[004731c0, 00473e15]]


void FUN_004731c0(void)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b46bab;
  local_10 = ExceptionList;
  if ((DAT_0125b5d4 - DAT_0125b5d0 & 0xfffffffcU) == 0) {
    ExceptionList = &local_10;
    iVar1 = FUN_00aae9af();
    local_8 = 0;
    if (iVar1 != 0) {
      FUN_00409350(&DAT_00dedc10,4);
      FUN_00473110(iVar1,0x18d);
    }
    local_8 = 0xffffffff;
    FUN_00474c50();
    iVar1 = FUN_00aae9af();
    local_8 = 1;
    if (iVar1 != 0) {
      FUN_00409350("RULE_BUILD_FACTORY",0x12);
      FUN_00473110(iVar1,0x614);
    }
    local_8 = 0xffffffff;
    FUN_00474c50();
    iVar1 = FUN_00aae9af();
    local_8 = 2;
    if (iVar1 != 0) {
      FUN_00409350("RULE_EXPAND_FACTORY",0x13);
      FUN_00473110(iVar1,0x615);
    }
    local_8 = 0xffffffff;
    FUN_00474c50();
    iVar1 = FUN_00aae9af();
    local_8 = 3;
    if (iVar1 != 0) {
      FUN_00409350("RULE_OPEN_FACTORY",0x11);
      FUN_00473110(iVar1,0x85a);
    }
    local_8 = 0xffffffff;
    FUN_00474c50();
    iVar1 = FUN_00aae9af();
    local_8 = 4;
    if (iVar1 != 0) {
      FUN_00409350("RULE_DESTROY_FACTORY",0x14);
      FUN_00473110(iVar1,0x914);
    }
    local_8 = 0xffffffff;
    FUN_00474c50();
    iVar1 = FUN_00aae9af();
    local_8 = 5;
    if (iVar1 != 0) {
      FUN_00409350("RULE_BUILD_RAILWAY",0x12);
      FUN_00473110(iVar1,0x616);
    }
    local_8 = 0xffffffff;
    FUN_00474c50();
    iVar1 = FUN_00aae9af();
    local_8 = 6;
    if (iVar1 != 0) {
      FUN_00409350("RULE_FACTORY_PRIORITY",0x15);
      FUN_00473110(iVar1,0x617);
    }
    local_8 = 0xffffffff;
    FUN_00474c50();
    iVar1 = FUN_00aae9af();
    local_8 = 7;
    if (iVar1 != 0) {
      FUN_00409350("RULE_CAN_SUBSIDISE",0x12);
      FUN_00473110(iVar1,0x85b);
    }
    local_8 = 0xffffffff;
    FUN_00474c50();
    iVar1 = FUN_00aae9af();
    local_8 = 8;
    if (iVar1 != 0) {
      FUN_00409350("RULE_POP_BUILD_FACTORY",0x16);
      FUN_00473110(iVar1,0x85c);
    }
    local_8 = 0xffffffff;
    FUN_00474c50();
    iVar1 = FUN_00aae9af();
    local_8 = 9;
    if (iVar1 != 0) {
      FUN_00409350("RULE_POP_EXPAND_FACTORY",0x17);
      FUN_00473110(iVar1,0x85d);
    }
    local_8 = 0xffffffff;
    FUN_00474c50();
    iVar1 = FUN_00aae9af();
    local_8 = 10;
    if (iVar1 != 0) {
      FUN_00409350("RULE_POP_OPEN_FACTORY",0x15);
      FUN_00473110(iVar1,0x85e);
    }
    local_8 = 0xffffffff;
    FUN_00474c50();
    iVar1 = FUN_00aae9af();
    local_8 = 0xb;
    if (iVar1 != 0) {
      FUN_00409350("RULE_DELETE_FACTORY_IF_NO_INPUT",0x1f);
      FUN_00473110(iVar1,0x85f);
    }
    local_8 = 0xffffffff;
    FUN_00474c50();
    iVar1 = FUN_00aae9af();
    local_8 = 0xc;
    if (iVar1 != 0) {
      FUN_00409350("RULE_BUILD_FACTORY_INVEST",0x19);
      FUN_00473110(iVar1,0x947);
    }
    local_8 = 0xffffffff;
    FUN_00474c50();
    iVar1 = FUN_00aae9af();
    local_8 = 0xd;
    if (iVar1 != 0) {
      FUN_00409350("RULE_EXPAND_FACTORY_INVEST",0x1a);
      FUN_00473110(iVar1,0x948);
    }
    local_8 = 0xffffffff;
    FUN_00474c50();
    iVar1 = FUN_00aae9af();
    local_8 = 0xe;
    if (iVar1 != 0) {
      FUN_00409350("RULE_OPEN_FACTORY_INVEST",0x18);
      FUN_00473110(iVar1,0x949);
    }
    local_8 = 0xffffffff;
    FUN_00474c50();
    iVar1 = FUN_00aae9af();
    local_8 = 0xf;
    if (iVar1 != 0) {
      FUN_00409350("RULE_BUILD_RAILWAY_INVEST",0x19);
      FUN_00473110(iVar1,0x94a);
    }
    local_8 = 0xffffffff;
    FUN_00474c50();
    iVar1 = FUN_00aae9af();
    local_8 = 0x10;
    if (iVar1 != 0) {
      FUN_00409350("RULE_CAN_INVEST_IN_POP_PROJECTS",0x1f);
      FUN_00473110(iVar1,0x973);
    }
    local_8 = 0xffffffff;
    FUN_00474c50();
    iVar1 = FUN_00aae9af();
    local_8 = 0x11;
    if (iVar1 != 0) {
      FUN_00409350("RULE_POP_BUILD_FACTORY_INVEST",0x1d);
      FUN_00473110(iVar1,0x94b);
    }
    local_8 = 0xffffffff;
    FUN_00474c50();
    iVar1 = FUN_00aae9af();
    local_8 = 0x12;
    if (iVar1 != 0) {
      FUN_00409350("RULE_POP_EXPAND_FACTORY_INVEST",0x1e);
      FUN_00473110(iVar1,0x94c);
    }
    local_8 = 0xffffffff;
    FUN_00474c50();
    iVar1 = FUN_00aae9af();
    local_8 = 0x13;
    if (iVar1 != 0) {
      FUN_00409350("RULE_POP_OPEN_FACTORY_INVEST",0x1c);
      FUN_00473110(iVar1,0x94d);
    }
    local_8 = 0xffffffff;
    FUN_00474c50();
    iVar1 = FUN_00aae9af();
    local_8 = 0x14;
    if (iVar1 != 0) {
      FUN_00409350("RULE_ALLOW_FOREIGN_INVESTMENT",0x1d);
      FUN_00473110(iVar1,0x957);
    }
    local_8 = 0xffffffff;
    FUN_00474c50();
    iVar1 = FUN_00aae9af();
    local_8 = 0x15;
    if (iVar1 != 0) {
      FUN_00409350("RULE_PRIMARY_CULTURE_VOTING",0x1b);
      FUN_00473110(iVar1,0x61f);
    }
    local_8 = 0xffffffff;
    FUN_00474c50();
    iVar1 = FUN_00aae9af();
    local_8 = 0x16;
    if (iVar1 != 0) {
      FUN_00409350("RULE_CULTURE_VOTING",0x13);
      FUN_00473110(iVar1,0x620);
    }
    local_8 = 0xffffffff;
    FUN_00474c50();
    iVar1 = FUN_00aae9af();
    local_8 = 0x17;
    if (iVar1 != 0) {
      FUN_00409350("RULE_ALL_VOTING",0xf);
      FUN_00473110(iVar1,0x621);
    }
    local_8 = 0xffffffff;
    FUN_00474c50();
    iVar1 = FUN_00aae9af();
    local_8 = 0x18;
    if (iVar1 != 0) {
      FUN_00409350("RULE_LARGEST_SHARE",0x12);
      FUN_00473110(iVar1,0x622);
    }
    local_8 = 0xffffffff;
    FUN_00474c50();
    iVar1 = FUN_00aae9af();
    local_8 = 0x19;
    if (iVar1 != 0) {
      FUN_00409350("RULE_DHONT",10);
      FUN_00473110(iVar1,0x623);
    }
    local_8 = 0xffffffff;
    FUN_00474c50();
    iVar1 = FUN_00aae9af();
    local_8 = 0x1a;
    if (iVar1 != 0) {
      FUN_00409350("RULE_SAINTE_LAQUE",0x11);
      FUN_00473110(iVar1,0x624);
    }
    local_8 = 0xffffffff;
    FUN_00474c50();
    iVar1 = FUN_00aae9af();
    local_8 = 0x1b;
    if (iVar1 != 0) {
      FUN_00409350("RULE_RICH_ONLY",0xe);
      FUN_00473110(iVar1,0x1f7);
    }
    local_8 = 0xffffffff;
    FUN_00474c50();
    iVar1 = FUN_00aae9af();
    local_8 = 0x1c;
    if (iVar1 != 0) {
      FUN_00409350("RULE_SAME_AS_RULING_PARTY",0x19);
      FUN_00473110(iVar1,0x1f8);
    }
    local_8 = 0xffffffff;
    FUN_00474c50();
    iVar1 = FUN_00aae9af();
    local_8 = 0x1d;
    if (iVar1 != 0) {
      FUN_00409350("RULE_STATE_VOTE",0xf);
      FUN_00473110(iVar1,0x1f9);
    }
    local_8 = 0xffffffff;
    FUN_00474c50();
    iVar1 = FUN_00aae9af();
    local_8 = 0x1e;
    if (iVar1 != 0) {
      FUN_00409350("RULE_POPULATION_VOTE",0x14);
      FUN_00473110(iVar1,0x1fa);
    }
    local_8 = 0xffffffff;
    FUN_00474c50();
    iVar1 = FUN_00aae9af();
    local_8 = 0x1f;
    if (iVar1 != 0) {
      FUN_00409350("RULE_FORCED_DISARMAMENT",0x17);
      FUN_00473110(iVar1,0x8a4);
    }
    local_8 = 0xffffffff;
    FUN_00474c50();
    iVar1 = FUN_00aae9af();
    local_8 = 0x20;
    if (iVar1 != 0) {
      FUN_00409350("RULE_SLAVERY_ALLOWED",0x14);
      FUN_00473110(iVar1,0x23c);
    }
    local_8 = 0xffffffff;
    FUN_00474c50();
  }
  ExceptionList = local_10;
  return;
}

