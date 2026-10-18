// FUN_005de760 @ 005de760 body=[[005de760, 005de777] [005de77b, 005de792] [005de796, 005de7b7] [005de7bb, 005de7c9]]


void FUN_005de760(void)

{
  undefined4 *unaff_ESI;
  
  FUN_00849e90();
  if (unaff_ESI[0x19] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_ESI[0x19]);
  }
  unaff_ESI[0x19] = 0;
  unaff_ESI[0x1a] = 0;
  unaff_ESI[0x1b] = 0;
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

