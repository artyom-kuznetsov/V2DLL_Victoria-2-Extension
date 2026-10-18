// FUN_00560d10 @ 00560d10 body=[[00560d10, 00560d34] [00560d38, 00560d61] [00560d65, 00560d7c] [00560d80, 00560d9c] [00560da0, 00560dab]]


void FUN_00560d10(void)

{
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0x80) != 0) {
    FUN_00413860();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(unaff_ESI + 0x80));
  }
  *(undefined4 *)(unaff_ESI + 0x80) = 0;
  *(undefined4 *)(unaff_ESI + 0x84) = 0;
  *(undefined4 *)(unaff_ESI + 0x88) = 0;
  if (*(int *)(unaff_ESI + 0x70) != 0) {
    FUN_00413860();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(unaff_ESI + 0x70));
  }
  *(undefined4 *)(unaff_ESI + 0x70) = 0;
  *(undefined4 *)(unaff_ESI + 0x74) = 0;
  *(undefined4 *)(unaff_ESI + 0x78) = 0;
  if (0xf < *(uint *)(unaff_ESI + 0x48)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(unaff_ESI + 0x34));
  }
  *(undefined4 *)(unaff_ESI + 0x48) = 0xf;
  *(undefined4 *)(unaff_ESI + 0x44) = 0;
  *(undefined1 *)(unaff_ESI + 0x34) = 0;
  if (0xf < *(uint *)(unaff_ESI + 0x2c)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(unaff_ESI + 0x18));
  }
  *(undefined4 *)(unaff_ESI + 0x2c) = 0xf;
  *(undefined4 *)(unaff_ESI + 0x28) = 0;
  *(undefined1 *)(unaff_ESI + 0x18) = 0;
  return;
}

