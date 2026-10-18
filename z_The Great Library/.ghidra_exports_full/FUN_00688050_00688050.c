// FUN_00688050 @ 00688050 body=[[00688050, 006880d1]]


void FUN_00688050(void)

{
  int unaff_ESI;
  int iVar1;
  
  iVar1 = 0;
  if (0 < (int)(*(int *)(unaff_ESI + 0xae0) - *(int *)(unaff_ESI + 0xadc) & 0xfffffffcU)) {
    do {
      FUN_00515490(*(undefined4 *)(*(int *)(unaff_ESI + 0xadc) + iVar1 * 4));
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(unaff_ESI + 0xae0) - *(int *)(unaff_ESI + 0xadc) >> 2);
  }
  FUN_0068c040(unaff_ESI);
  if (*(int **)(unaff_ESI + 0xb24) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)(unaff_ESI + 0xb24) + 0x38))();
    *(undefined1 *)(*(int *)(iVar1 + 0x3648) + 0x3d) = 1;
    iVar1 = (**(code **)(**(int **)(unaff_ESI + 0xb24) + 0x38))();
    FUN_0081a450(*(undefined4 *)(iVar1 + 0x3648));
  }
  return;
}

