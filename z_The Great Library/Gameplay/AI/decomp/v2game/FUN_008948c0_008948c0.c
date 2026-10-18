// FUN_008948c0 @ 008948c0 body=[[008948c0, 00894992]]


void FUN_008948c0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
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
    local_8 = 0xffffffff;
    FUN_004dc340(uVar2);
  }
  iVar1 = *(int *)(DAT_0125ce80 + 0x34);
  if ((*(int *)(param_1 + 0x10) != 0) && (iVar1 != 0)) {
    if ((*(char *)(iVar1 + 0x131) == '\0') ||
       (iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                                          *(int *)(param_1 + 0x10) * 4) + 0x118) +
                        *(int *)(iVar1 + 0x134) * 4), iVar1 == 0)) {
      iVar1 = *(int *)(in_ECX + 0x20);
      if (iVar1 < 1) {
        ExceptionList = local_10;
        return;
      }
    }
    else {
      iVar1 = *(int *)(in_ECX + 0x20) + *(int *)(iVar1 + 0x20);
    }
    FUN_004b6120(iVar1,1);
  }
  ExceptionList = local_10;
  return;
}

