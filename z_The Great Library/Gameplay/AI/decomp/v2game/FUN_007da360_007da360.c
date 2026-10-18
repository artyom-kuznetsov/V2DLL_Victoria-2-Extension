// FUN_007da360 @ 007da360 body=[[007da360, 007da36e] [007da372, 007da390] [007da394, 007da3a2]]


void FUN_007da360(void)

{
  int unaff_ESI;
  
  if (0xf < *(uint *)(unaff_ESI + 0x3c)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(unaff_ESI + 0x28));
  }
  *(undefined4 *)(unaff_ESI + 0x3c) = 0xf;
  *(undefined4 *)(unaff_ESI + 0x38) = 0;
  *(undefined1 *)(unaff_ESI + 0x28) = 0;
  if (0xf < *(uint *)(unaff_ESI + 0x1c)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(unaff_ESI + 8));
  }
  *(undefined4 *)(unaff_ESI + 0x18) = 0;
  *(undefined4 *)(unaff_ESI + 0x1c) = 0xf;
  *(undefined1 *)(unaff_ESI + 8) = 0;
  return;
}

