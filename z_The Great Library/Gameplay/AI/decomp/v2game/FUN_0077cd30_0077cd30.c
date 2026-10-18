// FUN_0077cd30 @ 0077cd30 body=[[0077cd30, 0077cdcd] [0077cdd1, 0077ce43] [0077ce47, 0077ce98] [0077ce9c, 0077cf1f] [0077cf23, 0077cf74] [0077cf78, 0077cfb7] [0077cfbb, 0077cff7] [0077cffb, 0077d047] [0077d04b, 0077d08a] [0077d08e, 0077d0cd] [0077d0d1, 0077d110] [0077d114, 0077d153] [0077d157, 0077d1b1] [0077d1b5, 0077d1f4] [0077d1f8, 0077d237] [0077d23b, 0077d2e3] [0077d2e7, 0077d323] [0077d327, 0077d363] [0077d367, 0077d3a3] [0077d3a7, 0077d3e3] [0077d3e7, 0077d423] [0077d427, 0077d463] [0077d467, 0077d483]]


undefined4 *
FUN_0077cd30(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            int *param_5,undefined4 param_6,char param_7,undefined1 param_8)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  short *psVar4;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b7b4c4;
  local_10 = ExceptionList;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("ship_unit",9);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  DAT_013f08e0 = DAT_013f08e0 + 1;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = &PTR_FUN_00e39158;
  local_8._0_1_ = 4;
  local_8._1_3_ = 0;
  *param_1 = &PTR_FUN_00e392f0;
  param_1[7] = &PTR_FUN_00e39320;
  *(undefined1 *)(param_1 + 9) = 0;
  uVar1 = (**(code **)(*param_5 + 0x2c))(local_34,param_6);
  param_1[8] = uVar1;
  local_8._0_1_ = 6;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  *(char *)(param_1 + 0x1a) = param_7;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  *param_1 = CNavyOption::vftable;
  param_1[7] = CNavyOption::vftable;
  param_1[10] = param_3;
  param_1[0xb] = param_4;
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("left_slot",9);
  local_8._0_1_ = 7;
  FUN_0077c520(param_1 + 0x1b,local_50,(param_7 != '\0') - 1 & (uint)param_1);
  local_8._0_1_ = 9;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350("right_slot",10);
  local_8._0_1_ = 10;
  FUN_0077c520(param_1 + 0x3c,local_34,-(uint)(param_7 != '\0') & (uint)param_1);
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  *(undefined1 *)(param_1 + 0x5d) = 0;
  FUN_007874c0(&LAB_0077d490,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  local_8._0_1_ = 0xd;
  param_1[0x72] = param_2;
  *(undefined1 *)(param_1 + 0x73) = param_8;
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350(&DAT_00e0f2e4,2);
  local_8._0_1_ = 0xe;
  uVar1 = (**(code **)(*(int *)param_1[8] + 0x34))(local_50);
  local_8._0_1_ = 0xd;
  param_1[0x14] = uVar1;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  (**(code **)(*(int *)(param_1[0x14] + 0x54) + 4))(param_1 + 0x5e);
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("combat_view",0xb);
  local_8._0_1_ = 0xf;
  (**(code **)(*(int *)param_1[0x14] + 0x78))(local_50);
  local_8._0_1_ = 0xd;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("highlight",9);
  local_8._0_1_ = 0x10;
  uVar1 = (**(code **)(*(int *)param_1[8] + 0x44))(local_50);
  local_8._0_1_ = 0xd;
  param_1[0x13] = uVar1;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("combat_view",0xb);
  local_8._0_1_ = 0x11;
  (**(code **)(*(int *)param_1[0x13] + 0x78))(local_50);
  local_8._0_1_ = 0xd;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  (**(code **)(*(int *)param_1[0x13] + 0x104))();
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("attacker_name",0xd);
  local_8._0_1_ = 0x12;
  uVar1 = (**(code **)(*(int *)param_1[8] + 0x3c))(local_50);
  local_8._0_1_ = 0xd;
  param_1[0xc] = uVar1;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("defender_name",0xd);
  local_8._0_1_ = 0x13;
  uVar1 = (**(code **)(*(int *)param_1[8] + 0x3c))(local_50);
  local_8._0_1_ = 0xd;
  param_1[0xd] = uVar1;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("attacker_flag",0xd);
  local_8._0_1_ = 0x14;
  uVar1 = (**(code **)(*(int *)param_1[8] + 0x3c))(local_50);
  local_8._0_1_ = 0xd;
  param_1[0xe] = uVar1;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("defender_flag",0xd);
  local_8._0_1_ = 0x15;
  uVar1 = (**(code **)(*(int *)param_1[8] + 0x3c))(local_50);
  local_8._0_1_ = 0xd;
  param_1[0xf] = uVar1;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("status",6);
  local_8._0_1_ = 0x16;
  uVar1 = (**(code **)(*(int *)param_1[8] + 0x3c))(local_50);
  local_8._0_1_ = 0xd;
  param_1[0x10] = uVar1;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("naval_combat_range",0x12);
  local_8._0_1_ = 0x17;
  piVar2 = (int *)(**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x34))();
  iVar3 = (**(code **)(*piVar2 + 0x48))(local_50);
  local_14 = *(undefined4 *)(iVar3 + 0x68);
  local_8._0_1_ = 0xd;
  param_1[0x15] = *(undefined4 *)(iVar3 + 100);
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("range_L",7);
  local_8._0_1_ = 0x18;
  uVar1 = (**(code **)(*(int *)param_1[8] + 0x44))(local_50);
  local_8._0_1_ = 0xd;
  param_1[0x11] = uVar1;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("range_R",7);
  local_8._0_1_ = 0x19;
  uVar1 = (**(code **)(*(int *)param_1[8] + 0x44))(local_50);
  local_8._0_1_ = 0xd;
  param_1[0x12] = uVar1;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  (**(code **)(*(int *)param_1[0x11] + 0x104))();
  (**(code **)(*(int *)param_1[0x12] + 0x104))();
  psVar4 = (short *)(**(code **)(*(int *)param_1[0x11] + 0x3c))(&param_7);
  param_1[0x18] = (int)*psVar4;
  iVar3 = (**(code **)(*(int *)param_1[0x11] + 0x3c))(&param_7);
  param_1[0x19] = (int)*(short *)(iVar3 + 2);
  psVar4 = (short *)(**(code **)(*(int *)param_1[0x12] + 0x3c))(&param_7);
  param_1[0x16] = (int)*psVar4;
  iVar3 = (**(code **)(*(int *)param_1[0x12] + 0x3c))(&param_7);
  param_1[0x17] = (int)*(short *)(iVar3 + 2);
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("combat_view",0xb);
  local_8._0_1_ = 0x1a;
  (**(code **)(*(int *)param_1[0xc] + 0x78))(local_50);
  local_8._0_1_ = 0xd;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("combat_view",0xb);
  local_8._0_1_ = 0x1b;
  (**(code **)(*(int *)param_1[0xd] + 0x78))(local_50);
  local_8._0_1_ = 0xd;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("combat_view",0xb);
  local_8._0_1_ = 0x1c;
  (**(code **)(*(int *)param_1[0xe] + 0x78))(local_50);
  local_8._0_1_ = 0xd;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("combat_view",0xb);
  local_8._0_1_ = 0x1d;
  (**(code **)(*(int *)param_1[0xf] + 0x78))(local_50);
  local_8._0_1_ = 0xd;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("combat_view",0xb);
  local_8._0_1_ = 0x1e;
  (**(code **)(*(int *)param_1[0x10] + 0x78))(local_50);
  local_8._0_1_ = 0xd;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("combat_view",0xb);
  local_8._0_1_ = 0x1f;
  (**(code **)(*(int *)param_1[0x11] + 0x78))(local_50);
  local_8._0_1_ = 0xd;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("combat_view",0xb);
  local_8._0_1_ = 0x20;
  (**(code **)(*(int *)param_1[0x12] + 0x78))(local_50);
  local_8 = CONCAT31(local_8._1_3_,0xd);
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  FUN_0077d5b0();
  ExceptionList = local_10;
  return param_1;
}

