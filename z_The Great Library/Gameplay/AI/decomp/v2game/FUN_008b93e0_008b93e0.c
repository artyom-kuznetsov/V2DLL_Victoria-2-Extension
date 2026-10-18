// FUN_008b93e0 @ 008b93e0 body=[[008b93e0, 008b9464]]


undefined4 * FUN_008b93e0(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b42408;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined2 *)(param_1 + 6) = 0;
  local_8 = 0;
  *param_1 = CContextTrigger::vftable;
  iVar1 = FUN_00aae9af(0x110);
  if (iVar1 != 0) {
    uVar2 = FUN_008a8e70(iVar1);
    param_1[7] = uVar2;
    ExceptionList = local_10;
    return param_1;
  }
  param_1[7] = 0;
  ExceptionList = local_10;
  return param_1;
}

