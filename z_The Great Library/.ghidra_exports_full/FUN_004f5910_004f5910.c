// FUN_004f5910 @ 004f5910 body=[[004f5910, 004f5a48]]


uint * FUN_004f5910(int param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  undefined8 uVar13;
  longlong lVar14;
  uint local_24;
  int iStack_20;
  uint local_1c;
  int iStack_18;
  uint local_14;
  int iStack_10;
  
  iVar11 = *(int *)(param_1 + 0x1c8);
  if (iVar11 < 1) {
    uVar1 = *(uint *)(param_1 + 0x1d8);
    uVar10 = *(uint *)(param_1 + 0x170);
    uVar8 = uVar1 + *(uint *)(param_1 + 0x170);
    iVar11 = *(int *)(param_1 + 0x1dc);
    iVar6 = *(int *)(param_1 + 0x174);
    uVar2 = *(uint *)(param_1 + 0x160);
    iVar3 = *(int *)(param_1 + 0x164);
    *param_2 = uVar8 + *(uint *)(param_1 + 0x160);
    uVar4 = *(uint *)(param_1 + 0x168);
    uVar5 = *(uint *)(param_1 + 0x158);
    uVar9 = uVar4 + *(uint *)(param_1 + 0x158);
    param_2[1] = iVar11 + iVar6 + (uint)CARRY4(uVar1,uVar10) + iVar3 + (uint)CARRY4(uVar8,uVar2);
    iVar11 = *(int *)(param_1 + 0x16c);
    iVar6 = *(int *)(param_1 + 0x15c);
    uVar1 = *param_2;
    *param_2 = *param_2 - uVar9;
    param_2[1] = (param_2[1] - (iVar11 + iVar6 + (uint)CARRY4(uVar4,uVar5))) - (uint)(uVar1 < uVar9)
    ;
    return param_2;
  }
  local_14 = 0;
  iStack_10 = 0;
  iStack_18 = 0;
  local_1c = 0;
  iVar6 = 0;
  if (1 < iVar11) {
    puVar7 = (uint *)(param_1 + 0x198);
    iVar11 = (iVar11 - 2U >> 1) + 1;
    iVar6 = iVar11 * 2;
    do {
      bVar12 = CARRY4(local_14,puVar7[-2]);
      local_14 = local_14 + puVar7[-2];
      iStack_10 = iStack_10 + puVar7[-1] + (uint)bVar12;
      bVar12 = CARRY4(local_1c,*puVar7);
      local_1c = local_1c + *puVar7;
      iStack_18 = iStack_18 + puVar7[1] + (uint)bVar12;
      puVar7 = puVar7 + 4;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  uVar1 = *(uint *)(param_1 + 0x1c8);
  if (iVar6 < (int)uVar1) {
    local_24 = *(uint *)(param_1 + 400 + iVar6 * 8);
    iStack_20 = *(int *)(param_1 + 0x194 + iVar6 * 8);
  }
  else {
    iStack_20 = 0;
    local_24 = 0;
  }
  uVar10 = local_1c + local_14 + local_24;
  uVar13 = __alldiv(uVar10 * 0x8000,
                    (iStack_20 + iStack_18 + iStack_10 + (uint)CARRY4(local_1c,local_14) +
                    (uint)CARRY4(local_1c + local_14,local_24)) * 0x8000 | uVar10 >> 0x11,
                    uVar1 << 0xf,((int)uVar1 >> 0x1f) << 0xf | uVar1 >> 0x11);
  lVar14 = __allmul(uVar13,DAT_00f0b2d0,DAT_00f0b2d4);
  *(longlong *)param_2 = lVar14 >> 0xf;
  return param_2;
}

