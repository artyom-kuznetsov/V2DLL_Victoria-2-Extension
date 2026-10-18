// FUN_00495af0 @ 00495af0 body=[[00495af0, 00495b0b] [00495b0f, 00495b26] [00495b2a, 00495b44] [00495b48, 00495b5f] [00495b63, 00495b6e]]


void FUN_00495af0(void)

{
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0x6c) != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(unaff_ESI + 0x6c));
  }
  *(undefined4 *)(unaff_ESI + 0x6c) = 0;
  *(undefined4 *)(unaff_ESI + 0x70) = 0;
  *(undefined4 *)(unaff_ESI + 0x74) = 0;
  if (0xf < *(uint *)(unaff_ESI + 0x58)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(unaff_ESI + 0x44));
  }
  *(undefined4 *)(unaff_ESI + 0x58) = 0xf;
  *(undefined4 *)(unaff_ESI + 0x54) = 0;
  *(undefined1 *)(unaff_ESI + 0x44) = 0;
  if (*(int *)(unaff_ESI + 0x2c) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(unaff_ESI + 0x2c));
  }
  *(undefined4 *)(unaff_ESI + 0x2c) = 0;
  *(undefined4 *)(unaff_ESI + 0x30) = 0;
  *(undefined4 *)(unaff_ESI + 0x34) = 0;
  if (0xf < *(uint *)(unaff_ESI + 0x24)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(unaff_ESI + 0x10));
  }
  *(undefined4 *)(unaff_ESI + 0x24) = 0xf;
  *(undefined4 *)(unaff_ESI + 0x20) = 0;
  *(undefined1 *)(unaff_ESI + 0x10) = 0;
  return;
}

