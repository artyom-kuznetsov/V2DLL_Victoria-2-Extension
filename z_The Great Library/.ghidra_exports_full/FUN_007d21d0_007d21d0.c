// FUN_007d21d0 @ 007d21d0 body=[[007d21d0, 007d229c]]


void FUN_007d21d0(int param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 <= param_3) {
    *(int *)(param_1 + param_2 * 4) = *param_4;
    return;
  }
  do {
    iVar3 = (param_2 + -1) / 2;
    iVar1 = *(int *)(param_1 + iVar3 * 4);
    iVar2 = *param_4;
    if (*(int *)(iVar2 + 0x178) + *(int *)(iVar2 + 0x174) + *(int *)(iVar2 + 0x170) +
        *(int *)(iVar2 + 0x16c) + *(int *)(iVar2 + 0x168) + *(int *)(iVar2 + 0x164) +
        *(int *)(iVar2 + 0x160) + *(int *)(iVar2 + 0x15c) + *(int *)(iVar2 + 0x158) <=
        *(int *)(iVar1 + 0x178) + *(int *)(iVar1 + 0x174) + *(int *)(iVar1 + 0x170) +
        *(int *)(iVar1 + 0x16c) + *(int *)(iVar1 + 0x168) + *(int *)(iVar1 + 0x164) +
        *(int *)(iVar1 + 0x160) + *(int *)(iVar1 + 0x15c) + *(int *)(iVar1 + 0x158)) break;
    *(int *)(param_1 + param_2 * 4) = iVar1;
    param_2 = iVar3;
  } while (param_3 < iVar3);
  *(int *)(param_1 + param_2 * 4) = *param_4;
  return;
}

