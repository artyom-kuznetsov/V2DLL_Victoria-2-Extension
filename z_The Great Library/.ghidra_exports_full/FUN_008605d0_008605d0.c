// FUN_008605d0 @ 008605d0 body=[[008605d0, 008606bf]]


/* WARNING: Removing unreachable block (ram,0x008606a5) */

int FUN_008605d0(int param_1)

{
  uint uVar1;
  uint3 uVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  longlong lVar9;
  uint local_28;
  int iStack_24;
  uint local_20;
  int iStack_1c;
  uint local_18;
  int iStack_14;
  
  local_18 = 0;
  iStack_14 = 0;
  lVar9 = FUN_00b31c36();
  uVar6 = (uint)lVar9;
  iVar3 = *(int *)(param_1 + 0xac) - *(int *)(param_1 + 0xa8) >> 3;
  iVar5 = 1;
  local_28 = 0;
  iStack_24 = 0;
  if (1 < iVar3) {
    iStack_1c = 0;
    local_20 = 0;
    if (1 < iVar3 + -1) {
      uVar6 = iVar3 - 3U >> 1;
      puVar4 = (uint *)(*(int *)(param_1 + 0xa8) + 8);
      iVar7 = uVar6 + 1;
      iVar5 = uVar6 + 2 + iVar7;
      do {
        bVar8 = CARRY4(local_20,*puVar4);
        local_20 = local_20 + *puVar4;
        iStack_1c = iStack_1c + puVar4[1] + (uint)bVar8;
        bVar8 = CARRY4(local_18,puVar4[2]);
        local_18 = local_18 + puVar4[2];
        iStack_14 = iStack_14 + puVar4[3] + (uint)bVar8;
        puVar4 = puVar4 + 4;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    if (iVar5 < iVar3) {
      uVar6 = local_20 + local_18;
      uVar1 = *(uint *)(*(int *)(param_1 + 0xa8) + iVar5 * 8);
      iStack_24 = *(int *)(*(int *)(param_1 + 0xa8) + 4 + iVar5 * 8) +
                  iStack_1c + iStack_14 + (uint)CARRY4(local_20,local_18) +
                  (uint)CARRY4(uVar1,uVar6);
      local_28 = uVar1 + uVar6;
    }
    else {
      uVar6 = local_20 + local_18;
      iStack_24 = iStack_1c + iStack_14 + (uint)CARRY4(local_20,local_18);
      local_28 = uVar6;
    }
  }
  uVar2 = (uint3)(uVar6 >> 8);
  if (lVar9 <= CONCAT44(iStack_24,local_28)) {
    return (uint)uVar2 << 8;
  }
  return CONCAT31(uVar2,1);
}

