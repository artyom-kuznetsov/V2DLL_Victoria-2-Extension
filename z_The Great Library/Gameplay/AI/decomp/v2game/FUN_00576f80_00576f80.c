// FUN_00576f80 @ 00576f80 body=[[00576f80, 00576fdf]]


int FUN_00576f80(void)

{
  int iVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  if (DAT_0125eadc == 0) {
    ExceptionList = &local_10;
    iVar1 = FUN_00aae9af(0x9c);
    local_8 = 0;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_00576fe0(iVar1);
    }
    FUN_0057ab10(uVar2);
  }
  ExceptionList = local_10;
  return DAT_0125eadc;
}

