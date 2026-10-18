// FUN_006f38d0 @ 006f38d0 body=[[006f38d0, 006f38e9] [006f38f0, 006f3916] [006f3920, 006f3946]]


bool FUN_006f38d0(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  int unaff_EDI;
  
  iVar4 = *(int *)(in_ECX + 0x68) * 10;
  iVar3 = *(int *)(unaff_EDI + 0x68) * 10;
  iVar1 = *(int *)(in_ECX + 0x60);
  while (iVar2 = iVar1, iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0x224);
    if ((*(int *)(iVar2 + 0x17c) != 0) && (*(int *)(iVar2 + 0x20) == 0)) {
      iVar4 = iVar4 + -9;
    }
  }
  iVar1 = *(int *)(unaff_EDI + 0x60);
  while (iVar2 = iVar1, iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0x224);
    if ((*(int *)(iVar2 + 0x17c) != 0) && (*(int *)(iVar2 + 0x20) == 0)) {
      iVar3 = iVar3 + -9;
    }
  }
  return iVar4 < iVar3;
}

