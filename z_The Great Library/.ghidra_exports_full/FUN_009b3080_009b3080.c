// FUN_009b3080 @ 009b3080 body=[[009b3080, 009b30e8]]


void FUN_009b3080(int param_1)

{
  int *piVar1;
  int in_ECX;
  int iVar2;
  
  for (piVar1 = *(int **)(in_ECX + 8); (piVar1 != (int *)0x0 && (*piVar1 != param_1));
      piVar1 = (int *)piVar1[2]) {
  }
  FUN_005f2ae0(piVar1);
  if (in_ECX == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = in_ECX + 4;
  }
  if (*(char *)(param_1 + 0x14) != '\0') {
    DAT_013f08e0 = DAT_013f08e0 + -1;
  }
  for (piVar1 = *(int **)(param_1 + 4); (piVar1 != (int *)0x0 && (*piVar1 != iVar2));
      piVar1 = (int *)piVar1[2]) {
  }
  FUN_005f2ae0(piVar1);
  return;
}

