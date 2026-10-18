// FUN_0097fe20 @ 0097fe20 body=[[0097fe20, 0097ff86] [0097ff8a, 009801ca] [009801ce, 0098022c] [00980230, 00980293] [00980297, 009803d7] [009803db, 00980617] [0098061b, 00980678] [00980680, 009806e3] [009806e7, 009807c9] [009807cd, 00980801] [00980805, 00980834] [00980838, 00980856] [0098085a, 00980891]]


/* WARNING: Removing unreachable block (ram,0x0097ff20) */
/* WARNING: Removing unreachable block (ram,0x0097ff24) */
/* WARNING: Removing unreachable block (ram,0x0097ff39) */
/* WARNING: Removing unreachable block (ram,0x009804b2) */

void FUN_0097fe20(int param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  void *pvVar3;
  uint **ppuVar4;
  uint **ppuVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  undefined1 uVar9;
  void **ppvVar10;
  char cVar11;
  int *piVar12;
  undefined4 uVar13;
  uint uVar14;
  int iVar15;
  int *piVar16;
  uint uVar17;
  uint uVar18;
  uint *puVar19;
  uint *puVar20;
  float fVar21;
  undefined4 *puVar22;
  longlong lVar23;
  undefined1 local_128 [12];
  uint local_11c [4];
  undefined4 local_10c;
  uint local_108;
  uint local_100;
  uint *local_f8;
  uint local_f4;
  undefined4 local_e4;
  uint local_e0;
  undefined **local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined1 local_c0;
  uint local_b8;
  undefined **local_b4;
  uint local_b0;
  undefined8 local_ac;
  undefined8 local_a4;
  undefined1 local_9c;
  int local_98;
  undefined4 local_94;
  undefined4 local_90;
  float local_88;
  uint local_84;
  uint local_80;
  int local_7c;
  undefined4 local_78;
  undefined4 local_74;
  uint local_6c [4];
  undefined4 local_5c;
  uint local_58;
  uint local_50;
  int iStack_4c;
  int *local_48;
  int local_44;
  uint *local_40;
  undefined4 local_3c;
  int *local_34;
  float local_30;
  int local_2c;
  uint *local_28;
  int *local_24;
  undefined4 *local_20;
  uint local_1c;
  uint *local_18 [2];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4a6b2;
  ppvVar10 = &local_10;
  piVar16 = *(int **)(param_1 + 100);
  local_10 = ExceptionList;
  do {
    ExceptionList = ppvVar10;
    if (piVar16 == (int *)0x0) {
      local_8 = 0xffffffff;
      local_34 = piVar16;
      FUN_009836a0(param_1);
      ExceptionList = local_10;
      return;
    }
    local_34 = (int *)piVar16[2];
    puVar1 = (undefined4 *)*piVar16;
    local_7c = 0;
    local_78 = 0;
    local_74 = 0;
    local_8 = 0;
    pvVar2 = (void *)puVar1[10];
    pvVar3 = (void *)puVar1[9];
    local_20 = puVar1;
    if (((int)pvVar2 - (int)pvVar3 >> 2 != 0) && (pvVar3 != pvVar2)) {
      FID_conflict__memcpy(pvVar3,pvVar2,0);
      puVar1[10] = pvVar3;
    }
    pvVar2 = (void *)puVar1[0x12];
    pvVar3 = (void *)puVar1[0x11];
    if (((int)pvVar2 - (int)pvVar3 >> 2 != 0) && (pvVar3 != pvVar2)) {
      FID_conflict__memcpy(pvVar3,pvVar2,0);
      puVar1[0x12] = pvVar3;
    }
    pvVar2 = (void *)puVar1[0xe];
    pvVar3 = (void *)puVar1[0xd];
    if (((int)pvVar2 - (int)pvVar3 >> 2 != 0) && (pvVar3 != pvVar2)) {
      FID_conflict__memcpy(pvVar3,pvVar2,0);
      puVar1[0xe] = pvVar3;
    }
    if (puVar1[0x15] != puVar1[0x16]) {
      puVar1[0x16] = puVar1[0x15];
    }
    puVar19 = (uint *)0x0;
    local_2c = 0;
    local_58 = 0xf;
    local_5c = 0;
    local_6c[0] = local_6c[0] & 0xffffff00;
    FUN_00409350("member_names",0xc);
    local_8._0_1_ = 1;
    local_48 = (int *)(**(code **)(*(int *)*puVar1 + 0x7c))(local_6c);
    local_8._0_1_ = 0;
    if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_6c[0]);
    }
    local_58 = 0xf;
    local_5c = 0;
    local_6c[0] = local_6c[0] & 0xffffff00;
    (**(code **)(*local_48 + 0x5c))();
    local_44 = 0;
    local_40 = (uint *)0x0;
    local_3c = 0;
    local_8._0_1_ = 2;
    if (puVar1[8] == 2) {
      local_28 = (uint *)(DAT_01258a3c + 0xc);
      if (0 < (int)(*(int *)(DAT_01258a3c + 0x10) - *(int *)(DAT_01258a3c + 0xc) & 0xfffffffcU)) {
        do {
          puVar1 = local_20;
          local_8._0_1_ = 2;
          iVar15 = *(int *)(*(int *)(param_1 + 0x28) + 0x7c);
          local_1c = *(uint *)(iVar15 + (int)puVar19 * 8) >> 0xf |
                     *(int *)(iVar15 + (int)puVar19 * 8 + 4) << 0x11;
          if (0 < (int)local_1c) {
            local_88 = (float)(int)local_1c;
            local_18[0] = puVar19;
            if ((int)(local_20[10] - local_20[9]) >> 2 <= (int)puVar19) {
              pvVar2 = (void *)local_20[10];
              piVar16 = (int *)((int)puVar19 + 1);
              piVar12 = (int *)((int)pvVar2 - local_20[9] >> 2);
              local_24 = piVar16;
              if (piVar16 < piVar12) {
                pvVar3 = (void *)(local_20[9] + 4 + (int)puVar19 * 4);
                if (pvVar3 != pvVar2) {
                  local_24 = (int *)0x0;
                  FID_conflict__memcpy(pvVar3,pvVar2,0);
                  puVar1[10] = (int)pvVar3 + (int)local_24;
                }
              }
              else if (piVar12 < piVar16) {
                FUN_007b94a0();
                puVar22 = (undefined4 *)puVar1[10];
                iVar15 = (int)piVar16 - ((int)puVar22 - puVar1[9] >> 2);
                if (iVar15 != 0) {
                  for (; piVar16 = local_24, iVar15 != 0; iVar15 = iVar15 + -1) {
                    *puVar22 = 0;
                    puVar22 = puVar22 + 1;
                  }
                }
                puVar1[10] = puVar1[10] + ((int)piVar16 - ((int)(puVar1[10] - puVar1[9]) >> 2)) * 4;
              }
            }
            puVar22 = local_20;
            *(float *)(puVar1[9] + (int)puVar19 * 4) = local_88;
            ppuVar4 = (uint **)local_20[0xe];
            if (local_18 < ppuVar4) {
              ppuVar5 = (uint **)local_20[0xd];
              if (local_18 < ppuVar5) goto LAB_009800f0;
              if (ppuVar4 == (uint **)local_20[0xf]) {
                FUN_007b94a0();
              }
              if ((undefined4 *)puVar22[0xe] != (undefined4 *)0x0) {
                *(undefined4 *)puVar22[0xe] =
                     *(undefined4 *)(puVar22[0xd] + ((int)local_18 - (int)ppuVar5 >> 2) * 4);
              }
            }
            else {
LAB_009800f0:
              if (ppuVar4 == (uint **)local_20[0xf]) {
                FUN_007b94a0();
              }
              if ((undefined4 *)puVar22[0xe] != (undefined4 *)0x0) {
                *(undefined4 *)puVar22[0xe] = puVar19;
              }
            }
            puVar6 = local_28;
            puVar22[0xe] = puVar22[0xe] + 4;
            FUN_00549af0(&local_1c);
            FUN_0054a870();
            local_e0 = 0xf;
            local_e4 = 0;
            local_f4 = local_f4 & 0xffffff00;
            local_d8 = CColor::vftable;
            local_8._0_1_ = 3;
            iVar15 = *(int *)(*puVar6 + (int)puVar19 * 4);
            local_d0 = *(undefined8 *)(iVar15 + 0x34);
            local_c0 = *(undefined1 *)(iVar15 + 0x44);
            local_100 = local_1c;
            local_d4 = *(undefined4 *)(iVar15 + 0x30);
            local_c8 = *(undefined4 *)(iVar15 + 0x3c);
            uStack_c4 = *(undefined4 *)(iVar15 + 0x40);
            local_f8 = puVar19;
            FUN_009843d0(&local_44);
            local_8._0_1_ = 2;
            if (0xf < local_e0) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(local_f4);
            }
          }
          puVar19 = (uint *)((int)puVar19 + 1);
        } while ((int)puVar19 < *(int *)(DAT_01258a3c + 0x10) - *(int *)(DAT_01258a3c + 0xc) >> 2);
      }
      iVar15 = local_44;
      local_8._0_1_ = 2;
      fVar21 = (float)(((int)local_40 - local_44) / 0x44);
      local_80 = local_80 & 0xffffff00;
      local_30 = fVar21;
      FUN_00984560(local_44,local_40,fVar21,local_80);
      local_24 = (int *)0x0;
      if (0 < (int)fVar21) {
        puVar19 = (uint *)(iVar15 + 8);
        do {
          if (local_2c < 0x32) {
            local_18[0] = puVar19;
            uVar13 = (**(code **)(**(int **)(*local_28 + *puVar19 * 4) + 0x18))(&local_b4);
            local_8._0_1_ = 4;
            FUN_0097f2f0(local_48,uVar13,puVar19 + 8,(float)(int)puVar19[-2]);
            puVar1 = local_20;
            local_8._0_1_ = 2;
            uVar9 = (undefined1)local_8;
            local_8._0_1_ = 2;
            if (0xf < local_a4._4_4_) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(local_b4);
            }
            uVar14 = *puVar19;
            local_1c = uVar14;
            if ((int)uVar14 < (int)(local_20[10] - local_20[9]) >> 2) {
              puVar6 = (uint *)local_20[0x12];
              puVar20 = local_20 + 0x11;
              if ((&local_1c < puVar6) && (puVar7 = (uint *)*puVar20, puVar7 <= &local_1c)) {
                if (puVar6 == (uint *)local_20[0x13]) {
                  uVar14 = (int)puVar6 - (int)puVar7 >> 2;
                  if (0x3ffffffe < uVar14) {
LAB_00980888:
                    local_8._0_1_ = uVar9;
                    /* WARNING: Subroutine does not return */
                    FUN_00aad3ad("vector<T> too long");
                  }
                  uVar14 = uVar14 + 1;
                  uVar17 = (int)local_20[0x13] - (int)puVar7 >> 2;
                  if (uVar17 < uVar14) {
                    if (0x3fffffff - (uVar17 >> 1) < uVar17) {
                      uVar17 = 0;
                    }
                    else {
                      uVar17 = uVar17 + (uVar17 >> 1);
                    }
                    if (uVar17 < uVar14) {
                      uVar17 = uVar14;
                    }
                    FUN_004bf300(uVar17);
                    puVar19 = local_18[0];
                  }
                }
                if ((undefined4 *)puVar1[0x12] != (undefined4 *)0x0) {
                  *(undefined4 *)puVar1[0x12] =
                       *(undefined4 *)(*puVar20 + ((int)&local_1c - (int)puVar7 >> 2) * 4);
                }
              }
              else {
                if (puVar6 == (uint *)local_20[0x13]) {
                  uVar17 = (int)((int)puVar6 - *puVar20) >> 2;
                  if (0x3ffffffe < uVar17) goto LAB_00980888;
                  uVar17 = uVar17 + 1;
                  uVar18 = (int)((int)local_20[0x13] - *puVar20) >> 2;
                  if (uVar18 < uVar17) {
                    if (0x3fffffff - (uVar18 >> 1) < uVar18) {
                      uVar18 = 0;
                    }
                    else {
                      uVar18 = uVar18 + (uVar18 >> 1);
                    }
                    if (uVar18 < uVar17) {
                      uVar18 = uVar17;
                    }
                    FUN_004bf300(uVar18);
                    puVar19 = local_18[0];
                  }
                }
                if ((uint *)puVar1[0x12] != (uint *)0x0) {
                  *(uint *)puVar1[0x12] = uVar14;
                }
              }
              puVar1[0x12] = puVar1[0x12] + 4;
            }
            local_2c = local_2c + 1;
            fVar21 = local_30;
          }
          local_24 = (int *)((int)local_24 + 1);
          puVar19 = puVar19 + 0x11;
          local_18[0] = puVar19;
        } while ((int)local_24 < (int)fVar21);
      }
      local_58 = 0xf;
      local_5c = 0;
      local_6c[0] = local_6c[0] & 0xffffff00;
      FUN_00409350("chart",5);
      local_8._0_1_ = 5;
      iVar15 = (**(code **)(*(int *)*local_20 + 0x44))(local_6c);
      local_8 = CONCAT31(local_8._1_3_,2);
      if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_6c[0]);
      }
      local_58 = 0xf;
      local_5c = 0;
      local_6c[0] = local_6c[0] & 0xffffff00;
      FUN_009e11f0(*(undefined4 *)(iVar15 + 0x94),&local_7c,1);
