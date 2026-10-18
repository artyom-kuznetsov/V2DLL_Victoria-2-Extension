// FUN_0091c920 @ 0091c920 body=[[0091c920, 0091c964]]


void FUN_0091c920(void)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(DAT_012588e8 + 0xcf8) + 8);
  if (iVar2 != 0) {
    piVar1 = (int *)(iVar2 + 0x10);
    *piVar1 = *piVar1 + *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x4f8);
    if (*piVar1 < 0) {
      *(undefined4 *)(iVar2 + 0x10) = 0;
      return;
    }
    if (100000 < *(int *)(iVar2 + 0x10)) {
      *(undefined4 *)(iVar2 + 0x10) = 100000;
    }
  }
  return;
}

