// FUN_0053f3b0 @ 0053f3b0 body=[[0053f3b0, 0053f3ff]]


int FUN_0053f3b0(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int in_EDX;
  int *piVar3;
  
  iVar1 = *(int *)(in_EDX + 0x1574) - *(int *)(in_EDX + 0x1570) >> 2;
  iVar2 = 0;
  if (0 < iVar1) {
    piVar3 = *(int **)(in_EDX + 0x1570);
    do {
      if ((*(int *)(*piVar3 + 8) == param_1) && (*(char *)(*piVar3 + 0x20) == param_2)) {
        return (*(int **)(in_EDX + 0x1570))[iVar2];
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < iVar1);
  }
  return 0;
}

