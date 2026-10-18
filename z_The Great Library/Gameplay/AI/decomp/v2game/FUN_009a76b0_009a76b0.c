// FUN_009a76b0 @ 009a76b0 body=[[009a76b0, 009a76e6]]


void FUN_009a76b0(int param_1)

{
  int *piVar1;
  int in_ECX;
  
  if (*(char *)(in_ECX + 0x14) != '\0') {
    DAT_013f0958 = DAT_013f0958 + -1;
  }
  for (piVar1 = *(int **)(in_ECX + 4); (piVar1 != (int *)0x0 && (*piVar1 != param_1));
      piVar1 = (int *)piVar1[2]) {
  }
  FUN_005f2ae0(piVar1);
  return;
}

