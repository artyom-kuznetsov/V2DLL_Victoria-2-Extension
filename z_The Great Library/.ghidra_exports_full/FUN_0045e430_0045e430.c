// FUN_0045e430 @ 0045e430 body=[[0045e430, 0045e4d9]]


int FUN_0045e430(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = *(int *)(param_1 + 0x44) - *(int *)(param_1 + 0x40) >> 2;
  iVar2 = 0;
  if (0 < iVar4) {
    do {
      cVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + iVar2 * 4) + 0x18))(param_2);
      if (cVar1 != '\0') {
        iVar3 = iVar3 + *(int *)(*(int *)(*(int *)(param_1 + 0x40) + iVar2 * 4) + 0x1c);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar4);
    if (0 < iVar3) {
      iVar2 = __alldiv((longlong)*(int *)(*(int *)(param_2 + 0x28) + 0x80) *
                       (longlong)(iVar3 * 1000),1000,0);
      FUN_00401000(0x43fa4001);
      iVar3 = FUN_00b31c00();
      return (iVar3 + iVar2) / 1000;
    }
  }
  return iVar3;
}

