// FUN_00a44ac0 @ 00a44ac0 body=[[00a44ac0, 00a44b76]]


undefined4 * FUN_00a44ac0(undefined4 *param_1,undefined4 param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b48988;
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
  *param_1 = &PTR_FUN_00e40f98;
  param_1[0x23] = param_2;
  param_1[0x24] = 0x3c23d70a;
  FUN_009dcb10(param_1 + 0x25);
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = DAT_00f092fc;
  ExceptionList = local_10;
  return param_1;
}

