// FUN_008b7f20 @ 008b7f20 body=[[008b7f20, 008b7f2e] [008b7f32, 008b7f50] [008b7f54, 008b7f68]]


void FUN_008b7f20(void)

{
  int unaff_ESI;
  
  if (0xf < *(uint *)(unaff_ESI + 0x4c)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(unaff_ESI + 0x38));
  }
  *(undefined4 *)(unaff_ESI + 0x4c) = 0xf;
  *(undefined4 *)(unaff_ESI + 0x48) = 0;
  *(undefined1 *)(unaff_ESI + 0x38) = 0;
  if (0xf < *(uint *)(unaff_ESI + 0x30)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(unaff_ESI + 0x1c));
  }
  *(undefined4 *)(unaff_ESI + 0x2c) = 0;
  *(undefined4 *)(unaff_ESI + 0x30) = 0xf;
  *(undefined1 *)(unaff_ESI + 0x1c) = 0;
  FUN_008b32d0();
  return;
}

