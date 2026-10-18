// FUN_00729610 @ 00729610 body=[[00729610, 007296df]]


void FUN_00729610(int param_1,int param_2,int param_3,int *param_4)

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
    iVar3 = (param_2 + -1) / 2;
    iVar4 = *(int *)(DAT_012588e8 + 0xb60) * 0x58 + *(int *)(*(int *)(DAT_012588e8 + 0xbcc) + 0x3f4)
    ;
    uVar6 = (uint)*(byte *)(*(int *)(*(int *)(*(int *)(param_1 + iVar3 * 4) + 0x28) + 8) + 8 + iVar4
                           );
    iVar1 = *(int *)(iVar4 + 0x48);
    uVar5 = (uint)*(byte *)(*(int *)(*(int *)(*param_4 + 0x28) + 8) + 8 + iVar4);
    iVar2 = *(int *)(iVar1 + 4 + uVar5 * 8);
    iVar4 = *(int *)(iVar1 + 4 + uVar6 * 8);
    if (iVar4 < iVar2) {
      *(int *)(param_1 + param_2 * 4) = *param_4;
      return;
    }
    if ((iVar4 <= iVar2) && (*(uint *)(iVar1 + uVar6 * 8) <= *(uint *)(iVar1 + uVar5 * 8))) break;
    *(undefined4 *)(param_1 + param_2 * 4) = *(undefined4 *)(param_1 + iVar3 * 4);
    param_2 = iVar3;
    if (iVar3 <= param_3) {
      *(int *)(param_1 + iVar3 * 4) = *param_4;
      return;
    }
  }
  *(int *)(param_1 + param_2 * 4) = *param_4;
  return;
}