LAB_00980817:
      iVar15 = local_44;
      if (local_44 != 0) {
        FUN_007c8150(param_1);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(iVar15);
      }
    }
    else if (puVar1[8] == 4) {
      local_98 = 0;
      local_94 = 0;
      local_90 = 0;
      FUN_0047b5a0(&local_98);
      local_8 = CONCAT31(local_8._1_3_,6);
      piVar16 = (int *)(DAT_01258a48 + 0x18);
      local_18[0] = (uint *)0x0;
      local_24 = piVar16;
      if (0 < (int)(*(int *)(DAT_01258a48 + 0x1c) - *(int *)(DAT_01258a48 + 0x18) & 0xfffffffcU)) {
        do {
          cVar11 = (**(code **)(**(int **)(*piVar16 + (int)local_18[0] * 4) + 0x34))();
          if (cVar11 != '\0') {
            local_1c = *(uint *)(*local_24 + (int)local_18[0] * 4);
            iVar15 = *(int *)(*(int *)(param_1 + 0x28) + 0xa4);
            iVar8 = *(int *)(iVar15 + 4 + (int)local_18[0] * 8);
            local_50 = *(uint *)(iVar15 + (int)local_18[0] * 8);
            iStack_4c = iVar8;
            lVar23 = FUN_00b31c36();
            if (lVar23 < CONCAT44(iVar8,local_50)) {
              local_30 = (float)((float10)CONCAT44(iStack_4c,local_50) * (float10)3.0517578125e-05);
              local_28 = local_18[0];
              if ((int)(local_20[10] - local_20[9]) >> 2 <= (int)local_18[0]) {
                FUN_0068ea30((int)local_18[0] + 1);
              }
              *(float *)(local_20[9] + (int)local_18[0] * 4) = local_30;
              FUN_004e9b90();
              uVar14 = local_1c;
              puVar19 = (uint *)FUN_00984390(local_128);
              local_ac = *(undefined8 *)(puVar19 + 4);
              local_b8 = *puVar19 >> 0xf | puVar19[1] << 0x11;
              local_9c = (undefined1)puVar19[8];
              local_b0 = puVar19[3];
              local_a4 = *(undefined8 *)(puVar19 + 6);
              local_b4 = CColor::vftable;
              FUN_0054a870();
              local_e0 = 0xf;
              local_e4 = 0;
              local_f4 = local_f4 & 0xffffff00;
              local_d8 = CColor::vftable;
              local_8._0_1_ = 7;
              local_c0 = *(undefined1 *)(uVar14 + 0x1b0);
              local_d0 = *(undefined8 *)(uVar14 + 0x1a0);
              local_100 = local_50 >> 0xf | iVar8 << 0x11;
              local_d4 = *(undefined4 *)(uVar14 + 0x19c);
              local_c8 = *(undefined4 *)(uVar14 + 0x1a8);
              uStack_c4 = *(undefined4 *)(uVar14 + 0x1ac);
              local_f8 = local_18[0];
              FUN_009843d0(&local_44);
              local_8 = CONCAT31(local_8._1_3_,6);
              if (0xf < local_e0) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b(local_f4);
              }
            }
          }
          piVar16 = (int *)(DAT_01258a48 + 0x18);
          local_18[0] = (uint *)((int)local_18[0] + 1);
          puVar19 = local_40;
        } while ((int)local_18[0] <
                 *(int *)(DAT_01258a48 + 0x1c) - *(int *)(DAT_01258a48 + 0x18) >> 2);
      }
      iVar15 = local_44;
      puVar6 = (uint *)(((int)puVar19 - local_44) / 0x44);
      local_84 = local_84 & 0xffffff00;
      FUN_00984560(local_44,puVar19,puVar6,local_84);
      if (0 < (int)puVar6) {
        puVar19 = (uint *)(iVar15 + 8);
        local_28 = puVar6;
        do {
          if (local_2c < 0x32) {
            uVar13 = (**(code **)(**(int **)(*local_24 + *puVar19 * 4) + 0x2c))(&local_b4);
            local_8._0_1_ = 8;
            FUN_0097f2f0(local_48,uVar13,puVar19 + 8,(float)(int)puVar19[-2]);
            puVar1 = local_20;
            local_8 = CONCAT31(local_8._1_3_,6);
            if (0xf < local_a4._4_4_) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(local_b4);
            }
            uVar14 = *puVar19;
            local_1c = uVar14;
            if ((int)uVar14 < (int)(local_20[10] - local_20[9]) >> 2) {
              puVar6 = (uint *)local_20[0x12];
              if (&local_1c < puVar6) {
                puVar20 = (uint *)local_20[0x11];
                if (&local_1c < puVar20) goto LAB_0098073e;
                if (puVar6 == (uint *)local_20[0x13]) {
                  FUN_007b94a0();
                }
                if ((undefined4 *)puVar1[0x12] != (undefined4 *)0x0) {
                  *(undefined4 *)puVar1[0x12] =
                       *(undefined4 *)(puVar1[0x11] + ((int)&local_1c - (int)puVar20 >> 2) * 4);
                }
              }
              else {
LAB_0098073e:
                if (puVar6 == (uint *)local_20[0x13]) {
                  FUN_007b94a0();
                }
                if ((uint *)puVar1[0x12] != (uint *)0x0) {
                  *(uint *)puVar1[0x12] = uVar14;
                }
              }
              puVar1[0x12] = puVar1[0x12] + 4;
            }
            local_2c = local_2c + 1;
          }
          puVar19 = puVar19 + 0x11;
          local_28 = (uint *)((int)local_28 + -1);
        } while (local_28 != (uint *)0x0);
      }
      local_108 = 0xf;
      local_10c = 0;
      local_11c[0] = local_11c[0] & 0xffffff00;
      FUN_00409350("chart",5);
      local_8._0_1_ = 9;
      iVar15 = (**(code **)(*(int *)*local_20 + 0x44))(local_11c);
      local_8 = CONCAT31(local_8._1_3_,6);
      if (0xf < local_108) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_11c[0]);
      }
      local_108 = 0xf;
      local_10c = 0;
      local_11c[0] = local_11c[0] & 0xffffff00;
      FUN_009e11f0(*(undefined4 *)(iVar15 + 0x94),&local_7c,1);
      if (local_98 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_98);
      }
      local_98 = 0;
      local_94 = 0;
      local_90 = 0;
      goto LAB_00980817;
    }
    local_8 = 0xffffffff;
    local_44 = 0;
    local_40 = (uint *)0x0;
    local_3c = 0;
    if (local_7c != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_7c);
    }
    local_7c = 0;
    local_78 = 0;
    local_74 = 0;
    ppvVar10 = ExceptionList;
    piVar16 = local_34;
  } while( true );
}

