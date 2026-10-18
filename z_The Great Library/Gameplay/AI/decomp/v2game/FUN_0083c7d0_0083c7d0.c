// FUN_0083c7d0 @ 0083c7d0 body=[[0083c7d0, 0083c839] [0083c840, 0083cd4c] [0083cd50, 0083da0c] [0083da10, 0083db1e]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_0083c7d0(int param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 **ppuVar11;
  int *piVar12;
  int iVar13;
  int extraout_ECX;
  int *piVar14;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  uint extraout_EDX;
  uint uVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  undefined4 *puVar25;
  undefined1 *puVar26;
  undefined4 *puVar27;
  undefined1 *puVar28;
  int iVar29;
  undefined4 uVar30;
  bool bVar31;
  undefined8 uVar32;
  int aiStack_22c [4];
  undefined4 uStack_21c;
  undefined1 local_20c [40];
  undefined **local_1e4;
  undefined4 local_1c8;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  int local_1a4;
  int local_1a0;
  int local_19c;
  uint local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined1 local_184;
  undefined4 local_180;
  int local_17c [7];
  undefined4 local_160;
  undefined1 local_154 [8];
  undefined1 local_14c;
  int local_118;
  int local_114;
  int local_e0;
  undefined **local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  uint local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 local_a0;
  undefined4 local_9c;
  int local_98;
  undefined4 local_94;
  int local_90;
  undefined1 *local_8c;
  undefined4 *local_88;
  int *local_84;
  undefined1 *local_80;
  undefined4 *local_7c;
  undefined4 *local_78;
  int local_74;
  undefined4 *local_70;
  int local_6c;
  int local_68;
  int local_64;
  undefined4 local_60;
  int local_5c;
  int *local_58;
  int local_54;
  int local_50;
  char local_49;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  uint local_34;
  int *local_30;
  int *local_2c;
  int *local_28;
  int *local_24;
  undefined4 *local_20;
  int local_1c;
  int *local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  undefined4 *puVar24;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00bb4ecf;
  local_10 = ExceptionList;
  local_68 = *(int *)(param_1 + 0x34);
  iVar9 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4);
  local_18 = (int *)(param_1 + 0x34);
  iVar29 = *(int *)(iVar9 + 0xdac) - *(int *)(iVar9 + 0xda8) >> 3;
  local_3c = iVar9;
  uStack_21c = 0x83c82d;
  iVar7 = iVar29 * -8;
  iVar5 = 0;
  local_58 = (int *)(local_20c + iVar7 + -0xc);
  if (0 < iVar29) {
    do {
      iVar13 = *(int *)(iVar9 + 0xda8);
      *(undefined4 *)(local_20c + iVar5 * 8 + iVar7 + -0xc) = *(undefined4 *)(iVar13 + iVar5 * 8);
      *(undefined4 *)(local_20c + iVar5 * 8 + iVar7 + -8) = *(undefined4 *)(iVar13 + 4 + iVar5 * 8);
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar29);
  }
  local_11 = *(char *)(iVar9 + 0x120);
  puVar18 = local_20c + iVar7 + -0xc;
  piVar14 = local_18;
  ExceptionList = &local_10;
  if ((*(char *)(iVar9 + 0x120) == '\0') &&
     (puVar18 = local_20c + iVar7 + -0xc, ExceptionList = &local_10, 0 < *(int *)(iVar9 + 0x14e0)))
  {
    piVar12 = *(int **)(iVar9 + 0x9d8);
    local_40 = 0;
    local_1c = 0;
    while ((*(int **)(iVar9 + 0x9d8) <= piVar12 && (piVar12 < *(int **)(iVar9 + 0x9dc)))) {
      iVar5 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *piVar12 * 4);
      iVar13 = *(int *)(iVar5 + 0x14c);
      iVar6 = *(int *)(iVar5 + 0x148);
      piVar12 = piVar12 + 1;
      if (iVar6 != iVar13) {
        do {
          if (*(int *)(iVar6 + 4) == *(int *)(param_1 + 0x38)) break;
          iVar6 = iVar6 + 8;
        } while (iVar6 != iVar13);
        if ((iVar6 != iVar13) &&
           (local_40 = local_40 + 1, *(int *)(iVar5 + 0x134) != *(int *)(param_1 + 0x38))) {
          local_1c = local_1c + 1;
        }
      }
    }
    puVar18 = local_20c + iVar7 + -0xc;
    ExceptionList = &local_10;
    if (local_40 != 0) {
      iVar13 = local_40 * 1000;
      iVar5 = local_1c * 1000;
      if (iVar13 == 0) {
        iVar13 = -1;
        puVar18 = local_20c + iVar7 + -0xc;
        ExceptionList = &local_10;
      }
      else if (iVar5 + 0x189373U < 0x39580e) {
        iVar13 = (local_1c * 1000000) / iVar13;
        puVar18 = local_20c + iVar7 + -0xc;
        ExceptionList = &local_10;
      }
      else {
        aiStack_22c[iVar29 * -2 + 4] = 0;
        aiStack_22c[iVar29 * -2 + 3] = 1000;
        aiStack_22c[iVar29 * -2 + 2] = iVar5 >> 0x1f;
        aiStack_22c[iVar29 * -2 + 1] = iVar5;
        local_54 = iVar13;
        local_50 = iVar13 >> 0x1f;
        aiStack_22c[iVar29 * -2] = 0x83c93e;
        ExceptionList = &local_10;
        uVar32 = __allmul();
        aiStack_22c[iVar29 * -2 + 4] = local_50;
        aiStack_22c[iVar29 * -2 + 3] = local_54;
        aiStack_22c[iVar29 * -2 + 2] = (int)((ulonglong)uVar32 >> 0x20);
        aiStack_22c[iVar29 * -2 + 1] = (int)uVar32;
        aiStack_22c[iVar29 * -2] = 0x83c94d;
        iVar13 = __alldiv();
        puVar18 = local_20c + iVar7 + -0xc;
        local_64 = iVar13 >> 0x1f;
      }
      piVar14 = local_18;
      if (DAT_01317cd0 < iVar13) {
        *(undefined4 *)(puVar18 + -4) = 0x48;
        *(undefined4 *)(puVar18 + -8) = 0x83c960;
        iVar7 = FUN_00aae9af();
        piVar14 = local_18;
        uVar30 = 0;
        local_8 = 0;
        local_8c = (undefined1 *)iVar7;
        if (iVar7 != 0) {
          iVar5 = local_18[1];
          iVar29 = *local_18;
          *(undefined4 *)(puVar18 + -4) = 1;
          *(int *)(puVar18 + -8) = iVar5;
          *(int *)(puVar18 + -0xc) = iVar29;
          *(int *)(puVar18 + -0x10) = iVar7;
          *(undefined4 *)(puVar18 + -0x14) = 0x83c984;
          uVar30 = FUN_005803e0();
        }
        local_8 = 0xffffffff;
        pcVar1 = *(code **)(**(int **)(iVar9 + 0xcdc) + 0x44);
        puVar16 = puVar18 + -4;
        *(undefined4 *)(puVar18 + -4) = 0x83c99a;
        iVar7 = (*pcVar1)();
        pcVar1 = *(code **)(**(int **)(iVar7 + 0x38) + 0x18);
        *(undefined4 *)(puVar16 + -4) = uVar30;
        puVar17 = puVar16 + -8;
        *(undefined4 *)(puVar16 + -8) = 0x83c9a5;
        (*pcVar1)();
        local_11 = '\x01';
        puVar18 = puVar17;
      }
    }
  }
  iVar7 = *(int *)(iVar9 + 0xdac);
  iVar5 = *(int *)(iVar9 + 0xda8);
  *(undefined4 *)(puVar18 + -4) = 0x83c9ca;
  iVar29 = (iVar7 - iVar5 >> 3) * -8;
  iVar7 = *(int *)(iVar9 + 0xd5c);
  iVar5 = *(int *)(iVar9 + 0xd58);
  local_8c = puVar18 + iVar29;
  local_94 = 0;
  *(undefined4 *)(puVar18 + iVar29 + -4) = 0x83c9ee;
  iVar5 = -(iVar7 - iVar5 >> 3);
  puVar20 = puVar18 + iVar5 + iVar29;
  *(int *)(puVar18 + iVar5 + iVar29 + -4) = *(int *)(iVar9 + 0xd5c) - *(int *)(iVar9 + 0xd58) >> 3;
  *(undefined4 *)(puVar18 + iVar5 + iVar29 + -8) = 0;
  *(undefined1 **)(puVar18 + iVar5 + iVar29 + -0xc) = puVar18 + iVar5 + iVar29;
  *(undefined4 *)(puVar18 + iVar5 + iVar29 + -0x10) = 0x83ca08;
  _memset(*(void **)(puVar18 + iVar5 + iVar29 + -0xc),*(int *)(puVar18 + iVar5 + iVar29 + -8),
          *(size_t *)(puVar18 + iVar5 + iVar29 + -4));
  iVar7 = *piVar14;
  *(int *)(puVar18 + iVar5 + iVar29 + -0x10) = piVar14[1];
  *(int *)(puVar18 + iVar5 + iVar29 + -0x14) = iVar7;
  *(undefined4 *)(puVar18 + iVar5 + iVar29 + -0x18) = 0x83ca1a;
  FUN_008486b0();
  iVar7 = *(int *)(DAT_012588e8 + 0xb0c);
  local_40 = 1000;
  local_88 = (undefined4 *)0x3e8;
  *(undefined4 ***)(puVar18 + iVar5 + iVar29 + -4) = &local_88;
  local_90 = iVar7;
  *(int **)(puVar18 + iVar5 + iVar29 + -8) = &local_40;
  *(int *)(puVar18 + iVar5 + iVar29 + -0xc) = iVar9 + 0x7b4;
  *(undefined4 *)(puVar18 + iVar5 + iVar29 + -0x10) = 0x83ca54;
  FUN_005dcbd0();
  iVar7 = extraout_ECX;
  if (local_11 == '\0') {
    if (((local_40 < 1000) || (*(int *)(iVar9 + 0xe4c) == 1)) && (0 < *(int *)(iVar9 + 0x14e0))) {
      *(undefined4 *)(puVar18 + iVar5 + iVar29 + -4) = 0x48;
      *(undefined4 *)(puVar18 + iVar5 + iVar29 + -8) = 0x83ca80;
      iVar7 = FUN_00aae9af();
      local_8 = 1;
      if (iVar7 == 0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        iVar13 = piVar14[1];
        iVar6 = *piVar14;
        *(undefined4 *)(puVar18 + iVar5 + iVar29 + -4) = 1;
        *(int *)(puVar18 + iVar5 + iVar29 + -8) = iVar13;
        *(int *)(puVar18 + iVar5 + iVar29 + -0xc) = iVar6;
        *(int *)(puVar18 + iVar5 + iVar29 + -0x10) = iVar7;
        *(undefined4 *)(puVar18 + iVar5 + iVar29 + -0x14) = 0x83caa0;
        puVar8 = (undefined4 *)FUN_005803e0();
      }
      iVar9 = **(int **)(iVar9 + 0xcdc);
LAB_0083cab7:
      local_8 = 0xffffffff;
      pcVar1 = *(code **)(iVar9 + 0x44);
      puVar19 = puVar18 + iVar5 + iVar29 + -4;
      *(undefined4 *)(puVar18 + iVar5 + iVar29 + -4) = 0x83cabc;
      iVar9 = (*pcVar1)();
      pcVar1 = *(code **)(**(int **)(iVar9 + 0x38) + 0x18);
      *(undefined4 **)(puVar19 + -4) = puVar8;
      *(undefined4 *)(puVar19 + -8) = 0x83cac7;
      (*pcVar1)();
      ExceptionList = local_10;
      return;
    }
    local_5c = 0;
    local_70 = (undefined4 *)(*(int *)(iVar9 + 0xdac) - *(int *)(iVar9 + 0xda8) >> 3);
    if (0 < (int)local_70) {
      local_24 = local_58;
      do {
        iVar7 = *local_24;
        local_34 = local_24[1];
        iVar13 = *(int *)(*(int *)(*(int *)(iVar9 + 0xbe8) + local_34 * 4) + 0x34);
        *(undefined4 *)(puVar18 + iVar5 + iVar29 + -4) = 0;
        piVar14 = local_18;
        local_38 = iVar7;
        *(int **)(puVar18 + iVar5 + iVar29 + -8) = &local_38;
        *(int **)(puVar18 + iVar5 + iVar29 + -0xc) = piVar14;
        *(int *)(puVar18 + iVar5 + iVar29 + -0x10) = iVar13;
        local_30 = (int *)iVar13;
        *(undefined4 *)(puVar18 + iVar5 + iVar29 + -0x14) = 0x83cb20;
        local_7c = (undefined4 *)FUN_00936fc0();
        iVar7 = *(int *)(iVar13 + 0x30);
        local_84 = (int *)(iVar13 + 0x2c);
        iVar6 = *local_84;
        bVar31 = iVar6 == iVar7;
        if (!bVar31) {
          do {
            if (*(int *)(iVar6 + 4) == *(int *)(param_1 + 0x38)) break;
            iVar6 = iVar6 + 8;
          } while (iVar6 != iVar7);
          bVar31 = iVar6 == iVar7;
        }
        local_44 = local_40;
        local_11 = !bVar31;
        local_20 = local_88;
        local_1c = DAT_01317d64;
        local_6c = DAT_01317d64;
        local_28 = local_84;
        if (!(bool)local_11) {
          local_28 = (int *)(iVar13 + 0x3c);
        }
        iVar7 = 0;
        iVar13 = local_28[1] - *local_28 >> 3;
        piVar14 = local_28;
        if (0 < iVar13) {
          do {
            piVar12 = (int *)(*piVar14 + iVar7 * 8);
            if (*(int *)(*piVar14 + 4 + iVar7 * 8) != *(int *)(param_1 + 0x38)) {
              local_68 = *piVar12;
              iVar6 = *(int *)(*(int *)(DAT_012587e4 + 4) + piVar12[1] * 4);
              *(undefined4 ***)(puVar18 + iVar5 + iVar29 + -4) = &local_20;
              *(int **)(puVar18 + iVar5 + iVar29 + -8) = &local_44;
              *(int *)(puVar18 + iVar5 + iVar29 + -0xc) = iVar6 + 0x7b4;
              *(undefined4 *)(puVar18 + iVar5 + iVar29 + -0x10) = 0x83cbbe;
              FUN_005dcbd0();
              piVar14 = local_28;
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < iVar13);
        }
        iVar7 = *(int *)(*(int *)(DAT_012587e4 + 4) + local_34 * 4);
        *(int **)(puVar18 + iVar5 + iVar29 + -4) = &local_6c;
        *(int ***)(puVar18 + iVar5 + iVar29 + -8) = &local_2c;
        *(int *)(puVar18 + iVar5 + iVar29 + -0xc) = iVar7 + 0x7b4;
        local_2c = (int *)0x0;
        *(undefined4 *)(puVar18 + iVar5 + iVar29 + -0x10) = 0x83cbef;
        FUN_005dcbd0();
        local_1c = local_1c + (int)local_2c;
        if (local_11 == '\0') {
          local_28 = local_84;
        }
        else {
          local_28 = (int *)((int)local_30 + 0x3c);
        }
        iVar13 = 0;
        iVar7 = local_28[1] - *local_28 >> 3;
        piVar14 = local_28;
        if (0 < iVar7) {
          do {
            piVar12 = (int *)(*piVar14 + iVar13 * 8);
            uVar15 = piVar12[1];
            if (uVar15 != local_34) {
              local_68 = *piVar12;
              iVar6 = *(int *)(*(int *)(DAT_012587e4 + 4) + uVar15 * 4);
              *(int **)(puVar18 + iVar5 + iVar29 + -4) = &local_6c;
              *(int **)(puVar18 + iVar5 + iVar29 + -8) = &local_1c;
              *(int *)(puVar18 + iVar5 + iVar29 + -0xc) = iVar6 + 0x7b4;
              *(undefined4 *)(puVar18 + iVar5 + iVar29 + -0x10) = 0x83cc53;
              FUN_005dcbd0();
              piVar14 = local_28;
            }
            iVar13 = iVar13 + 1;
          } while (iVar13 < iVar7);
        }
        iVar13 = local_44;
        iVar7 = local_1c;
        if (local_1c == 0) {
          iVar13 = -1;
        }
        else if (local_44 + 0x189373U < 0x39580e) {
          iVar13 = (local_44 * 1000) / local_1c;
        }
        else {
          iVar6 = local_44 >> 0x1f;
          *(undefined4 *)(puVar18 + iVar5 + iVar29 + -4) = 0;
          iVar7 = local_1c;
          *(undefined4 *)(puVar18 + iVar5 + iVar29 + -8) = 1000;
          *(int *)(puVar18 + iVar5 + iVar29 + -0xc) = iVar6;
          *(int *)(puVar18 + iVar5 + iVar29 + -0x10) = iVar13;
          local_50 = iVar7 >> 0x1f;
          *(undefined4 *)(puVar18 + iVar5 + iVar29 + -0x14) = 0x83cca2;
          uVar32 = __allmul();
          *(int *)(puVar18 + iVar5 + iVar29 + -4) = local_50;
          *(int *)(puVar18 + iVar5 + iVar29 + -8) = iVar7;
          *(int *)(puVar18 + iVar5 + iVar29 + -0xc) = (int)((ulonglong)uVar32 >> 0x20);
          *(int *)(puVar18 + iVar5 + iVar29 + -0x10) = (int)uVar32;
          *(undefined4 *)(puVar18 + iVar5 + iVar29 + -0x14) = 0x83ccae;
          iVar13 = __alldiv();
          local_64 = iVar13 >> 0x1f;
          iVar7 = extraout_ECX_00;
        }
        if ((int)local_7c < -9) {
LAB_0083cce2:
          if (0 < *(int *)(iVar9 + 0x14e0)) {
            *(undefined4 *)(puVar18 + iVar5 + iVar29 + -4) = 0x48;
            *(undefined4 *)(puVar18 + iVar5 + iVar29 + -8) = 0x83cdaf;
            puVar8 = (undefined4 *)FUN_00aae9af();
            if (puVar8 == (undefined4 *)0x0) {
              iVar9 = **(int **)(iVar9 + 0xcdc);
              puVar8 = (undefined4 *)0x0;
            }
            else {
              local_50 = local_18[1];
              iVar7 = *local_18;
              puVar8[1] = 0x18d;
              *puVar8 = CCommand::vftable;
              puVar8[7] = 0xf;
              puVar8[6] = 0;
              *(undefined1 *)(puVar8 + 2) = 0;
              local_8 = 3;
              puVar8[0xb] = 0x5d7;
              puVar8[0xc] = 0x5d7;
              *(undefined4 *)(puVar18 + iVar5 + iVar29 + -4) = 0;
              *(undefined1 **)(puVar18 + iVar5 + iVar29 + -8) = &DAT_00ded94d;
              *(undefined2 *)(puVar8 + 0xd) = 0xffff;
              *(undefined4 *)(puVar18 + iVar5 + iVar29 + -0xc) = 0x83ce16;
              FUN_00409350();
              puVar8[9] = 0;
              *(undefined2 *)(puVar8 + 10) = 0;
              *(undefined2 *)((int)puVar8 + 0x36) = 0;
              puVar8[0xe] = 0;
              *puVar8 = CToggleMobilizationCommand::vftable;
              puVar8[0xf] = iVar7;
              puVar8[0x10] = local_50;
              *(undefined1 *)(puVar8 + 0x11) = 1;
              iVar9 = **(int **)(iVar9 + 0xcdc);
            }
            goto LAB_0083cab7;
          }
        }
        else {
          *(int *)(puVar18 + iVar5 + iVar29 + -4) = iVar7;
          *(undefined4 *)(puVar18 + iVar5 + iVar29 + -4) = 0x44bb9000;
          *(undefined4 *)(puVar18 + iVar5 + iVar29 + -8) = 0x83cccd;
          FUN_00401000();
          *(undefined4 *)(puVar18 + iVar5 + iVar29 + -4) = 0x83ccd5;
          iVar6 = FUN_00b31c00();
          iVar7 = extraout_ECX_01;
          if ((iVar13 < iVar6) || (*(int *)(iVar9 + 0xe4c) == 1)) goto LAB_0083cce2;
        }
        local_24 = local_24 + 2;
        local_5c = local_5c + 1;
      } while (local_5c < (int)local_70);
    }
  }
  local_20 = (undefined4 *)0x0;
  local_48 = *(int *)(iVar9 + 0xdac) - *(int *)(iVar9 + 0xda8) >> 3;
  puVar23 = puVar18 + iVar5 + iVar29;
  if (0 < local_48) {
    *(int *)(puVar18 + iVar5 + iVar29 + -4) = iVar7;
    *(undefined4 *)(puVar18 + iVar5 + iVar29 + -4) = 0x43964000;
    *(undefined4 *)(puVar18 + iVar5 + iVar29 + -8) = 0x83cd37;
    FUN_00401000();
    *(undefined4 *)(puVar18 + iVar5 + iVar29 + -4) = 0x83cd3f;
    local_98 = FUN_00b31c00();
    local_2c = local_58;
    do {
      piVar12 = local_18;
      local_38 = *local_2c;
      local_34 = local_2c[1];
      piVar14 = *(int **)(*(int *)(*(int *)(local_3c + 0xbe8) + local_2c[1] * 4) + 0x34);
      local_49 = (char)piVar14[0x3f];
      local_74 = *local_18;
      puVar8 = (undefined4 *)((undefined4 *)piVar14[0x38])[1];
      cVar4 = *(char *)((int)puVar8 + 0x21);
      local_84 = piVar14;
      local_70 = (undefined4 *)piVar14[0x38];
      while (cVar4 == '\0') {
        if ((int)puVar8[3] < local_18[1]) {
          puVar10 = (undefined4 *)puVar8[2];
          puVar8 = local_70;
        }
        else {
          puVar10 = (undefined4 *)*puVar8;
        }
        local_70 = puVar8;
        puVar8 = puVar10;
        cVar4 = *(char *)((int)puVar10 + 0x21);
      }
      if ((local_70 == (undefined4 *)piVar14[0x38]) || (local_18[1] < (int)local_70[3])) {
        local_7c = (undefined4 *)piVar14[0x38];
        ppuVar11 = &local_7c;
      }
      else {
        ppuVar11 = &local_70;
      }
      iVar9 = (*ppuVar11)[5];
      iVar7 = (*ppuVar11)[4];
      *(undefined4 *)(puVar18 + iVar5 + iVar29 + -4) = 0;
      local_1c = iVar9 - iVar7 >> 6;
      *(int **)(puVar18 + iVar5 + iVar29 + -8) = &local_38;
      *(int **)(puVar18 + iVar5 + iVar29 + -0xc) = piVar12;
      *(int **)(puVar18 + iVar5 + iVar29 + -0x10) = piVar14;
      *(undefined4 *)(puVar18 + iVar5 + iVar29 + -0x14) = 0x83ceab;
      local_30 = (int *)FUN_00936fc0();
      iVar9 = piVar14[0xc];
      iVar7 = piVar14[0xb];
      bVar31 = iVar7 == iVar9;
      if (!bVar31) {
        do {
          if (*(int *)(iVar7 + 4) == *(int *)(param_1 + 0x38)) break;
          iVar7 = iVar7 + 8;
        } while (iVar7 != iVar9);
        bVar31 = iVar7 == iVar9;
      }
      local_11 = !bVar31;
      local_44 = local_40;
      local_70 = local_88;
      local_6c = 1000;
      piVar12 = piVar14 + 0xb;
      if (!(bool)local_11) {
        piVar12 = piVar14 + 0xf;
      }
      iVar9 = 0;
      iVar7 = piVar12[1] - *piVar12 >> 3;
      local_24 = piVar12;
      if (0 < iVar7) {
        do {
          puVar8 = (undefined4 *)(*piVar12 + iVar9 * 8);
          if (*(int *)(*piVar12 + 4 + iVar9 * 8) != *(int *)(param_1 + 0x38)) {
            local_60 = *puVar8;
            iVar13 = *(int *)(*(int *)(DAT_012587e4 + 4) + puVar8[1] * 4);
            *(undefined4 ***)(puVar18 + iVar5 + iVar29 + -4) = &local_70;
            *(int **)(puVar18 + iVar5 + iVar29 + -8) = &local_44;
            *(int *)(puVar18 + iVar5 + iVar29 + -0xc) = iVar13 + 0x7b4;
            *(undefined4 *)(puVar18 + iVar5 + iVar29 + -0x10) = 0x83cf3f;
            FUN_005dcbd0();
            piVar12 = local_24;
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < iVar7);
      }
      iVar9 = *(int *)(*(int *)(DAT_012587e4 + 4) + local_34 * 4);
      *(int **)(puVar18 + iVar5 + iVar29 + -4) = &local_6c;
      *(int **)(puVar18 + iVar5 + iVar29 + -8) = &local_5c;
      *(int *)(puVar18 + iVar5 + iVar29 + -0xc) = iVar9 + 0x7b4;
      local_5c = 0;
      *(undefined4 *)(puVar18 + iVar5 + iVar29 + -0x10) = 0x83cf70;
      FUN_005dcbd0();
      local_28 = (int *)(local_5c + 1000);
      if (local_11 == '\0') {
        local_24 = piVar14 + 0xb;
      }
      else {
        local_24 = piVar14 + 0xf;
      }
      iVar7 = 0;
      iVar9 = local_24[1] - *local_24 >> 3;
      piVar12 = local_24;
      if (0 < iVar9) {
        do {
          uVar15 = *(uint *)(*piVar12 + 4 + iVar7 * 8);
          if (uVar15 != local_34) {
            local_74 = *(int *)(*piVar12 + iVar7 * 8);
            iVar13 = *(int *)(*(int *)(DAT_012587e4 + 4) + uVar15 * 4);
            *(int **)(puVar18 + iVar5 + iVar29 + -4) = &local_6c;
            *(int ***)(puVar18 + iVar5 + iVar29 + -8) = &local_28;
            *(int *)(puVar18 + iVar5 + iVar29 + -0xc) = iVar13 + 0x7b4;
            *(undefined4 *)(puVar18 + iVar5 + iVar29 + -0x10) = 0x83cfd5;
            FUN_005dcbd0();
            piVar12 = local_24;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar9);
      }
      iVar9 = local_44;
      if (local_28 == (int *)0x0) {
        local_5c = -1;
      }
      else {
        if (local_44 + 0x189373U < 0x39580e) {
          local_5c = (local_44 * 1000) / (int)local_28;
        }
        else {
          iVar7 = local_44 >> 0x1f;
          *(undefined4 *)(puVar18 + iVar5 + iVar29 + -4) = 0;
          piVar12 = local_28;
          *(undefined4 *)(puVar18 + iVar5 + iVar29 + -8) = 1000;
          *(int *)(puVar18 + iVar5 + iVar29 + -0xc) = iVar7;
          *(int *)(puVar18 + iVar5 + iVar29 + -0x10) = iVar9;
          local_e0 = (int)piVar12 >> 0x1f;
          *(undefined4 *)(puVar18 + iVar5 + iVar29 + -0x14) = 0x83d02b;
          uVar32 = __allmul();
          *(int *)(puVar18 + iVar5 + iVar29 + -4) = local_e0;
          *(int **)(puVar18 + iVar5 + iVar29 + -8) = piVar12;
          *(int *)(puVar18 + iVar5 + iVar29 + -0xc) = (int)((ulonglong)uVar32 >> 0x20);
          *(int *)(puVar18 + iVar5 + iVar29 + -0x10) = (int)uVar32;
          *(undefined4 *)(puVar18 + iVar5 + iVar29 + -0x14) = 0x83d03a;
          local_5c = __alldiv();
          local_70 = (undefined4 *)(local_5c >> 0x1f);
        }
      }
      iVar9 = *(int *)(*(int *)(local_3c + 0xa60) + 0x28);
      iVar7 = *(int *)(local_3c + 0x680);
      if (iVar9 == 0) {
        iVar9 = -1;
      }
      else if (iVar7 + 0x189373U < 0x39580e) {
        iVar9 = (iVar7 * 1000) / iVar9;
      }
      else {
        *(undefined4 *)(puVar18 + iVar5 + iVar29 + -4) = 0;
        *(undefined4 *)(puVar18 + iVar5 + iVar29 + -8) = 1000;
        *(int *)(puVar18 + iVar5 + iVar29 + -0xc) = iVar7 >> 0x1f;
        *(int *)(puVar18 + iVar5 + iVar29 + -0x10) = iVar7;
        local_64 = iVar9 >> 0x1f;
        *(undefined4 *)(puVar18 + iVar5 + iVar29 + -0x14) = 0x83d090;
        uVar32 = __allmul();
        *(int *)(puVar18 + iVar5 + iVar29 + -4) = local_64;
        *(int *)(puVar18 + iVar5 + iVar29 + -8) = iVar9;
        *(int *)(puVar18 + iVar5 + iVar29 + -0xc) = (int)((ulonglong)uVar32 >> 0x20);
        *(int *)(puVar18 + iVar5 + iVar29 + -0x10) = (int)uVar32;
        *(undefined4 *)(puVar18 + iVar5 + iVar29 + -0x14) = 0x83d09c;
        iVar9 = __alldiv();
        local_70 = (undefined4 *)(iVar9 >> 0x1f);
        piVar14 = local_84;
      }
      iVar7 = local_1c;
      if ((iVar9 < local_98) && (1000 < local_5c)) {
        if (local_49 == '\0') {
          local_1c = local_1c * 0xf;
        }
        else {
          local_1c = local_1c * 8;
        }
        if (iVar7 == 0) {
          iVar9 = piVar14[0xc];
          iVar7 = piVar14[0xb];
          bVar31 = iVar7 == iVar9;
          if (!bVar31) {
            do {
              if (*(int *)(iVar7 + 4) == *(int *)(local_3c + 0x20)) break;
              iVar7 = iVar7 + 8;
            } while (iVar7 != iVar9);
            bVar31 = iVar7 == iVar9;
          }
          *(int **)(puVar18 + iVar5 + iVar29 + -4) = piVar14;
          if (bVar31) {
            *(undefined4 *)(puVar18 + iVar5 + iVar29 + -8) = 0x83d11e;
            piVar12 = (int *)FUN_0093bc10();
          }
          else {
            *(undefined4 *)(puVar18 + iVar5 + iVar29 + -8) = 0x83d114;
            piVar12 = (int *)FUN_0093bb60();
          }
          iVar9 = *piVar12;
          iVar7 = piVar14[0xf];
          iVar13 = piVar14[0xb];
          *(undefined4 *)(puVar18 + iVar5 + iVar29 + -4) = 0;
          *(int *)(puVar18 + iVar5 + iVar29 + -8) = iVar7;
          *(int *)(puVar18 + iVar5 + iVar29 + -0xc) = iVar13;
          *(int **)(puVar18 + iVar5 + iVar29 + -0x10) = piVar14;
          *(undefined4 *)(puVar18 + iVar5 + iVar29 + -0x14) = 0x83d141;
          iVar7 = FUN_00936fc0();
          iVar7 = iVar7 - iVar9 / 1000;
          if ((iVar7 < 0x15) || (iVar7 + -0x14 <= (int)local_30)) {
            local_1c = local_1c + 5;
          }
          else {
            local_1c = local_1c + 2;
          }
        }
        piVar14 = local_18;
        iVar9 = local_3c;
        if (local_1c < (int)local_30) {
          local_54 = 0x2d2d2d;
          local_cc = DAT_0131ac90;
          local_c8 = 0x2d2d2d;
          local_c0 = *local_18;
          local_c4 = 0;
          local_b0 = 0;
          local_ac = 0;
          local_a8 = 0;
          local_a4 = DAT_0131b788;
          local_a0 = 0;
          local_9c = 0;
          local_bc = local_18[1];
          local_d4 = 0x18d;
          local_d8 = CWarGoal::vftable;
          local_b8 = local_38;
          local_b4 = local_34;
          iVar7 = local_38;
          uVar15 = local_34;
          if (*(int *)(local_3c + 0x1430) < 0x2711) {
            *(undefined4 *)(puVar18 + iVar5 + iVar29 + -4) = 0;
            *(undefined4 *)(puVar18 + iVar5 + iVar29 + -8) = 0x83d208;
            cVar4 = FUN_00538af0();
            iVar7 = extraout_ECX_02;
            uVar15 = extraout_EDX;
            if (cVar4 == '\0') goto LAB_0083d210;
            uVar15 = extraout_EDX & 0xffffff00;
          }
          else {
LAB_0083d210:
            uVar15 = CONCAT31((int3)(uVar15 >> 8),1);
          }
          iVar13 = *(int *)(*(int *)(DAT_012586dc + 0x40) + 0x24);
          *(undefined4 *)(puVar18 + iVar5 + iVar29 + -4) = 0;
          *(undefined4 *)(puVar18 + iVar5 + iVar29 + -8) = 1;
          *(undefined4 *)(puVar18 + iVar5 + iVar29 + -0xc) = 0;
          *(int *)(puVar18 + iVar5 + iVar29 + -0x10) = iVar7;
          local_70 = (undefined4 *)(puVar18 + iVar5 + iVar29 + -0x10);
          *(undefined4 *)(puVar18 + iVar5 + iVar29 + -0x10) = 0;
          *(uint *)(puVar18 + iVar5 + iVar29 + -0x14) = uVar15;
          *(int *)(puVar18 + iVar5 + iVar29 + -0x10) = iVar13 + -2000;
          *(undefined ****)(puVar18 + iVar5 + iVar29 + -0x18) = &local_d8;
          *(int *)(puVar18 + iVar5 + iVar29 + -0x1c) = iVar9;
          *(undefined1 ***)(puVar18 + iVar5 + iVar29 + -0x20) = &local_80;
          *(undefined4 *)(puVar18 + iVar5 + iVar29 + -0x24) = 0x83d248;
          FUN_00845ad0();
          iVar9 = local_38;
          if (20000 < (int)local_80) {
            iVar7 = piVar14[1];
            *(uint *)(puVar18 + iVar5 + iVar29 + -4) = local_34;
            iVar13 = *piVar14;
            *(int *)(puVar18 + iVar5 + iVar29 + -8) = iVar9;
            *(int *)(puVar18 + iVar5 + iVar29 + -0xc) = iVar7;
            *(int *)(puVar18 + iVar5 + iVar29 + -0x10) = iVar13;
            *(undefined4 *)(puVar18 + iVar5 + iVar29 + -0x14) = 0x83d272;
            FUN_00916020();
            uVar3 = local_9c;
            uVar2 = local_a0;
            uVar30 = local_a4;
            local_8 = 4;
            local_1b8 = local_d4;
            local_1b4 = local_d0;
            local_1b0 = local_cc;
            local_1ac = local_c8;
            local_1a8 = local_c4;
            local_1a4 = local_c0;
            local_1a0 = local_bc;
            local_19c = local_b8;
            local_198 = local_b4;
            local_194 = local_b0;
            local_190 = local_ac;
            local_18c = local_a8;
            *(undefined4 *)(puVar18 + iVar5 + iVar29 + -4) = 0;
            local_188 = uVar30;
            local_184 = uVar2;
            local_180 = uVar3;
            *(undefined4 *)(puVar18 + iVar5 + iVar29 + -8) = 0x83d334;
            cVar4 = FUN_00911760();
            if (cVar4 != '\0') {
              local_68 = *piVar14;
              piVar14 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + piVar14[1] * 4) + 0xcdc);
              uVar30 = *(undefined4 *)(DAT_012588e8 + 0xb0c);
              *(undefined4 *)(puVar18 + iVar5 + iVar29 + -4) = 0x40;
              local_1c8 = uVar30;
              *(undefined4 *)(puVar18 + iVar5 + iVar29 + -8) = 0x83d395;
              puVar8 = (undefined4 *)FUN_00aae9af();
              local_8._0_1_ = 5;
              local_78 = puVar8;
              if (puVar8 == (undefined4 *)0x0) {
                puVar8 = (undefined4 *)0x0;
              }
              else {
                pcVar1 = (code *)local_1e4[0xc];
                puVar20 = puVar18 + iVar5 + iVar29 + -4;
                *(undefined4 *)(puVar18 + iVar5 + iVar29 + -4) = 0x83d3ba;
                uVar30 = (*pcVar1)();
                puVar8[1] = 0x18d;
                *puVar8 = CCommand::vftable;
                puVar8[7] = 0xf;
                puVar8[6] = 0;
                *(undefined1 *)(puVar8 + 2) = 0;
                local_8._0_1_ = 6;
                puVar8[0xb] = 900;
                puVar8[0xc] = 900;
                *(undefined4 *)(puVar20 + -4) = 0;
                *(undefined1 **)(puVar20 + -8) = &DAT_00ded94d;
                *(undefined2 *)(puVar8 + 0xd) = 0xffff;
                *(undefined4 *)(puVar20 + -0xc) = 0x83d401;
                FUN_00409350();
                puVar8[9] = 0;
                *(undefined2 *)(puVar8 + 10) = 0;
                *(undefined2 *)((int)puVar8 + 0x36) = 0;
                puVar8[0xe] = 0;
                *puVar8 = CDiplomaticActionCommand::vftable;
                puVar8[0xf] = uVar30;
              }
              local_8 = CONCAT31(local_8._1_3_,4);
              pcVar1 = *(code **)(*piVar14 + 0x44);
              puVar21 = puVar20 + -4;
              *(undefined4 *)(puVar20 + -4) = 0x83d42d;
              iVar9 = (*pcVar1)();
              pcVar1 = *(code **)(**(int **)(iVar9 + 0x38) + 0x18);
              *(undefined4 **)(puVar21 + -4) = puVar8;
              puVar22 = puVar21 + -8;
              *(undefined4 *)(puVar21 + -8) = 0x83d438;
              (*pcVar1)();
              local_8 = 0xffffffff;
              local_1e4 = CDiplomaticAction::vftable;
              iVar9 = local_3c;
              puVar23 = puVar22;
              break;
            }
            local_8 = 0xffffffff;
            local_1e4 = CDiplomaticAction::vftable;
          }
        }
      }
      local_2c = local_2c + 2;
      local_20 = (undefined4 *)((int)local_20 + 1);
      iVar9 = local_3c;
      puVar23 = puVar18 + iVar5 + iVar29;
    } while ((int)local_20 < local_48);
  }
  iVar7 = *(int *)(iVar9 + 0xdac) - *(int *)(iVar9 + 0xda8) >> 3;
  local_30 = local_58;
  if (0 < iVar7) {
    do {
      local_5c = iVar7;
      piVar14 = local_18;
      local_38 = *local_30;
      uVar15 = local_30[1];
      local_34 = uVar15;
      if (*(int *)(param_1 + 0x84) <= *(int *)(DAT_012588e8 + 0xb0c)) {
        iVar9 = *(int *)(*(int *)(*(int *)(local_3c + 0xbe8) + uVar15 * 4) + 0x34);
        *(undefined4 *)(puVar23 + -4) = 0;
        *(int **)(puVar23 + -8) = &local_38;
        *(int **)(puVar23 + -0xc) = piVar14;
        *(int *)(puVar23 + -0x10) = iVar9;
        *(undefined4 *)(puVar23 + -0x14) = 0x83d4b2;
        local_48 = FUN_00936fc0();
        iVar5 = local_38;
        iVar7 = *(int *)(iVar9 + 0x2c);
        if (iVar7 != *(int *)(iVar9 + 0x30)) {
          do {
            if (*(int *)(iVar7 + 4) == *(int *)(param_1 + 0x38)) break;
            iVar7 = iVar7 + 8;
          } while (iVar7 != *(int *)(iVar9 + 0x30));
        }
        *(uint *)(puVar23 + -4) = uVar15;
        *(int *)(puVar23 + -8) = iVar5;
        iVar7 = *local_18;
        *(int *)(puVar23 + -0xc) = local_18[1];
        *(int *)(puVar23 + -0x10) = iVar7;
        *(int **)(puVar23 + -0x14) = local_17c;
        local_11 = '\x01';
        *(undefined4 *)(puVar23 + -0x18) = 0x83d4ed;
        FUN_00916900();
        local_8 = 7;
        piVar14 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + uVar15 * 4) + 0xce4);
        do {
          do {
            if (piVar14 == (int *)0x0) goto LAB_0083d53e;
            piVar12 = (int *)*piVar14;
            local_68 = piVar12[2];
            piVar14 = (int *)piVar14[2];
          } while (piVar12[3] != *(int *)(param_1 + 0x38));
          pcVar1 = *(code **)(*piVar12 + 0x20);
          puVar24 = (undefined4 *)(puVar23 + -4);
          puVar23 = puVar23 + -4;
          *puVar24 = 0x83d52d;
          iVar7 = (*pcVar1)();
        } while (iVar7 != 0x81e);
        local_11 = '\0';
LAB_0083d53e:
        *(undefined4 *)(puVar23 + -4) = 0;
        *(undefined4 *)(puVar23 + -8) = 0x83d54b;
        cVar4 = FUN_00911760();
        iVar7 = local_38;
        if ((cVar4 != '\0') && (local_11 != '\0')) {
          local_14c = 1;
          if (local_48 < 1) {
            iVar5 = *local_18;
            *(int *)(puVar23 + -4) = local_18[1];
            *(int *)(puVar23 + -8) = iVar5;
            *(uint *)(puVar23 + -0xc) = uVar15;
            *(int *)(puVar23 + -0x10) = iVar7;
            *(undefined4 *)(puVar23 + -0x14) = 0x83d79b;
            FUN_0092a7c0();
            *(int *)(puVar23 + -4) = iVar9;
            *(undefined1 **)(puVar23 + -8) = local_154;
            *(undefined4 *)(puVar23 + -0xc) = 0x83d7a8;
            FUN_00929bf0();
            puVar8 = (undefined4 *)(local_114 - local_118 >> 6);
            local_20 = puVar8;
            if (0 < (int)puVar8) {
              do {
                *(undefined4 *)(puVar23 + -4) = 1;
                *(undefined4 *)(puVar23 + -8) = 0x83d7d5;
                FUN_00928d40();
                local_20 = (undefined4 *)((int)local_20 + -1);
              } while (local_20 != (undefined4 *)0x0);
            }
            local_20 = (undefined4 *)((int)puVar8 + -1);
            if (-1 < (int)local_20) {
              iVar9 = (int)local_20 * 0x40;
              piVar14 = local_18;
              do {
                iVar29 = local_118;
                iVar7 = piVar14[1];
                iVar5 = *piVar14;
                *(undefined4 *)(puVar23 + -4) = 1;
                *(int *)(puVar23 + -8) = iVar7;
                *(int *)(puVar23 + -0xc) = iVar5;
                *(undefined4 *)(puVar23 + -0x10) = 0x83d808;
                iVar7 = FUN_0083de70();
                if ((iVar7 != 100) && (*(char *)(*(int *)(iVar9 + iVar29 + 0xc) + 0x1d4) == '\0')) {
                  *(undefined4 *)(puVar23 + -4) = 0;
                  *(undefined4 *)(puVar23 + -8) = 0x83d82b;
                  FUN_00928d40();
                  piVar14 = local_18;
                }
                local_20 = (undefined4 *)((int)local_20 + -1);
                iVar9 = iVar9 + -0x40;
              } while (-1 < (int)local_20);
            }
            piVar14 = local_18;
            iVar9 = local_18[1];
            iVar7 = *local_18;
            *(undefined4 *)(puVar23 + -4) = 0;
            *(int *)(puVar23 + -8) = iVar9;
            *(int *)(puVar23 + -0xc) = iVar7;
            local_14c = 0;
            *(undefined4 *)(puVar23 + -0x10) = 0x83d85a;
            iVar5 = FUN_0083de70();
            iVar9 = piVar14[1];
            iVar7 = *piVar14;
            *(undefined4 *)(puVar23 + -0x10) = 1;
            *(int *)(puVar23 + -0x14) = iVar9;
            *(int *)(puVar23 + -0x18) = iVar7;
            *(undefined4 *)(puVar23 + -0x1c) = 0x83d870;
            iVar9 = FUN_0083de70();
            if ((iVar5 == 100) && (iVar9 == 100)) {
              local_68 = *piVar14;
              piVar14 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + piVar14[1] * 4) + 0xcdc);
              uVar30 = *(undefined4 *)(DAT_012588e8 + 0xb0c);
              *(undefined4 *)(puVar23 + -4) = 0x40;
              local_160 = uVar30;
              *(undefined4 *)(puVar23 + -8) = 0x83d8b7;
              puVar8 = (undefined4 *)FUN_00aae9af();
              local_8._0_1_ = 10;
              local_78 = puVar8;
              if (puVar8 == (undefined4 *)0x0) {
                puVar8 = (undefined4 *)0x0;
              }
              else {
                pcVar1 = *(code **)(local_17c[0] + 0x30);
                puVar27 = (undefined4 *)(puVar23 + -4);
                puVar23 = puVar23 + -4;
                *puVar27 = 0x83d8dc;
                uVar30 = (*pcVar1)();
                puVar8[1] = 0x18d;
                *puVar8 = CCommand::vftable;
                puVar8[7] = 0xf;
                puVar8[6] = 0;
                *(undefined1 *)(puVar8 + 2) = 0;
                local_8._0_1_ = 0xb;
                puVar8[0xb] = 900;
                puVar8[0xc] = 900;
                *(undefined4 *)(puVar23 + -4) = 0;
                *(undefined1 **)(puVar23 + -8) = &DAT_00ded94d;
                *(undefined2 *)(puVar8 + 0xd) = 0xffff;
                *(undefined4 *)(puVar23 + -0xc) = 0x83d923;
                FUN_00409350();
                puVar8[9] = 0;
                *(undefined2 *)(puVar8 + 10) = 0;
                *(undefined2 *)((int)puVar8 + 0x36) = 0;
                puVar8[0xe] = 0;
                *puVar8 = CDiplomaticActionCommand::vftable;
                puVar8[0xf] = uVar30;
              }
              local_8 = CONCAT31(local_8._1_3_,7);
              pcVar1 = *(code **)(*piVar14 + 0x44);
              puVar28 = puVar23 + -4;
              *(undefined4 *)(puVar23 + -4) = 0x83d94f;
              iVar9 = (*pcVar1)();
              pcVar1 = *(code **)(**(int **)(iVar9 + 0x38) + 0x18);
              *(undefined4 **)(puVar28 + -4) = puVar8;
              puVar23 = puVar28 + -8;
              *(undefined4 *)(puVar28 + -8) = 0x83d95a;
              (*pcVar1)();
            }
          }
          else {
            *(uint *)(puVar23 + -4) = uVar15;
            *(int *)(puVar23 + -8) = iVar7;
            iVar7 = *local_18;
            *(int *)(puVar23 + -0xc) = local_18[1];
            *(int *)(puVar23 + -0x10) = iVar7;
            *(undefined4 *)(puVar23 + -0x14) = 0x83d588;
            FUN_0092a7c0();
            *(int *)(puVar23 + -4) = iVar9;
            *(undefined1 **)(puVar23 + -8) = local_154;
            *(undefined4 *)(puVar23 + -0xc) = 0x83d595;
            FUN_00929bf0();
            puVar8 = (undefined4 *)(local_114 - local_118 >> 6);
            local_20 = puVar8;
            if (0 < (int)puVar8) {
              do {
                *(undefined4 *)(puVar23 + -4) = 1;
                *(undefined4 *)(puVar23 + -8) = 0x83d5c3;
                FUN_00928d40();
                local_20 = (undefined4 *)((int)local_20 + -1);
              } while (local_20 != (undefined4 *)0x0);
            }
            local_20 = (undefined4 *)((int)puVar8 + -1);
            if (-1 < (int)local_20) {
              iVar9 = (int)local_20 * 0x40;
              piVar14 = local_18;
              do {
                iVar29 = local_118;
                iVar7 = piVar14[1];
                iVar5 = *piVar14;
                *(undefined4 *)(puVar23 + -4) = 0;
                *(int *)(puVar23 + -8) = iVar7;
                *(int *)(puVar23 + -0xc) = iVar5;
                *(undefined4 *)(puVar23 + -0x10) = 0x83d5f6;
                iVar7 = FUN_0083de70();
                if ((iVar7 != 100) && (*(char *)(*(int *)(iVar9 + iVar29 + 0xc) + 0x1d4) == '\0')) {
                  *(undefined4 *)(puVar23 + -4) = 0;
                  *(undefined4 *)(puVar23 + -8) = 0x83d619;
                  FUN_00928d40();
                  piVar14 = local_18;
                }
                local_20 = (undefined4 *)((int)local_20 + -1);
                iVar9 = iVar9 + -0x40;
              } while (-1 < (int)local_20);
            }
            piVar14 = local_18;
            iVar9 = local_18[1];
            iVar7 = *local_18;
            *(undefined4 *)(puVar23 + -4) = 0;
            *(int *)(puVar23 + -8) = iVar9;
            *(int *)(puVar23 + -0xc) = iVar7;
            *(undefined4 *)(puVar23 + -0x10) = 0x83d641;
            iVar5 = FUN_0083de70();
            iVar9 = piVar14[1];
            iVar7 = *piVar14;
            *(undefined4 *)(puVar23 + -0x10) = 1;
            *(int *)(puVar23 + -0x14) = iVar9;
            *(int *)(puVar23 + -0x18) = iVar7;
            *(undefined4 *)(puVar23 + -0x1c) = 0x83d657;
            iVar9 = FUN_0083de70();
            if ((iVar5 == 100) && (iVar9 == 100)) {
              local_68 = *piVar14;
              piVar14 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + piVar14[1] * 4) + 0xcdc);
              uVar30 = *(undefined4 *)(DAT_012588e8 + 0xb0c);
              *(undefined4 *)(puVar23 + -4) = 0x40;
              local_160 = uVar30;
              *(undefined4 *)(puVar23 + -8) = 0x83d6a0;
              puVar8 = (undefined4 *)FUN_00aae9af();
              local_8._0_1_ = 8;
              local_78 = puVar8;
              if (puVar8 == (undefined4 *)0x0) {
                puVar8 = (undefined4 *)0x0;
              }
              else {
                pcVar1 = *(code **)(local_17c[0] + 0x30);
                puVar25 = (undefined4 *)(puVar23 + -4);
                puVar23 = puVar23 + -4;
                *puVar25 = 0x83d6c5;
                uVar30 = (*pcVar1)();
                puVar8[1] = 0x18d;
                *puVar8 = CCommand::vftable;
                puVar8[7] = 0xf;
                puVar8[6] = 0;
                *(undefined1 *)(puVar8 + 2) = 0;
                local_8._0_1_ = 9;
                *(undefined4 *)(puVar23 + -4) = 0;
                puVar8[0xb] = 900;
                puVar8[0xc] = 900;
                *(undefined1 **)(puVar23 + -8) = &DAT_00ded94d;
                *(undefined2 *)(puVar8 + 0xd) = 0xffff;
                *(undefined4 *)(puVar23 + -0xc) = 0x83d70c;
                FUN_00409350();
                puVar8[9] = 0;
                *(undefined2 *)(puVar8 + 10) = 0;
                *(undefined2 *)((int)puVar8 + 0x36) = 0;
                puVar8[0xe] = 0;
                *puVar8 = CDiplomaticActionCommand::vftable;
                puVar8[0xf] = uVar30;
              }
              local_8 = CONCAT31(local_8._1_3_,7);
              pcVar1 = *(code **)(*piVar14 + 0x44);
              puVar26 = puVar23 + -4;
              *(undefined4 *)(puVar23 + -4) = 0x83d738;
              iVar9 = (*pcVar1)();
              pcVar1 = *(code **)(**(int **)(iVar9 + 0x38) + 0x18);
              *(undefined4 **)(puVar26 + -4) = puVar8;
              puVar23 = puVar26 + -8;
              *(undefined4 *)(puVar26 + -8) = 0x83d743;
              (*pcVar1)();
              if (*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + local_34 * 4) + 0x208) == 0) {
                uVar30 = *(undefined4 *)(DAT_012588e8 + 0xb0c);
                *(undefined4 *)(puVar23 + -4) = 3;
                *(undefined4 *)(param_1 + 0x84) = uVar30;
                *(undefined4 *)(puVar23 + -8) = 0x83d77c;
                FUN_00424810();
              }
            }
          }
        }
        *(undefined1 **)(puVar23 + -4) = local_154;
        local_8 = 0xc;
        *(undefined4 *)(puVar23 + -8) = 0x83d96d;
        FUN_00427800();
        local_8 = 0xffffffff;
      }
      local_30 = local_30 + 2;
      iVar7 = local_5c + -1;
    } while (local_5c + -1 != 0);
    local_5c = 0;
    iVar9 = local_3c;
  }
  local_30 = (int *)(*(int *)(iVar9 + 0xdac) - *(int *)(iVar9 + 0xda8) >> 3);
  if (0 < (int)local_30) {
    local_2c = local_58;
    do {
      local_68 = *local_2c;
      iVar7 = local_2c[1];
      iVar5 = *(int *)(*(int *)(*(int *)(iVar9 + 0xbe8) + iVar7 * 4) + 0x34);
      iVar29 = *(int *)(iVar5 + 0x30);
      iVar5 = *(int *)(iVar5 + 0x2c);
      if (iVar5 != iVar29) {
        do {
          if (*(int *)(iVar5 + 4) == *(int *)(param_1 + 0x38)) break;
          iVar5 = iVar5 + 8;
        } while (iVar5 != iVar29);
      }
      *(undefined4 *)(puVar23 + -4) = 0x83d9e7;
      FUN_00936640();
      *(undefined4 *)(puVar23 + -4) = 3;
      *(undefined4 *)(puVar23 + -8) = 0x83d9f0;
      FUN_00424810();
      puVar18 = local_8c;
      if ((int)local_20 < local_90) {
LAB_0083da24:
        *(undefined4 *)(puVar23 + -4) = 1;
        *(undefined4 **)(puVar23 + -8) = &local_94;
        *(undefined1 **)(puVar23 + -0xc) = puVar18;
        local_48 = iVar9 + 0x430;
        *(undefined4 ***)(puVar23 + -0x10) = &local_78;
        *(undefined4 *)(puVar23 + -0x14) = 1;
        *(int **)(puVar23 + -0x18) = &local_48;
        *(int **)(puVar23 + -0x1c) = &local_54;
        *(int *)(puVar23 + -0x20) = param_1;
        *(undefined4 *)(puVar23 + -0x24) = 0x83da54;
        FUN_00833410();
        iVar5 = local_50;
        iVar7 = local_54;
        if ((local_50 != 0) && (*(int *)(param_1 + 0x88) < *(int *)(DAT_012588e8 + 0xb0c))) {
          iVar29 = local_18[1];
          iVar13 = *local_18;
          *(int *)(puVar23 + -4) = local_50;
          *(int *)(puVar23 + -8) = iVar7;
          *(int *)(puVar23 + -0xc) = iVar29;
          *(int *)(puVar23 + -0x10) = iVar13;
          *(undefined4 *)(puVar23 + -0x14) = 0x83da94;
          FUN_00832280();
          local_8 = 0xd;
          local_80 = local_20c;
          local_48 = 1;
          if (*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + iVar5 * 4) + 0x208) == 0) {
            uVar30 = *(undefined4 *)(DAT_012588e8 + 0xb0c);
            *(undefined4 *)(puVar23 + -4) = 0xc;
            *(undefined4 *)(param_1 + 0x88) = uVar30;
            *(undefined4 *)(puVar23 + -8) = 0x83dadf;
            FUN_00424810();
          }
          *(undefined4 *)(puVar23 + -4) = 1;
          *(int **)(puVar23 + -8) = &local_48;
          *(undefined1 ***)(puVar23 + -0xc) = &local_80;
          *(int *)(puVar23 + -0x10) = param_1;
          *(undefined4 *)(puVar23 + -0x14) = 0x83daf2;
          FUN_00836080();
          local_8 = 0xffffffff;
        }
      }
      else {
        iVar5 = *(int *)(iVar9 + 0xd8c);
        iVar29 = *(int *)(iVar9 + 0xd88);
        if (iVar29 == iVar5) goto LAB_0083da24;
        do {
          if (*(int *)(iVar29 + 4) == iVar7) break;
          iVar29 = iVar29 + 8;
        } while (iVar29 != iVar5);
        if (iVar29 == iVar5) goto LAB_0083da24;
      }
      local_2c = local_2c + 2;
      local_30 = (int *)((int)local_30 + -1);
    } while (local_30 != (int *)0x0);
  }
  ExceptionList = local_10;
  return;
}

