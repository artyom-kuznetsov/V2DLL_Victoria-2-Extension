// FUN_00513d20 @ 00513d20 body=[[00513d20, 00513d43]]


void FUN_00513d20(void)

{
  int *piVar1;
  int in_EAX;
  int in_EDX;
  
  for (piVar1 = *(int **)(in_EAX + 0x7b4); (piVar1 != (int *)0x0 && (*piVar1 != in_EDX));
      piVar1 = (int *)piVar1[2]) {
  }
  FUN_005f2ae0(piVar1);
  return;
}

