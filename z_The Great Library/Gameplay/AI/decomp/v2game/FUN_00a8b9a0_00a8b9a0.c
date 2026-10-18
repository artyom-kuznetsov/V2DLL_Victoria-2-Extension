// FUN_00a8b9a0 @ 00a8b9a0 body=[[00a8b9a0, 00a8b9d6]]


void FUN_00a8b9a0(int param_1)

{
  int *piVar1;
  int in_ECX;
  
  if (*(char *)(in_ECX + 0x14) != '\0') {
    DAT_013f097c = DAT_013f097c + -1;
  }
  for (piVar1 = *(int **)(in_ECX + 4); (piVar1 != (int *)0x0 && (*piVar1 != param_1));
      piVar1 = (int *)piVar1[2]) {
  }
  FUN_005f2ae0(piVar1);
  return;
}

