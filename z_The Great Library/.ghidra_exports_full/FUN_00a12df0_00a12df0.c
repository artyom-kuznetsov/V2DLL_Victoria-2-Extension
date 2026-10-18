// FUN_00a12df0 @ 00a12df0 body=[[00a12df0, 00a12e01] [00a12e05, 00a12e29] [00a12e2d, 00a12e4e] [00a12e52, 00a12e60]]


void FUN_00a12df0(void)

{
  undefined4 *unaff_ESI;
  
  if (0xf < (uint)unaff_ESI[0x22]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_ESI[0x1d]);
  }
  unaff_ESI[0x22] = 0xf;
  unaff_ESI[0x21] = 0;
  *(undefined1 *)(unaff_ESI + 0x1d) = 0;
  if (0xf < (uint)unaff_ESI[0x19]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_ESI[0x14]);
  }
  unaff_ESI[0x19] = 0xf;
  unaff_ESI[0x18] = 0;
  *(undefined1 *)(unaff_ESI + 0x14) = 0;
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

