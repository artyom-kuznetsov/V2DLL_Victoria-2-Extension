// FUN_0048e3b0 @ 0048e3b0 body=[[0048e3b0, 0048e3bc] [0048e3c0, 0048e3e0]]


void FUN_0048e3b0(void)

{
  int iVar1;
  int *piVar2;
  int in_EDX;
  
  piVar2 = *(int **)(in_EDX + 4);
  *(undefined1 *)(in_EDX + 0x38) = 1;
  if (piVar2 != (int *)0x0) {
    while( true ) {
      iVar1 = *piVar2;
      piVar2 = (int *)piVar2[2];
      if ((*(int *)(iVar1 + 300) != 0) && (*(int *)(iVar1 + 0x158) != 0)) break;
      if (piVar2 == (int *)0x0) {
        return;
      }
    }
    *(undefined1 *)(in_EDX + 0x38) = 0;
  }
  return;
}

