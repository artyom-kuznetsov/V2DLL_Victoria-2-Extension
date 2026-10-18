// FUN_0078e490 @ 0078e490 body=[[0078e490, 0078e4b3] [0078e4b8, 0078e4cf] [0078e4d3, 0078e4e4]]


void FUN_0078e490(void)

{
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0x28) != 0) {
    FUN_0079ef90();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(unaff_ESI + 0x28));
  }
  *(undefined4 *)(unaff_ESI + 0x28) = 0;
  *(undefined4 *)(unaff_ESI + 0x2c) = 0;
  *(undefined4 *)(unaff_ESI + 0x30) = 0;
  if (0xf < *(uint *)(unaff_ESI + 0x20)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(unaff_ESI + 0xc));
  }
  *(undefined4 *)(unaff_ESI + 0x1c) = 0;
  *(undefined4 *)(unaff_ESI + 0x20) = 0xf;
  *(undefined1 *)(unaff_ESI + 0xc) = 0;
  return;
}

