// FUN_005674a0 @ 005674a0 body=[[005674a0, 005674ae] [005674b2, 005674d0] [005674d4, 005674e2]]


void FUN_005674a0(void)

{
  int unaff_ESI;
  
  if (0xf < *(uint *)(unaff_ESI + 0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(unaff_ESI + 0x2c));
  }
  *(undefined4 *)(unaff_ESI + 0x40) = 0xf;
  *(undefined4 *)(unaff_ESI + 0x3c) = 0;
  *(undefined1 *)(unaff_ESI + 0x2c) = 0;
  if (0xf < *(uint *)(unaff_ESI + 0x24)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(unaff_ESI + 0x10));
  }
  *(undefined4 *)(unaff_ESI + 0x20) = 0;
  *(undefined4 *)(unaff_ESI + 0x24) = 0xf;
  *(undefined1 *)(unaff_ESI + 0x10) = 0;
  return;
}

