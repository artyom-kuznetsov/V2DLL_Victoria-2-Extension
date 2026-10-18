// FUN_0050e450 @ 0050e450 body=[[0050e450, 0050e4a5]]


int FUN_0050e450(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int in_EAX;
  
  iVar1 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(in_EAX + 0xbe4) * 4);
  piVar2 = *(int **)(in_EAX + 0xa08);
  iVar4 = 0;
  iVar5 = -1000;
  while( true ) {
    if (piVar2 == (int *)0x0) {
      return iVar4;
    }
    iVar3 = *piVar2;
    piVar2 = (int *)piVar2[2];
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0xe8) == iVar3)) break;
    if (iVar5 < *(int *)(iVar3 + 0x30)) {
      iVar4 = iVar3;
      iVar5 = *(int *)(iVar3 + 0x30);
    }
  }
  return iVar3;
}

