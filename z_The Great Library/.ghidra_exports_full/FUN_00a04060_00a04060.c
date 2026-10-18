// FUN_00a04060 @ 00a04060 body=[[00a04060, 00a0406e] [00a04072, 00a04090] [00a04094, 00a040b5] [00a040b9, 00a040c7]]


void FUN_00a04060(void)

{
  undefined4 *unaff_ESI;
  
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

