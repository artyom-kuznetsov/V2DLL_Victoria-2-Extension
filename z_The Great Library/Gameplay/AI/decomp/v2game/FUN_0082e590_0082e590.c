// FUN_0082e590 @ 0082e590 body=[[0082e590, 0082e5c6]]


void FUN_0082e590(int param_1)

{
  int *piVar1;
  int in_ECX;
  
  *(undefined4 *)(param_1 + 0xa0) = 0;
  for (piVar1 = *(int **)(in_ECX + 0xbc); (piVar1 != (int *)0x0 && (*piVar1 != param_1));
      piVar1 = (int *)piVar1[2]) {
  }
  FUN_005f2ae0(piVar1);
  return;
}

