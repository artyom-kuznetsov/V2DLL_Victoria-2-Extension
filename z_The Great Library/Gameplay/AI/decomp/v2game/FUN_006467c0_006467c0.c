// FUN_006467c0 @ 006467c0 body=[[006467c0, 006467ce] [006467d2, 006467f0] [006467f4, 0064680f] [00646813, 00646821]]


void FUN_006467c0(void)

{
  int unaff_ESI;
  
  if (0xf < *(uint *)(unaff_ESI + 0x54)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(unaff_ESI + 0x40));
  }
  *(undefined4 *)(unaff_ESI + 0x54) = 0xf;
  *(undefined4 *)(unaff_ESI + 0x50) = 0;
  *(undefined1 *)(unaff_ESI + 0x40) = 0;
  if (0xf < *(uint *)(unaff_ESI + 0x38)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(unaff_ESI + 0x24));
  }
  *(undefined4 *)(unaff_ESI + 0x38) = 0xf;
  *(undefined4 *)(unaff_ESI + 0x34) = 0;
  *(undefined1 *)(unaff_ESI + 0x24) = 0;
  if (0xf < *(uint *)(unaff_ESI + 0x1c)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(unaff_ESI + 8));
  }
  *(undefined4 *)(unaff_ESI + 0x18) = 0;
  *(undefined4 *)(unaff_ESI + 0x1c) = 0xf;
  *(undefined1 *)(unaff_ESI + 8) = 0;
  return;
}

