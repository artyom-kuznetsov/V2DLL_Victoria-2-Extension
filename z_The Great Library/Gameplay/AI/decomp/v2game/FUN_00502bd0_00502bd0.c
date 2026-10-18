// FUN_00502bd0 @ 00502bd0 body=[[00502bd0, 00502bf2]]


undefined4 FUN_00502bd0(void)

{
  int *piVar1;
  int in_EAX;
  int in_ECX;
  
  for (piVar1 = *(int **)(in_EAX + 0x4f8); (piVar1 != (int *)0x0 && (*piVar1 != in_ECX));
      piVar1 = (int *)piVar1[2]) {
  }
  return CONCAT31((int3)((uint)piVar1 >> 8),piVar1 != (int *)0x0);
}

