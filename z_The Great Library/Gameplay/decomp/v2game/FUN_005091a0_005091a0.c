// FUN_005091a0 @ 005091a0  (requested 005091A0, first bytes: 55 8B EC 64 A1 00 00 00)


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Removing unreachable block (ram,0x0050ad76) */
/* WARNING: Type propagation algorithm not settling */

void FUN_005091a0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  uint uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int *piVar10;
  uint uVar11;
  undefined1 **ppuVar12;
  int **ppiVar13;
  uint *puVar14;
  int *piVar15;
  int *piVar16;
  int iVar17;
  undefined4 *puVar18;
  undefined4 uVar19;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  int *extraout_ECX_03;
  int *extraout_ECX_04;
  int *extraout_ECX_05;
  int iVar20;
  undefined1 *puVar21;
  undefined4 *puVar23;
  undefined4 *puVar24;
  undefined4 *puVar25;
  undefined1 *puVar26;
  undefined4 *puVar27;
  undefined1 *puVar28;
  undefined4 *puVar30;
  undefined4 *puVar31;
  undefined4 *puVar32;
  undefined4 *puVar33;
  undefined1 *puVar34;
  undefined4 *puVar35;
  int iVar36;
  int iVar37;
  bool bVar38;
  longlong lVar39;
  undefined8 uVar40;
  undefined4 *apuStack_1dc [2];
  undefined1 local_1c4 [8];
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  int local_1b0;
  int local_1a0;
  undefined1 local_17c [28];
  uint local_160 [4];
  undefined4 local_150;
  uint local_14c;
  undefined4 local_144 [2];
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  int local_130;
  undefined4 local_12c;
  undefined2 local_128;
  undefined4 local_124;
  undefined4 *local_120;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined1 local_fc [8];
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec [5];
  int local_d8;
  undefined4 local_b4;
  int local_b0;
  uint local_ac [4];
  undefined4 local_9c;
  uint local_98;
  int *local_90;
  int *local_88;
  int local_84;
  undefined4 *local_80;
  int local_7c;
  int local_78;
  int *local_74;
  undefined1 *local_70;
  uint local_6c [3];
  int *local_60;
  undefined8 local_5c;
  undefined1 local_54;
  undefined4 local_4c;
  undefined1 *local_48 [2];
  int local_40;
  undefined4 local_3c;
  int *local_38;
  int *local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int *local_20;
  int local_1c;
  int local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  undefined4 *puVar22;
  undefined4 *puVar29;
  
  puVar5 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00bb7fd8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (DAT_0131bb34 == 0) {
    apuStack_1dc[1] = (undefined4 *)0x188;
    apuStack_1dc[0] = (undefined4 *)0x5091da;
    ExceptionList = &local_10;
    iVar7 = FUN_00aae9af();
    local_8 = 0;
    if (iVar7 == 0) {
      apuStack_1dc[1] = (undefined4 *)0x0;
    }
    else {
      apuStack_1dc[1] = (undefined4 *)0x5091ee;
      apuStack_1dc[1] = (undefined4 *)FUN_0041a160();
    }
    local_8 = 0xffffffff;
    apuStack_1dc[0] = (undefined4 *)0x5091ff;
    FUN_00423700();
  }
  iVar7 = param_1[8];
  local_7c = DAT_012587f0;
  local_90 = DAT_012588e8;
  iVar36 = *(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2;
  iVar37 = DAT_012588e8[0x2d8];
  local_70 = (undefined1 *)DAT_012588e8[0x2c3];
  iVar8 = (int)(local_70 + -43800000) / 0x18;
  local_5c = (double)iVar8 / 365.0;
  local_14 = 0;
  for (iVar17 = (iVar8 - (int)((float)(int)local_5c * 365.0)) - DAT_00f1027c; -1 < iVar17;
      iVar17 = iVar17 - (&DAT_00f1027c)[local_14]) {
    local_14 = local_14 + 1;
  }
  iVar20 = 0;
  iVar17 = 0;
  local_18 = 0;
  if (1 < (int)local_14) {
    do {
      local_18 = local_18 + (&DAT_00f10280)[iVar17];
      iVar20 = iVar20 + (&DAT_00f1027c)[iVar17];
      iVar17 = iVar17 + 2;
    } while (iVar17 < (int)(local_14 - 1));
  }
  if (iVar17 < (int)local_14) {
    iVar17 = (&DAT_00f1027c)[iVar17];
  }
  else {
    iVar17 = 0;
  }
  local_80 = (undefined4 *)
             ((iVar8 - (int)((float)(int)local_5c * 365.0)) - (iVar17 + local_18 + iVar20));
  iVar17 = 0;
  for (iVar8 = (iVar8 - (int)((float)(int)local_5c * 365.0)) - DAT_00f1027c; -1 < iVar8;
      iVar8 = iVar8 - (&DAT_00f1027c)[iVar17]) {
    iVar17 = iVar17 + 1;
  }
  local_20 = (int *)(&DAT_00f1027c)[iVar17];
  apuStack_1dc[1] = (undefined4 *)0x0;
  apuStack_1dc[0] = (undefined4 *)0x509351;
  local_24 = iVar36;
  FUN_008a8650();
  piVar10 = (int *)param_1[0x276];
  while (((int *)param_1[0x276] <= piVar10 && (piVar10 < (int *)param_1[0x277]))) {
    local_14 = *(uint *)(DAT_012588e8[0x2b3] + *piVar10 * 4);
    piVar10 = piVar10 + 1;
    local_34 = piVar10;
    if (0 < iVar36) {
      local_1c = 0;
      local_28 = iVar36;
      do {
        iVar8 = *(int *)(local_1c + *(int *)(local_14 + 0x194));
        piVar10 = local_34;
        iVar36 = local_24;
joined_r0x005093b4:
        local_34 = piVar10;
        local_24 = iVar36;
        if (iVar8 != 0) {
          local_18 = *(int *)(iVar8 + 0x27c);
          if (0 < *(int *)(iVar8 + 0x58)) goto code_r0x005093d4;
          goto LAB_00509467;
        }
        local_1c = local_1c + 0x10;
        local_28 = local_28 + -1;
      } while (local_28 != 0);
      local_28 = 0;
      local_18 = 0;
    }
  }
  apuStack_1dc[1] = param_1;
  apuStack_1dc[0] = (undefined4 *)0x50949b;
  FUN_0051fef0();
  if (iVar37 == iVar7) {
    if (DAT_01258728 == (int *)0x0) {
      apuStack_1dc[1] = (undefined4 *)0x14;
      apuStack_1dc[0] = (undefined4 *)0x5094b6;
      DAT_01258728 = (int *)FUN_00aae9af();
      if (DAT_01258728 == (int *)0x0) {
        DAT_01258728 = (int *)0x0;
      }
      else {
        *DAT_01258728 = 0;
        DAT_01258728[1] = 0;
        DAT_01258728[2] = 0;
        *(undefined1 *)(DAT_01258728 + 4) = 0;
      }
    }
    local_34 = (int *)param_1[0x276];
    while (((int *)param_1[0x276] <= local_34 && (local_34 < (int *)param_1[0x277]))) {
      iVar7 = *local_34;
      local_34 = local_34 + 1;
      local_20 = *(int **)(DAT_012588e8[0x2b3] + iVar7 * 4);
      apuStack_1dc[1] = *(undefined4 **)(local_20[0x16] * 0xb0 + *DAT_01258728 + 0xc);
      apuStack_1dc[0] = (undefined4 *)0x50953a;
      FUN_004c24a0();
      if (0 < local_24) {
        local_1c = 0;
        local_28 = local_24;
        do {
          local_18 = *(int *)(local_1c + local_20[0x65]);
          while (iVar7 = local_18, iVar7 != 0) {
            local_18 = *(int *)(iVar7 + 0x27c);
            if ((((*(int *)(iVar7 + 0x1d4) != 0) && (*(int *)(*(int *)(iVar7 + 0x1d4) + 0xb0) != 0))
                && (0 < *(int *)(iVar7 + 0x58))) &&
               (local_14 = 0, 0 < (int)(param_1[0x53a] - param_1[0x539]) / 0x18)) {
              do {
                apuStack_1dc[0] = (undefined4 *)0x5095fe;
                apuStack_1dc[1] = (undefined4 *)iVar7;
                FUN_00966760();
                apuStack_1dc[1] = (undefined4 *)0x509611;
                FUN_00966880();
                local_14 = local_14 + 1;
              } while ((int)local_14 < (int)(param_1[0x53a] - param_1[0x539]) / 0x18);
            }
          }
          local_1c = local_1c + 0x10;
          local_28 = local_28 + -1;
        } while (local_28 != 0);
        local_28 = 0;
        local_18 = 0;
      }
    }
  }
  apuStack_1dc[1] = &local_b4;
  apuStack_1dc[0] = param_1;
  puVar9 = (undefined4 *)FUN_00532c90();
  param_1[0x39c] = *puVar9;
  param_1[0x39d] = puVar9[1];
  iVar37 = (int)(param_1[0x277] - param_1[0x276]) >> 2;
  apuStack_1dc[1] = (undefined4 *)0x509695;
  iVar7 = -(iVar37 * 4 + 8);
  puVar21 = &stack0xfffffe2c + iVar7;
  puVar9 = (undefined4 *)(&stack0xfffffe30 + iVar7);
  *(undefined4 *)(&stack0xfffffe2c + iVar7) = 0xa110ca7e;
  local_80 = puVar9 + iVar37;
  *local_80 = 0xa110ca7e;
  puVar18 = puVar9;
  for (piVar10 = (int *)param_1[0x276];
      ((int *)param_1[0x276] <= piVar10 && (piVar10 < (int *)param_1[0x277])); piVar10 = piVar10 + 1
      ) {
    *puVar18 = *(undefined4 *)(local_90[0x2b3] + *piVar10 * 4);
    puVar18 = puVar18 + 1;
  }
  *(undefined4 *)((int)apuStack_1dc + iVar7 + 4) = 0;
  *(undefined4 *)((int)apuStack_1dc + iVar7) = 0x5096ee;
  FUN_008a8650();
  local_7c = 0;
  if (0 < (int)(param_1[0xe] - param_1[0xd]) / 0x278) {
    local_1c = 0;
    puVar21 = &stack0xfffffe2c + iVar7;
    do {
      local_28 = param_1[0xd] + local_1c;
      local_88 = (int *)(local_28 + 0x58);
      if (*local_88 != 0) {
        local_24 = 0;
        local_78 = 0;
        local_2c = 0;
        if (0 < iVar37) {
          do {
            if (*(int *)(*(int *)(puVar9[local_2c] + 0x188) + 0x84) < 1) {
              iVar7 = param_1[0xd] + local_1c;
              if ((*(char *)(*(int *)(iVar7 + 0x68) + 0x3ec) == '\0') ||
                 (iVar8 = puVar9[local_2c],
                 *(int *)(*(int *)(iVar8 + 0x188) + 0x268) == *(int *)(iVar8 + 0x58))) {
                local_1b8 = 0;
                local_4c = 0x2d2d2d;
                local_1bc = 0x2d2d2d;
                *(int *)(local_1a0 + 0x14) = iVar7;
                local_1b4 = *(undefined4 *)(puVar9[local_2c] + 0x58);
                local_74 = *(int **)(param_1[0xd] + 0x68 + local_1c);
                local_40 = local_74[0x2d];
                local_1b0 = iVar7;
                if ((local_74[0x2f] - local_74[0x2e] & 0xfffffffcU) != 0) {
                  local_18 = 0;
                  local_20 = (int *)(local_74[0x2f] - local_74[0x2e] >> 2);
                  if (0 < (int)local_20) {
                    do {
                      iVar7 = *(int *)(local_18 * 4 + local_74[0x2e]);
                      local_14 = 0;
                      iVar8 = *(int *)(iVar7 + 0xc) - *(int *)(iVar7 + 8) >> 2;
                      if (0 < iVar8) {
                        do {
                          pcVar2 = *(code **)(**(int **)(*(int *)(iVar7 + 8) + local_14 * 4) + 0x18)
                          ;
                          *(undefined1 **)(puVar21 + -4) = local_1c4;
                          puVar22 = (undefined4 *)(puVar21 + -8);
                          puVar21 = puVar21 + -8;
                          *puVar22 = 0x509867;
                          cVar6 = (*pcVar2)();
                          if (cVar6 == '\0') goto LAB_005098a4;
                          local_14 = local_14 + 1;
                        } while ((int)local_14 < iVar8);
                      }
                      iVar7 = *(int *)(*(int *)(local_74[0x2e] + local_18 * 4) + 0x20);
                      lVar39 = (longlong)local_40;
                      *(undefined4 *)(puVar21 + -4) = 0;
                      *(undefined4 *)(puVar21 + -8) = 1000;
                      *(longlong *)(puVar21 + -0x10) = iVar7 * lVar39;
                      *(undefined4 *)(puVar21 + -0x14) = 0x50989d;
                      local_40 = __alldiv();
                      if (local_40 < 1) break;
LAB_005098a4:
                      local_18 = local_18 + 1;
                    } while (local_18 < (int)local_20);
                  }
                }
                iVar7 = local_40;
                if (*(int *)(puVar9[local_2c] + 0x164) == 0) {
                  iVar8 = 0;
                }
                else {
                  iVar8 = **(int **)(puVar9[local_2c] + 0x15c);
                }
                piVar10 = *(int **)(*(int *)(DAT_012588e8[0x2fc] + param_1[8] * 0x10) +
                                   *(int *)(iVar8 + 0x6c) * 4);
                *(undefined4 *)(puVar21 + -4) = 0;
                *(undefined4 *)(puVar21 + -8) = 100000;
                *(int *)(puVar21 + -0xc) = iVar7 >> 0x1f;
                *(int *)(puVar21 + -0x10) = iVar7;
                *(undefined4 *)(puVar21 + -0x14) = 0x5098fe;
                uVar40 = __allmul();
                *(undefined4 *)(puVar21 + -4) = 0;
                *(undefined4 *)(puVar21 + -8) = 1000;
                *(undefined8 *)(puVar21 + -0x10) = uVar40;
                *(undefined4 *)(puVar21 + -0x14) = 0x50990c;
                iVar7 = __alldiv();
                pcVar2 = *(code **)(*piVar10 + 0x34);
                puVar23 = (undefined4 *)(puVar21 + -4);
                puVar21 = puVar21 + -4;
                *puVar23 = 0x509917;
                cVar6 = (*pcVar2)();
                if ((cVar6 != '\0') && (iVar8 = piVar10[0x16], 0 < iVar8)) {
                  *(undefined4 *)(puVar21 + -4) = 0;
                  *(undefined4 *)(puVar21 + -8) = 1000;
                  *(longlong *)(puVar21 + -0x10) = (longlong)(iVar8 + 1000) * (longlong)iVar7;
                  *(undefined4 *)(puVar21 + -0x14) = 0x509938;
                  iVar7 = __alldiv();
                }
                iVar8 = puVar9[local_2c];
                iVar17 = *(int *)(*(int *)(iVar8 + 0x9c) + 0x2e0);
                *(undefined4 *)(puVar21 + -4) = 0;
                *(undefined4 *)(puVar21 + -8) = 1000;
                *(longlong *)(puVar21 + -0x10) = (longlong)(iVar17 + 1000) * (longlong)iVar7;
                *(undefined4 *)(puVar21 + -0x14) = 0x509964;
                iVar7 = __alldiv();
                *(int *)(iVar8 + 0x308) = iVar7;
                if (0 < iVar7) {
                  local_24 = local_24 + iVar7;
                  local_78 = local_78 + 1;
                }
              }
              else {
                *(undefined4 *)(iVar8 + 0x308) = 0xffffd8f0;
              }
            }
            else {
              *(undefined4 *)(puVar9[local_2c] + 0x308) = 0xffffd8f0;
            }
            local_2c = local_2c + 1;
          } while (local_2c < iVar37);
        }
        local_38 = (int *)((uint)local_38 & 0xffffff00);
        *(int **)(puVar21 + -4) = local_38;
        puVar18 = local_80;
        *(int *)(puVar21 + -8) = (int)local_80 - (int)puVar9 >> 2;
        *(undefined4 **)(puVar21 + -0xc) = puVar18;
        *(undefined4 **)(puVar21 + -0x10) = puVar9;
        *(undefined4 *)(puVar21 + -0x14) = 0x5099a1;
        FUN_0054b200();
        local_40 = 0;
        iVar7 = local_24;
        if (0 < iVar37) {
          do {
            if ((*local_88 < 0xb) || (local_20 = (int *)puVar9[local_40], local_20[0xc2] < 1))
            break;
            local_74 = (int *)(*local_88 * 1000);
            iVar8 = local_20[0xc2];
            if (iVar7 == 0) {
              iVar8 = -1;
            }
            else if (iVar8 + 0x189373U < 0x39580e) {
              iVar8 = (iVar8 * 1000) / iVar7;
            }
            else {
              *(undefined4 *)(puVar21 + -4) = 0;
              iVar7 = local_24;
              *(undefined4 *)(puVar21 + -8) = 1000;
              *(int *)(puVar21 + -0xc) = iVar8 >> 0x1f;
              *(int *)(puVar21 + -0x10) = iVar8;
              local_30 = iVar7 >> 0x1f;
              *(undefined4 *)(puVar21 + -0x14) = 0x509a2f;
              uVar40 = __allmul();
              *(int *)(puVar21 + -4) = local_30;
              *(int *)(puVar21 + -8) = iVar7;
              *(undefined8 *)(puVar21 + -0x10) = uVar40;
              *(undefined4 *)(puVar21 + -0x14) = 0x509a3b;
              iVar8 = __alldiv();
              local_b0 = iVar8 >> 0x1f;
              iVar7 = local_24;
            }
            lVar39 = (longlong)(int)local_74;
            *(undefined4 *)(puVar21 + -4) = 0;
            *(undefined4 *)(puVar21 + -8) = 1000;
            *(longlong *)(puVar21 + -0x10) = iVar8 * lVar39;
            *(undefined4 *)(puVar21 + -0x14) = 0x509a59;
            iVar17 = __alldiv();
            iVar8 = local_28;
            if (10 < iVar17 / 1000) {
              *(int *)(puVar21 + -4) = iVar17 / 1000;
              *(int *)(puVar21 + -8) = iVar8;
              *(undefined4 *)(puVar21 + -0xc) = 0x509a7d;
              FUN_004ba430();
            }
            local_40 = local_40 + 1;
          } while (local_40 < iVar37);
        }
        iVar8 = local_28;
        iVar7 = *local_88;
        if (0 < iVar7) {
          if (local_78 == 0) {
            if (iVar7 < 1) goto LAB_00509ad2;
            *(int *)(puVar21 + -4) = iVar7;
            *(int *)(puVar21 + -8) = iVar8;
          }
          else {
            *(undefined4 *)(puVar21 + -4) = 0;
            *(undefined4 *)(puVar21 + -8) = 0x36;
            *(undefined4 *)(puVar21 + -0xc) = 0x509aa9;
            FUN_009b7950();
            *(int *)(puVar21 + -4) = *local_88;
            *(int *)(puVar21 + -8) = local_28;
          }
          *(undefined4 *)(puVar21 + -0xc) = 0x509ad2;
          FUN_004ba430();
        }
      }
LAB_00509ad2:
      local_1c = local_1c + 0x278;
      local_7c = local_7c + 1;
    } while (local_7c < (int)(param_1[0xe] - param_1[0xd]) / 0x278);
  }
  local_20 = (int *)0x0;
  if (0 < (int)(param_1[0x12] - param_1[0x11]) / 0x278) {
    local_24 = 0;
    do {
      local_14 = local_24 + param_1[0x11];
      local_74 = (int *)(local_14 + 0x58);
      if (*local_74 != 0) {
        local_1c = 0;
        local_40 = 0;
        local_2c = 0;
        if (0 < iVar37) {
          do {
            iVar8 = local_2c;
            iVar7 = puVar9[local_2c];
            if (*(int *)(*(int *)(iVar7 + 0x188) + 0x84) < 1) {
              *(undefined4 *)(iVar7 + 0x308) = 0xffffd8f0;
            }
            else {
              iVar17 = param_1[0x11] + local_24;
              if ((*(char *)(*(int *)(iVar17 + 0x68) + 0x3ec) == '\0') ||
                 (*(int *)(*(int *)(iVar7 + 0x188) + 0x268) == *(int *)(iVar7 + 0x58))) {
                if ((*(char *)(*(int *)(*(int *)(iVar17 + 0x6c) + 0x50) + 0x18) == '\0') &&
                   (*(int *)(*(int *)(local_14 + 100) + 0x16c) != *(int *)(iVar7 + 0x16c))) {
                  *(undefined4 *)(iVar7 + 0x308) = 0xffffd8f0;
                }
                else {
                  *(undefined4 **)(puVar21 + -4) = param_1 + 7;
                  *(int *)(puVar21 + -8) = iVar17;
                  *(undefined4 *)(puVar21 + -0xc) = 0x509bf7;
                  FUN_008a8730();
                  local_f0 = 0;
                  local_34 = (int *)0x2d2d2d;
                  local_f4 = 0x2d2d2d;
                  local_ec[0] = *(undefined4 *)(puVar9[iVar8] + 0x58);
                  *(int *)(local_d8 + 0x14) = param_1[0x11] + local_24;
                  local_88 = *(int **)(local_24 + 0x68 + param_1[0x11]);
                  local_78 = local_88[0x2d];
                  if ((local_88[0x2f] - local_88[0x2e] & 0xfffffffcU) != 0) {
                    local_18 = 0;
                    local_38 = (int *)(local_88[0x2f] - local_88[0x2e] >> 2);
                    if (0 < (int)local_38) {
                      do {
                        iVar7 = *(int *)(local_18 * 4 + local_88[0x2e]);
                        local_28 = 0;
                        iVar8 = *(int *)(iVar7 + 0xc) - *(int *)(iVar7 + 8) >> 2;
                        if (0 < iVar8) {
                          do {
                            pcVar2 = *(code **)(**(int **)(*(int *)(iVar7 + 8) + local_28 * 4) +
                                               0x18);
                            *(undefined1 **)(puVar21 + -4) = local_fc;
                            puVar24 = (undefined4 *)(puVar21 + -8);
                            puVar21 = puVar21 + -8;
                            *puVar24 = 0x509cc7;
                            cVar6 = (*pcVar2)();
                            if (cVar6 == '\0') goto LAB_00509d07;
                            local_28 = local_28 + 1;
                          } while (local_28 < iVar8);
                        }
                        iVar7 = *(int *)(*(int *)(local_88[0x2e] + local_18 * 4) + 0x20);
                        lVar39 = (longlong)local_78;
                        *(undefined4 *)(puVar21 + -4) = 0;
                        *(undefined4 *)(puVar21 + -8) = 1000;
                        *(longlong *)(puVar21 + -0x10) = iVar7 * lVar39;
                        *(undefined4 *)(puVar21 + -0x14) = 0x509d00;
                        local_78 = __alldiv();
                        if (local_78 < 1) break;
LAB_00509d07:
                        local_18 = local_18 + 1;
                      } while (local_18 < (int)local_38);
                    }
                  }
                  iVar7 = local_78;
                  *(undefined4 *)(puVar21 + -4) = 0;
                  *(undefined4 *)(puVar21 + -8) = 100000;
                  *(int *)(puVar21 + -0xc) = iVar7 >> 0x1f;
                  *(int *)(puVar21 + -0x10) = iVar7;
                  *(undefined4 *)(puVar21 + -0x14) = 0x509d29;
                  uVar40 = __allmul();
                  *(undefined4 *)(puVar21 + -4) = 0;
                  *(undefined4 *)(puVar21 + -8) = 1000;
                  *(undefined8 *)(puVar21 + -0x10) = uVar40;
                  *(undefined4 *)(puVar21 + -0x14) = 0x509d37;
                  iVar7 = __alldiv();
                  if (*(int *)(puVar9[local_2c] + 0x164) == 0) {
                    iVar8 = 0;
                  }
                  else {
                    iVar8 = **(int **)(puVar9[local_2c] + 0x15c);
                  }
                  piVar10 = *(int **)(*(int *)(DAT_012588e8[0x2fc] + param_1[8] * 0x10) +
                                     *(int *)(iVar8 + 0x6c) * 4);
                  pcVar2 = *(code **)(*piVar10 + 0x34);
                  puVar25 = (undefined4 *)(puVar21 + -4);
                  puVar21 = puVar21 + -4;
                  *puVar25 = 0x509d7a;
                  cVar6 = (*pcVar2)();
                  if ((cVar6 != '\0') && (iVar8 = piVar10[0x16], 0 < iVar8)) {
                    *(undefined4 *)(puVar21 + -4) = 0;
                    *(undefined4 *)(puVar21 + -8) = 1000;
                    *(longlong *)(puVar21 + -0x10) = (longlong)(iVar8 + 1000) * (longlong)iVar7;
                    *(undefined4 *)(puVar21 + -0x14) = 0x509d9b;
                    iVar7 = __alldiv();
                  }
                  iVar8 = puVar9[local_2c];
                  iVar17 = *(int *)(*(int *)(iVar8 + 0x9c) + 0x2e0);
                  *(undefined4 *)(puVar21 + -4) = 0;
                  *(undefined4 *)(puVar21 + -8) = 1000;
                  *(longlong *)(puVar21 + -0x10) = (longlong)(iVar17 + 1000) * (longlong)iVar7;
                  *(undefined4 *)(puVar21 + -0x14) = 0x509dc7;
                  iVar7 = __alldiv();
                  *(int *)(iVar8 + 0x308) = iVar7;
                  if (0 < iVar7) {
                    local_1c = local_1c + iVar7;
                    local_40 = local_40 + 1;
                  }
                }
              }
              else {
                *(undefined4 *)(iVar7 + 0x308) = 0xffffd8f0;
              }
            }
            local_2c = local_2c + 1;
          } while (local_2c < iVar37);
        }
        local_48[0] = (undefined1 *)((uint)local_48[0] & 0xffffff00);
        *(undefined1 **)(puVar21 + -4) = local_48[0];
        puVar18 = local_80;
        *(int *)(puVar21 + -8) = (int)local_80 - (int)puVar9 >> 2;
        *(undefined4 **)(puVar21 + -0xc) = puVar18;
        *(undefined4 **)(puVar21 + -0x10) = puVar9;
        *(undefined4 *)(puVar21 + -0x14) = 0x509e04;
        FUN_0054b200();
        local_7c = 0;
        if (0 < iVar37) {
          do {
            if (*local_74 < 0xb) break;
            local_28 = *local_74 * 1000;
            local_38 = (int *)puVar9[local_7c];
            iVar7 = local_38[0xc2];
            if (local_1c == 0) {
              iVar7 = -1;
            }
            else if (iVar7 + 0x189373U < 0x39580e) {
              iVar7 = (iVar7 * 1000) / local_1c;
            }
            else {
              *(undefined4 *)(puVar21 + -4) = 0;
              iVar8 = local_1c;
              *(undefined4 *)(puVar21 + -8) = 1000;
              *(int *)(puVar21 + -0xc) = iVar7 >> 0x1f;
              *(int *)(puVar21 + -0x10) = iVar7;
              local_b0 = iVar8 >> 0x1f;
              *(undefined4 *)(puVar21 + -0x14) = 0x509e7f;
              uVar40 = __allmul();
              *(int *)(puVar21 + -4) = local_b0;
              *(int *)(puVar21 + -8) = iVar8;
              *(undefined8 *)(puVar21 + -0x10) = uVar40;
              *(undefined4 *)(puVar21 + -0x14) = 0x509e8e;
              iVar7 = __alldiv();
              local_88 = (int *)(iVar7 >> 0x1f);
            }
            piVar10 = local_38;
            iVar8 = local_7c;
            lVar39 = (longlong)local_28;
            *(undefined4 *)(puVar21 + -4) = 0;
            *(undefined4 *)(puVar21 + -8) = 1000;
            *(longlong *)(puVar21 + -0x10) = lVar39 * iVar7;
            *(undefined4 *)(puVar21 + -0x14) = 0x509eb0;
            iVar7 = __alldiv();
            uVar11 = local_14;
            if (10 < iVar7 / 1000) {
              if (piVar10[0xc2] < 1) break;
              *(int *)(puVar21 + -4) = iVar7 / 1000;
              *(uint *)(puVar21 + -8) = uVar11;
              *(undefined4 *)(puVar21 + -0xc) = 0x509edd;
              FUN_004ba430();
            }
            local_7c = iVar8 + 1;
          } while (local_7c < iVar37);
        }
        uVar11 = local_14;
        iVar7 = *local_74;
        if (0 < iVar7) {
          if (local_40 == 0) {
            if (iVar7 < 1) goto LAB_00509f29;
            *(int *)(puVar21 + -4) = iVar7;
            *(uint *)(puVar21 + -8) = uVar11;
          }
          else {
            *(undefined4 *)(puVar21 + -4) = 0;
            *(undefined4 *)(puVar21 + -8) = 0x36;
            *(undefined4 *)(puVar21 + -0xc) = 0x509f03;
            FUN_009b7950();
            *(int *)(puVar21 + -4) = *local_74;
            *(uint *)(puVar21 + -8) = local_14;
          }
          *(undefined4 *)(puVar21 + -0xc) = 0x509f29;
          FUN_004ba430();
        }
      }
LAB_00509f29:
      local_24 = local_24 + 0x278;
      local_20 = (int *)((int)local_20 + 1);
    } while ((int)local_20 < (int)(param_1[0x12] - param_1[0x11]) / 0x278);
  }
  *(undefined1 ***)(puVar21 + -4) = &local_70;
  *(undefined1 ***)(puVar21 + -8) = &local_70;
  *(undefined4 *)(puVar21 + -0xc) = 0x509f67;
  FUN_00538150();
  *(undefined4 **)(puVar21 + -0xc) = param_1;
  *(undefined4 *)(puVar21 + -0x10) = 0x509f6d;
  FUN_00507770();
  *(undefined4 **)(puVar21 + -4) = param_1;
  *(undefined4 *)(puVar21 + -8) = 0x509f73;
  FUN_005370b0();
  *(undefined4 **)(puVar21 + -4) = param_1;
  *(undefined4 *)(puVar21 + -8) = 0x509f79;
  FUN_00538200();
  *(undefined4 **)(puVar21 + -4) = param_1;
  *(undefined4 *)(puVar21 + -8) = 0x509f7f;
  FUN_0050c6d0();
  *(undefined4 **)(puVar21 + -4) = param_1;
  *(undefined4 *)(puVar21 + -8) = 0x509f85;
  FUN_0053f0c0();
  piVar10 = param_1 + 0x552;
  *piVar10 = *piVar10 + -1;
  if (*piVar10 < 0) {
    param_1[0x552] = 0;
  }
  piVar10 = (int *)param_1[0x2f5];
  local_48[0] = (undefined1 *)(*(int *)(*(int *)(DAT_012586dc + 0x20) + 0xfc) / 1000);
  if (piVar10 != (int *)0x0) {
    local_70 = (undefined1 *)(int)local_5c;
    do {
      iVar7 = *piVar10;
      piVar10 = (int *)piVar10[2];
      bVar38 = false;
      if (*(int *)(iVar7 + 0x88) != 0) {
        bVar38 = *(int *)(*(int *)(iVar7 + 0x88) + 0x74) != 0;
      }
      iVar37 = (int)local_70 - (int)((double)((*(int *)(iVar7 + 0x84) + -43800000) / 0x18) / 365.0);
      local_20 = piVar10;
      if ((0x18 < iVar37) || (bVar38)) {
        iVar37 = iVar37 / (int)local_48[0] + 1;
        if (bVar38) {
          iVar37 = iVar37 * 2;
        }
        *(undefined4 *)(puVar21 + -4) = 0;
        *(undefined4 *)(puVar21 + -8) = 0xc;
        *(undefined4 *)(puVar21 + -0xc) = 0x50a046;
        iVar8 = FUN_009b7950();
        uVar19 = 0x2ac6;
        if (iVar8 % 0x2ac6 < iVar37) {
          if ((param_1[8] == DAT_012588e8[0x2d8]) && (*(int *)(iVar7 + 0x88) != 0)) {
            *(undefined4 **)(puVar21 + -4) = param_1;
            *(undefined4 *)(puVar21 + -8) = 0x50a081;
            piVar10 = (int *)FUN_005061e0();
            *(undefined4 *)(puVar21 + -4) = 4;
            *(undefined **)(puVar21 + -8) = &DAT_00dfbf14;
            local_5c = 3.18299368644791e-313;
            local_6c[0] = local_6c[0] & 0xffffff00;
            *(undefined4 *)(puVar21 + -0xc) = 0x50a0a4;
            FUN_00409350();
            local_8 = 0x16;
            *(int *)(puVar21 + -4) = iVar7 + 0x94;
            *(uint **)(puVar21 + -8) = local_6c;
            *(undefined1 **)(puVar21 + -0xc) = local_17c;
            *(undefined4 *)(puVar21 + -0x10) = 0x50a0c4;
            local_38 = (int *)FUN_00424aa0();
            local_8._0_1_ = 0x17;
            iVar37 = piVar10[1];
            *(undefined4 *)(puVar21 + -4) = 0x44;
            *(undefined4 *)(puVar21 + -8) = 0x50a0d8;
            iVar8 = FUN_00aae9af();
            local_8 = CONCAT31(local_8._1_3_,0x18);
            local_80 = (undefined4 *)iVar8;
            if (iVar8 == 0) {
              iVar8 = 0;
            }
            else {
              *(int *)(puVar21 + -4) = iVar8;
              *(undefined4 *)(puVar21 + -8) = 0x50a0f1;
              FUN_00a3ab70();
              *(int *)(iVar8 + 0x38) = iVar37;
              *(undefined4 *)(iVar8 + 0x3c) = 0;
              *(undefined1 *)(iVar8 + 0x40) = 0;
            }
            iVar17 = piVar10[2];
            piVar10[1] = iVar8;
            piVar10[2] = iVar17 + 1;
            if (iVar17 == 0) {
              *piVar10 = iVar8;
            }
            else {
              *(int *)(iVar37 + 0x3c) = iVar8;
            }
            *(undefined4 *)(puVar21 + -4) = 0x50a12b;
            FUN_00a39a80();
            local_8 = 0xffffffff;
            if (0xf < local_5c._4_4_) {
              *(uint *)(puVar21 + -4) = local_6c[0];
                    /* WARNING: Subroutine does not return */
              *(undefined **)(puVar21 + -8) = &UNK_0050a141;
              FUN_00aae91b();
            }
            *(undefined4 *)(puVar21 + -4) = 4;
            *(undefined **)(puVar21 + -8) = &DAT_00df7e80;
            local_5c = 3.18299368644791e-313;
            local_6c[0] = local_6c[0] & 0xffffff00;
            *(undefined4 *)(puVar21 + -0xc) = 0x50a165;
            FUN_00409350();
            local_8 = 0x19;
            *(uint **)(puVar21 + -4) = local_ac;
            *(int *)(puVar21 + -8) = iVar7;
            *(undefined4 *)(puVar21 + -0xc) = 0x50a17c;
            uVar19 = FUN_005b7db0();
            *(undefined4 *)(puVar21 + -4) = uVar19;
            *(uint **)(puVar21 + -8) = local_6c;
            *(undefined1 **)(puVar21 + -0xc) = local_17c;
            local_8._0_1_ = 0x1a;
            *(undefined4 *)(puVar21 + -0x10) = 0x50a191;
            local_38 = (int *)FUN_00424aa0();
            local_8._0_1_ = 0x1b;
            iVar37 = piVar10[1];
            *(undefined4 *)(puVar21 + -4) = 0x44;
            *(undefined4 *)(puVar21 + -8) = 0x50a1a5;
            iVar8 = FUN_00aae9af();
            local_8 = CONCAT31(local_8._1_3_,0x1c);
            local_80 = (undefined4 *)iVar8;
            if (iVar8 == 0) {
              iVar8 = 0;
            }
            else {
              *(int *)(puVar21 + -4) = iVar8;
              *(undefined4 *)(puVar21 + -8) = 0x50a1be;
              FUN_00a3ab70();
              *(int *)(iVar8 + 0x38) = iVar37;
              *(undefined4 *)(iVar8 + 0x3c) = 0;
              *(undefined1 *)(iVar8 + 0x40) = 0;
            }
            iVar17 = piVar10[2];
            piVar10[1] = iVar8;
            piVar10[2] = iVar17 + 1;
            if (iVar17 == 0) {
              *piVar10 = iVar8;
            }
            else {
              *(int *)(iVar37 + 0x3c) = iVar8;
            }
            *(undefined4 *)(puVar21 + -4) = 0x50a1f8;
            FUN_00a39a80();
            if (0xf < local_98) {
              *(uint *)(puVar21 + -4) = local_ac[0];
                    /* WARNING: Subroutine does not return */
              *(undefined **)(puVar21 + -8) = &UNK_0050a20d;
              FUN_00aae91b();
            }
            local_8 = 0xffffffff;
            local_98 = 0xf;
            local_9c = 0;
            local_ac[0] = local_ac[0] & 0xffffff00;
            if (0xf < local_5c._4_4_) {
              *(uint *)(puVar21 + -4) = local_6c[0];
                    /* WARNING: Subroutine does not return */
              *(undefined **)(puVar21 + -8) = &UNK_0050a23f;
              FUN_00aae91b();
            }
            *(undefined4 *)(puVar21 + -4) = 0x11;
            *(char **)(puVar21 + -8) = "MESSAGE_HEAD_MARS";
            local_98 = 0xf;
            local_9c = 0;
            local_ac[0] = local_ac[0] & 0xffffff00;
            *(undefined4 *)(puVar21 + -0xc) = 0x50a26b;
            FUN_00409350();
            local_8 = 0x1d;
            *(undefined4 *)(puVar21 + -4) = 9;
            *(char **)(puVar21 + -8) = "MESSENGER";
            local_5c = 3.18299368644791e-313;
            local_6c[0] = local_6c[0] & 0xffffff00;
            *(undefined4 *)(puVar21 + -0xc) = 0x50a28f;
            FUN_00409350();
            local_8._0_1_ = 0x1e;
            if (DAT_01262ef4 == 0) {
              *(undefined4 *)(puVar21 + -4) = 0x44;
              *(undefined4 *)(puVar21 + -8) = 0x50a2a2;
              iVar37 = FUN_00aae9af();
              local_8._0_1_ = 0x1f;
              if (iVar37 == 0) {
                uVar19 = 0;
              }
              else {
                *(undefined4 *)(puVar21 + -4) = 0x50a2b7;
                uVar19 = FUN_006a4e30();
              }
              *(undefined4 *)(puVar21 + -4) = uVar19;
              local_8._0_1_ = 0x1e;
              *(undefined4 *)(puVar21 + -8) = 0x50a2c5;
              FUN_006a59b0();
            }
            *(uint **)(puVar21 + -4) = local_ac;
            *(uint **)(puVar21 + -8) = local_160;
            *(undefined4 *)(puVar21 + -0xc) = 0x50a2d8;
            uVar19 = FUN_00424ce0();
            *(undefined4 *)(puVar21 + -4) = uVar19;
            *(uint **)(puVar21 + -8) = local_6c;
            *(undefined4 **)(puVar21 + -0xc) = local_ec;
            local_8._0_1_ = 0x20;
            *(undefined4 *)(puVar21 + -0x10) = 0x50a2ed;
            local_38 = (int *)FUN_00424aa0();
            local_8._0_1_ = 0x21;
            iVar37 = piVar10[1];
            *(undefined4 *)(puVar21 + -4) = 0x44;
            *(undefined4 *)(puVar21 + -8) = 0x50a301;
            puVar9 = (undefined4 *)FUN_00aae9af();
            local_8 = CONCAT31(local_8._1_3_,0x22);
            local_80 = puVar9;
            if (puVar9 == (undefined4 *)0x0) {
              puVar9 = (undefined4 *)0x0;
            }
            else {
              *(undefined4 **)(puVar21 + -4) = puVar9;
              *(undefined4 *)(puVar21 + -8) = 0x50a31a;
              FUN_00a3ab70();
              puVar9[0xe] = iVar37;
              puVar9[0xf] = 0;
              *(undefined1 *)(puVar9 + 0x10) = 0;
            }
            iVar8 = piVar10[2];
            piVar10[1] = (int)puVar9;
            piVar10[2] = iVar8 + 1;
            if (iVar8 == 0) {
              *piVar10 = (int)puVar9;
            }
            else {
              *(undefined4 **)(iVar37 + 0x3c) = puVar9;
            }
            *(undefined4 *)(puVar21 + -4) = 0x50a354;
            FUN_00a39a80();
            if (0xf < local_14c) {
              *(uint *)(puVar21 + -4) = local_160[0];
                    /* WARNING: Subroutine does not return */
              *(undefined **)(puVar21 + -8) = &UNK_0050a369;
              FUN_00aae91b();
            }
            local_14c = 0xf;
            local_150 = 0;
            local_160[0] = local_160[0] & 0xffffff00;
            if (0xf < local_5c._4_4_) {
              *(uint *)(puVar21 + -4) = local_6c[0];
                    /* WARNING: Subroutine does not return */
              *(undefined **)(puVar21 + -8) = &UNK_0050a394;
              FUN_00aae91b();
            }
            local_8 = 0xffffffff;
            local_5c = 3.18299368644791e-313;
            local_6c[0] = local_6c[0] & 0xffffff00;
            if (0xf < local_98) {
              *(uint *)(puVar21 + -4) = local_ac[0];
                    /* WARNING: Subroutine does not return */
              *(undefined **)(puVar21 + -8) = &UNK_0050a3c1;
              FUN_00aae91b();
            }
            *(undefined4 *)(puVar21 + -4) = 0;
            local_98 = 0xf;
            local_9c = 0;
            local_ac[0] = local_ac[0] & 0xffffff00;
            *(undefined1 **)(puVar21 + -8) = &DAT_00ded94d;
            if (*(int *)(iVar7 + 0x88) == 0) {
              *(undefined4 *)(puVar21 + -0xc) = 0x50a512;
              FUN_00409350();
              local_8 = 0x27;
              *(undefined4 *)(puVar21 + -4) = 10;
              *(char **)(puVar21 + -8) = "LEADERDIED";
              local_5c = 3.18299368644791e-313;
              local_6c[0] = local_6c[0] & 0xffffff00;
              *(undefined4 *)(puVar21 + -0xc) = 0x50a536;
              FUN_00409350();
              local_38 = (int *)(puVar21 + -0x80);
              local_8._0_1_ = 0x28;
              *(undefined4 *)(puVar21 + -0x88) = 0;
              *(undefined4 *)(puVar21 + -0x84) = 0;
              uVar19 = param_1[8];
              uVar1 = param_1[7];
              *(undefined4 *)(puVar21 + -0x8c) = uVar19;
              *(undefined4 *)(puVar21 + -0x90) = uVar1;
              *(undefined4 *)(puVar21 + -0x94) = uVar19;
              *(undefined4 *)(puVar21 + -0x98) = uVar1;
              *(undefined4 *)(puVar21 + -0x9c) = 0;
              *(uint **)(puVar21 + -0xa0) = local_ac;
              *(undefined4 *)(puVar21 + -0xa4) = 0;
              *(int **)(puVar21 + -0xa8) = piVar10;
              *(undefined4 *)(puVar21 + -0xac) = 0x50a572;
              FUN_006a4f40();
              *(undefined4 *)(puVar21 + -0xac) = 0x50a57c;
              uVar19 = FUN_006a55b0();
              *(undefined4 *)(puVar21 + -0xac) = uVar19;
              *(undefined1 **)(puVar21 + -0xb0) = puVar21 + -0x80;
              *(undefined4 *)(puVar21 + -0xb4) = 0x50a586;
              FUN_006a7ed0();
              local_8._0_1_ = 0x29;
              iVar37 = DAT_012588e8[0x2c9];
              *(undefined1 **)(puVar21 + -0x84) = &LAB_0055a780;
              *(int *)(puVar21 + -0x88) = iVar37;
              *(undefined4 *)(puVar21 + -0x8c) = 0x50a5a1;
              uVar19 = FUN_006a4f40();
              *(undefined4 *)(puVar21 + -0x8c) = uVar19;
              local_8 = CONCAT31(local_8._1_3_,0x28);
              *(undefined4 *)(puVar21 + -0x90) = 0x50a5ab;
              FUN_00549b30();
              if (0xf < local_5c._4_4_) {
                *(uint *)(puVar21 + -4) = local_6c[0];
                    /* WARNING: Subroutine does not return */
                *(undefined **)(puVar21 + -8) = &UNK_0050a5ba;
                FUN_00aae91b();
              }
              local_8 = 0xffffffff;
              local_5c = 3.18299368644791e-313;
              local_6c[0] = local_6c[0] & 0xffffff00;
              uVar19 = extraout_ECX_00;
              if (0xf < local_98) {
                *(uint *)(puVar21 + -4) = local_ac[0];
                goto LAB_0050a5e2;
              }
            }
            else {
              *(undefined4 *)(puVar21 + -0xc) = 0x50a3fb;
              FUN_00409350();
              local_8 = 0x23;
              *(undefined4 *)(puVar21 + -4) = 10;
              *(char **)(puVar21 + -8) = "LEADERDIED";
              local_5c = 3.18299368644791e-313;
              local_6c[0] = local_6c[0] & 0xffffff00;
              *(undefined4 *)(puVar21 + -0xc) = 0x50a41f;
              FUN_00409350();
              local_8._0_1_ = 0x24;
              iVar37 = *(int *)(iVar7 + 0x88);
              local_38 = (int *)(puVar21 + -0x80);
              *(undefined4 *)(puVar21 + -0x88) = *(undefined4 *)(iVar37 + 0x10);
              *(undefined4 *)(puVar21 + -0x84) = *(undefined4 *)(iVar37 + 0x14);
              local_80 = (undefined4 *)(puVar21 + -0x88);
              if (DAT_01262ef4 == 0) {
                local_80 = (undefined4 *)(puVar21 + -0x88);
                *(undefined4 *)(puVar21 + -0x8c) = 0x44;
                *(undefined4 *)(puVar21 + -0x90) = 0x50a45a;
                local_80 = (undefined4 *)FUN_00aae9af();
                local_8._0_1_ = 0x25;
                if (local_80 == (undefined4 *)0x0) {
                  uVar19 = 0;
                }
                else {
                  *(undefined4 *)(puVar21 + -0x8c) = 0x50a46f;
                  uVar19 = FUN_006a4e30();
                }
                *(undefined4 *)(puVar21 + -0x8c) = uVar19;
                local_8._0_1_ = 0x24;
                *(undefined4 *)(puVar21 + -0x90) = 0x50a47f;
                FUN_006a59b0();
              }
              uVar19 = param_1[8];
              uVar1 = param_1[7];
              *(undefined4 *)(puVar21 + -0x8c) = uVar19;
              *(undefined4 *)(puVar21 + -0x90) = uVar1;
              *(undefined4 *)(puVar21 + -0x94) = uVar19;
              *(undefined4 *)(puVar21 + -0x98) = uVar1;
              *(undefined4 *)(puVar21 + -0x9c) = 0;
              *(uint **)(puVar21 + -0xa0) = local_ac;
              *(undefined4 *)(puVar21 + -0xa4) = 0;
              *(int **)(puVar21 + -0xa8) = piVar10;
              *(undefined4 *)(puVar21 + -0xac) = 0x50a4a5;
              uVar19 = FUN_006a55b0();
              *(undefined4 *)(puVar21 + -0xac) = uVar19;
              *(undefined1 **)(puVar21 + -0xb0) = puVar21 + -0x80;
              *(undefined4 *)(puVar21 + -0xb4) = 0x50a4af;
              FUN_006a7ed0();
              *(code **)(puVar21 + -0x84) = FUN_006a57a0;
              local_8._0_1_ = 0x26;
              *(undefined4 *)(puVar21 + -0x88) = 0x50a4bd;
              uVar19 = FUN_006a4f40();
              *(undefined4 *)(puVar21 + -0x88) = uVar19;
              *(undefined4 *)(puVar21 + -0x8c) = 0x50a4c3;
              uVar19 = FUN_006a4f40();
              *(undefined4 *)(puVar21 + -0x8c) = uVar19;
              local_8 = CONCAT31(local_8._1_3_,0x24);
              *(undefined4 *)(puVar21 + -0x90) = 0x50a4cd;
              FUN_004e9540();
              if (0xf < local_5c._4_4_) {
                *(uint *)(puVar21 + -4) = local_6c[0];
                    /* WARNING: Subroutine does not return */
                *(undefined **)(puVar21 + -8) = &UNK_0050a4dc;
                FUN_00aae91b();
              }
              local_8 = 0xffffffff;
              local_5c = 3.18299368644791e-313;
              local_6c[0] = local_6c[0] & 0xffffff00;
              uVar19 = extraout_ECX;
              if (0xf < local_98) {
                *(uint *)(puVar21 + -4) = local_ac[0];
LAB_0050a5e2:
                    /* WARNING: Subroutine does not return */
                *(undefined **)(puVar21 + -8) = &UNK_0050a5e7;
                FUN_00aae91b();
              }
            }
          }
          if (*(int *)(iVar7 + 0x88) != 0) {
            *(undefined4 *)(puVar21 + -4) = 0x50a5fc;
            uVar19 = FUN_005b6140();
            *(undefined4 *)(puVar21 + -4) = uVar19;
            *(undefined4 *)(puVar21 + -8) = 0x50a604;
            FUN_005cbcc0();
            uVar19 = extraout_ECX_01;
          }
          piVar10 = (int *)param_1[0x2f5];
          *(undefined4 *)(puVar21 + -4) = uVar19;
          for (; (piVar10 != (int *)0x0 && (*piVar10 != iVar7)); piVar10 = (int *)piVar10[2]) {
          }
          *(int **)(puVar21 + -4) = piVar10;
          *(undefined4 *)(puVar21 + -8) = 0x50a629;
          FUN_005f2ae0();
          piVar10 = local_20;
        }
      }
    } while (piVar10 != (int *)0x0);
  }
  if (*(char *)((int)param_1 + 0x659) != '\0') {
    uVar19 = param_1[0x1f5];
    uVar1 = param_1[500];
    *(undefined4 *)(puVar21 + -4) = 0;
    *(undefined4 *)(puVar21 + -8) = 0x1f40000;
    *(undefined4 *)(puVar21 + -0xc) = uVar19;
    *(undefined4 *)(puVar21 + -0x10) = uVar1;
    *(undefined4 *)(puVar21 + -0x14) = 0x50a65c;
    lVar39 = __allmul();
    iVar7 = *(int *)(*(int *)(DAT_012586dc + 0x20) + 0x28);
    uVar11 = (uint)(lVar39 >> 0xf) >> 0xf | (int)((ulonglong)(lVar39 >> 0xf) >> 0x20) << 0x11;
    *(undefined4 *)(puVar21 + -4) = 0;
    *(undefined4 *)(puVar21 + -8) = 1000;
    *(int *)(puVar21 + -0xc) = (int)uVar11 >> 0x1f;
    *(uint *)(puVar21 + -0x10) = uVar11;
    *(undefined4 *)(puVar21 + -0x14) = 0x50a685;
    uVar40 = __allmul();
    *(int *)(puVar21 + -4) = iVar7 >> 0x1f;
    *(int *)(puVar21 + -8) = iVar7;
    *(undefined8 *)(puVar21 + -0x10) = uVar40;
    *(undefined4 *)(puVar21 + -0x14) = 0x50a695;
    iVar7 = __alldiv();
    if (999 < iVar7) {
      piVar10 = (int *)param_1[0x1ed];
      bVar38 = false;
      local_2c = 0;
      param_2 = 0;
      local_14 = 0;
      local_18 = 0;
      if (piVar10 != (int *)0x0) {
        do {
          piVar15 = (int *)*piVar10;
          piVar10 = (int *)piVar10[2];
          *(undefined4 *)(puVar21 + -4) = 0x50a6ca;
          cVar6 = FUN_005d5a30();
          if (cVar6 != '\0') {
            pcVar2 = *(code **)(*piVar15 + 0x38);
            puVar26 = puVar21 + -4;
            *(undefined4 *)(puVar21 + -4) = 0x50a6d7;
            cVar6 = (*pcVar2)();
            if (cVar6 == '\0') {
              pcVar2 = *(code **)(*piVar15 + 0x3c);
              puVar21 = puVar26 + -4;
              *(undefined4 *)(puVar26 + -4) = 0x50a6ff;
              cVar6 = (*pcVar2)();
              if (cVar6 != '\0') {
                pcVar2 = *(code **)(*(int *)piVar15[0x36] + 0x20);
                local_18 = local_18 + 1;
                puVar27 = (undefined4 *)(puVar21 + -4);
                puVar21 = puVar21 + -4;
                *puVar27 = 0x50a713;
                cVar6 = (*pcVar2)();
                if ((cVar6 == '\0') && (1 < piVar15[0x10])) {
                  param_2 = param_2 + 1;
                }
              }
            }
            else {
              pcVar2 = *(code **)(*(int *)piVar15[0x36] + 0x20);
              local_14 = local_14 + 1;
              puVar21 = puVar26 + -4;
              *(undefined4 *)(puVar26 + -4) = 0x50a6ed;
              cVar6 = (*pcVar2)();
              if (cVar6 == '\0') {
                local_2c = local_2c + 1;
              }
            }
          }
        } while (piVar10 != (int *)0x0);
        if ((0 < local_2c) || (0 < param_2)) {
          uVar19 = param_1[0x1f5];
          uVar1 = param_1[500];
          *(undefined4 *)(puVar21 + -4) = 0;
          *(undefined4 *)(puVar21 + -8) = 0x1f40000;
          *(undefined4 *)(puVar21 + -0xc) = uVar19;
          *(undefined4 *)(puVar21 + -0x10) = uVar1;
          *(undefined4 *)(puVar21 + -0x14) = 0x50a750;
          lVar39 = __allmul();
          iVar7 = *(int *)(*(int *)(DAT_012586dc + 0x20) + 0x28);
          uVar11 = (uint)(lVar39 >> 0xf) >> 0xf | (int)((ulonglong)(lVar39 >> 0xf) >> 0x20) << 0x11;
          *(undefined4 *)(puVar21 + -4) = 0;
          *(undefined4 *)(puVar21 + -8) = 1000;
          *(int *)(puVar21 + -0xc) = (int)uVar11 >> 0x1f;
          *(uint *)(puVar21 + -0x10) = uVar11;
          *(undefined4 *)(puVar21 + -0x14) = 0x50a779;
          uVar40 = __allmul();
          *(int *)(puVar21 + -4) = iVar7 >> 0x1f;
          *(int *)(puVar21 + -8) = iVar7;
          *(undefined8 *)(puVar21 + -0x10) = uVar40;
          *(undefined4 *)(puVar21 + -0x14) = 0x50a789;
          iVar7 = __alldiv();
          if (999 < iVar7) {
            local_24 = (local_18 - param_2) * 1000;
            local_88 = (int *)((local_18 - param_2) * 1000000);
            local_1c = (local_14 - local_2c) * 1000;
            local_28 = (local_14 - local_2c) * 1000000;
            do {
              iVar7 = local_1c;
              if (local_2c < 1) {
                if (param_2 < 1) goto LAB_0050a7f6;
LAB_0050a929:
                *(undefined4 *)(puVar21 + -4) = 1;
                *(undefined4 *)(puVar21 + -8) = 0x50a937;
                FUN_0050e900();
                param_2 = param_2 + -1;
                local_88 = local_88 + 250000;
                local_24 = local_24 + 1000;
              }
              else {
                if (0 < param_2) {
LAB_0050a7f6:
                  if ((int)local_14 < 1) {
                    local_48[0] = (undefined1 *)0x0;
                    ppuVar12 = local_48;
                  }
                  else {
                    piVar10 = (int *)(local_14 * 1000);
                    if (piVar10 == (int *)0x0) {
                      local_70 = (undefined1 *)0xffffffff;
                      ppuVar12 = &local_70;
                    }
                    else if (local_1c + 0x189373U < 0x39580e) {
                      local_70 = (undefined1 *)(local_28 / (int)piVar10);
                      ppuVar12 = &local_70;
                    }
                    else {
                      iVar37 = local_1c >> 0x1f;
                      *(undefined4 *)(puVar21 + -4) = 0;
                      *(undefined4 *)(puVar21 + -8) = 1000;
                      *(int *)(puVar21 + -0xc) = iVar37;
                      *(int *)(puVar21 + -0x10) = iVar7;
                      local_34 = piVar10;
                      local_30 = (int)piVar10 >> 0x1f;
                      *(undefined4 *)(puVar21 + -0x14) = 0x50a853;
                      uVar40 = __allmul();
                      *(int *)(puVar21 + -4) = local_30;
                      *(int **)(puVar21 + -8) = local_34;
                      *(undefined8 *)(puVar21 + -0x10) = uVar40;
                      *(undefined4 *)(puVar21 + -0x14) = 0x50a862;
                      local_70 = (undefined1 *)__alldiv();
                      local_5c = (double)CONCAT44((int)local_70 >> 0x1f,(undefined4)local_5c);
                      ppuVar12 = &local_70;
                    }
                  }
                  iVar7 = local_24;
                  puVar28 = *ppuVar12;
                  if (local_18 < 1) {
                    local_20 = (int *)0x0;
                    ppiVar13 = &local_20;
                  }
                  else {
                    iVar37 = local_18 * 1000;
                    if (iVar37 == 0) {
                      local_38 = (int *)0xffffffff;
                      ppiVar13 = &local_38;
                    }
                    else if (local_24 + 0x189373U < 0x39580e) {
                      local_38 = (int *)((int)local_88 / iVar37);
                      ppiVar13 = &local_38;
                    }
                    else {
                      iVar8 = local_24 >> 0x1f;
                      *(undefined4 *)(puVar21 + -4) = 0;
                      *(undefined4 *)(puVar21 + -8) = 1000;
                      *(int *)(puVar21 + -0xc) = iVar8;
                      *(int *)(puVar21 + -0x10) = iVar7;
                      local_84 = iVar37;
                      local_80 = (undefined4 *)(iVar37 >> 0x1f);
                      *(undefined4 *)(puVar21 + -0x14) = 0x50a8df;
                      uVar40 = __allmul();
                      *(undefined4 **)(puVar21 + -4) = local_80;
                      *(int *)(puVar21 + -8) = local_84;
                      *(undefined8 *)(puVar21 + -0x10) = uVar40;
                      *(undefined4 *)(puVar21 + -0x14) = 0x50a8ee;
                      local_38 = (int *)__alldiv();
                      local_5c = (double)CONCAT44((int)local_38 >> 0x1f,(undefined4)local_5c);
                      ppiVar13 = &local_38;
                    }
                  }
                  if ((int)*ppiVar13 < (int)puVar28) goto LAB_0050a929;
                }
                *(undefined4 *)(puVar21 + -4) = 1;
                *(undefined4 *)(puVar21 + -8) = 0x50a916;
                FUN_0050e900();
                local_2c = local_2c + -1;
                local_28 = local_28 + 1000000;
                local_1c = local_1c + 1000;
              }
              bVar38 = true;
              if ((param_2 < 1) && (local_2c < 1)) break;
              uVar19 = param_1[0x1f5];
              uVar1 = param_1[500];
              *(undefined4 *)(puVar21 + -4) = 0;
              *(undefined4 *)(puVar21 + -8) = 0x1f40000;
              *(undefined4 *)(puVar21 + -0xc) = uVar19;
              *(undefined4 *)(puVar21 + -0x10) = uVar1;
              *(undefined4 *)(puVar21 + -0x14) = 0x50a979;
              lVar39 = __allmul();
              iVar7 = *(int *)(*(int *)(DAT_012586dc + 0x20) + 0x28);
              uVar11 = (uint)(lVar39 >> 0xf) >> 0xf |
                       (int)((ulonglong)(lVar39 >> 0xf) >> 0x20) << 0x11;
              *(undefined4 *)(puVar21 + -4) = 0;
              *(undefined4 *)(puVar21 + -8) = 1000;
              *(int *)(puVar21 + -0xc) = (int)uVar11 >> 0x1f;
              *(uint *)(puVar21 + -0x10) = uVar11;
              *(undefined4 *)(puVar21 + -0x14) = 0x50a9a2;
              uVar40 = __allmul();
              *(int *)(puVar21 + -4) = iVar7 >> 0x1f;
              *(int *)(puVar21 + -8) = iVar7;
              *(undefined8 *)(puVar21 + -0x10) = uVar40;
              *(undefined4 *)(puVar21 + -0x14) = 0x50a9b2;
              iVar7 = __alldiv();
            } while (999 < iVar7);
          }
        }
      }
      *(undefined4 *)(puVar21 + -4) = 0x50a9ca;
      puVar14 = (uint *)FUN_0053e960();
      iVar7 = param_1[0x1f5];
      uVar11 = param_1[500];
      if ((iVar7 < (int)puVar14[1]) || ((iVar7 <= (int)puVar14[1] && (uVar11 < *puVar14)))) {
        if (!bVar38) {
          local_b4 = param_1[7];
          if (((int)param_1[8] < DAT_012588e8[700] - DAT_012588e8[699] >> 2) &&
             (*(int *)(DAT_012588e8[699] + param_1[8] * 4) == 0)) {
            *(undefined4 *)(puVar21 + -4) = 0;
            *(undefined4 *)(puVar21 + -8) = 0x1f40000;
            *(int *)(puVar21 + -0xc) = iVar7;
            *(uint *)(puVar21 + -0x10) = uVar11;
            *(undefined4 *)(puVar21 + -0x14) = 0x50aa84;
            lVar39 = __allmul();
            iVar7 = *(int *)(*(int *)(DAT_012586dc + 0x20) + 0x28);
            uVar11 = (uint)(lVar39 >> 0xf) >> 0xf |
                     (int)((ulonglong)(lVar39 >> 0xf) >> 0x20) << 0x11;
            *(undefined4 *)(puVar21 + -4) = 0;
            *(undefined4 *)(puVar21 + -8) = 1000;
            *(int *)(puVar21 + -0xc) = (int)uVar11 >> 0x1f;
            *(uint *)(puVar21 + -0x10) = uVar11;
            *(undefined4 *)(puVar21 + -0x14) = 0x50aaad;
            uVar40 = __allmul();
            *(int *)(puVar21 + -4) = iVar7 >> 0x1f;
            *(int *)(puVar21 + -8) = iVar7;
            *(undefined8 *)(puVar21 + -0x10) = uVar40;
            *(undefined4 *)(puVar21 + -0x14) = 0x50aabd;
            iVar7 = __alldiv();
            if (999 < iVar7) goto LAB_0050aac6;
          }
        }
      }
      else {
        for (iVar7 = param_1[0x2f5]; iVar7 != 0; iVar7 = *(int *)(iVar7 + 8)) {
        }
LAB_0050aac6:
        *(undefined4 *)(puVar21 + -4) = 1;
        *(undefined4 *)(puVar21 + -8) = 0x50aacf;
        FUN_0050e900();
      }
    }
  }
  puVar28 = puVar21;
  if ((((*(char *)(param_1 + 7) != 'R') || (*(char *)((int)param_1 + 0x1d) != 'E')) ||
      (*(char *)((int)param_1 + 0x1e) != 'B')) &&
     ((param_1[8] != 0 && (*(char *)(param_1 + 0x196) != '\0')))) {
    iVar7 = param_1[0x1ef];
    *(undefined4 *)(puVar21 + -4) = 0x50ab0b;
    iVar7 = iVar7 * -4;
    puVar28 = puVar21 + iVar7;
    iVar37 = 0;
    piVar10 = (int *)param_1[0x1ed];
    while (piVar10 != (int *)0x0) {
      piVar15 = (int *)piVar10[2];
      iVar8 = *piVar10;
      *(undefined4 *)(puVar28 + -4) = 0x50ab31;
      cVar6 = FUN_005d5a30();
      if (cVar6 != '\0') {
        local_b4 = param_1[7];
        if ((DAT_012588e8[700] - DAT_012588e8[699] >> 2 <= (int)param_1[8]) ||
           (*(int *)(DAT_012588e8[699] + param_1[8] * 4) != 0)) {
          pcVar2 = *(code **)(**(int **)(iVar8 + 0xd8) + 0x20);
          puVar29 = (undefined4 *)(puVar28 + -4);
          puVar28 = puVar28 + -4;
          *puVar29 = 0x50ab77;
          cVar6 = (*pcVar2)();
          if ((cVar6 == '\0') || (*(char *)(*(int *)(iVar8 + 0xd8) + 0xd4) != '\0'))
          goto LAB_0050ab97;
        }
        *(undefined4 *)(puVar28 + -4) = 0x50ab8f;
        uVar19 = FUN_005b6140();
        *(undefined4 *)(puVar28 + -4) = uVar19;
        *(undefined4 *)(puVar28 + -8) = 0x50ab97;
        FUN_005cbcc0();
      }
LAB_0050ab97:
      pcVar2 = *(code **)(**(int **)(iVar8 + 0xd8) + 0x20);
      puVar30 = (undefined4 *)(puVar28 + -4);
      puVar28 = puVar28 + -4;
      *puVar30 = 0x50aba4;
      cVar6 = (*pcVar2)();
      piVar10 = piVar15;
      if (cVar6 == '\0') {
        *(int *)(puVar21 + iVar37 * 4 + iVar7) = iVar8;
        iVar37 = iVar37 + 1;
      }
    }
    *(undefined4 *)(puVar28 + -4) = 0;
    *(int *)(puVar28 + -8) = (int)(puVar21 + iVar37 * 4 + iVar7) - (int)(puVar21 + iVar7) >> 2;
    *(undefined1 **)(puVar28 + -0xc) = puVar21 + iVar37 * 4 + iVar7;
    *(undefined1 **)((int)puVar28 + -0x10) = puVar21 + iVar7;
    *(undefined4 *)(puVar28 + -0x14) = 0x50abd6;
    FUN_0054b2f0();
    iVar7 = 0;
    if (0 < iVar37) {
      do {
        *(undefined4 *)(puVar28 + -4) = 0x50abeb;
        FUN_005d5b10();
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar37);
    }
  }
  piVar10 = DAT_012587e4;
  iVar7 = 0;
  if (0 < *DAT_012587e4) {
    do {
      iVar37 = *(int *)(piVar10[1] + iVar7 * 4);
      local_b4 = *(undefined4 *)(iVar37 + 0x1c);
      iVar37 = *(int *)(iVar37 + 0x20);
      iVar8 = *(int *)(DAT_012587e4[1] + iVar37 * 4);
      if (0 < (int)(*(int *)(iVar8 + 0x9dc) - *(int *)(iVar8 + 0x9d8) & 0xfffffffcU)) {
        *(undefined4 *)(puVar28 + -4) = *(undefined4 *)(param_1[0x2fa] + iVar37 * 4);
        *(undefined4 *)(puVar28 + -8) = 0x50ac49;
        FUN_0092e290();
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < *piVar10);
  }
  local_34 = (int *)DAT_012588e8[0x2d7];
  local_30 = DAT_012588e8[0x2d8];
  if (local_30 == param_1[8]) {
    *(undefined4 *)(puVar28 + -4) = 0x50ac79;
    FUN_00561c40();
  }
  *(undefined4 *)(puVar28 + -4) = 0x50ac84;
  FUN_00561c40();
  param_1[0x54e] = 0;
  param_1[0x54f] = 0;
  iVar7 = DAT_012587f0;
  piVar10 = DAT_012588e8;
  if (param_1[0x550] != 0) {
    iVar37 = *(int *)(DAT_012587f0 + 0x1c);
    piVar15 = (int *)(DAT_012587f0 + 0x1c);
    local_14 = 0;
    param_1 = (undefined4 *)0x0;
    if (0 < (int)(*(int *)(DAT_012587f0 + 0x20) - iVar37 & 0xfffffffcU)) {
      do {
        iVar37 = *(int *)(iVar37 + (int)param_1 * 4);
        uVar11 = (uint)*(byte *)(*(int *)(iVar37 + 8) + 0x3a4 + piVar10[0x2f3]);
        iVar8 = *(int *)(piVar10[0x2f3] + 0x3e4);
        iVar17 = *(int *)(iVar8 + 4 + uVar11 * 8);
        if ((-1 < iVar17) && ((0 < iVar17 || (*(int *)(iVar8 + uVar11 * 8) != 0)))) {
          uVar11 = *(uint *)(*(int *)(DAT_012586dc + 0x40) + 0x6c);
          *(undefined4 *)(puVar28 + -4) = 0;
          *(undefined4 *)(puVar28 + -8) = 0x1f40000;
          *(uint *)(puVar28 + -0xc) =
               (((int)uVar11 >> 0x1f) << 0xf | uVar11 >> 0x11) << 0xf | (uVar11 & 0x1ffff) >> 2;
          *(uint *)(puVar28 + -0x10) = uVar11 << 0x1e;
          *(undefined4 *)(puVar28 + -0x14) = 0x50ad2d;
          uVar40 = __alldiv();
          uVar11 = puVar5[0x550];
          *(undefined8 *)(puVar28 + -8) = uVar40;
          *(uint *)(puVar28 + -0xc) = ((int)uVar11 >> 0x1f) << 0xf | uVar11 >> 0x11;
          *(uint *)(puVar28 + -0x10) = uVar11 << 0xf;
          *(undefined4 *)(puVar28 + -0x14) = 0x50ad46;
          lVar39 = __allmul();
          uVar11 = (uint)*(byte *)(*(int *)(iVar37 + 8) + 0x118c + (int)puVar5);
          lVar39 = lVar39 >> 0xf;
          local_3c = (undefined4)lVar39;
          uVar19 = *(undefined4 *)(puVar5[0x473] + 4 + uVar11 * 8);
          uVar1 = *(undefined4 *)(puVar5[0x473] + uVar11 * 8);
          lVar4 = CONCAT44(uVar19,uVar1);
          if (lVar39 < CONCAT44(uVar19,uVar1)) {
            lVar4 = lVar39;
          }
          uVar19 = (undefined4)((ulonglong)lVar4 >> 0x20);
          local_4c = (undefined4)lVar4;
          if (lVar39 == 0) {
            if (local_30 == puVar5[8]) {
              *(undefined4 *)(puVar28 + -8) = 0;
              *(undefined4 *)(puVar28 + -4) = 0;
              local_70 = puVar28 + -8;
              *(undefined4 *)(puVar28 + -0xc) = 0x50ae8b;
              FUN_0047da50();
            }
            puVar14 = puVar5 + 0x54e;
            uVar11 = *puVar14;
            *puVar14 = *puVar14 + 0x8000;
            puVar5[0x54f] = puVar5[0x54f] + (uint)(0xffff7fff < uVar11);
          }
          else {
            *(longlong *)(puVar28 + -8) = lVar39;
            *(longlong *)(puVar28 + -0x10) = lVar4 << 0xf;
            *(undefined4 *)(puVar28 + -0x14) = 0x50ada8;
            uVar40 = __alldiv();
            puVar14 = puVar5 + 0x54e;
            uVar11 = *puVar14;
            *puVar14 = *puVar14 + (uint)uVar40;
            puVar5[0x54f] =
                 puVar5[0x54f] + (int)((ulonglong)uVar40 >> 0x20) +
                 (uint)CARRY4(uVar11,(uint)uVar40);
            *(undefined4 *)(puVar28 + -8) = local_4c;
            *(undefined4 *)(puVar28 + -4) = uVar19;
            local_70 = puVar28 + -8;
            *(undefined4 *)(puVar28 + -0xc) =
                 *(undefined4 *)(*(int *)(*piVar15 + (int)param_1 * 4) + 8);
            *(undefined4 *)(puVar28 + -0x10) = 0x50ade2;
            FUN_0047da90();
            if (local_30 == puVar5[8]) {
              *(undefined4 *)(puVar28 + -8) = local_4c;
              *(undefined4 *)(puVar28 + -4) = uVar19;
              local_70 = puVar28 + -8;
              *(undefined4 *)(puVar28 + -0xc) = 0x50ae1b;
              FUN_0047da50();
            }
            *(undefined4 *)(puVar28 + -8) = local_3c;
            *(int *)(puVar28 + -4) = (int)((ulonglong)lVar39 >> 0x20);
            local_70 = puVar28 + -8;
            *(undefined4 *)(puVar28 + -0xc) = 0x50ae48;
            FUN_0047da50();
          }
          local_14 = local_14 + 1;
          piVar10 = DAT_012588e8;
        }
        uVar11 = local_14;
        iVar37 = *piVar15;
        param_1 = (undefined4 *)((int)param_1 + 1);
      } while ((int)param_1 < *(int *)(iVar7 + 0x20) - iVar37 >> 2);
      if (local_14 != 0) {
        uVar3 = puVar5[0x54e];
        iVar7 = puVar5[0x54f];
        *(uint *)(puVar28 + -4) = ((int)local_14 >> 0x1f) << 0xf | local_14 >> 0x11;
        *(uint *)(puVar28 + -8) = uVar11 << 0xf;
        *(uint *)(puVar28 + -0xc) = iVar7 << 0xf | uVar3 >> 0x11;
        *(uint *)(puVar28 + -0x10) = uVar3 << 0xf;
        *(undefined4 *)(puVar28 + -0x14) = 0x50aef2;
        uVar40 = __alldiv();
        *(undefined8 *)(puVar5 + 0x54e) = uVar40;
        uVar11 = puVar5[0x54e];
        puVar5[0x54e] = 0x8000 - puVar5[0x54e];
        puVar5[0x54f] = -(uint)(0x8000 < uVar11) - (int)((ulonglong)uVar40 >> 0x20);
        *(undefined4 *)(puVar28 + -4) = 0x50af27;
        uVar40 = FUN_00b31c36();
        uVar19 = puVar5[0x54f];
        *(undefined8 *)(puVar28 + -8) = uVar40;
        uVar1 = puVar5[0x54e];
        *(undefined4 *)(puVar28 + -0xc) = uVar19;
        *(undefined4 *)(puVar28 + -0x10) = uVar1;
        *(undefined4 *)(puVar28 + -0x14) = 0x50af3c;
        lVar39 = __allmul();
        *(longlong *)(puVar5 + 0x54e) = lVar39 >> 0xf;
      }
    }
  }
  if (puVar5[8] == piVar10[0x2d8]) {
    *(undefined4 **)(puVar28 + -4) = puVar5 + 0x461;
    *(int **)(puVar28 + -8) = piVar10 + 0x31b;
    *(undefined4 *)(puVar28 + -0xc) = 0x50af75;
    FUN_0047dbb0();
    piVar10 = DAT_012588e8;
  }
  local_5c = (double)CONCAT44(puVar5[7],(undefined4)local_5c);
  if ((int)puVar5[8] < piVar10[700] - piVar10[699] >> 2) {
    bVar38 = *(int *)(piVar10[699] + puVar5[8] * 4) == 0;
  }
  else {
    bVar38 = false;
  }
  piVar10 = (int *)puVar5[0x1ed];
  while (piVar10 != (int *)0x0) {
    piVar15 = (int *)*piVar10;
    iVar7 = piVar15[0x10];
    piVar10 = (int *)piVar10[2];
    pcVar2 = *(code **)(*piVar15 + 0x74);
    puVar31 = (undefined4 *)(puVar28 + -4);
    puVar28 = puVar28 + -4;
    *puVar31 = 0x50afc9;
    (*pcVar2)();
    if (piVar15[0x10] == 0) {
      pcVar2 = *(code **)(*piVar15 + 0x38);
      puVar32 = (undefined4 *)(puVar28 + -4);
      puVar28 = puVar28 + -4;
      *puVar32 = 0x50afd8;
      cVar6 = (*pcVar2)();
      if (((cVar6 != '\0') && (bVar38)) || ((piVar15[0x10] == 0 && (0 < iVar7)))) {
        *(int **)(puVar28 + -4) = piVar15;
        *(undefined4 *)(puVar28 + -8) = 0x50affa;
        FUN_0068aa10();
      }
    }
  }
  *(undefined4 **)(puVar28 + -4) = puVar5 + 0x409;
  *(undefined4 **)(puVar28 + -8) = puVar5 + 0x3b1;
  *(undefined4 *)(puVar28 + -0xc) = 0x50b011;
  FUN_0047dbb0();
  *(undefined4 **)(puVar28 + -4) = puVar5 + 0x41f;
  *(undefined4 **)(puVar28 + -8) = puVar5 + 0x3c7;
  *(undefined4 *)(puVar28 + -0xc) = 0x50b024;
  FUN_0047dbb0();
  *(undefined4 **)(puVar28 + -4) = puVar5 + 0x435;
  *(undefined4 **)(puVar28 + -8) = puVar5 + 0x3dd;
  *(undefined4 *)(puVar28 + -0xc) = 0x50b037;
  FUN_0047dbb0();
  *(undefined4 *)(puVar28 + -4) = 0x50b03e;
  FUN_00561c40();
  *(undefined4 *)(puVar28 + -4) = 0x50b045;
  FUN_00561c40();
  *(undefined4 *)(puVar28 + -4) = 0x50b050;
  FUN_00561c40();
  *(undefined4 **)(puVar28 + -4) = puVar5;
  *(undefined4 *)(puVar28 + -8) = 0x50b056;
  FUN_005143b0();
  if (puVar5[8] == DAT_012588e8[0x2d8]) {
    *(undefined4 **)(puVar28 + -4) = puVar5 + 0x461;
    *(undefined4 *)(puVar28 + -8) = 0x50b078;
    FUN_0047dca0();
  }
  local_5c = (double)CONCAT44(puVar5[7],(undefined4)local_5c);
  if (((int)puVar5[8] < DAT_012588e8[700] - DAT_012588e8[699] >> 2) &&
     (*(int *)(DAT_012588e8[699] + puVar5[8] * 4) == 0)) {
    *(undefined2 *)(puVar5 + 0x196) = 0x101;
  }
  if ((0 < (int)(puVar5[0x277] - puVar5[0x276] & 0xfffffffc)) &&
     (((*(char *)(puVar5 + 7) != 'R' || (*(char *)((int)puVar5 + 0x1d) != 'E')) ||
      (*(char *)((int)puVar5 + 0x1e) != 'B')))) {
    if ((*(char *)(puVar5 + 0xdf) == '\0') && (*(char *)((int)puVar5 + 0x37d) == '\0')) {
      *(undefined4 *)(puVar28 + -4) = 0x50b0f0;
      FUN_0085ccb0();
    }
    *(undefined4 *)(puVar28 + -4) = 0x50b0f5;
    FUN_0085cf10();
    *(undefined4 **)(puVar28 + -4) = puVar5;
    *(undefined4 *)(puVar28 + -8) = 0x50b0fb;
    FUN_00519f80();
  }
  *(undefined4 **)(puVar28 + -4) = puVar5;
  *(undefined4 *)(puVar28 + -8) = 0x50b101;
  FUN_0053fa50();
  *(undefined4 *)(puVar28 + -4) = 0x50b108;
  FUN_0051f990();
  *(undefined4 *)(puVar28 + -4) = 0x50b10d;
  FUN_004ec520();
  *(undefined4 **)(puVar28 + -4) = puVar5;
  *(undefined4 *)(puVar28 + -8) = 0x50b113;
  FUN_004ec560();
  if ((*(char *)(puVar5[0x2f4] + 0x5c) != '\0') &&
     (0 < (int)(puVar5[0x277] - puVar5[0x276] & 0xfffffffc))) {
    iVar7 = puVar5[0x199];
    if ((int)((double)((iVar7 + -43800000) / 0x18) / 365.0) < 6) {
      iVar7 = puVar5[0x198];
      if (iVar7 != DAT_01259abc) {
        *(undefined4 *)(puVar28 + -4) = *(undefined4 *)(puVar5[0x2f4] + 8);
        *(undefined4 *)(puVar28 + -8) = 0x50b18e;
        FUN_00424810();
      }
      if (iVar7 <= DAT_012588e8[0x2c3]) {
        *(undefined4 *)(puVar28 + -4) = 0x50b1aa;
        FUN_0051cca0();
      }
    }
    else {
      *(int *)(puVar28 + -4) = *(int *)(*(int *)(DAT_012586dc + 0x40) + 0x4c) / 1000;
      *(undefined4 *)(puVar28 + -8) = 0x50b1d8;
      FUN_00424810();
      if (DAT_012588e8[0x2c3] < iVar7) {
        puVar5[0x26] = puVar5[0x26] + -1;
        if ((int)puVar5[0x26] < 1) {
          *(undefined4 *)(puVar28 + -4) = 0;
          *(undefined4 *)(puVar28 + -8) = 0;
          *(undefined4 *)(puVar28 + -0xc) = 0x50b213;
          uVar19 = FUN_009b7950();
          *(undefined4 *)(puVar28 + -4) = uVar19;
          *(undefined4 *)(puVar28 + -8) = 0x50b21f;
          FUN_008a8650();
          uVar19 = puVar5[8];
          uVar1 = puVar5[7];
          *(undefined4 *)(puVar28 + -4) = 0x10;
          local_f0 = uVar19;
          *(char **)(puVar28 + -8) = "on_election_tick";
          local_5c = 3.18299368644791e-313;
          local_6c[0] = local_6c[0] & 0xffffff00;
          local_f4 = uVar1;
          *(undefined4 *)(puVar28 + -0xc) = 0x50b252;
          FUN_00409350();
          *(uint **)(puVar28 + -4) = local_6c;
          local_8 = 0x3f;
          *(undefined4 *)(puVar28 + -8) = 0x50b262;
          uVar19 = FUN_008b26e0();
          *(undefined4 *)(puVar28 + -8) = uVar19;
          *(undefined4 *)(puVar28 + -0xc) = 0x50b26e;
          FUN_008b2680();
          local_8 = 0xffffffff;
          if (0xf < local_5c._4_4_) {
            *(uint *)(puVar28 + -4) = local_6c[0];
                    /* WARNING: Subroutine does not return */
            *(undefined **)(puVar28 + -8) = &UNK_0050b280;
            FUN_00aae91b();
          }
          local_5c = 3.18299368644791e-313;
          local_6c[0] = local_6c[0] & 0xffffff00;
          iVar7 = *(int *)(*(int *)(DAT_012586dc + 0x40) + 0x40) / 1000;
          if (0 < iVar7 / 2) {
            *(undefined4 *)(puVar28 + -4) = 0x50b2c4;
            iVar37 = FUN_009b7d30();
            iVar7 = iVar7 - iVar37 % (iVar7 / 2);
          }
          puVar5[0x26] = iVar7;
        }
      }
      else {
        *(undefined4 **)(puVar28 + -4) = puVar5;
        *(undefined4 *)(puVar28 + -8) = 0x50b1ef;
        FUN_0051d490();
      }
    }
  }
  iVar7 = DAT_0125dbf0;
  if ((puVar5[8] == 0) ||
     ((((*(char *)(puVar5 + 7) == 'R' && (*(char *)((int)puVar5 + 0x1d) == 'E')) &&
       (*(char *)((int)puVar5 + 0x1e) == 'B')) ||
      ((int)(puVar5[0x277] - puVar5[0x276] & 0xfffffffc) < 1)))) goto LAB_0050b5b2;
  iVar37 = DAT_012588e8[0x2c3];
  if (puVar5[0x1e] == DAT_0125dbf0) {
    iVar8 = (iVar37 + -43800000) / 0x18;
    iVar17 = 0;
    for (iVar8 = (iVar8 - (int)((float)(int)((double)iVar8 / 365.0) * 365.0)) - DAT_00f1027c;
        -1 < iVar8; iVar8 = iVar8 - (&DAT_00f1027c)[iVar17]) {
      iVar17 = iVar17 + 1;
    }
    if (iVar17 == (iVar17 / 3) * 3) {
      *(undefined4 *)(puVar28 + -4) = 0x50b39b;
      iVar8 = FUN_00424930();
      if (iVar8 == 1) {
        *(undefined4 *)(puVar28 + -4) = 0;
        *(undefined4 *)(puVar28 + -8) = 0;
        puVar5[0x1e] = iVar37;
        *(undefined4 *)(puVar28 + -0xc) = 0x50b3ac;
        iVar7 = FUN_009b7950();
        puVar5[0x1e] = puVar5[0x1e] + (iVar7 % 0x5b) * 0x18;
        iVar7 = DAT_0125dbf0;
      }
    }
  }
  if ((puVar5[0x1e] != iVar7) && ((int)puVar5[0x1e] <= iVar37)) {
    *(undefined4 *)(puVar28 + -4) = 0;
    *(undefined4 *)(puVar28 + -8) = 0;
    puVar5[0x1e] = iVar7;
    *(undefined4 *)(puVar28 + -0xc) = 0x50b3e5;
    uVar19 = FUN_009b7950();
    *(undefined4 *)(puVar28 + -4) = uVar19;
    *(undefined4 *)(puVar28 + -8) = 0x50b3f1;
    FUN_008a8650();
    uVar19 = puVar5[7];
    uVar1 = puVar5[8];
    *(undefined4 *)(puVar28 + -4) = 0x12;
    *(char **)(puVar28 + -8) = "on_quarterly_pulse";
    local_98 = 0xf;
    local_9c = 0;
    local_ac[0] = local_ac[0] & 0xffffff00;
    local_f4 = uVar19;
    local_f0 = uVar1;
    *(undefined4 *)(puVar28 + -0xc) = 0x50b430;
    FUN_00409350();
    *(uint **)(puVar28 + -4) = local_ac;
    local_8 = 0x40;
    *(undefined4 *)(puVar28 + -8) = 0x50b443;
    uVar19 = FUN_008b26e0();
    *(undefined4 *)(puVar28 + -8) = uVar19;
    *(undefined4 *)(puVar28 + -0xc) = 0x50b44f;
    FUN_008b2680();
    local_8 = 0xffffffff;
    iVar7 = DAT_0125dbf0;
    if (0xf < local_98) {
      *(uint *)(puVar28 + -4) = local_ac[0];
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar28 + -8) = &UNK_0050b46b;
      FUN_00aae91b();
    }
  }
  if (puVar5[0x1f] == iVar7) {
    iVar8 = (iVar37 + -43800000) / 0x18;
    iVar8 = (iVar8 - (int)((float)(int)((double)iVar8 / 365.0) * 365.0)) - DAT_00f1027c;
    if (-1 < iVar8) {
      iVar17 = 0;
      do {
        iVar17 = iVar17 + 1;
        iVar8 = iVar8 - (&DAT_00f1027c)[iVar17];
      } while (-1 < iVar8);
      if (iVar17 != 0) goto LAB_0050b511;
    }
    *(undefined4 *)(puVar28 + -4) = 0x50b4e6;
    iVar8 = FUN_00424930();
    if (iVar8 == 1) {
      *(undefined4 *)(puVar28 + -4) = 0;
      *(undefined4 *)(puVar28 + -8) = 0;
      puVar5[0x1f] = iVar37;
      *(undefined4 *)(puVar28 + -0xc) = 0x50b4f7;
      iVar7 = FUN_009b7950();
      puVar5[0x1f] = puVar5[0x1f] + (iVar7 % 0x16c) * 0x18;
      iVar7 = DAT_0125dbf0;
    }
  }
LAB_0050b511:
  if ((puVar5[0x1f] != iVar7) && ((int)puVar5[0x1f] <= iVar37)) {
    *(undefined4 *)(puVar28 + -4) = 0;
    *(undefined4 *)(puVar28 + -8) = 0;
    puVar5[0x1f] = iVar7;
    *(undefined4 *)(puVar28 + -0xc) = 0x50b530;
    uVar19 = FUN_009b7950();
    *(undefined4 *)(puVar28 + -4) = uVar19;
    *(undefined4 *)(puVar28 + -8) = 0x50b53c;
    FUN_008a8650();
    uVar19 = puVar5[7];
    uVar1 = puVar5[8];
    *(undefined4 *)(puVar28 + -4) = 0xf;
    *(char **)(puVar28 + -8) = "on_yearly_pulse";
    local_98 = 0xf;
    local_9c = 0;
    local_ac[0] = local_ac[0] & 0xffffff00;
    local_f4 = uVar19;
    local_f0 = uVar1;
    *(undefined4 *)(puVar28 + -0xc) = 0x50b57b;
    FUN_00409350();
    *(uint **)(puVar28 + -4) = local_ac;
    local_8 = 0x41;
    *(undefined4 *)(puVar28 + -8) = 0x50b58e;
    uVar19 = FUN_008b26e0();
    *(undefined4 *)(puVar28 + -8) = uVar19;
    *(undefined4 *)(puVar28 + -0xc) = 0x50b59a;
    FUN_008b2680();
    if (0xf < local_98) {
      *(uint *)(puVar28 + -4) = local_ac[0];
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar28 + -8) = &UNK_0050b5af;
      FUN_00aae91b();
    }
  }
