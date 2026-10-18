// FUN_004e7db0 @ 004e7db0 body=[[004e7db0, 004e7ddc]]


void FUN_004e7db0(void)

{
  int *piVar1;
  int in_EAX;
  int unaff_EDI;
  
  for (piVar1 = *(int **)(in_EAX + 0xa4); (piVar1 != (int *)0x0 && (*piVar1 != unaff_EDI));
      piVar1 = (int *)piVar1[2]) {
  }
  FUN_005f2ae0(piVar1);
  FUN_00965bd0(0);
  return;
}

