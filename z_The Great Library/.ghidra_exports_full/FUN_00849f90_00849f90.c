// FUN_00849f90 @ 00849f90 body=[[00849f90, 00849fc6]]


void FUN_00849f90(int param_1)

{
  int *piVar1;
  int in_ECX;
  
  for (piVar1 = *(int **)(in_ECX + 0x1ec); (piVar1 != (int *)0x0 && (*piVar1 != param_1));
      piVar1 = (int *)piVar1[2]) {
  }
  FUN_005f2ae0(piVar1);
  return;
}

