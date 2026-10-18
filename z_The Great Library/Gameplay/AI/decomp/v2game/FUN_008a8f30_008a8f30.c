// FUN_008a8f30 @ 008a8f30  (requested 008A8F30, first bytes: 55 8B EC 6A FF 68 B0 40)


/* WARNING: Removing unreachable block (ram,0x008a9521) */

undefined4 *
FUN_008a8f30(undefined4 *param_1,undefined4 ***param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,int param_6,int param_7,int *param_8,int param_9)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  undefined1 uVar4;
  char cVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  char *pcVar11;
  uint ***pppuVar12;
  undefined2 *puVar13;
  undefined4 **ppuVar14;
  float10 fVar15;
  longlong lVar16;
  undefined1 auStack_448 [4];
  undefined4 uStack_444;
  undefined4 ***pppuStack_440;
  uint *puStack_43c;
  undefined4 ***pppuStack_438;
  uint *apuStack_434 [2];
  undefined4 uStack_42c;
  undefined1 auStack_428 [8];
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined4 ***pppuStack_418;
  undefined4 ***pppuStack_414;
  undefined4 ***pppuStack_410;
  undefined1 auStack_40c [4];
  undefined4 uStack_408;
  undefined4 *puStack_404;
  uint **ppuStack_400;
  uint *puStack_3fc;
  undefined4 uStack_3f8;
  undefined *puStack_3f4;
  uint **ppuStack_3f0;
  undefined4 ***pppuStack_3ec;
  int iStack_3e8;
  undefined4 ***pppuStack_3e4;
  undefined4 **local_2c4;
  uint local_2b0;
  undefined4 **local_2a8 [4];
  undefined4 local_298;
  uint local_294;
  undefined4 **local_28c [4];
  undefined4 local_27c;
  uint local_278;
  undefined4 **local_270 [4];
  undefined4 local_260;
  uint local_25c;
  undefined4 **local_254;
  undefined4 local_244;
  uint local_240;
  undefined4 **local_238;
  undefined4 local_228;
  uint local_224;
  undefined4 **local_200;
  undefined4 local_1f0;
  uint local_1ec;
  char local_1e4 [4];
  undefined1 local_1e0 [28];
  undefined4 **local_1c4;
  undefined4 local_1b4;
  uint local_1b0;
  undefined4 local_1a8;
  undefined1 local_1a0 [28];
  undefined4 **local_184;
  undefined4 local_174;
  uint local_170;
  undefined4 local_168;
  uint **local_164;
  undefined4 **local_160 [4];
  undefined4 local_150;
  uint local_14c;
  undefined4 **local_144 [4];
  undefined4 local_134;
  uint local_130;
  undefined4 **local_128 [4];
  undefined4 local_118;
  uint local_114;
  uint local_10c;
  undefined4 local_fc;
  uint local_f8;
  uint local_f0;
  undefined4 local_e0;
  uint local_dc;
  uint **local_d4 [4];
  undefined4 local_c4;
  uint local_c0;
  undefined4 **local_b8 [3];
  int local_ac;
  undefined4 local_a8;
  uint local_a4;
  uint *local_9c;
  undefined4 local_98;
  undefined1 local_91;
  undefined4 **local_90 [4];
  undefined4 local_80;
  uint local_7c;
  uint **local_74 [4];
  undefined4 local_64;
  uint local_60;
  int *local_58;
  undefined4 **local_54 [4];
  undefined4 local_44;
  uint local_40;
  undefined4 local_38;
  int local_34;
  int *local_30;
  undefined8 local_2c;
  int *local_20;
  undefined4 local_1c;
  uint **local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar8 = DAT_012587e4;
  puStack_c = &LAB_00b940b0;
  local_10 = ExceptionList;
  local_20 = (int *)0x0;
  local_8 = 0;
  ExceptionList = &local_10;
  *param_1 = CEventWindow::vftable;
  param_1[2] = *(undefined4 *)(*(int *)(*(int *)(iVar8 + 4) + param_6 * 4) + 0xcdc);
  param_1[3] = param_2;
  FUN_008a88d0();
  param_1[0x17] = CButtonObserverGlue<CEventWindow>::vftable;
  param_1[0x18] = param_1;
  param_1[0x19] = FUN_008ae150;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = CButtonObserverGlue<CEventWindow>::vftable;
  param_1[0x23] = param_1;
  param_1[0x24] = FUN_008ae230;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  iVar8 = DAT_012588e8;
  local_8._0_1_ = 3;
  param_1[0x31] = 43800000;
  param_1[0x31] = DAT_01259abc;
  *(undefined1 *)(param_1 + 0x33) = 0;
  piVar6 = (int *)(**(code **)(**(int **)(iVar8 + 0xb24) + 0x50))();
  fVar15 = (float10)(**(code **)(*piVar6 + 0x14))();
  param_1[0x32] = (float)fVar15;
  param_1[0xd] = param_1 + 4;
  *(undefined1 *)(param_1 + 0x16) = 1;
  if (*(char *)(param_2 + 0x69) != '\0') {
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = (undefined4 **)((uint)local_54[0] & 0xffffff00);
    FUN_00409350();
    local_8._0_1_ = 4;
    local_20 = (int *)(**(code **)(*(int *)param_1[2] + 0x34))();
    iVar8 = *local_20;
    (**(code **)(*(int *)param_1[2] + 0x3c))();
    uVar7 = (**(code **)(iVar8 + 0x2c))();
    local_8._0_1_ = 3;
    param_1[1] = uVar7;
    if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = (undefined4 **)((uint)local_54[0] & 0xffffff00);
    FUN_00409350();
    local_2c._0_4_ = 0x2d2d2d;
    local_18 = (uint **)&pppuStack_3ec;
    ppuStack_3f0 = (uint **)0x8a910c;
    FUN_008a88d0();
    ppuStack_3f0 = (uint **)0x0;
    local_18 = (uint **)auStack_40c;
    local_8._0_1_ = 6;
    pppuStack_410 = param_2;
    pppuStack_414 = (undefined4 ***)0x8a9122;
    FUN_008a6010();
    pppuStack_410 = local_90;
    local_8._0_1_ = 5;
    pppuStack_414 = (undefined4 ***)0x8a9132;
    FUN_008adbe0();
    local_8._0_1_ = 7;
    local_20 = (int *)(**(code **)(*(int *)param_1[1] + 0x3c))();
    FUN_00408ed0();
    FUN_00a5ecc0();
    if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 3;
    local_7c = 0xf;
    local_80 = 0;
    local_90[0] = (undefined4 **)((uint)local_90[0] & 0xffffff00);
    if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = (undefined4 **)((uint)local_54[0] & 0xffffff00);
    FUN_00409350();
    local_2c._0_4_ = 0x2d2d2d;
    local_18 = (uint **)&ppuStack_3f0;
    puStack_3f4 = (undefined *)0x8a91de;
    FUN_008a88d0();
    puStack_3f4 = (undefined *)0x0;
    local_18 = (uint **)&pppuStack_410;
    local_8._0_1_ = 9;
    pppuStack_414 = param_2;
    pppuStack_418 = (undefined4 ***)0x8a91f4;
    FUN_008a60f0();
    pppuStack_414 = local_90;
    local_8._0_1_ = 8;
    pppuStack_418 = (undefined4 ***)0x8a9204;
    FUN_008adbe0();
    local_8._0_1_ = 10;
    local_20 = (int *)(**(code **)(*(int *)param_1[1] + 0x3c))();
    FUN_00408ed0();
    FUN_00a5ecc0();
    if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 3;
    local_7c = 0xf;
    local_80 = 0;
    local_90[0] = (undefined4 **)((uint)local_90[0] & 0xffffff00);
    if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = (undefined4 **)((uint)local_54[0] & 0xffffff00);
    FUN_00409350();
    local_2c._0_4_ = 0x2d2d2d;
    local_18 = (uint **)&puStack_3f4;
    uStack_3f8 = 0x8a92b0;
    FUN_008a88d0();
    uStack_3f8 = 0;
    local_18 = (uint **)&pppuStack_414;
    local_8._0_1_ = 0xc;
    pppuStack_418 = param_2;
    uStack_41c = 0x8a92c6;
    FUN_008a6070();
    pppuStack_418 = local_90;
    local_8._0_1_ = 0xb;
    uStack_41c = 0x8a92d6;
    FUN_008adbe0();
    local_8._0_1_ = 0xd;
    local_20 = (int *)(**(code **)(*(int *)param_1[1] + 0x3c))();
    FUN_00408ed0();
    FUN_00a5ecc0();
    if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 3;
    local_7c = 0xf;
    local_80 = 0;
    local_90[0] = (undefined4 **)((uint)local_90[0] & 0xffffff00);
    if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_a4 = 0xf;
    local_a8 = 0;
    local_b8[0] = (undefined4 **)((uint)local_b8[0] & 0xffffff00);
    FUN_00409350();
    local_8._0_1_ = 0xe;
    FUN_0055dd40();
    local_8._0_1_ = 0xf;
    local_20 = (int *)(**(code **)(*(int *)param_1[1] + 0x3c))();
    FUN_00408ed0();
    FUN_00a5ecc0();
    lVar16 = CONCAT44(local_2c._4_4_,(int)local_2c);
    if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 3;
    local_7c = 0xf;
    local_80 = 0;
    local_90[0] = (undefined4 **)((uint)local_90[0] & 0xffffff00);
    if (0xf < local_a4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_a4 = 0xf;
    local_a8 = 0;
    local_b8[0] = (undefined4 **)((uint)local_b8[0] & 0xffffff00);
    piVar6 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + param_6 * 4) + 0xe44);
    iVar8 = DAT_0131bb34;
    while (piVar6 != (int *)0x0) {
      local_30 = (int *)piVar6[2];
      local_20 = (int *)*piVar6;
      ppuVar14 = *(undefined4 ***)((int)local_20 + 0x48);
      while ((piVar6 = local_30, *(undefined4 ***)((int)local_20 + 0x48) <= ppuVar14 &&
             (ppuVar14 < *(undefined4 ***)((int)local_20 + 0x4c)))) {
        local_58 = *(int **)(*(int *)(DAT_012588e8 + 0xacc) + (int)*ppuVar14 * 4);
        local_9c = (uint *)(ppuVar14 + 1);
        if (iVar8 == 0) {
          local_2c = lVar16;
          local_18 = (uint **)FUN_00aae9af();
          local_8._0_1_ = 0x10;
          if (local_18 == (uint **)0x0) {
            iVar8 = 0;
            lVar16 = local_2c;
          }
          else {
            iVar8 = FUN_0041a160();
            lVar16 = local_2c;
          }
          local_8 = CONCAT31(local_8._1_3_,0x11);
          local_18 = (uint **)0x0;
          if ((iVar8 != DAT_0131bb34) &&
             (local_14 = (undefined4 ***)DAT_0131bb34, DAT_0131bb34 != 0)) {
            local_2c = lVar16;
            FUN_0096dd80();
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_8._0_1_ = 3;
          DAT_0131bb34 = iVar8;
        }
        iVar9 = *(int *)(iVar8 + 0x10) - *(int *)(iVar8 + 0xc) >> 2;
        ppuVar14 = (undefined4 **)local_9c;
        if (0 < iVar9) {
          local_34 = 0;
          local_38 = iVar9;
          do {
            iVar9 = *(int *)(local_34 + *(int *)((int)local_58 + 0x194));
            iVar8 = DAT_0131bb34;
            ppuVar14 = (undefined4 **)local_9c;
            while (DAT_0131bb34 = iVar8, local_9c = (uint *)ppuVar14, iVar9 != 0) {
              iVar9 = *(int *)(iVar9 + 0x27c);
              local_2c = lVar16;
              FUN_00963d10();
              iVar8 = DAT_0131bb34;
              ppuVar14 = (undefined4 **)local_9c;
              lVar16 = local_2c;
              if (0 < local_2c) {
                lVar16 = __alldiv();
                iVar8 = DAT_0131bb34;
                ppuVar14 = (undefined4 **)local_9c;
              }
            }
            local_34 = local_34 + 0x10;
            local_38 = local_38 + -1;
          } while (local_38 != 0);
          local_38 = 0;
        }
      }
    }
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = (undefined4 **)((uint)local_54[0] & 0xffffff00);
    local_2c = lVar16;
    FUN_00409350();
    local_8._0_1_ = 0x12;
    local_a4 = 0xf;
    local_a8 = 0;
    local_b8[0] = (undefined4 **)((uint)local_b8[0] & 0xffffff00);
    FUN_00409350();
    local_8._0_1_ = 0x13;
    (**(code **)(*(int *)param_1[1] + 0x3c))();
    FUN_00408ed0();
    FUN_00a5ecc0();
    if (0xf < local_a4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 3;
    local_a4 = 0xf;
    local_a8 = 0;
    local_b8[0] = (undefined4 **)((uint)local_b8[0] & 0xffffff00);
    if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = (undefined4 **)((uint)local_54[0] & 0xffffff00);
    FUN_00409350();
    local_8._0_1_ = 0x14;
    local_dc = 0xf;
    local_e0 = 0;
    local_f0 = local_f0 & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0x15;
    local_f8 = 0xf;
    local_fc = 0;
    local_10c = local_10c & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0x16;
    local_14 = (undefined4 ***)FUN_009c9c70();
    local_8._0_1_ = 0x17;
    local_20 = (int *)FUN_009a8ee0();
    local_8._0_1_ = 0x18;
    puVar10 = DAT_0125b5e0;
    if (DAT_0125b5e0 == (undefined4 *)0x0) {
      local_18 = (uint **)FUN_00aae9af();
      local_8._0_1_ = 0x19;
      if (local_18 == (uint **)0x0) {
        puVar10 = (undefined4 *)0x0;
      }
      else {
        puVar10 = (undefined4 *)FUN_00475150();
      }
      local_8._0_1_ = 0x1a;
      local_18 = (uint **)0x0;
      if ((puVar10 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
        (**(code **)*DAT_0125b5e0)();
      }
    }
    DAT_0125b5e0 = puVar10;
    local_8._0_1_ = 0x18;
    FUN_009a9880();
    local_8._0_1_ = 0x1b;
    FUN_00988f20();
    local_8._0_1_ = 0x1c;
    FUN_00988f20();
    local_8._0_1_ = 0x1d;
    (**(code **)(*(int *)param_1[1] + 0x3c))();
    FUN_00408ed0();
    FUN_00a5ecc0();
    if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_7c = 0xf;
    local_80 = 0;
    local_90[0] = (undefined4 **)((uint)local_90[0] & 0xffffff00);
    if (0xf < local_114) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_114 = 0xf;
    local_118 = 0;
    local_128[0] = (undefined4 **)((uint)local_128[0] & 0xffffff00);
    if (0xf < local_14c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_14c = 0xf;
    local_150 = 0;
    local_160[0] = (undefined4 **)((uint)local_160[0] & 0xffffff00);
    local_8._0_1_ = 0x1e;
    FUN_009adb70();
    if (local_ac != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_ac = 0;
    local_a8 = 0;
    local_a4 = 0;
    if (0xf < local_130) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_130 = 0xf;
    local_134 = 0;
    local_144[0] = (undefined4 **)((uint)local_144[0] & 0xffffff00);
    if (0xf < local_f8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_f8 = 0xf;
    local_fc = 0;
    local_10c = local_10c & 0xffffff00;
    if (0xf < local_dc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 3;
    local_dc = 0xf;
    local_e0 = 0;
    local_f0 = local_f0 & 0xffffff00;
    if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_18 = &puStack_3fc;
    ppuStack_400 = (uint **)0x8a991e;
    FUN_008a88d0();
    ppuStack_400 = (uint **)param_2;
    puStack_404 = param_1;
    uStack_408 = 0x8a992b;
    FUN_008ab700();
    local_dc = 0xf;
    local_e0 = 0;
    local_f0 = local_f0 & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0x1f;
    piVar6 = (int *)(**(code **)(*(int *)param_1[2] + 0x34))();
    local_20 = (int *)(**(code **)(*piVar6 + 0x48))();
    local_8._0_1_ = 3;
    if (0xf < local_dc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_dc = 0xf;
    local_e0 = 0;
    local_f0 = local_f0 & 0xffffff00;
    local_f8 = 0xf;
    local_fc = 0;
    local_10c = local_10c & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0x20;
    piVar6 = (int *)(**(code **)(*(int *)param_1[2] + 0x34))();
    local_58 = (int *)(**(code **)(*piVar6 + 0x48))();
    local_8._0_1_ = 3;
    if (0xf < local_f8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_2c._0_4_ = *(int *)((int)local_20 + 100);
    local_2c._4_4_ = *(int *)((int)local_20 + 0x68);
    local_f8 = 0xf;
    local_fc = 0;
    local_10c = local_10c & 0xffffff00;
    local_34 = 0;
    ppuVar14 = param_2[0x2c];
    while ((param_2[0x2c] <= ppuVar14 && (ppuVar14 < param_2[0x2d]))) {
      local_20 = *ppuVar14;
      local_9c = (uint *)(ppuVar14 + 1);
      local_dc = 0xf;
      local_e0 = 0;
      local_f0 = local_f0 & 0xffffff00;
      FUN_00409350();
      local_8._0_1_ = 0x21;
      piVar6 = (int *)(**(code **)(*(int *)param_1[2] + 0x34))();
      piVar6 = (int *)(**(code **)(*piVar6 + 0xc))();
      local_8._0_1_ = 3;
      if (0xf < local_dc) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_dc = 0xf;
      local_e0 = 0;
      local_f0 = local_f0 & 0xffffff00;
      local_168 = 0x2d2d2d;
      (**(code **)(*piVar6 + 0xd0))();
      local_18 = (uint **)&pppuStack_414;
      pppuStack_418 = (undefined4 ***)0x8a9b0f;
      FUN_008a88d0();
      pppuStack_418 = (undefined4 ***)0x0;
      local_18 = apuStack_434;
      local_8._0_1_ = 0x22;
      pppuStack_438 = (undefined4 ***)local_20;
      puStack_43c = (uint *)0x8a9b25;
      FUN_008a8510();
      pppuStack_438 = local_74;
      local_8._0_1_ = 3;
      puStack_43c = (uint *)0x8a9b32;
      FUN_008adbe0();
      local_8._0_1_ = 0x23;
      (**(code **)(*piVar6 + 0xcc))();
      local_8._0_1_ = 3;
      if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_38 = CONCAT22(local_2c._4_2_,(short)(int)local_2c);
      (**(code **)(*piVar6 + 200))();
      local_40 = 0xf;
      local_44 = 0;
      local_54[0] = (undefined4 **)((uint)local_54[0] & 0xffffff00);
      local_8._0_1_ = 0x24;
      pcVar11 = __itoa(local_34,local_1e4,10);
      do {
        cVar5 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar5 != '\0');
      FUN_00409350();
      local_8._0_1_ = 0x25;
      FUN_00988fa0();
      local_8._0_1_ = 0x26;
      (**(code **)(*(int *)param_1[1] + 0x58))();
      if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8._0_1_ = 3;
      local_7c = 0xf;
      local_80 = 0;
      uVar3 = (uint)local_90[0] >> 8;
      local_90[0] = (undefined4 **)(uVar3 << 8);
      if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      pcVar11 = &stack0x00000038;
      local_7c = 0xf;
      local_80 = 0;
      local_90[0] = (undefined4 **)(uVar3 << 8);
      do {
        cVar5 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar5 != '\0');
      FUN_00409350();
      local_8._0_1_ = 0x27;
      local_40 = 0xf;
      local_44 = 0;
      local_54[0] = (undefined4 **)((uint)local_54[0] & 0xffffff00);
      FUN_00409350();
      local_114 = 0xf;
      local_118 = 0;
      local_128[0] = (undefined4 **)((uint)local_128[0] & 0xffffff00);
      local_8._0_1_ = 0x29;
      pppuStack_3e4 = (undefined4 ***)0x8a9ca7;
      pcVar11 = __itoa(param_7,local_1e4,10);
      do {
        cVar5 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar5 != '\0');
      FUN_00409350();
      local_8._0_1_ = 0x2a;
      local_14c = 0xf;
      local_150 = 0;
      local_160[0] = (undefined4 **)((uint)local_160[0] & 0xffffff00);
      FUN_00409350();
      local_8._0_1_ = 0x2b;
      local_14 = (undefined4 ***)FUN_009888f0();
      local_8._0_1_ = 0x2c;
      local_130 = 0xf;
      local_134 = 0;
      local_144[0] = (undefined4 **)((uint)local_144[0] & 0xffffff00);
      FUN_00409350();
      local_8._0_1_ = 0x2d;
      local_20 = (int *)FUN_009888f0();
      local_8._0_1_ = 0x2e;
      local_a4 = 0xf;
      local_a8 = 0;
      local_b8[0] = (undefined4 **)((uint)local_b8[0] & 0xffffff00);
      FUN_00409350();
      local_8._0_1_ = 0x2f;
      FUN_009888f0();
      local_8._0_1_ = 0x30;
      FUN_00988f20();
      local_8._0_1_ = 0x31;
      FUN_00988f20();
      local_8._0_1_ = 0x32;
      FUN_00988f20();
      local_8._0_1_ = 0x33;
      FUN_00988f20();
      local_8._0_1_ = 0x34;
      FUN_00988f20();
      local_8._0_1_ = 0x35;
      FUN_00988f20();
      local_8._0_1_ = 0x36;
      FUN_00988f20();
      local_8._0_1_ = 0x37;
      FUN_00988f20();
      local_8._0_1_ = 0x38;
      (**(code **)(*piVar6 + 0x78))();
      if (0xf < local_294) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_294 = 0xf;
      local_298 = 0;
      local_2a8[0] = (undefined4 **)((uint)local_2a8[0] & 0xffffff00);
      if (0xf < local_278) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_278 = 0xf;
      local_27c = 0;
      local_28c[0] = (undefined4 **)((uint)local_28c[0] & 0xffffff00);
      if (0xf < local_25c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_25c = 0xf;
      local_260 = 0;
      local_270[0] = (undefined4 **)((uint)local_270[0] & 0xffffff00);
      if (0xf < local_2b0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_2b0 = 0xf;
      if (0xf < local_224) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_224 = 0xf;
      local_228 = 0;
      local_238 = (undefined4 **)((uint)local_238 & 0xffffff00);
      if (0xf < local_240) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_240 = 0xf;
      local_244 = 0;
      local_254 = (undefined4 **)((uint)local_254 & 0xffffff00);
      if (0xf < local_1ec) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_1ec = 0xf;
      local_1f0 = 0;
      local_200 = (undefined4 **)((uint)local_200 & 0xffffff00);
      if (0xf < local_1b0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_1b0 = 0xf;
      local_1b4 = 0;
      local_1c4 = (undefined4 **)((uint)local_1c4 & 0xffffff00);
      if (0xf < local_170) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_170 = 0xf;
      local_174 = 0;
      local_184 = (undefined4 **)((uint)local_184 & 0xffffff00);
      if (0xf < local_a4) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_a4 = 0xf;
      local_a8 = 0;
      local_b8[0] = (undefined4 **)((uint)local_b8[0] & 0xffffff00);
      if (0xf < local_c0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_c0 = 0xf;
      local_c4 = 0;
      local_d4[0] = (uint **)((uint)local_d4[0] & 0xffffff00);
      if (0xf < local_130) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_130 = 0xf;
      local_134 = 0;
      local_144[0] = (undefined4 **)((uint)local_144[0] & 0xffffff00);
      if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_60 = 0xf;
      local_64 = 0;
      local_74[0] = (uint **)((uint)local_74[0] & 0xffffff00);
      if (0xf < local_14c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_14c = 0xf;
      local_150 = 0;
      local_160[0] = (undefined4 **)((uint)local_160[0] & 0xffffff00);
      if (0xf < local_114) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_114 = 0xf;
      local_118 = 0;
      local_128[0] = (undefined4 **)((uint)local_128[0] & 0xffffff00);
      if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8._0_1_ = 3;
      local_40 = 0xf;
      local_44 = 0;
      local_54[0] = (undefined4 **)((uint)local_54[0] & 0xffffff00);
      if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      (**(code **)(piVar6[0x15] + 4))();
      pppuStack_3e4 = (uint ***)0x8aa134;
      (**(code **)(*piVar6 + 0x10))();
      local_30 = (int *)param_1[0x2e];
      puVar10 = (undefined4 *)FUN_00aae9af();
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = (undefined4 *)0x0;
      }
      else {
        *puVar10 = piVar6;
        puVar10[1] = local_30;
        puVar10[2] = 0;
        *(undefined1 *)(puVar10 + 3) = 0;
      }
      iVar8 = param_1[0x2f];
      param_1[0x2e] = puVar10;
      param_1[0x2f] = iVar8 + 1;
      if (iVar8 == 0) {
        param_1[0x2d] = puVar10;
      }
      else {
        local_30[2] = (int)puVar10;
      }
      local_2c._0_4_ = (int)local_2c + local_58[0x19];
      local_2c._4_4_ = local_2c._4_4_ + local_58[0x1a];
      local_34 = local_34 + 1;
      ppuVar14 = (undefined4 **)local_9c;
    }
    goto LAB_008ab4c6;
  }
  local_f8 = 0xf;
  local_fc = 0;
  local_10c = local_10c & 0xffffff00;
  local_8._0_1_ = 0x39;
  uVar4 = (undefined1)local_8;
  local_8._0_1_ = 0x39;
  if (*(char *)((int)param_2 + 0x1a2) == '\0') {
    local_8._0_1_ = uVar4;
    if (param_6 == 0) {
      FUN_009885d0();
      local_8._0_1_ = 0x44;
      local_14 = (undefined4 ***)(**(code **)(*(int *)param_1[2] + 0x34))();
      iVar8 = (int)*local_14;
      (**(code **)(*(int *)param_1[2] + 0x3c))();
      uVar7 = (**(code **)(iVar8 + 0x2c))();
      param_1[1] = uVar7;
      local_8._0_1_ = 0x39;
      FUN_00408ad0();
      FUN_009885d0();
      local_8._0_1_ = 0x45;
      piVar6 = (int *)(**(code **)(*(int *)param_1[2] + 0x34))();
      local_30 = (int *)(**(code **)(*piVar6 + 0x48))();
      local_8._0_1_ = 0x39;
      FUN_00408ad0();
      FUN_009885d0();
      local_8._0_1_ = 0x46;
      piVar6 = (int *)(**(code **)(*(int *)param_1[2] + 0x34))();
      local_34 = (**(code **)(*piVar6 + 0x48))();
      local_8._0_1_ = 0x39;
      FUN_00408ad0();
      FUN_004012f0();
      FUN_009885d0();
      local_8._0_1_ = 0x47;
      (**(code **)(**(int **)(*(int *)(DAT_012588e8 + 0xacc) + param_7 * 4) + 0x1c))();
      local_8._0_1_ = 0x48;
      (**(code **)(*(int *)param_1[1] + 0x3c))();
      FUN_009a67d0();
      FUN_00408ad0();
      local_8._0_1_ = 0x39;
      FUN_00408ad0();
      local_2c._0_4_ = *(int *)((int)local_30 + 100);
      local_9c = *(uint **)(local_34 + 100);
      iVar8 = *(int *)((int)local_30 + 0x68) -
              *(int *)(local_34 + 0x68) * ((int)param_2[0x2d] - (int)param_2[0x2c] >> 2);
      local_2c._4_4_ = iVar8;
      FUN_009885d0();
      local_8._0_1_ = 0x49;
      piVar6 = (int *)(**(code **)(*(int *)param_1[1] + 0x44))();
      (**(code **)(*piVar6 + 0x3c))();
      local_8._0_1_ = 0x39;
      FUN_00408ad0();
      local_38 = CONCAT22(local_38._2_2_ + (short)iVar8,(undefined2)local_38);
      FUN_009885d0();
      local_8._0_1_ = 0x4a;
      piVar6 = (int *)(**(code **)(*(int *)param_1[1] + 0x44))();
      (**(code **)(*piVar6 + 200))();
      local_8 = CONCAT31(local_8._1_3_,0x39);
      FUN_00408ad0();
    }
    else {
      FUN_009885d0();
      local_8._0_1_ = 0x41;
      local_14 = (undefined4 ***)(**(code **)(*(int *)param_1[2] + 0x34))();
      iVar8 = (int)*local_14;
      (**(code **)(*(int *)param_1[2] + 0x3c))();
      uVar7 = (**(code **)(iVar8 + 0x2c))();
      param_1[1] = uVar7;
      local_8._0_1_ = 0x39;
      FUN_00408ad0();
      FUN_009885d0();
      local_8._0_1_ = 0x42;
      piVar6 = (int *)(**(code **)(*(int *)param_1[2] + 0x34))();
      local_30 = (int *)(**(code **)(*piVar6 + 0x48))();
      local_8._0_1_ = 0x39;
      FUN_00408ad0();
      FUN_009885d0();
      local_8._0_1_ = 0x43;
      piVar6 = (int *)(**(code **)(*(int *)param_1[2] + 0x34))();
      local_34 = (**(code **)(*piVar6 + 0x48))();
      local_8 = CONCAT31(local_8._1_3_,0x39);
      FUN_00408ad0();
      FUN_004012f0();
      local_2c._0_4_ = *(int *)((int)local_30 + 100);
      local_2c._4_4_ = *(int *)((int)local_30 + 0x68);
    }
  }
  else {
    FUN_009885d0();
    local_8._0_1_ = 0x3a;
    local_14 = (undefined4 ***)(**(code **)(*(int *)param_1[2] + 0x34))();
    iVar8 = (int)*local_14;
    (**(code **)(*(int *)param_1[2] + 0x3c))();
    uVar7 = (**(code **)(iVar8 + 0x2c))();
    param_1[1] = uVar7;
    local_8._0_1_ = 0x39;
    FUN_00408ad0();
    FUN_009885d0();
    local_8._0_1_ = 0x3b;
    piVar6 = (int *)(**(code **)(*(int *)param_1[2] + 0x34))();
    local_30 = (int *)(**(code **)(*piVar6 + 0x48))();
    local_8._0_1_ = 0x39;
    FUN_00408ad0();
    FUN_009885d0();
    local_8._0_1_ = 0x3c;
    piVar6 = (int *)(**(code **)(*(int *)param_1[2] + 0x34))();
    local_34 = (**(code **)(*piVar6 + 0x48))();
    local_8 = CONCAT31(local_8._1_3_,0x39);
    FUN_00408ad0();
    FUN_00409350();
    local_2c._0_4_ = *(int *)((int)local_30 + 100);
    local_2c._4_4_ = *(int *)((int)local_30 + 0x68);
    local_1c = param_5;
    local_18 = (uint **)param_6;
    if (param_6 == 0) {
      if (param_9 == 0) {
        if (param_7 < 1) {
          cVar5 = (**(code **)(*param_8 + 0x20))();
          if (cVar5 == '\0') goto LAB_008aa307;
          iVar8 = param_8[0x19];
        }
        else {
          iVar8 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + param_7 * 4);
        }
        local_18 = *(uint ***)(iVar8 + 300);
        local_1c = *(undefined4 *)(iVar8 + 0x128);
      }
      else {
        iVar8 = FUN_008a8d70();
        local_1c = *(undefined4 *)(iVar8 + 0x58);
        local_18 = *(uint ***)(iVar8 + 0x5c);
      }
    }
LAB_008aa307:
    FUN_009885d0();
    local_8._0_1_ = 0x3d;
    piVar6 = (int *)(**(code **)(*(int *)param_1[1] + 0x44))();
    (**(code **)(*piVar6 + 0xd4))();
    local_8._0_1_ = 0x39;
    FUN_00408ad0();
    FUN_009885d0();
    local_8._0_1_ = 0x3e;
    piVar6 = (int *)(**(code **)(*(int *)param_1[1] + 0x44))();
    local_14 = (undefined4 ***)(**(code **)(*piVar6 + 0xec))();
    iVar8 = (int)*local_14;
    FUN_0052fc10();
    (**(code **)(iVar8 + 0x150))();
    local_8._0_1_ = 0x39;
    FUN_00408ad0();
    FUN_009885d0();
    local_8._0_1_ = 0x3f;
    piVar6 = (int *)(**(code **)(*(int *)param_1[1] + 0x44))();
    (**(code **)(*piVar6 + 0xd4))();
    local_8._0_1_ = 0x39;
    FUN_00408ad0();
    FUN_009885d0();
    local_8._0_1_ = 0x40;
    piVar6 = (int *)(**(code **)(*(int *)param_1[1] + 0x44))();
    local_14 = (undefined4 ***)(**(code **)(*piVar6 + 0xec))();
    iVar8 = (int)*local_14;
    FUN_0052fc10();
    (**(code **)(iVar8 + 0x150))();
    local_8 = CONCAT31(local_8._1_3_,0x39);
    FUN_00408ad0();
  }
  FUN_009885d0();
  local_1c = 0x2d2d2d;
  local_18 = (uint **)&pppuStack_414;
  pppuStack_418 = (undefined4 ***)0x8aa74f;
  FUN_008a88d0();
  pppuStack_418 = (undefined4 ***)0x0;
  local_18 = apuStack_434;
  local_8._0_1_ = 0x4c;
  pppuStack_438 = param_2;
  puStack_43c = (uint *)0x8aa765;
  FUN_008a6010();
  pppuStack_438 = local_74;
  local_8._0_1_ = 0x4b;
  puStack_43c = (uint *)0x8aa772;
  FUN_008adbe0();
  local_8._0_1_ = 0x4d;
  local_14 = (undefined4 ***)(**(code **)(*(int *)param_1[1] + 0x3c))();
  FUN_00408ed0();
  FUN_00a5ecc0();
  if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 0x39;
  local_60 = 0xf;
  local_64 = 0;
  local_74[0] = (uint **)((uint)local_74[0] & 0xffffff00);
  if (0xf < local_c0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  FUN_009885d0();
  local_8._0_1_ = 0x4e;
  FUN_0043b700();
  local_8._0_1_ = 0x4f;
  (**(code **)(*(int *)param_1[1] + 0x3c))();
  FUN_00408ed0();
  FUN_00a5ecc0();
  if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_60 = 0xf;
  local_64 = 0;
  local_74[0] = (uint **)((uint)local_74[0] & 0xffffff00);
  if (0xf < local_c0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_dc = 0xf;
  local_e0 = 0;
  local_f0 = local_f0 & 0xffffff00;
  local_1c = 0x2d2d2d;
  local_18 = (uint **)&uStack_41c;
  uStack_420 = 0x8aa8b2;
  FUN_008a88d0();
  uStack_420 = 0;
  local_18 = &puStack_43c;
  local_8._0_1_ = 0x51;
  pppuStack_440 = param_2;
  uStack_444 = 0x8aa8c8;
  FUN_008a60f0();
  pppuStack_440 = local_74;
  local_8._0_1_ = 0x50;
  uStack_444 = 0x8aa8d5;
  FUN_008adbe0();
  local_8._0_1_ = 0x52;
  FUN_00448aa0();
  local_8._0_1_ = 0x50;
  if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  iVar8 = FUN_008a8540();
  local_91 = 1 < *(int *)(iVar8 + 0x10);
  if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if ((bool)local_91) {
    FUN_008a61b0();
    local_8._0_1_ = 0x53;
    FUN_009885d0();
    local_8._0_1_ = 0x54;
    FUN_00988f20();
    local_8._0_1_ = 0x55;
    FUN_00448aa0();
    FUN_00408ad0();
    FUN_00408ad0();
    local_8._0_1_ = 0x50;
    FUN_00408ad0();
  }
  FUN_009885d0();
  local_8._0_1_ = 0x56;
  (**(code **)(*(int *)param_1[1] + 0x3c))();
  FUN_00408ed0();
  FUN_00a5ecc0();
  local_8._0_1_ = 0x50;
  if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_9c = (uint *)param_2[0x2c];
  local_30 = (int *)0x0;
  while ((param_2[0x2c] <= local_9c && (local_9c < param_2[0x2d]))) {
    local_14 = (undefined4 ***)*local_9c;
    local_9c = local_9c + 1;
    piVar6 = (int *)(**(code **)(*(int *)param_1[2] + 0x34))();
    pppuVar12 = (uint ***)(**(code **)(*piVar6 + 0xc))();
    local_1a8 = 0x2d2d2d;
    (*(code *)(*pppuVar12)[0x34])();
    local_18 = (uint **)auStack_428;
    uStack_42c = 0x8aaa9a;
    FUN_008a88d0();
    uStack_42c = 0;
    local_18 = (uint **)auStack_448;
    local_8._0_1_ = 0x57;
    FUN_008a8510(local_14);
    local_8._0_1_ = 0x50;
    FUN_008adbe0(local_74);
    local_8._0_1_ = 0x58;
    (*(code *)(*pppuVar12)[0x33])();
    local_8._0_1_ = 0x50;
    if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
      pppuStack_3e4 = (undefined4 ***)&UNK_008aaae4;
      FUN_00aae91b();
    }
    local_58 = (int *)CONCAT22(local_2c._4_2_,(short)(int)local_2c);
    pppuStack_3e4 = (undefined4 ***)0x8aab07;
    (*(code *)(*pppuVar12)[0x32])();
    pppuStack_3e4 = local_d4;
    iStack_3e8 = 0x8aab16;
    pppuStack_3e4 = (undefined4 ***)FUN_009888f0();
    local_8._0_1_ = 0x59;
    iStack_3e8 = 0x8aab28;
    iStack_3e8 = FUN_00988fa0();
    local_8._0_1_ = 0x5a;
    pppuStack_3ec = (undefined4 ***)0x8aab3e;
    pppuStack_3e4 = pppuVar12;
    (**(code **)(*(int *)param_1[1] + 0x58))();
    if (0xf < local_60) {
      pppuStack_3ec = (undefined4 ***)local_74[0];
                    /* WARNING: Subroutine does not return */
      ppuStack_3f0 = (uint **)&UNK_008aab51;
      FUN_00aae91b();
    }
    local_8._0_1_ = 0x50;
    local_60 = 0xf;
    local_64 = 0;
    local_74[0] = (uint **)((uint)local_74[0] & 0xffffff00);
    if (0xf < local_c0) {
      pppuStack_3ec = (undefined4 ***)local_d4[0];
                    /* WARNING: Subroutine does not return */
      ppuStack_3f0 = (uint **)&UNK_008aab79;
      FUN_00aae91b();
    }
    pcVar11 = &stack0x00000038;
    local_7c = 0xf;
    local_80 = 0;
    local_90[0] = (undefined4 **)((uint)local_90[0] & 0xffffff00);
    do {
      cVar5 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar5 != '\0');
    pppuStack_3ec = (undefined4 ***)(pcVar11 + -(int)&stack0x00000039);
    ppuStack_3f0 = (uint **)&stack0x00000038;
    puStack_3f4 = (undefined *)0x8aabab;
    FUN_00409350();
    local_8._0_1_ = 0x5b;
    pppuStack_3ec = (undefined4 ***)0x1;
    ppuStack_3f0 = (uint **)&DAT_00defd44;
    local_130 = 0xf;
    local_134 = 0;
    local_144[0] = (undefined4 **)((uint)local_144[0] & 0xffffff00);
    puStack_3f4 = (undefined *)0x8aabd8;
    FUN_00409350();
    pppuStack_3ec = local_b8;
    local_8._0_1_ = 0x5c;
    ppuStack_3f0 = (uint **)0x8aabeb;
    local_18 = (uint **)FUN_009888f0();
    local_8._0_1_ = 0x5d;
    pppuStack_3ec = (undefined4 ***)0x1;
    ppuStack_3f0 = (uint **)&DAT_00defd44;
    local_14c = 0xf;
    local_150 = 0;
    local_160[0] = (undefined4 **)((uint)local_160[0] & 0xffffff00);
    puStack_3f4 = (undefined *)0x8aac16;
    FUN_00409350();
    pppuStack_3ec = local_2a8;
    local_8._0_1_ = 0x5e;
    ppuStack_3f0 = (uint **)0x8aac29;
    local_164 = (uint **)FUN_009888f0();
    local_8._0_1_ = 0x5f;
    pppuStack_3ec = (undefined4 ***)0x1;
    ppuStack_3f0 = (uint **)&DAT_00defd44;
    local_114 = 0xf;
    local_118 = 0;
    local_128[0] = (undefined4 **)((uint)local_128[0] & 0xffffff00);
    puStack_3f4 = (undefined *)0x8aac57;
    FUN_00409350();
    pppuStack_3ec = local_28c;
    local_8._0_1_ = 0x60;
    ppuStack_3f0 = (uint **)0x8aac6a;
    local_14 = (undefined4 ***)FUN_009888f0();
    local_8._0_1_ = 0x61;
    pppuStack_3ec = (undefined4 ***)0x1;
    ppuStack_3f0 = (uint **)&DAT_00defd44;
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = (undefined4 **)((uint)local_54[0] & 0xffffff00);
    puStack_3f4 = (undefined *)0x8aac89;
    FUN_00409350();
    pppuStack_3ec = local_270;
    local_8._0_1_ = 0x62;
    ppuStack_3f0 = (uint **)0x8aac9f;
    FUN_009888f0();
    pppuStack_3ec = local_54;
    local_8._0_1_ = 99;
    ppuStack_3f0 = (uint **)0x8aacb4;
    FUN_00988f20();
    local_8._0_1_ = 100;
    pppuStack_3ec = local_14;
    ppuStack_3f0 = (uint **)0x8aacc9;
    FUN_00988f20();
    pppuStack_3ec = local_128;
    local_8._0_1_ = 0x65;
    ppuStack_3f0 = (uint **)0x8aace1;
    FUN_00988f20();
    local_8._0_1_ = 0x66;
    pppuStack_3ec = (undefined4 ***)local_164;
    ppuStack_3f0 = (uint **)0x8aacf9;
    FUN_00988f20();
    pppuStack_3ec = local_160;
    local_8._0_1_ = 0x67;
    ppuStack_3f0 = (uint **)0x8aad11;
    FUN_00988f20();
    local_8._0_1_ = 0x68;
    pppuStack_3ec = (undefined4 ***)local_18;
    ppuStack_3f0 = (uint **)0x8aad26;
    FUN_00988f20();
    pppuStack_3ec = local_144;
    local_8._0_1_ = 0x69;
    ppuStack_3f0 = (uint **)0x8aad3e;
    FUN_00988f20();
    pppuStack_3ec = local_90;
    local_8._0_1_ = 0x6a;
    ppuStack_3f0 = (uint **)0x8aad53;
    pppuStack_3ec = (undefined4 ***)FUN_00988f20();
    local_8._0_1_ = 0x6b;
    ppuStack_3f0 = (uint **)0x8aad61;
    (*(code *)(*pppuVar12)[0x1e])();
    if (0xf < local_60) {
      ppuStack_3f0 = local_74[0];
                    /* WARNING: Subroutine does not return */
      puStack_3f4 = &UNK_008aad70;
      FUN_00aae91b();
    }
    local_60 = 0xf;
    local_64 = 0;
    local_74[0] = (uint **)((uint)local_74[0] & 0xffffff00);
    if (0xf < local_c0) {
      ppuStack_3f0 = local_d4[0];
                    /* WARNING: Subroutine does not return */
      puStack_3f4 = &UNK_008aad99;
      FUN_00aae91b();
    }
    local_c0 = 0xf;
    local_c4 = 0;
    local_d4[0] = (uint **)((uint)local_d4[0] & 0xffffff00);
    if (0xf < local_170) {
      ppuStack_3f0 = local_184;
                    /* WARNING: Subroutine does not return */
      puStack_3f4 = &UNK_008aadc6;
      FUN_00aae91b();
    }
    local_170 = 0xf;
    local_174 = 0;
    local_184 = (undefined4 **)((uint)local_184 & 0xffffff00);
    if (0xf < local_1b0) {
      ppuStack_3f0 = local_1c4;
                    /* WARNING: Subroutine does not return */
      puStack_3f4 = &UNK_008aadf3;
      FUN_00aae91b();
    }
    local_1b0 = 0xf;
    local_1b4 = 0;
    local_1c4 = (undefined4 **)((uint)local_1c4 & 0xffffff00);
    if (0xf < local_1ec) {
      ppuStack_3f0 = local_200;
                    /* WARNING: Subroutine does not return */
      puStack_3f4 = &UNK_008aae20;
      FUN_00aae91b();
    }
    local_1ec = 0xf;
    local_1f0 = 0;
    local_200 = (undefined4 **)((uint)local_200 & 0xffffff00);
    if (0xf < local_240) {
      ppuStack_3f0 = local_254;
                    /* WARNING: Subroutine does not return */
      puStack_3f4 = &UNK_008aae4d;
      FUN_00aae91b();
    }
    local_240 = 0xf;
    local_244 = 0;
    local_254 = (undefined4 **)((uint)local_254 & 0xffffff00);
    if (0xf < local_224) {
      ppuStack_3f0 = local_238;
                    /* WARNING: Subroutine does not return */
      puStack_3f4 = &UNK_008aae7a;
      FUN_00aae91b();
    }
    local_224 = 0xf;
    local_228 = 0;
    local_238 = (undefined4 **)((uint)local_238 & 0xffffff00);
    if (0xf < local_2b0) {
      ppuStack_3f0 = local_2c4;
                    /* WARNING: Subroutine does not return */
      puStack_3f4 = &UNK_008aaea7;
      FUN_00aae91b();
    }
    local_2b0 = 0xf;
    local_2c4 = (undefined4 **)((uint)local_2c4 & 0xffffff00);
    if (0xf < local_25c) {
      ppuStack_3f0 = local_270[0];
                    /* WARNING: Subroutine does not return */
      puStack_3f4 = &UNK_008aaed4;
      FUN_00aae91b();
    }
    local_25c = 0xf;
    local_260 = 0;
    local_270[0] = (undefined4 **)((uint)local_270[0] & 0xffffff00);
    if (0xf < local_40) {
      ppuStack_3f0 = local_54[0];
                    /* WARNING: Subroutine does not return */
      puStack_3f4 = &UNK_008aaefb;
      FUN_00aae91b();
    }
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = (undefined4 **)((uint)local_54[0] & 0xffffff00);
    if (0xf < local_278) {
      ppuStack_3f0 = local_28c[0];
                    /* WARNING: Subroutine does not return */
      puStack_3f4 = &UNK_008aaf1f;
      FUN_00aae91b();
    }
    local_278 = 0xf;
    local_27c = 0;
    local_28c[0] = (undefined4 **)((uint)local_28c[0] & 0xffffff00);
    if (0xf < local_114) {
      ppuStack_3f0 = local_128[0];
                    /* WARNING: Subroutine does not return */
      puStack_3f4 = &UNK_008aaf4c;
      FUN_00aae91b();
    }
    local_114 = 0xf;
    local_118 = 0;
    local_128[0] = (undefined4 **)((uint)local_128[0] & 0xffffff00);
    if (0xf < local_294) {
      ppuStack_3f0 = local_2a8[0];
                    /* WARNING: Subroutine does not return */
      puStack_3f4 = &UNK_008aaf79;
      FUN_00aae91b();
    }
    local_294 = 0xf;
    local_298 = 0;
    local_2a8[0] = (undefined4 **)((uint)local_2a8[0] & 0xffffff00);
    if (0xf < local_14c) {
      ppuStack_3f0 = local_160[0];
                    /* WARNING: Subroutine does not return */
      puStack_3f4 = &UNK_008aafa6;
      FUN_00aae91b();
    }
    local_14c = 0xf;
    local_150 = 0;
    local_160[0] = (undefined4 **)((uint)local_160[0] & 0xffffff00);
    if (0xf < local_a4) {
      ppuStack_3f0 = local_b8[0];
                    /* WARNING: Subroutine does not return */
      puStack_3f4 = &UNK_008aafd3;
      FUN_00aae91b();
    }
    local_a4 = 0xf;
    local_a8 = 0;
    local_b8[0] = (undefined4 **)((uint)local_b8[0] & 0xffffff00);
    if (0xf < local_130) {
      ppuStack_3f0 = local_144[0];
                    /* WARNING: Subroutine does not return */
      puStack_3f4 = &UNK_008ab000;
      FUN_00aae91b();
    }
    local_8._0_1_ = 0x50;
    local_130 = 0xf;
    local_134 = 0;
    local_144[0] = (undefined4 **)((uint)local_144[0] & 0xffffff00);
    if (0xf < local_7c) {
      ppuStack_3f0 = local_90[0];
                    /* WARNING: Subroutine does not return */
      puStack_3f4 = &UNK_008ab02e;
      FUN_00aae91b();
    }
    ppuStack_3f0 = (uint **)(param_1 + 0x17);
    puStack_3f4 = (undefined *)0x8ab043;
    (*(code *)pppuVar12[0x15][1])();
    puStack_3f4 = (undefined *)0x0;
    uStack_3f8 = 0x8ab04d;
    (*(code *)(*pppuVar12)[4])();
    local_14 = (undefined4 ***)param_1[0x2e];
    puVar10 = (undefined4 *)FUN_00aae9af();
    if (puVar10 == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)0x0;
    }
    else {
      *puVar10 = pppuVar12;
      puVar10[1] = local_14;
      puVar10[2] = 0;
      *(undefined1 *)(puVar10 + 3) = 0;
    }
    iVar8 = param_1[0x2f];
    param_1[0x2e] = puVar10;
    param_1[0x2f] = iVar8 + 1;
    if (iVar8 == 0) {
      param_1[0x2d] = puVar10;
    }
    else {
      *(undefined4 **)((int)local_14 + 8) = puVar10;
    }
    local_2c._4_4_ = local_2c._4_4_ + *(int *)(local_34 + 0x68);
    local_2c._0_4_ = (int)local_2c + *(int *)(local_34 + 100);
    local_30 = (int *)((int)local_30 + 1);
  }
  iVar8 = (**(code **)(*(int *)param_1[1] + 0x60))();
  sVar1 = *(short *)(iVar8 + 2);
  if (2 < (int)local_30) {
    piVar6 = *(int **)(((int *)param_1[1])[0x92] + 0x94);
    local_9c = *(uint **)(local_34 + 100);
    uVar7 = *(undefined4 *)(local_34 + 0x68);
    sVar2 = (short)local_30;
    puVar13 = (undefined2 *)(**(code **)(*(int *)param_1[1] + 0x60))();
    local_14 = (undefined4 ***)CONCAT22(sVar1 + (sVar2 + -2) * (short)uVar7,*puVar13);
    (**(code **)(*piVar6 + 0x100))();
  }
  FUN_009885d0();
  local_8._0_1_ = 0x6c;
  piVar6 = (int *)(**(code **)(*(int *)param_1[1] + 0x44))();
  local_8._0_1_ = 0x50;
  local_58 = piVar6;
  FUN_00408ad0();
  if (piVar6 == (int *)0x0) {
    FUN_009885d0();
    local_8._0_1_ = 0x7d;
    local_18 = (uint **)FUN_008a6010();
    local_8._0_1_ = 0x7e;
    FUN_00466de0();
    pppuStack_3e4 = (undefined4 ***)local_1e0;
    local_8._0_1_ = 0x7f;
    iStack_3e8 = 0x8ab3dd;
    FUN_004015b0();
    local_8._0_1_ = 0x80;
    FUN_00987d20();
    pppuStack_3e4 = (uint ***)0x8ab3ff;
    FUN_00418e30();
    (**(code **)(*(int *)(param_1[1] + 0x18) + 0x44))();
    FUN_00418e30();
    FUN_00418e30();
    FUN_00418e30();
    FUN_00418e30();
    FUN_00401280();
    local_8 = CONCAT31(local_8._1_3_,0x7f);
    FUN_00987ac0();
    FUN_00aad52d();
    FUN_00408ad0();
    FUN_00408ad0();
  }
  else {
    FUN_00436780();
    local_8._0_1_ = 0x6d;
    FUN_004367c0();
    local_8._0_1_ = 0x6e;
    local_18 = *(uint ***)(DAT_012586e0 + 0x4c);
    if (local_18 == (uint **)0x1) {
      iStack_3e8 = 0x8ab1b9;
      pppuStack_3e4 = local_d4;
      FUN_00408ed0();
    }
    FUN_009885d0();
    local_8._0_1_ = 0x6f;
    FUN_00466de0();
    local_8._0_1_ = 0x70;
    FUN_009885d0();
    local_8._0_1_ = 0x71;
    FUN_00988f20();
    local_8._0_1_ = 0x72;
    FUN_00988f20();
    FUN_00408ad0();
    FUN_00408ad0();
    FUN_00408ad0();
    local_8._0_1_ = 0x77;
    FUN_00408ad0();
    if (local_18 == (uint **)0x2) {
      pppuStack_3e4 = (undefined4 ***)local_1a0;
      iStack_3e8 = 0x8ab286;
      pppuStack_3e4 = (undefined4 ***)FUN_00436de0();
      local_8._0_1_ = 0x79;
    }
    else {
      pppuStack_3e4 = (undefined4 ***)FUN_00988f20();
      local_8._0_1_ = 0x78;
    }
    iStack_3e8 = 0x8ab29c;
    FUN_00408ed0();
    local_8._0_1_ = 0x77;
    FUN_00408ad0();
    local_18 = (uint **)FUN_00aae9af();
    local_8._0_1_ = 0x7a;
    if ((undefined4 ***)local_18 != (undefined4 ***)0x0) {
      FUN_009885d0();
      iVar8 = DAT_01258a74;
      local_8 = CONCAT31(local_8._1_3_,0x7b);
      local_20 = (int *)0x1;
      FUN_005c2ad0();
      local_9c = *(uint **)(iVar8 + 0x6b9bc);
      local_98 = *(undefined4 *)(iVar8 + 0x6b9c0);
      iStack_3e8 = CONCAT22((short)local_98,(short)*(undefined4 *)(iVar8 + 0x6b9bc));
      pppuStack_3e4 = local_90;
      pppuStack_3ec = (undefined4 ***)local_18;
      ppuStack_3f0 = (uint **)0x8ab330;
      local_14 = (undefined4 ***)iStack_3e8;
      FUN_009c4b50();
    }
    piVar6 = local_58;
    local_8 = 0x77;
    if (((uint)local_20 & 1) != 0) {
      FUN_00408ad0();
    }
    (**(code **)(*piVar6 + 0xe0))();
    (**(code **)(*piVar6 + 0x34))();
    FUN_00408ad0();
    FUN_00408ad0();
  }
  FUN_00408ad0();
  FUN_00408ad0();
  local_8._0_1_ = 3;
  FUN_00408ad0();
LAB_008ab4c6:
  (**(code **)(*(int *)(param_1[1] + 0x18) + 0x34))();
  (**(code **)(*(int *)(*(int *)(param_1[1] + 0x248) + 0x54) + 4))();
  param_1[0x31] = *(undefined4 *)(DAT_012588e8 + 0xb0c);
  FUN_00424810();
  if (*(char *)((int)param_2 + 0x1a2) == '\0') {
    if (param_6 == 0) {
      FUN_009885d0();
      local_8._0_1_ = 0x83;
    }
    else {
      FUN_009885d0();
      local_8._0_1_ = 0x82;
    }
    piVar6 = (int *)FUN_009c7290();
    (**(code **)(*piVar6 + 0x60))();
    local_8 = CONCAT31(local_8._1_3_,3);
    FUN_00408ad0();
  }
  else {
    FUN_009885d0();
    local_8._0_1_ = 0x81;
    piVar6 = (int *)FUN_009c7290();
    (**(code **)(*piVar6 + 0x60))();
    local_8 = CONCAT31(local_8._1_3_,3);
    if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_7c = 0xf;
    local_80 = 0;
    local_90[0] = (undefined4 **)((uint)local_90[0] & 0xffffff00);
  }
  (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0xf8))();
  (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0xc0))();
  ExceptionList = local_10;
  return param_1;
}

