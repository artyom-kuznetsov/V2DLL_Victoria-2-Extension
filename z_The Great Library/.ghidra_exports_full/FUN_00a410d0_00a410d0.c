// FUN_00a410d0 @ 00a410d0 body=[[00a410d0, 00a410de] [00a410e2, 00a410f1]]


void FUN_00a410d0(void)

{
  int unaff_ESI;
  
  if (0xf < *(uint *)(unaff_ESI + 0x6c)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(unaff_ESI + 0x58));
  }
  *(undefined4 *)(unaff_ESI + 0x6c) = 0xf;
  *(undefined4 *)(unaff_ESI + 0x68) = 0;
  *(undefined1 *)(unaff_ESI + 0x58) = 0;
  return;
}

