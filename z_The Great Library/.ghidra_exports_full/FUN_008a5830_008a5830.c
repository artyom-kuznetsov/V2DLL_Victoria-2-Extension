// FUN_008a5830 @ 008a5830 body=[[008a5830, 008a589f]]


void FUN_008a5830(int *param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3c320;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  iVar1 = FUN_00810880();
  local_8 = 0;
  *param_1 = iVar1;
  param_1[1] = iVar1;
  param_1[2] = iVar1 + 0x50;
  FUN_004bfc70(iVar1,param_1);
  param_1[1] = iVar1 + 0x50;
  ExceptionList = local_10;
  return;
}

