// FUN_00449120 @ 00449120  (requested 00449120, first bytes: 55 8B EC 64 A1 00 00 00)


void FUN_00449120(void)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4784a;
  local_10 = ExceptionList;
  if ((DAT_0125a5b8 - DAT_0125a5b4 & 0xfffffffcU) == 0) {
    ExceptionList = &local_10;
    iVar1 = FUN_00aae9af();
    local_8 = 0;
    if (iVar1 != 0) {
      FUN_00409350("MODIFIER_NONE",0xd);
      FUN_00449070(iVar1,0x18d);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 1;
    if (iVar1 != 0) {
      FUN_00409350("SUPPLY_LIMIT",0xc);
      FUN_00449070(iVar1,0x376);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 2;
    if (iVar1 != 0) {
      FUN_00409350("ATTRITION",9);
      FUN_00449070(iVar1,0x374);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 3;
    if (iVar1 != 0) {
      FUN_00409350("MAX_ATTRITION",0xd);
      FUN_00449070(iVar1,0x375);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 4;
    if (iVar1 != 0) {
      FUN_00409350("WAR_EXHAUSTION",0xe);
      FUN_00449070(iVar1,0x39f);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 5;
    if (iVar1 != 0) {
      FUN_00409350("MAX_WAR_EXHAUSTION",0x12);
      FUN_00449070(iVar1,0x3a0);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 6;
    if (iVar1 != 0) {
      FUN_00409350("FORT_LEVEL",10);
      FUN_00449070(iVar1,0x3b0);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 7;
    if (iVar1 != 0) {
      FUN_00409350("LEADERSHIP",10);
      FUN_00449070(iVar1,0x508);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 8;
    if (iVar1 != 0) {
      FUN_00409350("MODIFIER_GLOBAL_LEADERSHIP_MODIFIER",0x23);
      FUN_00449070(iVar1,0x6b4);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 9;
    if (iVar1 != 0) {
      FUN_00409350("MODIFIER_SUPPLY_CONSUMPTION",0x1b);
      FUN_00449070(iVar1,0x4de);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 10;
    if (iVar1 != 0) {
      FUN_00409350("MODIFIER_UNIT_RECRUITMENT_TIME",0x1e);
      FUN_00449070(iVar1,0x548);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0xb;
    if (iVar1 != 0) {
      FUN_00409350("MODIFIER_ORG_REGAIN",0x13);
      FUN_00449070(iVar1,0x557);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0xc;
    if (iVar1 != 0) {
      FUN_00409350("MODIFIER_REINFORCE_SPEED",0x18);
      FUN_00449070(iVar1,0x722);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0xd;
    if (iVar1 != 0) {
      FUN_00409350("MODIFIER_LAND_ORGANISATION",0x1a);
      FUN_00449070(iVar1,0x559);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0xe;
    if (iVar1 != 0) {
      FUN_00409350("MODIFIER_NAVAL_ORGANISATION",0x1b);
      FUN_00449070(iVar1,0x55b);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0xf;
    if (iVar1 != 0) {
      FUN_00409350("MODIFIER_RESEARCH_POINTS",0x18);
      FUN_00449070(iVar1,0x1bf);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x10;
    if (iVar1 != 0) {
      FUN_00409350("MODIFIER_RESEARCH_POINTS_MODIFIER",0x21);
      FUN_00449070(iVar1,0x1c5);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x11;
    if (iVar1 != 0) {
      FUN_00409350("MODIFIER_RESEARCH_POINTS_ON_CONQUER",0x23);
      FUN_00449070(iVar1,0xa4a);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x12;
    if (iVar1 != 0) {
      FUN_00409350("MODIFIER_DEBT_DEFAULT_TO",0x18);
      FUN_00449070(iVar1,0x1e4);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x13;
    if (iVar1 != 0) {
      FUN_00409350("MODIFIER_IMPORT_COST",0x14);
      FUN_00449070(iVar1,0x1e5);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x14;
    if (iVar1 != 0) {
      FUN_00409350("MODIFIER_LOAN_INTEREST",0x16);
      FUN_00449070(iVar1,0x1e6);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x15;
    if (iVar1 != 0) {
      FUN_00409350("MODIFIER_TAX_EFFICIENCY",0x17);
      FUN_00449070(iVar1,0x1ff);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x16;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x618);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x17;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x619);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x18;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x1fe);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x19;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x61a);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x1a;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x1fd);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x1b;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x1fc);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x1c;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x61c);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x1d;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x61d);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x1e;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x61e);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x1f;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x625);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x20;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x6c7);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x21;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x626);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x22;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x627);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x23;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x628);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x24;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x629);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x25;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x62d);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x26;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x214);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x27;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x215);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x28;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x216);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x29;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x630);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x2a;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x62e);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x2b;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x62f);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x2c;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x62a);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x2d;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x62b);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x2e;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x62c);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x2f;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x631);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x30;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x632);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x31;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x633);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x32;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x695);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x33;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x844);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x34;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x845);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x35;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x846);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x36;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x847);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x37;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x848);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x38;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x849);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x39;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x84a);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x3a;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x84b);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x3b;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x84c);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x3c;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x24d);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x3d;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x24e);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x3e;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x24f);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x3f;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x250);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x40;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x251);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x41;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x252);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x42;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x253);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x43;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x254);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x44;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x255);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x45;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x643);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x46;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x1fb);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x47;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x3b3);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x48;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x65f);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x49;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x660);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x4a;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x3ed);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x4b;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x661);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x4c;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x1ec);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x4d;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x205);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x4e;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x206);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x4f;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x203);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x50;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x204);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x51;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x669);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x52;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x66a);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x53;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x66b);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x54;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x66c);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x55;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x67e);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x56;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x67f);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x57;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x681);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x58;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x682);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x59;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x683);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x5a;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x6cb);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x5b;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x6a9);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x5c;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x685);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x5d;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x68f);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x5e;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x69f);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x5f;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x6ae);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x60;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x686);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x61;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x8f3);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x62;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x8f4);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 99;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x670);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 100;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x671);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x65;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0xa8e);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x66;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0xa8f);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x67;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x6af);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x68;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x6b0);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x69;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x6b1);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x6a;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x6b2);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x6b;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x92b);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x6c;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x95d);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x6d;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x960);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x6e;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x961);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x6f;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x96f);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x70;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x979);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x71;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x977);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x72;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x978);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x73;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x97a);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x74;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x97b);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x75;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x97c);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x76;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x97d);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x77;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x97e);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x78;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x97f);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x79;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x2b6);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x7a;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x98b);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x7b;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x98c);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x7c;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x997);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
    iVar1 = FUN_00aae9af();
    local_8 = 0x7d;
    if (iVar1 != 0) {
      FUN_009885d0();
      FUN_00449070(iVar1,0x998);
    }
    local_8 = 0xffffffff;
    FUN_0044ee00();
  }
  ExceptionList = local_10;
  return;
}

