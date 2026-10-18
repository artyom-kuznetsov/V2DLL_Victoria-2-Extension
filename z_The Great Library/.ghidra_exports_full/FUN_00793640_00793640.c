// FUN_00793640 @ 00793640 body=[[00793640, 0079372c] [00793730, 007937c3] [007937c7, 007937d4] [007937d8, 007937ec]]


undefined4 * FUN_00793640(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *in_ECX;
  uint in_stack_00000020;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4b557;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  local_14 = (**(code **)(*in_ECX + 0x3c))();
  piVar1 = (int *)(**(code **)(*in_ECX + 0x34))();
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
  uVar2 = (**(code **)(*piVar1 + 0x2c))(&param_3,local_14);
  param_1[8] = uVar2;
  local_8._0_1_ = 5;
  *param_1 = CReorgEntry::vftable;
  param_1[7] = CReorgEntry::vftable;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350(&DAT_00ded94d,0);
  local_8._0_1_ = 6;
  param_1[10] = 0;
  param_1[0xb] = DAT_01268fec;
  param_1[0xc] = DAT_01268ff0;
  param_1[0x12] = 0xf;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  FUN_00408ed0(local_34,0,0xffffffff);
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  local_8._0_1_ = 7;
  FUN_0079de40(param_1 + 0x14,param_2);
  FUN_0079e110(0,0,0,0,0,0,0,0,0,0,0,0,FUN_00794350,0,0,0,0,0);
  local_8._0_1_ = 9;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350("transferbutton",0xe);
  local_8 = CONCAT31(local_8._1_3_,10);
  iVar3 = (**(code **)(*(int *)param_1[8] + 0x34))(local_34);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(param_1 + 0x1e);
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  if (0xf < in_stack_00000020) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_3);
  }
  ExceptionList = local_10;
  return param_1;
}

