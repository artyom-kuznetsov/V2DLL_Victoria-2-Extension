// FUN_004be780 @ 004be780 body=[[004be780, 004be858] [004be860, 004be8cb]]


void FUN_004be780(int param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  longlong lVar10;
  undefined8 uVar11;
  int local_28;
  uint local_20;
  int iStack_1c;
  uint local_18;
  int iStack_14;
  uint local_10;
  int iStack_c;
  
  iVar7 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 3;
  local_18 = 0;
  iStack_14 = 0;
  local_20 = 0;
  iStack_1c = 0;
  local_28 = 1;
  if (1 < iVar7) {
    local_10 = 0;
    iStack_c = 0;
    if (1 < iVar7 + -1) {
      uVar4 = iVar7 - 3U >> 1;
      puVar3 = (uint *)(*(int *)(param_1 + 8) + 8);
      iVar5 = uVar4 + 1;
      local_28 = uVar4 + 2 + iVar5;
      do {
        bVar9 = CARRY4(local_10,*puVar3);
        local_10 = local_10 + *puVar3;
        iStack_c = iStack_c + puVar3[1] + (uint)bVar9;
        bVar9 = CARRY4(local_18,puVar3[2]);
        local_18 = local_18 + puVar3[2];
        iStack_14 = iStack_14 + puVar3[3] + (uint)bVar9;
        puVar3 = puVar3 + 4;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    if (local_28 < iVar7) {
      local_20 = *(uint *)(*(int *)(param_1 + 8) + local_28 * 8);
      iStack_1c = *(int *)(*(int *)(param_1 + 8) + 4 + local_28 * 8);
    }
    iVar6 = iStack_c + iStack_14 + (uint)CARRY4(local_10,local_18);
    iVar5 = local_20 + local_10 + local_18;
    uVar4 = (uint)CARRY4(local_20,local_10 + local_18);
    iVar8 = iStack_1c + iVar6;
    iVar1 = iVar8 + uVar4;
    if ((-1 < iVar1) &&
       (((iVar1 != 0 && SCARRY4(iStack_1c,iVar6) == SCARRY4(iVar8,uVar4) || (iVar5 != 0)) &&
        (iVar8 = 1, 1 < iVar7)))) {
      do {
        iVar2 = *(int *)(param_1 + 8);
        iVar6 = iVar8 * 8;
        lVar10 = __allmul(*(undefined4 *)(iVar2 + iVar6),*(undefined4 *)(iVar2 + 4 + iVar6),0x320000
                          ,0);
        *(longlong *)(iVar2 + iVar6) = lVar10 >> 0xf;
        iVar2 = *(int *)(param_1 + 8);
        uVar11 = __alldiv(*(uint *)(iVar2 + iVar6) << 0xf,
                          *(int *)(iVar2 + 4 + iVar6) << 0xf | *(uint *)(iVar2 + iVar6) >> 0x11,
                          iVar5,iVar1);
        iVar8 = iVar8 + 1;
        *(undefined8 *)(iVar2 + iVar6) = uVar11;
      } while (iVar8 < iVar7);
    }
  }
  return;
}

