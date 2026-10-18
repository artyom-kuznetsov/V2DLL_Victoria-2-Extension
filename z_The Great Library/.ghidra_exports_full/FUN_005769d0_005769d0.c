// FUN_005769d0 @ 005769d0 body=[[005769d0, 005769de] [005769e2, 00576a00] [00576a04, 00576a1f] [00576a23, 00576a31]]


void FUN_005769d0(void)

{
  int unaff_ESI;
  
  if (0xf < *(uint *)(unaff_ESI + 0x58)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(unaff_ESI + 0x44));
  }
  *(undefined4 *)(unaff_ESI + 0x58) = 0xf;
  *(undefined4 *)(unaff_ESI + 0x54) = 0;
  *(undefined1 *)(unaff_ESI + 0x44) = 0;
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

