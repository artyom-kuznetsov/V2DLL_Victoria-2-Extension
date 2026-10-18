// FUN_0067f1a0 @ 0067f1a0 body=[[0067f1a0, 0067f1b7] [0067f1c0, 0067f1cf]]


void FUN_0067f1a0(void)

{
  int *piVar1;
  int iVar2;
  int unaff_ESI;
  
  piVar1 = *(int **)(unaff_ESI + 0xcd4);
  *(undefined4 *)(unaff_ESI + 0xce4) = 0;
  if (piVar1 != (int *)0x0) {
    iVar2 = 0;
    do {
      iVar2 = iVar2 + *piVar1;
      piVar1 = (int *)piVar1[2];
      *(int *)(unaff_ESI + 0xce4) = iVar2;
    } while (piVar1 != (int *)0x0);
  }
  return;
}