LAB_0050b5b2:
  local_60 = (int *)0x0;
  local_5c = 0.0;
  local_54 = 0;
  local_8 = 0x42;
  local_34 = (int *)puVar5[0x1a];
  piVar10 = (int *)0x0;
  piVar15 = local_60;
LAB_0050b5ce:
  local_60 = piVar15;
  piVar16 = piVar10;
  piVar10 = local_60;
  if (((int *)puVar5[0x1a] <= local_34) && (local_34 < (int *)puVar5[0x1b])) {
    iVar7 = *local_34;
    local_34 = local_34 + 1;
    *(undefined4 *)(puVar28 + -4) = 0x50b5f4;
    cVar6 = FUN_008a58c0();
    if (cVar6 != '\0') goto LAB_0050b63c;
    goto LAB_0050b5f8;
  }
  while (piVar10 != (int *)0x0) {
    piVar10 = (int *)piVar10[2];
    *(undefined4 *)(puVar28 + -4) = 0x50b683;
    FUN_004be200();
  }
  *(int ***)(puVar28 + -4) = &local_60;
  *(undefined4 *)(puVar28 + -8) = 0x50b690;
  FUN_008601b0();
  local_8 = 0xffffffff;
  *(undefined4 *)(puVar28 + -4) = 0x50b6a2;
  FUN_009a63f0();
  *(undefined4 *)(puVar28 + -4) = 0x50b6a9;
  FUN_0050e1a0();
  if (*(char *)((int)puVar5 + 0x31) != '\0') {
    *(undefined4 **)(puVar28 + -4) = puVar5;
    *(undefined4 *)(puVar28 + -8) = 0x50b6b5;
    FUN_00531df0();
  }
  iVar7 = 0;
  *(undefined4 *)(puVar28 + -4) = 0;
  *(undefined4 **)(puVar28 + -8) = puVar5;
  *(undefined4 *)(puVar28 + -0xc) = 0x50b6be;
  FUN_0052fcd0();
  *(undefined4 *)(puVar28 + -4) = 0;
  *(undefined4 **)(puVar28 + -8) = puVar5;
  *(undefined4 *)(puVar28 + -0xc) = 0x50b6c5;
  FUN_00530e40();
  if (*(char *)(puVar5 + 0x50d) == '\0') {
    if (*(char *)(puVar5 + 0x25) != '\0') {
      *(undefined4 **)(puVar28 + -4) = puVar5;
      *(undefined4 *)(puVar28 + -8) = 0x50b6f1;
      FUN_00541ec0();
    }
  }
  else {
    *(undefined4 **)(puVar28 + -4) = puVar5;
    *(undefined4 *)(puVar28 + -8) = 0x50b6d4;
    FUN_00515490();
    *(undefined4 **)(puVar28 + -4) = puVar5;
    puVar33 = (undefined4 *)(puVar28 + -8);
    puVar28 = puVar28 + -8;
    *puVar33 = 0x50b6da;
    FUN_0050ea30();
    *(undefined4 **)(puVar28 + -4) = puVar5;
    *(undefined4 *)(puVar28 + -8) = 0x50b6e0;
    FUN_00534b80();
  }
  puVar5[0x558] = 0;
  puVar5[0x559] = 0;
  do {
    *(undefined4 *)(puVar28 + -8) = 0x8000;
    *(undefined4 *)(puVar28 + -4) = 0;
    *(int *)(puVar28 + -0xc) = iVar7;
    *(undefined4 *)(puVar28 + -0x10) = 0x50b720;
    FUN_0052b420();
    puVar14 = puVar5 + 0x558;
    uVar11 = *puVar14;
    *puVar14 = *puVar14 + (int)local_34;
    puVar5[0x559] = puVar5[0x559] + local_30 + (uint)CARRY4(uVar11,(uint)local_34);
    iVar7 = iVar7 + 1;
  } while (iVar7 < 3);
  if ((0 < (int)(puVar5[0x277] - puVar5[0x276] & 0xfffffffc)) && (*(char *)(puVar5 + 0x4b4) != '\0')
     ) {
    *(undefined4 **)(puVar28 + -4) = puVar5 + 0xd9;
    *(undefined4 *)(puVar28 + -8) = 0x50b760;
    FUN_0085fc90();
  }
  *(undefined4 **)(puVar28 + -4) = puVar5;
  *(undefined4 *)(puVar28 + -8) = 0x50b766;
  FUN_00539880();
  pcVar2 = *(code **)(*(int *)DAT_012588e8[0x2c9] + 0xe4);
  puVar34 = puVar28 + -4;
  *(undefined4 *)(puVar28 + -4) = 0x50b77c;
  cVar6 = (*pcVar2)();
  piVar10 = extraout_ECX_03;
  if ((cVar6 != '\0') && (piVar10 = DAT_012588e8, puVar5[8] == DAT_012588e8[0x2d8])) {
    *(undefined4 **)(puVar34 + -4) = puVar5;
    puVar35 = (undefined4 *)(puVar34 + -8);
    puVar34 = puVar34 + -8;
    *puVar35 = 0x50b797;
    FUN_005399c0();
    piVar10 = extraout_ECX_04;
  }
  piVar15 = (int *)puVar5[0x527];
