// FUN_0090e050 @ 0090e050 body=[[0090e050, 0090e073]]


void FUN_0090e050(void)

{
  int *piVar1;
  int in_EAX;
  int in_EDX;
  
  for (piVar1 = *(int **)(in_EAX + 8); (piVar1 != (int *)0x0 && (*piVar1 != in_EDX));
      piVar1 = (int *)piVar1[2]) {
  }
  FUN_005f2ae0(piVar1);
  return;
}

