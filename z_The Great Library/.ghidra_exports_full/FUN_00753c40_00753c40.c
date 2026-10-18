// FUN_00753c40 @ 00753c40 body=[[00753c40, 00753c5c] [00753c66, 00753c89] [00753c8d, 00753caf] [00753cb3, 00753cca] [00753cce, 00753ce5] [00753ce9, 00753d00] [00753d04, 00753d0f]]


void FUN_00753c40(void)

{
  undefined4 *unaff_ESI;
  
  *unaff_ESI = CBookmark::vftable;
  if (unaff_ESI[0x25] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_ESI[0x25]);
  }
  unaff_ESI[0x25] = 0;
  unaff_ESI[0x26] = 0;
  unaff_ESI[0x27] = 0;
  if (0xf < (uint)unaff_ESI[0x23]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_ESI[0x1e]);
  }
  unaff_ESI[0x23] = 0xf;
  unaff_ESI[0x22] = 0;
  *(undefined1 *)(unaff_ESI + 0x1e) = 0;
  if (0xf < (uint)unaff_ESI[0x1c]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_ESI[0x17]);
  }
  unaff_ESI[0x1c] = 0xf;
  unaff_ESI[0x1b] = 0;
  *(undefined1 *)(unaff_ESI + 0x17) = 0;
  if (0xf < (uint)unaff_ESI[0x15]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_ESI[0x10]);
  }
  unaff_ESI[0x15] = 0xf;
  unaff_ESI[0x14] = 0;
  *(undefined1 *)(unaff_ESI + 0x10) = 0;
  if (0xf < (uint)unaff_ESI[0xe]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_ESI[9]);
  }
  unaff_ESI[0xe] = 0xf;
  unaff_ESI[0xd] = 0;
  *(undefined1 *)(unaff_ESI + 9) = 0;
  if (0xf < (uint)unaff_ESI[7]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_ESI[2]);
  }
  unaff_ESI[7] = 0xf;
  unaff_ESI[6] = 0;
  *(undefined1 *)(unaff_ESI + 2) = 0;
  return;
}

