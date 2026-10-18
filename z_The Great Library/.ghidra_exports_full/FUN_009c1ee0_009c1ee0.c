// FUN_009c1ee0 @ 009c1ee0 body=[[009c1ee0, 009c1f97]]


undefined4 * FUN_009c1ee0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3bcee;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_FUN_00e3a564;
  param_1[1] = param_1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = FUN_009c2c70;
  param_1[9] = FUN_009c2cc0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  piVar1 = DAT_01258aa8;
  local_8 = 2;
  *(undefined2 *)(param_1 + 0x15) = 1;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  uVar2 = (**(code **)(*piVar1 + 0x28))(&DAT_00f0f70c);
  param_1[0xc] = uVar2;
  ExceptionList = local_10;
  return param_1;
}

