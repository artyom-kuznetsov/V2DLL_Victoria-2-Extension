// FUN_007891f0 @ 007891f0 body=[[007891f0, 0078920a] [0078920e, 0078923b] [0078923f, 00789266] [0078926a, 00789284]]


void FUN_007891f0(void)

{
  undefined4 *unaff_ESI;
  
  *unaff_ESI = CConfirmLeaderAssign::vftable;
  if (0xf < (uint)unaff_ESI[0x36]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_ESI[0x31]);
  }
  unaff_ESI[0x36] = 0xf;
  unaff_ESI[0x35] = 0;
  *(undefined1 *)(unaff_ESI + 0x31) = 0;
  if (0xf < (uint)unaff_ESI[0x2c]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_ESI[0x27]);
  }
  unaff_ESI[0x2c] = 0xf;
  unaff_ESI[0x2b] = 0;
  *(undefined1 *)(unaff_ESI + 0x27) = 0;
  if (0xf < (uint)unaff_ESI[0x22]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_ESI[0x1d]);
  }
  unaff_ESI[0x21] = 0;
  unaff_ESI[0x22] = 0xf;
  *(undefined1 *)(unaff_ESI + 0x1d) = 0;
  FUN_00640880();
  return;
}

