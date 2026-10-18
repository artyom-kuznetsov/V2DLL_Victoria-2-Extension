// FUN_00a356a0 @ 00a356a0 body=[[00a356a0, 00a356af] [00a356b3, 00a356ca] [00a356ce, 00a356dc]]


void FUN_00a356a0(void)

{
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0x28) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(unaff_ESI + 0x28));
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

