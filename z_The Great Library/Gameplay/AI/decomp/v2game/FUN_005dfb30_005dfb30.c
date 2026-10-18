// FUN_005dfb30 @ 005dfb30 body=[[005dfb30, 005dfb53] [005dfb58, 005dfb75] [005dfb79, 005dfb8a]]


void FUN_005dfb30(void)

{
  undefined4 *unaff_ESI;
  
  if (unaff_ESI[0xf] != 0) {
    FUN_005e5d30();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_ESI[0xf]);
  }
  unaff_ESI[0xf] = 0;
  unaff_ESI[0x10] = 0;
  unaff_ESI[0x11] = 0;
  *unaff_ESI = CCommand::vftable;
  if (0xf < (uint)unaff_ESI[7]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_ESI[2]);
  }
  unaff_ESI[6] = 0;
  unaff_ESI[7] = 0xf;
  *(undefined1 *)(unaff_ESI + 2) = 0;
  return;
}

