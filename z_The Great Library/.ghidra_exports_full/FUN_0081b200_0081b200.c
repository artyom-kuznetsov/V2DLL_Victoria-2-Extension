// FUN_0081b200 @ 0081b200 body=[[0081b200, 0081b214] [0081b218, 0081b241] [0081b245, 0081b25c] [0081b260, 0081b27d] [0081b281, 0081b28c]]


void FUN_0081b200(void)

{
  undefined4 *unaff_ESI;
  
  if (0xf < (uint)unaff_ESI[0x25]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_ESI[0x20]);
  }
  unaff_ESI[0x25] = 0xf;
  unaff_ESI[0x24] = 0;
  *(undefined1 *)(unaff_ESI + 0x20) = 0;
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
  unaff_ESI[7] = 0xf;
  unaff_ESI[6] = 0;
  *(undefined1 *)(unaff_ESI + 2) = 0;
  return;
}

