// FUN_005996d0 @ 005996d0 body=[[005996d0, 005996e8] [005996f2, 00599718] [00599722, 0059973c]]


void FUN_005996d0(void)

{
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 0x17c) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(unaff_EDI + 0x17c));
  }
  *(undefined4 *)(unaff_EDI + 0x17c) = 0;
  *(undefined4 *)(unaff_EDI + 0x180) = 0;
  *(undefined4 *)(unaff_EDI + 0x184) = 0;
  if (*(int *)(unaff_EDI + 0x16c) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(unaff_EDI + 0x16c));
  }
  *(undefined4 *)(unaff_EDI + 0x16c) = 0;
  *(undefined4 *)(unaff_EDI + 0x170) = 0;
  *(undefined4 *)(unaff_EDI + 0x174) = 0;
  FUN_00593ad0();
  return;
}

