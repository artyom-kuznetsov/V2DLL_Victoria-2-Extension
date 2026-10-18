// FUN_0068bf90 @ 0068bf90 body=[[0068bf90, 0068bfa7] [0068bfb0, 0068bfd5]]


void FUN_0068bf90(void)

{
  int unaff_ESI;
  int iVar1;
  
  iVar1 = 0;
  if (0 < (int)(*(int *)(unaff_ESI + 0xad0) - *(int *)(unaff_ESI + 0xacc) & 0xfffffffcU)) {
    do {
      (**(code **)(**(int **)(*(int *)(unaff_ESI + 0xacc) + iVar1 * 4) + 0x18))();
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(unaff_ESI + 0xad0) - *(int *)(unaff_ESI + 0xacc) >> 2);
  }
  return;
}

