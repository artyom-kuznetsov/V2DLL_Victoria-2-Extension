// FUN_008a4900 @ 008a4900 body=[[008a4900, 008a49d7]]


undefined4 FUN_008a4900(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9a5b6;
  local_10 = ExceptionList;
  if (*(int *)(param_1 + 0x24) != 0) {
    if (DAT_0125ce80 == 0) {
      ExceptionList = &local_10;
      iVar1 = FUN_00aae9af(0x3c);
      local_8 = 1;
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_004dada0();
      }
      FUN_004dc340(uVar2);
    }
    ExceptionList = local_10;
    return *(undefined4 *)(DAT_0125ce80 + 0x38);
  }
  if (DAT_0125ce80 == 0) {
    ExceptionList = &local_10;
    iVar1 = FUN_00aae9af(0x3c);
    local_8 = 0;
    if (iVar1 != 0) {
      uVar2 = FUN_004dada0();
      FUN_004dc340(uVar2);
      ExceptionList = local_10;
      return *(undefined4 *)(DAT_0125ce80 + 0x34);
    }
    FUN_004dc340(0);
  }
  ExceptionList = local_10;
  return *(undefined4 *)(DAT_0125ce80 + 0x34);
}

