// FUN_0059c3d0 @ 0059c3d0

void FUN_0059c3d0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  
  uVar1 = *(undefined4 *)(DAT_012588e8 + 0xb0c);
  iVar2 = *(int *)(param_1 + 0x10);
  puVar6 = (uint *)(iVar2 + 0x34);
  uVar8 = *puVar6;
  while ((*puVar6 <= uVar8 && (uVar8 < *(uint *)(iVar2 + 0x38)))) {
    iVar3 = *(int *)(param_1 + 0x14);
    iVar4 = *(int *)(uVar8 + 4);
    uVar7 = *(uint *)(iVar3 + 0x34);
    uVar8 = uVar8 + 8;
    while ((*(uint *)(iVar3 + 0x34) <= uVar7 && (uVar7 < *(uint *)(iVar3 + 0x38)))) {
      iVar5 = *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + iVar4 * 4) + 0xbe8) +
                               *(int *)(uVar7 + 4) * 4) + 0x34);
      uVar7 = uVar7 + 8;
      if (iVar5 != 0) {
        *(undefined4 *)(iVar5 + 0xc) = uVar1;
      }
    }
  }
  return;
}


