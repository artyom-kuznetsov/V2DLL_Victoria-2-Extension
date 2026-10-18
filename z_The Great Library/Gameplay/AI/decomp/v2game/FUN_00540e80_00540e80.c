// FUN_00540e80 @ 00540e80 body=[[00540e80, 00540ed1]]


int FUN_00540e80(int param_1)

{
  int iVar1;
  int iVar2;
  int in_EDX;
  int *piVar3;
  
  iVar1 = *(int *)(in_EDX + 0x1594) - *(int *)(in_EDX + 0x1590) >> 2;
  iVar2 = 0;
  if (0 < iVar1) {
    piVar3 = *(int **)(in_EDX + 0x1590);
    do {
      if (*(int *)(*piVar3 + 0x14) == *(int *)(param_1 + 4)) {
        return (*(int **)(in_EDX + 0x1590))[iVar2];
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < iVar1);
  }
  return 0;
}

