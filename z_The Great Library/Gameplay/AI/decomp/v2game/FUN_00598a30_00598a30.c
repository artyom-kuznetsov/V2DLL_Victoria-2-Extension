// FUN_00598a30 @ 00598a30 body=[[00598a30, 00598a61]]


int FUN_00598a30(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_EDX;
  int *piVar4;
  
  iVar2 = 0;
  iVar3 = *(int *)(in_EDX + 0x70) - *(int *)(in_EDX + 0x6c) >> 2;
  if (0 < iVar3) {
    piVar4 = *(int **)(in_EDX + 0x6c);
    do {
      iVar1 = *(int *)(*piVar4 + 0x5c);
      if (((iVar1 != 5) && (iVar1 != 6)) && (iVar1 != 4)) {
        iVar2 = iVar2 + 1;
      }
      piVar4 = piVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return iVar2;
}

