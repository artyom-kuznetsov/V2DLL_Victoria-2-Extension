// FUN_008b3150 @ 008b3150 body=[[008b3150, 008b315c] [008b3160, 008b3168] [008b3173, 008b318a] [008b318e, 008b319c]]


void FUN_008b3150(void)

{
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 0x20) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(unaff_EDI + 0x20));
  }
  *(undefined4 *)(unaff_EDI + 0x20) = 0;
  *(undefined4 *)(unaff_EDI + 0x24) = 0;
  *(undefined4 *)(unaff_EDI + 0x28) = 0;
  if (0xf < *(uint *)(unaff_EDI + 0x18)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(unaff_EDI + 4));
  }
  *(undefined4 *)(unaff_EDI + 0x14) = 0;
  *(undefined4 *)(unaff_EDI + 0x18) = 0xf;
  *(undefined1 *)(unaff_EDI + 4) = 0;
  return;
}

