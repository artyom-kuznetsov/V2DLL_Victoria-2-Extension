// FUN_007ad210 @ 007ad210 body=[[007ad210, 007ad511] [007ad515, 007ad53d] [007ad541, 007ad55f] [007ad563, 007ad58a] [007ad58e, 007ad5b5] [007ad5b9, 007ad5e1] [007ad5e5, 007ad646] [007ad64a, 007ad6d0] [007ad6d4, 007ad91c] [007ad920, 007ada7b] [007ada7f, 007adac5] [007adac9, 007adae8] [007adaec, 007adb16] [007adb1a, 007adb44] [007adb48, 007adb60]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Removing unreachable block (ram,0x007ad749) */
/* WARNING: Removing unreachable block (ram,0x007ad7f5) */
/* WARNING: Type propagation algorithm not settling */

void FUN_007ad210(int param_1)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  char *pcVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  undefined1 *puVar14;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  undefined4 *puVar21;
  undefined1 *puVar22;
  int iVar23;
  int iVar24;
  int *piVar25;
  bool bVar26;
  size_t asStack_180 [4];
  uint local_160;
  uint local_14c;
  undefined1 local_144 [4];
  uint local_140;
  undefined4 local_130;
  uint local_12c;
  uint local_124 [4];
  undefined4 local_114;
  uint local_110;
  uint local_108 [4];
  undefined4 local_f8;
  uint local_f4;
  uint local_ec [4];
  undefined4 local_dc;
  uint local_d8;
  uint local_d0 [4];
  undefined4 local_c0;
  uint local_bc;
  uint local_b4;
  undefined4 local_a4;
  uint local_a0;
  undefined1 local_98 [4];
  undefined4 *local_94;
  undefined4 *local_90;
  undefined4 local_8c;
  uint local_84 [4];
  undefined4 local_74;
  uint local_70;
  int *local_68;
  undefined4 local_64;
  int local_60;
  int local_5c;
  int local_58;
  uint local_54 [4];
  undefined4 local_44;
  uint local_40;
  int *local_38;
  int local_34;
  undefined8 local_30;
  int local_24;
  int local_20;
  int local_1c;
  int *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  undefined4 *puVar13;
  undefined4 *puVar15;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b6b6f9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (DAT_0125eadc == (int *)0x0) {
    asStack_180[3] = 0x9c;
    asStack_180[2] = 0x7ad244;
    ExceptionList = &local_10;
    asStack_180[3] = FUN_00aae9af();
    local_8 = 0;
    local_24 = asStack_180[3];
    if (asStack_180[3] == 0) {
      uVar3 = 0;
    }
    else {
      asStack_180[2] = 0x7ad25b;
      uVar3 = FUN_00576fe0();
    }
    local_8 = 0xffffffff;
    asStack_180[2] = 0x7ad26c;
    asStack_180[3] = uVar3;
    FUN_0057ab10();
  }
  piVar25 = DAT_0125eadc;
  local_24 = *(int *)(DAT_0125eadc[0xe] + 4 + *(int *)(param_1 + 0xe4) * 4);
  local_64 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
  local_58 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4);
  iVar23 = DAT_0125eadc[0xf] - DAT_0125eadc[0xe] >> 2;
  local_68 = DAT_0125eadc;
  local_5c = *(int *)(local_58 + 0xbcc);
  asStack_180[3] = 0x7ad2c8;
  puVar12 = &stack0xfffffe90 + iVar23 * -8;
  asStack_180[3 - iVar23] = iVar23 * 4;
  asStack_180[2 - iVar23] = 0;
  asStack_180[1 - iVar23] = (size_t)(&stack0xfffffe90 + iVar23 * -4);
  local_30 = (double)CONCAT44(&stack0xfffffe90 + iVar23 * -4,(undefined4)local_30);
  asStack_180[-iVar23] = 0x7ad2d6;
  _memset((void *)asStack_180[1 - iVar23],asStack_180[2 - iVar23],asStack_180[3 - iVar23]);
  asStack_180[3 - iVar23] = 0x7ad2e0;
  asStack_180[iVar23 * -2 + 3] = iVar23 * 4;
  asStack_180[iVar23 * -2 + 2] = 0;
  asStack_180[iVar23 * 0xfffffffeU + 1] = (size_t)(&stack0xfffffe90 + iVar23 * -8);
  local_18 = (int *)(&stack0xfffffe90 + iVar23 * -8);
  asStack_180[iVar23 * -2] = 0x7ad2ee;
  _memset((void *)asStack_180[iVar23 * 0xfffffffeU + 1],asStack_180[iVar23 * -2 + 2],
          asStack_180[iVar23 * -2 + 3]);
  iVar24 = piVar25[1] - *piVar25 >> 2;
  iVar11 = 0;
  puVar14 = &stack0xfffffe90 + iVar23 * -8;
  if (0 < iVar24) {
    do {
      pcVar1 = *(code **)(**(int **)(*piVar25 + iVar11 * 4) + 0x20);
      puVar13 = (undefined4 *)(puVar12 + -4);
      puVar12 = puVar12 + -4;
      *puVar13 = 0x7ad30c;
      cVar2 = (*pcVar1)();
      if (cVar2 != '\0') {
        local_18[*(int *)(*(int *)(*(int *)(*piVar25 + iVar11 * 4) + 0x310) + 0x40)] =
             local_18[*(int *)(*(int *)(*(int *)(*piVar25 + iVar11 * 4) + 0x310) + 0x40)] + 1;
        iVar23 = *(int *)(*piVar25 + iVar11 * 4);
        if (*(int *)(*(int *)(local_5c + 0x2b8) + *(int *)(iVar23 + 0x2e4) * 4) != 0) {
          piVar5 = (int *)(local_30._4_4_ + *(int *)(*(int *)(iVar23 + 0x310) + 0x40) * 4);
          *piVar5 = *piVar5 + 1;
        }
      }
      iVar11 = iVar11 + 1;
      puVar14 = puVar12;
    } while (iVar11 < iVar24);
  }
  iVar11 = piVar25[0xf] - piVar25[0xe] >> 2;
  local_1c = 0;
  local_20 = 0;
  if (0 < iVar11) {
    local_34 = local_30._4_4_ - (int)local_18;
    piVar5 = local_18;
    local_60 = iVar11;
    do {
      pcVar1 = *(code **)(**(int **)(piVar25[0xe] + local_20 * 4) + 8);
      puVar15 = (undefined4 *)(puVar14 + -4);
      puVar14 = puVar14 + -4;
      local_18 = piVar5;
      *puVar15 = 0x7ad390;
      cVar2 = (*pcVar1)();
      if (cVar2 != '\0') {
        piVar25 = *(int **)(*(int *)(param_1 + 0xf8) + local_1c * 4);
        *(undefined4 *)(puVar14 + -4) = 1;
        *(undefined2 **)(puVar14 + -8) = &DAT_00dedc68;
        local_40 = 0xf;
        local_44 = 0;
        local_54[0] = local_54[0] & 0xffffff00;
        *(undefined4 *)(puVar14 + -0xc) = 0x7ad3c9;
        FUN_00409350();
        local_8 = 1;
        *(undefined4 *)(puVar14 + -4) = 0x18;
        *(char **)(puVar14 + -8) = "folder_number_discovered";
        local_d8 = 0xf;
        local_dc = 0;
        local_ec[0] = local_ec[0] & 0xffffff00;
        *(undefined4 *)(puVar14 + -0xc) = 0x7ad3f9;
        FUN_00409350();
        iVar11 = *piVar5;
        local_bc = 0xf;
        local_c0 = 0;
        local_d0[0] = local_d0[0] & 0xffffff00;
        *(undefined4 *)(puVar14 + -4) = 10;
        *(undefined1 **)(puVar14 + -8) = local_144;
        *(int *)(puVar14 + -0xc) = iVar11;
        local_8._0_1_ = 3;
        *(undefined4 *)(puVar14 + -0x10) = 0x7ad425;
        pcVar4 = __itoa(*(int *)(puVar14 + -0xc),*(char **)(puVar14 + -8),*(int *)(puVar14 + -4));
        pcVar9 = pcVar4;
        do {
          cVar2 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar2 != '\0');
        *(int *)(puVar14 + -4) = (int)pcVar9 - (int)(pcVar4 + 1);
        *(char **)(puVar14 + -8) = pcVar4;
        *(undefined4 *)(puVar14 + -0xc) = 0x7ad446;
        FUN_00409350();
        local_a0 = 0xf;
        iVar11 = *(int *)((int)piVar5 + local_34);
        local_38 = (int *)((int)piVar5 + local_34);
        local_a4 = 0;
        local_b4 = local_b4 & 0xffffff00;
        *(undefined4 *)(puVar14 + -4) = 10;
        *(undefined1 **)(puVar14 + -8) = local_144;
        *(int *)(puVar14 + -0xc) = iVar11;
        local_8._0_1_ = 5;
        *(undefined4 *)(puVar14 + -0x10) = 0x7ad47b;
        pcVar4 = __itoa(*(int *)(puVar14 + -0xc),*(char **)(puVar14 + -8),*(int *)(puVar14 + -4));
        pcVar9 = pcVar4;
        do {
          cVar2 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar2 != '\0');
        *(int *)(puVar14 + -4) = (int)pcVar9 - (int)(pcVar4 + 1);
        *(char **)(puVar14 + -8) = pcVar4;
        *(undefined4 *)(puVar14 + -0xc) = 0x7ad499;
        FUN_00409350();
        *(uint **)(puVar14 + -4) = local_54;
        local_8._0_1_ = 6;
        *(undefined4 *)(puVar14 + -8) = 0x7ad4af;
        FUN_00988f20();
        *(uint **)(puVar14 + -4) = local_d0;
        local_8._0_1_ = 7;
        *(undefined4 *)(puVar14 + -8) = 0x7ad4c7;
        uVar3 = FUN_00988f20();
        local_8 = CONCAT31(local_8._1_3_,8);
        pcVar1 = *(code **)(*piVar25 + 0x3c);
        *(uint **)(puVar14 + -4) = local_ec;
        puVar16 = puVar14 + -8;
        *(undefined4 *)(puVar14 + -8) = 0x7ad4dd;
        (*pcVar1)();
        *(undefined4 *)(puVar16 + -4) = 0xffffffff;
        *(undefined4 *)(puVar16 + -8) = 0;
        *(undefined4 *)(puVar16 + -0xc) = uVar3;
        *(undefined4 *)(puVar16 + -0x10) = 0x7ad4ef;
        FUN_00408ed0();
        *(undefined4 *)(puVar16 + -4) = 0;
        *(undefined4 *)(puVar16 + -8) = uVar3;
        *(undefined4 *)(puVar16 + -0xc) = 0x7ad4fd;
        FUN_00a5ecc0();
        if (0xf < local_14c) {
          *(uint *)(puVar16 + -4) = local_160;
                    /* WARNING: Subroutine does not return */
          *(undefined **)(puVar16 + -8) = &UNK_007ad512;
          FUN_00aae91b();
        }
        local_14c = 0xf;
        local_160 = local_160 & 0xffffff00;
        if (0xf < local_70) {
          *(uint *)(puVar16 + -4) = local_84[0];
                    /* WARNING: Subroutine does not return */
          *(undefined **)(puVar16 + -8) = &UNK_007ad53e;
          FUN_00aae91b();
        }
        local_70 = 0xf;
        local_74 = 0;
        local_84[0] = local_84[0] & 0xffffff00;
        if (0xf < local_a0) {
          *(uint *)(puVar16 + -4) = local_b4;
                    /* WARNING: Subroutine does not return */
          *(undefined **)(puVar16 + -8) = &UNK_007ad560;
          FUN_00aae91b();
        }
        local_a0 = 0xf;
        local_a4 = 0;
        local_b4 = local_b4 & 0xffffff00;
        if (0xf < local_bc) {
          *(uint *)(puVar16 + -4) = local_d0[0];
                    /* WARNING: Subroutine does not return */
          *(undefined **)(puVar16 + -8) = &UNK_007ad58b;
          FUN_00aae91b();
        }
        local_bc = 0xf;
        local_c0 = 0;
        local_d0[0] = local_d0[0] & 0xffffff00;
        if (0xf < local_d8) {
          *(uint *)(puVar16 + -4) = local_ec[0];
                    /* WARNING: Subroutine does not return */
          *(undefined **)(puVar16 + -8) = &UNK_007ad5b6;
          FUN_00aae91b();
        }
        local_8 = 0xffffffff;
        local_d8 = 0xf;
        local_dc = 0;
        local_ec[0] = local_ec[0] & 0xffffff00;
        if (0xf < local_40) {
          *(uint *)(puVar16 + -4) = local_54[0];
                    /* WARNING: Subroutine does not return */
          *(undefined **)(puVar16 + -8) = &UNK_007ad5e2;
          FUN_00aae91b();
        }
        *(undefined4 *)(puVar16 + -4) = 0xd;
        *(char **)(puVar16 + -8) = "folder_button";
        local_40 = 0xf;
        local_44 = 0;
        local_54[0] = local_54[0] & 0xffffff00;
        *(undefined4 *)(puVar16 + -0xc) = 0x7ad5fe;
        FUN_00409350();
        local_8 = 9;
        pcVar1 = *(code **)(*piVar25 + 0x34);
        *(uint **)(puVar16 + -4) = local_54;
        puVar17 = puVar16 + -8;
        *(undefined4 *)(puVar16 + -8) = 0x7ad612;
        piVar5 = (int *)(*pcVar1)();
        pcVar1 = *(code **)(*piVar5 + 0x48);
        *(uint *)(puVar17 + -4) = (local_1c == *(int *)(param_1 + 0xe4)) + 1;
        puVar18 = puVar17 + -8;
        *(undefined4 *)(puVar17 + -8) = 0x7ad62e;
        (*pcVar1)();
        local_8 = 0xffffffff;
        if (0xf < local_40) {
          *(uint *)(puVar18 + -4) = local_54[0];
                    /* WARNING: Subroutine does not return */
          *(undefined **)(puVar18 + -8) = &UNK_007ad647;
          FUN_00aae91b();
        }
        iVar11 = *local_38;
        iVar23 = *local_18;
        *(undefined4 *)(puVar18 + -4) = 0xf;
        *(char **)(puVar18 + -8) = "folder_progress";
        local_40 = 0xf;
        local_44 = 0;
        local_54[0] = local_54[0] & 0xffffff00;
        local_30 = (double)iVar11 / (double)iVar23;
        *(undefined4 *)(puVar18 + -0xc) = 0x7ad68a;
        FUN_00409350();
        local_8 = 10;
        pcVar1 = *(code **)(*piVar25 + 0x44);
        *(uint **)(puVar18 + -4) = local_54;
        puVar19 = puVar18 + -8;
        *(undefined4 *)(puVar18 + -8) = 0x7ad69e;
        iVar11 = (*pcVar1)();
        pcVar1 = *(code **)(**(int **)(iVar11 + 0x94) + 0x60);
        *(uint *)(puVar19 + -4) = (int)(local_30 * 100.0) & 0xffff;
        puVar14 = puVar19 + -8;
        *(undefined4 *)(puVar19 + -8) = 0x7ad6c0;
        (*pcVar1)();
        local_8 = 0xffffffff;
        if (0xf < local_40) {
          *(uint *)(puVar14 + -4) = local_54[0];
                    /* WARNING: Subroutine does not return */
          *(undefined **)(puVar14 + -8) = &UNK_007ad6d1;
          FUN_00aae91b();
        }
        local_1c = local_1c + 1;
        iVar11 = local_60;
        piVar5 = local_18;
        piVar25 = local_68;
      }
      local_20 = local_20 + 1;
      piVar5 = piVar5 + 1;
      local_18 = piVar5;
    } while (local_20 < iVar11);
  }
  local_60 = piVar25[8] - piVar25[7] >> 2;
  local_20 = 0;
  if (0 < local_60) {
    local_38 = (int *)(local_24 + 8);
    local_1c = 0;
    do {
      piVar5 = local_38;
      if (0xf < (uint)local_38[5]) {
        piVar5 = (int *)*local_38;
      }
      uVar6 = *(uint *)(*(int *)(piVar25[7] + local_20 * 4) + 0x54);
      local_30 = (double)CONCAT44(piVar5,(undefined4)local_30);
      uVar10 = local_38[4];
      if (uVar6 < (uint)local_38[4]) {
        uVar10 = uVar6;
      }
      *(uint *)(puVar14 + -4) = uVar10;
      *(undefined4 *)(puVar14 + -8) = 0x7ad765;
      iVar11 = FUN_00414bd0();
      bVar26 = false;
      if (iVar11 == 0) {
        if (uVar6 < (uint)local_38[4]) {
          uVar6 = 0xffffffff;
        }
        else {
          uVar6 = (uint)(uVar6 != local_38[4]);
        }
        bVar26 = uVar6 == 0;
      }
      if (bVar26) {
        *(int *)(puVar14 + -4) = *(int *)(param_1 + 0xe8) + local_1c;
        local_34 = 0;
        *(undefined4 *)(puVar14 + -8) = 0x7ad7aa;
        FUN_007a9630();
        local_18 = (int *)0x0;
        local_24 = piVar25[1] - *piVar25 >> 2;
        if (0 < local_24) {
          do {
            uVar6 = *(uint *)(*(int *)(piVar25[7] + local_20 * 4) + 0x18);
            local_30 = (double)CONCAT44(uVar6,(undefined4)local_30);
            uVar10 = *(uint *)(*(int *)(*piVar25 + (int)local_18 * 4) + 0x324);
            if (uVar10 < uVar6) {
              uVar6 = uVar10;
            }
            *(uint *)(puVar14 + -4) = uVar6;
            *(undefined4 *)(puVar14 + -8) = 0x7ad811;
            iVar7 = FUN_00414bd0();
            iVar24 = local_34;
            iVar23 = local_58;
            iVar11 = local_5c;
            bVar26 = false;
            if (iVar7 == 0) {
              if (uVar10 < local_30._4_4_) {
                uVar6 = 0xffffffff;
              }
              else {
                uVar6 = (uint)(uVar10 != local_30._4_4_);
              }
              bVar26 = uVar6 == 0;
            }
            if (bVar26) {
              *(int *)(puVar14 + -4) = local_34;
              *(int *)(puVar14 + -8) = iVar11;
              *(int *)(puVar14 + -0xc) = iVar23;
              *(undefined4 *)(puVar14 + -0x10) = 0x7ad855;
              FUN_007a9700();
              local_34 = iVar24 + 1;
            }
            local_18 = (int *)((int)local_18 + 1);
          } while ((int)local_18 < local_24);
        }
        local_1c = local_1c + 0x24;
      }
      local_20 = local_20 + 1;
    } while (local_20 < local_60);
  }
  if (*(char *)(local_58 + 0x12d0) == '\0') {
    *(undefined4 *)(puVar14 + -4) = 0x22;
    *(char **)(puVar14 + -8) = "DIPLOMACY_UNCIVILIZEDNATION_STATUS";
    local_110 = 0xf;
    local_114 = 0;
    local_124[0] = local_124[0] & 0xffffff00;
    *(undefined4 *)(puVar14 + -0xc) = 0x7ad96b;
    FUN_00409350();
    local_8 = 0xd;
    *(undefined4 *)(puVar14 + -4) = 0x13;
    *(char **)(puVar14 + -8) = "administration_type";
    local_f4 = 0xf;
    local_f8 = 0;
    local_108[0] = local_108[0] & 0xffffff00;
    *(undefined4 *)(puVar14 + -0xc) = 0x7ad996;
    FUN_00409350();
    *(uint **)(puVar14 + -4) = local_124;
    *(undefined1 **)(puVar14 + -8) = local_98;
    local_8._0_1_ = 0xe;
    *(undefined4 *)(puVar14 + -0xc) = 0x7ad9ad;
    FUN_009a8ee0();
    local_8._0_1_ = 0xf;
    puVar8 = DAT_0125b5e0;
    if (DAT_0125b5e0 == (undefined4 *)0x0) {
      *(undefined4 *)(puVar14 + -4) = 0x180;
      *(undefined4 *)(puVar14 + -8) = 0x7ad9c6;
      local_24 = FUN_00aae9af();
      local_8._0_1_ = 0x10;
      if (local_24 == 0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        *(int *)(puVar14 + -4) = local_24;
        *(undefined4 *)(puVar14 + -8) = 0x7ad9da;
        puVar8 = (undefined4 *)FUN_00475150();
      }
      local_8._0_1_ = 0x11;
      local_24 = 0;
      if ((puVar8 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
        pcVar1 = *(code **)*DAT_0125b5e0;
        *(undefined4 *)(puVar14 + -4) = 1;
        puVar21 = (undefined4 *)(puVar14 + -8);
        puVar14 = puVar14 + -8;
        *puVar21 = 0x7ad9fd;
        (*pcVar1)();
      }
    }
    DAT_0125b5e0 = puVar8;
    local_8._0_1_ = 0xf;
    *(undefined8 *)(puVar14 + -0x10) = *(undefined8 *)(DAT_0125b5e0 + 0x1b);
    *(undefined8 *)(puVar14 + -8) = *(undefined8 *)(DAT_0125b5e0 + 0x1d);
    *(undefined4 *)(puVar14 + -0x14) = 0x7ada2d;
    uVar3 = FUN_009a9880();
    local_8._0_1_ = 0x12;
    pcVar1 = *(code **)(**(int **)(param_1 + 0x4c) + 0x3c);
    *(uint **)(puVar14 + -4) = local_108;
    puVar22 = puVar14 + -8;
    *(undefined4 *)(puVar14 + -8) = 0x7ada47;
    (*pcVar1)();
    *(undefined4 *)(puVar22 + -4) = 0xffffffff;
    *(undefined4 *)(puVar22 + -8) = 0;
    *(undefined4 *)(puVar22 + -0xc) = uVar3;
    *(undefined4 *)(puVar22 + -0x10) = 0x7ada5a;
    FUN_00408ed0();
    *(undefined4 *)(puVar22 + -4) = 0;
    *(undefined4 *)(puVar22 + -8) = uVar3;
    *(undefined4 *)(puVar22 + -0xc) = 0x7ada67;
    FUN_00a5ecc0();
    if (0xf < local_12c) {
      *(uint *)(puVar22 + -4) = local_140;
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar22 + -8) = &UNK_007ada7c;
      FUN_00aae91b();
    }
    local_12c = 0xf;
    local_130 = 0;
    local_140 = local_140 & 0xffffff00;
    local_8 = CONCAT31(local_8._1_3_,0x13);
    *(undefined4 *)(puVar22 + -4) = 0x7adaa4;
    FUN_009adb70();
    puVar8 = local_94;
    if (local_94 != (undefined4 *)0x0) {
      while( true ) {
        if (puVar8 == local_90) {
          *(undefined4 **)(puVar22 + -4) = local_94;
                    /* WARNING: Subroutine does not return */
          *(undefined **)(puVar22 + -8) = &UNK_007adae9;
          FUN_00aae91b();
        }
        if (0xf < (uint)puVar8[5]) break;
        puVar8[5] = 0xf;
        puVar8[4] = 0;
        *(undefined1 *)puVar8 = 0;
        puVar8 = puVar8 + 8;
      }
      *(undefined4 *)(puVar22 + -4) = *puVar8;
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar22 + -8) = &UNK_007adac6;
      FUN_00aae91b();
    }
    local_94 = (undefined4 *)0x0;
    local_90 = (undefined4 *)0x0;
    local_8c = 0;
    if (0xf < local_f4) {
      *(uint *)(puVar22 + -4) = local_108[0];
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar22 + -8) = &UNK_007adb17;
      FUN_00aae91b();
    }
    local_f4 = 0xf;
    local_f8 = 0;
    local_108[0] = local_108[0] & 0xffffff00;
    if (local_110 < 0x10) {
      ExceptionList = local_10;
      return;
    }
    *(uint *)(puVar22 + -4) = local_124[0];
  }
  else {
    *(undefined4 *)(puVar14 + -4) = 0x13;
    *(char **)(puVar14 + -8) = "administration_type";
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = local_54[0] & 0xffffff00;
    *(undefined4 *)(puVar14 + -0xc) = 0x7ad8af;
    FUN_00409350();
    local_8 = 0xb;
    pcVar1 = *(code **)(**(int **)(piVar25[0x20] + *(int *)(local_58 + 0xe40) * 4) + 0x18);
    *(uint **)(puVar14 + -4) = local_84;
    puVar20 = puVar14 + -8;
    *(undefined4 *)(puVar14 + -8) = 0x7ad8d3;
    uVar3 = (*pcVar1)();
    local_8 = CONCAT31(local_8._1_3_,0xc);
    pcVar1 = *(code **)(**(int **)(param_1 + 0x4c) + 0x3c);
    *(uint **)(puVar20 + -4) = local_54;
    puVar22 = puVar20 + -8;
    *(undefined4 *)(puVar20 + -8) = 0x7ad8ea;
    (*pcVar1)();
    *(undefined4 *)(puVar22 + -4) = 0xffffffff;
    *(undefined4 *)(puVar22 + -8) = 0;
    *(undefined4 *)(puVar22 + -0xc) = uVar3;
    *(undefined4 *)(puVar22 + -0x10) = 0x7ad8fc;
    FUN_00408ed0();
    *(undefined4 *)(puVar22 + -4) = 0;
    *(undefined4 *)(puVar22 + -8) = uVar3;
    *(undefined4 *)(puVar22 + -0xc) = 0x7ad90a;
    FUN_00a5ecc0();
    if (0xf < local_70) {
      *(uint *)(puVar22 + -4) = local_84[0];
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar22 + -8) = &UNK_007ad91d;
      FUN_00aae91b();
    }
    local_70 = 0xf;
    local_74 = 0;
    local_84[0] = local_84[0] & 0xffffff00;
    if (local_40 < 0x10) {
      ExceptionList = local_10;
      return;
    }
    *(uint *)(puVar22 + -4) = local_54[0];
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar22 + -8) = &UNK_007adb45;
  FUN_00aae91b();
}

