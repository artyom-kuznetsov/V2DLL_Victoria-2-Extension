// FUN_00821bf0 @ 00821bf0 body=[[00821bf0, 00821d05]]


void FUN_00821bf0(int param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  
  if (param_2 <= param_3) {
    *(int *)(param_1 + param_2 * 4) = *param_4;
    return;
  }
  while( true ) {
    iVar3 = (param_2 + -1) / 2;
    iVar1 = *param_4;
    iVar2 = *(int *)(param_1 + iVar3 * 4);
    uVar4 = *(uint *)(iVar2 + 0x1d8) - *(uint *)(iVar2 + 0x168);
    uVar5 = uVar4 - *(uint *)(iVar2 + 0x158);
    uVar6 = uVar5 + *(uint *)(iVar2 + 0x170);
    iVar8 = ((((*(int *)(iVar2 + 0x1dc) - *(int *)(iVar2 + 0x16c)) -
              (uint)(*(uint *)(iVar2 + 0x1d8) < *(uint *)(iVar2 + 0x168))) - *(int *)(iVar2 + 0x15c)
             ) - (uint)(uVar4 < *(uint *)(iVar2 + 0x158))) + *(int *)(iVar2 + 0x174) +
            (uint)CARRY4(uVar5,*(uint *)(iVar2 + 0x170)) + *(int *)(iVar2 + 0x164) +
            (uint)CARRY4(uVar6,*(uint *)(iVar2 + 0x160));
    uVar4 = *(uint *)(iVar1 + 0x1d8) - *(uint *)(iVar1 + 0x168);
    uVar5 = uVar4 - *(uint *)(iVar1 + 0x158);
    uVar7 = uVar5 + *(uint *)(iVar1 + 0x170);
    iVar9 = ((((*(int *)(iVar1 + 0x1dc) - *(int *)(iVar1 + 0x16c)) -
              (uint)(*(uint *)(iVar1 + 0x1d8) < *(uint *)(iVar1 + 0x168))) - *(int *)(iVar1 + 0x15c)
             ) - (uint)(uVar4 < *(uint *)(iVar1 + 0x158))) + *(int *)(iVar1 + 0x174) +
            (uint)CARRY4(uVar5,*(uint *)(iVar1 + 0x170)) + *(int *)(iVar1 + 0x164) +
            (uint)CARRY4(uVar7,*(uint *)(iVar1 + 0x160));
    if (iVar9 < iVar8) {
      *(int *)(param_1 + param_2 * 4) = *param_4;
      return;
    }
    if ((iVar9 <= iVar8) && (uVar7 + *(uint *)(iVar1 + 0x160) <= uVar6 + *(uint *)(iVar2 + 0x160)))
    break;
    *(int *)(param_1 + param_2 * 4) = iVar2;
    param_2 = iVar3;
    if (iVar3 <= param_3) {
      *(int *)(param_1 + iVar3 * 4) = *param_4;
      return;
    }
  }
  *(int *)(param_1 + param_2 * 4) = *param_4;
  return;
}

