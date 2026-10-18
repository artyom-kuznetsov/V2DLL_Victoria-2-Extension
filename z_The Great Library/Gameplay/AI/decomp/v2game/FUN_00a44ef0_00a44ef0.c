// FUN_00a44ef0 @ 00a44ef0 body=[[00a44ef0, 00a44efe] [00a44f02, 00a44f11]]


void FUN_00a44ef0(void)

{
  int unaff_ESI;
  
  if (0xf < *(uint *)(unaff_ESI + 0x30)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(unaff_ESI + 0x1c));
  }
  *(undefined4 *)(unaff_ESI + 0x30) = 0xf;
  *(undefined4 *)(unaff_ESI + 0x2c) = 0;
  *(undefined1 *)(unaff_ESI + 0x1c) = 0;
  return;
}

