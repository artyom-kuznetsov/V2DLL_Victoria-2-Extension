// FUN_00475300 @ 00475300 body=[[00475300, 00475314] [00475318, 00475345] [00475349, 00475377] [0047537b, 00475385]]


void FUN_00475300(void)

{
  int unaff_ESI;
  
  if (0xf < *(uint *)(unaff_ESI + 0xd4)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(unaff_ESI + 0xc0));
  }
  *(undefined4 *)(unaff_ESI + 0xd4) = 0xf;
  *(undefined4 *)(unaff_ESI + 0xd0) = 0;
  *(undefined1 *)(unaff_ESI + 0xc0) = 0;
  if (0xf < *(uint *)(unaff_ESI + 0xb8)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(unaff_ESI + 0xa4));
  }
  *(undefined4 *)(unaff_ESI + 0xb8) = 0xf;
  *(undefined4 *)(unaff_ESI + 0xb4) = 0;
  *(undefined1 *)(unaff_ESI + 0xa4) = 0;
  if (*(int *)(unaff_ESI + 0x14) != 0) {
    FUN_00475f00(*(undefined4 *)(unaff_ESI + 0x18));
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(unaff_ESI + 0x14));
  }
  *(undefined4 *)(unaff_ESI + 0x14) = 0;
  *(undefined4 *)(unaff_ESI + 0x18) = 0;
  *(undefined4 *)(unaff_ESI + 0x1c) = 0;
  return;
}

