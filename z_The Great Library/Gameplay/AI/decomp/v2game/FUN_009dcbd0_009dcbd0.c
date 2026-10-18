// FUN_009dcbd0 @ 009dcbd0 body=[[009dcbd0, 009dcbe4] [009dcbe8, 009dcc06] [009dcc0a, 009dcc18]]


void FUN_009dcbd0(void)

{
  undefined4 *unaff_ESI;
  
  *unaff_ESI = CTextBlock::vftable;
  if (0xf < (uint)unaff_ESI[0x15]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_ESI[0x10]);
  }
  unaff_ESI[0x15] = 0xf;
  unaff_ESI[0x14] = 0;
  *(undefined1 *)(unaff_ESI + 0x10) = 0;
  if (0xf < (uint)unaff_ESI[0xe]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_ESI[9]);
  }
  unaff_ESI[0xd] = 0;
  unaff_ESI[0xe] = 0xf;
  *(undefined1 *)(unaff_ESI + 9) = 0;
  return;
}

