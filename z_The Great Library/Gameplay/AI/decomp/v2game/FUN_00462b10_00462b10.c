// FUN_00462b10 @ 00462b10 body=[[00462b10, 00462b60]]


void FUN_00462b10(int param_1)

{
  int *piVar1;
  int *piVar2;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 8);
  *(int *)(in_ECX + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0x39) == '\0') {
    *(int *)(*piVar1 + 4) = in_ECX;
  }
  piVar1[1] = *(int *)(in_ECX + 4);
  if (in_ECX == *(int *)(*(int *)(param_1 + 4) + 4)) {
    *(int **)(*(int *)(param_1 + 4) + 4) = piVar1;
    *piVar1 = in_ECX;
    *(int **)(in_ECX + 4) = piVar1;
    return;
  }
  piVar2 = *(int **)(in_ECX + 4);
  if (in_ECX == *piVar2) {
    *piVar2 = (int)piVar1;
    *piVar1 = in_ECX;
    *(int **)(in_ECX + 4) = piVar1;
    return;
  }
  piVar2[2] = (int)piVar1;
  *piVar1 = in_ECX;
  *(int **)(in_ECX + 4) = piVar1;
  return;
}

