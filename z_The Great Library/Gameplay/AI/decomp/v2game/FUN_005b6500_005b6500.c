// FUN_005b6500 @ 005b6500 body=[[005b6500, 005b650e] [005b6512, 005b652e] [005b6532, 005b654b] [005b6556, 005b6560]]


void FUN_005b6500(void)

{
  int unaff_ESI;
  
  if (0xf < *(uint *)(unaff_ESI + 0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(unaff_ESI + 0x2c));
  }
  *(undefined4 *)(unaff_ESI + 0x40) = 0xf;
  *(undefined4 *)(unaff_ESI + 0x3c) = 0;
  *(undefined1 *)(unaff_ESI + 0x2c) = 0;
  if (*(int *)(unaff_ESI + 0x18) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(unaff_ESI + 0x18));
  }
  *(undefined4 *)(unaff_ESI + 0x18) = 0;
  *(undefined4 *)(unaff_ESI + 0x1c) = 0;
  *(undefined4 *)(unaff_ESI + 0x20) = 0;
  if (*(int *)(unaff_ESI + 8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(unaff_ESI + 8));
  }
  *(undefined4 *)(unaff_ESI + 8) = 0;
  *(undefined4 *)(unaff_ESI + 0xc) = 0;
  *(undefined4 *)(unaff_ESI + 0x10) = 0;
  return;
}

