// FUN_007290e0 @ 007290e0 body=[[007290e0, 007291a4]]


void FUN_007290e0(int param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_2 <= param_3) {
    *(int *)(param_1 + param_2 * 4) = *param_4;
    return;
  }
  while( true ) {
    iVar4 = (param_2 + -1) / 2;
    iVar1 = *(int *)(DAT_012588e8 + 0xbcc);
    uVar5 = (uint)*(byte *)(*(int *)(*(int *)(*param_4 + 0x28) + 8) + 0x5bc + iVar1);
    iVar2 = *(int *)(iVar1 + 0x5fc);
    uVar6 = (uint)*(byte *)(*(int *)(*(int *)(*(int *)(param_1 + iVar4 * 4) + 0x28) + 8) + 0x5bc +
                           iVar1);
    iVar3 = *(int *)(iVar2 + 4 + uVar5 * 8);
    iVar1 = *(int *)(iVar2 + 4 + uVar6 * 8);
    if (iVar1 < iVar3) {
      *(int *)(param_1 + param_2 * 4) = *param_4;
      return;
    }
    if ((iVar1 <= iVar3) && (*(uint *)(iVar2 + uVar6 * 8) <= *(uint *)(iVar2 + uVar5 * 8))) break;
    *(undefined4 *)(param_1 + param_2 * 4) = *(undefined4 *)(param_1 + iVar4 * 4);
    param_2 = iVar4;
    if (iVar4 <= param_3) {
      *(int *)(param_1 + iVar4 * 4) = *param_4;
      return;
    }
  }
  *(int *)(param_1 + param_2 * 4) = *param_4;
  return;
}

