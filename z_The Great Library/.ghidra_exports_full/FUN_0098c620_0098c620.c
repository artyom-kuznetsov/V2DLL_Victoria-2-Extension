// FUN_0098c620 @ 0098c620 body=[[0098c620, 0098c63a] [0098c63e, 0098c665] [0098c669, 0098c684] [0098c688, 0098c696]]


void FUN_0098c620(void)

{
  undefined4 *unaff_ESI;
  
  *unaff_ESI = &PTR_FUN_00e37948;
  if (0xf < (uint)unaff_ESI[0x2f]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_ESI[0x2a]);
  }
  unaff_ESI[0x2f] = 0xf;
  unaff_ESI[0x2e] = 0;
  *(undefined1 *)(unaff_ESI + 0x2a) = 0;
  if (0xf < (uint)unaff_ESI[0xf]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_ESI[10]);
  }
  unaff_ESI[0xf] = 0xf;
  unaff_ESI[0xe] = 0;
  *(undefined1 *)(unaff_ESI + 10) = 0;
  if (0xf < (uint)unaff_ESI[7]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_ESI[2]);
  }
  unaff_ESI[6] = 0;
  unaff_ESI[7] = 0xf;
  *(undefined1 *)(unaff_ESI + 2) = 0;
  return;
}

