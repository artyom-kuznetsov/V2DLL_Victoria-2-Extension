// FUN_00972540 @ 00972540 body=[[00972540, 0097254f] [00972553, 00972574] [00972578, 00972582]]


void FUN_00972540(void)

{
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0x20) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(unaff_ESI + 0x20));
  }
  *(undefined4 *)(unaff_ESI + 0x20) = 0;
  *(undefined4 *)(unaff_ESI + 0x24) = 0;
  *(undefined4 *)(unaff_ESI + 0x28) = 0;
  if (*(int *)(unaff_ESI + 8) != 0) {
    FUN_004651b0(*(undefined4 *)(unaff_ESI + 0xc));
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(unaff_ESI + 8));
  }
  *(undefined4 *)(unaff_ESI + 8) = 0;
  *(undefined4 *)(unaff_ESI + 0xc) = 0;
  *(undefined4 *)(unaff_ESI + 0x10) = 0;
  return;
}

