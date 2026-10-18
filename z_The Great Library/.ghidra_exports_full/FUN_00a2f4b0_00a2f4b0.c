// FUN_00a2f4b0 @ 00a2f4b0 body=[[00a2f4b0, 00a2f618]]


undefined4 * FUN_00a2f4b0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b48d64;
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
  uVar1 = DAT_00f092fc;
  *param_1 = &PTR_FUN_00e40088;
  param_1[0x24] = uVar1;
  param_1[0x2a] = 0xf;
  param_1[0x29] = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  local_8 = 1;
  uStack_7 = 0;
  param_1[0x2c] = 0xffffffff;
  param_1[0x2e] = 0x18d;
  param_1[0x2f] = uVar1;
  param_1[0x30] = uVar1;
  param_1[0x31] = uVar1;
  param_1[0x32] = uVar1;
  *(undefined1 *)(param_1 + 0x33) = 1;
  param_1[0x2d] = CColor::vftable;
  *(undefined1 *)(param_1 + 0x3a) = 1;
  param_1[0x35] = 0x18d;
  param_1[0x36] = uVar1;
  param_1[0x37] = uVar1;
  param_1[0x38] = uVar1;
  param_1[0x39] = uVar1;
  uVar1 = DAT_00f141cc;
  param_1[0x34] = CColor::vftable;
  param_1[0x3b] = param_2;
  param_1[0x3f] = uVar1;
  param_1[0x45] = 0xf;
  param_1[0x44] = 0;
  *(undefined1 *)(param_1 + 0x40) = 0;
  FUN_00409350(&DAT_00ded94d,0);
  _local_8 = CONCAT31(uStack_7,2);
  param_1[0x47] = 0xffffffff;
  param_1[0x4d] = 0xf;
  param_1[0x4c] = 0;
  *(undefined1 *)(param_1 + 0x48) = 0;
  FUN_00409350(&DAT_00ded94d,0);
  param_1[0x50] = 0xffffffff;
  ExceptionList = local_10;
  return param_1;
}

