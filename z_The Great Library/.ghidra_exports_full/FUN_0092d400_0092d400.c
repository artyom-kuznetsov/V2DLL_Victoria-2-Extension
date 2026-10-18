// FUN_0092d400 @ 0092d400 body=[[0092d400, 0092d48f]]


undefined4 FUN_0092d400(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  if (DAT_0131acac == 0) {
    ExceptionList = &local_10;
    iVar1 = FUN_00aae9af(0x20);
    local_8 = 0;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_0090cca0();
    }
    FUN_0090d9d0(uVar2);
  }
  if (*(int *)(param_1 + 0x24) < *(int *)(DAT_0131acac + 0x10) - *(int *)(DAT_0131acac + 0xc) >> 2)
  {
    ExceptionList = local_10;
    return *(undefined4 *)(*(int *)(DAT_0131acac + 0xc) + *(int *)(param_1 + 0x24) * 4);
  }
  ExceptionList = local_10;
  return **(undefined4 **)(DAT_0131acac + 0xc);
}

