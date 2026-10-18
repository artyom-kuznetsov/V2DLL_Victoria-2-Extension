// FUN_0051d490 @ 0051d490 body=[[0051d490, 0051d539] [0051d540, 0051d69c] [0051d6a0, 0051d9c5] [0051d9c9, 0051d9f8] [0051d9fc, 0051da26] [0051da2a, 0051da54] [0051da58, 0051da7f] [0051da83, 0051daaa] [0051daae, 0051dada] [0051dade, 0051dbd1] [0051dbd5, 0051dc09] [0051dc0d, 0051dc3f] [0051dc43, 0051dcf0] [0051dcf4, 0051de34] [0051de38, 0051de66] [0051de6a, 0051de9a] [0051de9e, 0051dff6] [0051dffa, 0051e029] [0051e02d, 0051e057] [0051e05b, 0051e087] [0051e08b, 0051e18d] [0051e191, 0051e242] [0051e246, 0051e2b3] [0051e2b7, 0051e2f8] [0051e2fc, 0051e321] [0051e325, 0051e33a] [0051e33e, 0051e34b] [0051e34f, 0051e365]]


/* WARNING: Removing unreachable block (ram,0x0051d88e) */

void FUN_0051d490(int param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  uint *puVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int *piVar14;
  undefined1 *puVar15;
  undefined4 uVar16;
  int iVar17;
  int iVar18;
  undefined8 *puVar19;
  int iVar20;
  bool bVar21;
  longlong lVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined1 auStack_218 [100];
  undefined4 uStack_1b4;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined4 *local_18c;
  int iStack_184;
  undefined8 local_180;
  int local_174;
  undefined8 local_170;
  undefined8 local_160;
  uint auStack_154 [4];
  undefined4 uStack_144;
  uint uStack_140;
  uint local_138;
  int iStack_134;
  undefined8 *local_12c;
  undefined8 *local_128;
  undefined8 *local_124;
  uint auStack_11c [4];
  undefined4 uStack_10c;
  uint uStack_108;
  uint auStack_100 [4];
  undefined4 uStack_f0;
  uint uStack_ec;
  uint auStack_e4 [4];
  undefined4 uStack_d4;
  uint uStack_d0;
  uint auStack_c8 [4];
  undefined4 uStack_b8;
  uint uStack_b4;
  uint auStack_ac [4];
  undefined4 uStack_9c;
  uint uStack_98;
  int iStack_90;
  uint auStack_88 [4];
  undefined4 uStack_78;
  uint uStack_74;
  uint auStack_6c [4];
  undefined4 uStack_5c;
  uint uStack_58;
  uint uStack_50;
  undefined4 uStack_40;
  uint uStack_3c;
  uint uStack_34;
  undefined4 uStack_24;
  uint uStack_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  iVar17 = DAT_012588e8;
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b9c876;
  pvStack_14 = ExceptionList;
  uStack_1a0._4_4_ = (uint *)0x1;
  ExceptionList = &pvStack_14;
  *(undefined4 *)(param_1 + 0x664) = DAT_01259abc;
  uStack_1a0._0_4_ = (char *)0x0;
  *(undefined4 *)(param_1 + 0x660) = *(undefined4 *)(iVar17 + 0xb0c);
  uStack_1a8._4_4_ = (uint *)0x0;
  uStack_1a8._0_4_ = (uint *)(param_1 + 0x12d4);
  uStack_1b0._4_4_ = (uint *)(param_1 + 0x9d8);
  uStack_1b0._0_4_ = param_1;
  uStack_1b4 = 0x51d4ef;
  FUN_0051d140();
  puVar19 = (undefined8 *)0x0;
  local_138 = 0;
  iStack_134 = 0;
  local_12c = (undefined8 *)0x0;
  local_128 = (undefined8 *)0x0;
  local_124 = (undefined8 *)0x0;
  local_c = 0;
  local_18c = (undefined4 *)0x0;
  if (0 < (int)(*(int *)(DAT_01258a3c + 0x30) - *(int *)(DAT_01258a3c + 0x2c) & 0xfffffffcU)) {
    local_160 = 0;
    iVar17 = DAT_01258a3c;
    do {
      if ((&local_160 < local_128) && (puVar19 <= &local_160)) {
        iVar20 = (int)&local_160 - (int)puVar19 >> 3;
        if (local_128 == local_124) {
          uStack_1a0._4_4_ = (uint *)0x51d567;
          FUN_00423780();
          iVar17 = DAT_01258a3c;
          puVar19 = local_12c;
        }
        if (local_128 != (undefined8 *)0x0) {
          *(undefined4 *)local_128 = *(undefined4 *)(puVar19 + iVar20);
          *(undefined4 *)((int)local_128 + 4) = *(undefined4 *)((int)puVar19 + iVar20 * 8 + 4);
        }
      }
      else {
        if (local_128 == local_124) {
          uStack_1a0._4_4_ = (uint *)0x51d599;
          FUN_00423780();
          iVar17 = DAT_01258a3c;
          puVar19 = local_12c;
        }
        if (local_128 != (undefined8 *)0x0) {
          *(undefined4 *)local_128 = 0;
          *(undefined4 *)((int)local_128 + 4) = 0;
        }
      }
      local_18c = (undefined4 *)((int)local_18c + 1);
      local_128 = local_128 + 1;
    } while ((int)local_18c < *(int *)(iVar17 + 0x30) - *(int *)(iVar17 + 0x2c) >> 2);
  }
  puVar11 = *(uint **)(param_1 + 0x12d4);
  iVar17 = *(int *)(param_1 + 0x12d8) - (int)puVar11 >> 3;
  puVar9 = puVar11;
  if (0 < iVar17) {
    do {
      bVar21 = CARRY4(local_138,*puVar9);
      local_138 = local_138 + *puVar9;
      iStack_134 = iStack_134 + puVar9[1] + (uint)bVar21;
      puVar9 = puVar9 + 2;
      iVar17 = iVar17 + -1;
    } while (iVar17 != 0);
  }
  uStack_1a0._4_4_ = (uint *)(param_1 + 0x12e8);
  local_160 = 0;
  bVar21 = false;
  local_174 = 0;
  uStack_1a0._0_4_ = (char *)0x51d624;
  FUN_00969f90();
  if ((local_180._4_4_ < 1) && ((local_180 < 0 || ((uint)local_180 < 0x28000)))) {
    piVar14 = *(int **)(param_1 + 0x83c);
    if (piVar14 != (int *)0x0) {
      local_18c = (undefined4 *)0x0;
      do {
        iVar17 = *piVar14;
        puVar9 = (uint *)(*(int *)(param_1 + 0x12d4) + (int)local_18c);
        uVar3 = *puVar9;
        piVar14 = (int *)piVar14[2];
        iVar17 = *(int *)(*(int *)(*(int *)(iVar17 + 0x54) + 0x48) + 0x50);
        puVar11 = (uint *)(puVar19 + iVar17);
        uVar2 = *puVar11;
        *puVar11 = *puVar11 + uVar3;
        piVar1 = (int *)((int)puVar19 + iVar17 * 8 + 4);
        *piVar1 = *piVar1 + puVar9[1] + (uint)CARRY4(uVar2,uVar3);
        local_18c = (undefined4 *)((int)local_18c + 8);
      } while (piVar14 != (int *)0x0);
    }
    iVar17 = -1;
    iVar18 = *(int *)(DAT_01258a3c + 0x30) - *(int *)(DAT_01258a3c + 0x2c) >> 2;
    iVar20 = 0;
    if (iVar18 < 1) goto LAB_0051e33e;
    do {
      iVar4 = *(int *)((int)local_12c + iVar20 * 8 + 4);
      if ((local_160._4_4_ <= iVar4) &&
         ((local_160._4_4_ < iVar4 || ((uint)local_160 < *(uint *)(local_12c + iVar20))))) {
        local_160 = CONCAT44(iVar4,*(uint *)(local_12c + iVar20));
        iVar17 = iVar20;
      }
      iVar20 = iVar20 + 1;
    } while (iVar20 < iVar18);
    if (iVar17 < 0) goto LAB_0051e33e;
    piVar14 = *(int **)(param_1 + 0x83c);
    bVar21 = true;
    local_170 = 0;
    if (piVar14 == (int *)0x0) goto LAB_0051e33e;
    puVar11 = *(uint **)(param_1 + 0x12d4);
    do {
      uVar2 = *puVar11;
      iVar20 = *piVar14;
      piVar14 = (int *)piVar14[2];
      puVar9 = puVar11 + 1;
      uVar6 = *(undefined8 *)puVar11;
      puVar11 = puVar11 + 2;
      uVar8 = local_170;
      if (((*(int *)(*(int *)(*(int *)(iVar20 + 0x54) + 0x48) + 0x50) == iVar17) &&
          (local_170._4_4_ <= (int)*puVar9)) &&
         ((local_170._4_4_ < (int)*puVar9 || ((uint)local_170 < uVar2)))) {
        local_174 = iVar20;
        uVar8 = uVar6;
      }
      local_170 = uVar8;
    } while (piVar14 != (int *)0x0);
  }
  else {
    piVar14 = *(int **)(param_1 + 0x83c);
    local_180 = 0;
    if (piVar14 == (int *)0x0) goto LAB_0051e33e;
    do {
      puVar9 = puVar11 + 1;
      uVar2 = *puVar11;
      uVar6 = *(undefined8 *)puVar11;
      iVar17 = *piVar14;
      piVar14 = (int *)piVar14[2];
      puVar11 = puVar11 + 2;
      uVar8 = local_180;
      if ((local_180._4_4_ <= (int)*puVar9) &&
         ((local_180._4_4_ < (int)*puVar9 || ((uint)local_180 < uVar2)))) {
        uVar8 = uVar6;
        local_174 = iVar17;
      }
      local_180 = uVar8;
    } while (piVar14 != (int *)0x0);
  }
  if (local_174 != 0) {
    uStack_1a0._4_4_ = (uint *)param_1;
    *(int *)(param_1 + 0x84c) = local_174;
    uStack_1a0._0_4_ = (char *)0x51d7bb;
    FUN_0050ea30();
    uStack_1a0._4_4_ = (uint *)param_1;
    uStack_1a0._0_4_ = (char *)0x51d7c1;
    FUN_0051c890();
    if (*(int *)(param_1 + 0x20) == *(int *)(DAT_012588e8 + 0xb60)) {
      iStack_90 = *(int *)(DAT_012588e8 + 0xb5c);
      uStack_1a0._4_4_ = *(uint **)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4)
      ;
      uStack_1a0._0_4_ = (char *)0x51d7fa;
      puVar10 = (undefined4 *)FUN_005061e0();
      uStack_58 = 0xf;
      uStack_5c = 0;
      auStack_6c[0] = auStack_6c[0] & 0xffffff00;
      local_c._0_1_ = 1;
      if (*(undefined4 **)(param_1 + 0x83c) != (undefined4 *)0x0) {
        iStack_184 = 0;
        local_18c = *(undefined4 **)(param_1 + 0x83c);
        do {
          puVar5 = (undefined4 *)local_18c[2];
          uVar13 = *local_18c;
          puVar11 = (uint *)(*(int *)(param_1 + 0x12d4) + iStack_184);
          iStack_184 = iStack_184 + 8;
          uVar2 = *puVar11;
          uStack_1a0._4_4_ = (uint *)iStack_134;
          uStack_1a8._4_4_ = (uint *)(puVar11[1] << 0xf | uVar2 >> 0x11);
          uStack_1a0._0_4_ = (char *)local_138;
          uStack_1a8._0_4_ = (uint *)(uVar2 << 0xf);
          uStack_1b0._4_4_ = (uint *)0x51d87b;
          lVar22 = __alldiv();
          iStack_90 = (int)lVar22;
          if (0 < lVar22) {
            uStack_1a0._4_4_ = (uint *)0x4;
            uStack_1a0._0_4_ = &DAT_00dfe9b4;
            uStack_140 = 0xf;
            uStack_144 = 0;
            auStack_154[0] = auStack_154[0] & 0xffffff00;
            uStack_1a8._4_4_ = (uint *)0x51d8b6;
            FUN_00409350();
            local_c._0_1_ = 2;
            uStack_1a8._4_4_ = (uint *)0x0;
            uStack_1a8._0_4_ = (uint *)0x320000;
            uStack_1b0._0_4_ = iStack_90;
            uStack_1b4 = 0x51d8db;
            uStack_1b0._4_4_ = (uint *)(int)((ulonglong)lVar22 >> 0x20);
            uStack_1a0 = __allmul();
            uStack_1a0 = uStack_1a0 >> 0xf;
            uStack_1a8._4_4_ = (uint *)0x2;
            uStack_1a8._0_4_ = auStack_100;
            uStack_1b0._4_4_ = (uint *)0x51d8f6;
            uVar12 = FUN_00988bb0();
            local_c._0_1_ = 3;
            uStack_1a0._4_4_ = (uint *)0x5;
            uStack_1a0._0_4_ = &DAT_00dfe9ac;
            uStack_108 = 0xf;
            uStack_10c = 0;
            auStack_11c[0] = auStack_11c[0] & 0xffffff00;
            uStack_1a8._4_4_ = (uint *)0x51d92c;
            FUN_00409350();
            uStack_1a0._4_4_ = auStack_c8;
            local_c._0_1_ = 4;
            uStack_1a8._4_4_ = (uint *)0x51d946;
            uStack_1a0._0_4_ = (char *)uVar13;
            FUN_009790b0();
            uStack_1a0._4_4_ = auStack_11c;
            local_c._0_1_ = 5;
            uStack_1a0._0_4_ = (char *)0x51d961;
            FUN_00988f20();
            local_c._0_1_ = 6;
            uStack_1a0._0_4_ = (char *)0x51d978;
            uStack_1a0._4_4_ = (uint *)uVar12;
            FUN_00988f20();
            uStack_1a0._4_4_ = auStack_154;
            local_c._0_1_ = 7;
            uStack_1a0._0_4_ = (char *)0x51d993;
            uStack_1a8._4_4_ = (uint *)FUN_00988f20();
            uStack_1a0._4_4_ = (uint *)0xffffffff;
            uStack_1a0._0_4_ = (char *)0x0;
            local_c._0_1_ = 8;
            uStack_1a8._0_4_ = (uint *)0x51d9ab;
            FUN_00448aa0();
            if (0xf < uStack_20) {
              uStack_1a0._4_4_ = (uint *)uStack_34;
                    /* WARNING: Subroutine does not return */
              uStack_1a0._0_4_ = &UNK_0051d9c6;
              FUN_00aae91b();
            }
            uStack_20 = 0xf;
            uStack_24 = 0;
            uStack_34 = uStack_34 & 0xffffff00;
            if (0xf < uStack_3c) {
              uStack_1a0._4_4_ = (uint *)uStack_50;
                    /* WARNING: Subroutine does not return */
              uStack_1a0._0_4_ = &UNK_0051d9f9;
              FUN_00aae91b();
            }
            uStack_3c = 0xf;
            uStack_40 = 0;
            uStack_50 = uStack_50 & 0xffffff00;
            if (0xf < uStack_74) {
              uStack_1a0._4_4_ = (uint *)auStack_88[0];
                    /* WARNING: Subroutine does not return */
              uStack_1a0._0_4_ = &UNK_0051da27;
              FUN_00aae91b();
            }
            uStack_74 = 0xf;
            uStack_78 = 0;
            auStack_88[0] = auStack_88[0] & 0xffffff00;
            if (0xf < uStack_b4) {
              uStack_1a0._4_4_ = (uint *)auStack_c8[0];
                    /* WARNING: Subroutine does not return */
              uStack_1a0._0_4_ = &UNK_0051da55;
              FUN_00aae91b();
            }
            uStack_b4 = 0xf;
            uStack_b8 = 0;
            auStack_c8[0] = auStack_c8[0] & 0xffffff00;
            if (0xf < uStack_108) {
              uStack_1a0._4_4_ = (uint *)auStack_11c[0];
                    /* WARNING: Subroutine does not return */
              uStack_1a0._0_4_ = &UNK_0051da80;
              FUN_00aae91b();
            }
            uStack_108 = 0xf;
            uStack_10c = 0;
            auStack_11c[0] = auStack_11c[0] & 0xffffff00;
            if (0xf < uStack_ec) {
              uStack_1a0._4_4_ = (uint *)auStack_100[0];
                    /* WARNING: Subroutine does not return */
              uStack_1a0._0_4_ = &UNK_0051daab;
              FUN_00aae91b();
            }
            local_c._0_1_ = 1;
            uStack_ec = 0xf;
            uStack_f0 = 0;
            auStack_100[0] = auStack_100[0] & 0xffffff00;
            if (0xf < uStack_140) {
              uStack_1a0._4_4_ = (uint *)auStack_154[0];
                    /* WARNING: Subroutine does not return */
              uStack_1a0._0_4_ = &UNK_0051dadb;
              FUN_00aae91b();
            }
          }
          local_18c = puVar5;
        } while (puVar5 != (undefined4 *)0x0);
      }
      if (bVar21) {
        lVar22 = local_160;
        if ((-1 < iStack_134) && ((0 < iStack_134 || (local_138 != 0)))) {
          uStack_1a0._4_4_ = (uint *)iStack_134;
          uStack_1a8 = local_160 << 0xf;
          uStack_1a0._0_4_ = (char *)local_138;
          uStack_1b0._4_4_ = (uint *)0x51db1e;
          lVar22 = __alldiv();
        }
        uStack_1a8._4_4_ = (uint *)0x0;
        uStack_1a8._0_4_ = (uint *)0x320000;
        uStack_1b4 = 0x51db3e;
        uStack_1b0 = lVar22;
        uStack_1a0 = __allmul();
        uStack_1a0 = uStack_1a0 >> 0xf;
        uStack_1a8._4_4_ = (uint *)0x2;
        uStack_1a8._0_4_ = auStack_88;
        uStack_1b0._4_4_ = (uint *)0x51db59;
        uVar13 = FUN_00988bb0();
        local_c._0_1_ = 9;
        uStack_1a0._4_4_ = *(uint **)(*(int *)(local_174 + 0x54) + 0x48);
        uStack_1a0._0_4_ = (char *)0x51db7a;
        uStack_1a8._4_4_ = (uint *)FUN_00974c50();
        uStack_1a0._0_4_ = &DAT_00df7e90;
        uStack_1b0._4_4_ = auStack_100;
        uStack_1a8._0_4_ = (uint *)&DAT_00dfe9bc;
        local_c._0_1_ = 10;
        uStack_1b0._0_4_ = 0x51dba0;
        uStack_1a0._4_4_ = (uint *)uVar13;
        uStack_1a8._4_4_ = (uint *)FUN_0043ec10();
        uStack_1a0._4_4_ = (uint *)0xffffffff;
        uStack_1a0._0_4_ = (char *)0x0;
        local_c._0_1_ = 0xb;
        uStack_1a8._0_4_ = (uint *)0x51dbbb;
        FUN_00448aa0();
        if (0xf < uStack_ec) {
          uStack_1a0._4_4_ = (uint *)auStack_100[0];
                    /* WARNING: Subroutine does not return */
          uStack_1a0._0_4_ = &UNK_0051dbd2;
          FUN_00aae91b();
        }
        uStack_ec = 0xf;
        uStack_f0 = 0;
        auStack_100[0] = auStack_100[0] & 0xffffff00;
        if (0xf < uStack_b4) {
          uStack_1a0._4_4_ = (uint *)auStack_c8[0];
                    /* WARNING: Subroutine does not return */
          uStack_1a0._0_4_ = &UNK_0051dc0a;
          FUN_00aae91b();
        }
        local_c._0_1_ = 1;
        uStack_b4 = 0xf;
        uStack_b8 = 0;
        auStack_c8[0] = auStack_c8[0] & 0xffffff00;
        if (0xf < uStack_74) {
          uStack_1a0._4_4_ = (uint *)auStack_88[0];
                    /* WARNING: Subroutine does not return */
          uStack_1a0._0_4_ = &UNK_0051dc40;
          FUN_00aae91b();
        }
      }
      uStack_1a0._4_4_ = (uint *)0xe;
      uStack_1a0._0_4_ = "election_event";
      uStack_140 = 0xf;
      uStack_144 = 0;
      auStack_154[0] = auStack_154[0] & 0xffffff00;
      uStack_1a8._4_4_ = (uint *)0x51dc63;
      FUN_00409350();
      local_c._0_1_ = 0xc;
      piVar14 = DAT_0131ca9c;
      if (DAT_0131ca9c == (int *)0x0) {
        uStack_1a0._4_4_ = (uint *)0xc;
        uStack_1a0._0_4_ = (char *)0x51dc7c;
        piVar14 = (int *)FUN_00aae9af();
        if (piVar14 == (int *)0x0) {
          piVar14 = (int *)0x0;
        }
        else {
          piVar14[1] = 10000;
          *(undefined1 *)((int)piVar14 + 9) = 1;
          *piVar14 = (int)CNullSound::vftable;
        }
        local_c._0_1_ = 0xd;
        if ((piVar14 != DAT_0131ca9c) && (DAT_0131ca9c != (int *)0x0)) {
          uStack_1a0._4_4_ = (uint *)0x1;
          uStack_1a0._0_4_ = (char *)0x51dcbc;
          (**(code **)*DAT_0131ca9c)();
        }
      }
      DAT_0131ca9c = piVar14;
      local_c._0_1_ = 0xc;
      uStack_1a0._4_4_ = auStack_154;
      uStack_1a0._0_4_ = (char *)0x51dcd8;
      (**(code **)(*DAT_0131ca9c + 0x60))();
      local_c._0_1_ = 1;
      if (0xf < uStack_140) {
        uStack_1a0._4_4_ = (uint *)auStack_154[0];
                    /* WARNING: Subroutine does not return */
        uStack_1a0._0_4_ = &UNK_0051dcf1;
        FUN_00aae91b();
      }
      uStack_1a0._4_4_ = (uint *)0x7;
      uStack_1a0._0_4_ = "DETAILS";
      uStack_140 = 0xf;
      uStack_144 = 0;
      auStack_154[0] = auStack_154[0] & 0xffffff00;
      uStack_1a8._4_4_ = (uint *)0x51dd15;
      FUN_00409350();
      uStack_1a0._4_4_ = (uint *)0xffffffff;
      uStack_1a0._0_4_ = (char *)0x0;
      uStack_1a8._4_4_ = auStack_154;
      local_c._0_1_ = 0xe;
      uStack_ec = 0xf;
      uStack_f0 = 0;
      auStack_100[0] = auStack_100[0] & 0xffffff00;
      uStack_1a8._0_4_ = (uint *)0x51dd46;
      FUN_00408ed0();
      uStack_1a0._4_4_ = (uint *)0xffffffff;
      local_c._0_1_ = 0xf;
      uStack_1a0._0_4_ = (char *)0x0;
      uStack_1a8._4_4_ = auStack_6c;
      uStack_d0 = 0xf;
      uStack_d4 = 0;
      auStack_e4[0] = auStack_e4[0] & 0xffffff00;
      uStack_1a8._0_4_ = (uint *)0x51dd7a;
      FUN_00408ed0();
      local_c._0_1_ = 0x10;
      iVar17 = puVar10[1];
      uStack_1a0._4_4_ = (uint *)0x44;
      uStack_1a0._0_4_ = (char *)0x51dd94;
      puVar15 = (undefined1 *)FUN_00aae9af();
      local_c._0_1_ = 0x11;
      uVar7 = (undefined1)local_c;
      local_c._0_1_ = 0x11;
      if (puVar15 == (undefined1 *)0x0) {
        puVar15 = (undefined1 *)0x0;
        local_c._0_1_ = uVar7;
      }
      else {
        uStack_1a0._4_4_ = (uint *)0xffffffff;
        uStack_1a0._0_4_ = (char *)0x0;
        uStack_1a8._4_4_ = auStack_100;
        *(undefined4 *)(puVar15 + 0x14) = 0xf;
        *(undefined4 *)(puVar15 + 0x10) = 0;
        *puVar15 = 0;
        uStack_1a8._0_4_ = (uint *)0x51ddc7;
        FUN_00408ed0();
        uStack_1a0._4_4_ = (uint *)0xffffffff;
        local_c._0_1_ = 0x12;
        uStack_1a0._0_4_ = (char *)0x0;
        uStack_1a8._4_4_ = auStack_e4;
        *(undefined4 *)(puVar15 + 0x30) = 0xf;
        *(undefined4 *)(puVar15 + 0x2c) = 0;
        puVar15[0x1c] = 0;
        uStack_1a8._0_4_ = (uint *)0x51ddee;
        FUN_00408ed0();
        *(int *)(puVar15 + 0x38) = iVar17;
        *(undefined4 *)(puVar15 + 0x3c) = 0;
        puVar15[0x40] = 0;
      }
      iVar20 = puVar10[2];
      puVar10[1] = puVar15;
      puVar10[2] = iVar20 + 1;
      if (iVar20 == 0) {
        *puVar10 = puVar15;
      }
      else {
        *(undefined1 **)(iVar17 + 0x3c) = puVar15;
      }
      if (0xf < uStack_d0) {
        uStack_1a0._4_4_ = (uint *)auStack_e4[0];
                    /* WARNING: Subroutine does not return */
        uStack_1a0._0_4_ = &UNK_0051de35;
        FUN_00aae91b();
      }
      uStack_d0 = 0xf;
      uStack_d4 = 0;
      auStack_e4[0] = auStack_e4[0] & 0xffffff00;
      if (0xf < uStack_ec) {
        uStack_1a0._4_4_ = (uint *)auStack_100[0];
                    /* WARNING: Subroutine does not return */
        uStack_1a0._0_4_ = &UNK_0051de67;
        FUN_00aae91b();
      }
      local_c._0_1_ = 1;
      uStack_ec = 0xf;
      uStack_f0 = 0;
      auStack_100[0] = auStack_100[0] & 0xffffff00;
      if (0xf < uStack_140) {
        uStack_1a0._4_4_ = (uint *)auStack_154[0];
                    /* WARNING: Subroutine does not return */
        uStack_1a0._0_4_ = &UNK_0051de9b;
        FUN_00aae91b();
      }
      uStack_1a0._4_4_ = (uint *)0x6;
      uStack_1a0._0_4_ = "WINNER";
      uStack_140 = 0xf;
      uStack_144 = 0;
      auStack_154[0] = auStack_154[0] & 0xffffff00;
      uStack_1a8._4_4_ = (uint *)0x51debe;
      FUN_00409350();
      uStack_1a0._4_4_ = auStack_100;
      local_c._0_1_ = 0x13;
      uStack_1a0._0_4_ = (char *)local_174;
      uStack_1a8._4_4_ = (uint *)0x51ded8;
      puVar11 = (uint *)FUN_009790b0();
      uStack_1a0._4_4_ = (uint *)0xffffffff;
      local_c._0_1_ = 0x14;
      uStack_1a0._0_4_ = (char *)0x0;
      uStack_1a8._4_4_ = auStack_154;
      uStack_b4 = 0xf;
      uStack_b8 = 0;
      auStack_c8[0] = auStack_c8[0] & 0xffffff00;
      uStack_1a8._0_4_ = (uint *)0x51df0f;
      FUN_00408ed0();
      uStack_1a0._4_4_ = (uint *)0xffffffff;
      local_c._0_1_ = 0x15;
      uStack_1a0._0_4_ = (char *)0x0;
      uStack_98 = 0xf;
      uStack_9c = 0;
      auStack_ac[0] = auStack_ac[0] & 0xffffff00;
      uStack_1a8._0_4_ = (uint *)0x51df40;
      uStack_1a8._4_4_ = puVar11;
      FUN_00408ed0();
      local_c._0_1_ = 0x16;
      iVar17 = puVar10[1];
      uStack_1a0._4_4_ = (uint *)0x44;
      uStack_1a0._0_4_ = (char *)0x51df56;
      puVar15 = (undefined1 *)FUN_00aae9af();
      local_c._0_1_ = 0x17;
      uVar7 = (undefined1)local_c;
      local_c._0_1_ = 0x17;
      if (puVar15 == (undefined1 *)0x0) {
        puVar15 = (undefined1 *)0x0;
        local_c._0_1_ = uVar7;
      }
      else {
        uStack_1a0._4_4_ = (uint *)0xffffffff;
        uStack_1a0._0_4_ = (char *)0x0;
        uStack_1a8._4_4_ = auStack_c8;
        *(undefined4 *)(puVar15 + 0x14) = 0xf;
        *(undefined4 *)(puVar15 + 0x10) = 0;
        *puVar15 = 0;
        uStack_1a8._0_4_ = (uint *)0x51df89;
        FUN_00408ed0();
        uStack_1a0._4_4_ = (uint *)0xffffffff;
        local_c._0_1_ = 0x18;
        uStack_1a0._0_4_ = (char *)0x0;
        uStack_1a8._4_4_ = auStack_ac;
        *(undefined4 *)(puVar15 + 0x30) = 0xf;
        *(undefined4 *)(puVar15 + 0x2c) = 0;
        puVar15[0x1c] = 0;
        uStack_1a8._0_4_ = (uint *)0x51dfb0;
        FUN_00408ed0();
        *(int *)(puVar15 + 0x38) = iVar17;
        *(undefined4 *)(puVar15 + 0x3c) = 0;
        puVar15[0x40] = 0;
      }
      iVar20 = puVar10[2];
      puVar10[1] = puVar15;
      puVar10[2] = iVar20 + 1;
      if (iVar20 == 0) {
        *puVar10 = puVar15;
      }
      else {
        *(undefined1 **)(iVar17 + 0x3c) = puVar15;
      }
      if (0xf < uStack_98) {
        uStack_1a0._4_4_ = (uint *)auStack_ac[0];
                    /* WARNING: Subroutine does not return */
        uStack_1a0._0_4_ = &UNK_0051dff7;
        FUN_00aae91b();
      }
      uStack_98 = 0xf;
      uStack_9c = 0;
      auStack_ac[0] = auStack_ac[0] & 0xffffff00;
      if (0xf < uStack_b4) {
        uStack_1a0._4_4_ = (uint *)auStack_c8[0];
                    /* WARNING: Subroutine does not return */
        uStack_1a0._0_4_ = &UNK_0051e02a;
        FUN_00aae91b();
      }
      uStack_b4 = 0xf;
      uStack_b8 = 0;
      auStack_c8[0] = auStack_c8[0] & 0xffffff00;
      if (0xf < uStack_ec) {
        uStack_1a0._4_4_ = (uint *)auStack_100[0];
                    /* WARNING: Subroutine does not return */
        uStack_1a0._0_4_ = &UNK_0051e058;
        FUN_00aae91b();
      }
      local_c._0_1_ = 1;
      uStack_ec = 0xf;
      uStack_f0 = 0;
      auStack_100[0] = auStack_100[0] & 0xffffff00;
      if (0xf < uStack_140) {
        uStack_1a0._4_4_ = (uint *)auStack_154[0];
                    /* WARNING: Subroutine does not return */
        uStack_1a0._0_4_ = &UNK_0051e088;
        FUN_00aae91b();
      }
      uStack_1a0._4_4_ = (uint *)0x0;
      uStack_1a0._0_4_ = &DAT_00ded94d;
      uStack_140 = 0xf;
      uStack_144 = 0;
      auStack_154[0] = auStack_154[0] & 0xffffff00;
      uStack_1a8._4_4_ = (uint *)0x51e0a8;
      FUN_00409350();
      local_c._0_1_ = 0x19;
      uStack_1a0._4_4_ = (uint *)0xc;
      uStack_1a0._0_4_ = "ELECTIONDONE";
      uStack_108 = 0xf;
      uStack_10c = 0;
      auStack_11c[0] = auStack_11c[0] & 0xffffff00;
      uStack_1a8._4_4_ = (uint *)0x51e0d8;
      FUN_00409350();
      local_c._0_1_ = 0x1a;
      uVar13 = *(undefined4 *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0xbe4) * 4);
      iVar17 = DAT_01262ef4;
      if (DAT_01262ef4 == 0) {
        iVar17 = FUN_00aae9af(0x44);
        local_c._0_1_ = 0x1b;
        if (iVar17 == 0) {
          iVar17 = 0;
        }
        else {
          iVar17 = FUN_006a4e30();
        }
        iVar20 = DAT_01262ef4;
        local_c = CONCAT31(local_c._1_3_,0x1c);
        if ((iVar17 != DAT_01262ef4) && (DAT_01262ef4 != 0)) {
          FUN_006a4ea0(DAT_01262ef4);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(iVar20);
        }
      }
      DAT_01262ef4 = iVar17;
      local_c._0_1_ = 0x1a;
      uVar12 = *(undefined4 *)(param_1 + 0x20);
      uVar24 = *(undefined4 *)(param_1 + 0x1c);
      uVar23 = 0;
      puVar11 = auStack_154;
      uVar25 = uVar24;
      uVar26 = uVar12;
      uVar16 = FUN_006a55b0(puVar10,uVar13,puVar11,0,uVar24,uVar12,uVar24,uVar12);
      FUN_006a7ed0(auStack_218,uVar16,puVar10,uVar13,puVar11,uVar23,uVar24,uVar12,uVar25,uVar26);
      local_c._0_1_ = 0x1d;
      iVar17 = DAT_01262ef4;
      if (DAT_01262ef4 == 0) {
        iVar17 = FUN_00aae9af();
        local_c._0_1_ = 0x1e;
        if (iVar17 == 0) {
          iVar17 = 0;
        }
        else {
          iVar17 = FUN_006a4e30();
        }
        local_c = CONCAT31(local_c._1_3_,0x1f);
        if ((iVar17 != DAT_01262ef4) && (DAT_01262ef4 != 0)) {
          FUN_006a4ea0();
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      }
      DAT_01262ef4 = iVar17;
      local_c._0_1_ = 0x1d;
      iVar17 = DAT_01262ef4;
      if (DAT_01262ef4 == 0) {
        iVar17 = FUN_00aae9af();
        local_c._0_1_ = 0x20;
        if (iVar17 == 0) {
          iVar17 = 0;
        }
        else {
          iVar17 = FUN_006a4e30();
        }
        local_c = CONCAT31(local_c._1_3_,0x21);
        if ((iVar17 != DAT_01262ef4) && (DAT_01262ef4 != 0)) {
          FUN_006a4ea0();
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      }
      DAT_01262ef4 = iVar17;
      local_c = CONCAT31(local_c._1_3_,0x1a);
      FUN_004e9540(DAT_01262ef4);
      if (0xf < uStack_108) {
        uStack_1a0._4_4_ = (uint *)auStack_11c[0];
                    /* WARNING: Subroutine does not return */
        uStack_1a0._0_4_ = &UNK_0051e2f9;
        FUN_00aae91b();
      }
      uStack_108 = 0xf;
      uStack_10c = 0;
      auStack_11c[0] = auStack_11c[0] & 0xffffff00;
      if (0xf < uStack_140) {
        uStack_1a0._4_4_ = (uint *)auStack_154[0];
                    /* WARNING: Subroutine does not return */
        uStack_1a0._0_4_ = &UNK_0051e322;
        FUN_00aae91b();
      }
      if (0xf < uStack_58) {
        uStack_1a0._4_4_ = (uint *)auStack_6c[0];
                    /* WARNING: Subroutine does not return */
        uStack_1a0._0_4_ = &UNK_0051e33b;
        FUN_00aae91b();
      }
    }
  }
LAB_0051e33e:
  if (local_12c != (undefined8 *)0x0) {
    uStack_1a0._4_4_ = (uint *)local_12c;
                    /* WARNING: Subroutine does not return */
    uStack_1a0._0_4_ = &UNK_0051e34c;
    FUN_00aae91b();
  }
  ExceptionList = pvStack_14;
  return;
}

