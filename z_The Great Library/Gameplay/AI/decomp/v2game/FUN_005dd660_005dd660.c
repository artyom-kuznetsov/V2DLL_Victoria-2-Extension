// FUN_005dd660 @ 005dd660 body=[[005dd660, 005dd677] [005dd67b, 005dd69f] [005dd6a3, 005dd6c4] [005dd6c8, 005dd6d6]]


void FUN_005dd660(void)

{
  undefined4 *unaff_ESI;
  
  *unaff_ESI = CAssignLeaderCommand::vftable;
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

