// FUN_00a03320 @ 00a03320 body=[[00a03320, 00a03334] [00a03338, 00a03365] [00a03369, 00a03386]]


void FUN_00a03320(void)

{
  int unaff_ESI;
  
  if (0xf < *(uint *)(unaff_ESI + 0xb0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(unaff_ESI + 0x9c));
  }
  *(undefined4 *)(unaff_ESI + 0xb0) = 0xf;
  *(undefined4 *)(unaff_ESI + 0xac) = 0;
  *(undefined1 *)(unaff_ESI + 0x9c) = 0;
  if (0xf < *(uint *)(unaff_ESI + 0x94)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(unaff_ESI + 0x80));
  }
  *(undefined4 *)(unaff_ESI + 0x90) = 0;
  *(undefined4 *)(unaff_ESI + 0x94) = 0xf;
  *(undefined1 *)(unaff_ESI + 0x80) = 0;
  FUN_009fa970();
  return;
}

