// FUN_009b53b0 @ 009b53b0 body=[[009b53b0, 009b53df] [009b53e3, 009b53f5]]


void FUN_009b53b0(void)

{
  undefined4 *unaff_ESI;
  
  *unaff_ESI = &PTR_FUN_00e387f8;
  if (*(undefined4 **)(unaff_ESI[0xd] + 0x98) == unaff_ESI) {
    *(undefined4 *)(unaff_ESI[0xd] + 0x98) = 0;
  }
  DAT_01258a84 = DAT_01258a84 + -1;
  if (0xf < (uint)unaff_ESI[10]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_ESI[5]);
  }
  unaff_ESI[10] = 0xf;
  unaff_ESI[9] = 0;
  *(undefined1 *)(unaff_ESI + 5) = 0;
  return;
}

