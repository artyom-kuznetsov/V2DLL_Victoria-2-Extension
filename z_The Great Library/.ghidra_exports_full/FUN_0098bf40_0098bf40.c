// FUN_0098bf40 @ 0098bf40 body=[[0098bf40, 0098bf83] [0098bf87, 0098bf98] [0098bf9c, 0098bfa3]]


void FUN_0098bf40(void)

{
  int iVar1;
  int iVar2;
  int unaff_ESI;
  
  iVar2 = *(int *)(unaff_ESI + 0x10);
  iVar1 = iVar2;
  while (iVar1 != 0) {
    if (iVar2 != 0) {
      iVar2 = iVar2 + -1;
      *(int *)(unaff_ESI + 0x10) = iVar2;
      if (iVar2 == 0) {
        *(undefined4 *)(unaff_ESI + 0xc) = 0;
      }
    }
    iVar1 = *(int *)(unaff_ESI + 0x10);
  }
  iVar2 = *(int *)(unaff_ESI + 8);
  while (iVar2 != 0) {
    iVar2 = iVar2 + -1;
    if (*(int *)(*(int *)(unaff_ESI + 4) + iVar2 * 4) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*(undefined4 *)(*(int *)(unaff_ESI + 4) + iVar2 * 4));
    }
  }
  if (*(int *)(unaff_ESI + 4) == 0) {
    *(undefined4 *)(unaff_ESI + 4) = 0;
    *(undefined4 *)(unaff_ESI + 8) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*(int *)(unaff_ESI + 4));
}

