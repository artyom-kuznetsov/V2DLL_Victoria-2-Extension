// FUN_0072ee90 @ 0072ee90 body=[[0072ee90, 0072eeba]]


void FUN_0072ee90(void)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_012588e8 + 0xb28) + 1;
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

