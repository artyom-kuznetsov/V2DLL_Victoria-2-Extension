// FUN_00527d10 @ 00527d10 body=[[00527d10, 00527e88] [00527e90, 00527f97] [00527fa0, 00527fe0] [00527fe4, 005280bc] [005280c0, 005285a3] [005285a7, 005285d9] [005285dd, 00528608] [0052860c, 00528637] [0052863b, 00528666] [0052866a, 00528695] [00528699, 005286c4] [005286c8, 005286f3] [005286f7, 00528722] [00528726, 00528751] [00528755, 0052877d] [00528781, 005287a3] [005287a7, 005287cb] [005287cf, 0052892b] [0052892f, 00528957] [0052895b, 00528985] [00528989, 00528a83] [00528a87, 00528b4f] [00528b53, 00528b8e] [00528b92, 00528bae] [00528bb2, 00528bc7] [00528bcd, 00528bdf] [00528be3, 00528bf9]]


void FUN_00527d10(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint *puVar11;
  char *pcVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 *puVar15;
  undefined4 uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  int *piVar21;
  int iVar22;
  undefined8 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined1 auStack_2b0 [108];
  undefined4 uStack_244;
  int iStack_240;
  int iStack_23c;
  uint *puStack_238;
  uint *puStack_234;
  undefined8 local_230;
  int local_218;
  int local_210;
  uint local_204 [4];
  undefined4 local_1f4;
  uint local_1f0;
  uint local_1e8;
  int local_1e4;
  int local_1dc;
  int *local_1d8;
  uint local_1d0 [4];
  undefined4 local_1c0;
  uint local_1bc;
  uint local_1b4 [4];
  int local_1a4;
  uint uStack_1a0;
  uint auStack_198 [4];
  undefined4 uStack_188;
  uint uStack_184;
  int local_17c;
  undefined8 local_178;
  undefined **local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  int local_15c;
  int local_158;
  undefined4 local_154;
  uint local_14c [4];
  undefined4 local_13c;
  uint local_138;
  uint local_130 [4];
  undefined4 local_120;
  uint local_11c;
  uint local_114 [4];
  undefined4 local_104;
  uint local_100;
  uint uStack_f8;
  undefined4 uStack_e8;
  uint uStack_e4;
  uint local_dc [4];
  undefined4 uStack_cc;
  uint uStack_c8;
  uint uStack_c0;
  undefined4 uStack_b0;
  uint uStack_ac;
  uint local_a4 [4];
  undefined4 uStack_94;
  uint uStack_90;
  uint uStack_88;
  undefined4 uStack_78;
  uint uStack_74;
  uint uStack_6c;
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
  
  puStack_10 = &LAB_00b9c6ef;
  pvStack_14 = ExceptionList;
  local_164 = *(undefined4 *)(param_1 + 0x1c);
  local_160 = *(undefined4 *)(param_1 + 0x20);
  iVar20 = 0;
  local_168 = 0x18d;
  local_16c = CUpperHouse::vftable;
  local_15c = 0;
  local_158 = 0;
  local_154 = 0;
  local_c = 0;
  local_230._0_4_ = (char *)0x0;
  local_230._4_4_ = (uint *)0x0;
  puStack_234 = (uint *)0x527da7;
  ExceptionList = &pvStack_14;
  FUN_004bea40();
  local_c = 1;
  iVar17 = local_158 - local_15c >> 3;
  if (0 < iVar17) {
    do {
      iVar2 = *(int *)(param_1 + 0x8c0);
      iVar7 = iVar20 * 8;
      *(undefined4 *)(local_15c + iVar7) = *(undefined4 *)(iVar2 + iVar20 * 8);
      iVar20 = iVar20 + 1;
      *(undefined4 *)(local_15c + 4 + iVar7) = *(undefined4 *)(iVar2 + 4 + iVar7);
    } while (iVar20 < iVar17);
  }
  iVar17 = DAT_01258a3c;
  iVar20 = *(int *)(DAT_01258a3c + 0x10) - *(int *)(DAT_01258a3c + 0xc) >> 2;
  iVar7 = 0;
  if (0 < (int)(*(int *)(param_1 + 0x8c4) - *(int *)(param_1 + 0x8c0) & 0xfffffff8U)) {
    do {
      puVar10 = (undefined4 *)(*(int *)(param_1 + 0x8c0) + iVar7 * 8);
      *puVar10 = 0;
      puVar10[1] = 0;
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(param_1 + 0x8c4) - *(int *)(param_1 + 0x8c0) >> 3);
  }
  uVar23 = local_178;
  if (*(char *)(param_1 + 0xba0) == '\0') {
    if (*(char *)(param_1 + 0xba8) == '\0') {
      piVar21 = *(int **)(param_1 + 0x9d8);
      local_17c = DAT_012588e8;
      iVar7 = DAT_0131bb34;
      local_1d8 = piVar21;
      while ((uVar23 = local_178, *(int **)(param_1 + 0x9d8) <= piVar21 &&
             (piVar21 < *(int **)(param_1 + 0x9dc)))) {
        local_1dc = *(int *)(*(int *)(local_17c + 0xacc) + *piVar21 * 4);
        piVar21 = piVar21 + 1;
        local_1d8 = piVar21;
        if (*(int *)(*(int *)(local_1dc + 0x188) + 0x84) < 1) {
          if (iVar7 == 0) {
            local_230._4_4_ = (uint *)0x188;
            local_230._0_4_ = (char *)0x52806c;
            iVar7 = FUN_00aae9af();
            local_c._0_1_ = 2;
            if (iVar7 == 0) {
              local_230._4_4_ = (uint *)0x0;
            }
            else {
              local_230._4_4_ = (uint *)0x528086;
              local_230._4_4_ = (uint *)FUN_0041a160();
            }
            local_c = CONCAT31(local_c._1_3_,1);
            local_230._0_4_ = (char *)0x528098;
            FUN_00423700();
            iVar7 = DAT_0131bb34;
          }
          local_210 = *(int *)(iVar7 + 0x10) - *(int *)(iVar7 + 0xc) >> 2;
          if (0 < local_210) {
            local_218 = 0;
            do {
              iVar2 = *(int *)(local_218 + *(int *)(local_1dc + 0x194));
              iVar7 = DAT_0131bb34;
              piVar21 = local_1d8;
joined_r0x005280d3:
              iVar4 = iVar2;
              DAT_0131bb34 = iVar7;
              local_1d8 = piVar21;
              if (iVar4 != 0) {
                iVar2 = *(int *)(iVar4 + 0x27c);
                if (((*(char *)(param_1 + 0xb98) == '\0') ||
                    (*(int *)(*(int *)(iVar4 + 0x68) + 0x3c) == 2)) &&
                   (*(char *)(*(int *)(iVar4 + 0x68) + 0x2c) != '\0')) {
                  local_230._4_4_ = &local_1e8;
                  puStack_234 = (uint *)0x528121;
                  local_230._0_4_ = (char *)iVar4;
                  FUN_00963d10();
                  iVar7 = DAT_0131bb34;
                  piVar21 = local_1d8;
                  if ((local_1e4 < 1) && ((local_1e4 < 0 || (local_1e8 == 0)))) {
                    if ((*(char *)(param_1 + 0xb98) == '\0') ||
                       (*(int *)(*(int *)(iVar4 + 0x68) + 0x3c) != 2)) goto joined_r0x005280d3;
                    local_1e8 = 0x1f40000;
                    local_1e4 = 0;
                  }
                  uVar18 = local_1e8 >> 0xf | local_1e4 << 0x11;
                  if (uVar18 != 0) {
                    puStack_234 = (uint *)(((int)uVar18 >> 0x1f) << 0x1e | uVar18 >> 2);
                    local_230._4_4_ = (uint *)0x0;
                    local_230._0_4_ = (char *)0x320000;
                    puStack_238 = (uint *)((local_1e8 >> 0xf) << 0x1e);
                    iStack_23c = 0x52818c;
                    local_230 = __alldiv();
                    iVar22 = 0;
                    iVar7 = DAT_0131bb34;
                    piVar21 = local_1d8;
                    local_178 = local_230;
                    if (0 < iVar20) {
                      do {
                        iVar7 = *(int *)(*(int *)(iVar4 + 0x7c) + iVar22 * 8);
                        uVar18 = *(uint *)(*(int *)(iVar4 + 0x7c) + 4 + iVar22 * 8);
                        if (iVar7 != 0 || uVar18 != 0) {
                          puVar11 = (uint *)(*(int *)(param_1 + 0x8c0) + iVar22 * 8);
                          iStack_23c = 0x5281d5;
                          puStack_238 = (uint *)iVar7;
                          puStack_234 = (uint *)uVar18;
                          local_178 = local_230;
                          uVar23 = __allmul();
                          uVar19 = (uint)((ulonglong)uVar23 >> 0x20);
                          uVar8 = (uint)uVar23 >> 0x1e | uVar19 << 2;
                          uVar9 = uVar8 * 0x8000;
                          uVar18 = *puVar11;
                          *puVar11 = uVar9 + *puVar11;
                          puVar11[1] = (((int)uVar8 >> 0x1f) << 0xf | (uVar19 & 0x3fffffff) >> 0xf)
                                       + puVar11[1] + (uint)CARRY4(uVar9,uVar18);
                          local_230 = local_178;
                        }
                        iVar22 = iVar22 + 1;
                        iVar7 = DAT_0131bb34;
                        piVar21 = local_1d8;
                        local_178 = local_230;
                      } while (iVar22 < iVar20);
                    }
                  }
                }
                goto joined_r0x005280d3;
              }
              local_218 = local_218 + 0x10;
              local_210 = local_210 + -1;
            } while (local_210 != 0);
          }
        }
      }
    }
    else {
      piVar21 = *(int **)(param_1 + 0xe44);
      while (piVar21 != (int *)0x0) {
        piVar3 = (int *)piVar21[2];
        local_230._0_4_ = (char *)*piVar21;
        if (*(int *)((int)(char *)local_230 + 0x84) < 1) {
          local_230._4_4_ = local_1b4;
          puStack_234 = (uint *)0x527f81;
          FUN_004d11b0();
          local_230._4_4_ = local_1b4;
          local_230._0_4_ = (char *)0x527f8b;
          FUN_00979430();
          iVar7 = 1;
          if (1 < iVar20) {
            do {
              uVar18 = *(uint *)(local_1a4 + iVar7 * 8);
              iVar4 = *(int *)(local_1a4 + 4 + iVar7 * 8);
              iVar22 = *(int *)(param_1 + 0x8c0);
              iVar2 = iVar7 * 8;
              puVar11 = (uint *)(iVar22 + iVar7 * 8);
              uVar8 = *puVar11;
              iVar7 = iVar7 + 1;
              *puVar11 = uVar8 + uVar18;
              puVar11[1] = *(int *)(iVar22 + 4 + iVar2) + iVar4 + (uint)CARRY4(uVar8,uVar18);
            } while (iVar7 < iVar20);
          }
          if (local_1a4 != 0) {
            local_230._4_4_ = (uint *)local_1a4;
                    /* WARNING: Subroutine does not return */
            local_230._0_4_ = &UNK_00527fe1;
            FUN_00aae91b();
          }
        }
        uVar23 = CONCAT44(local_178._4_4_,(undefined4)local_178);
        piVar21 = piVar3;
      }
    }
  }
  else {
    puVar10 = (undefined4 *)
              (*(int *)(param_1 + 0x8c0) +
              *(int *)(*(int *)(*(int *)(param_1 + 0x84c) + 0x54) + 0x28) * 8);
    *puVar10 = 0x320000;
    puVar10[1] = 0;
  }
  iVar7 = 1;
  bVar5 = true;
  if (1 < iVar20) {
    do {
      iVar2 = *(int *)(*(int *)(iVar17 + 0xc) + iVar7 * 4);
      if ((((int)((double)((*(int *)(iVar2 + 0x1d0) + -43800000) / 0x18) / 365.0) < 2) ||
          (1 < (int)((double)((*(int *)(iVar2 + 0x1d4) + -43800000) / 0x18) / 365.0))) &&
         ((*(char *)(iVar2 + 0x1d8) == '\0' || (*(char *)(param_1 + 0x12d0) != '\0')))) {
        if (*(int *)(*(int *)(param_1 + 0x8c0) + iVar7 * 8) != 0 ||
            *(int *)(*(int *)(param_1 + 0x8c0) + 4 + iVar7 * 8) != 0) {
          bVar5 = false;
        }
      }
      else {
        puVar10 = (undefined4 *)(*(int *)(param_1 + 0x8c0) + iVar7 * 8);
        *puVar10 = 0;
        puVar10[1] = 0;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar20);
    if (!bVar5) goto LAB_0052826b;
  }
  puVar10 = (undefined4 *)
            (*(int *)(param_1 + 0x8c0) +
            *(int *)(*(int *)(*(int *)(param_1 + 0x84c) + 0x54) + 0x28) * 8);
  *puVar10 = 0x320000;
  puVar10[1] = 0;
LAB_0052826b:
  local_230._4_4_ = (uint *)(param_1 + 0x8b0);
  local_230._0_4_ = (char *)0x528277;
  local_178 = uVar23;
  FUN_00979430();
  if (*(int *)(param_1 + 0x20) == *(int *)(DAT_012588e8 + 0xb60)) {
    local_1d8 = *(int **)(DAT_012588e8 + 0xb5c);
    local_230._4_4_ = *(uint **)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4);
    local_230._0_4_ = (char *)0x5282ad;
    puVar10 = (undefined4 *)FUN_005061e0();
    local_100 = 0xf;
    local_104 = 0;
    local_114[0] = local_114[0] & 0xffffff00;
    local_210 = 1;
    if (1 < iVar20) {
      do {
        local_c._0_1_ = 0xb;
        piVar21 = *(int **)(*(int *)(DAT_01258a3c + 0xc) + local_210 * 4);
        iVar17 = local_210 * 8;
        puVar11 = (uint *)(*(int *)(param_1 + 0x8c0) + iVar17);
        if ((*(int *)(*(int *)(param_1 + 0x8c0) + iVar17) != 0 || puVar11[1] != 0) ||
           (*(int *)(iVar17 + local_15c) != 0 || *(int *)(iVar17 + 4 + local_15c) != 0)) {
          iVar7 = *(int *)(iVar17 + 4 + local_15c);
          if (((int)puVar11[1] < iVar7) ||
             (((int)puVar11[1] <= iVar7 && (*puVar11 <= *(uint *)(iVar17 + local_15c))))) {
            local_230._0_4_ = &DAT_00df8510;
          }
          else {
            local_230._0_4_ = &DAT_00dfd24c;
          }
          local_1f0 = 0xf;
          local_1f4 = 0;
          local_204[0] = local_204[0] & 0xffffff00;
          pcVar12 = (char *)local_230;
          do {
            cVar1 = *pcVar12;
            pcVar12 = pcVar12 + 1;
          } while (cVar1 != '\0');
          local_230._4_4_ = (uint *)((int)pcVar12 - (int)((char *)local_230 + 1));
          puStack_234 = (uint *)0x528377;
          FUN_00409350();
          local_c._0_1_ = 0xc;
          local_230._4_4_ = (uint *)0x5;
          local_230._0_4_ = &DAT_00dfebd0;
          local_1bc = 0xf;
          local_1c0 = 0;
          local_1d0[0] = local_1d0[0] & 0xffffff00;
          puStack_234 = (uint *)0x5283a0;
          FUN_00409350();
          local_c._0_1_ = 0xd;
          uVar18 = *(uint *)(*(int *)(param_1 + 0x8c0) + iVar17);
          iStack_240 = uVar18 - *(uint *)(iVar17 + local_15c);
          iStack_23c = (*(int *)(*(int *)(param_1 + 0x8c0) + 4 + iVar17) -
                       *(int *)(iVar17 + 4 + local_15c)) -
                       (uint)(uVar18 < *(uint *)(iVar17 + local_15c));
          puStack_234 = (uint *)0x0;
          puStack_238 = (uint *)0x320000;
          uStack_244 = 0x5283e1;
          local_230 = __allmul();
          local_230 = local_230 >> 0xf;
          puStack_234 = (uint *)0x2;
          puStack_238 = local_1b4;
          iStack_23c = 0x5283fc;
          uVar13 = FUN_00988bb0();
          local_c._0_1_ = 0xe;
          local_230._4_4_ = (uint *)0x5;
          local_230._0_4_ = &DAT_00dfebc8;
          local_138 = 0xf;
          local_13c = 0;
          local_14c[0] = local_14c[0] & 0xffffff00;
          puStack_234 = (uint *)0x528435;
          FUN_00409350();
          local_c._0_1_ = 0xf;
          iStack_240 = *(undefined4 *)(*(int *)(param_1 + 0x8c0) + iVar17);
          iStack_23c = *(undefined4 *)(*(int *)(param_1 + 0x8c0) + 4 + iVar17);
          puStack_234 = (uint *)0x0;
          puStack_238 = (uint *)0x320000;
          uStack_244 = 0x528463;
          local_230 = __allmul();
          local_230 = local_230 >> 0xf;
          puStack_234 = (uint *)0x2;
          puStack_238 = local_a4;
          iStack_23c = 0x52847e;
          uVar14 = FUN_00988bb0();
          local_c._0_1_ = 0x10;
          local_230._4_4_ = (uint *)0x4;
          local_11c = 0xf;
          local_120 = 0;
          local_130[0] = local_130[0] & 0xffffff00;
          local_230._0_4_ = &DAT_00dfebc0;
          puStack_234 = (uint *)0x5284b5;
          FUN_00409350();
          local_c._0_1_ = 0x11;
          local_230._4_4_ = local_dc;
          local_230._0_4_ = (char *)0x5284d0;
          (**(code **)(*piVar21 + 0x18))();
          local_230._4_4_ = local_130;
          local_c._0_1_ = 0x12;
          local_230._0_4_ = (char *)0x5284ee;
          FUN_00988f20();
          local_c._0_1_ = 0x13;
          local_230._0_4_ = (char *)0x528505;
          local_230._4_4_ = (uint *)uVar14;
          FUN_00988f20();
          local_230._4_4_ = local_14c;
          local_c._0_1_ = 0x14;
          local_230._0_4_ = (char *)0x528523;
          FUN_00988f20();
          local_230._4_4_ = local_204;
          local_c._0_1_ = 0x15;
          local_230._0_4_ = (char *)0x52853e;
          FUN_00988f20();
          local_c._0_1_ = 0x16;
          local_230._0_4_ = (char *)0x528559;
          local_230._4_4_ = (uint *)uVar13;
          FUN_00988f20();
          local_230._4_4_ = local_1d0;
          local_c._0_1_ = 0x17;
          local_230._0_4_ = (char *)0x528574;
          puStack_234 = (uint *)FUN_00988f20();
          local_230._4_4_ = (uint *)0xffffffff;
          local_230._0_4_ = (char *)0x0;
          local_c._0_1_ = 0x18;
          puStack_238 = (uint *)0x52858d;
          FUN_00448aa0();
          if (0xf < uStack_3c) {
            local_230._4_4_ = (uint *)uStack_50;
                    /* WARNING: Subroutine does not return */
            local_230._0_4_ = &UNK_005285a4;
            FUN_00aae91b();
          }
          uStack_3c = 0xf;
          uStack_40 = 0;
          uStack_50 = uStack_50 & 0xffffff00;
          if (0xf < uStack_58) {
            local_230._4_4_ = (uint *)uStack_6c;
                    /* WARNING: Subroutine does not return */
            local_230._0_4_ = &UNK_005285da;
            FUN_00aae91b();
          }
          uStack_58 = 0xf;
          uStack_5c = 0;
          uStack_6c = uStack_6c & 0xffffff00;
          if (0xf < uStack_20) {
            local_230._4_4_ = (uint *)uStack_34;
                    /* WARNING: Subroutine does not return */
            local_230._0_4_ = &UNK_00528609;
            FUN_00aae91b();
          }
          uStack_20 = 0xf;
          uStack_24 = 0;
          uStack_34 = uStack_34 & 0xffffff00;
          if (0xf < uStack_ac) {
            local_230._4_4_ = (uint *)uStack_c0;
                    /* WARNING: Subroutine does not return */
            local_230._0_4_ = &UNK_00528638;
            FUN_00aae91b();
          }
          uStack_ac = 0xf;
          uStack_b0 = 0;
          uStack_c0 = uStack_c0 & 0xffffff00;
          if (0xf < uStack_e4) {
            local_230._4_4_ = (uint *)uStack_f8;
                    /* WARNING: Subroutine does not return */
            local_230._0_4_ = &UNK_00528667;
            FUN_00aae91b();
          }
          uStack_e4 = 0xf;
          uStack_e8 = 0;
          uStack_f8 = uStack_f8 & 0xffffff00;
          if (0xf < uStack_74) {
            local_230._4_4_ = (uint *)uStack_88;
                    /* WARNING: Subroutine does not return */
            local_230._0_4_ = &UNK_00528696;
            FUN_00aae91b();
          }
          uStack_74 = 0xf;
          uStack_78 = 0;
          uStack_88 = uStack_88 & 0xffffff00;
          if (0xf < uStack_c8) {
            local_230._4_4_ = (uint *)local_dc[0];
                    /* WARNING: Subroutine does not return */
            local_230._0_4_ = &UNK_005286c5;
            FUN_00aae91b();
          }
          uStack_c8 = 0xf;
          uStack_cc = 0;
          local_dc[0] = local_dc[0] & 0xffffff00;
          if (0xf < local_11c) {
            local_230._4_4_ = (uint *)local_130[0];
                    /* WARNING: Subroutine does not return */
            local_230._0_4_ = &UNK_005286f4;
            FUN_00aae91b();
          }
          local_11c = 0xf;
          local_120 = 0;
          local_130[0] = local_130[0] & 0xffffff00;
          if (0xf < uStack_90) {
            local_230._4_4_ = (uint *)local_a4[0];
                    /* WARNING: Subroutine does not return */
            local_230._0_4_ = &UNK_00528723;
            FUN_00aae91b();
          }
          uStack_90 = 0xf;
          uStack_94 = 0;
          local_a4[0] = local_a4[0] & 0xffffff00;
          if (0xf < local_138) {
            local_230._4_4_ = (uint *)local_14c[0];
                    /* WARNING: Subroutine does not return */
            local_230._0_4_ = &UNK_00528752;
            FUN_00aae91b();
          }
          local_138 = 0xf;
          local_13c = 0;
          local_14c[0] = local_14c[0] & 0xffffff00;
          if (0xf < uStack_1a0) {
            local_230._4_4_ = (uint *)local_1b4[0];
                    /* WARNING: Subroutine does not return */
            local_230._0_4_ = &UNK_0052877e;
            FUN_00aae91b();
          }
          uStack_1a0 = 0xf;
          local_1a4 = 0;
          local_1b4[0] = local_1b4[0] & 0xffffff00;
          if (0xf < local_1bc) {
            local_230._4_4_ = (uint *)local_1d0[0];
                    /* WARNING: Subroutine does not return */
            local_230._0_4_ = &UNK_005287a4;
            FUN_00aae91b();
          }
          local_c._0_1_ = 0xb;
          local_1bc = 0xf;
          local_1c0 = 0;
          local_1d0[0] = local_1d0[0] & 0xffffff00;
          if (0xf < local_1f0) {
            local_230._4_4_ = (uint *)local_204[0];
                    /* WARNING: Subroutine does not return */
            local_230._0_4_ = &UNK_005287cc;
            FUN_00aae91b();
          }
          local_204[0] = local_204[0] & 0xffffff00;
        }
        local_210 = local_210 + 1;
      } while (local_210 < iVar20);
    }
    local_c._0_1_ = 0xb;
    iVar20 = 0;
    local_230._4_4_ = (uint *)0x7;
    local_230._0_4_ = "DETAILS";
    local_1f0 = 0xf;
    local_1f4 = 0;
    local_204[0] = local_204[0] & 0xffffff00;
    puStack_234 = (uint *)0x52880e;
    FUN_00409350();
    local_230._4_4_ = (uint *)0xffffffff;
    local_c._0_1_ = 0x19;
    local_230._0_4_ = (char *)0x0;
    puStack_234 = local_204;
    uStack_1a0 = 0xf;
    local_1a4 = 0;
    local_1b4[0] = local_1b4[0] & 0xffffff00;
    puStack_238 = (uint *)0x528840;
    FUN_00408ed0();
    local_230._4_4_ = (uint *)0xffffffff;
    local_230._0_4_ = (char *)0x0;
    puStack_234 = local_114;
    local_c._0_1_ = 0x1a;
    uStack_184 = 0xf;
    uStack_188 = 0;
    auStack_198[0] = auStack_198[0] & 0xffffff00;
    puStack_238 = (uint *)0x528875;
    FUN_00408ed0();
    local_c._0_1_ = 0x1b;
    iVar17 = puVar10[1];
    local_230._4_4_ = (uint *)0x44;
    local_230._0_4_ = (char *)0x52888f;
    puVar15 = (undefined1 *)FUN_00aae9af();
    local_c._0_1_ = 0x1c;
    uVar6 = (undefined1)local_c;
    local_c._0_1_ = 0x1c;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = (undefined1 *)0x0;
      local_c._0_1_ = uVar6;
    }
    else {
      local_230._4_4_ = (uint *)0xffffffff;
      local_230._0_4_ = (char *)0x0;
      puStack_234 = local_1b4;
      *(undefined4 *)(puVar15 + 0x14) = 0xf;
      *(undefined4 *)(puVar15 + 0x10) = 0;
      *puVar15 = 0;
      puStack_238 = (uint *)0x5288bc;
      FUN_00408ed0();
      local_230._4_4_ = (uint *)0xffffffff;
      local_c._0_1_ = 0x1d;
      local_230._0_4_ = (char *)0x0;
      puStack_234 = auStack_198;
      *(undefined4 *)(puVar15 + 0x30) = 0xf;
      *(undefined4 *)(puVar15 + 0x2c) = 0;
      puVar15[0x1c] = 0;
      puStack_238 = (uint *)0x5288e0;
      FUN_00408ed0();
      *(int *)(puVar15 + 0x38) = iVar17;
      *(undefined4 *)(puVar15 + 0x3c) = 0;
      puVar15[0x40] = 0;
    }
    iVar7 = puVar10[2];
    puVar10[1] = puVar15;
    puVar10[2] = iVar7 + 1;
    if (iVar7 == 0) {
      *puVar10 = puVar15;
    }
    else {
      *(undefined1 **)(iVar17 + 0x3c) = puVar15;
    }
    if (0xf < uStack_184) {
      local_230._4_4_ = (uint *)auStack_198[0];
                    /* WARNING: Subroutine does not return */
      local_230._0_4_ = &UNK_0052892c;
      FUN_00aae91b();
    }
    uStack_184 = 0xf;
    uStack_188 = 0;
    auStack_198[0] = auStack_198[0] & 0xffffff00;
    if (0xf < uStack_1a0) {
      local_230._4_4_ = (uint *)local_1b4[0];
                    /* WARNING: Subroutine does not return */
      local_230._0_4_ = &UNK_00528958;
      FUN_00aae91b();
    }
    local_c._0_1_ = 0xb;
    uStack_1a0 = 0xf;
    local_1a4 = 0;
    local_1b4[0] = local_1b4[0] & 0xffffff00;
    if (0xf < local_1f0) {
      local_230._4_4_ = (uint *)local_204[0];
                    /* WARNING: Subroutine does not return */
      local_230._0_4_ = &UNK_00528986;
      FUN_00aae91b();
    }
    local_230._4_4_ = (uint *)0x0;
    local_230._0_4_ = &DAT_00ded94d;
    local_1bc = 0xf;
    local_1c0 = 0;
    local_1d0[0] = local_1d0[0] & 0xffffff00;
    puStack_234 = (uint *)0x5289aa;
    FUN_00409350();
    local_c._0_1_ = 0x1e;
    local_230._4_4_ = (uint *)0xa;
    local_230._0_4_ = "UPPERHOUSE";
    local_1f0 = 0xf;
    local_1f4 = 0;
    local_204[0] = local_204[0] & 0xffffff00;
    puStack_234 = (uint *)0x5289cf;
    FUN_00409350();
    local_c._0_1_ = 0x1f;
    local_230._4_4_ = (uint *)0x0;
    local_230._0_4_ = &LAB_0055a780;
    uVar13 = *(undefined4 *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0xbe4) * 4);
    iVar17 = DAT_01262ef4;
    if (DAT_01262ef4 == 0) {
      iVar17 = FUN_00aae9af(0x44);
      local_c._0_1_ = 0x20;
      if (iVar17 != 0) {
        iVar20 = FUN_006a4e30();
      }
      iVar7 = DAT_01262ef4;
      local_c = CONCAT31(local_c._1_3_,0x21);
      local_1dc = 0;
      iVar17 = iVar20;
      if ((iVar20 != DAT_01262ef4) && (DAT_01262ef4 != 0)) {
        FUN_006a4ea0(DAT_01262ef4);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(iVar7);
      }
    }
    DAT_01262ef4 = iVar17;
    local_c._0_1_ = 0x1f;
    iVar20 = 0;
    uVar14 = *(undefined4 *)(param_1 + 0x20);
    uVar27 = *(undefined4 *)(param_1 + 0x1c);
    uVar26 = *(undefined4 *)(param_1 + 0x20);
    uVar25 = *(undefined4 *)(param_1 + 0x1c);
    uVar24 = 0;
    puVar11 = local_1d0;
    uVar16 = FUN_006a55b0(puVar10,uVar13,puVar11,0,uVar25,uVar26,uVar27,uVar14);
    FUN_006a7ed0(auStack_2b0,uVar16,puVar10,uVar13,puVar11,uVar24,uVar25,uVar26,uVar27,uVar14);
    local_c._0_1_ = 0x22;
    iVar17 = DAT_01262ef4;
    if (DAT_01262ef4 == 0) {
      iVar17 = FUN_00aae9af();
      local_c._0_1_ = 0x23;
      if (iVar17 != 0) {
        iVar20 = FUN_006a4e30();
      }
      local_c = CONCAT31(local_c._1_3_,0x24);
      iVar17 = iVar20;
      if ((iVar20 != DAT_01262ef4) && (DAT_01262ef4 != 0)) {
        FUN_006a4ea0();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    DAT_01262ef4 = iVar17;
    local_c = CONCAT31(local_c._1_3_,0x1f);
    FUN_004933c0();
    if (0xf < local_1f0) {
      local_230._4_4_ = (uint *)local_204[0];
                    /* WARNING: Subroutine does not return */
      local_230._0_4_ = &UNK_00528b8f;
      FUN_00aae91b();
    }
    local_1f0 = 0xf;
    local_1f4 = 0;
    local_204[0] = local_204[0] & 0xffffff00;
    if (0xf < local_1bc) {
      local_230._4_4_ = (uint *)local_1d0[0];
                    /* WARNING: Subroutine does not return */
      local_230._0_4_ = &UNK_00528baf;
      FUN_00aae91b();
    }
    if (0xf < local_100) {
      local_230._4_4_ = (uint *)local_114[0];
                    /* WARNING: Subroutine does not return */
      local_230._0_4_ = &UNK_00528bc8;
      FUN_00aae91b();
    }
  }
  if (local_15c == 0) {
    ExceptionList = pvStack_14;
    return;
  }
  local_230._4_4_ = (uint *)local_15c;
                    /* WARNING: Subroutine does not return */
  local_230._0_4_ = &UNK_00528be0;
  FUN_00aae91b();
}

