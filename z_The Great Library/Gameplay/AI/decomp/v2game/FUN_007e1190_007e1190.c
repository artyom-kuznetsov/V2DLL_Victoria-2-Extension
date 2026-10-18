// FUN_007e1190 @ 007e1190 body=[[007e1190, 007e120b]]


void FUN_007e1190(void)

{
  int *piVar1;
  int unaff_ESI;
  int iVar2;
  
  iVar2 = 1;
  if (1 < (*(int *)(unaff_ESI + 0x6bd84) - *(int *)(unaff_ESI + 0x6bd80)) / 0x1c) {
    do {
      if (*(int *)(*(int *)(unaff_ESI + 0x6bd90) + iVar2 * 4) != 0) {
        piVar1 = *(int **)(*(int *)(unaff_ESI + 0x6bd90) + iVar2 * 4);
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      *(undefined4 *)(*(int *)(unaff_ESI + 0x6bd90) + iVar2 * 4) = 0;
      iVar2 = iVar2 + 1;
    } while (iVar2 < (*(int *)(unaff_ESI + 0x6bd84) - *(int *)(unaff_ESI + 0x6bd80)) / 0x1c);
  }
  return;
}

