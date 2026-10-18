// FUN_00a84930 @ 00a84930 body=[[00a84930, 00a84984]]


void FUN_00a84930(int param_1)

{
  int iVar1;
  int *piVar2;
  int *in_ECX;
  
  iVar1 = *in_ECX;
  *in_ECX = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0x69) == '\0') {
    *(int **)(*(int *)(iVar1 + 8) + 4) = in_ECX;
  }
  *(int *)(iVar1 + 4) = in_ECX[1];
  if (in_ECX == *(int **)(*(int *)(param_1 + 4) + 4)) {
    *(int *)(*(int *)(param_1 + 4) + 4) = iVar1;
    *(int **)(iVar1 + 8) = in_ECX;
    in_ECX[1] = iVar1;
    return;
  }
  piVar2 = (int *)in_ECX[1];
  if (in_ECX == (int *)piVar2[2]) {
    piVar2[2] = iVar1;
    *(int **)(iVar1 + 8) = in_ECX;
    in_ECX[1] = iVar1;
    return;
  }
  *piVar2 = iVar1;
  *(int **)(iVar1 + 8) = in_ECX;
  in_ECX[1] = iVar1;
  return;
}

