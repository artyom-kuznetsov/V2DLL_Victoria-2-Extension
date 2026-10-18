// FUN_00728ee0 @ 00728ee0 body=[[00728ee0, 00729016]]


void FUN_00728ee0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *in_EDX;
  uint uVar6;
  uint uVar7;
  
  iVar3 = DAT_012588e8;
  iVar4 = *(int *)(DAT_012588e8 + 0xb60) * 0x58 + *(int *)(*(int *)(DAT_012588e8 + 0xbcc) + 0x3f4);
  iVar1 = *in_EDX;
  uVar6 = (uint)*(byte *)(*(int *)(*(int *)(*param_1 + 0x28) + 8) + 8 + iVar4);
  uVar7 = (uint)*(byte *)(*(int *)(*(int *)(iVar1 + 0x28) + 8) + 8 + iVar4);
  iVar2 = *(int *)(iVar4 + 0x48);
  iVar5 = *(int *)(iVar2 + 4 + uVar6 * 8);
  iVar4 = *(int *)(iVar2 + 4 + uVar7 * 8);
  if ((iVar5 <= iVar4) &&
     ((iVar5 < iVar4 || (*(uint *)(iVar2 + uVar6 * 8) < *(uint *)(iVar2 + uVar7 * 8))))) {
    *in_EDX = *param_1;
    *param_1 = iVar1;
  }
  iVar4 = *(int *)(iVar3 + 0xb60) * 0x58 + *(int *)(*(int *)(iVar3 + 0xbcc) + 0x3f4);
  iVar1 = *param_2;
  uVar6 = (uint)*(byte *)(*(int *)(*(int *)(*in_EDX + 0x28) + 8) + 8 + iVar4);
  uVar7 = (uint)*(byte *)(*(int *)(*(int *)(iVar1 + 0x28) + 8) + 8 + iVar4);
  iVar2 = *(int *)(iVar4 + 0x48);
  iVar5 = *(int *)(iVar2 + 4 + uVar6 * 8);
  iVar4 = *(int *)(iVar2 + 4 + uVar7 * 8);
  if ((iVar5 <= iVar4) &&
     ((iVar5 < iVar4 || (*(uint *)(iVar2 + uVar6 * 8) < *(uint *)(iVar2 + uVar7 * 8))))) {
    *param_2 = *in_EDX;
    *in_EDX = iVar1;
  }
  iVar5 = *(int *)(iVar3 + 0xb60) * 0x58;
  iVar4 = *(int *)(*(int *)(iVar3 + 0xbcc) + 0x3f4);
  iVar1 = *(int *)(iVar5 + 0x48 + iVar4);
  iVar5 = iVar5 + iVar4;
  iVar2 = *in_EDX;
  uVar7 = (uint)*(byte *)(*(int *)(*(int *)(iVar2 + 0x28) + 8) + 8 + iVar5);
  uVar6 = (uint)*(byte *)(*(int *)(*(int *)(*param_1 + 0x28) + 8) + 8 + iVar5);
  iVar5 = *(int *)(iVar1 + 4 + uVar6 * 8);
  iVar4 = *(int *)(iVar1 + 4 + uVar7 * 8);
  if ((iVar5 <= iVar4) &&
     ((iVar5 < iVar4 || (*(uint *)(iVar1 + uVar6 * 8) < *(uint *)(iVar1 + uVar7 * 8))))) {
    *in_EDX = *param_1;
    *param_1 = iVar2;
  }
  return;
}

