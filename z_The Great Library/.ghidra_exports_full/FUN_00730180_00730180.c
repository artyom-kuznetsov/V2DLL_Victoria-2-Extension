// FUN_00730180 @ 00730180 body=[[00730180, 0073022e] [00730232, 00730285]]


undefined4 *
FUN_00730180(undefined4 *param_1,undefined4 param_2,undefined *param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int *in_ECX;
  undefined *puStack_4c;
  uint uStack_48;
  uint *puStack_44;
  undefined4 uStack_40;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b443d1;
  local_10 = ExceptionList;
  uStack_40 = 0x13;
  puStack_44 = (uint *)0xe12568;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  uStack_48 = 0x7301c1;
  ExceptionList = &local_10;
  FUN_00409350();
  local_8 = 0;
  uStack_40 = 0x7301cd;
  local_14 = (undefined1 *)(**(code **)(*in_ECX + 0x3c))();
  uStack_40 = 0x7301d9;
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
  uStack_40 = local_14;
  *param_1 = &PTR_FUN_00e392f0;
  param_1[7] = &PTR_FUN_00e39320;
  *(undefined1 *)(param_1 + 9) = 0;
  puStack_44 = local_30;
  uStack_48 = 0x73021d;
  uVar2 = (**(code **)(*piVar1 + 0x2c))();
  param_1[8] = uVar2;
  if (0xf < local_1c) {
    uStack_48 = local_30[0];
                    /* WARNING: Subroutine does not return */
    puStack_4c = &UNK_0073022f;
    FUN_00aae91b();
  }
  *param_1 = CUnitBuildResourceItem::vftable;
  param_1[7] = CUnitBuildResourceItem::vftable;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0x11] = 0xf;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  local_8 = CONCAT31(local_8._1_3_,7);
  local_14 = (undefined1 *)&puStack_4c;
  puStack_4c = param_3;
  uStack_48 = param_4;
  FUN_00730290();
  ExceptionList = local_10;
  return param_1;
}

