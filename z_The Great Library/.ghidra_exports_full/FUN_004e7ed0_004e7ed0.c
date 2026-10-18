// FUN_004e7ed0 @ 004e7ed0 body=[[004e7ed0, 004e84a1] [004e84a5, 004e85a0] [004e85a4, 004e85be] [004e85c2, 004e85df] [004e85e3, 004e8600] [004e8604, 004e8628] [004e862c, 004e8737] [004e873b, 004e8755] [004e8759, 004e8776] [004e877a, 004e8791] [004e8795, 004e87fc] [004e8800, 004e8970] [004e8974, 004e8ad3] [004e8ad7, 004e8af2] [004e8af6, 004e8b32] [004e8b36, 004e8b49] [004e8b4d, 004e8b6e] [004e8b78, 004e8b87] [004e8b8b, 004e8ba3]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_004e7ed0(int param_1,char param_2,char param_3)

{
  code *pcVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined1 uVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  undefined4 uVar13;
  undefined1 *puVar14;
  int *piVar15;
  int extraout_ECX;
  int iVar16;
  undefined1 *puVar17;
  undefined4 *puVar19;
  undefined1 *puVar20;
  int *piVar21;
  undefined1 *puVar22;
  uint uVar23;
  bool bVar24;
  longlong lVar25;
  undefined8 uVar26;
  undefined4 uStack_128;
  int iStack_124;
  uint local_108 [4];
  undefined4 local_f8;
  uint local_f4;
  undefined1 local_ec [4];
  undefined4 local_e8;
  int *local_e0;
  int *local_dc;
  undefined4 local_d8;
  uint local_d0;
  int local_cc;
  uint local_c8;
  int local_c4;
  uint local_bc [3];
  int *local_b0;
  int *local_ac;
  uint local_a8;
  undefined1 local_a4;
  undefined8 local_a0;
  uint local_98 [4];
  undefined4 local_88;
  uint local_84;
  uint local_7c [4];
  undefined4 local_6c;
  uint local_68;
  uint local_60 [4];
  undefined4 local_50;
  uint local_4c;
  int *local_44;
  uint local_40;
  uint local_3c [4];
  undefined4 local_2c;
  uint local_28;
  undefined1 *local_20;
  int *local_1c;
  int *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  undefined4 *puVar18;
  
  puStack_c = &LAB_00ba00db;
  local_10 = ExceptionList;
  iVar12 = *(int *)(DAT_012586dc + 0x50);
  local_d0 = *(uint *)(iVar12 + 0x128);
  local_cc = *(int *)(iVar12 + 300);
  local_c8 = *(uint *)(iVar12 + 0x130);
  local_c4 = *(int *)(iVar12 + 0x134);
  if (param_3 != '\0') {
    local_d0 = 0xffff8000;
    local_cc = -1;
    local_c8 = 0xffff8000;
    local_c4 = -1;
  }
  local_e0 = (int *)0x0;
  local_dc = (int *)0x0;
  local_d8 = 0;
  local_8 = 0;
  iStack_124 = 0x4e7f7b;
  iVar12 = -(*(int *)(param_1 + 0x88) * 4 + 4);
  local_18 = (int *)((int)local_108 + iVar12 + -0x18);
  *(int *)((int)&iStack_124 + iVar12) = (int)local_108 + iVar12 + -0x18;
  *(undefined4 *)((int)&uStack_128 + iVar12) = 0x4e7f88;
  ExceptionList = &local_10;
  FUN_004e3850();
  *(int *)((int)&iStack_124 + iVar12) = param_1;
  *(undefined4 *)((int)&uStack_128 + iVar12) = 0x4e7f8e;
  FUN_004e9360();
  puVar17 = (undefined1 *)((int)local_108 + iVar12 + -0x18);
  local_44 = *(int **)(param_1 + 0xa4);
  local_a0 = 0;
  bVar24 = false;
  puVar20 = (undefined1 *)((int)local_108 + iVar12 + -0x18);
  piVar11 = (int *)0x0;
  if (local_44 != (int *)0x0) {
    do {
      iVar12 = *local_44;
      iVar8 = *(int *)(iVar12 + 0x124);
      if (((local_cc <= iVar8) &&
          (((local_cc < iVar8 || (local_d0 <= *(uint *)(iVar12 + 0x120))) && (param_2 != '\0')))) ||
         ((local_c4 <= iVar8 &&
          (((local_c4 < iVar8 || (local_c8 <= *(uint *)(iVar12 + 0x120))) && (param_2 == '\0'))))))
      {
        *(undefined4 *)(puVar17 + -4) = 0x4e8004;
        iVar8 = FUN_009666f0();
        if (0 < iVar8) {
          if (*(int *)(iVar12 + 0x58) < *(int *)(*(int *)(DAT_012586dc + 0x20) + 0x10) / 1000) {
            iVar8 = 0;
          }
          else {
            iVar8 = *(int *)(iVar12 + 0x58) /
                    (((*(int *)(*(int *)(DAT_012586dc + 0x20) + 0x14) / 1000) * 1000) / 1000) + 1;
          }
          *(undefined4 *)(puVar17 + -4) = 0;
          *(undefined4 *)(puVar17 + -8) = 0x4e806e;
          iVar9 = FUN_00965930();
          uVar23 = iVar8 - iVar9;
          if (uVar23 != 0) {
            uVar13 = *(undefined4 *)(param_1 + 0xb8);
            *(undefined4 *)(puVar17 + -4) = *(undefined4 *)(param_1 + 0xbc);
            *(undefined4 *)(puVar17 + -8) = uVar13;
            *(uint *)(puVar17 + -0xc) = ((int)uVar23 >> 0x1f) << 0xf | uVar23 >> 0x11;
            *(uint *)(puVar17 + -0x10) = uVar23 * 0x8000;
            *(undefined4 *)(puVar17 + -0x14) = 0x4e809a;
            lVar25 = __allmul();
            local_40 = (uint)(lVar25 >> 0xf) >> 0xf |
                       (int)((ulonglong)(lVar25 >> 0xf) >> 0x20) << 0x11;
            local_1c = local_18;
            uVar23 = local_40;
            if (((int)local_40 < 1) && (param_2 == '\0')) {
              local_40 = 1;
              uVar23 = local_40;
            }
            do {
              do {
                piVar11 = (int *)*local_1c;
                if (piVar11 == (int *)0x0) goto LAB_004e8113;
                local_1c = local_1c + 1;
              } while (piVar11[0x1d] != 0);
              pcVar1 = *(code **)(*piVar11 + 0x78);
              *(undefined1 **)(puVar17 + -4) = local_ec;
              puVar18 = (undefined4 *)(puVar17 + -8);
              puVar17 = puVar17 + -8;
              *puVar18 = 0x4e80ea;
              piVar10 = (int *)(*pcVar1)();
            } while ((0 < *piVar10) ||
                    (*(int *)(piVar11[0x37] + 0x16c) != *(int *)(*(int *)(iVar12 + 100) + 0x16c)));
            iVar8 = piVar11[0x37];
            if (iVar8 == 0) {
LAB_004e8113:
              iVar8 = *(int *)(iVar12 + 100);
            }
            local_1c = (int *)iVar8;
            *(int *)(puVar17 + -4) = param_1 + 0x54;
            *(int *)(puVar17 + -8) = iVar8;
            *(undefined4 *)(puVar17 + -0xc) = 0x4e8129;
            piVar11 = (int *)FUN_004b3c40();
            iVar8 = *piVar11;
            if ((iVar8 < -0x189373) || (0x20c49a < iVar8)) {
              *(undefined4 *)(puVar17 + -4) = 0;
              *(undefined4 *)(puVar17 + -8) = 1000;
              *(int *)(puVar17 + -0xc) = iVar8 >> 0x1f;
              *(int *)(puVar17 + -0x10) = iVar8;
              *(undefined4 *)(puVar17 + -0x14) = 0x4e8163;
              uVar26 = __allmul();
              *(undefined4 *)(puVar17 + -4) = 0;
              *(undefined4 *)(puVar17 + -8) = 3000;
              *(undefined8 *)(puVar17 + -0x10) = uVar26;
              *(undefined4 *)(puVar17 + -0x14) = 0x4e8171;
              iVar9 = __alldiv();
              iVar8 = extraout_ECX;
            }
            else {
              iVar8 = iVar8 * 1000;
              iVar9 = iVar8 / 3000;
            }
            *(int *)(puVar17 + -4) = iVar8;
            *(undefined4 *)(puVar17 + -4) = 0x43fa4001;
            *(undefined4 *)(puVar17 + -8) = 0x4e818d;
            FUN_00401000();
            *(undefined4 *)(puVar17 + -4) = 0x4e8195;
            iVar8 = FUN_00b31c00();
            if ((iVar8 + iVar9) / 1000 < (int)uVar23) {
              uVar23 = (iVar8 + iVar9) / 1000;
              local_40 = uVar23;
            }
            if (0 < (int)uVar23) {
              *(undefined4 *)(puVar17 + -4) = 0x4e81e6;
              uVar26 = FUN_00b31c36();
              *(undefined8 *)(puVar17 + -8) = uVar26;
              *(uint *)(puVar17 + -0xc) = ((int)uVar23 >> 0x1f) << 0xf | uVar23 >> 0x11;
              *(uint *)(puVar17 + -0x10) = uVar23 << 0xf;
              *(undefined4 *)(puVar17 + -0x14) = 0x4e81ef;
              lVar25 = __allmul();
              local_e8 = 0x2d2d2d;
              local_a0 = (lVar25 >> 0xf) + local_a0;
              *(undefined4 *)(puVar17 + -4) = 0;
              *(undefined4 *)(puVar17 + -8) = 0x2d2d2d;
              *(uint **)(puVar17 + -0xc) = &local_40;
              *(int *)(puVar17 + -0x10) = iVar12;
              *(undefined4 *)(puVar17 + -0x30) = 0;
              *(undefined4 *)(puVar17 + -0x18) = 0xf;
              *(undefined4 *)(puVar17 + -0x1c) = 0;
              *(undefined1 **)(puVar17 + -0x34) = &DAT_00ded94d;
              puVar17[-0x2c] = 0;
              *(undefined4 *)(puVar17 + -0x38) = 0x4e823a;
              FUN_00409350();
              piVar11 = local_1c;
              *(int **)(puVar17 + -0x30) = local_1c;
              *(uint **)(puVar17 + -0x34) = &local_a8;
              *(int *)(puVar17 + -0x38) = param_1;
              *(undefined4 *)(puVar17 + -0x3c) = 0x4e824e;
              FUN_004e2d40();
              pcVar1 = *(code **)(**(int **)((int)piVar11 + 0x188) + 0x24);
              puVar19 = (undefined4 *)(puVar17 + -4);
              puVar17 = puVar17 + -4;
              *puVar19 = 0x4e825b;
              cVar7 = (*pcVar1)();
              if ((cVar7 != '\0') &&
                 (iVar8 = *(int *)((int)piVar11 + 0x188), piVar11 = local_e0,
                 *(char *)(iVar8 + 0x27c) != '\0')) {
                for (; piVar11 != local_dc; piVar11 = piVar11 + 1) {
                  if (*piVar11 == iVar8) {
                    if (piVar11 != local_dc) goto LAB_004e82a2;
                    break;
                  }
                }
                *(undefined4 *)(puVar17 + -4) = 0x4e82a2;
                FUN_004e9b90();
              }
LAB_004e82a2:
              uVar23 = *(uint *)(*(int *)(DAT_012586dc + 0x50) + 0x138);
              uVar2 = *(uint *)(iVar12 + 0x120);
              iVar8 = *(int *)(*(int *)(DAT_012586dc + 0x50) + 0x13c);
              bVar24 = true;
              *(uint *)(iVar12 + 0x120) = uVar2 - uVar23;
              *(uint *)(iVar12 + 0x124) =
                   (*(int *)(iVar12 + 0x124) - iVar8) - (uint)(uVar2 < uVar23);
            }
          }
        }
      }
      local_44 = (int *)local_44[2];
    } while (local_44 != (int *)0x0);
    local_44 = (int *)0x0;
    puVar20 = puVar17;
    piVar11 = local_dc;
  }
  iVar12 = DAT_012586dc;
  iVar8 = 0;
  local_18 = (int *)((int)piVar11 - (int)local_e0 >> 2);
  if (0 < (int)local_18) {
    do {
      iVar9 = local_e0[iVar8];
      iVar16 = *(int *)(iVar9 + 0x280) + *(int *)(*(int *)(iVar12 + 0x30) + 0x4c8);
      *(int *)(iVar9 + 0x280) = iVar16;
      if (iVar16 < 0) {
        *(undefined4 *)(iVar9 + 0x280) = 0;
      }
      else if (100000 < iVar16) {
        *(undefined4 *)(iVar9 + 0x280) = 100000;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < (int)local_18);
  }
  if (param_2 == '\0') {
    uVar23 = *(uint *)(param_1 + 0xb8);
    iVar12 = *(int *)(param_1 + 0xbc);
    iVar8 = (uint)local_a0 + 0x8000;
    *(uint *)(puVar20 + -4) = local_a0._4_4_ + (uint)(0xffff7fff < (uint)local_a0);
    *(int *)(puVar20 + -8) = iVar8;
    *(uint *)(puVar20 + -0xc) = iVar12 << 0xf | uVar23 >> 0x11;
    *(uint *)(puVar20 + -0x10) = uVar23 << 0xf;
    *(undefined4 *)(puVar20 + -0x14) = 0x4e83a3;
    lVar25 = __alldiv();
    *(longlong *)(param_1 + 0xb8) = lVar25;
    if (((int)((ulonglong)lVar25 >> 0x20) < 1) && (lVar25 < 0)) {
      *(undefined4 *)(param_1 + 0xb8) = 0;
      *(undefined4 *)(param_1 + 0xbc) = 0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xb8) = 0;
    *(undefined4 *)(param_1 + 0xbc) = 0;
  }
  if ((!bVar24) || (*(int *)(param_1 + 0x3c) != *(int *)(DAT_012588e8 + 0xb60))) {
    if (local_e0 != (int *)0x0) {
      *(int **)(puVar20 + -4) = local_e0;
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar20 + -8) = &UNK_004e8b88;
      FUN_00aae91b();
    }
    ExceptionList = local_10;
    return;
  }
  local_a8 = *(uint *)(param_1 + 0x38);
  *(undefined4 *)(puVar20 + -4) =
       *(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x3c) * 4);
  *(undefined4 *)(puVar20 + -8) = 0x4e8406;
  piVar11 = (int *)FUN_005061e0();
  *(undefined4 *)(puVar20 + -4) = 0x11;
  iVar8 = 0;
  *(char **)(puVar20 + -8) = "MESSAGE_HEAD_MARS";
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  *(undefined4 *)(puVar20 + -0xc) = 0x4e8429;
  FUN_00409350();
  local_8._0_1_ = 1;
  *(undefined4 *)(puVar20 + -4) = 9;
  *(char **)(puVar20 + -8) = "MESSENGER";
  local_a8 = 0xf;
  local_ac = (int *)0x0;
  local_bc[0] = local_bc[0] & 0xffffff00;
  *(undefined4 *)(puVar20 + -0xc) = 0x4e8452;
  FUN_00409350();
  local_8._0_1_ = 2;
  iVar12 = DAT_01262ef4;
  if (DAT_01262ef4 == 0) {
    *(undefined4 *)(puVar20 + -4) = 0x44;
    *(undefined4 *)(puVar20 + -8) = 0x4e8465;
    iVar12 = FUN_00aae9af();
    local_8._0_1_ = 3;
    if (iVar12 != 0) {
      *(undefined4 *)(puVar20 + -4) = 0x4e847a;
      iVar8 = FUN_006a4e30();
    }
    iVar9 = DAT_01262ef4;
    local_8 = CONCAT31(local_8._1_3_,4);
    iVar12 = iVar8;
    if ((iVar8 != DAT_01262ef4) && (DAT_01262ef4 != 0)) {
      *(int *)(puVar20 + -4) = DAT_01262ef4;
      *(undefined4 *)(puVar20 + -8) = 0x4e849c;
      FUN_006a4ea0();
      *(int *)(puVar20 + -4) = iVar9;
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar20 + -8) = &UNK_004e84a2;
      FUN_00aae91b();
    }
  }
  DAT_01262ef4 = iVar12;
  local_8._0_1_ = 2;
  *(uint **)(puVar20 + -4) = local_3c;
  *(uint **)(puVar20 + -8) = local_60;
  *(undefined4 *)(puVar20 + -0xc) = 0x4e84c1;
  uVar13 = FUN_00424ce0();
  *(undefined4 *)(puVar20 + -4) = 0xffffffff;
  local_8._0_1_ = 5;
  *(undefined4 *)(puVar20 + -8) = 0;
  *(uint **)(puVar20 + -0xc) = local_bc;
  local_84 = 0xf;
  local_88 = 0;
  local_98[0] = local_98[0] & 0xffffff00;
  *(undefined4 *)(puVar20 + -0x10) = 0x4e84ec;
  FUN_00408ed0();
  *(undefined4 *)(puVar20 + -4) = 0xffffffff;
  local_8._0_1_ = 6;
  *(undefined4 *)(puVar20 + -8) = 0;
  *(undefined4 *)(puVar20 + -0xc) = uVar13;
  local_68 = 0xf;
  local_6c = 0;
  local_7c[0] = local_7c[0] & 0xffffff00;
  *(undefined4 *)(puVar20 + -0x10) = 0x4e8506;
  FUN_00408ed0();
  local_8._0_1_ = 7;
  iVar12 = piVar11[1];
  *(undefined4 *)(puVar20 + -4) = 0x44;
  *(undefined4 *)(puVar20 + -8) = 0x4e851a;
  puVar14 = (undefined1 *)FUN_00aae9af();
  local_8._0_1_ = 8;
  uVar6 = (undefined1)local_8;
  local_8._0_1_ = 8;
  local_20 = puVar14;
  if (puVar14 == (undefined1 *)0x0) {
    puVar14 = (undefined1 *)0x0;
    local_8._0_1_ = uVar6;
  }
  else {
    *(undefined4 *)(puVar20 + -4) = 0xffffffff;
    *(undefined4 *)(puVar20 + -8) = 0;
    *(undefined4 *)(puVar14 + 0x14) = 0xf;
    *(undefined4 *)(puVar14 + 0x10) = 0;
    *(uint **)(puVar20 + -0xc) = local_98;
    *puVar14 = 0;
    *(undefined4 *)(puVar20 + -0x10) = 0x4e8544;
    FUN_00408ed0();
    *(undefined4 *)(puVar20 + -4) = 0xffffffff;
    local_8._0_1_ = 9;
    *(undefined4 *)(puVar20 + -8) = 0;
    *(undefined4 *)(puVar14 + 0x30) = 0xf;
    *(undefined4 *)(puVar14 + 0x2c) = 0;
    *(uint **)(puVar20 + -0xc) = local_7c;
    puVar14[0x1c] = 0;
    *(undefined4 *)(puVar20 + -0x10) = 0x4e8560;
    FUN_00408ed0();
    *(int *)(puVar14 + 0x38) = iVar12;
    *(undefined4 *)(puVar14 + 0x3c) = 0;
    puVar14[0x40] = 0;
  }
  iVar8 = piVar11[2];
  piVar11[1] = (int)puVar14;
  piVar11[2] = iVar8 + 1;
  if (iVar8 == 0) {
    *piVar11 = (int)puVar14;
  }
  else {
    *(undefined1 **)(iVar12 + 0x3c) = puVar14;
  }
  if (0xf < local_68) {
    *(uint *)(puVar20 + -4) = local_7c[0];
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar20 + -8) = &UNK_004e85a1;
    FUN_00aae91b();
  }
  local_68 = 0xf;
  local_6c = 0;
  local_7c[0] = local_7c[0] & 0xffffff00;
  if (0xf < local_84) {
    *(uint *)(puVar20 + -4) = local_98[0];
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar20 + -8) = &UNK_004e85bf;
    FUN_00aae91b();
  }
  local_84 = 0xf;
  local_88 = 0;
  local_98[0] = local_98[0] & 0xffffff00;
  if (0xf < local_4c) {
    *(uint *)(puVar20 + -4) = local_60[0];
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar20 + -8) = &UNK_004e85e0;
    FUN_00aae91b();
  }
  local_4c = 0xf;
  local_50 = 0;
  local_60[0] = local_60[0] & 0xffffff00;
  if (0xf < local_a8) {
    *(uint *)(puVar20 + -4) = local_bc[0];
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar20 + -8) = &UNK_004e8601;
    FUN_00aae91b();
  }
  local_8._0_1_ = 0;
  local_a8 = 0xf;
  local_ac = (int *)0x0;
  local_bc[0] = local_bc[0] & 0xffffff00;
  if (0xf < local_28) {
    *(uint *)(puVar20 + -4) = local_3c[0];
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar20 + -8) = &UNK_004e8629;
    FUN_00aae91b();
  }
  *(undefined4 *)(puVar20 + -4) = 7;
  *(char **)(puVar20 + -8) = "FACTION";
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  *(undefined4 *)(puVar20 + -0xc) = 0x4e864c;
  FUN_00409350();
  *(int *)(puVar20 + -4) = param_1;
  local_8._0_1_ = 10;
  *(undefined4 *)(puVar20 + -8) = 0x4e865c;
  uVar13 = FUN_0041a080();
  *(undefined4 *)(puVar20 + -4) = 0xffffffff;
  *(undefined4 *)(puVar20 + -8) = 0;
  local_8._0_1_ = 0xb;
  *(uint **)(puVar20 + -0xc) = local_3c;
  local_84 = 0xf;
  local_88 = 0;
  local_98[0] = local_98[0] & 0xffffff00;
  *(undefined4 *)(puVar20 + -0x10) = 0x4e8684;
  FUN_00408ed0();
  *(undefined4 *)(puVar20 + -4) = 0xffffffff;
  local_8._0_1_ = 0xc;
  *(undefined4 *)(puVar20 + -8) = 0;
  *(undefined4 *)(puVar20 + -0xc) = uVar13;
  local_68 = 0xf;
  local_6c = 0;
  local_7c[0] = local_7c[0] & 0xffffff00;
  *(undefined4 *)(puVar20 + -0x10) = 0x4e869e;
  FUN_00408ed0();
  local_8._0_1_ = 0xd;
  iVar12 = piVar11[1];
  *(undefined4 *)(puVar20 + -4) = 0x44;
  *(undefined4 *)(puVar20 + -8) = 0x4e86b2;
  puVar14 = (undefined1 *)FUN_00aae9af();
  local_8._0_1_ = 0xe;
  uVar6 = (undefined1)local_8;
  local_8._0_1_ = 0xe;
  local_20 = puVar14;
  if (puVar14 == (undefined1 *)0x0) {
    puVar14 = (undefined1 *)0x0;
    local_8._0_1_ = uVar6;
  }
  else {
    *(undefined4 *)(puVar20 + -4) = 0xffffffff;
    *(undefined4 *)(puVar20 + -8) = 0;
    *(uint **)(puVar20 + -0xc) = local_98;
    *(undefined4 *)(puVar14 + 0x14) = 0xf;
    *(undefined4 *)(puVar14 + 0x10) = 0;
    *puVar14 = 0;
    *(undefined4 *)(puVar20 + -0x10) = 0x4e86dc;
    FUN_00408ed0();
    *(undefined4 *)(puVar20 + -4) = 0xffffffff;
    local_8._0_1_ = 0xf;
    *(undefined4 *)(puVar20 + -8) = 0;
    *(undefined4 *)(puVar14 + 0x30) = 0xf;
    *(undefined4 *)(puVar14 + 0x2c) = 0;
    *(uint **)(puVar20 + -0xc) = local_7c;
    puVar14[0x1c] = 0;
    *(undefined4 *)(puVar20 + -0x10) = 0x4e86f7;
    FUN_00408ed0();
    *(int *)(puVar14 + 0x38) = iVar12;
    *(undefined4 *)(puVar14 + 0x3c) = 0;
    puVar14[0x40] = 0;
  }
  iVar8 = piVar11[2];
  piVar11[1] = (int)puVar14;
  piVar11[2] = iVar8 + 1;
  if (iVar8 == 0) {
    *piVar11 = (int)puVar14;
  }
  else {
    *(undefined1 **)(iVar12 + 0x3c) = puVar14;
  }
  if (0xf < local_68) {
    *(uint *)(puVar20 + -4) = local_7c[0];
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar20 + -8) = &UNK_004e8738;
    FUN_00aae91b();
  }
  local_68 = 0xf;
  local_6c = 0;
  local_7c[0] = local_7c[0] & 0xffffff00;
  if (0xf < local_84) {
    *(uint *)(puVar20 + -4) = local_98[0];
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar20 + -8) = &UNK_004e8756;
    FUN_00aae91b();
  }
  local_84 = 0xf;
  local_88 = 0;
  local_98[0] = local_98[0] & 0xffffff00;
  if (0xf < local_4c) {
    *(uint *)(puVar20 + -4) = local_60[0];
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar20 + -8) = &UNK_004e8777;
    FUN_00aae91b();
  }
  local_4c = 0xf;
  local_50 = 0;
  local_60[0] = local_60[0] & 0xffffff00;
  if (0xf < local_28) {
    *(uint *)(puVar20 + -4) = local_3c[0];
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar20 + -8) = &UNK_004e8792;
    FUN_00aae91b();
  }
  local_b0 = (int *)0x0;
  local_ac = (int *)0x0;
  local_a8 = 0;
  local_a4 = 0;
  local_8 = CONCAT31(local_8._1_3_,0x10);
  iVar12 = *(int *)(param_1 + 0x88);
  *(undefined4 *)(puVar20 + -4) = 0x4e87c8;
  iVar8 = -(iVar12 * 4 + 4);
  piVar21 = (int *)(puVar20 + iVar8);
  *(int *)(puVar20 + iVar8 + -4) = (int)puVar20 + iVar8;
  *(undefined4 *)(puVar20 + iVar8 + -8) = 0x4e87d3;
  FUN_004e3850();
  iVar12 = *(int *)(puVar20 + iVar8);
  piVar10 = (int *)0x0;
  do {
    if (iVar12 == 0) {
      *(undefined4 *)(puVar20 + iVar8 + -4) = 100;
      *(undefined4 *)(puVar20 + iVar8 + -0x24) = 2;
      *(undefined4 *)(puVar20 + iVar8 + -0xc) = 0xf;
      *(undefined4 *)(puVar20 + iVar8 + -0x10) = 0;
      *(undefined1 **)(puVar20 + iVar8 + -0x28) = &DAT_00df963c;
      puVar20[iVar8 + -0x20] = 0;
      *(undefined4 *)(puVar20 + iVar8 + -0x2c) = 0x4e8880;
      FUN_00409350();
      *(uint **)(puVar20 + iVar8 + -0x24) = local_108;
      *(undefined4 *)(puVar20 + iVar8 + -0x28) = 0x4e8892;
      FUN_00519310();
      local_8._0_1_ = 0x11;
      *(undefined4 *)(puVar20 + iVar8 + -4) = 4;
      *(undefined **)(puVar20 + iVar8 + -8) = &DAT_00df85c0;
      local_28 = 0xf;
      local_2c = 0;
      local_3c[0] = local_3c[0] & 0xffffff00;
      *(undefined4 *)(puVar20 + iVar8 + -0xc) = 0x4e88b2;
      FUN_00409350();
      *(undefined4 *)(puVar20 + iVar8 + -4) = 0xffffffff;
      *(undefined4 *)(puVar20 + iVar8 + -8) = 0;
      local_8._0_1_ = 0x12;
      *(uint **)(puVar20 + iVar8 + -0xc) = local_3c;
      local_84 = 0xf;
      local_88 = 0;
      local_98[0] = local_98[0] & 0xffffff00;
      *(undefined4 *)(puVar20 + iVar8 + -0x10) = 0x4e88d8;
      FUN_00408ed0();
      *(undefined4 *)(puVar20 + iVar8 + -4) = 0xffffffff;
      local_8._0_1_ = 0x13;
      *(undefined4 *)(puVar20 + iVar8 + -8) = 0;
      *(uint **)(puVar20 + iVar8 + -0xc) = local_108;
      local_68 = 0xf;
      local_6c = 0;
      local_7c[0] = local_7c[0] & 0xffffff00;
      *(undefined4 *)(puVar20 + iVar8 + -0x10) = 0x4e88f8;
      FUN_00408ed0();
      local_8._0_1_ = 0x14;
      iVar12 = piVar11[1];
      *(undefined4 *)(puVar20 + iVar8 + -4) = 0x44;
      *(undefined4 *)(puVar20 + iVar8 + -8) = 0x4e890c;
      iVar9 = FUN_00aae9af();
      local_8._0_1_ = 0x15;
      if (iVar9 == 0) {
        iVar9 = 0;
      }
      else {
        *(int *)(puVar20 + iVar8 + -4) = iVar9;
        *(undefined4 *)(puVar20 + iVar8 + -8) = 0x4e8928;
        FUN_00a3ab70();
        *(int *)(iVar9 + 0x38) = iVar12;
        *(undefined4 *)(iVar9 + 0x3c) = 0;
        *(undefined1 *)(iVar9 + 0x40) = 0;
      }
      iVar16 = piVar11[2];
      piVar11[1] = iVar9;
      piVar11[2] = iVar16 + 1;
      if (iVar16 == 0) {
        *piVar11 = iVar9;
      }
      else {
        *(int *)(iVar12 + 0x3c) = iVar9;
      }
      *(undefined4 *)(puVar20 + iVar8 + -4) = 0x4e895e;
      FUN_00a39a80();
      local_8._0_1_ = 0x11;
      if (0xf < local_28) {
        *(uint *)(puVar20 + iVar8 + -4) = local_3c[0];
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar20 + iVar8 + -8) = &UNK_004e8971;
        FUN_00aae91b();
      }
      *(undefined4 *)(puVar20 + iVar8 + -4) = 0;
      *(undefined1 **)(puVar20 + iVar8 + -8) = &DAT_00ded94d;
      local_4c = 0xf;
      local_50 = 0;
      local_60[0] = local_60[0] & 0xffffff00;
      *(undefined4 *)(puVar20 + iVar8 + -0xc) = 0x4e8991;
      FUN_00409350();
      local_8._0_1_ = 0x16;
      *(undefined4 *)(puVar20 + iVar8 + -4) = 9;
      *(char **)(puVar20 + iVar8 + -8) = "PARTISANS";
      local_28 = 0xf;
      local_2c = 0;
      local_3c[0] = local_3c[0] & 0xffffff00;
      *(undefined4 *)(puVar20 + iVar8 + -0xc) = 0x4e89ae;
      FUN_00409350();
      local_8._0_1_ = 0x17;
      *(undefined4 *)(puVar20 + iVar8 + -0x88) = 0;
      *(undefined4 *)(puVar20 + iVar8 + -0x84) = 0;
      local_20 = puVar20 + iVar8 + -0x88;
      if (DAT_01262ef4 == 0) {
        local_20 = puVar20 + iVar8 + -0x88;
        *(undefined4 *)(puVar20 + iVar8 + -0x8c) = 0x44;
        *(undefined4 *)(puVar20 + iVar8 + -0x90) = 0x4e89da;
        local_20 = (undefined1 *)FUN_00aae9af();
        local_8._0_1_ = 0x18;
        if (local_20 == (undefined1 *)0x0) {
          uVar13 = 0;
        }
        else {
          *(undefined4 *)(puVar20 + iVar8 + -0x8c) = 0x4e89ef;
          uVar13 = FUN_006a4e30();
        }
        *(undefined4 *)(puVar20 + iVar8 + -0x8c) = uVar13;
        local_8._0_1_ = 0x17;
        *(undefined4 *)(puVar20 + iVar8 + -0x90) = 0x4e8a02;
        FUN_006a59b0();
      }
      uVar13 = *(undefined4 *)(param_1 + 0x3c);
      uVar4 = *(undefined4 *)(param_1 + 0x38);
      *(undefined4 *)(puVar20 + iVar8 + -0x8c) = uVar13;
      *(undefined4 *)(puVar20 + iVar8 + -0x90) = uVar4;
      *(undefined4 *)(puVar20 + iVar8 + -0x94) = uVar13;
      iVar12 = *local_b0;
      *(undefined4 *)(puVar20 + iVar8 + -0x98) = uVar4;
      *(undefined4 *)(puVar20 + iVar8 + -0x9c) = 0;
      *(uint **)(puVar20 + iVar8 + -0xa0) = local_60;
      *(int *)(puVar20 + iVar8 + -0xa4) = iVar12;
      *(int **)(puVar20 + iVar8 + -0xa8) = piVar11;
      *(undefined4 *)(puVar20 + iVar8 + -0xac) = 0x4e8a2c;
      uVar13 = FUN_006a55b0();
      *(undefined4 *)(puVar20 + iVar8 + -0xac) = uVar13;
      *(undefined1 **)(puVar20 + iVar8 + -0xb0) = puVar20 + iVar8 + -0x80;
      *(undefined4 *)(puVar20 + iVar8 + -0xb4) = 0x4e8a36;
      FUN_006a7ed0();
      local_8._0_1_ = 0x19;
      uVar6 = (undefined1)local_8;
      local_8._0_1_ = 0x19;
      if (DAT_01262ef4 == 0) {
        *(undefined4 *)(puVar20 + iVar8 + -0x84) = 0x44;
        *(undefined4 *)(puVar20 + iVar8 + -0x88) = 0x4e8a4a;
        iVar12 = FUN_00aae9af();
        local_8._0_1_ = 0x1a;
        if (iVar12 == 0) {
          uVar13 = 0;
        }
        else {
          *(undefined4 *)(puVar20 + iVar8 + -0x84) = 0x4e8a5f;
          uVar13 = FUN_006a4e30();
        }
        *(undefined4 *)(puVar20 + iVar8 + -0x84) = uVar13;
        local_8._0_1_ = 0x19;
        *(undefined4 *)(puVar20 + iVar8 + -0x88) = 0x4e8a6d;
        FUN_006a59b0();
        uVar6 = (undefined1)local_8;
      }
      local_8._0_1_ = uVar6;
      iVar12 = DAT_01262ef4;
      if (DAT_01262ef4 == 0) {
        *(undefined4 *)(puVar20 + iVar8 + -0x84) = 0x44;
        *(undefined4 *)(puVar20 + iVar8 + -0x88) = 0x4e8a84;
        iVar9 = FUN_00aae9af();
        local_8._0_1_ = 0x1b;
        if (iVar9 == 0) {
          uVar13 = 0;
        }
        else {
          *(undefined4 *)(puVar20 + iVar8 + -0x84) = 0x4e8a99;
          uVar13 = FUN_006a4e30();
        }
        *(undefined4 *)(puVar20 + iVar8 + -0x84) = uVar13;
        local_8._0_1_ = 0x19;
        *(undefined4 *)(puVar20 + iVar8 + -0x88) = 0x4e8aa7;
        FUN_006a59b0();
      }
      *(code **)(puVar20 + iVar8 + -0x84) = FUN_006a5730;
      *(int *)(puVar20 + iVar8 + -0x88) = iVar12;
      *(int *)(puVar20 + iVar8 + -0x8c) = DAT_01262ef4;
      local_8._0_1_ = 0x17;
      *(undefined4 *)(puVar20 + iVar8 + -0x90) = 0x4e8ac1;
      FUN_004e9540();
      if (0xf < local_28) {
        *(uint *)(puVar20 + iVar8 + -4) = local_3c[0];
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar20 + iVar8 + -8) = &UNK_004e8ad4;
        FUN_00aae91b();
      }
      local_8._0_1_ = 0x11;
      local_28 = 0xf;
      local_2c = 0;
      local_3c[0] = local_3c[0] & 0xffffff00;
      if (0xf < local_4c) {
        *(uint *)(puVar20 + iVar8 + -4) = local_60[0];
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar20 + iVar8 + -8) = &UNK_004e8af3;
        FUN_00aae91b();
      }
      *(undefined4 *)(puVar20 + iVar8 + -4) = 6;
      *(char **)(puVar20 + iVar8 + -8) = "revolt";
      local_4c = 0xf;
      local_50 = 0;
      local_60[0] = local_60[0] & 0xffffff00;
      *(undefined4 *)(puVar20 + iVar8 + -0xc) = 0x4e8b0f;
      FUN_00409350();
      local_8 = CONCAT31(local_8._1_3_,0x1c);
      *(undefined4 *)(puVar20 + iVar8 + -4) = 0x4e8b18;
      piVar11 = (int *)FUN_009c7290();
      pcVar1 = *(code **)(*piVar11 + 0x60);
      *(uint **)(puVar20 + iVar8 + -4) = local_60;
      puVar22 = puVar20 + iVar8 + -8;
      *(undefined4 *)(puVar20 + iVar8 + -8) = 0x4e8b25;
      (*pcVar1)();
      if (0xf < local_4c) {
        *(uint *)(puVar22 + -4) = local_60[0];
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar22 + -8) = &UNK_004e8b33;
        FUN_00aae91b();
      }
      if (0xf < local_f4) {
        *(uint *)(puVar22 + -4) = local_108[0];
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar22 + -8) = &UNK_004e8b4a;
        FUN_00aae91b();
      }
      local_f4 = 0xf;
      local_f8 = 0;
      local_108[0] = local_108[0] & 0xffffff00;
      *(int **)(puVar22 + -4) = local_b0;
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar22 + -8) = &UNK_004e8b6f;
      FUN_00aae91b();
    }
    iVar12 = *(int *)(*piVar21 + 0xdc);
    piVar21 = piVar21 + 1;
    for (piVar3 = local_b0; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[2]) {
      piVar15 = piVar10;
      piVar5 = local_b0;
      if (*piVar3 == iVar12) goto LAB_004e8855;
    }
    *(undefined4 *)(puVar20 + iVar8 + -4) = 0x10;
    local_18 = piVar10;
    *(undefined4 *)(puVar20 + iVar8 + -8) = 0x4e8815;
    piVar15 = (int *)FUN_00aae9af();
    if (piVar15 == (int *)0x0) {
      piVar15 = (int *)0x0;
    }
    else {
      *piVar15 = iVar12;
      piVar15[1] = (int)piVar10;
      piVar15[2] = 0;
      *(undefined1 *)(piVar15 + 3) = 0;
    }
    uVar23 = local_a8 + 1;
    bVar24 = local_a8 != 0;
    piVar5 = piVar15;
    local_ac = piVar15;
    local_a8 = uVar23;
    if (bVar24) {
      local_18[2] = (int)piVar15;
      piVar5 = local_b0;
    }
LAB_004e8855:
    local_b0 = piVar5;
    iVar12 = *piVar21;
    piVar10 = piVar15;
  } while( true );
}

