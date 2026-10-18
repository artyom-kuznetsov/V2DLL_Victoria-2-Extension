// FUN_009a56d0 @ 009a56d0 body=[[009a56d0, 009a56f7] [009a5703, 009a570b]]


void FUN_009a56d0(void)

{
  int *piVar1;
  int iVar2;
  int unaff_ESI;
  
  piVar1 = *(int **)(unaff_ESI + 0x1c);
  iVar2 = *piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(*(int *)(unaff_ESI + 0x1c) + 4) = *(int *)(unaff_ESI + 0x1c);
  *(undefined4 *)(unaff_ESI + 0x20) = 0;
  if (iVar2 != *(int *)(unaff_ESI + 0x1c)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*(undefined4 *)(unaff_ESI + 0x1c));
}

