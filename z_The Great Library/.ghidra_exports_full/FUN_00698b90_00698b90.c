// FUN_00698b90 @ 00698b90 body=[[00698b90, 00698b9e] [00698ba2, 00698bb1]]


void FUN_00698b90(void)

{
  int unaff_ESI;
  
  if (0xf < *(uint *)(unaff_ESI + 0x3c)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(unaff_ESI + 0x28));
  }
  *(undefined4 *)(unaff_ESI + 0x3c) = 0xf;
  *(undefined4 *)(unaff_ESI + 0x38) = 0;
  *(undefined1 *)(unaff_ESI + 0x28) = 0;
  return;
}

