// FUN_009eca80 @ 009eca80 body=[[009eca80, 009ecb5a]]


undefined4 * FUN_009eca80(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 in_ECX;
  undefined4 in_EDX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4c718;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  param_1[6] = 0;
  param_1[7] = 0xf;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[0xe] = 0xf;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[0x15] = 0xf;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  local_8 = 0;
  param_1[0x19] = in_ECX;
  *param_1 = &PTR_FUN_00e3cacc;
  param_1[0x1a] = in_EDX;
  param_1[0x20] = 0xf;
  param_1[0x1f] = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  FUN_00409350(&DAT_00ded94d,0);
  uVar1 = DAT_00f092fc;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined1 *)(param_1 + 0x27) = 1;
  param_1[0x2a] = 1;
  param_1[0x29] = 0;
  param_1[0x28] = uVar1;
  param_1[0x2b] = 0;
  ExceptionList = local_10;
  return param_1;
}

