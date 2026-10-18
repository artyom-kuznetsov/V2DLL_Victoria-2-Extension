// FUN_00795f40 @ 00795f40 body=[[00795f40, 00795ff9] [00795ffd, 007960e7] [007960eb, 0079613f] [00796143, 0079620d] [00796211, 007962a0] [007962a4, 0079631e] [00796322, 00796341] [00796345, 007963c2] [007963c6, 007963e5] [007963e9, 0079642c] [00796430, 00796523] [00796527, 00796551] [00796555, 0079657d] [00796581, 007965c9] [007965cf, 00796608] [0079660c, 007966c5] [007966c9, 00796701] [00796705, 00796726] [0079672a, 00796754] [00796758, 0079676c]]


undefined4 *
FUN_00795f40(undefined4 *param_1,undefined4 param_2,int *param_3,int param_4,undefined4 param_5)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 local_fc [5];
  uint local_e8;
  uint local_e0;
  undefined4 local_d0;
  uint local_cc;
  undefined4 local_c4;
  undefined4 local_c0;
  uint local_bc [4];
  undefined4 local_ac;
  uint local_a8;
  uint local_a0;
  undefined4 local_90;
  uint local_8c;
  uint local_84 [4];
  undefined4 local_74;
  uint local_70;
  uint local_68 [4];
  undefined4 local_58;
  uint local_54;
  uint local_4c;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9d492;
  local_10 = ExceptionList;
  local_4c = 0;
  local_54 = 0xf;
  local_58 = 0;
  local_68[0] = local_68[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("leader_entry",0xc);
  local_8 = 0;
  uVar3 = (**(code **)(*param_3 + 0x3c))();
  piVar4 = (int *)(**(code **)(*param_3 + 0x34))();
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  DAT_013f08e0 = DAT_013f08e0 + 1;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = &PTR_FUN_00e39158;
  local_8._0_1_ = 4;
  *param_1 = &PTR_FUN_00e392f0;
  param_1[7] = &PTR_FUN_00e39320;
  *(undefined1 *)(param_1 + 9) = 0;
  uVar3 = (**(code **)(*piVar4 + 0x2c))(local_68,uVar3);
  param_1[8] = uVar3;
  local_8._0_1_ = 6;
  if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_68[0]);
  }
  local_54 = 0xf;
  local_58 = 0;
  local_68[0] = local_68[0] & 0xffffff00;
  *param_1 = CLeaderAssignmentEntry::vftable;
  param_1[7] = CLeaderAssignmentEntry::vftable;
  FUN_0072d4e0(param_1 + 10,param_4);
  local_8._0_1_ = 7;
  FUN_0079de40(param_1 + 0x14,param_5);
  param_1[0x1e] = param_2;
  FUN_0079e1c0(0,0,0,0,0,0,0,0,0,0,0,0,FUN_00796890,0,0,0,0,0);
  local_8._0_1_ = 9;
  param_1[0x34] = param_3;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("leader_name",0xb);
  local_8._0_1_ = 10;
  (**(code **)(*(int *)param_1[8] + 0x3c))(local_2c);
  FUN_00408ed0(param_4 + 0x94,0,0xffffffff);
  FUN_00a5ecc0(param_4 + 0x94,0);
  local_8._0_1_ = 9;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("leader_button",0xd);
  local_8._0_1_ = 0xb;
  iVar5 = (**(code **)(*(int *)param_1[8] + 0x34))(local_2c);
  (**(code **)(*(int *)(iVar5 + 0x54) + 4))(param_1 + 0x20);
  local_8._0_1_ = 9;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("leader_prestige_bar",0x13);
  local_8._0_1_ = 0xc;
  iVar5 = (**(code **)(*(int *)param_1[8] + 0x44))(local_2c);
  piVar4 = *(int **)(iVar5 + 0x94);
  iVar5 = FUN_009c16d0(param_1[0xb],param_1[0xc]);
  iVar5 = *(int *)(iVar5 + 0xd8);
  FUN_00401000(0x47c35040);
  iVar6 = FUN_00b31c00();
  iVar5 = __alldiv((longlong)iVar6 * (longlong)iVar5,1000,0);
  FUN_00401000(0x43fa4001);
  iVar6 = FUN_00b31c00();
  (**(code **)(*piVar4 + 0x5c))((iVar6 + iVar5) / 1000);
  local_8._0_1_ = 9;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  FUN_009c16d0();
  FUN_00967f50();
  cVar2 = FUN_005cbc60();
  if (cVar2 == '\0') {
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0xd;
    piVar4 = (int *)(**(code **)(*(int *)param_1[8] + 0x34))(local_2c);
    (**(code **)(*piVar4 + 0xbc))();
    local_8._0_1_ = 9;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 0xe;
  uVar3 = (**(code **)(**(int **)(param_4 + 0x7c) + 0x18))(local_48);
  local_8._0_1_ = 0xf;
  (**(code **)(*(int *)param_1[8] + 0x3c))();
  FUN_00408ed0(uVar3,0,0xffffffff);
  FUN_00a5ecc0(uVar3,0);
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  local_8._0_1_ = 9;
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("unitleader_background",0x15);
  local_8._0_1_ = 0x10;
  uVar3 = (**(code **)(**(int **)(param_4 + 0x80) + 0x18))(local_48);
  local_8._0_1_ = 0x11;
  (**(code **)(*(int *)param_1[8] + 0x3c))(local_2c);
  FUN_00408ed0(uVar3,0,0xffffffff);
  FUN_00a5ecc0(uVar3,0);
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  local_8._0_1_ = 9;
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_54 = 0xf;
  local_58 = 0;
  local_68[0] = local_68[0] & 0xffffff00;
  FUN_00409350("photo",5);
  local_8._0_1_ = 0x12;
  piVar4 = (int *)(**(code **)(*(int *)param_1[8] + 0x44))(local_68);
  local_8._0_1_ = 9;
  if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_68[0]);
  }
  local_54 = 0xf;
  local_58 = 0;
  local_68[0] = local_68[0] & 0xffffff00;
  FUN_00436780();
  local_8._0_1_ = 0x13;
  FUN_004367c0();
  local_8._0_1_ = 0x14;
  iVar5 = *(int *)(DAT_012586e0 + 0x4c);
  if (iVar5 == 1) {
    FUN_00408ed0(local_bc,0,0xffffffff);
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  FUN_00409350(&DAT_00df2c9c,4);
  local_8._0_1_ = 0x15;
  local_8c = 0xf;
  local_90 = 0;
  local_a0 = local_a0 & 0xffffff00;
  FUN_00409350("/interface/leaders/",0x13);
  local_8._0_1_ = 0x16;
  FUN_00988f20(param_4 + 0xb4);
  local_8._0_1_ = 0x17;
  FUN_00988f20(local_48);
  if (0xf < local_cc) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_e0);
  }
  local_cc = 0xf;
  local_d0 = 0;
  local_e0 = local_e0 & 0xffffff00;
  if (0xf < local_8c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_a0);
  }
  local_8c = 0xf;
  local_90 = 0;
  local_a0 = local_a0 & 0xffffff00;
  local_8._0_1_ = 0x1b;
  uVar1 = (undefined1)local_8;
  local_8._0_1_ = 0x1b;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  if (iVar5 == 2) {
    local_8._0_1_ = uVar1;
    uVar3 = FUN_00436de0(local_2c,local_bc,local_fc);
    local_8._0_1_ = 0x1d;
    FUN_00408ed0(uVar3,0,0xffffffff);
    local_8._0_1_ = 0x1b;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
  }
  else {
    uVar3 = FUN_00988f20(local_84);
    local_8._0_1_ = 0x1c;
    FUN_00408ed0(uVar3,0,0xffffffff);
    local_8._0_1_ = 0x1b;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
  }
  local_8._0_1_ = 0x1b;
  iVar5 = (**(code **)(*param_3 + 0x40))();
  iVar6 = FUN_00aae9af(0x1ac);
  local_8._0_1_ = 0x1e;
  if (iVar6 == 0) {
    uVar3 = 0;
  }
  else {
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350("GFX_leader_generic0",0x13);
    local_8 = CONCAT31(local_8._1_3_,0x1f);
    local_4c = 1;
    uVar3 = FUN_005c2ad0(local_2c);
    local_c4 = *(undefined4 *)(iVar5 + 0x6b9bc);
    local_c0 = *(undefined4 *)(iVar5 + 0x6b9c0);
    uVar3 = FUN_009c4b50(iVar6,CONCAT22((short)local_c0,(short)*(undefined4 *)(iVar5 + 0x6b9bc)),
                         local_84,uVar3,iVar5);
  }
  local_8 = 0x1b;
  if ((local_4c & 1) != 0) {
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
  }
  (**(code **)(*piVar4 + 0xe0))(uVar3);
  (**(code **)(*piVar4 + 0x34))();
  if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_84[0]);
  }
  local_70 = 0xf;
  local_74 = 0;
  local_84[0] = local_84[0] & 0xffffff00;
  if (0xf < local_a8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_bc[0]);
  }
  local_a8 = 0xf;
  local_ac = 0;
  local_bc[0] = local_bc[0] & 0xffffff00;
  if (0xf < local_e8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_fc[0]);
  }
  ExceptionList = local_10;
  return param_1;
}

