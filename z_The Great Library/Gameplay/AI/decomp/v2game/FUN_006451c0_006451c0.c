// FUN_006451c0 @ 006451c0 body=[[006451c0, 00645329]]


int * FUN_006451c0(int param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int local_8;
  
  if (*(int *)(param_1 + 0x20cc) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = FUN_007f15e0(param_1 + 0x20bc,param_2,*(undefined4 *)(param_1 + 0x20b4));
  }
  *(int *)(param_1 + 0x3a1c) = iVar6;
  if (iVar6 != 0) {
    iVar1 = *(int *)(*(int *)(DAT_0125870c + 0x2238) + *(int *)(*(int *)(iVar6 + 8) + 0xb4) * 4);
    iVar3 = FUN_00475500();
    if ((((*(uint *)(iVar3 + 0xec) & *(uint *)(iVar3 + 0xe8) & 0x20) != 0) &&
        (piVar4 = (int *)FUN_00644b70(param_1,iVar6,param_2), piVar4 != (int *)0x0)) &&
       ((param_4 == '\0' || (cVar2 = (**(code **)(*piVar4 + 8))(), cVar2 != '\0')))) {
      return piVar4;
    }
    iVar3 = *(int *)(iVar6 + 8);
    iVar5 = 0;
    if (0 < (*(int *)(iVar3 + 0xcc) - *(int *)(iVar3 + 200)) / 0x24) {
      local_8 = 0;
      do {
        iVar3 = *(int *)(*(int *)(param_1 + 0x20d8) +
                        *(int *)(local_8 + 4 + *(int *)(iVar3 + 200)) * 4);
        if (((iVar3 != 0) &&
            (piVar4 = (int *)FUN_00644b70(param_1,iVar3,param_2), piVar4 != (int *)0x0)) &&
           ((param_4 == '\0' || (cVar2 = (**(code **)(*piVar4 + 8))(), cVar2 != '\0')))) {
          return piVar4;
        }
        iVar3 = *(int *)(iVar6 + 8);
        local_8 = local_8 + 0x24;
        iVar5 = iVar5 + 1;
      } while (iVar5 < (*(int *)(iVar3 + 0xcc) - *(int *)(iVar3 + 200)) / 0x24);
    }
    if (iVar1 != 0) {
      return (int *)(iVar1 + 8);
    }
  }
  return (int *)0x0;
}

