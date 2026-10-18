// FUN_004e5150 @ 004e5150 body=[[004e5150, 004e5176]]


undefined4 FUN_004e5150(void)

{
  int *piVar1;
  int in_EAX;
  int in_ECX;
  
  piVar1 = *(int **)(in_EAX + 0x94);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    if (*piVar1 == in_ECX) break;
    piVar1 = (int *)piVar1[2];
  }
  return CONCAT31((int3)((uint)piVar1 >> 8),1);
}

