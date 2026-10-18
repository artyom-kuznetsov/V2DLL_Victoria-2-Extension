// FUN_00565910 @ 00565910 body=[[00565910, 00565935]]


int FUN_00565910(void)

{
  int iVar1;
  int iVar2;
  int in_EDX;
  int *piVar3;
  
  iVar1 = 0;
  iVar2 = *(int *)(in_EDX + 0x80) - *(int *)(in_EDX + 0x7c) >> 2;
  if (0 < iVar2) {
    piVar3 = *(int **)(in_EDX + 0x7c);
    do {
      if (0 < *piVar3) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar1 < iVar2);
  }
  return -1;
}

