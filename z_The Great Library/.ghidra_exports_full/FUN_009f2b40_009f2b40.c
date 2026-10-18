// FUN_009f2b40 @ 009f2b40 body=[[009f2b40, 009f2b57] [009f2b5b, 009f2b7f] [009f2b83, 009f2b91]]


void FUN_009f2b40(void)

{
  undefined4 *unaff_ESI;
  
  FUN_004097a0(unaff_ESI + 0x11);
  if (0xf < (uint)unaff_ESI[0xf]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_ESI[10]);
  }
  unaff_ESI[0xf] = 0xf;
  unaff_ESI[0xe] = 0;
  *(undefined1 *)(unaff_ESI + 10) = 0;
  *unaff_ESI = &PTR_FUN_00e3cffc;
  if (0xf < (uint)unaff_ESI[7]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_ESI[2]);
  }
  unaff_ESI[6] = 0;
  unaff_ESI[7] = 0xf;
  *(undefined1 *)(unaff_ESI + 2) = 0;
  return;
}

