// FUN_0053d610 @ 0053d610 body=[[0053d610, 0053d639]]


int FUN_0053d610(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar1 = *(int *)(in_EAX + 0xbcc);
  iVar2 = 0;
  iVar3 = *(int *)(iVar1 + 700) - *(int *)(iVar1 + 0x2b8) >> 2;
  if (0 < iVar3) {
    piVar4 = *(int **)(iVar1 + 0x2b8);
    do {
      iVar2 = iVar2 + *piVar4;
      piVar4 = piVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return iVar2;
}

