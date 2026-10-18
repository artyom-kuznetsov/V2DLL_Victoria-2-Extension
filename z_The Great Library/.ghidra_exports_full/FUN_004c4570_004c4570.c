// FUN_004c4570 @ 004c4570 body=[[004c4570, 004c45e3]]


int FUN_004c4570(int param_1)

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
  return *(int *)(*(int *)(DAT_0125ce80 + 0x30) + 0x58) * 0x10 + *(int *)(param_1 + 0x330);
}

