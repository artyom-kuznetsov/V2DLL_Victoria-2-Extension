// FUN_0092eff0 @ 0092eff0 body=[[0092eff0, 0092f074]]


bool FUN_0092eff0(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EDI;
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
  if (unaff_EDI < *(int *)(DAT_0131acac + 0x10) - *(int *)(DAT_0131acac + 0xc) >> 2) {
    iVar1 = *(int *)(*(int *)(DAT_0131acac + 0xc) + unaff_EDI * 4);
  }
  else {
    iVar1 = **(int **)(DAT_0131acac + 0xc);
  }
  ExceptionList = local_10;
  return *(char *)(iVar1 + 0x132) != '\0';
}

