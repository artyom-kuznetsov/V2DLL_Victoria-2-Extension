// FUN_005dc050 @ 005dc050 body=[[005dc050, 005dc092]]


int FUN_005dc050(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_ECX;
  int *piVar4;
  int iVar5;
  
  piVar1 = (int *)*in_ECX;
  iVar3 = 0;
  while (piVar1 != (int *)0x0) {
    piVar4 = *(int **)(*piVar1 + 0x38);
    piVar1 = (int *)piVar1[2];
    iVar5 = 0;
    if (piVar4 != (int *)0x0) {
      do {
        iVar2 = *piVar4;
        piVar4 = (int *)piVar4[2];
        if (*(int *)(*(int *)(iVar2 + 0x38) + 0x24) == *(int *)(param_1 + 0x24)) {
          iVar5 = iVar5 + 1;
        }
      } while (piVar4 != (int *)0x0);
    }
    iVar3 = iVar3 + iVar5;
  }
  return iVar3;
}

