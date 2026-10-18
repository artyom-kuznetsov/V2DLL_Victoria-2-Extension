// FUN_0045e060 @ 0045e060 body=[[0045e060, 0045e125]]


int FUN_0045e060(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_8;
  
  iVar5 = *(int *)(param_1 + 0x44) - *(int *)(param_1 + 0x40) >> 2;
  iVar6 = 0;
  local_8 = 0;
  iVar4 = 0;
  if (0 < iVar5) {
    do {
      cVar1 = (**(code **)(*(int *)(*(int *)(*(int *)(param_1 + 0x40) + iVar6 * 4) + 8) + 0x18))
                        (param_2);
      if (cVar1 != '\0') {
        iVar4 = *(int *)(*(int *)(*(int *)(param_1 + 0x40) + iVar6 * 4) + 0x24);
        iVar2 = __alldiv((longlong)*(int *)(*(int *)(param_2 + 0x28) + 0x80) *
                         (longlong)(iVar4 * 1000),1000,0);
        FUN_00401000(0x43fa4001);
        iVar3 = FUN_00b31c00();
        iVar2 = (iVar3 + iVar2) / 1000;
        if ((0 < iVar4) && (iVar2 == 0)) {
          iVar2 = 1;
        }
        local_8 = local_8 + iVar2;
      }
      iVar6 = iVar6 + 1;
      iVar4 = local_8;
    } while (iVar6 < iVar5);
  }
  return iVar4;
}

