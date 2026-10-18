// FUN_006fd530 @ 006fd530 body=[[006fd530, 006fd699] [006fd69d, 006fd6c6] [006fd6ca, 006fd6f6] [006fd6fa, 006fd77c] [006fd785, 006fd83c] [006fd840, 006fd8a7] [006fd8ab, 006fd983] [006fd987, 006fd9c0] [006fd9c4, 006fd9e1] [006fd9e5, 006fda33] [006fda39, 006fda7e] [006fda82, 006fdf83] [006fdf87, 006fdfb1] [006fdfb5, 006fdfda] [006fdfde, 006fe003] [006fe007, 006fe03c] [006fe040, 006fe05b] [006fe05f, 006fe080] [006fe084, 006fe0a9] [006fe0ad, 006fe0d5] [006fe0d9, 006fe2c7] [006fe2cb, 006fe355]]


undefined1 * FUN_006fd530(uint param_1,undefined1 *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  int *piVar5;
  uint *puVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  undefined1 *puVar10;
  undefined4 *puVar11;
  bool bVar12;
  undefined8 uVar13;
  longlong lVar14;
  undefined8 local_198;
  uint *puStack_190;
  float *pfStack_18c;
  uint local_148;
  uint local_12c;
  uint local_124 [4];
  undefined4 local_114;
  uint local_110;
  uint local_108 [4];
  undefined4 local_f8;
  uint local_f4;
  undefined4 local_ec;
  uint local_e8;
  uint local_e4 [4];
  undefined4 local_d4;
  uint local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  uint local_b8 [4];
  undefined4 local_a8;
  uint local_a4;
  uint local_9c [4];
  undefined4 local_8c;
  uint local_88;
  undefined4 local_80;
  undefined1 *local_7c;
  uint local_78 [4];
  undefined4 local_68;
  uint local_64;
  undefined1 *local_5c;
  undefined8 local_58;
  undefined8 local_50;
  uint local_44 [2];
  undefined1 local_3c [4];
  int local_38;
  undefined4 local_34;
  uint local_30;
  float local_28;
  undefined8 *local_24;
  undefined8 local_20;
  undefined1 local_15;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00b8ab41;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *param_2 = 0;
  *(undefined4 *)(param_2 + 0x30) = 0xf;
  *(undefined4 *)(param_2 + 0x2c) = 0;
  param_2[0x1c] = 0;
  *(undefined4 *)(param_2 + 0x4c) = 0xf;
  *(undefined4 *)(param_2 + 0x48) = 0;
  param_2[0x38] = 0;
  *(undefined4 *)(param_2 + 0x54) = 0;
  param_2[0x58] = 1;
  pfStack_18c = (float *)0x21;
  puStack_190 = (uint *)0xe0f390;
  puVar11 = (undefined4 *)(param_3 + 0x14);
  local_8 = 0;
  local_ec = 1;
  local_198._0_4_ = (char *)0x6fd5a4;
  local_198._4_4_ = (char *)puVar11;
  iVar3 = FUN_005484e0();
  if (iVar3 != -1) {
    if (0xf < *(uint *)(param_3 + 0x28)) {
      puVar11 = (undefined4 *)*puVar11;
    }
    pfStack_18c = (float *)((int)puVar11 + 0x21);
    puStack_190 = (uint *)0x6fd5be;
    puVar4 = (undefined8 *)FUN_00aaf0c5();
    pfStack_18c = (float *)0x1;
    puStack_190 = (uint *)&DAT_00dee2cc;
    local_a4 = 0xf;
    local_a8 = 0;
    local_b8[0] = local_b8[0] & 0xffffff00;
    local_198._4_4_ = (char *)0x6fd5ee;
    local_24 = puVar4;
    FUN_00409350();
    local_8 = 1;
    if (DAT_0131bb34 == 0) {
      pfStack_18c = (float *)0x188;
      puStack_190 = (uint *)0x6fd608;
      local_5c = (undefined1 *)FUN_00aae9af();
      local_8._0_1_ = 2;
      if (local_5c == (undefined1 *)0x0) {
        pfStack_18c = (float *)0x0;
      }
      else {
        pfStack_18c = (float *)0x6fd61d;
        pfStack_18c = (float *)FUN_0041a160();
        puVar4 = local_24;
      }
      local_8 = CONCAT31(local_8._1_3_,1);
      puStack_190 = (uint *)0x6fd62e;
      FUN_00423700();
    }
    if (*(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2 < (int)puVar4) {
      pfStack_18c = (float *)0x6fd645;
      puStack_190 = (uint *)FUN_0096bb70();
    }
    else {
      puStack_190 = *(uint **)(*(int *)(DAT_0131bb34 + 0xc) + (int)puVar4 * 4);
    }
    pfStack_18c = (float *)local_e4;
    local_198._4_4_ = (char *)0x6fd65a;
    FUN_0096d650();
    pfStack_18c = (float *)local_b8;
    local_8._0_1_ = 3;
    puStack_190 = (uint *)0x6fd672;
    local_198._4_4_ = (char *)FUN_00988f20();
    pfStack_18c = (float *)0xffffffff;
    puStack_190 = (uint *)0x0;
    local_8._0_1_ = 4;
    local_198._0_4_ = (char *)0x6fd681;
    FUN_00408ed0();
    if (0xf < local_88) {
      pfStack_18c = (float *)local_9c[0];
                    /* WARNING: Subroutine does not return */
      puStack_190 = (uint *)&UNK_006fd69a;
      FUN_00aae91b();
    }
    local_88 = 0xf;
    local_8c = 0;
    local_9c[0] = local_9c[0] & 0xffffff00;
    if (0xf < local_d0) {
      pfStack_18c = (float *)local_e4[0];
                    /* WARNING: Subroutine does not return */
      puStack_190 = (uint *)&UNK_006fd6c7;
      FUN_00aae91b();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_d0 = 0xf;
    local_d4 = 0;
    local_e4[0] = local_e4[0] & 0xffffff00;
    if (0xf < local_a4) {
      pfStack_18c = (float *)local_b8[0];
                    /* WARNING: Subroutine does not return */
      puStack_190 = (uint *)&UNK_006fd6f7;
      FUN_00aae91b();
    }
    piVar1 = *(int **)(*(int *)(param_1 + 0xf8) + 0x340);
    for (piVar5 = *(int **)(*(int *)(param_1 + 0xf8) + 0x33c);
        (piVar5 != piVar1 && ((undefined8 *)*piVar5 != local_24)); piVar5 = piVar5 + 1) {
    }
    iVar3 = *(int *)(param_1 + 0xd0);
    if (piVar5 == piVar1) {
      iVar8 = *(int *)(*(int *)(iVar3 + 0x118) + (int)local_24 * 4);
      pfStack_18c = (float *)0x1;
      local_28 = (float)iVar8;
      puStack_190 = (uint *)0x2;
      if (iVar8 < 0) {
        local_28 = local_28 + 4.2949673e+09;
      }
      local_28 = local_28 / (float)*(int *)(iVar3 + 200);
      local_5c = (undefined1 *)&local_198;
      local_24 = &local_198;
      if (local_28 < 0.0) {
        local_58 = -0x4020000000000000;
      }
      else {
        local_58 = 0x3fe0000000000000;
      }
      uVar13 = FUN_00b31c36();
      puVar6 = local_78;
      *local_24 = uVar13;
      pfStack_18c = (float *)FUN_009c80d0(puVar6);
      puStack_190 = local_9c;
      local_8 = 6;
      local_198._4_4_ = (char *)0x6fd816;
      local_198._4_4_ = (char *)FUN_0042c180();
      pfStack_18c = (float *)0xffffffff;
      puStack_190 = (uint *)0x0;
      local_8 = CONCAT31(local_8._1_3_,7);
      local_198._0_4_ = (char *)0x6fd828;
      FUN_00448aa0();
      if (0xf < local_88) {
        pfStack_18c = (float *)local_9c[0];
                    /* WARNING: Subroutine does not return */
        puStack_190 = (uint *)&UNK_006fd83d;
        FUN_00aae91b();
      }
      local_88 = 0xf;
      local_8c = 0;
      local_9c[0] = local_9c[0] & 0xffffff00;
    }
    else {
      local_28 = (float)(*(int *)(*(int *)(iVar3 + 0x118) + (int)local_24 * 4) -
                        *(int *)(*(int *)(iVar3 + 0x120) + (int)local_24 * 4));
      pfStack_18c = &local_28;
      puStack_190 = local_78;
      local_198._4_4_ = (char *)0x6fd752;
      local_198._4_4_ = (char *)FUN_007057a0();
      pfStack_18c = (float *)0xffffffff;
      puStack_190 = (uint *)0x0;
      local_8 = 5;
      local_198._0_4_ = (char *)0x6fd767;
      FUN_00448aa0();
    }
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_64) {
      pfStack_18c = (float *)local_78[0];
                    /* WARNING: Subroutine does not return */
      puStack_190 = (uint *)&UNK_006fd77d;
      FUN_00aae91b();
    }
  }
  pfStack_18c = (float *)0x5;
  puStack_190 = (uint *)0xe0f30c;
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = local_44[0] & 0xffffff00;
  local_198._4_4_ = (char *)0x6fd87a;
  FUN_00409350();
  local_8 = 8;
  pfStack_18c = (float *)local_44;
  puStack_190 = (uint *)0x6fd88f;
  iVar3 = (**(code **)(**(int **)(param_1 + 0x28) + 0x34))();
  local_15 = iVar3 == param_3;
  local_8 = local_8 & 0xffffff00;
  if (0xf < local_30) {
    puStack_190 = (uint *)local_44[0];
                    /* WARNING: Subroutine does not return */
    local_198._4_4_ = &UNK_006fd8a8;
    FUN_00aae91b();
  }
  local_30 = 0xf;
  local_34 = 0;
  uVar9 = local_44[0] >> 8;
  local_44[0] = uVar9 << 8;
  if ((bool)local_15) {
    local_c8 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
    local_198._0_4_ = *(char **)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4);
    if (*(int *)(param_1 + 0xd4) == 0) {
      puStack_190 = (uint *)0x29;
      local_198._4_4_ = "PRODUCTION_CANNOT_BUILD_MISSING_SELECTION";
      local_a4 = 0xf;
      local_a8 = 0;
      local_b8[0] = local_b8[0] & 0xffffff00;
      local_198._0_4_ = (char *)0x6fd917;
      FUN_00409350();
      puStack_190 = local_b8;
      local_198._4_4_ = local_3c;
      local_8 = 9;
      local_198._0_4_ = (char *)0x6fd92e;
      FUN_009a8ee0();
      local_8._0_1_ = 10;
      puStack_190 = (uint *)0x6fd93a;
      iVar3 = FUN_00475500();
      local_198._0_4_ = (char *)((ulonglong)*(undefined8 *)(iVar3 + 0x6c) >> 0x20);
      local_198._4_4_ = (char *)*(undefined8 *)(iVar3 + 0x74);
      puStack_190 = (uint *)((ulonglong)*(undefined8 *)(iVar3 + 0x74) >> 0x20);
      local_198._0_4_ = (char *)FUN_009a9880((int)*(undefined8 *)(iVar3 + 0x6c));
      puStack_190 = (uint *)0xffffffff;
      local_198._4_4_ = (char *)0x0;
      local_8._0_1_ = 0xb;
      FUN_00408ed0();
      if (0xf < local_88) {
        puStack_190 = (uint *)local_9c[0];
                    /* WARNING: Subroutine does not return */
        local_198._4_4_ = &UNK_006fd984;
        FUN_00aae91b();
      }
      local_88 = 0xf;
      local_8c = 0;
      local_9c[0] = local_9c[0] & 0xffffff00;
      local_8 = CONCAT31(local_8._1_3_,0xc);
      puStack_190 = (uint *)0x6fd9a9;
      FUN_009adb70();
      if (local_38 != 0) {
        puStack_190 = (uint *)0x6fd9b8;
        FUN_009e6a80();
        puStack_190 = (uint *)local_38;
                    /* WARNING: Subroutine does not return */
        local_198._4_4_ = &UNK_006fd9c1;
        FUN_00aae91b();
      }
      local_38 = 0;
      local_34 = 0;
      local_30 = 0;
      if (0xf < local_a4) {
        puStack_190 = (uint *)local_b8[0];
                    /* WARNING: Subroutine does not return */
        local_198._4_4_ = &UNK_006fd9e2;
        FUN_00aae91b();
      }
    }
    else {
      puStack_190 = *(uint **)(param_1 + 0xd0);
      local_198._4_4_ = (char *)local_78;
      local_198._0_4_ = (char *)FUN_0052cac0();
      puStack_190 = (uint *)0xffffffff;
      local_198._4_4_ = (char *)0x0;
      local_8 = 0xd;
      FUN_00408ed0();
      if (0xf < local_64) {
        puStack_190 = (uint *)local_78[0];
                    /* WARNING: Subroutine does not return */
        local_198._4_4_ = &UNK_006fda34;
        FUN_00aae91b();
      }
    }
  }
  else {
    puStack_190 = (uint *)0xd;
    local_198._4_4_ = "output_amount";
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = uVar9 << 8;
    local_198._0_4_ = (char *)0x6fda51;
    FUN_00409350();
    local_8 = 0xe;
    puStack_190 = local_44;
    local_198._4_4_ = (char *)0x6fda66;
    iVar3 = (**(code **)(**(int **)(param_1 + 0x28) + 0x3c))();
    local_15 = iVar3 == param_3;
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_30) {
      local_198._4_4_ = (char *)local_44[0];
                    /* WARNING: Subroutine does not return */
      local_198._0_4_ = &UNK_006fda7f;
      FUN_00aae91b();
    }
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = local_44[0] & 0xffffff00;
    if ((bool)local_15) {
      local_28 = *(float *)(DAT_012588e8 + 0xbcc);
      if (((*(int *)(param_1 + 0xd4) != 0) &&
          (iVar3 = *(int *)(*(int *)(param_1 + 0xd4) + 0x2c), iVar3 != 0)) &&
         (iVar3 = *(int *)(iVar3 + 300), iVar3 != 0)) {
        param_3 = 0;
        local_20._0_4_ = 0x8000;
        local_20._4_4_ = 0;
        local_5c = (undefined1 *)iVar3;
        if (*(int *)(param_1 + 0xd0) != 0) {
          local_198._4_4_ = *(char **)(*(int *)(*(int *)(param_1 + 0xd0) + 0x26c) + 4);
          local_7c = (undefined1 *)((int)&local_198 + 4);
          local_198._0_4_ = (char *)0x6fdb0b;
          puVar6 = (uint *)FUN_0043a5b0();
          local_20._0_4_ = *puVar6 + 0x8000;
          local_20._4_4_ = puVar6[1] + (uint)(0xffff7fff < *puVar6);
          iVar8 = *(int *)(param_1 + 0xd0);
          if (*(int *)(iVar8 + 0x5c) != 0) {
            local_c8 = *(undefined4 *)(iVar8 + 0x58);
            param_3 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar8 + 0x5c) * 4) +
                              0xbcc);
            local_50._0_4_ = *(uint *)(param_3 + 0x100);
            local_50._4_4_ = *(int *)(param_3 + 0x104);
            local_7c = (undefined1 *)((int)&local_198 + 4);
            local_198._4_4_ =
                 *(char **)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                             *(int *)(iVar8 + 0x5c) * 4) + 0xa60) + 0x198);
            local_198._0_4_ = (char *)0x6fdb8d;
            puVar6 = (uint *)FUN_0043a5b0();
            uVar9 = *puVar6 + (uint)local_50;
            bVar12 = CARRY4((uint)local_20,uVar9);
            local_20._0_4_ = (uint)local_20 + uVar9;
            local_20._4_4_ =
                 local_20._4_4_ + puVar6[1] + local_50._4_4_ + (uint)CARRY4(*puVar6,(uint)local_50)
                 + (uint)bVar12;
          }
        }
        puVar10 = (undefined1 *)(*(int *)(DAT_012587f0 + 0x10) - *(int *)(DAT_012587f0 + 0xc) >> 2);
        local_50 = 0;
        local_24 = (undefined8 *)0x0;
        local_7c = puVar10;
        if (0 < (int)puVar10) {
          do {
            piVar1 = (int *)(*(int *)(iVar3 + 0x6c) +
                            (uint)*(byte *)((int)local_24 + 0x2c + iVar3) * 8);
            iVar8 = piVar1[1];
            puVar4 = local_24;
            if ((-1 < iVar8) && ((0 < iVar8 || (*piVar1 != 0)))) {
              local_c0 = 0;
              if (param_3 == 0) {
                local_198 = 0;
              }
              else {
                local_198._4_4_ = (char *)0x0;
                local_198._0_4_ = (char *)0x1;
                FUN_00576720();
                local_198._4_4_ = (char *)0x0;
                local_198._0_4_ = (char *)0x1f40000;
                local_198 = __alldiv(local_e8 << 0x1e,
                                     (((int)local_e8 >> 0x1f) << 0xf | local_e8 >> 0x11) << 0xf |
                                     (local_e8 & 0x1ffff) >> 2);
              }
              puVar4 = local_24;
              local_198 = local_198 + CONCAT44(local_20._4_4_,(uint)local_20);
              local_58 = *(longlong *)
                          (*(int *)(iVar3 + 0x6c) +
                          (uint)*(byte *)((int)local_24 + 0x2c + iVar3) * 8);
              puVar11 = (undefined4 *)
                        (*(int *)((int)local_28 + 0x2c8) +
                        (uint)*(byte *)(*(int *)(*(int *)(*(int *)(DAT_012587f0 + 0xc) +
                                                         (int)local_24 * 4) + 8) + 0x288 +
                                       (int)local_28) * 8);
              local_c4 = puVar11[1];
              lVar14 = __allmul(*puVar11,local_c4);
              local_198._4_4_ = (char *)local_58._4_4_;
              local_198._0_4_ = (char *)(undefined4)local_58;
              lVar14 = __allmul(lVar14 >> 0xf);
              local_50 = (lVar14 >> 0xf) + local_50;
              puVar10 = local_7c;
            }
            local_24 = (undefined8 *)((int)puVar4 + 1);
          } while ((int)local_24 < (int)puVar10);
        }
        iVar8 = *(int *)(param_1 + 0xd0);
        local_20._0_4_ = 0x8000;
        local_20._4_4_ = 0;
        local_20 = 0x8000;
        if (iVar8 != 0) {
          uVar9 = *(uint *)(*(int *)(iVar8 + 0x26c) + 4);
          local_198._4_4_ = (char *)0x0;
          local_198._0_4_ = (char *)0x1f40000;
          local_20 = __alldiv(uVar9 << 0x1e,
                              (((int)uVar9 >> 0x1f) << 0xf | uVar9 >> 0x11) << 0xf |
                              (uVar9 & 0x1ffff) >> 2);
          local_20 = local_20 + 0x8000;
          if (*(int *)(iVar8 + 0x5c) != 0) {
            local_c8 = *(undefined4 *)(iVar8 + 0x58);
            iVar2 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar8 + 0x5c) * 4) +
                            0xbcc);
            uVar9 = *(uint *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                               *(int *)(iVar8 + 0x5c) * 4) + 0xa60) + 0x1a0);
            local_80 = *(undefined4 *)(iVar2 + 0x108);
            local_198._4_4_ = (char *)0x0;
            local_198._0_4_ = (char *)0x1f40000;
            local_7c = *(undefined1 **)(iVar2 + 0x10c);
            local_58 = __alldiv(uVar9 << 0x1e,
                                (((int)uVar9 >> 0x1f) << 0xf | uVar9 >> 0x11) << 0xf |
                                (uVar9 & 0x1ffff) >> 2);
            local_198._4_4_ = (char *)0x1;
            local_198._0_4_ = (char *)0x1;
            FUN_00576720();
            local_198._4_4_ = (char *)0x0;
            local_198._0_4_ = (char *)0x1f40000;
            lVar14 = __alldiv(param_1 << 0x1e,
                              (((int)param_1 >> 0x1f) << 0xf | param_1 >> 0x11) << 0xf |
                              (param_1 & 0x1ffff) >> 2);
            local_20 = local_20 + lVar14 + local_58 + CONCAT44(local_7c,local_80);
          }
        }
        local_198._4_4_ = (char *)0x4;
        local_198._0_4_ = &DAT_00e0f520;
        local_88 = 0xf;
        local_8c = 0;
        local_9c[0] = local_9c[0] & 0xffffff00;
        FUN_00409350();
        local_8 = 0xf;
        local_198._4_4_ = (char *)0x4;
        local_198._0_4_ = &DAT_00dfc940;
        local_a4 = 0xf;
        local_a8 = 0;
        local_b8[0] = local_b8[0] & 0xffffff00;
        FUN_00409350();
        local_8._0_1_ = 0x10;
        local_198._4_4_ = (char *)0x17;
        local_198._0_4_ = "PRODUCTION_DAILY_OUTPUT";
        local_d0 = 0xf;
        local_d4 = 0;
        local_e4[0] = local_e4[0] & 0xffffff00;
        FUN_00409350();
        local_8._0_1_ = 0x11;
        local_198._0_4_ = *(char **)(iVar3 + 0x88);
        local_198._4_4_ = *(char **)(iVar3 + 0x8c);
        uVar9 = (uint)*(byte *)(*(int *)(*(int *)(iVar3 + 0x80) + 8) + 0x288 + (int)local_28);
        iVar3 = (int)local_28 + 0x280;
        lVar14 = __allmul(*(undefined4 *)(*(int *)((int)local_28 + 0x2c8) + uVar9 * 8),
                          *(undefined4 *)(*(int *)((int)local_28 + 0x2c8) + uVar9 * 8 + 4));
        local_198 = __allmul(lVar14 >> 0xf,local_20);
        local_198 = local_198 >> 0xf;
        uVar7 = FUN_00988bb0(local_78,2);
        local_198._4_4_ = (char *)local_e4;
        local_198._0_4_ = local_3c;
        local_8._0_1_ = 0x12;
        FUN_009a8ee0();
        local_8._0_1_ = 0x13;
        local_198._4_4_ = (char *)0x6fdef3;
        iVar8 = FUN_00475500();
        local_198._0_4_ = (char *)*(undefined8 *)(iVar8 + 0x74);
        local_198._4_4_ = (char *)((ulonglong)*(undefined8 *)(iVar8 + 0x74) >> 0x20);
        FUN_009a9880((int)*(undefined8 *)(iVar8 + 0x6c),
                     (int)((ulonglong)*(undefined8 *)(iVar8 + 0x6c) >> 0x20));
        local_198._4_4_ = (char *)local_b8;
        local_8._0_1_ = 0x14;
        local_198._0_4_ = (char *)0x6fdf31;
        FUN_00988f20();
        local_8._0_1_ = 0x15;
        local_198._0_4_ = (char *)0x6fdf43;
        local_198._4_4_ = (char *)uVar7;
        FUN_00988f20();
        local_198._4_4_ = (char *)local_9c;
        local_8._0_1_ = 0x16;
        local_198._0_4_ = (char *)0x6fdf5b;
        uVar7 = FUN_00988f20();
        local_198._4_4_ = (char *)0xffffffff;
        local_198._0_4_ = (char *)0x0;
        local_8._0_1_ = 0x17;
        FUN_00448aa0(uVar7);
        if (0xf < local_12c) {
                    /* WARNING: Subroutine does not return */
          local_198._0_4_ = &UNK_006fdf84;
          FUN_00aae91b();
        }
        if (0xf < local_148) {
                    /* WARNING: Subroutine does not return */
          local_198._0_4_ = &UNK_006fdfb2;
          FUN_00aae91b();
        }
        if (0xf < local_110) {
          local_198._4_4_ = (char *)local_124[0];
                    /* WARNING: Subroutine does not return */
          local_198._0_4_ = &UNK_006fdfdb;
          FUN_00aae91b();
        }
        local_110 = 0xf;
        local_114 = 0;
        local_124[0] = local_124[0] & 0xffffff00;
        if (0xf < local_f4) {
          local_198._4_4_ = (char *)local_108[0];
                    /* WARNING: Subroutine does not return */
          local_198._0_4_ = &UNK_006fe004;
          FUN_00aae91b();
        }
        local_f4 = 0xf;
        local_f8 = 0;
        local_108[0] = local_108[0] & 0xffffff00;
        local_8._0_1_ = 0x18;
        local_198._4_4_ = (char *)0x6fe025;
        FUN_009adb70();
        if (local_38 != 0) {
          local_198._4_4_ = (char *)0x6fe034;
          FUN_009e6a80();
          local_198._4_4_ = (char *)local_38;
                    /* WARNING: Subroutine does not return */
          local_198._0_4_ = &UNK_006fe03d;
          FUN_00aae91b();
        }
        local_38 = 0;
        local_34 = 0;
        local_30 = 0;
        if (0xf < local_64) {
          local_198._4_4_ = (char *)local_78[0];
                    /* WARNING: Subroutine does not return */
          local_198._0_4_ = &UNK_006fe05c;
          FUN_00aae91b();
        }
        local_64 = 0xf;
        local_68 = 0;
        local_78[0] = local_78[0] & 0xffffff00;
        if (0xf < local_d0) {
          local_198._4_4_ = (char *)local_e4[0];
                    /* WARNING: Subroutine does not return */
          local_198._0_4_ = &UNK_006fe081;
          FUN_00aae91b();
        }
        local_d0 = 0xf;
        local_d4 = 0;
        local_e4[0] = local_e4[0] & 0xffffff00;
        if (0xf < local_a4) {
          local_198._4_4_ = (char *)local_b8[0];
                    /* WARNING: Subroutine does not return */
          local_198._0_4_ = &UNK_006fe0aa;
          FUN_00aae91b();
        }
        local_8 = (uint)local_8._1_3_ << 8;
        local_a4 = 0xf;
        local_a8 = 0;
        local_b8[0] = local_b8[0] & 0xffffff00;
        if (0xf < local_88) {
          local_198._4_4_ = (char *)local_9c[0];
                    /* WARNING: Subroutine does not return */
          local_198._0_4_ = &UNK_006fe0d6;
          FUN_00aae91b();
        }
        local_198._4_4_ = (char *)0x4;
        local_198._0_4_ = &DAT_00e0f520;
        local_110 = 0xf;
        local_114 = 0;
        local_124[0] = local_124[0] & 0xffffff00;
        FUN_00409350();
        local_8 = 0x19;
        local_198._4_4_ = (char *)0x4;
        local_198._0_4_ = &DAT_00dfc940;
        local_f4 = 0xf;
        local_f8 = 0;
        local_108[0] = local_108[0] & 0xffffff00;
        FUN_00409350();
        local_8._0_1_ = 0x1a;
        local_198._4_4_ = (char *)0x20;
        local_198._0_4_ = "PRODUCTION_REQUIRED_DAILY_INPUTS";
        local_64 = 0xf;
        local_68 = 0;
        local_78[0] = local_78[0] & 0xffffff00;
        FUN_00409350();
        local_8._0_1_ = 0x1b;
        local_198._0_4_ = (char *)((int)local_5c + 0x90);
        local_198._4_4_ = (char *)iVar3;
        FUN_0047e3e0();
        local_198._0_4_ = (char *)((uint)local_c0 + (uint)local_50);
        local_198._4_4_ =
             (char *)(local_c0._4_4_ + local_50._4_4_ + (uint)CARRY4((uint)local_c0,(uint)local_50))
        ;
        uVar7 = FUN_00988bb0(local_e4,2);
        local_198._4_4_ = (char *)local_78;
        local_198._0_4_ = local_3c;
        local_8._0_1_ = 0x1c;
        FUN_009a8ee0();
        local_8._0_1_ = 0x1d;
        local_198._4_4_ = (char *)0x6fe1b0;
        iVar3 = FUN_00475500();
        local_198._0_4_ = (char *)*(undefined8 *)(iVar3 + 0x74);
        local_198._4_4_ = (char *)((ulonglong)*(undefined8 *)(iVar3 + 0x74) >> 0x20);
        FUN_009a9880((int)*(undefined8 *)(iVar3 + 0x6c),
                     (int)((ulonglong)*(undefined8 *)(iVar3 + 0x6c) >> 0x20));
        local_198._4_4_ = (char *)local_108;
        local_8._0_1_ = 0x1e;
        local_198._0_4_ = (char *)0x6fe1ee;
        FUN_00988f20();
        local_8._0_1_ = 0x1f;
        local_198._0_4_ = (char *)0x6fe200;
        local_198._4_4_ = (char *)uVar7;
        FUN_00988f20();
        local_198._4_4_ = (char *)local_124;
        local_8._0_1_ = 0x20;
        local_198._0_4_ = (char *)0x6fe218;
        uVar7 = FUN_00988f20();
        local_198._4_4_ = (char *)0xffffffff;
        local_198._0_4_ = (char *)0x0;
        local_8._0_1_ = 0x21;
        FUN_00448aa0(uVar7);
        local_198._4_4_ = (char *)0x6fe22f;
        FUN_00408ad0();
        local_198._4_4_ = (char *)0x6fe23a;
        FUN_00408ad0();
        local_198._4_4_ = (char *)0x6fe245;
        FUN_00408ad0();
        local_198._4_4_ = (char *)0x6fe250;
        FUN_00408ad0();
        local_198._4_4_ = local_3c;
        local_8 = CONCAT31(local_8._1_3_,0x1c);
        local_198._0_4_ = (char *)0x6fe25d;
        FUN_009a9740();
        local_198._4_4_ = (char *)0x6fe268;
        FUN_00408ad0();
        local_198._4_4_ = (char *)0x6fe270;
        FUN_00408ad0();
        local_198._4_4_ = (char *)0x6fe27b;
        FUN_00408ad0();
        local_198._4_4_ = (char *)0x6fe286;
        FUN_00408ad0();
      }
    }
    else {
      local_198._4_4_ = (char *)0x6fe298;
      FUN_009885d0();
      local_8 = 0x22;
      local_198._0_4_ = (char *)0x6fe2af;
      local_198._4_4_ = (char *)local_78;
      iVar3 = (**(code **)(**(int **)(param_1 + 0x28) + 0x34))();
      local_8 = local_8 & 0xffffff00;
      if (0xf < local_64) {
        local_198._0_4_ = (char *)local_78[0];
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      if (iVar3 == param_3) {
        local_198._0_4_ = (char *)0x6fe2e1;
        FUN_009885d0();
        local_8 = 0x23;
        local_198._0_4_ = (char *)local_78;
        FUN_009a8ee0(local_3c);
        local_8._0_1_ = 0x24;
        local_198._0_4_ = (char *)0x6fe300;
        iVar3 = FUN_00475500();
        local_198._0_4_ = (char *)((ulonglong)*(undefined8 *)(iVar3 + 0x74) >> 0x20);
        uVar7 = FUN_009a9880((int)*(undefined8 *)(iVar3 + 0x6c),
                             (int)((ulonglong)*(undefined8 *)(iVar3 + 0x6c) >> 0x20),
                             (int)*(undefined8 *)(iVar3 + 0x74));
        local_198._0_4_ = (char *)0xffffffff;
        local_8._0_1_ = 0x25;
        FUN_00408ed0(uVar7,0);
        local_198._0_4_ = (char *)0x6fe33c;
        FUN_00408ad0();
        local_198._0_4_ = local_3c;
        local_8 = CONCAT31(local_8._1_3_,0x23);
        FUN_009a9740();
        local_198._0_4_ = (char *)0x6fe351;
        FUN_00408ad0();
      }
    }
  }
  ExceptionList = local_10;
  return param_2;
}

