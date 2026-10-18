// FUN_0090cc40 @ 0090cc40 body=[[0090cc40, 0090cc9f]]


int FUN_0090cc40(void)

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
  ExceptionList = local_10;
  return DAT_0131acac;
}

