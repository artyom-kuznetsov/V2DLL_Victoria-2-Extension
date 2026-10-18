// FUN_005dc0a0 @ 005dc0a0 body=[[005dc0a0, 005dc0de]]


int FUN_005dc0a0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_ECX;
  int iVar5;
  
  piVar1 = (int *)*in_ECX;
  iVar4 = 0;
  while (piVar1 != (int *)0x0) {
    piVar2 = *(int **)(*piVar1 + 0x38);
    piVar1 = (int *)piVar1[2];
    iVar5 = 0;
    while (piVar2 != (int *)0x0) {
      iVar3 = *piVar2;
      piVar2 = (int *)piVar2[2];
      if (*(int *)(*(int *)(iVar3 + 0x38) + 0x34) == param_1) {
        iVar5 = iVar5 + 1;
      }
    }
    iVar4 = iVar4 + iVar5;
  }
  return iVar4;
}

