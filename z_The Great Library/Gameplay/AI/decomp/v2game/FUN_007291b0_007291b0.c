// FUN_007291b0 @ 007291b0 body=[[007291b0, 007291dd] [007291e0, 007292f8]]


void FUN_007291b0(int param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (param_2 <= param_3) {
    *(int *)(param_1 + param_2 * 4) = *param_4;
    return;
  }
  while( true ) {
    iVar3 = (param_2 + -1) / 2;
    iVar1 = *(int *)(param_1 + iVar3 * 4);
    iVar7 = *(int *)(DAT_012588e8 + 0xbcc);
    iVar2 = *(int *)(*(int *)(iVar1 + 0x28) + 8);
    iVar6 = *(int *)(*(int *)(*param_4 + 0x28) + 8);
    uVar4 = (uint)*(byte *)(iVar6 + 0x5bc + iVar7);
    uVar5 = (uint)*(byte *)(iVar6 + 0x288 + iVar7);
    uVar8 = __allmul(*(undefined4 *)(*(int *)(iVar7 + 0x2c8) + uVar5 * 8),
                     *(undefined4 *)(*(int *)(iVar7 + 0x2c8) + 4 + uVar5 * 8),
                     *(undefined4 *)(*(int *)(iVar7 + 0x5fc) + uVar4 * 8),
                     *(undefined4 *)(*(int *)(iVar7 + 0x5fc) + 4 + uVar4 * 8));
    iVar6 = (int)((ulonglong)uVar8 >> 0x20);
    uVar4 = (uint)*(byte *)(iVar2 + 0x288 + iVar7);
    uVar5 = (uint)*(byte *)(iVar2 + 0x5bc + iVar7);
    uVar9 = __allmul(*(undefined4 *)(*(int *)(iVar7 + 0x2c8) + uVar4 * 8),
                     *(undefined4 *)(*(int *)(iVar7 + 0x2c8) + 4 + uVar4 * 8),
                     *(undefined4 *)(*(int *)(iVar7 + 0x5fc) + uVar5 * 8),
                     *(undefined4 *)(*(int *)(iVar7 + 0x5fc) + 4 + uVar5 * 8));
    iVar7 = (int)((ulonglong)uVar9 >> 0x20);
    if (iVar7 < iVar6) {
      *(int *)(param_1 + param_2 * 4) = *param_4;
      return;
    }
    if ((iVar7 <= iVar6) && (((uint)uVar9 & 0xffff8000) <= ((uint)uVar8 & 0xffff8000))) break;
    *(int *)(param_1 + param_2 * 4) = iVar1;
    param_2 = iVar3;
    if (iVar3 <= param_3) {
      *(int *)(param_1 + iVar3 * 4) = *param_4;
      return;
    }
  }
  *(int *)(param_1 + param_2 * 4) = *param_4;
  return;
}

