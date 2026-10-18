// FUN_00a467d0 @ 00a467d0 body=[[00a467d0, 00a467dc] [00a467e0, 00a467e8] [00a467f2, 00a4680a] [00a46814, 00a4682b] [00a4682f, 00a4684b] [00a4684f, 00a4685a]]


void FUN_00a467d0(void)

{
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0x50) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(unaff_ESI + 0x50));
  }
  *(undefined4 *)(unaff_ESI + 0x50) = 0;
  *(undefined4 *)(unaff_ESI + 0x54) = 0;
  *(undefined4 *)(unaff_ESI + 0x58) = 0;
  if (*(int *)(unaff_ESI + 0x40) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(unaff_ESI + 0x40));
  }
  *(undefined4 *)(unaff_ESI + 0x40) = 0;
  *(undefined4 *)(unaff_ESI + 0x44) = 0;
  *(undefined4 *)(unaff_ESI + 0x48) = 0;
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
  *(undefined4 *)(unaff_ESI + 0x1c) = 0xf;
  *(undefined4 *)(unaff_ESI + 0x18) = 0;
  *(undefined1 *)(unaff_ESI + 8) = 0;
  return;
}

