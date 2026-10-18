// FUN_00a3ab70 @ 00a3ab70 body=[[00a3ab70, 00a3abe7]]


undefined1 * FUN_00a3ab70(undefined1 *param_1)

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
  ExceptionList = local_10;
  return param_1;
}

