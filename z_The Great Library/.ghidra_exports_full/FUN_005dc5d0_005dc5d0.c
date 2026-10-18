// FUN_005dc5d0 @ 005dc5d0 body=[[005dc5d0, 005dc5dc] [005dc5e0, 005dc621]]


int FUN_005dc5d0(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 *in_EAX;
  int iVar4;
  int iVar5;
  
  piVar1 = (int *)*in_EAX;
  iVar4 = 0;
  while (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    piVar1 = (int *)piVar1[2];
    iVar5 = 0;
    for (piVar3 = *(int **)(iVar2 + 0x90); piVar3 != (int *)0x0; piVar3 = (int *)piVar3[2]) {
      iVar5 = iVar5 + *(int *)(*(int *)(*piVar3 + 0x38) + 600) / 1000;
    }
    iVar4 = iVar4 + iVar5;
  }
  return iVar4;
}

