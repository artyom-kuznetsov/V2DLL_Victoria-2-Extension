// FUN_00a6a9c0 @ 00a6a9c0 body=[[00a6a9c0, 00a6a9e3]]


int FUN_00a6a9c0(void)

{
  int *piVar1;
  uint *in_EAX;
  int unaff_ESI;
  
  piVar1 = *(int **)(*(int *)(unaff_ESI + 8) + (*in_EAX % *(uint *)(unaff_ESI + 4)) * 4);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    if (*(uint *)(*piVar1 + 0x1c) == *in_EAX) break;
    piVar1 = (int *)piVar1[1];
  }
  return *piVar1;
}