joined_r0x0050b79f:
  if (piVar15 != (int *)0x0) {
    iVar7 = *piVar15;
    piVar16 = *(int **)(iVar7 + 8);
    piVar15 = (int *)piVar15[2];
    if (piVar16 != (int *)0x0) {
      piVar10 = (int *)local_90[0x2b3];
      do {
        if (*(int *)(piVar10[*piVar16] + 300) == 0) goto joined_r0x0050b79f;
        piVar16 = (int *)piVar16[2];
      } while (piVar16 != (int *)0x0);
    }
    piVar16 = (int *)puVar5[0x527];
    *(int **)(puVar34 + -4) = piVar10;
    for (; (piVar16 != (int *)0x0 && (*piVar16 != iVar7)); piVar16 = (int *)piVar16[2]) {
    }
    *(int **)(puVar34 + -4) = piVar16;
    *(undefined4 *)(puVar34 + -8) = 0x50b7fa;
    FUN_005f2ae0();
    piVar10 = extraout_ECX_05;
    goto joined_r0x0050b79f;
  }
  piVar10 = (int *)puVar5[0x523];
  do {
    do {
      if (piVar10 == (int *)0x0) goto LAB_0050b8bd;
      local_90 = (int *)piVar10[2];
      iVar7 = *piVar10;
      piVar10 = local_90;
    } while ((iVar7 == 0) ||
            (iVar37 = *(int *)(*(int *)(DAT_012588e8[0x2fc] + puVar5[8] * 0x10) +
                              *(int *)(iVar7 + 0x6c) * 4), *(int *)(iVar37 + 0xec) < 1));
    piVar10 = *(int **)(iVar7 + 8);
    bVar38 = false;
    local_20 = DAT_012588e8;
    if (piVar10 == (int *)0x0) break;
    do {
      *(undefined4 *)(puVar34 + -4) = *(undefined4 *)(local_20[0x2b3] + *piVar10 * 4);
      *(int *)(puVar34 + -8) = iVar37;
      *(undefined4 *)(puVar34 + -0xc) = 0x50b888;
      cVar6 = FUN_00563fb0();
      if (cVar6 != '\0') {
        bVar38 = true;
      }
      piVar10 = (int *)piVar10[2];
    } while (piVar10 != (int *)0x0);
    piVar10 = local_90;
  } while (bVar38);
  *(undefined4 *)(puVar34 + -4) = 0x50b8bd;
  FUN_0068dd70();
