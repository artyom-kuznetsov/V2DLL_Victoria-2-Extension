// FUN_00a0d860 @ 00a0d860 body=[[00a0d860, 00a0d884] [00a0d889, 00a0d8ac] [00a0d8b0, 00a0d8ca]]


void FUN_00a0d860(void)

{
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0x98) != 0) {
    FUN_00413860();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(unaff_ESI + 0x98));
  }
  *(undefined4 *)(unaff_ESI + 0x98) = 0;
  *(undefined4 *)(unaff_ESI + 0x9c) = 0;
  *(undefined4 *)(unaff_ESI + 0xa0) = 0;
  if (0xf < *(uint *)(unaff_ESI + 0x90)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(unaff_ESI + 0x7c));
  }
  *(undefined4 *)(unaff_ESI + 0x8c) = 0;
  *(undefined4 *)(unaff_ESI + 0x90) = 0xf;
  *(undefined1 *)(unaff_ESI + 0x7c) = 0;
  FUN_009fa970();
  return;
}

