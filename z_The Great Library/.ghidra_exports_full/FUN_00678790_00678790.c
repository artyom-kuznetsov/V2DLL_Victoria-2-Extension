// FUN_00678790 @ 00678790 body=[[00678790, 006787b5]]


undefined4 FUN_00678790(int param_1)

{
  int *piVar1;
  int in_ECX;
  
  for (piVar1 = *(int **)(in_ECX + 0x164); (piVar1 != (int *)0x0 && (*piVar1 != param_1));
      piVar1 = (int *)piVar1[2]) {
  }
  return CONCAT31((int3)((uint)piVar1 >> 8),piVar1 != (int *)0x0);
}

