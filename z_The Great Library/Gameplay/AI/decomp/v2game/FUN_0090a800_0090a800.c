// FUN_0090a800 @ 0090a800 body=[[0090a800, 0090a822]]


undefined4 FUN_0090a800(void)

{
  int *piVar1;
  int in_EAX;
  int in_ECX;
  
  for (piVar1 = *(int **)(in_EAX + 0x120); (piVar1 != (int *)0x0 && (*piVar1 != in_ECX));
      piVar1 = (int *)piVar1[2]) {
  }
  return CONCAT31((int3)((uint)piVar1 >> 8),piVar1 != (int *)0x0);
}

