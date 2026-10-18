// FUN_00502cc0 @ 00502cc0 body=[[00502cc0, 00502ce3]]


void FUN_00502cc0(void)

{
  int *piVar1;
  int in_EAX;
  int in_EDX;
  
  for (piVar1 = *(int **)(in_EAX + 0x4f8); (piVar1 != (int *)0x0 && (*piVar1 != in_EDX));
      piVar1 = (int *)piVar1[2]) {
  }
  FUN_005f2ae0(piVar1);
  return;
}

