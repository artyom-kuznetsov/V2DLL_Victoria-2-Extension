// FUN_00413740 @ 00413740 body=[[00413740, 00413776]]


void FUN_00413740(int param_1)

{
  int *piVar1;
  int in_ECX;
  
  if (*(char *)(in_ECX + 0x14) != '\0') {
    DAT_013f08e0 = DAT_013f08e0 + -1;
  }
  for (piVar1 = *(int **)(in_ECX + 4); (piVar1 != (int *)0x0 && (*piVar1 != param_1));
      piVar1 = (int *)piVar1[2]) {
  }
  FUN_005f2ae0(piVar1);
  return;
}

