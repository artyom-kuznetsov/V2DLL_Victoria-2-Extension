// FUN_00971160 @ 00971160 body=[[00971160, 00971179]]


undefined4 FUN_00971160(void)

{
  int *piVar1;
  int in_EAX;
  int in_ECX;
  
  for (piVar1 = *(int **)(in_EAX + 0x10); (piVar1 != (int *)0x0 && (*piVar1 != in_ECX));
      piVar1 = (int *)piVar1[2]) {
  }
  return CONCAT31((int3)((uint)piVar1 >> 8),piVar1 != (int *)0x0);
}

