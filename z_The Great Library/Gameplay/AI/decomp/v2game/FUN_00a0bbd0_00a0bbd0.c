// FUN_00a0bbd0 @ 00a0bbd0 body=[[00a0bbd0, 00a0bbe5] [00a0bbe9, 00a0bc0d] [00a0bc11, 00a0bc1f]]


void FUN_00a0bbd0(void)

{
  undefined4 *unaff_ESI;
  
  unaff_ESI[0xf] = &PTR_FUN_00e3e544;
  if (0xf < (uint)unaff_ESI[0x16]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_ESI[0x11]);
  }
  unaff_ESI[0x16] = 0xf;
  unaff_ESI[0x15] = 0;
  *(undefined1 *)(unaff_ESI + 0x11) = 0;
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

