// FUN_00593110 @ 00593110 body=[[00593110, 00593124] [00593128, 0059314d] [00593151, 00593168] [0059316c, 00593185] [00593189, 005931a0] [005931a4, 005931b2]]


void FUN_00593110(void)

{
  int unaff_ESI;
  
  if (0xf < *(uint *)(unaff_ESI + 0xa4)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(unaff_ESI + 0x90));
  }
  *(undefined4 *)(unaff_ESI + 0xa4) = 0xf;
  *(undefined4 *)(unaff_ESI + 0xa0) = 0;
  *(undefined1 *)(unaff_ESI + 0x90) = 0;
  if (*(int *)(unaff_ESI + 0x74) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(unaff_ESI + 0x74));
  }
  *(undefined4 *)(unaff_ESI + 0x74) = 0;
  *(undefined4 *)(unaff_ESI + 0x78) = 0;
  *(undefined4 *)(unaff_ESI + 0x7c) = 0;
  if (0xf < *(uint *)(unaff_ESI + 0x6c)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(unaff_ESI + 0x58));
  }
  *(undefined4 *)(unaff_ESI + 0x6c) = 0xf;
  *(undefined4 *)(unaff_ESI + 0x68) = 0;
  *(undefined1 *)(unaff_ESI + 0x58) = 0;
  if (*(int *)(unaff_ESI + 0x34) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(unaff_ESI + 0x34));
  }
  *(undefined4 *)(unaff_ESI + 0x34) = 0;
  *(undefined4 *)(unaff_ESI + 0x38) = 0;
  *(undefined4 *)(unaff_ESI + 0x3c) = 0;
  if (0xf < *(uint *)(unaff_ESI + 0x2c)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(unaff_ESI + 0x18));
  }
  *(undefined4 *)(unaff_ESI + 0x28) = 0;
  *(undefined4 *)(unaff_ESI + 0x2c) = 0xf;
  *(undefined1 *)(unaff_ESI + 0x18) = 0;
  return;
}

