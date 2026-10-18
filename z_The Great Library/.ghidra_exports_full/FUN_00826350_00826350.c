// FUN_00826350 @ 00826350 body=[[00826350, 00826375]]


undefined4 FUN_00826350(int param_1)

{
  int *piVar1;
  int in_ECX;
  
  for (piVar1 = *(int **)(in_ECX + 0x54); (piVar1 != (int *)0x0 && (*piVar1 != param_1));
      piVar1 = (int *)piVar1[2]) {
  }
  return CONCAT31((int3)((uint)piVar1 >> 8),piVar1 != (int *)0x0);
}

