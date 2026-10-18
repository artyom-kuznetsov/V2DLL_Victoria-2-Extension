// FUN_005e2ff0 @ 005e2ff0 body=[[005e2ff0, 005e2ffe] [005e3002, 005e3020] [005e3024, 005e3045] [005e3049, 005e3057]]


void FUN_005e2ff0(void)

{
  undefined4 *unaff_ESI;
  
  if (0xf < (uint)unaff_ESI[0x1e]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_ESI[0x19]);
  }
  unaff_ESI[0x1e] = 0xf;
  unaff_ESI[0x1d] = 0;
  *(undefined1 *)(unaff_ESI + 0x19) = 0;
  if (0xf < (uint)unaff_ESI[0x17]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_ESI[0x12]);
  }
  unaff_ESI[0x17] = 0xf;
  unaff_ESI[0x16] = 0;
  *(undefined1 *)(unaff_ESI + 0x12) = 0;
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

