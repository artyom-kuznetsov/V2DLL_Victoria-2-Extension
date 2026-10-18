// FUN_005e1e90 @ 005e1e90 body=[[005e1e90, 005e1e9e] [005e1ea2, 005e1ec6] [005e1eca, 005e1ed8]]


void FUN_005e1e90(void)

{
  undefined4 *unaff_ESI;
  
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

