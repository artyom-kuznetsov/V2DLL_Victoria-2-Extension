// FUN_005e5000 @ 005e5000 body=[[005e5000, 005e5011] [005e5015, 005e5039] [005e503d, 005e505e] [005e5062, 005e5070]]


void FUN_005e5000(void)

{
  undefined4 *unaff_ESI;
  
  if (0xf < (uint)unaff_ESI[0x21]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_ESI[0x1c]);
  }
  unaff_ESI[0x21] = 0xf;
  unaff_ESI[0x20] = 0;
  *(undefined1 *)(unaff_ESI + 0x1c) = 0;
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

