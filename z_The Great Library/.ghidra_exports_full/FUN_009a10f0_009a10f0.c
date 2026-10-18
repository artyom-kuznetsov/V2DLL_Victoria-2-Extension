// FUN_009a10f0 @ 009a10f0 body=[[009a10f0, 009a10fe] [009a1102, 009a1121] [009a1125, 009a1136]]


void FUN_009a10f0(void)

{
  undefined4 *unaff_ESI;
  
  if (0xf < (uint)unaff_ESI[0xd]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_ESI[8]);
  }
  unaff_ESI[0xd] = 0xf;
  unaff_ESI[0xc] = 0;
  *(undefined1 *)(unaff_ESI + 8) = 0;
  if (0xf < (uint)unaff_ESI[5]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*unaff_ESI);
  }
  unaff_ESI[5] = 0xf;
  unaff_ESI[4] = 0;
  *(undefined1 *)unaff_ESI = 0;
  return;
}

