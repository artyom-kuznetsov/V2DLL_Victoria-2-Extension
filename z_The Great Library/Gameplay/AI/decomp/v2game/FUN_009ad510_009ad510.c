// FUN_009ad510 @ 009ad510 body=[[009ad510, 009ad56c]]


int FUN_009ad510(void)

{
  int iVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  if (DAT_0131c99c == 0) {
    ExceptionList = &local_10;
    iVar1 = FUN_00aae9af(0x54);
    local_8 = 0;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_009acd20(iVar1);
    }
    FUN_009ada90(uVar2);
  }
  ExceptionList = local_10;
  return DAT_0131c99c;
}

