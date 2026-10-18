// FUN_00637750 @ 00637750 body=[[00637750, 00637764] [00637768, 00637786] [0063778a, 00637798]]


void FUN_00637750(void)

{
  undefined4 *unaff_ESI;
  
  *unaff_ESI = &PTR_FUN_00e37db4;
  if (0xf < (uint)unaff_ESI[0xe]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_ESI[9]);
  }
  unaff_ESI[0xe] = 0xf;
  unaff_ESI[0xd] = 0;
  *(undefined1 *)(unaff_ESI + 9) = 0;
  if (0xf < (uint)unaff_ESI[7]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_ESI[2]);
  }
  unaff_ESI[6] = 0;
  unaff_ESI[7] = 0xf;
  *(undefined1 *)(unaff_ESI + 2) = 0;
  return;
}

