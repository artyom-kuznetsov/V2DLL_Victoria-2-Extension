// FUN_007236b0 @ 007236b0 body=[[007236b0, 0072375a]]


undefined4 FUN_007236b0(void)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int in_ECX;
  int iVar5;
  int in_EDX;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  iVar5 = *(int *)(*(int *)(in_ECX + 0x28) + 8);
  iVar6 = *(int *)(DAT_012588e8 + 0xbcc);
  iVar3 = *(int *)(*(int *)(in_EDX + 0x28) + 8);
  uVar7 = (uint)*(byte *)(iVar5 + 0x784 + iVar6);
  uVar8 = (uint)*(byte *)(iVar5 + 0x72c + iVar6);
  uVar4 = *(uint *)(*(int *)(iVar6 + 0x76c) + uVar8 * 8);
  puVar1 = (uint *)(*(int *)(iVar6 + 0x7c4) + uVar7 * 8);
  iVar5 = (*(int *)(*(int *)(iVar6 + 0x76c) + 4 + uVar8 * 8) -
          *(int *)(*(int *)(iVar6 + 0x7c4) + 4 + uVar7 * 8)) - (uint)(uVar4 < *puVar1);
  uVar9 = (uint)*(byte *)(iVar3 + 0x72c + iVar6);
  uVar8 = (uint)*(byte *)(iVar3 + 0x784 + iVar6);
  uVar7 = *(uint *)(*(int *)(iVar6 + 0x76c) + uVar9 * 8);
  puVar2 = (uint *)(*(int *)(iVar6 + 0x7c4) + uVar8 * 8);
  iVar6 = (*(int *)(*(int *)(iVar6 + 0x76c) + 4 + uVar9 * 8) -
          *(int *)(*(int *)(iVar6 + 0x7c4) + 4 + uVar8 * 8)) - (uint)(uVar7 < *puVar2);
  if ((iVar5 <= iVar6) && ((iVar5 < iVar6 || (uVar4 - *puVar1 < uVar7 - *puVar2)))) {
    return 1;
  }
  return 0;
}

