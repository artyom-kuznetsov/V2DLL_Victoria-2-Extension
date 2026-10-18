// FUN_00728890 @ 00728890 body=[[00728890, 00728a3d]]


void FUN_00728890(int *param_1,int *param_2)

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
  int *unaff_ESI;
  
  iVar7 = DAT_012588e8;
  iVar6 = DAT_012587e4;
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4);
  iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4);
  iVar3 = *unaff_ESI;
  uVar8 = (uint)*(byte *)(*(int *)(*(int *)(iVar3 + 0x28) + 8) + 0x118c + iVar2);
  iVar2 = *(int *)(iVar2 + 0x11cc);
  uVar9 = (uint)*(byte *)(*(int *)(*(int *)(*param_1 + 0x28) + 8) + 0x118c + iVar1);
  iVar4 = *(int *)(iVar1 + 0x11cc);
  iVar5 = *(int *)(iVar4 + 4 + uVar9 * 8);
  iVar1 = *(int *)(iVar2 + 4 + uVar8 * 8);
  if ((iVar5 <= iVar1) &&
     ((iVar5 < iVar1 || (*(uint *)(iVar4 + uVar9 * 8) < *(uint *)(iVar2 + uVar8 * 8))))) {
    *unaff_ESI = *param_1;
    *param_1 = iVar3;
  }
  iVar1 = *(int *)(iVar6 + 4);
  iVar2 = *(int *)(iVar1 + *(int *)(iVar7 + 0xb60) * 4);
  iVar1 = *(int *)(iVar1 + *(int *)(iVar7 + 0xb60) * 4);
  iVar3 = *param_2;
  uVar8 = (uint)*(byte *)(*(int *)(*(int *)(iVar3 + 0x28) + 8) + 0x118c + iVar1);
  iVar4 = *(int *)(iVar1 + 0x11cc);
  uVar9 = (uint)*(byte *)(*(int *)(*(int *)(*unaff_ESI + 0x28) + 8) + 0x118c + iVar2);
  iVar2 = *(int *)(iVar2 + 0x11cc);
  iVar5 = *(int *)(iVar2 + 4 + uVar9 * 8);
  iVar1 = *(int *)(iVar4 + 4 + uVar8 * 8);
  if ((iVar5 <= iVar1) &&
     ((iVar5 < iVar1 || (*(uint *)(iVar2 + uVar9 * 8) < *(uint *)(iVar4 + uVar8 * 8))))) {
    *param_2 = *unaff_ESI;
    *unaff_ESI = iVar3;
  }
  iVar1 = *(int *)(iVar6 + 4);
  iVar2 = *(int *)(iVar1 + *(int *)(iVar7 + 0xb60) * 4);
  iVar1 = *(int *)(iVar1 + *(int *)(iVar7 + 0xb60) * 4);
  uVar8 = (uint)*(byte *)(*(int *)(*(int *)(*param_1 + 0x28) + 8) + 0x118c + iVar2);
  iVar2 = *(int *)(iVar2 + 0x11cc);
  iVar3 = *(int *)(iVar2 + 4 + uVar8 * 8);
  iVar4 = *unaff_ESI;
  uVar9 = (uint)*(byte *)(*(int *)(*(int *)(iVar4 + 0x28) + 8) + 0x118c + iVar1);
  iVar5 = *(int *)(iVar1 + 0x11cc);
  iVar1 = *(int *)(iVar5 + 4 + uVar9 * 8);
  if ((iVar3 <= iVar1) &&
     ((iVar3 < iVar1 || (*(uint *)(iVar2 + uVar8 * 8) < *(uint *)(iVar5 + uVar9 * 8))))) {
    *unaff_ESI = *param_1;
    *param_1 = iVar4;
  }
  return;
}

