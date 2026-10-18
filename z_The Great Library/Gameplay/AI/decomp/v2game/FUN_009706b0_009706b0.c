// FUN_009706b0 @ 009706b0 body=[[009706b0, 009706be] [009706c2, 009706e3] [009706e7, 009706fe] [00970702, 0097071a] [00970724, 0097072f]]


void FUN_009706b0(void)

{
  int unaff_ESI;
  
  if (0xf < *(uint *)(unaff_ESI + 0x74)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(unaff_ESI + 0x60));
  }
  *(undefined4 *)(unaff_ESI + 0x74) = 0xf;
  *(undefined4 *)(unaff_ESI + 0x70) = 0;
  *(undefined1 *)(unaff_ESI + 0x60) = 0;
  *(undefined4 *)(unaff_ESI + 0x58) = 0;
  if (*(int *)(unaff_ESI + 0x48) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(unaff_ESI + 0x48));
  }
  *(undefined4 *)(unaff_ESI + 0x48) = 0;
  *(undefined4 *)(unaff_ESI + 0x4c) = 0;
  *(undefined4 *)(unaff_ESI + 0x50) = 0;
  if (0xf < *(uint *)(unaff_ESI + 0x38)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(unaff_ESI + 0x24));
  }
  *(undefined4 *)(unaff_ESI + 0x38) = 0xf;
  *(undefined4 *)(unaff_ESI + 0x34) = 0;
  *(undefined1 *)(unaff_ESI + 0x24) = 0;
  if (*(int *)(unaff_ESI + 0x10) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(unaff_ESI + 0x10));
  }
  *(undefined4 *)(unaff_ESI + 0x10) = 0;
  *(undefined4 *)(unaff_ESI + 0x14) = 0;
  *(undefined4 *)(unaff_ESI + 0x18) = 0;
  return;
}

