// FUN_0053ec70 @ 0053ec70 body=[[0053ec70, 0053ecba]]


int FUN_0053ec70(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  int unaff_EDI;
  
  iVar4 = 0;
  for (piVar1 = *(int **)(in_ECX + 0xe44); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
    iVar2 = *(int *)(*piVar1 + 0x60);
    while (iVar3 = iVar2, iVar3 != 0) {
      iVar2 = *(int *)(iVar3 + 0x224);
      if ((*(int *)(*(int *)(iVar3 + 0x18) + 300) == unaff_EDI) && (*(int *)(iVar3 + 0x17c) == 0)) {
        iVar4 = iVar4 + 1;
      }
    }
  }
  return iVar4;
}

