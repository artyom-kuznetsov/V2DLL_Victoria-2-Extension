// FUN_007fd860 @ 007fd860 body=[[007fd860, 007fd945] [007fd950, 007fdae2]]


void FUN_007fd860(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 local_40 [8];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  undefined4 uStack_10;
  
  iVar7 = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c) >> 2;
  iVar9 = 1;
  uStack_18 = 0;
  local_14 = 0;
  local_1c = DAT_00f17a20;
  uStack_10 = DAT_00f092fc;
  uVar11 = DAT_00f092fc;
  uVar10 = DAT_00f141cc;
  if (1 < iVar7) {
    do {
      puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x1c) + iVar9 * 4);
      iVar2 = puVar1[3];
      uVar8 = local_38;
      uVar4 = uStack_34;
      uVar5 = local_30;
      uVar6 = uStack_2c;
      if ((*(int *)(iVar2 + 300) != 0) &&
         (uVar8 = uVar10, uVar4 = uVar11, uVar5 = uVar10, uVar6 = uVar11,
         *(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar2 + 300) * 4) + 0x12d0) ==
         '\0')) {
        FUN_009b7270(local_40);
        uVar10 = DAT_00f141cc;
        uVar8 = local_38;
        uVar4 = uStack_34;
        uVar5 = local_30;
        uVar6 = uStack_2c;
      }
      uStack_2c = uVar6;
      local_30 = uVar5;
      uStack_34 = uVar4;
      local_38 = uVar8;
      uVar8 = FUN_009b6df0();
      iVar3 = DAT_012587e4;
      *puVar1 = uVar8;
      if ((*(char *)(*(int *)(*(int *)(iVar3 + 4) + *(int *)(iVar2 + 300) * 4) + 0x12d0) == '\0') ||
         (*(int *)(*(int *)(iVar2 + 0x188) + 0x84) < 1)) {
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar9 * 4) + 4) = uVar8;
      }
      else {
        uVar8 = FUN_009b6df0();
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar9 * 4) + 4) = uVar8;
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar7);
  }
  return;
}

