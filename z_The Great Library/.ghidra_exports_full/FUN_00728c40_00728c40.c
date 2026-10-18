// FUN_00728c40 @ 00728c40 body=[[00728c40, 00728d59]]


void FUN_00728c40(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  uint uVar5;
  uint uVar6;
  
  iVar1 = *(int *)(DAT_012588e8 + 0xbcc);
  uVar5 = (uint)*(byte *)(*(int *)(*(int *)(*param_1 + 0x28) + 8) + 0x72c + iVar1);
  iVar2 = *in_ECX;
  uVar6 = (uint)*(byte *)(*(int *)(*(int *)(iVar2 + 0x28) + 8) + 0x72c + iVar1);
  iVar3 = *(int *)(iVar1 + 0x76c);
  iVar4 = *(int *)(iVar3 + 4 + uVar5 * 8);
  iVar1 = *(int *)(iVar3 + 4 + uVar6 * 8);
  if ((iVar4 <= iVar1) &&
     ((iVar4 < iVar1 || (*(uint *)(iVar3 + uVar5 * 8) < *(uint *)(iVar3 + uVar6 * 8))))) {
    *in_ECX = *param_1;
    *param_1 = iVar2;
  }
  iVar2 = *param_2;
  iVar1 = *(int *)(DAT_012588e8 + 0xbcc);
  iVar3 = *(int *)(iVar1 + 0x76c);
  uVar6 = (uint)*(byte *)(*(int *)(*(int *)(iVar2 + 0x28) + 8) + 0x72c + iVar1);
  uVar5 = (uint)*(byte *)(*(int *)(*(int *)(*in_ECX + 0x28) + 8) + 0x72c + iVar1);
  iVar4 = *(int *)(iVar3 + 4 + uVar5 * 8);
  iVar1 = *(int *)(iVar3 + 4 + uVar6 * 8);
  if ((iVar4 <= iVar1) &&
     ((iVar4 < iVar1 || (*(uint *)(iVar3 + uVar5 * 8) < *(uint *)(iVar3 + uVar6 * 8))))) {
    *param_2 = *in_ECX;
    *in_ECX = iVar2;
  }
  iVar1 = *(int *)(DAT_012588e8 + 0xbcc);
  iVar2 = *in_ECX;
  uVar5 = (uint)*(byte *)(*(int *)(*(int *)(*param_1 + 0x28) + 8) + 0x72c + iVar1);
  uVar6 = (uint)*(byte *)(*(int *)(*(int *)(iVar2 + 0x28) + 8) + 0x72c + iVar1);
  iVar3 = *(int *)(iVar1 + 0x76c);
  iVar4 = *(int *)(iVar3 + 4 + uVar5 * 8);
  iVar1 = *(int *)(iVar3 + 4 + uVar6 * 8);
  if ((iVar4 <= iVar1) &&
     ((iVar4 < iVar1 || (*(uint *)(iVar3 + uVar5 * 8) < *(uint *)(iVar3 + uVar6 * 8))))) {
    *in_ECX = *param_1;
    *param_1 = iVar2;
  }
  return;
}

