// FUN_00592a90 @ 00592a90 body=[[00592a90, 00592a9f] [00592aa3, 00592aba] [00592abe, 00592acc]]


void FUN_00592a90(void)

{
  int unaff_ESI;
  
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
  *(undefined4 *)(unaff_ESI + 0x20) = 0;
  *(undefined4 *)(unaff_ESI + 0x24) = 0xf;
  *(undefined1 *)(unaff_ESI + 0x10) = 0;
  return;
}

