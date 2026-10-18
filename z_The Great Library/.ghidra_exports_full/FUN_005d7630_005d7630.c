// FUN_005d7630 @ 005d7630 body=[[005d7630, 005d763c] [005d7640, 005d7648] [005d7653, 005d7677]]


void FUN_005d7630(void)

{
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 0x1a4) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(unaff_EDI + 0x1a4));
  }
  *(undefined4 *)(unaff_EDI + 0x1a4) = 0;
  *(undefined4 *)(unaff_EDI + 0x1a8) = 0;
  *(undefined4 *)(unaff_EDI + 0x1ac) = 0;
  FUN_005c61b0();
  return;
}

