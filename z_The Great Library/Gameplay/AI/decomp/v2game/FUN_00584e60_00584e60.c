// FUN_00584e60 @ 00584e60 body=[[00584e60, 00584e6e] [00584e72, 00584e81]]


void FUN_00584e60(void)

{
  int unaff_ESI;
  
  if (0xf < *(uint *)(unaff_ESI + 0x20)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(unaff_ESI + 0xc));
  }
  *(undefined4 *)(unaff_ESI + 0x20) = 0xf;
  *(undefined4 *)(unaff_ESI + 0x1c) = 0;
  *(undefined1 *)(unaff_ESI + 0xc) = 0;
  return;
}

