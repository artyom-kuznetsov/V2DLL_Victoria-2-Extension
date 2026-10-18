// FUN_0072efe0 @ 0072efe0 body=[[0072efe0, 0072f00a]]


void FUN_0072efe0(void)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_012588e8 + 0xb28) + -1;
  if (4 < iVar1) {
    *(undefined4 *)(DAT_012588e8 + 0xb28) = 4;
    return;
  }
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  *(int *)(DAT_012588e8 + 0xb28) = iVar1;
  return;
}