LAB_0050b8bd:
  if (*(char *)(puVar5 + 0x4b4) != '\0') {
    *(undefined4 **)(puVar34 + -4) = puVar5;
    *(undefined4 *)(puVar34 + -8) = 0x50b8cc;
    FUN_00540c20();
  }
  ExceptionList = local_10;
  return;
code_r0x005093d4:
  if (local_80 == (undefined4 *)(*(uint *)(iVar8 + 0xc) % (uint)local_20)) {
    local_4c = 0x2d2d2d;
    local_13c = 0x2d2d2d;
    local_108 = 0;
    local_138 = 0;
    local_3c = 0x2d2d2d;
    local_114 = 0;
    local_10c = 0;
    apuStack_1dc[0] = local_144;
    local_118 = 0x2d2d2d;
    apuStack_1dc[1] = (undefined4 *)param_2;
    local_134 = 0;
    local_110 = 0;
    local_128 = 1;
    local_124 = 0;
    local_12c = 0;
    local_130 = iVar8;
    local_120 = apuStack_1dc[0];
    FUN_00957ea0();
  }
  piVar15 = (int *)(iVar8 + 0x58);
  iVar8 = local_18;
  piVar10 = local_34;
  iVar36 = local_24;
  if (*piVar15 < 1) {
LAB_00509467:
    apuStack_1dc[1] = (undefined4 *)local_14;
    apuStack_1dc[0] = (undefined4 *)0x509470;
    FUN_004b9250();
    iVar8 = local_18;
    piVar10 = local_34;
    iVar36 = local_24;
  }
  goto joined_r0x005093b4;
