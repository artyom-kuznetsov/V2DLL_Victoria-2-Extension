// FUN_0092d200 @ 0092d200 body=[[0092d200, 0092d2ac]]


void FUN_0092d200(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
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
    local_8 = 0xffffffff;
    FUN_0090d9d0(uVar2);
  }
  FUN_009a0940(param_1);
  FUN_0099f770(param_1,0);
  FUN_0092c510(param_1);
  ExceptionList = local_10;
  return;
}

