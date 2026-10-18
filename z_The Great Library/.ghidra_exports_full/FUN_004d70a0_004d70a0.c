// FUN_004d70a0 @ 004d70a0 body=[[004d70a0, 004d70b1] [004d70b5, 004d70e3] [004d70e7, 004d70fc] [004d7100, 004d7112]]


void FUN_004d70a0(void)

{
  int unaff_ESI;
  
  if (0xf < *(uint *)(unaff_ESI + 0x84)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(unaff_ESI + 0x70));
  }
  *(undefined4 *)(unaff_ESI + 0x84) = 0xf;
  *(undefined4 *)(unaff_ESI + 0x80) = 0;
  *(undefined1 *)(unaff_ESI + 0x70) = 0;
  if (*(int *)(unaff_ESI + 0x44) != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(unaff_ESI + 0x44));
  }
  *(undefined4 *)(unaff_ESI + 0x44) = 0;
  *(undefined4 *)(unaff_ESI + 0x48) = 0;
  *(undefined4 *)(unaff_ESI + 0x4c) = 0;
  if (*(int *)(unaff_ESI + 0x34) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(unaff_ESI + 0x34));
  }
  *(undefined4 *)(unaff_ESI + 0x34) = 0;
  *(undefined4 *)(unaff_ESI + 0x38) = 0;
  *(undefined4 *)(unaff_ESI + 0x3c) = 0;
  FUN_0044be00();
  return;
}

