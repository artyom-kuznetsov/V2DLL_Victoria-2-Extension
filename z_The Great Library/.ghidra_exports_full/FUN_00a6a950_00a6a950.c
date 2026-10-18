// FUN_00a6a950 @ 00a6a950 body=[[00a6a950, 00a6a993] [00a6a99e, 00a6a9a6]]


undefined4 FUN_00a6a950(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  uint *in_EAX;
  int unaff_ESI;
  
  piVar1 = (int *)(*(int *)(unaff_ESI + 8) + (*in_EAX % *(uint *)(unaff_ESI + 4)) * 4);
  piVar4 = (int *)*piVar1;
  piVar3 = (int *)0x0;
  while( true ) {
    piVar2 = piVar4;
    if (piVar2 == (int *)0x0) {
      return 0;
    }
    if (*(uint *)(*piVar2 + 0x1c) == *in_EAX) break;
    piVar4 = (int *)piVar2[1];
    piVar3 = piVar2;
  }
  if (piVar3 == (int *)0x0) {
    *piVar1 = piVar2[1];
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(piVar2);
  }
  piVar3[1] = piVar2[1];
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(piVar2);
}

