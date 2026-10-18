// FUN_00522390 @ 00522390 body=[[00522390, 005223b3]]


void FUN_00522390(void)

{
  int *piVar1;
  int in_EAX;
  int in_EDX;
  
  for (piVar1 = *(int **)(in_EAX + 0xe54); (piVar1 != (int *)0x0 && (*piVar1 != in_EDX));
      piVar1 = (int *)piVar1[2]) {
  }
  FUN_005f2ae0(piVar1);
  return;
}

