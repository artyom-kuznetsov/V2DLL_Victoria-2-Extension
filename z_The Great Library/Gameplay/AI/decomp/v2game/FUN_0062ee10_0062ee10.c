// FUN_0062ee10 @ 0062ee10 body=[[0062ee10, 0062eec3] [0062eec7, 0062ef2b] [0062ef2f, 0062efdf] [0062efe3, 0062f04c] [0062f050, 0062f088] [0062f090, 0062f274] [0062f278, 0062f2d6] [0062f2da, 0062f344] [0062f348, 0062f3f7] [0062f3fb, 0062f462] [0062f466, 0062f56f] [0062f573, 0062f59c] [0062f5a0, 0062f5c3] [0062f5c7, 0062f5eb] [0062f5ef, 0062f651] [0062f655, 0062f6da] [0062f6de, 0062f7a9]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Type propagation algorithm not settling */

void FUN_0062ee10(int param_1)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int *piVar9;
  char *pcVar10;
  undefined4 uVar11;
  undefined4 extraout_ECX;
  char *pcVar12;
  undefined4 extraout_ECX_00;
  int *piVar13;
  undefined1 *puVar14;
  undefined4 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  undefined1 *puVar27;
  undefined1 *puVar28;
  undefined1 *puVar29;
  undefined1 *puVar30;
  undefined1 *puVar31;
  undefined1 *puVar32;
  undefined1 *puVar33;
  undefined1 *puVar34;
  undefined1 *puVar35;
  undefined4 *puVar36;
  undefined1 *puVar37;
  bool bVar38;
  float10 fVar39;
  int aiStack_180 [4];
  undefined4 uStack_170;
  undefined1 local_160 [32];
  undefined1 local_140 [32];
  uint local_120;
  undefined4 local_110;
  uint local_10c;
  uint local_104 [4];
  undefined4 local_f4;
  uint local_f0;
  uint local_e8 [4];
  undefined4 local_d8;
  uint local_d4;
  uint local_cc;
  undefined4 local_bc;
  uint local_b8;
  uint local_b0 [4];
  undefined4 local_a0;
  uint local_9c;
  undefined1 *local_94;
  uint local_90 [4];
  undefined4 local_80;
  uint local_7c;
  int *local_74;
  float local_70;
  int local_6c;
  int local_68;
  int local_64;
  int *local_60;
  int local_5c;
  uint local_58 [4];
  undefined4 local_48;
  uint local_44;
  uint local_3c [4];
  undefined4 local_2c;
  uint local_28;
  int *local_20;
  char local_19;
  int *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4c97f;
  local_10 = ExceptionList;
  local_14 = 0;
  piVar6 = DAT_012588e8 + 0x2d7;
  uStack_170 = 0x62ee4c;
  ExceptionList = &local_10;
  local_74 = piVar6;
  iVar5 = (**(code **)(*DAT_012588e8 + 0x1c))();
  uStack_170 = 0x62ee55;
  aiStack_180[4 - iVar5] = (int)&local_6c;
  aiStack_180[3 - iVar5] = (int)(local_160 + iVar5 * -4 + -0xc);
  aiStack_180[2 - iVar5] = (int)(DAT_012588e8 + 0x2b7);
  aiStack_180[1 - iVar5] = (int)piVar6;
  local_6c = 0;
  local_94 = local_160 + iVar5 * -4 + -0xc;
  aiStack_180[-iVar5] = 0x62ee78;
  FUN_0061aff0();
  aiStack_180[4 - iVar5] = 0xb;
  aiStack_180[3 - iVar5] = (int)"cb_info_win";
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  aiStack_180[2 - iVar5] = 0x62ee98;
  FUN_00409350();
  local_8 = 0;
  pcVar2 = *(code **)(**(int **)(param_1 + 0x4c) + 0x6c);
  aiStack_180[4 - iVar5] = (int)local_3c;
  piVar13 = aiStack_180 + (3 - iVar5);
  aiStack_180[3 - iVar5] = 0x62eeac;
  piVar6 = (int *)(*pcVar2)();
  local_8 = 0xffffffff;
  if (0xf < local_28) {
    *(uint *)((int)piVar13 + -4) = local_3c[0];
                    /* WARNING: Subroutine does not return */
    *(undefined **)((int)piVar13 + -8) = &UNK_0062eec4;
    FUN_00aae91b();
  }
  *(undefined4 *)((int)piVar13 + -4) = 10;
  *(char **)((int)piVar13 + -8) = "cb_listbox";
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  local_d4 = 0xf;
  local_d8 = 0;
  local_e8[0] = local_e8[0] & 0xffffff00;
  *(undefined4 *)((int)piVar13 + -0xc) = 0x62eef4;
  FUN_00409350();
  local_8 = 1;
  pcVar2 = *(code **)(*piVar6 + 0x7c);
  *(uint **)((int)piVar13 + -4) = local_e8;
  puVar14 = (undefined1 *)((int)piVar13 + -8);
  *(undefined4 *)((int)piVar13 + -8) = 0x62ef0b;
  piVar6 = (int *)(*pcVar2)();
  local_8 = 0xffffffff;
  local_60 = piVar6;
  if (0xf < local_d4) {
    *(uint *)(puVar14 + -4) = local_e8[0];
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar14 + -8) = &UNK_0062ef2c;
    FUN_00aae91b();
  }
  local_d4 = 0xf;
  local_d8 = 0;
  local_e8[0] = local_e8[0] & 0xffffff00;
  if (piVar6[0x41] == 0) {
    local_70 = DAT_00f092dc;
  }
  else {
    pcVar2 = *(code **)(*(int *)(piVar6[0x41] + 0x54) + 0x10);
    puVar15 = (undefined4 *)(puVar14 + -4);
    puVar14 = puVar14 + -4;
    *puVar15 = 0x62ef5a;
    fVar39 = (float10)(*pcVar2)();
    local_70 = (float)fVar39;
  }
  pcVar2 = *(code **)(*piVar6 + 0x54);
  puVar16 = puVar14 + -4;
  *(undefined4 *)(puVar14 + -4) = 0x62ef75;
  (*pcVar2)();
  pcVar2 = *(code **)(*piVar6 + 0x2c);
  puVar17 = puVar16 + -4;
  *(undefined4 *)(puVar16 + -4) = 0x62ef7e;
  puVar7 = (undefined4 *)(*pcVar2)();
  puVar7 = (undefined4 *)*puVar7;
  while (puVar7 != (undefined4 *)0x0) {
    piVar9 = (int *)*puVar7;
    puVar7 = (undefined4 *)puVar7[2];
    *(undefined4 *)(puVar17 + -4) = 9;
    local_20 = piVar9;
    *(char **)(puVar17 + -8) = "attackers";
    local_28 = 0xf;
    local_2c = 0;
    local_3c[0] = local_3c[0] & 0xffffff00;
    *(undefined4 *)(puVar17 + -0xc) = 0x62efac;
    FUN_00409350();
    local_8 = 2;
    pcVar2 = *(code **)(*(int *)local_20[8] + 0x9c);
    *(uint **)(puVar17 + -4) = local_3c;
    puVar18 = puVar17 + -8;
    *(undefined4 *)(puVar17 + -8) = 0x62efc7;
    local_18 = (int *)(*pcVar2)();
    local_8 = 0xffffffff;
    if (0xf < local_28) {
      *(uint *)(puVar18 + -4) = local_3c[0];
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar18 + -8) = &UNK_0062efe0;
      FUN_00aae91b();
    }
    *(int **)(puVar18 + -4) = local_18;
    *(int *)(puVar18 + -8) = param_1;
    local_28 = 0xf;
    local_2c = 0;
    local_3c[0] = local_3c[0] & 0xffffff00;
    *(undefined4 *)(puVar18 + -0xc) = 0x62effd;
    FUN_0062fc70();
    *(undefined4 *)(puVar18 + -4) = 9;
    *(char **)(puVar18 + -8) = "defenders";
    local_28 = 0xf;
    local_2c = 0;
    local_3c[0] = local_3c[0] & 0xffffff00;
    *(undefined4 *)(puVar18 + -0xc) = 0x62f019;
    FUN_00409350();
    local_8 = 3;
    pcVar2 = *(code **)(*(int *)local_20[8] + 0x9c);
    *(uint **)(puVar18 + -4) = local_3c;
    puVar17 = puVar18 + -8;
    *(undefined4 *)(puVar18 + -8) = 0x62f034;
    local_18 = (int *)(*pcVar2)();
    local_8 = 0xffffffff;
    if (0xf < local_28) {
      *(uint *)(puVar17 + -4) = local_3c[0];
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar17 + -8) = &UNK_0062f04d;
      FUN_00aae91b();
    }
    *(int **)(puVar17 + -4) = local_18;
    *(int *)(puVar17 + -8) = param_1;
    local_28 = 0xf;
    local_2c = 0;
    local_3c[0] = local_3c[0] & 0xffffff00;
    *(undefined4 *)(puVar17 + -0xc) = 0x62f06a;
    FUN_0062fc70();
  }
  pcVar2 = *(code **)(*piVar6 + 0x5c);
  puVar19 = puVar17 + -4;
  *(undefined4 *)(puVar17 + -4) = 0x62f07b;
  (*pcVar2)();
  local_5c = 0;
  uVar8 = extraout_ECX;
  if (0 < local_6c) {
    do {
      local_68 = *(int *)(local_94 + local_5c * 4);
      bVar38 = *(int *)(local_68 + 0x20) == local_74[1];
      local_64 = *(int *)(local_68 + 0x156c);
      local_19 = bVar38;
      *(undefined4 *)(puVar19 + -4) = 0x28;
      if (bVar38) {
        *(undefined4 *)(puVar19 + -8) = 0x62f0c6;
        puVar7 = (undefined4 *)FUN_00aae9af();
        local_8 = 4;
        local_18 = puVar7;
        if (puVar7 == (undefined4 *)0x0) {
          puVar7 = (undefined4 *)0x0;
        }
        else {
          *(undefined4 *)(puVar19 + -4) = 0x18;
          *(char **)(puVar19 + -8) = "diplomacy_cb_info_player";
          local_44 = 0xf;
          local_48 = 0;
          local_58[0] = local_58[0] & 0xffffff00;
          *(undefined4 *)(puVar19 + -0xc) = 0x62f0f9;
          FUN_00409350();
          piVar6 = DAT_01258a80;
          local_8 = CONCAT31(local_8._1_3_,5);
          pcVar2 = *(code **)(*(int *)DAT_012588e8[0x2c9] + 0x3c);
          local_14 = local_14 | 1;
          puVar20 = puVar19 + -4;
          *(undefined4 *)(puVar19 + -4) = 0x62f11a;
          uVar8 = (*pcVar2)();
          puVar7[1] = 0;
          puVar7[2] = 0;
          puVar7[3] = 0;
          *(undefined1 *)(puVar7 + 4) = 0;
          DAT_013f08e0 = DAT_013f08e0 + 1;
          *(undefined1 *)(puVar7 + 5) = 0;
          *(undefined1 *)(puVar7 + 6) = 0;
          puVar7[7] = &PTR_FUN_00e39158;
          local_8 = 9;
          *(undefined4 *)(puVar20 + -4) = uVar8;
          *puVar7 = &PTR_FUN_00e392f0;
          puVar7[7] = &PTR_FUN_00e39320;
          *(undefined1 *)(puVar7 + 9) = 0;
          pcVar2 = *(code **)(*piVar6 + 0x2c);
          *(uint **)(puVar20 + -8) = local_58;
          puVar19 = puVar20 + -0xc;
          *(undefined4 *)(puVar20 + -0xc) = 0x62f162;
          uVar8 = (*pcVar2)();
          puVar7[8] = uVar8;
          piVar6 = local_60;
        }
        local_8 = 10;
        pcVar2 = *(code **)(*piVar6 + 0x10);
        *(undefined4 *)(puVar19 + -4) = 0;
        *(undefined4 **)(puVar19 + -8) = puVar7;
        puVar22 = puVar19 + -0xc;
        *(undefined4 *)(puVar19 + -0xc) = 0x62f17e;
        (*pcVar2)();
        if ((local_14 & 1) != 0) {
          local_14 = local_14 & 0xfffffffe;
LAB_0062f266:
          local_8 = 0xffffffff;
          if (0xf < local_44) {
            *(uint *)(puVar22 + -4) = local_58[0];
                    /* WARNING: Subroutine does not return */
            *(undefined **)(puVar22 + -8) = &UNK_0062f275;
            FUN_00aae91b();
          }
        }
      }
      else {
        *(undefined4 *)(puVar19 + -8) = 0x62f19d;
        puVar7 = (undefined4 *)FUN_00aae9af();
        local_8 = 0xb;
        local_18 = puVar7;
        if (puVar7 == (undefined4 *)0x0) {
          puVar7 = (undefined4 *)0x0;
        }
        else {
          *(undefined4 *)(puVar19 + -4) = 0x11;
          *(char **)(puVar19 + -8) = "diplomacy_cb_info";
          local_44 = 0xf;
          local_48 = 0;
          local_58[0] = local_58[0] & 0xffffff00;
          *(undefined4 *)(puVar19 + -0xc) = 0x62f1d0;
          FUN_00409350();
          piVar6 = DAT_01258a80;
          local_8 = CONCAT31(local_8._1_3_,0xc);
          pcVar2 = *(code **)(*(int *)DAT_012588e8[0x2c9] + 0x3c);
          local_14 = local_14 | 2;
          puVar21 = puVar19 + -4;
          *(undefined4 *)(puVar19 + -4) = 0x62f1f1;
          uVar8 = (*pcVar2)();
          puVar7[1] = 0;
          puVar7[2] = 0;
          puVar7[3] = 0;
          *(undefined1 *)(puVar7 + 4) = 0;
          DAT_013f08e0 = DAT_013f08e0 + 1;
          *(undefined1 *)(puVar7 + 5) = 0;
          *(undefined1 *)(puVar7 + 6) = 0;
          puVar7[7] = &PTR_FUN_00e39158;
          local_8 = 0x10;
          *(undefined4 *)(puVar21 + -4) = uVar8;
          *puVar7 = &PTR_FUN_00e392f0;
          puVar7[7] = &PTR_FUN_00e39320;
          *(undefined1 *)(puVar7 + 9) = 0;
          pcVar2 = *(code **)(*piVar6 + 0x2c);
          *(uint **)(puVar21 + -8) = local_58;
          puVar19 = puVar21 + -0xc;
          *(undefined4 *)(puVar21 + -0xc) = 0x62f239;
          uVar8 = (*pcVar2)();
          puVar7[8] = uVar8;
          piVar6 = local_60;
        }
        local_8 = 0x11;
        pcVar2 = *(code **)(*piVar6 + 0x10);
        *(undefined4 *)(puVar19 + -4) = 0;
        *(undefined4 **)(puVar19 + -8) = puVar7;
        puVar22 = puVar19 + -0xc;
        *(undefined4 *)(puVar19 + -0xc) = 0x62f255;
        (*pcVar2)();
        if ((local_14 & 2) != 0) {
          local_14 = local_14 & 0xfffffffd;
          goto LAB_0062f266;
        }
      }
      local_8 = 0xffffffff;
      pcVar2 = *(code **)(*piVar6 + 0x2c);
      puVar23 = puVar22 + -4;
      *(undefined4 *)(puVar22 + -4) = 0x62f281;
      iVar5 = (*pcVar2)();
      piVar6 = *(int **)(**(int **)(iVar5 + 4) + 0x20);
      *(undefined4 *)(puVar23 + -4) = 9;
      *(char **)(puVar23 + -8) = "attackers";
      local_28 = 0xf;
      local_2c = 0;
      local_3c[0] = local_3c[0] & 0xffffff00;
      *(undefined4 *)(puVar23 + -0xc) = 0x62f2a5;
      FUN_00409350();
      local_8 = 0x12;
      pcVar2 = *(code **)(*piVar6 + 0x9c);
      *(uint **)(puVar23 + -4) = local_3c;
      puVar24 = puVar23 + -8;
      *(undefined4 *)(puVar23 + -8) = 0x62f2bc;
      piVar9 = (int *)(*pcVar2)();
      local_8 = 0xffffffff;
      local_18 = piVar9;
      if (0xf < local_28) {
        *(uint *)(puVar24 + -4) = local_3c[0];
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar24 + -8) = &UNK_0062f2d7;
        FUN_00aae91b();
      }
      *(undefined4 *)(puVar24 + -4) = 9;
      *(char **)(puVar24 + -8) = "defenders";
      local_28 = 0xf;
      local_2c = 0;
      local_3c[0] = local_3c[0] & 0xffffff00;
      local_f0 = 0xf;
      local_f4 = 0;
      local_104[0] = local_104[0] & 0xffffff00;
      *(undefined4 *)(puVar24 + -0xc) = 0x62f30c;
      FUN_00409350();
      local_8 = 0x13;
      pcVar2 = *(code **)(*piVar6 + 0x9c);
      *(uint **)(puVar24 + -4) = local_104;
      puVar25 = puVar24 + -8;
      *(undefined4 *)(puVar24 + -8) = 0x62f326;
      local_20 = (int *)(*pcVar2)();
      iVar5 = local_68;
      local_8 = 0xffffffff;
      if (0xf < local_f0) {
        *(uint *)(puVar25 + -4) = local_104[0];
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar25 + -8) = &UNK_0062f345;
        FUN_00aae91b();
      }
      iVar3 = *piVar9;
      *(undefined4 *)(puVar25 + -4) = 0;
      *(int *)(puVar25 + -8) = iVar5 + 0x1c;
      *(int *)(puVar25 + -0xc) = param_1;
      local_f0 = 0xf;
      local_f4 = 0;
      local_104[0] = local_104[0] & 0xffffff00;
      *(undefined4 *)(puVar25 + -0x10) = 0x62f371;
      uVar8 = FUN_0062f9c0();
      *(undefined4 *)(puVar25 + -8) = uVar8;
      pcVar2 = *(code **)(iVar3 + 0xb4);
      puVar26 = puVar25 + -0xc;
      *(undefined4 *)(puVar25 + -0xc) = 0x62f37d;
      (*pcVar2)();
      iVar3 = local_64;
      iVar5 = *local_20;
      *(undefined4 *)(puVar26 + -4) = 0;
      *(int *)(puVar26 + -8) = iVar3 + 0x10;
      *(int *)(puVar26 + -0xc) = param_1;
      *(undefined4 *)(puVar26 + -0x10) = 0x62f393;
      uVar8 = FUN_0062f9c0();
      pcVar2 = *(code **)(iVar5 + 0xb4);
      *(undefined4 *)(puVar26 + -8) = uVar8;
      puVar27 = puVar26 + -0xc;
      *(undefined4 *)(puVar26 + -0xc) = 0x62f39f;
      (*pcVar2)();
      *(undefined4 *)(puVar27 + -4) = 0xc;
      *(char **)(puVar27 + -8) = "cb_type_icon";
      local_44 = 0xf;
      local_48 = 0;
      local_58[0] = local_58[0] & 0xffffff00;
      *(undefined4 *)(puVar27 + -0xc) = 0x62f3bb;
      FUN_00409350();
      local_8 = 0x14;
      pcVar2 = *(code **)(*piVar6 + 0x44);
      *(uint **)(puVar27 + -4) = local_58;
      puVar28 = puVar27 + -8;
      *(undefined4 *)(puVar27 + -8) = 0x62f3cf;
      piVar9 = (int *)(*pcVar2)();
      iVar3 = local_64;
      iVar5 = *piVar9;
      *(undefined4 *)(puVar28 + -4) = *(undefined4 *)(*(int *)(local_64 + 8) + 0xc);
      pcVar2 = *(code **)(iVar5 + 0x48);
      puVar29 = puVar28 + -8;
      *(undefined4 *)(puVar28 + -8) = 0x62f3e2;
      (*pcVar2)();
      local_8 = 0xffffffff;
      if (0xf < local_44) {
        *(uint *)(puVar29 + -4) = local_58[0];
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar29 + -8) = &UNK_0062f3f8;
        FUN_00aae91b();
      }
      *(undefined4 *)(puVar29 + -4) = 0xb;
      *(char **)(puVar29 + -8) = "cb_progress";
      local_44 = 0xf;
      local_48 = 0;
      local_58[0] = local_58[0] & 0xffffff00;
      *(undefined4 *)(puVar29 + -0xc) = 0x62f417;
      FUN_00409350();
      local_8 = 0x15;
      pcVar2 = *(code **)(*piVar6 + 0x44);
      *(uint **)(puVar29 + -4) = local_58;
      puVar30 = puVar29 + -8;
      *(undefined4 *)(puVar29 + -8) = 0x62f42b;
      iVar5 = (*pcVar2)();
      pcVar2 = *(code **)(**(int **)(iVar5 + 0x94) + 0x60);
      *(int *)(puVar30 + -4) = *(int *)(iVar3 + 0xc) / 1000;
      puVar31 = puVar30 + -8;
      *(undefined4 *)(puVar30 + -8) = 0x62f44d;
      (*pcVar2)();
      local_8 = 0xffffffff;
      if (0xf < local_44) {
        *(uint *)(puVar31 + -4) = local_58[0];
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar31 + -8) = &UNK_0062f463;
        FUN_00aae91b();
      }
      *(undefined4 *)(puVar31 + -4) = 1;
      *(undefined **)(puVar31 + -8) = &DAT_00df9644;
      local_7c = 0xf;
      local_80 = 0;
      local_90[0] = local_90[0] & 0xffffff00;
      *(undefined4 *)(puVar31 + -0xc) = 0x62f489;
      FUN_00409350();
      local_8 = 0x16;
      *(undefined4 *)(puVar31 + -4) = 0x10;
      *(char **)(puVar31 + -8) = "cb_progress_text";
      local_44 = 0xf;
      local_48 = 0;
      local_58[0] = local_58[0] & 0xffffff00;
      *(undefined4 *)(puVar31 + -0xc) = 0x62f4a8;
      FUN_00409350();
      iVar5 = *(int *)(local_64 + 0xc);
      local_b8 = 0xf;
      local_bc = 0;
      local_cc = local_cc & 0xffffff00;
      *(undefined4 *)(puVar31 + -4) = 10;
      *(undefined1 **)(puVar31 + -8) = local_140;
      *(int *)(puVar31 + -0xc) = iVar5 / 1000;
      local_8._0_1_ = 0x18;
      *(undefined4 *)(puVar31 + -0x10) = 0x62f4e4;
      pcVar10 = __itoa(*(int *)(puVar31 + -0xc),*(char **)(puVar31 + -8),*(int *)(puVar31 + -4));
      pcVar12 = pcVar10;
      do {
        cVar1 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar1 != '\0');
      *(int *)(puVar31 + -4) = (int)pcVar12 - (int)(pcVar10 + 1);
      *(char **)(puVar31 + -8) = pcVar10;
      *(undefined4 *)(puVar31 + -0xc) = 0x62f506;
      FUN_00409350();
      *(uint **)(puVar31 + -4) = local_90;
      local_8._0_1_ = 0x19;
      *(undefined4 *)(puVar31 + -8) = 0x62f522;
      uVar8 = FUN_00988f20();
      local_8 = CONCAT31(local_8._1_3_,0x1a);
      pcVar2 = *(code **)(*piVar6 + 0x3c);
      *(uint **)(puVar31 + -4) = local_58;
      puVar32 = puVar31 + -8;
      *(undefined4 *)(puVar31 + -8) = 0x62f535;
      uVar11 = (*pcVar2)();
      *(undefined4 *)(puVar32 + -4) = 0xffffffff;
      *(undefined4 *)(puVar32 + -8) = 0;
      *(undefined4 *)(puVar32 + -0xc) = uVar8;
      local_68 = uVar11;
      *(undefined4 *)(puVar32 + -0x10) = 0x62f547;
      FUN_00408ed0();
      *(undefined4 *)(puVar32 + -4) = 0;
      *(undefined4 *)(puVar32 + -8) = uVar8;
      *(undefined4 *)(puVar32 + -0xc) = 0x62f557;
      FUN_00a5ecc0();
      if (0xf < local_10c) {
        *(uint *)(puVar32 + -4) = local_120;
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar32 + -8) = &UNK_0062f570;
        FUN_00aae91b();
      }
      local_10c = 0xf;
      local_110 = 0;
      local_120 = local_120 & 0xffffff00;
      if (0xf < local_b8) {
        *(uint *)(puVar32 + -4) = local_cc;
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar32 + -8) = &UNK_0062f59d;
        FUN_00aae91b();
      }
      local_b8 = 0xf;
      local_bc = 0;
      local_cc = local_cc & 0xffffff00;
      if (0xf < local_44) {
        *(uint *)(puVar32 + -4) = local_58[0];
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar32 + -8) = &UNK_0062f5c4;
        FUN_00aae91b();
      }
      local_8 = 0xffffffff;
      local_44 = 0xf;
      local_48 = 0;
      local_58[0] = local_58[0] & 0xffffff00;
      if (0xf < local_7c) {
        *(uint *)(puVar32 + -4) = local_90[0];
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar32 + -8) = &UNK_0062f5ec;
        FUN_00aae91b();
      }
      if (local_19 != '\0') {
        *(undefined4 *)(puVar32 + -4) = 6;
        *(char **)(puVar32 + -8) = "cancel";
        local_7c = 0xf;
        local_80 = 0;
        local_90[0] = local_90[0] & 0xffffff00;
        *(undefined4 *)(puVar32 + -0xc) = 0x62f616;
        FUN_00409350();
        local_8 = 0x1b;
        pcVar2 = *(code **)(*piVar6 + 0x34);
        *(uint **)(puVar32 + -4) = local_90;
        puVar33 = puVar32 + -8;
        *(undefined4 *)(puVar32 + -8) = 0x62f62d;
        iVar5 = (*pcVar2)();
        pcVar2 = *(code **)(*(int *)(iVar5 + 0x54) + 4);
        *(int *)(puVar33 + -4) = param_1 + 0x280;
        puVar32 = puVar33 + -8;
        *(undefined4 *)(puVar33 + -8) = 0x62f641;
        (*pcVar2)();
        if (0xf < local_7c) {
          *(uint *)(puVar32 + -4) = local_90[0];
                    /* WARNING: Subroutine does not return */
          *(undefined **)(puVar32 + -8) = &UNK_0062f652;
          FUN_00aae91b();
        }
      }
      iVar5 = local_5c;
      local_9c = 0xf;
      local_a0 = 0;
      local_b0[0] = local_b0[0] & 0xffffff00;
      *(undefined4 *)(puVar32 + -4) = 10;
      *(undefined1 **)(puVar32 + -8) = local_160;
      *(int *)(puVar32 + -0xc) = iVar5;
      local_8 = 0x1c;
      *(undefined4 *)(puVar32 + -0x10) = 0x62f684;
      pcVar10 = __itoa(*(int *)(puVar32 + -0xc),*(char **)(puVar32 + -8),*(int *)(puVar32 + -4));
      pcVar12 = pcVar10;
      do {
        cVar1 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar1 != '\0');
      *(int *)(puVar32 + -4) = (int)pcVar12 - (int)(pcVar10 + 1);
      *(char **)(puVar32 + -8) = pcVar10;
      *(undefined4 *)(puVar32 + -0xc) = 0x62f6a6;
      FUN_00409350();
      local_8 = 0x1d;
      pcVar2 = *(code **)(piVar6[6] + 0x78);
      *(uint **)(puVar32 + -4) = local_b0;
      puVar34 = puVar32 + -8;
      *(undefined4 *)(puVar32 + -8) = 0x62f6bf;
      (*pcVar2)();
      local_8 = 0xffffffff;
      if (0xf < local_9c) {
        *(uint *)(puVar34 + -4) = local_b0[0];
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar34 + -8) = &UNK_0062f6db;
        FUN_00aae91b();
      }
      pcVar2 = *(code **)(*local_18 + 0xe4);
      local_9c = 0xf;
      local_a0 = 0;
      local_b0[0] = local_b0[0] & 0xffffff00;
      puVar35 = puVar34 + -4;
      *(undefined4 *)(puVar34 + -4) = 0x62f701;
      (*pcVar2)();
      pcVar2 = *(code **)(*local_20 + 0xe4);
      puVar19 = puVar35 + -4;
      *(undefined4 *)(puVar35 + -4) = 0x62f70e;
      (*pcVar2)();
      local_5c = local_5c + 1;
      uVar8 = extraout_ECX_00;
      piVar6 = local_60;
    } while (local_5c < local_6c);
  }
  fVar4 = local_70;
  iVar5 = piVar6[0x41];
  if ((iVar5 != 0) && (DAT_00f092dc < local_70)) {
    *(undefined4 *)(puVar19 + -4) = 1;
    *(undefined4 *)(puVar19 + -8) = 1;
    *(undefined4 *)(puVar19 + -0xc) = uVar8;
    *(undefined4 *)(puVar19 + -0x10) = uVar8;
    *(float *)(puVar19 + -0x10) = (fVar4 + 0.0005) * 1000.0;
    *(undefined4 *)(puVar19 + -0x14) = 0x62f76a;
    FUN_00401000();
    *(undefined4 *)(puVar19 + -0x10) = 0x62f772;
    uVar8 = FUN_00b31c00();
    *(undefined4 *)(puVar19 + -0xc) = uVar8;
    pcVar2 = *(code **)(*(int *)(iVar5 + 0x54) + 0x1c);
    puVar36 = (undefined4 *)(puVar19 + -0x10);
    puVar19 = puVar19 + -0x10;
    *puVar36 = 0x62f77f;
    (*pcVar2)();
  }
  pcVar2 = *(code **)(*piVar6 + 0x6c);
  puVar37 = puVar19 + -4;
  *(undefined4 *)(puVar19 + -4) = 0x62f788;
  (*pcVar2)();
  pcVar2 = *(code **)(*piVar6 + 0x50);
  *(undefined4 *)(puVar37 + -4) = 0x62f791;
  (*pcVar2)();
  ExceptionList = local_10;
  return;
}

