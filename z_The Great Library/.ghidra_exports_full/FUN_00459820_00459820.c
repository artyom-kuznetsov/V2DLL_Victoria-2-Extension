// FUN_00459820 @ 00459820 body=[[00459820, 0045982e] [00459832, 00459850] [00459854, 0045986e] [00459872, 0045987f]]


void FUN_00459820(void)

{
  undefined4 *unaff_ESI;
  
  if (0xf < (uint)unaff_ESI[0x13]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_ESI[0xe]);
  }
  unaff_ESI[0x13] = 0xf;
  unaff_ESI[0x12] = 0;
  *(undefined1 *)(unaff_ESI + 0xe) = 0;
  if (0xf < (uint)unaff_ESI[0xc]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_ESI[7]);
  }
  unaff_ESI[0xc] = 0xf;
  unaff_ESI[0xb] = 0;
  *(undefined1 *)(unaff_ESI + 7) = 0;
  if (0xf < (uint)unaff_ESI[5]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*unaff_ESI);
  }
  unaff_ESI[4] = 0;
  unaff_ESI[5] = 0xf;
  *(undefined1 *)unaff_ESI = 0;
  return;
}

