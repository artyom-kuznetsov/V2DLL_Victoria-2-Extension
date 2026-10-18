// FUN_00a555b0 @ 00a555b0 body=[[00a555b0, 00a55728]]


undefined4 * FUN_00a555b0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b48741;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  param_1[6] = 0;
  param_1[7] = 0xf;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[9] = 0;
  param_1[0xf] = 0xf;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  local_8 = 0;
  *param_1 = &PTR_FUN_00e41c28;
  param_1[0x16] = param_2;
  param_1[0x1c] = 0xf;
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  FUN_00409350(&DAT_00ded94d,0);
  uVar1 = DAT_00f092fc;
  local_8._0_1_ = 1;
  param_1[0x20] = DAT_00f092fc;
  param_1[0x21] = uVar1;
  param_1[0x22] = uVar1;
  param_1[0x23] = uVar1;
  *(undefined1 *)(param_1 + 0x24) = 1;
  param_1[0x1f] = 0x18d;
  param_1[0x1e] = CColor::vftable;
  param_1[0x26] = 0x18d;
  param_1[0x25] = CColor::vftable;
  param_1[0x27] = uVar1;
  param_1[0x28] = uVar1;
  param_1[0x29] = uVar1;
  param_1[0x2a] = uVar1;
  *(undefined1 *)(param_1 + 0x2b) = 1;
  param_1[0x31] = 0xf;
  param_1[0x30] = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  FUN_00409350(&DAT_00ded94d,0);
  local_8 = CONCAT31(local_8._1_3_,2);
  param_1[0x38] = 0xf;
  param_1[0x37] = 0;
  *(undefined1 *)(param_1 + 0x33) = 0;
  FUN_00409350(&DAT_00ded94d,0);
  uVar1 = DAT_00f092fc;
  param_1[0x3a] = 0xffffffff;
  param_1[0x3b] = 0xffffffff;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  *(undefined1 *)(param_1 + 0x48) = 1;
  *(undefined1 *)(param_1 + 0x5d) = 0;
  param_1[0x5f] = uVar1;
  param_1[0x5e] = uVar1;
  ExceptionList = local_10;
  return param_1;
}

