// FUN_0087c9a0 @ 0087c9a0 body=[[0087c9a0, 0087ca27]]


undefined4 * FUN_0087c9a0(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b424d8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[1] = 0x18d;
  *(undefined2 *)(param_1 + 7) = 0;
  local_8 = 0;
  *param_1 = CContextEffect::vftable;
  iVar1 = FUN_00aae9af(0x110);
  if (iVar1 != 0) {
    uVar2 = FUN_008a8e70(iVar1);
    param_1[8] = uVar2;
    ExceptionList = local_10;
    return param_1;
  }
  param_1[8] = 0;
  ExceptionList = local_10;
  return param_1;
}

