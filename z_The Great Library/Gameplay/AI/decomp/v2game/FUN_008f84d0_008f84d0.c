// FUN_008f84d0 @ 008f84d0 body=[[008f84d0, 008f8767]]


bool FUN_008f84d0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  
  if (*(char *)(in_ECX + 0x18) == '\0') {
    cVar1 = (**(code **)(**(int **)(param_1 + 0x14) + 0x20))();
    if (cVar1 != '\0') {
      return (*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                               *(int *)(*(int *)(*(int *)(param_1 + 0x14) + 100) + 300) * 4) + 0xe64
                      ) == *(int *)(*(int *)(param_1 + 0x14) + 0x6c)) ==
             (bool)*(char *)(in_ECX + 0x1c);
    }
    if (*(int *)(param_1 + 0x18) == 0) {
      if (*(int *)(param_1 + 0x10) == 0) {
        return false;
      }
      iVar3 = *(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x10) * 4) + 300
                      );
    }
    else {
      iVar3 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                                        *(int *)(param_1 + 0x18) * 4) + 0x188) + 0x5c);
    }
    iVar3 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + iVar3 * 4) + 0xe64);
    iVar2 = FUN_009692c0();
    return (iVar2 == iVar3) == (bool)*(char *)(in_ECX + 0x1c);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    if (*(int *)(param_1 + 0x18) == 0) {
      if (*(int *)(param_1 + 0x10) == 0) {
        cVar1 = (**(code **)(**(int **)(param_1 + 0x14) + 0x20))();
        if (cVar1 == '\0') {
          return false;
        }
        iVar3 = FUN_008a8dc0();
        return (*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar3 + 4) * 4) + 0xe64) ==
               *(int *)(*(int *)(param_1 + 0x14) + 0x6c)) == (bool)*(char *)(in_ECX + 0x1c);
      }
      iVar3 = FUN_008a8dc0();
      iVar3 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar3 + 4) * 4) + 0xe64);
    }
    else {
      iVar3 = FUN_008a8dc0();
      iVar3 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar3 + 4) * 4) + 0xe64);
    }
    iVar2 = FUN_009692c0();
    return (iVar2 == iVar3) == (bool)*(char *)(in_ECX + 0x1c);
  }
  cVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x24) + 0x14) + 0x20))();
  if (cVar1 == '\0') {
    iVar3 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4) + 0xe64);
    iVar2 = FUN_008a8dc0();
    return iVar3 == *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar2 + 4) * 4) + 0xe64)
    ;
  }
  return *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4) + 0xe64) ==
         *(int *)(*(int *)(*(int *)(param_1 + 0x24) + 0x14) + 0x6c);
}

