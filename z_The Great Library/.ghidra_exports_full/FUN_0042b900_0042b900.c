// FUN_0042b900 @ 0042b900 body=[[0042b900, 0042b977]]


undefined1 * FUN_0042b900(undefined1 *param_1,undefined4 param_2)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3e5b8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  FUN_00408ed0(in_ECX,0,0xffffffff);
  local_8 = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xf;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x1c] = 0;
  FUN_00408ed0(in_ECX + 0x1c,0,0xffffffff);
  *(undefined4 *)(param_1 + 0x38) = param_2;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  param_1[0x40] = 0;
  ExceptionList = local_10;
  return param_1;
}

