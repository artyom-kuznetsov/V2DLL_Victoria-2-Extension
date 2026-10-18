// FUN_009d7960 @ 009d7960 body=[[009d7960, 009d7a5d]]


undefined4 * FUN_009d7960(undefined4 *param_1)

{
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5db19;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  *param_1 = &PTR_FUN_00e3b82c;
  FUN_009b7e40(param_1 + 2);
  param_1[0x1a] = 0x18d;
  param_1[0x19] = &PTR_FUN_00e42c98;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  param_1[0x1b] = 1;
  *(undefined1 *)(param_1 + 0x28) = 0;
  param_1[0x2e] = 0xf;
  param_1[0x2d] = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  local_8 = 1;
  param_1[0x35] = 0xf;
  param_1[0x34] = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  FUN_00409350("settings.txt",0xc);
  uVar1 = DAT_00f14418;
  param_1[0x20] = DAT_00f14418;
  param_1[0x21] = uVar1;
  param_1[0x22] = uVar1;
  param_1[0x23] = 0x42480000;
  param_1[0x24] = 0x42480000;
  param_1[0x25] = 0x42480000;
  param_1[0x26] = 0x42480000;
  param_1[0x27] = 0x42480000;
  *(undefined1 *)((int)param_1 + 0xa1) = 1;
  ExceptionList = local_10;
  return param_1;
}

