// FUN_00955d40 @ 00955d40 body=[[00955d40, 00955d52] [00955d56, 00955d74] [00955d78, 00955d86]]


void FUN_00955d40(void)

{
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0xa0) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(unaff_ESI + 0xa0));
  }
  *(undefined4 *)(unaff_ESI + 0xa0) = 0;
  *(undefined4 *)(unaff_ESI + 0xa4) = 0;
  *(undefined4 *)(unaff_ESI + 0xa8) = 0;
  if (*(int *)(unaff_ESI + 0x48) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(unaff_ESI + 0x48));
  }
  *(undefined4 *)(unaff_ESI + 0x48) = 0;
  *(undefined4 *)(unaff_ESI + 0x4c) = 0;
  *(undefined4 *)(unaff_ESI + 0x50) = 0;
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

