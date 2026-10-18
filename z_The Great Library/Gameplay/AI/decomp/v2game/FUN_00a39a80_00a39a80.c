// FUN_00a39a80 @ 00a39a80 body=[[00a39a80, 00a39a8e] [00a39a92, 00a39ab1] [00a39ab5, 00a39ac6]]


void FUN_00a39a80(void)

{
  undefined4 *unaff_ESI;
  
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
  unaff_ESI[5] = 0xf;
  unaff_ESI[4] = 0;
  *(undefined1 *)unaff_ESI = 0;
  return;
}

