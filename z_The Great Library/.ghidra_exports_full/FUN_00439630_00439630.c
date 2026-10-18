// FUN_00439630 @ 00439630 body=[[00439630, 00439776]]


undefined8 * FUN_00439630(int param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  undefined8 uVar9;
  uint local_2c;
  int iStack_28;
  uint local_24;
  int iStack_20;
  uint local_1c;
  int iStack_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (DAT_0131bb34 == 0) {
    ExceptionList = &local_10;
    iVar4 = FUN_00aae9af(0x188);
    local_8 = 0;
    if (iVar4 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_0041a160();
    }
    FUN_00423700(uVar5);
  }
  local_1c = 0;
  iStack_18 = 0;
  iVar4 = *(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2;
  iStack_20 = 0;
  local_24 = 0;
  iVar6 = 0;
  if (1 < iVar4) {
    do {
      iVar3 = *(int *)(param_1 + 0x18);
      uVar7 = *(uint *)(iVar3 + iVar6 * 8);
      bVar8 = CARRY4(local_1c,uVar7);
      local_1c = local_1c + uVar7;
      iStack_18 = iStack_18 + *(int *)(iVar3 + 4 + iVar6 * 8) + (uint)bVar8;
      puVar1 = (undefined4 *)(iVar3 + iVar6 * 8);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar2 = (uint *)(*(int *)(param_1 + 0x18) + 8 + iVar6 * 8);
      bVar8 = CARRY4(local_24,*puVar2);
      local_24 = local_24 + *puVar2;
      puVar1 = (undefined4 *)(*(int *)(param_1 + 0x18) + 8 + iVar6 * 8);
      iStack_20 = iStack_20 + puVar1[1] + (uint)bVar8;
      *puVar1 = 0;
      puVar1[1] = 0;
      iVar6 = iVar6 + 2;
    } while (iVar6 < iVar4 + -1);
  }
  if (iVar6 < iVar4) {
    local_2c = *(uint *)(*(int *)(param_1 + 0x18) + iVar6 * 8);
    puVar1 = (undefined4 *)(*(int *)(param_1 + 0x18) + iVar6 * 8);
    iStack_28 = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  else {
    iStack_28 = 0;
    local_2c = 0;
  }
  uVar7 = local_24 + local_1c + local_2c;
  uVar9 = __alldiv(uVar7 * 0x8000,
                   (iStack_20 + iStack_18 + (uint)CARRY4(local_24,local_1c) + iStack_28 +
                   (uint)CARRY4(local_24 + local_1c,local_2c)) * 0x8000 | uVar7 >> 0x11,DAT_00f0aac8
                   ,DAT_00f0aacc);
  *param_2 = uVar9;
  ExceptionList = local_10;
  return param_2;
}

