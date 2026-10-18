// FUN_0059a850 @ 0059a850 body=[[0059a850, 0059a8d4]]


void FUN_0059a850(int param_1)

{
  int *piVar1;
  int in_ECX;
  int iVar2;
  
  for (piVar1 = *(int **)(in_ECX + 0x16c); (piVar1 != (int *)0x0 && (*piVar1 != param_1));
      piVar1 = (int *)piVar1[2]) {
  }
  FUN_005f2ae0(piVar1);
  for (piVar1 = *(int **)(in_ECX + 0x17c); (piVar1 != (int *)0x0 && (*piVar1 != param_1));
      piVar1 = (int *)piVar1[2]) {
  }
  FUN_005f2ae0(piVar1);
  piVar1 = (int *)(in_ECX + 0xec);
  iVar2 = 0x20;
  do {
    if (piVar1[-0x20] == param_1) {
      piVar1[-0x20] = 0;
    }
    if (*piVar1 == param_1) {
      *piVar1 = 0;
    }
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

