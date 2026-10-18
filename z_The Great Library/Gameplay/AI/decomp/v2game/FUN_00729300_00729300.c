// FUN_00729300 @ 00729300 body=[[00729300, 0072940a]]


void FUN_00729300(int param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  iVar6 = DAT_012588e8;
  if (param_2 <= param_3) {
    *(int *)(param_1 + param_2 * 4) = *param_4;
    return;
  }
  while( true ) {
    iVar7 = (param_2 + -1) / 2;
    iVar1 = *(int *)(param_1 + iVar7 * 4);
    iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar6 + 0xb60) * 4);
    iVar3 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar6 + 0xb60) * 4);
    uVar9 = (uint)*(byte *)(*(int *)(*(int *)(*param_4 + 0x28) + 8) + 0x118c + iVar2);
    iVar4 = *(int *)(iVar2 + 0x11cc);
    iVar5 = *(int *)(iVar4 + 4 + uVar9 * 8);
    uVar8 = (uint)*(byte *)(*(int *)(*(int *)(iVar1 + 0x28) + 8) + 0x118c + iVar3);
    iVar3 = *(int *)(iVar3 + 0x11cc);
    iVar2 = *(int *)(iVar3 + 4 + uVar8 * 8);
    if (iVar2 < iVar5) {
      *(int *)(param_1 + param_2 * 4) = *param_4;
      return;
    }
    if ((iVar2 <= iVar5) && (*(uint *)(iVar3 + uVar8 * 8) <= *(uint *)(iVar4 + uVar9 * 8))) break;
    *(int *)(param_1 + param_2 * 4) = iVar1;
    param_2 = iVar7;
    if (iVar7 <= param_3) {
      *(int *)(param_1 + iVar7 * 4) = *param_4;
      return;
    }
  }
  *(int *)(param_1 + param_2 * 4) = *param_4;
  return;
}

