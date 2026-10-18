// FUN_0072a690 @ 0072a690 body=[[0072a690, 0072a716]]


void FUN_0072a690(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = DAT_012588e8;
  iVar2 = *(int *)(DAT_012588e8 + 0xadc);
  iVar3 = 0;
  if (0 < (int)(*(int *)(DAT_012588e8 + 0xae0) - iVar2 & 0xfffffffcU)) {
    do {
      iVar2 = *(int *)(iVar2 + iVar3 * 4);
      FUN_0068b6c0(0,*(undefined4 *)(iVar2 + 0x1c),*(undefined4 *)(iVar2 + 0x20));
      iVar2 = *(int *)(iVar1 + 0xadc);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(iVar1 + 0xae0) - iVar2 >> 2);
  }
  for (iVar2 = *(int *)(DAT_012588e8 + 0x18); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x3c)) {
    *(undefined4 *)(iVar2 + 0x20) = 0x2d2d2d;
    *(undefined4 *)(iVar2 + 0x24) = 0;
  }
  return;
}

