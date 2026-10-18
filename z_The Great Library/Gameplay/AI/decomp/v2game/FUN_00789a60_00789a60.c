// FUN_00789a60 @ 00789a60 body=[[00789a60, 00789b1c] [00789b20, 00789bb3] [00789bb7, 00789c0f] [00789c13, 00789c6a] [00789c6e, 00789cb0] [00789cb4, 00789cf6] [00789cfa, 00789d3c] [00789d40, 00789d82] [00789d86, 00789dc8] [00789dcc, 00789e0e] [00789e12, 00789e53] [00789e57, 00789e99] [00789e9d, 00789edf] [00789ee3, 00789f21] [00789f25, 00789f39]]


undefined4 * FUN_00789a60(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
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
  puStack_c = &LAB_00bbaa06;
  local_10 = ExceptionList;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("subunit_entry",0xd);
  local_8 = 0;
  local_14 = (**(code **)(*param_2 + 0x3c))();
  piVar1 = (int *)(**(code **)(*param_2 + 0x34))();
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
  uVar2 = (**(code **)(*piVar1 + 0x2c))(local_34,local_14);
  param_1[8] = uVar2;
  *param_1 = CUnitViewBaseEntry::vftable;
  param_1[7] = CUnitViewBaseEntry::vftable;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  *param_1 = CSubUnitEntry::vftable;
  param_1[7] = CSubUnitEntry::vftable;
  FUN_0079ddc0(0,0,0,0,0,0,0,0,0,0,0,0,&LAB_0078a450,0,0,0,0,0);
  local_8._0_1_ = 7;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350(&DAT_00ded94d,0);
  local_8._0_1_ = 8;
  param_1[0x1e] = 0;
  param_1[0x1f] = DAT_01268fec;
  param_1[0x20] = DAT_01268ff0;
  param_1[0x26] = 0xf;
  param_1[0x25] = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  FUN_00408ed0(local_34,0,0xffffffff);
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  local_8._0_1_ = 9;
  param_1[0x28] = param_2;
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("connected_pop",0xd);
  local_8._0_1_ = 10;
  uVar2 = (**(code **)(*(int *)param_1[8] + 0x34))(local_50);
  local_8._0_1_ = 9;
  param_1[0x29] = uVar2;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  (**(code **)(*(int *)(param_1[0x29] + 0x54) + 4))(param_1 + 10);
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("sunit_icon",10);
  local_8._0_1_ = 0xb;
  uVar2 = (**(code **)(*(int *)param_1[8] + 0x44))(local_50);
  local_8._0_1_ = 9;
  param_1[0x2a] = uVar2;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("subunit_name",0xc);
  local_8._0_1_ = 0xc;
  uVar2 = (**(code **)(*(int *)param_1[8] + 0x3c))(local_50);
  local_8._0_1_ = 9;
  param_1[0x2b] = uVar2;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("subunit_amount",0xe);
  local_8._0_1_ = 0xd;
  uVar2 = (**(code **)(*(int *)param_1[8] + 0x3c))(local_50);
  local_8._0_1_ = 9;
  param_1[0x2c] = uVar2;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("subunit_amount_naval",0x14);
  local_8._0_1_ = 0xe;
  uVar2 = (**(code **)(*(int *)param_1[8] + 0x3c))(local_50);
  local_8._0_1_ = 9;
  param_1[0x2d] = uVar2;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("select",6);
  local_8._0_1_ = 0xf;
  uVar2 = (**(code **)(*(int *)param_1[8] + 0x44))(local_50);
  local_8._0_1_ = 9;
  param_1[0x2e] = uVar2;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("select_naval",0xc);
  local_8._0_1_ = 0x10;
  uVar2 = (**(code **)(*(int *)param_1[8] + 0x44))(local_50);
  local_8._0_1_ = 9;
  param_1[0x2f] = uVar2;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("subunit_type",0xc);
  local_8._0_1_ = 0x11;
  uVar2 = (**(code **)(*(int *)param_1[8] + 0x3c))(local_50);
  local_8._0_1_ = 9;
  param_1[0x30] = uVar2;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("unit_experience",0xf);
  local_8._0_1_ = 0x12;
  uVar2 = (**(code **)(*(int *)param_1[8] + 0x44))(local_50);
  local_8._0_1_ = 9;
  param_1[0x31] = uVar2;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("org_bar",7);
  local_8._0_1_ = 0x13;
  uVar2 = (**(code **)(*(int *)param_1[8] + 0x44))(local_50);
  local_8._0_1_ = 9;
  param_1[0x32] = uVar2;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("str_bar",7);
  local_8._0_1_ = 0x14;
  uVar2 = (**(code **)(*(int *)param_1[8] + 0x44))(local_50);
  local_8._0_1_ = 9;
  param_1[0x33] = uVar2;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("rebel_faction",0xd);
  local_8 = CONCAT31(local_8._1_3_,0x15);
  uVar2 = (**(code **)(*(int *)param_1[8] + 0x44))(local_50);
  param_1[0x34] = uVar2;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  ExceptionList = local_10;
  return param_1;
}

