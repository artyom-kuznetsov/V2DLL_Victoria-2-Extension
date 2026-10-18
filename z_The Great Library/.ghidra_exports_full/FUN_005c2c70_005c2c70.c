// FUN_005c2c70 @ 005c2c70 body=[[005c2c70, 005c3069]]


void FUN_005c2c70(void)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b45f1e;
  local_10 = ExceptionList;
  if ((DAT_0125fe14 - DAT_0125fe10 & 0xfffffffcU) == 0) {
    ExceptionList = &local_10;
    iVar1 = FUN_00aae9af();
    local_8 = 0;
    if (iVar1 != 0) {
      FUN_00409350("TRAIT_NONE",10);
      FUN_005b5e70(iVar1,0x18d);
    }
    local_8 = 0xffffffff;
    FUN_005c4c80();
    iVar1 = FUN_00aae9af();
    local_8 = 1;
    if (iVar1 != 0) {
      FUN_00409350("TRAIT_ATTACK",0xc);
      FUN_005b5e70(iVar1,0x174);
    }
    local_8 = 0xffffffff;
    FUN_005c4c80();
    iVar1 = FUN_00aae9af();
    local_8 = 2;
    if (iVar1 != 0) {
      FUN_00409350("TRAIT_DEFEND",0xc);
      FUN_005b5e70(iVar1,0x4e8);
    }
    local_8 = 0xffffffff;
    FUN_005c4c80();
    iVar1 = FUN_00aae9af();
    local_8 = 3;
    if (iVar1 != 0) {
      FUN_00409350("TRAIT_MORALE",0xc);
      FUN_005b5e70(iVar1,0x2fb);
    }
    local_8 = 0xffffffff;
    FUN_005c4c80();
    iVar1 = FUN_00aae9af();
    local_8 = 4;
    if (iVar1 != 0) {
      FUN_00409350("TRAIT_ORGANISATION",0x12);
      FUN_005b5e70(iVar1,0x534);
    }
    local_8 = 0xffffffff;
    FUN_005c4c80();
    iVar1 = FUN_00aae9af();
    local_8 = 5;
    if (iVar1 != 0) {
      FUN_00409350("TRAIT_RECONAISSANCE",0x13);
      FUN_005b5e70(iVar1,0x664);
    }
    local_8 = 0xffffffff;
    FUN_005c4c80();
    iVar1 = FUN_00aae9af();
    local_8 = 6;
    if (iVar1 != 0) {
      FUN_00409350("TRAIT_SPEED",0xb);
      FUN_005b5e70(iVar1,0x6d);
    }
    local_8 = 0xffffffff;
    FUN_005c4c80();
    iVar1 = FUN_00aae9af();
    local_8 = 7;
    if (iVar1 != 0) {
      FUN_00409350("TRAIT_ATTRITION",0xf);
      FUN_005b5e70(iVar1,0x374);
    }
    local_8 = 0xffffffff;
    FUN_005c4c80();
    iVar1 = FUN_00aae9af();
    local_8 = 8;
    if (iVar1 != 0) {
      FUN_00409350("TRAIT_EXPERIENCE",0x10);
      FUN_005b5e70(iVar1,0x4f9);
    }
    local_8 = 0xffffffff;
    FUN_005c4c80();
    iVar1 = FUN_00aae9af();
    local_8 = 9;
    if (iVar1 != 0) {
      FUN_00409350("TRAIT_RELIABILITY",0x11);
      FUN_005b5e70(iVar1,0x688);
    }
    local_8 = 0xffffffff;
    FUN_005c4c80();
  }
  ExceptionList = local_10;
  return;
}

