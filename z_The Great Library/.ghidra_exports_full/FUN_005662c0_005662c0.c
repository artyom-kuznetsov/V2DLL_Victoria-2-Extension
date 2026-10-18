// FUN_005662c0 @ 005662c0 body=[[005662c0, 0056631f]]


int FUN_005662c0(void)

{
  int iVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  if (DAT_0125ea24 == 0) {
    ExceptionList = &local_10;
    iVar1 = FUN_00aae9af(0x40);
    local_8 = 0;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_00566260();
    }
    FUN_00567740(uVar2);
  }
  ExceptionList = local_10;
  return DAT_0125ea24;
}

