// FUN_00957bc0 @ 00957bc0 body=[[00957bc0, 00957dc4]]


undefined8 * FUN_00957bc0(undefined8 *param_1,int param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  bool bVar10;
  undefined8 uVar11;
  int local_38;
  uint local_30;
  int iStack_2c;
  uint local_28;
  int iStack_24;
  uint local_20;
  int iStack_1c;
  uint local_18;
  int iStack_14;
  uint local_10;
  int iStack_c;
  
  uVar1 = 0;
  iVar8 = 1;
  iVar7 = *(int *)(param_2 + 0xc) - *(int *)(param_2 + 8) >> 3;
  local_30 = 0;
  iStack_2c = 0;
  local_20 = 0;
  iStack_1c = 0;
  if (1 < iVar7) {
    iStack_24 = 0;
    if (1 < iVar7 + -1) {
      uVar4 = iVar7 - 3U >> 1;
      puVar3 = (uint *)(*(int *)(param_2 + 8) + 8);
      iVar5 = uVar4 + 1;
      iVar8 = uVar4 + 2 + iVar5;
      do {
        bVar10 = CARRY4(uVar1,*puVar3);
        uVar1 = uVar1 + *puVar3;
        iStack_24 = iStack_24 + puVar3[1] + (uint)bVar10;
        bVar10 = CARRY4(local_30,puVar3[2]);
        local_30 = local_30 + puVar3[2];
        iStack_2c = iStack_2c + puVar3[3] + (uint)bVar10;
        puVar3 = puVar3 + 4;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    if (iVar8 < iVar7) {
      local_20 = *(uint *)(*(int *)(param_2 + 8) + iVar8 * 8);
      iStack_1c = *(int *)(*(int *)(param_2 + 8) + 4 + iVar8 * 8);
    }
    bVar10 = CARRY4(local_20,uVar1 + local_30);
    local_20 = local_20 + uVar1 + local_30;
    iStack_1c = iStack_1c + iStack_24 + iStack_2c + (uint)CARRY4(uVar1,local_30) + (uint)bVar10;
  }
  piVar9 = (int *)*param_3;
  local_38 = param_3[1] - (int)piVar9 >> 2;
  local_10 = 0;
  iStack_c = 0;
  if (1 < local_38) {
    local_38 = local_38 + -1;
    do {
      piVar9 = piVar9 + 1;
      iVar8 = *piVar9;
      iVar5 = *(int *)(iVar8 + 0xc) - *(int *)(iVar8 + 8) >> 2;
      local_28 = 0;
      iStack_24 = 0;
      iVar7 = 0;
      local_18 = 0;
      iStack_14 = 0;
      if (1 < iVar5) {
        iVar2 = *(int *)(param_2 + 8);
        piVar6 = *(int **)(iVar8 + 8);
        iVar8 = (iVar5 - 2U >> 1) + 1;
        iVar7 = iVar8 * 2;
        do {
          uVar1 = *(uint *)(iVar2 + *(int *)(*piVar6 + 0x50) * 8);
          bVar10 = CARRY4(local_28,uVar1);
          local_28 = local_28 + uVar1;
          iStack_24 = iStack_24 + *(int *)(iVar2 + 4 + *(int *)(*piVar6 + 0x50) * 8) + (uint)bVar10;
          uVar1 = *(uint *)(iVar2 + *(int *)(piVar6[1] + 0x50) * 8);
          bVar10 = CARRY4(local_18,uVar1);
          local_18 = local_18 + uVar1;
          iStack_14 = iStack_14 + *(int *)(iVar2 + 4 + *(int *)(piVar6[1] + 0x50) * 8) +
                      (uint)bVar10;
          piVar6 = piVar6 + 2;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      if (iVar7 < iVar5) {
        iVar8 = *(int *)(*(int *)(*(int *)(*piVar9 + 8) + iVar7 * 4) + 0x50);
        uVar1 = *(uint *)(*(int *)(param_2 + 8) + iVar8 * 8);
        bVar10 = CARRY4(local_10,uVar1);
        local_10 = local_10 + uVar1;
        iStack_c = iStack_c + *(int *)(*(int *)(param_2 + 8) + 4 + iVar8 * 8) + (uint)bVar10;
      }
      bVar10 = CARRY4(local_10,local_28 + local_18);
      local_10 = local_10 + local_28 + local_18;
      iStack_c = iStack_c + iStack_24 + iStack_14 + (uint)CARRY4(local_28,local_18) + (uint)bVar10;
      local_38 = local_38 + -1;
    } while (local_38 != 0);
    if (local_10 != 0 || iStack_c != 0) {
      uVar11 = __alldiv(local_10 * 0x8000,iStack_c * 0x8000 | local_10 >> 0x11,local_20,iStack_1c);
      *param_1 = uVar11;
      return param_1;
    }
  }
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)((int)param_1 + 4) = 0;
  return param_1;
}

