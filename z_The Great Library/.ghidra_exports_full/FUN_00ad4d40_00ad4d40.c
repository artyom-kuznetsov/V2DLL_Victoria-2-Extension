// FUN_00ad4d40 @ 00ad4d40 body=[[00ad4d40, 00ad4df3]]


void FUN_00ad4d40(uint param_1,undefined4 param_2)

{
  int *piVar1;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int in_ECX;
  int iVar7;
  
  iVar4 = param_1;
  piVar1 = (int *)(param_1 + 0x1d0);
  puVar2 = (ushort *)(param_1 + 400);
  param_1 = (uint)*puVar2;
  if (*puVar2 != 0) {
    iVar5 = *piVar1 * 0x20;
    iVar7 = 0;
    do {
      iVar3 = *(int *)(*(int *)(in_ECX + 0x80) +
                      (uint)*(ushort *)(*(int *)(iVar4 + 0x18c) + iVar7) * 4);
      if ((*(int *)(*(int *)(iVar3 + 0x1c) + 0x14 + iVar5) != 0) &&
         (iVar6 = (**(code **)(**(int **)(*(int *)(iVar3 + 0x1c) + iVar5 + 0x14) + 0x10))(),
         iVar6 != 0)) {
        FUN_00aeaef0(iVar4,iVar3,param_2);
      }
      if ((*(int *)(*(int *)(iVar3 + 0x1c) + 0x1c + iVar5) != 0) &&
         (iVar6 = (**(code **)(**(int **)(*(int *)(iVar3 + 0x1c) + iVar5 + 0x1c) + 0x10))(),
         iVar6 != 0)) {
        FUN_00aeaef0(iVar4,iVar3,param_2);
      }
      iVar7 = iVar7 + 2;
      param_1 = param_1 - 1;
    } while (param_1 != 0);
  }
  return;
}

