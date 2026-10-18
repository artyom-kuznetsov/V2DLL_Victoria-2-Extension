// FUN_00640680 @ 00640680 body=[[00640680, 006407ca] [006407ce, 0064083a] [0064083e, 00640874]]


undefined4 * FUN_00640680(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int *in_ECX;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  int local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b952ae;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = CEU3Dialog::vftable;
  param_1[2] = in_ECX;
  param_1[3] = CButtonObserverGlue<CEU3Dialog>::vftable;
  param_1[4] = param_1;
  param_1[5] = &LAB_00640b20;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = CButtonObserverGlue<CEU3Dialog>::vftable;
  param_1[0xf] = param_1;
  param_1[0x10] = &LAB_00640b30;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  local_8 = 2;
  uStack_7 = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  local_14 = (**(code **)(*in_ECX + 0x3c))();
  iVar1 = (**(code **)(*in_ECX + 0x34))();
  local_18 = iVar1;
  (**(code **)(*(int *)(iVar1 + 0x34) + 4))(param_2);
  iVar1 = FUN_00640b90(*(undefined4 *)(iVar1 + 0x30),iVar1,local_14);
  FUN_006463e0(local_18 + 0x5c,*(undefined4 *)(local_18 + 0x5c));
  param_1[1] = iVar1;
  (**(code **)(*(int *)(iVar1 + 0x18) + 0x34))();
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350("AgreeButton",0xb);
  local_8 = 3;
  iVar1 = (**(code **)(*(int *)param_1[1] + 0x34))(local_34);
  local_8 = 2;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x54) + 4))(param_1 + 3);
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350("DeclineButton",0xd);
  local_8 = 4;
  iVar1 = (**(code **)(*(int *)param_1[1] + 0x34))(local_34);
  _local_8 = CONCAT31(uStack_7,2);
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x54) + 4))(param_1 + 0xe);
  }
  ExceptionList = local_10;
  return param_1;
}

