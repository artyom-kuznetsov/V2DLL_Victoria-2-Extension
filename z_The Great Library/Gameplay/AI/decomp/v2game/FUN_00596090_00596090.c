// FUN_00596090 @ 00596090 body=[[00596090, 005960a4] [005960a8, 005960d4] [005960d8, 005960f2] [005960f6, 0059610d] [00596111, 0059611c]]


void FUN_00596090(void)

{
  int unaff_ESI;
  
  if (0xf < *(uint *)(unaff_ESI + 0xa4)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(unaff_ESI + 0x90));
  }
  *(undefined4 *)(unaff_ESI + 0xa4) = 0xf;
  *(undefined4 *)(unaff_ESI + 0xa0) = 0;
  *(undefined1 *)(unaff_ESI + 0x90) = 0;
  if (0xf < *(uint *)(unaff_ESI + 0x80)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(unaff_ESI + 0x6c));
  }
  *(undefined4 *)(unaff_ESI + 0x80) = 0xf;
  *(undefined4 *)(unaff_ESI + 0x7c) = 0;
  *(undefined1 *)(unaff_ESI + 0x6c) = 0;
  if (0xf < *(uint *)(unaff_ESI + 0x50)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(unaff_ESI + 0x3c));
  }
  *(undefined4 *)(unaff_ESI + 0x50) = 0xf;
  *(undefined4 *)(unaff_ESI + 0x4c) = 0;
  *(undefined1 *)(unaff_ESI + 0x3c) = 0;
  if (0xf < *(uint *)(unaff_ESI + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(unaff_ESI + 0x14));
  }
  *(undefined4 *)(unaff_ESI + 0x28) = 0xf;
  *(undefined4 *)(unaff_ESI + 0x24) = 0;
  *(undefined1 *)(unaff_ESI + 0x14) = 0;
  return;
}

