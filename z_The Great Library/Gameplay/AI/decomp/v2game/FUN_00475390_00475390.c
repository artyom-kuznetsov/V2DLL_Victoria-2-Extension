// FUN_00475390 @ 00475390 body=[[00475390, 004753a8] [004753ac, 004753c1]]


void FUN_00475390(void)

{
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0xc) != 0) {
    FUN_00475f00(*(undefined4 *)(unaff_ESI + 0x10));
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(unaff_ESI + 0xc));
  }
  *(undefined4 *)(unaff_ESI + 0xc) = 0;
  *(undefined4 *)(unaff_ESI + 0x10) = 0;
  *(undefined4 *)(unaff_ESI + 0x14) = 0;
  return;
}

