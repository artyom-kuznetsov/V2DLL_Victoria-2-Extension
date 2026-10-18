// FUN_00a137a0 @ 00a137a0 body=[[00a137a0, 00a137b4] [00a137b8, 00a137ee] [00a137f2, 00a13801]]


void FUN_00a137a0(void)

{
  undefined4 *unaff_EDI;
  
  if (0xf < (uint)unaff_EDI[0x26]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_EDI[0x21]);
  }
  unaff_EDI[0x26] = 0xf;
  unaff_EDI[0x25] = 0;
  *(undefined1 *)(unaff_EDI + 0x21) = 0;
  FUN_009d6f00();
  *unaff_EDI = CCommand::vftable;
  if (0xf < (uint)unaff_EDI[7]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_EDI[2]);
  }
  unaff_EDI[6] = 0;
  unaff_EDI[7] = 0xf;
  *(undefined1 *)(unaff_EDI + 2) = 0;
  return;
}

