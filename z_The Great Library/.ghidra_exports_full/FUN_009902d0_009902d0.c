// FUN_009902d0 @ 009902d0 body=[[009902d0, 009903b7] [009903bb, 009903dd] [009903e1, 0099047f] [00990483, 009904dc] [009904e0, 009904fa] [009904fe, 00990654] [00990658, 00990692]]


int FUN_009902d0(undefined4 *param_1,char param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *****pppppuVar7;
  int *piVar8;
  int *local_13c;
  undefined4 ****local_138 [4];
  undefined4 local_128;
  uint local_124;
  int local_114;
  uint local_110 [4];
  undefined4 local_100;
  uint local_fc;
  uint local_f4 [4];
  undefined4 local_e4;
  uint local_e0;
  undefined **local_60 [19];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b58218;
  local_14 = ExceptionList;
  puVar2 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar2 = (undefined4 *)*param_1;
  }
  if (DAT_00f0ec08 == 0) {
    local_13c = (int *)0x0;
    ExceptionList = &local_14;
  }
  else {
    ExceptionList = &local_14;
    local_13c = (int *)FUN_009e6c10(puVar2);
  }
  if (param_2 == '\0') {
    if (local_13c == (int *)0x0) goto LAB_0099051d;
    local_e0 = 0xf;
    local_e4 = 0;
    local_f4[0] = local_f4[0] & 0xffffff00;
    FUN_00409350("Error on dynamic token: ",0x18);
    local_c = 0;
    local_124 = 0xf;
    local_128 = 0;
    local_138[0] = (undefined4 ****)((uint)local_138[0] & 0xffffff00);
    FUN_00409350(", Check if not already used elsewhere.",0x26);
    local_c._0_1_ = 1;
    uVar3 = FUN_00988f20(local_138);
    local_c._0_1_ = 2;
    FUN_00448aa0(uVar3,0,0xffffffff);
    if (0xf < local_fc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_110[0]);
    }
    local_c._0_1_ = 0;
    local_fc = 0xf;
    local_100 = 0;
    uVar1 = local_110[0] >> 8;
    local_110[0] = uVar1 << 8;
    if (0xf < local_124) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_138[0]);
    }
    local_fc = 0xf;
    local_100 = 0;
    local_110[0] = uVar1 << 8;
    FUN_00409350("lexer.cpp",9);
    local_c._0_1_ = 3;
    local_124 = 0xf;
    local_128 = 0;
    local_138[0] = (undefined4 ****)((uint)local_138[0] & 0xffffff00);
    FUN_00408ed0(local_f4,0,0xffffffff);
    local_c._0_1_ = 4;
    uVar3 = FUN_004015b0(local_110,0x225,0x1000);
    local_c._0_1_ = 7;
    pppppuVar7 = (undefined4 *****)local_138[0];
    if (local_124 < 0x10) {
      pppppuVar7 = local_138;
    }
    uVar3 = FUN_00418e30(uVar3,pppppuVar7);
    local_c._0_1_ = 6;
    if (0xf < local_124) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_138[0]);
    }
    local_124 = 0xf;
    local_128 = 0;
    local_138[0] = (undefined4 ****)((uint)local_138[0] & 0xffffff00);
    FUN_00401280(uVar3);
    local_c = CONCAT31(local_c._1_3_,3);
    FUN_00987ac0(local_60);
    local_60[0] = std::ios_base::vftable;
    FUN_00aad52d(local_60);
    if (0xf < local_fc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_110[0]);
    }
    local_c = 0xffffffff;
    if (0xf < local_e0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_f4[0]);
    }
  }
  if (local_13c != (int *)0x0) {
    ExceptionList = local_14;
    return *local_13c;
  }
LAB_0099051d:
  iVar4 = 0;
  piVar8 = &DAT_012690fc;
  do {
    if (iVar4 < piVar8[-0x41]) {
      iVar4 = piVar8[-0x41];
    }
    if (iVar4 < *piVar8) {
      iVar4 = *piVar8;
    }
    if (iVar4 < piVar8[0x41]) {
      iVar4 = piVar8[0x41];
    }
    if (iVar4 < piVar8[0x82]) {
      iVar4 = piVar8[0x82];
    }
    piVar8 = piVar8 + 0x104;
  } while ((int)piVar8 < 0x13173dc);
  iVar4 = (DAT_0131c8e0 - DAT_0131c8dc >> 2) + 1 + iVar4;
  local_114 = iVar4;
  piVar8 = (int *)FUN_00aae9af(0x104);
  if (piVar8 == (int *)0x0) {
    piVar8 = (int *)0x0;
  }
  else {
    *piVar8 = iVar4;
    if (0xf < (uint)param_1[5]) {
      param_1 = (undefined4 *)*param_1;
    }
    __snprintf((char *)(piVar8 + 1),0xff,"%s",param_1);
  }
  piVar5 = (int *)FUN_00aae9af(4);
  if (piVar5 == (int *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    *piVar5 = iVar4;
  }
  local_124 = 0xf;
  local_128 = 0;
  local_138[0] = (undefined4 ****)((uint)local_138[0] & 0xffffff00);
  piVar6 = piVar8 + 1;
  do {
    iVar4 = *piVar6;
    piVar6 = (int *)((int)piVar6 + 1);
  } while ((char)iVar4 != '\0');
  FUN_00409350(piVar8 + 1,(int)piVar6 - ((int)piVar8 + 5));
  local_c = 8;
  if (DAT_00f0ec0c == '\x01') {
    FUN_00a5c690(&PTR_PTR_00f0ec04,local_138,piVar5);
  }
  else {
    FUN_00a5c820(&PTR_PTR_00f0ec04,&DAT_00f0ec08,piVar5);
  }
  local_c = 0xffffffff;
  if (0xf < local_124) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_138[0]);
  }
  local_124 = 0xf;
  local_128 = 0;
  local_138[0] = (undefined4 ****)((uint)local_138[0] & 0xffffff00);
  FUN_00991120();
  DAT_01258a60 = local_114 + 1;
  ExceptionList = local_14;
  return local_114;
}

