// FUN_0063f390 @ 0063f390 body=[[0063f390, 0063f3c6]]


void FUN_0063f390(int param_1)

{
  int *piVar1;
  int in_ECX;
  
  if (*(char *)(in_ECX + 0x14) != '\0') {
    DAT_013f090c = DAT_013f090c + -1;
  }
  for (piVar1 = *(int **)(in_ECX + 4); (piVar1 != (int *)0x0 && (*piVar1 != param_1));
      piVar1 = (int *)piVar1[2]) {
  }
  FUN_005f2ae0(piVar1);
  return;
}

