// FUN_005138f0 @ 005138f0 body=[[005138f0, 00513929]]


int FUN_005138f0(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  
  piVar2 = *(int **)(in_ECX + 0xe44);
  iVar4 = 0;
  while (piVar2 != (int *)0x0) {
    iVar3 = *(int *)(*piVar2 + 0x60);
    piVar2 = (int *)piVar2[2];
    while (iVar3 != 0) {
      piVar1 = (int *)(iVar3 + 0x18);
      iVar3 = *(int *)(iVar3 + 0x224);
      if (*(int *)(*piVar1 + 0x10) == 0) {
        iVar4 = iVar4 + 1;
      }
    }
  }
  return iVar4;
}