LAB_0050b63c:
  *(int *)(iVar7 + 0x54) = *(int *)(iVar7 + 0x54) + -1;
  piVar10 = piVar16;
  piVar15 = local_60;
  if (*(int *)(iVar7 + 0x54) < 1) {
    *(int *)(puVar28 + -4) = iVar7 + 0xc;
    *(undefined4 *)(puVar28 + -8) = extraout_ECX_02;
    *(undefined4 *)(puVar28 + -0xc) = 0x50b655;
    uVar19 = FUN_008a6620();
    *(undefined4 *)(puVar28 + -8) = uVar19;
    *(undefined4 *)(puVar28 + -0xc) = 0x50b661;
    FUN_008a8120();
LAB_0050b5f8:
    *(undefined4 *)(puVar28 + -4) = 0x10;
    *(undefined4 *)(puVar28 + -8) = 0x50b602;
    piVar10 = (int *)FUN_00aae9af();
    if (piVar10 == (int *)0x0) {
      piVar10 = (int *)0x0;
    }
    else {
      *piVar10 = iVar7;
      piVar10[1] = (int)piVar16;
      piVar10[2] = 0;
      *(undefined1 *)(piVar10 + 3) = 0;
    }
    iVar7 = local_5c._4_4_;
    local_5c = (double)CONCAT44(local_5c._4_4_ + 1,piVar10);
    piVar15 = piVar10;
    if (iVar7 != 0) {
      piVar16[2] = (int)piVar10;
      piVar15 = local_60;
    }
  }
  goto LAB_0050b5ce;
}

