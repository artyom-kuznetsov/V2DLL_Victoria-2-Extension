// FUN_009a7550 @ 009a7550 body=[[009a7550, 009a7586]]


void FUN_009a7550(int param_1)

{
  int *piVar1;
  int in_ECX;
  
  if (*(char *)(in_ECX + 0x14) != '\0') {
    DAT_013f0948 = DAT_013f0948 + -1;
  }
  for (piVar1 = *(int **)(in_ECX + 4); (piVar1 != (int *)0x0 && (*piVar1 != param_1));
      piVar1 = (int *)piVar1[2]) {
  }
  FUN_005f2ae0(piVar1);
  return;
}

