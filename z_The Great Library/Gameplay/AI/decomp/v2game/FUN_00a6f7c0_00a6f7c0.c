// FUN_00a6f7c0 @ 00a6f7c0 body=[[00a6f7c0, 00a6f7cf] [00a6f7d3, 00a6f7ed]]


void FUN_00a6f7c0(void)

{
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0x38) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(unaff_ESI + 0x38));
  }
  *(undefined4 *)(unaff_ESI + 0x38) = 0;
  *(undefined4 *)(unaff_ESI + 0x3c) = 0;
  *(undefined4 *)(unaff_ESI + 0x40) = 0;
  FUN_00a6fd60((undefined4 *)(unaff_ESI + 0x2c));
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*(undefined4 *)(unaff_ESI + 0x2c));
}

