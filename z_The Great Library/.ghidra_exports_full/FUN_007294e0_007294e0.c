// FUN_007294e0 @ 007294e0 body=[[007294e0, 00729609]]


void FUN_007294e0(int param_1,int param_2,int param_3,int *param_4)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  
  if (param_2 <= param_3) {
    *(int *)(param_1 + param_2 * 4) = *param_4;
    return;
  }
  while( true ) {
    iVar6 = (param_2 + -1) / 2;
    iVar3 = *(int *)(param_1 + iVar6 * 4);
    iVar7 = *(int *)(DAT_012588e8 + 0xbcc);
    iVar4 = *(int *)(*(int *)(*param_4 + 0x28) + 8);
    iVar9 = *(int *)(*(int *)(iVar3 + 0x28) + 8);
    uVar11 = (uint)*(byte *)(iVar9 + 0x72c + iVar7);
    uVar8 = (uint)*(byte *)(iVar9 + 0x784 + iVar7);
    uVar5 = *(uint *)(*(int *)(iVar7 + 0x76c) + uVar11 * 8);
    puVar1 = (uint *)(*(int *)(iVar7 + 0x7c4) + uVar8 * 8);
    iVar9 = (*(int *)(*(int *)(iVar7 + 0x76c) + 4 + uVar11 * 8) -
            *(int *)(*(int *)(iVar7 + 0x7c4) + 4 + uVar8 * 8)) - (uint)(uVar5 < *puVar1);
    uVar11 = (uint)*(byte *)(iVar4 + 0x784 + iVar7);
    uVar10 = (uint)*(byte *)(iVar4 + 0x72c + iVar7);
    uVar8 = *(uint *)(*(int *)(iVar7 + 0x76c) + uVar10 * 8);
    puVar2 = (uint *)(*(int *)(iVar7 + 0x7c4) + uVar11 * 8);
    iVar7 = (*(int *)(*(int *)(iVar7 + 0x76c) + 4 + uVar10 * 8) -
            *(int *)(*(int *)(iVar7 + 0x7c4) + 4 + uVar11 * 8)) - (uint)(uVar8 < *puVar2);
    if (iVar9 < iVar7) {
      *(int *)(param_1 + param_2 * 4) = *param_4;
      return;
    }
    if ((iVar9 <= iVar7) && (uVar5 - *puVar1 <= uVar8 - *puVar2)) break;
    *(int *)(param_1 + param_2 * 4) = iVar3;
    param_2 = iVar6;
    if (iVar6 <= param_3) {
      *(int *)(param_1 + iVar6 * 4) = *param_4;
      return;
    }
  }
  *(int *)(param_1 + param_2 * 4) = *param_4;
  return;
}

