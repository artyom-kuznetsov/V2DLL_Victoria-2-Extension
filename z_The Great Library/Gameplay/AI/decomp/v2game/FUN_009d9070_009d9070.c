// FUN_009d9070 @ 009d9070 body=[[009d9070, 009d912b]]


undefined4 * FUN_009d9070(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4f090;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_009f8e80();
  uVar1 = DAT_00f092fc;
  local_8 = 0;
  *param_1 = &PTR_FUN_00e38350;
  param_1[0x3e] = uVar1;
  param_1[0x41] = param_2;
  param_1[0x47] = 0xf;
  param_1[0x46] = 0;
  *(undefined1 *)(param_1 + 0x42) = 0;
  FUN_00409350(&DAT_00ded94d,0);
  *(undefined1 *)(param_1 + 0x49) = 1;
  *(undefined4 *)((int)param_1 + 0x126) = 0;
  local_8 = 1;
  *param_1 = &PTR_FUN_00e3aa78;
  param_1[0x51] = 0xf;
  param_1[0x50] = 0;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  FUN_00409350(&DAT_00ded94d,0);
  ExceptionList = local_10;
  return param_1;
}

