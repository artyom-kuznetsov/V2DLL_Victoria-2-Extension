// FUN_00979430 @ 00979430 body=[[00979430, 0097950d]]


void FUN_00979430(int param_1)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  undefined8 uVar10;
  uint local_28;
  int iStack_24;
  uint local_20;
  int iStack_1c;
  uint local_18;
  
  local_28 = 0;
  iStack_24 = 0;
  iVar4 = iStack_24;
  iVar5 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10) >> 3;
  local_20 = 0;
  iStack_1c = 0;
  iVar6 = 0;
  iVar8 = 0;
  iStack_24 = 0;
  if (1 < iVar5) {
    puVar2 = *(uint **)(param_1 + 0x10);
    iVar3 = (iVar5 - 2U >> 1) + 1;
    iVar6 = iVar3 * 2;
    do {
      bVar9 = CARRY4(local_28,*puVar2);
      local_28 = local_28 + *puVar2;
      iStack_24 = iStack_24 + puVar2[1] + (uint)bVar9;
      bVar9 = CARRY4(local_20,puVar2[2]);
      local_20 = local_20 + puVar2[2];
      iStack_1c = iStack_1c + puVar2[3] + (uint)bVar9;
      puVar2 = puVar2 + 4;
      iVar3 = iVar3 + -1;
      iVar4 = iStack_24;
    } while (iVar3 != 0);
  }
  if (iVar6 < iVar5) {
    local_18 = *(uint *)(*(int *)(param_1 + 0x10) + iVar6 * 8);
    iVar8 = *(int *)(*(int *)(param_1 + 0x10) + 4 + iVar6 * 8);
  }
  else {
    local_18 = 0;
  }
  iVar3 = iVar4 + iStack_1c + (uint)CARRY4(local_28,local_20);
  iVar7 = local_18 + local_28 + local_20;
  uVar1 = (uint)CARRY4(local_18,local_28 + local_20);
  iVar4 = iVar8 + iVar3;
  iVar6 = iVar4 + uVar1;
  if ((-1 < iVar6) &&
     (((iVar6 != 0 && SCARRY4(iVar8,iVar3) == SCARRY4(iVar4,uVar1) || (iVar7 != 0)) &&
      (iVar8 = 0, 0 < iVar5)))) {
    do {
      iVar3 = *(int *)(param_1 + 0x10);
      uVar1 = *(uint *)(iVar3 + iVar8 * 8);
      iVar4 = iVar8 * 8;
      uVar10 = __alldiv(uVar1 << 0xf,*(int *)(iVar3 + 4 + iVar8 * 8) << 0xf | uVar1 >> 0x11,iVar7,
                        iVar6);
      iVar8 = iVar8 + 1;
      *(undefined8 *)(iVar3 + iVar4) = uVar10;
    } while (iVar8 < iVar5);
  }
  return;
}

