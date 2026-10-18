// FUN_00a2fb10 @ 00a2fb10 body=[[00a2fb10, 00a2fc5e]]


undefined4 * FUN_00a2fb10(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b48d34;
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
  *param_1 = &PTR_FUN_00e40140;
  param_1[0x23] = param_2;
  param_1[0x24] = 0;
  param_1[0x25] = 0xffffffff;
  param_1[0x26] = uVar1;
  param_1[0x2c] = 0xf;
  param_1[0x2b] = 0;
  *(undefined1 *)(param_1 + 0x27) = 0;
  local_8 = 1;
  uStack_7 = 0;
  param_1[0x33] = 0xf;
  param_1[0x32] = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  FUN_00409350("Billboard",9);
  _local_8 = CONCAT31(uStack_7,2);
  param_1[0x3a] = 0xf;
  param_1[0x39] = 0;
  *(undefined1 *)(param_1 + 0x35) = 0;
  FUN_00409350("gfx/FX/billboard.fx",0x13);
  uVar1 = DAT_00f092fc;
  param_1[0x3f] = 0;
  param_1[0x3c] = 1;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x40] = 0xffffffff;
  param_1[0x41] = uVar1;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x4a] = 0xf;
  param_1[0x49] = 0;
  *(undefined1 *)(param_1 + 0x45) = 0;
  param_1[0x4c] = 0;
  ExceptionList = local_10;
  return param_1;
}

