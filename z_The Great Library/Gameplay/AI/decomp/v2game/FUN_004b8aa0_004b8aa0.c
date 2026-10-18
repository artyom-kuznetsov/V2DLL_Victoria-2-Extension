// FUN_004b8aa0 @ 004b8aa0 body=[[004b8aa0, 004b8ab6] [004b8ac0, 004b8ad9] [004b8ae0, 004b8af3]]


void FUN_004b8aa0(void)

{
  int iVar1;
  int iVar2;
  int in_EDX;
  
  iVar1 = *(int *)(in_EDX + 0x178);
  iVar2 = 0;
  if (DAT_00f092fb == '\0') {
    if (0 < iVar1) {
      do {
        *(undefined4 *)(*(int *)(in_EDX + 0x174) + iVar2 * 4) = 2;
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar1);
    }
  }
  else if (0 < iVar1) {
    do {
      *(undefined4 *)(*(int *)(in_EDX + 0x174) + iVar2 * 4) = 0;
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
    return;
  }
  return;
}

