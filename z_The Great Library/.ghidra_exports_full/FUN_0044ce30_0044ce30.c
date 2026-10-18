// FUN_0044ce30 @ 0044ce30 body=[[0044ce30, 0044ce92]]


int FUN_0044ce30(void)

{
  int iVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  if (DAT_0125a69c == 0) {
    ExceptionList = &local_10;
    iVar1 = FUN_00aae9af(0xc4);
    local_8 = 0;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_008b0060();
    }
    FUN_0044ec00(uVar2);
  }
  ExceptionList = local_10;
  return DAT_0125a69c;
}

