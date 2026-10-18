// FUN_004dad40 @ 004dad40 body=[[004dad40, 004dad9f]]


int FUN_004dad40(void)

{
  int iVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  if (DAT_0125ce80 == 0) {
    ExceptionList = &local_10;
    iVar1 = FUN_00aae9af(0x3c);
    local_8 = 0;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_004dada0();
    }
    FUN_004dc340(uVar2);
  }
  ExceptionList = local_10;
  return DAT_0125ce80;
}

