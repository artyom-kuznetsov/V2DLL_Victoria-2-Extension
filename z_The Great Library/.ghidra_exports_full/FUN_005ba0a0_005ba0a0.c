// FUN_005ba0a0 @ 005ba0a0 body=[[005ba0a0, 005ba0ba] [005ba0c7, 005ba0e7]]


undefined4 FUN_005ba0a0(void)

{
  undefined4 uVar1;
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 4) == 0) {
    return 0;
  }
  if (*(int *)(unaff_ESI + 8) == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(unaff_ESI + 4));
  }
  uVar1 = FUN_005ba170(*(int *)(unaff_ESI + 8),*(undefined4 *)(unaff_ESI + 0xc),
                       *(undefined4 *)(unaff_ESI + 0xc));
  *(int *)(unaff_ESI + 8) = *(int *)(unaff_ESI + 8) + -1;
  if (*(uint *)(unaff_ESI + 8) < *(uint *)(unaff_ESI + 0xc)) {
    *(uint *)(unaff_ESI + 0xc) = *(uint *)(unaff_ESI + 0xc) >> 1;
  }
  return uVar1;
}

