// FUN_00a29e10 @ 00a29e10 body=[[00a29e10, 00a29e1e] [00a29e22, 00a29e40] [00a29e44, 00a29e52]]


void FUN_00a29e10(void)

{
  int unaff_ESI;
  
  if (0xf < *(uint *)(unaff_ESI + 0x38)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(unaff_ESI + 0x24));
  }
  *(undefined4 *)(unaff_ESI + 0x38) = 0xf;
  *(undefined4 *)(unaff_ESI + 0x34) = 0;
  *(undefined1 *)(unaff_ESI + 0x24) = 0;
  if (0xf < *(uint *)(unaff_ESI + 0x1c)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(unaff_ESI + 8));
  }
  *(undefined4 *)(unaff_ESI + 0x18) = 0;
  *(undefined4 *)(unaff_ESI + 0x1c) = 0xf;
  *(undefined1 *)(unaff_ESI + 8) = 0;
  return;
}

