// FUN_008cf460 @ 008cf460 body=[[008cf460, 008cf571]]


undefined4 FUN_008cf460(int param_1)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = *(int *)(in_ECX + 0x1c);
  if (*(char *)(in_ECX + 0x18) == '\0') {
    if (*(char *)(in_ECX + 0x19) == '\0') goto LAB_008cf4be;
    iVar2 = *(int *)(param_1 + 0x30);
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1 + 0x24) + 0xc);
  }
  iVar2 = *(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                           *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + iVar2 * 4) + 0xbe4) * 4) +
                  0x16c);
LAB_008cf4be:
  if (*(int *)(param_1 + 0x10) == 0) {
    if (*(int *)(param_1 + 0x18) == 0) {
      if (*(int *)(param_1 + 0xc) == 0) {
        cVar1 = (**(code **)(**(int **)(param_1 + 0x14) + 0x20))();
        if ((cVar1 != '\0') && (*(int *)(*(int *)(*(int *)(param_1 + 0x14) + 100) + 0x16c) == iVar2)
           ) {
          return 1;
        }
      }
      else if (*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                                *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                                 *(int *)(param_1 + 0xc) * 4) + 0xbe4) * 4) + 0x16c)
               == iVar2) {
        return 1;
      }
    }
    else if (*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x18) * 4) +
                     0x16c) == iVar2) {
      return 1;
    }
  }
  else if (*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x10) * 4) + 0x16c)
           == iVar2) {
    return 1;
  }
  return 0;
}

