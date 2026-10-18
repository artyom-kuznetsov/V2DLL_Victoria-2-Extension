// FUN_0092ede0 @ 0092ede0  (requested 0092EDE0, first bytes: 55 8B EC 83 E4 F8 64 A1)


undefined4 FUN_0092ede0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b5856b;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_0131acac == 0) {
    ExceptionList = &local_14;
    iVar3 = FUN_00aae9af(0x20);
    local_c = 0;
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_0090cca0();
    }
    local_c = 0xffffffff;
    FUN_0090d9d0(uVar4);
  }
  iVar1 = DAT_0131acac;
  iVar3 = *(int *)(DAT_0131acac + 0xc);
  local_1c = 0;
  if (0 < (int)(*(int *)(DAT_0131acac + 0x10) - iVar3 & 0xfffffffcU)) {
    do {
      cVar2 = (**(code **)(**(int **)(iVar3 + local_1c * 4) + 0x1c))();
      if ((cVar2 != '\0') && (cVar2 = FUN_0092eec0(param_1,param_2,param_3), cVar2 != '\0')) {
        ExceptionList = local_14;
        return 1;
      }
      iVar3 = *(int *)(iVar1 + 0xc);
      local_1c = local_1c + 1;
    } while (local_1c < *(int *)(iVar1 + 0x10) - iVar3 >> 2);
  }
  ExceptionList = local_14;
  return 0;
}

