// FUN_00a02560 @ 00a02560 body=[[00a02560, 00a02571] [00a02575, 00a0259b] [00a0259f, 00a025bf] [00a025c8, 00a025e5] [00a025e9, 00a025f4]]


void FUN_00a02560(void)

{
  undefined4 *unaff_ESI;
  
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
  if (unaff_ESI[0xf] != 0) {
    FUN_00413860();
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
  unaff_ESI[7] = 0xf;
  unaff_ESI[6] = 0;
  *(undefined1 *)(unaff_ESI + 2) = 0;
  return;
}

