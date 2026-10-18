// FUN_00831a60 @ 00831a60 body=[[00831a60, 00831dff]]


void FUN_00831a60(int param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  uint *puVar5;
  longlong *plVar6;
  float fVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  bool bVar17;
  float10 extraout_ST0;
  longlong lVar18;
  undefined8 uVar19;
  undefined8 local_38;
  uint local_30;
  float afStack_2c [2];
  int *local_24;
  float local_20;
  float local_1c;
  float local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b6a89b;
  local_10 = ExceptionList;
  fVar7 = *(float *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4);
  if ((*(int *)((int)fVar7 + 0xe7c) < 1) &&
     ((*(int *)((int)fVar7 + 0xe7c) < 0 || (*(uint *)((int)fVar7 + 0xe78) < 0x1f40000)))) {
    ExceptionList = &local_10;
    local_18 = fVar7;
    piVar4 = (int *)FUN_0085c6e0((int)fVar7 + 0x364,afStack_2c);
    local_20 = ((float)*piVar4 / 1000.0 - 1.0) * 0.25;
    if (local_20 <= DAT_00f14a8c) {
      if (local_20 <= 0.01) {
        ExceptionList = local_10;
        return;
      }
    }
    else {
      local_20 = DAT_00f14a8c;
    }
    piVar4 = *(int **)((int)fVar7 + 0xe8c);
    local_38._0_4_ = 0;
    lVar3 = 0;
    local_1c = (float)*(int *)(*(int *)(DAT_012586dc + 0x10) + 4) / 1000.0;
    local_24 = piVar4;
    while( true ) {
      local_38._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
      if ((piVar4 < local_24) || (*(int **)((int)fVar7 + 0xe90) <= piVar4)) break;
      iVar8 = *piVar4;
      lVar2 = *(longlong *)(iVar8 + 0x10);
      piVar4 = piVar4 + 1;
      lVar18 = __allmul(*(undefined4 *)(iVar8 + 0x18),*(undefined4 *)(iVar8 + 0x1c),
                        *(undefined4 *)(iVar8 + 0x10),*(undefined4 *)(iVar8 + 0x14));
      lVar3 = (lVar18 >> 0xf) + CONCAT44(local_38._4_4_,(int)lVar3);
      afStack_2c[0] = (float)((float10)lVar2 * extraout_ST0);
      fVar7 = local_18;
      if (local_1c < afStack_2c[0]) {
        local_1c = (float)((float10)*(longlong *)(iVar8 + 0x10) * extraout_ST0);
      }
    }
    local_38 = __alldiv(lVar3 << 0xf,0xf0000,0);
    FUN_0052b480();
    puVar5 = (uint *)FUN_0052b480();
    bVar17 = CARRY4(local_30,*puVar5);
    uVar10 = local_30 + *puVar5;
    iVar1 = (int)afStack_2c[0] + puVar5[1];
    puVar5 = (uint *)FUN_0052b480();
    fVar7 = local_18;
    uVar11 = uVar10 + *puVar5;
    iVar8 = *(int *)((int)local_18 + (DAT_00f096c8 + 0xd) * 0x10);
    uVar12 = uVar11 + *(uint *)(iVar8 + 0x20);
    uVar13 = uVar12 + *(uint *)(iVar8 + 0x28);
    uVar14 = uVar13 + *(uint *)(iVar8 + 0x30);
    uVar15 = uVar14 + *(uint *)(iVar8 + 0x38);
    uVar16 = uVar15 + *(uint *)(iVar8 + 0x40);
    local_30 = uVar16 + *(uint *)(iVar8 + 0x48);
    local_24 = (int *)(float)((float10)CONCAT44(iVar1 + (uint)bVar17 + puVar5[1] +
                                                (uint)CARRY4(uVar10,*puVar5) +
                                                *(int *)(iVar8 + 0x24) +
                                                (uint)CARRY4(uVar11,*(uint *)(iVar8 + 0x20)) +
                                                *(int *)(iVar8 + 0x2c) +
                                                (uint)CARRY4(uVar12,*(uint *)(iVar8 + 0x28)) +
                                                *(int *)(iVar8 + 0x34) +
                                                (uint)CARRY4(uVar13,*(uint *)(iVar8 + 0x30)) +
                                                *(int *)(iVar8 + 0x3c) +
                                                (uint)CARRY4(uVar14,*(uint *)(iVar8 + 0x38)) +
                                                *(int *)(iVar8 + 0x44) +
                                                (uint)CARRY4(uVar15,*(uint *)(iVar8 + 0x40)) +
                                                *(int *)(iVar8 + 0x4c) +
                                                (uint)CARRY4(uVar16,*(uint *)(iVar8 + 0x48)),
                                                local_30) * (float10)3.0517578125e-05);
    afStack_2c[0] = (float)((float10)local_38 * (float10)3.0517578125e-05);
    if (afStack_2c[0] / (float)local_24 < local_20) {
      local_18 = local_1c;
      if (local_1c < 0.01) {
        local_18 = 0.01;
      }
      local_18 = ((float)local_24 * (local_20 - afStack_2c[0] / (float)local_24) * 365.0) / local_18
      ;
      plVar6 = (longlong *)FUN_00522cf0(fVar7,&local_38);
      afStack_2c[0] = (float)((float10)*plVar6 * (float10)3.0517578125e-05);
      if (afStack_2c[0] < local_18) {
        local_18 = afStack_2c[0];
      }
      uVar9 = 0;
      local_24 = (int *)(float)((float10)0x1f40000 * (float10)3.0517578125e-05);
      if ((float)local_24 < local_18) {
        local_18 = (float)local_24;
      }
      if (20.0 < local_18) {
        fVar7 = (float)FUN_00aae9af(0x48);
        local_8 = 0;
        afStack_2c[0] = fVar7;
        if (fVar7 != 0.0) {
          uVar19 = FUN_00b31c36();
          uVar9 = FUN_0058b900(fVar7,*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38)
                               ,(uint)uVar19 >> 0xf | (int)((ulonglong)uVar19 >> 0x20) << 0x11);
        }
        local_8 = 0xffffffff;
        iVar8 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
        (**(code **)(**(int **)(iVar8 + 0x38) + 0x18))(uVar9);
      }
    }
  }
  ExceptionList = local_10;
  return;
}

