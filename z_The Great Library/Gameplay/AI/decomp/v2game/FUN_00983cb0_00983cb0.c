// FUN_00983cb0 @ 00983cb0 body=[[00983cb0, 00983df6] [00983dfd, 00983e1c] [00983e20, 00983ef1] [00983ef8, 00984005] [0098400c, 009840e0]]


void FUN_00983cb0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  char *pcStack_8c;
  uint *puStack_88;
  char **ppcStack_84;
  char **ppcStack_80;
  char **ppcStack_7c;
  char *local_6c [4];
  undefined4 local_5c;
  uint local_58;
  uint *local_50 [4];
  undefined4 local_40;
  uint local_3c;
  undefined4 local_34;
  uint *local_30;
  int *local_2c;
  char *local_24;
  longlong *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4a5b8;
  local_10 = ExceptionList;
  local_34 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
  local_18 = *(longlong **)(DAT_012587e4 + 4);
  uVar5 = *(uint *)(*(int *)(*(int *)((int)local_18 + *(int *)(DAT_012588e8 + 0xb60) * 4) + 0xa60) +
                   0x230);
  ppcStack_84 = (char **)((((int)uVar5 >> 0x1f) << 0xf | uVar5 >> 0x11) << 0xf |
                         (uVar5 & 0x1ffff) >> 2);
  ppcStack_7c = (char **)0x0;
  ppcStack_80 = (char **)0x1f40000;
  iVar1 = *(int *)(DAT_012586dc + 0x50);
  puStack_88 = (uint *)(uVar5 << 0x1e);
  pcStack_8c = (char *)0x983d23;
  ExceptionList = &local_10;
  uVar8 = __alldiv();
  iVar2 = *(int *)(param_1 + 0x28);
  ppcStack_7c = *(char ***)(iVar2 + 0x1b4);
  puStack_88 = (uint *)((uint)uVar8 + *(uint *)(iVar1 + 0x48));
  ppcStack_80 = *(char ***)(iVar2 + 0x1b0);
  ppcStack_84 = (char **)((int)((ulonglong)uVar8 >> 0x20) + *(int *)(iVar1 + 0x4c) +
                         (uint)CARRY4((uint)uVar8,*(uint *)(iVar1 + 0x48)));
  pcStack_8c = (char *)0x983d44;
  lVar9 = __allmul();
  local_14 = *(int *)(iVar2 + 0x68);
  local_24 = (char *)(lVar9 >> 0xf);
  local_34 = *(undefined4 *)(*(int *)(iVar2 + 100) + 0x128);
  ppcStack_80 = *(char ***)(iVar1 + 0x170);
  ppcStack_7c = *(char ***)(iVar1 + 0x174);
  uVar5 = *(uint *)(*(int *)((int)local_18 + *(int *)(*(int *)(iVar2 + 100) + 300) * 4) + 0x500);
  ppcStack_84 = (char **)(((int)uVar5 >> 0x1f) << 0xf | uVar5 >> 0x11);
  puStack_88 = (uint *)(uVar5 << 0xf);
  puVar6 = (uint *)((ulonglong)(lVar9 >> 0xf) >> 0x20);
  pcStack_8c = (char *)0x983d91;
  lVar9 = __allmul();
  lVar9 = (lVar9 >> 0xf) + CONCAT44(DAT_00f1f7b4,DAT_00f1f7b0);
  puVar7 = (uint *)lVar9;
  local_30 = (uint *)((ulonglong)lVar9 >> 0x20);
  ppcStack_7c = (char **)0xf;
  ppcStack_80 = (char **)0xe37200;
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = (uint *)((uint)local_50[0] & 0xffffff00);
  ppcStack_84 = (char **)0x983dca;
  FUN_00409350();
  local_8 = 0;
  ppcStack_7c = (char **)local_50;
  ppcStack_80 = (char **)0x983dde;
  local_18 = (longlong *)(**(code **)(**(int **)(param_1 + 0x20) + 0x7c))();
  local_8 = 0xffffffff;
  if (0xf < local_3c) {
    ppcStack_80 = (char **)local_50[0];
                    /* WARNING: Subroutine does not return */
    ppcStack_84 = (char **)&UNK_00983df7;
    FUN_00aae91b();
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = (uint *)((uint)local_50[0] & 0xffffff00);
  ppcStack_80 = (char **)0x983e18;
  (**(code **)((int)*local_18 + 0x24))();
  piVar4 = *(int **)(param_1 + 0x34);
  while ((*(int **)(param_1 + 0x34) <= piVar4 && (piVar4 < *(int **)(param_1 + 0x38)))) {
    iVar1 = *piVar4;
    local_2c = piVar4 + 1;
    uVar5 = (uint)*(byte *)(*(int *)(*(int *)(iVar1 + 0x28) + 8) + 0x118 + local_14);
    iVar2 = *(int *)(*(int *)(local_14 + 0x158) + uVar5 * 8);
    iVar3 = *(int *)(*(int *)(local_14 + 0x158) + 4 + uVar5 * 8);
    if (iVar2 == 0 && iVar3 == 0) {
      *(undefined1 *)(iVar1 + 0x38) = 1;
      piVar4 = local_2c;
    }
    else {
      local_18 = (longlong *)&ppcStack_84;
      pcStack_8c = local_24;
      puStack_88 = puVar6;
      lVar9 = __allmul(iVar2,iVar3);
      *local_18 = lVar9 >> 0xf;
      puStack_88 = (uint *)0x983e8f;
      FUN_0097e310();
      *(undefined1 *)(iVar1 + 0x38) = 0;
      piVar4 = local_2c;
    }
  }
  ppcStack_80 = (char **)0x983ea0;
  FUN_009840f0();
  ppcStack_80 = (char **)0x13;
  ppcStack_84 = (char **)0xe37210;
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = (uint *)((uint)local_50[0] & 0xffffff00);
  puStack_88 = (uint *)0x983ec1;
  FUN_00409350();
  local_8 = 1;
  ppcStack_80 = (char **)local_50;
  ppcStack_84 = (char **)0x983ed9;
  local_18 = (longlong *)(**(code **)(**(int **)(param_1 + 0x20) + 0x7c))();
  local_8 = 0xffffffff;
  if (0xf < local_3c) {
    ppcStack_84 = (char **)local_50[0];
                    /* WARNING: Subroutine does not return */
    puStack_88 = (uint *)&UNK_00983ef2;
    FUN_00aae91b();
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = (uint *)((uint)local_50[0] & 0xffffff00);
  ppcStack_84 = (char **)0x983f13;
  (**(code **)((int)*local_18 + 0x24))();
  piVar4 = *(int **)(param_1 + 0x44);
  while ((*(int **)(param_1 + 0x44) <= piVar4 && (piVar4 < *(int **)(param_1 + 0x48)))) {
    iVar1 = *piVar4;
    local_2c = piVar4 + 1;
    uVar5 = (uint)*(byte *)(*(int *)(*(int *)(iVar1 + 0x28) + 8) + 0x170 + local_14);
    ppcStack_84 = (char **)local_30;
    pcStack_8c = *(char **)(*(int *)(local_14 + 0x1b0) + 4 + uVar5 * 8);
    puStack_88 = puVar7;
    lVar9 = __allmul(*(undefined4 *)(*(int *)(local_14 + 0x1b0) + uVar5 * 8));
    if (lVar9 >> 0xf == 0) {
      *(undefined1 *)(iVar1 + 0x38) = 1;
      piVar4 = local_2c;
    }
    else {
      local_18 = (longlong *)&puStack_88;
      pcStack_8c = (char *)puVar6;
      lVar9 = __allmul(lVar9 >> 0xf,local_24);
      *local_18 = lVar9 >> 0xf;
      pcStack_8c = (char *)0x983fa0;
      FUN_0097e310();
      *(undefined1 *)(iVar1 + 0x38) = 0;
      piVar4 = local_2c;
    }
  }
  ppcStack_84 = (char **)0x983fb4;
  FUN_00984190();
  ppcStack_84 = (char **)0x12;
  puStack_88 = (uint *)0xe37224;
  local_58 = 0xf;
  local_5c = 0;
  local_6c[0] = (char *)((uint)local_6c[0] & 0xffffff00);
  pcStack_8c = (char *)0x983fd5;
  FUN_00409350();
  local_8 = 2;
  ppcStack_84 = local_6c;
  puStack_88 = (uint *)0x983fed;
  local_18 = (longlong *)(**(code **)(**(int **)(param_1 + 0x20) + 0x7c))();
  local_8 = 0xffffffff;
  if (0xf < local_58) {
    puStack_88 = (uint *)local_6c[0];
                    /* WARNING: Subroutine does not return */
    pcStack_8c = &UNK_00984006;
    FUN_00aae91b();
  }
  local_58 = 0xf;
  local_5c = 0;
  local_6c[0] = (char *)((uint)local_6c[0] & 0xffffff00);
  puStack_88 = (uint *)0x984027;
  (**(code **)((int)*local_18 + 0x24))();
  piVar4 = *(int **)(param_1 + 0x54);
  while ((*(int **)(param_1 + 0x54) <= piVar4 && (piVar4 < *(int **)(param_1 + 0x58)))) {
    iVar1 = *piVar4;
    local_2c = piVar4 + 1;
    uVar5 = (uint)*(byte *)(*(int *)(*(int *)(iVar1 + 0x28) + 8) + 0x1c8 + local_14);
    puStack_88 = local_30;
    pcStack_8c = (char *)puVar7;
    lVar9 = __allmul(*(undefined4 *)(*(int *)(local_14 + 0x208) + uVar5 * 8),
                     *(undefined4 *)(*(int *)(local_14 + 0x208) + 4 + uVar5 * 8));
    if (lVar9 >> 0xf == 0) {
      *(undefined1 *)(iVar1 + 0x38) = 1;
      piVar4 = local_2c;
    }
    else {
      local_18 = (longlong *)&pcStack_8c;
      lVar9 = __allmul(lVar9 >> 0xf,local_24,puVar6);
      *local_18 = lVar9 >> 0xf;
      FUN_0097e310();
      *(undefined1 *)(iVar1 + 0x38) = 0;
      piVar4 = local_2c;
    }
  }
  puStack_88 = (uint *)0x9840ce;
  FUN_00984230();
  ExceptionList = local_10;
  return;
}

