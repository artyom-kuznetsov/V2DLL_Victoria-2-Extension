// FUN_00427fd0 @ 00427fd0 body=[[00427fd0, 00428247] [00428250, 004285d7] [004285db, 0042860b] [0042860f, 00428634] [00428638, 0042865c] [00428660, 00428752] [0042875d, 00428820] [00428824, 0042885e] [00428862, 0042888a] [0042888e, 00428969] [0042896d, 00428aa6] [00428aaa, 00428ad5] [00428ad9, 00428b04] [00428b08, 00428b2d] [00428b31, 00428b55] [00428b59, 00428cf3] [00428cf7, 00428d12] [00428d16, 00428d39]]


void FUN_00427fd0(int param_1)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined **ppuVar5;
  undefined1 uVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined1 *puVar13;
  undefined4 uVar14;
  int iVar15;
  int unaff_ESI;
  uint uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined *puStack_218;
  undefined1 *puStack_214;
  undefined1 auStack_210 [108];
  undefined4 uStack_1a4;
  undefined8 uStack_1a0;
  uint *puStack_198;
  uint *puStack_194;
  undefined4 uStack_190;
  undefined4 *puStack_18c;
  int iVar21;
  int local_174;
  undefined4 local_170;
  int local_16c;
  uint local_168;
  uint auStack_15c [4];
  undefined4 uStack_14c;
  uint uStack_148;
  undefined1 *puStack_140;
  uint uStack_13c;
  uint local_138 [4];
  undefined4 uStack_128;
  uint uStack_124;
  undefined1 *puStack_11c;
  int iStack_118;
  int iStack_114;
  uint local_110 [4];
  undefined4 uStack_100;
  uint uStack_fc;
  uint auStack_f4 [4];
  undefined4 uStack_e4;
  uint uStack_e0;
  undefined1 auStack_d8 [8];
  undefined4 local_d0;
  undefined4 local_cc;
  uint local_c8;
  undefined1 local_c4;
  undefined4 uStack_b8;
  uint uStack_b4;
  uint auStack_ac [4];
  undefined4 uStack_9c;
  uint uStack_98;
  undefined **local_88;
  undefined4 local_84;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 local_68;
  undefined4 local_64;
  undefined1 local_20;
  undefined1 local_1f;
  void *pvStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00bb8411;
  pvStack_14 = ExceptionList;
  puStack_18c = (undefined4 *)0x428002;
  ExceptionList = &pvStack_14;
  FUN_00425a40();
  puStack_18c = (undefined4 *)0x42800d;
  FUN_00425ac0();
  iVar1 = DAT_012588e8;
  local_70 = *(undefined4 *)(DAT_012588e8 + 0xb0c);
  local_84 = 0x18d;
  local_68 = 0;
  local_64 = 0;
  puStack_18c = (undefined4 *)0x42807a;
  local_6c = local_70;
  FUN_0094bd40();
  local_88 = CDeclareWarAction::vftable;
  local_c = 0;
  local_20 = *(undefined1 *)(iVar1 + 0xb94);
  local_138[0] = *(uint *)(param_1 + 0x88);
  local_1f = 1;
  uVar16 = local_138[0];
  if (0 < (int)(*(int *)(param_1 + 0x8c) - local_138[0] & 0xffffffc0)) {
    local_110[0] = *(uint *)(param_1 + 0x14);
    iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x18) * 4);
    uVar16 = local_138[0] + 0x40;
    if (((int)(*(int *)(iVar1 + 0x9dc) - *(int *)(iVar1 + 0x9d8) & 0xfffffffcU) < 1) &&
       (*(int *)(local_138[0] + 0x1c) == *(int *)(param_1 + 0x18))) {
      *(int *)(local_138[0] + 0x18) = local_174;
      *(undefined4 *)(local_138[0] + 0x1c) = local_170;
    }
    puStack_18c = (undefined4 *)0x428110;
    local_138[0] = uVar16;
    FUN_00424b60();
  }
  local_d0 = 0;
  local_cc = 0;
  local_c8 = 0;
  local_c4 = 0;
  puStack_18c = &local_d0;
  local_c = CONCAT31(local_c._1_3_,1);
  uStack_190 = 0x428148;
  FUN_00913510();
  if (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + local_174 * 4) + 0xbe8) +
                       local_16c * 4) + 0x34) != 0) {
    while ((uVar3 = uStack_13c, *(uint *)(param_1 + 0x88) <= uVar16 &&
           (uVar16 < *(uint *)(param_1 + 0x8c)))) {
      uStack_13c = uStack_13c + 0x40;
      uStack_190 = 0x4281b4;
      puVar7 = (uint *)FUN_0093cfb0();
      uVar16 = puVar7[1];
      if ((uVar3 < uVar16) && (*puVar7 <= uVar3)) {
        if (uVar16 == puVar7[2]) {
          uStack_190 = 0x4281d4;
          FUN_0042c4b0();
        }
        uVar16 = puVar7[1];
      }
      else {
        if (uVar16 == puVar7[2]) {
          uStack_190 = 0x4281f0;
          FUN_0042c4b0();
        }
        uVar16 = puVar7[1];
      }
      if (uVar16 != 0) {
        uStack_190 = 0x4281fe;
        FUN_0094be20();
      }
      puVar7[1] = puVar7[1] + 0x40;
      uStack_190 = 0x42821d;
      FUN_0093cfb0();
      uStack_190 = 0x428230;
      FUN_009547e0();
      uVar16 = uStack_13c;
    }
    local_168 = *(uint *)(param_1 + 0x98);
    while ((*(uint *)(param_1 + 0x98) <= local_168 && (local_168 < *(uint *)(param_1 + 0x9c)))) {
      uStack_190 = 0x428290;
      puVar7 = (uint *)FUN_0093cfb0();
      uVar16 = puVar7[1];
      if ((local_168 < uVar16) && (*puVar7 <= local_168)) {
        if (uVar16 == puVar7[2]) {
          uStack_190 = 0x4282b0;
          FUN_0042c4b0();
        }
        uVar16 = puVar7[1];
      }
      else {
        if (uVar16 == puVar7[2]) {
          uStack_190 = 0x4282cc;
          FUN_0042c4b0();
        }
        uVar16 = puVar7[1];
      }
      if (uVar16 != 0) {
        uStack_190 = 0x4282da;
        FUN_0094be20();
      }
      puVar7[1] = puVar7[1] + 0x40;
      uStack_190 = 0x4282f9;
      FUN_0093cfb0();
      uStack_190 = 0x42830c;
      FUN_009547e0();
      local_168 = local_168 + 0x40;
    }
  }
  uStack_190 = 6;
  puStack_194 = (uint *)0x42832f;
  (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0xe0))();
  puStack_194 = (uint *)0x428338;
  FUN_00427ee0();
  uVar19 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
  iVar1 = *(int *)(DAT_012588e8 + 0xb60);
  iVar8 = *(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x4c) >> 3;
  iVar21 = 0;
  if (0 < iVar8) {
    iStack_114 = unaff_ESI >> 0x1f;
    iStack_118 = unaff_ESI;
    do {
      iVar15 = *(int *)(param_1 + 0x4c) + iVar21 * 8;
      iVar9 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar15 + 4) * 4);
      puStack_194 = (uint *)iStack_114;
      puStack_198 = (uint *)iStack_118;
      uStack_1a0 = (longlong)(*(int *)(iVar9 + 0xea0) + *(int *)(*(int *)(iVar9 + 0xbcc) + 0x28c));
      uStack_1a4 = 0x4283c5;
      uStack_1a0 = __allmul();
      puStack_194 = (uint *)0x0;
      puStack_198 = (uint *)0x3e8;
      uStack_1a4 = 0x4283d2;
      iVar9 = __alldiv();
      if ((iVar9 < 0) && (-1000 < iVar9)) {
        iVar9 = -1000;
      }
      else if ((iVar9 < 1000) && (-1 < iVar9)) {
        iVar9 = 1000;
      }
      iVar15 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar15 + 4) * 4);
      iVar10 = iVar9;
      if (0 < iVar9) {
        uStack_1a0 = (longlong)(*(int *)(*(int *)(iVar15 + 0xbcc) + 0x288) + 1000) * (longlong)iVar9
        ;
        puStack_194 = (uint *)0x0;
        puStack_198 = (uint *)0x3e8;
        uStack_1a4 = 0x428433;
        iVar10 = __alldiv();
      }
      *(int *)(iVar15 + 0xea0) = *(int *)(iVar15 + 0xea0) + iVar10;
      if (*(int *)(iVar15 + 0xea0) < 0) {
        *(undefined4 *)(iVar15 + 0xea0) = 0;
      }
      if (iVar1 == *(int *)(*(int *)(param_1 + 0x4c) + 4 + iVar21 * 8)) {
        puStack_194 = *(uint **)(*(int *)(DAT_012587e4 + 4) +
                                *(int *)(*(int *)(param_1 + 0x4c) + iVar21 * 8 + 4) * 4);
        puStack_198 = (uint *)0x42847d;
        puVar11 = (undefined4 *)FUN_005061e0();
        puStack_194 = (uint *)0x7;
        puStack_198 = (uint *)0xdf275c;
        uStack_148 = 0xf;
        uStack_14c = 0;
        auStack_15c[0] = auStack_15c[0] & 0xffffff00;
        uStack_1a0 = CONCAT44(0x42849f,(undefined4)uStack_1a0);
        FUN_00409350();
        puStack_194 = (uint *)0x0;
        pvStack_14._0_1_ = 2;
        puStack_198 = (uint *)-iVar9;
        uStack_1a0 = CONCAT44(local_138,0x4284bd);
        uVar12 = FUN_00988a50();
        puStack_194 = (uint *)0xffffffff;
        pvStack_14._0_1_ = 3;
        puStack_198 = (uint *)0x0;
        uStack_fc = 0xf;
        uStack_100 = 0;
        local_110[0] = local_110[0] & 0xffffff00;
        uStack_1a0 = CONCAT44(auStack_15c,0x4284f4);
        FUN_00408ed0();
        puStack_194 = (uint *)0xffffffff;
        pvStack_14._0_1_ = 4;
        puStack_198 = (uint *)0x0;
        uStack_e0 = 0xf;
        uStack_e4 = 0;
        auStack_f4[0] = auStack_f4[0] & 0xffffff00;
        uStack_1a0 = CONCAT44(uVar12,0x428525);
        FUN_00408ed0();
        pvStack_14._0_1_ = 5;
        iVar15 = puVar11[1];
        puStack_194 = (uint *)0x44;
        puStack_198 = (uint *)0x42853b;
        puVar13 = (undefined1 *)FUN_00aae9af();
        pvStack_14._0_1_ = 6;
        uVar6 = pvStack_14._0_1_;
        pvStack_14._0_1_ = 6;
        if (puVar13 == (undefined1 *)0x0) {
          puVar13 = (undefined1 *)0x0;
          pvStack_14._0_1_ = uVar6;
        }
        else {
          puStack_194 = (uint *)0xffffffff;
          puStack_198 = (uint *)0x0;
          *(undefined4 *)(puVar13 + 0x14) = 0xf;
          *(undefined4 *)(puVar13 + 0x10) = 0;
          *puVar13 = 0;
          uStack_1a0 = CONCAT44(local_110,0x42856e);
          FUN_00408ed0();
          puStack_194 = (uint *)0xffffffff;
          pvStack_14._0_1_ = 7;
          puStack_198 = (uint *)0x0;
          *(undefined4 *)(puVar13 + 0x30) = 0xf;
          *(undefined4 *)(puVar13 + 0x2c) = 0;
          puVar13[0x1c] = 0;
          uStack_1a0 = CONCAT44(auStack_f4,0x428595);
          FUN_00408ed0();
          *(int *)(puVar13 + 0x38) = iVar15;
          *(undefined4 *)(puVar13 + 0x3c) = 0;
          puVar13[0x40] = 0;
        }
        iVar9 = puVar11[2];
        puVar11[1] = puVar13;
        puVar11[2] = iVar9 + 1;
        if (iVar9 == 0) {
          *puVar11 = puVar13;
        }
        else {
          *(undefined1 **)(iVar15 + 0x3c) = puVar13;
        }
        if (0xf < uStack_e0) {
          puStack_194 = (uint *)auStack_f4[0];
                    /* WARNING: Subroutine does not return */
          puStack_198 = (uint *)&UNK_004285d8;
          FUN_00aae91b();
        }
        uStack_e0 = 0xf;
        uStack_e4 = 0;
        auStack_f4[0] = auStack_f4[0] & 0xffffff00;
        if (0xf < uStack_fc) {
          puStack_194 = (uint *)local_110[0];
                    /* WARNING: Subroutine does not return */
          puStack_198 = (uint *)&UNK_0042860c;
          FUN_00aae91b();
        }
        uStack_fc = 0xf;
        uStack_100 = 0;
        local_110[0] = local_110[0] & 0xffffff00;
        if (0xf < uStack_124) {
          puStack_194 = (uint *)local_138[0];
                    /* WARNING: Subroutine does not return */
          puStack_198 = (uint *)&UNK_00428635;
          FUN_00aae91b();
        }
        pvStack_14._0_1_ = 1;
        uStack_124 = 0xf;
        uStack_128 = 0;
        local_138[0] = local_138[0] & 0xffffff00;
        if (0xf < uStack_148) {
          puStack_194 = (uint *)auStack_15c[0];
                    /* WARNING: Subroutine does not return */
          puStack_198 = (uint *)&UNK_0042865d;
          FUN_00aae91b();
        }
        puStack_194 = (uint *)0x0;
        puStack_198 = (uint *)&DAT_00ded94d;
        uStack_148 = 0xf;
        uStack_14c = 0;
        auStack_15c[0] = auStack_15c[0] & 0xffffff00;
        uStack_1a0 = CONCAT44(0x42867b,(undefined4)uStack_1a0);
        FUN_00409350();
        pvStack_14._0_1_ = 8;
        puStack_194 = (uint *)0x15;
        puStack_198 = (uint *)0xdf2764;
        uStack_124 = 0xf;
        uStack_128 = 0;
        local_138[0] = local_138[0] & 0xffffff00;
        uStack_1a0 = CONCAT44(0x42869f,(undefined4)uStack_1a0);
        FUN_00409350();
        pvStack_14._0_1_ = 9;
        puStack_140 = auStack_210;
        puStack_11c = (undefined1 *)&puStack_218;
        puStack_218 = (undefined *)0x0;
        puStack_214 = (undefined1 *)0x0;
        local_16c = 0x2d2d2d;
        puVar13 = DAT_01262ef4;
        puVar4 = auStack_210;
        ppuVar5 = &puStack_218;
        if (DAT_01262ef4 == (undefined1 *)0x0) {
          puStack_11c = (undefined1 *)FUN_00aae9af(0x44);
          pvStack_14._0_1_ = 10;
          if (puStack_11c == (undefined1 *)0x0) {
            puVar13 = (undefined1 *)0x0;
          }
          else {
            puVar13 = (undefined1 *)FUN_006a4e30();
          }
          pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,0xb);
          puVar4 = puStack_140;
          ppuVar5 = (undefined **)puStack_11c;
          if ((puVar13 != DAT_01262ef4) &&
             (puStack_11c = DAT_01262ef4, ppuVar5 = (undefined **)puStack_11c,
             DAT_01262ef4 != (undefined1 *)0x0)) {
            FUN_006a4ea0(DAT_01262ef4);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(puStack_11c);
          }
        }
        puStack_11c = (undefined1 *)ppuVar5;
        puStack_140 = puVar4;
        DAT_01262ef4 = puVar13;
        pvStack_14._0_1_ = 9;
        uVar20 = 0;
        uVar18 = 0;
        puVar7 = auStack_15c;
        uVar17 = 0;
        uVar12 = uVar19;
        iVar15 = iVar1;
        uVar14 = FUN_006a55b0(puVar11,0,puVar7,0,uVar19,iVar1,0x2d2d2d,0);
        FUN_006a7ed0(auStack_210,uVar14,puVar11,uVar17,puVar7,uVar18,uVar12,iVar15,local_16c,uVar20)
        ;
        pvStack_14._0_1_ = 0xc;
        puVar2 = *(undefined **)(*(int *)(DAT_012587e4 + 4) + iVar1 * 4);
        puVar13 = DAT_01262ef4;
        if (DAT_01262ef4 == (undefined1 *)0x0) {
          puStack_214 = (undefined1 *)0x44;
          puStack_218 = (undefined *)0x4287d4;
          iVar15 = FUN_00aae9af();
          pvStack_14._0_1_ = 0xd;
          if (iVar15 == 0) {
            puVar13 = (undefined1 *)0x0;
          }
          else {
            puStack_214 = (undefined1 *)0x4287f1;
            puVar13 = (undefined1 *)FUN_006a4e30();
          }
          puVar4 = DAT_01262ef4;
          pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,0xe);
          if ((puVar13 != DAT_01262ef4) && (DAT_01262ef4 != (undefined1 *)0x0)) {
            puStack_214 = DAT_01262ef4;
            puStack_218 = (undefined *)0x42881b;
            FUN_006a4ea0();
            puStack_214 = puVar4;
                    /* WARNING: Subroutine does not return */
            puStack_218 = &UNK_00428821;
            FUN_00aae91b();
          }
        }
        DAT_01262ef4 = puVar13;
        puStack_214 = (undefined1 *)0x0;
        pvStack_14._0_1_ = 9;
        puStack_218 = puVar2;
        FUN_0042bb30(DAT_01262ef4);
        if (0xf < uStack_124) {
          puStack_194 = (uint *)local_138[0];
                    /* WARNING: Subroutine does not return */
          puStack_198 = (uint *)&UNK_0042885f;
          FUN_00aae91b();
        }
        pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,1);
        uStack_124 = 0xf;
        uStack_128 = 0;
        local_138[0] = local_138[0] & 0xffffff00;
        if (0xf < uStack_148) {
          puStack_194 = (uint *)auStack_15c[0];
                    /* WARNING: Subroutine does not return */
          puStack_198 = (uint *)&UNK_0042888b;
          FUN_00aae91b();
        }
        uStack_148 = 0xf;
        uStack_14c = 0;
        auStack_15c[0] = auStack_15c[0] & 0xffffff00;
      }
      iVar21 = iVar21 + 1;
    } while (iVar21 < iVar8);
  }
  puStack_194 = *(uint **)(*(int *)(DAT_012587e4 + 4) + iVar1 * 4);
  puStack_198 = (uint *)0x4288c8;
  puVar11 = (undefined4 *)FUN_005061e0();
  puStack_194 = (uint *)0x10;
  puStack_198 = (uint *)0xdf2714;
  uStack_124 = 0xf;
  uStack_128 = 0;
  local_138[0] = local_138[0] & 0xffffff00;
  uStack_1a0 = CONCAT44(0x4288e8,(undefined4)uStack_1a0);
  FUN_00409350();
  pvStack_14._0_1_ = 0xf;
  puStack_194 = (uint *)0x9;
  puStack_198 = (uint *)0xdf2728;
  uStack_148 = 0xf;
  uStack_14c = 0;
  auStack_15c[0] = auStack_15c[0] & 0xffffff00;
  uStack_1a0 = CONCAT44(0x42890c,(undefined4)uStack_1a0);
  FUN_00409350();
  pvStack_14._0_1_ = 0x10;
  puVar13 = DAT_01262ef4;
  if (DAT_01262ef4 == (undefined1 *)0x0) {
    puStack_194 = (uint *)0x44;
    puStack_198 = (uint *)0x428923;
    iVar8 = FUN_00aae9af();
    pvStack_14._0_1_ = 0x11;
    if (iVar8 == 0) {
      puVar13 = (undefined1 *)0x0;
    }
    else {
      puStack_194 = (uint *)0x42893d;
      puVar13 = (undefined1 *)FUN_006a4e30();
    }
    puVar4 = DAT_01262ef4;
    pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,0x12);
    if ((puVar13 != DAT_01262ef4) && (DAT_01262ef4 != (undefined1 *)0x0)) {
      puStack_194 = (uint *)DAT_01262ef4;
      puStack_198 = (uint *)0x428964;
      FUN_006a4ea0();
      puStack_194 = (uint *)puVar4;
                    /* WARNING: Subroutine does not return */
      puStack_198 = (uint *)&UNK_0042896a;
      FUN_00aae91b();
    }
  }
  DAT_01262ef4 = puVar13;
  pvStack_14._0_1_ = 0x10;
  puStack_194 = local_138;
  puStack_198 = local_110;
  uStack_1a0 = CONCAT44(0x428992,(undefined4)uStack_1a0);
  uVar12 = FUN_00424ce0();
  puStack_194 = (uint *)0xffffffff;
  puStack_198 = (uint *)0x0;
  pvStack_14._0_1_ = 0x13;
  uStack_b4 = 0xf;
  uStack_b8 = 0;
  local_c8 = local_c8 & 0xffffff00;
  uStack_1a0 = CONCAT44(auStack_15c,0x4289c5);
  FUN_00408ed0();
  puStack_194 = (uint *)0xffffffff;
  pvStack_14._0_1_ = 0x14;
  puStack_198 = (uint *)0x0;
  uStack_98 = 0xf;
  uStack_9c = 0;
  auStack_ac[0] = auStack_ac[0] & 0xffffff00;
  uStack_1a0 = CONCAT44(uVar12,0x4289f2);
  FUN_00408ed0();
  pvStack_14._0_1_ = 0x15;
  iVar8 = puVar11[1];
  puStack_194 = (uint *)0x44;
  puStack_198 = (uint *)0x428a0c;
  puVar13 = (undefined1 *)FUN_00aae9af();
  pvStack_14._0_1_ = 0x16;
  uVar6 = pvStack_14._0_1_;
  pvStack_14._0_1_ = 0x16;
  if (puVar13 == (undefined1 *)0x0) {
    puVar13 = (undefined1 *)0x0;
    pvStack_14._0_1_ = uVar6;
  }
  else {
    puStack_194 = (uint *)0xffffffff;
    puStack_198 = (uint *)0x0;
    *(undefined4 *)(puVar13 + 0x14) = 0xf;
    *(undefined4 *)(puVar13 + 0x10) = 0;
    *puVar13 = 0;
    uStack_1a0 = CONCAT44(&local_c8,0x428a3b);
    FUN_00408ed0();
    puStack_194 = (uint *)0xffffffff;
    pvStack_14._0_1_ = 0x17;
    puStack_198 = (uint *)0x0;
    *(undefined4 *)(puVar13 + 0x30) = 0xf;
    *(undefined4 *)(puVar13 + 0x2c) = 0;
    puVar13[0x1c] = 0;
    uStack_1a0 = CONCAT44(auStack_ac,0x428a5e);
    FUN_00408ed0();
    *(int *)(puVar13 + 0x38) = iVar8;
    *(undefined4 *)(puVar13 + 0x3c) = 0;
    puVar13[0x40] = 0;
  }
  iVar21 = puVar11[2];
  puVar11[1] = puVar13;
  puVar11[2] = iVar21 + 1;
  if (iVar21 == 0) {
    *puVar11 = puVar13;
  }
  else {
    *(undefined1 **)(iVar8 + 0x3c) = puVar13;
  }
  if (0xf < uStack_98) {
    puStack_194 = (uint *)auStack_ac[0];
                    /* WARNING: Subroutine does not return */
    puStack_198 = (uint *)&UNK_00428aa7;
    FUN_00aae91b();
  }
  uStack_98 = 0xf;
  uStack_9c = 0;
  auStack_ac[0] = auStack_ac[0] & 0xffffff00;
  if (0xf < uStack_b4) {
    puStack_194 = (uint *)local_c8;
                    /* WARNING: Subroutine does not return */
    puStack_198 = (uint *)&UNK_00428ad6;
    FUN_00aae91b();
  }
  uStack_b4 = 0xf;
  uStack_b8 = 0;
  local_c8 = local_c8 & 0xffffff00;
  if (uStack_fc < 0x10) {
    uStack_fc = 0xf;
    uStack_100 = 0;
    local_110[0] = local_110[0] & 0xffffff00;
    if (0xf < uStack_148) {
      puStack_194 = (uint *)auStack_15c[0];
                    /* WARNING: Subroutine does not return */
      puStack_198 = (uint *)&UNK_00428b2e;
      FUN_00aae91b();
    }
    pvStack_14._0_1_ = 1;
    uStack_148 = 0xf;
    uStack_14c = 0;
    auStack_15c[0] = auStack_15c[0] & 0xffffff00;
    if (0xf < uStack_124) {
      puStack_194 = (uint *)local_138[0];
                    /* WARNING: Subroutine does not return */
      puStack_198 = (uint *)&UNK_00428b56;
      FUN_00aae91b();
    }
    puStack_194 = (uint *)0x0;
    puStack_198 = (uint *)&DAT_00ded94d;
    uStack_124 = 0xf;
    uStack_128 = 0;
    local_138[0] = local_138[0] & 0xffffff00;
    uStack_1a0 = CONCAT44(0x428b74,(undefined4)uStack_1a0);
    FUN_00409350();
    pvStack_14._0_1_ = 0x18;
    puStack_194 = (uint *)0x11;
    puStack_198 = (uint *)0xdf277c;
    uStack_148 = 0xf;
    uStack_14c = 0;
    auStack_15c[0] = auStack_15c[0] & 0xffffff00;
    uStack_1a0 = CONCAT44(0x428b98,(undefined4)uStack_1a0);
    FUN_00409350();
    pvStack_14._0_1_ = 0x19;
    uVar6 = pvStack_14._0_1_;
    pvStack_14._0_1_ = 0x19;
    puStack_140 = (undefined1 *)&puStack_218;
    puStack_218 = (undefined *)0x0;
    puStack_214 = (undefined1 *)0x0;
    local_16c = 0x2d2d2d;
    ppuVar5 = &puStack_218;
    if (DAT_01262ef4 == (undefined1 *)0x0) {
      puStack_140 = (undefined1 *)FUN_00aae9af(0x44);
      pvStack_14._0_1_ = 0x1a;
      if (puStack_140 == (undefined1 *)0x0) {
        uVar12 = 0;
      }
      else {
        uVar12 = FUN_006a4e30();
      }
      pvStack_14._0_1_ = 0x19;
      FUN_006a59b0(uVar12);
      ppuVar5 = (undefined **)puStack_140;
      uVar6 = pvStack_14._0_1_;
    }
    pvStack_14._0_1_ = uVar6;
    puStack_140 = (undefined1 *)ppuVar5;
    uVar18 = 0;
    uVar17 = 0;
    puVar7 = local_138;
    uVar14 = 0;
    iVar8 = iVar1;
    uVar12 = FUN_006a55b0(puVar11,0,puVar7,0,uVar19,iVar1,0x2d2d2d,0);
    FUN_006a7ed0(auStack_210,uVar12,puVar11,uVar14,puVar7,uVar17,uVar19,iVar8,local_16c,uVar18);
    pvStack_14._0_1_ = 0x1b;
    puVar2 = *(undefined **)(*(int *)(DAT_012587e4 + 4) + iVar1 * 4);
    if (DAT_01262ef4 == (undefined1 *)0x0) {
      puStack_214 = (undefined1 *)0x44;
      puStack_218 = (undefined *)0x428c8e;
      puStack_140 = (undefined1 *)FUN_00aae9af();
      pvStack_14._0_1_ = 0x1c;
      if (puStack_140 == (undefined1 *)0x0) {
        puStack_214 = (undefined1 *)0x0;
      }
      else {
        puStack_214 = (undefined1 *)0x428cab;
        puStack_214 = (undefined1 *)FUN_006a4e30();
      }
      pvStack_14._0_1_ = 0x1b;
      puStack_218 = (undefined *)0x428cbd;
      FUN_006a59b0();
    }
    puStack_214 = (undefined1 *)0x0;
    pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,0x19);
    puStack_218 = puVar2;
    FUN_0042bb30(DAT_01262ef4);
    if (0xf < uStack_148) {
      puStack_194 = (uint *)auStack_15c[0];
                    /* WARNING: Subroutine does not return */
      puStack_198 = (uint *)&UNK_00428cf4;
      FUN_00aae91b();
    }
    uStack_148 = 0xf;
    uStack_14c = 0;
    auStack_15c[0] = auStack_15c[0] & 0xffffff00;
    if (0xf < uStack_124) {
      puStack_194 = (uint *)local_138[0];
                    /* WARNING: Subroutine does not return */
      puStack_198 = (uint *)&UNK_00428d13;
      FUN_00aae91b();
    }
    puStack_194 = (uint *)auStack_d8;
    puStack_198 = (uint *)0x428d23;
    FUN_0042b9f0();
    ExceptionList = pvStack_1c;
    return;
  }
  puStack_194 = (uint *)local_110[0];
                    /* WARNING: Subroutine does not return */
  puStack_198 = (uint *)&UNK_00428b05;
  FUN_00aae91b();
}

