// FUN_005241f0 @ 005241f0 body=[[005241f0, 00524406] [0052440a, 0052446b] [0052446f, 0052452c] [00524530, 00524552] [00524560, 005245a7] [005245b0, 0052464b] [00524650, 00524785] [0052478f, 00524849] [00524850, 005249b8] [005249c0, 00524ce5] [00524cef, 00524f98] [00524f9c, 00524fd0] [00524fd4, 00525003] [00525007, 00525051] [00525055, 00525074] [00525078, 00525098] [0052509c, 005250ca] [005250ce, 005251c0] [005251c4, 00525277] [0052527b, 005252b0] [005252b4, 00525496] [0052549a, 005254e1] [005254e5, 00525505] [00525509, 00525537] [0052553b, 005256d0] [005256d4, 00525703] [00525707, 0052571d]]


/* WARNING: Type propagation algorithm not settling */

void FUN_005241f0(uint ***param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  undefined1 uVar8;
  void **ppvVar9;
  uint uVar10;
  char cVar11;
  uint **ppuVar12;
  int iVar13;
  undefined4 *puVar14;
  char ***pppcVar15;
  undefined8 *puVar16;
  undefined4 *puVar17;
  char ****ppppcVar18;
  undefined1 *puVar19;
  undefined4 uVar20;
  int *piVar21;
  uint ***pppuVar22;
  int iVar23;
  int iVar24;
  undefined4 *puVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  uint **ppuVar28;
  undefined4 uVar29;
  uint ***pppuStack_1cc;
  int iStack_1c8;
  undefined1 auStack_1c4 [88];
  undefined4 uStack_16c;
  char *pcStack_168;
  uint ***pppuStack_164;
  undefined1 local_160;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined8 local_150;
  char ****ppppcStack_148;
  uint ***pppuStack_144;
  int local_130;
  int local_12c;
  uint **local_128;
  uint **ppuStack_124;
  char cStack_11d;
  undefined4 uStack_11c;
  undefined8 uStack_118;
  undefined8 uStack_110;
  uint ***pppuStack_108;
  uint local_104 [3];
  undefined4 uStack_f8;
  uint local_f4;
  uint local_f0;
  undefined1 auStack_ec [4];
  uint ***pppuStack_e8;
  uint ***pppuStack_e4;
  undefined4 uStack_e0;
  uint ***apppuStack_d8 [4];
  undefined4 uStack_c8;
  uint uStack_c4;
  uint ***pppuStack_bc;
  undefined1 local_b8 [8];
  uint local_b0;
  uint local_ac;
  uint uStack_a8;
  uint ***apppuStack_a0 [4];
  undefined4 uStack_90;
  uint **local_8c;
  uint **local_88;
  uint ***pppuStack_70;
  undefined4 uStack_60;
  uint uStack_5c;
  uint ***pppuStack_54;
  undefined4 uStack_44;
  uint uStack_40;
  uint ***apppuStack_38 [4];
  undefined4 uStack_28;
  uint uStack_24;
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00ba7030;
  pvStack_14 = ExceptionList;
  if (*(int *)(DAT_012588e8 + 0xb0c) <
      (int)(param_1[0x3a7] + (*(int *)(*(int *)(DAT_012586dc + 0x10) + 8) / 1000) * 0x88e)) {
    local_12c = 0;
    ExceptionList = &pvStack_14;
    ppvVar9 = &pvStack_14;
    if (0 < (int)((int)param_1[0x3a4] - (int)param_1[0x3a3] & 0xfffffffcU)) {
      do {
        ExceptionList = ppvVar9;
        local_c = 0xffffffff;
        puVar1 = param_1[0x3a3][local_12c];
        local_128 = (uint **)puVar1[2];
        iVar24 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + puVar1[3] * 4) + 0xbe8) +
                         (int)param_1[8] * 4);
        iVar13 = *(int *)(iVar24 + 0x30);
        if ((iVar13 != 0) &&
           (local_128 = *(uint ***)(iVar13 + 0x10),
           *(int *)(iVar13 + 0x14) == *(int *)(iVar24 + 0xc))) {
          pppuStack_144 = (uint ***)0x0;
          ppppcStack_148 = (char ****)0x524362;
          FUN_008a8650();
          local_b0 = puVar1[2];
          local_ac = puVar1[3];
          local_8c = param_1[7];
          local_88 = param_1[8];
          pppuStack_144 = (uint ***)0x18;
          ppppcStack_148 = (char ****)0xdfeae8;
          local_f0 = 0xf;
          local_f4 = 0;
          local_104[0] = local_104[0] & 0xffffff00;
          local_150._4_4_ = (char *)0x5243ad;
          FUN_00409350();
          local_c = 0;
          iVar24 = DAT_0131a584;
          if (DAT_0131a584 == 0) {
            pppuStack_144 = (uint ***)0x1c;
            ppppcStack_148 = (char ****)0x5243c4;
            iVar24 = FUN_00aae9af();
            local_c._0_1_ = 1;
            if (iVar24 == 0) {
              iVar24 = 0;
            }
            else {
              pppuStack_144 = (uint ***)0x5243de;
              iVar24 = FUN_008b0060();
            }
            iVar13 = DAT_0131a584;
            local_c = (uint)local_c._1_3_ << 8;
            if ((iVar24 != DAT_0131a584) && (DAT_0131a584 != 0)) {
              pppuStack_144 = (uint ***)DAT_0131a584;
              ppppcStack_148 = (char ****)0x524401;
              FUN_008b2740();
              pppuStack_144 = (uint ***)iVar13;
                    /* WARNING: Subroutine does not return */
              ppppcStack_148 = (char ****)&UNK_00524407;
              FUN_00aae91b();
            }
          }
          DAT_0131a584 = iVar24;
          pppuStack_144 = (uint ***)local_104;
          ppppcStack_148 = (char ****)0x52441f;
          ppppcStack_148 = (char ****)FUN_008b3060();
          if (ppppcStack_148 != (char ****)0x0) {
            pppuStack_144 = (uint ***)local_b8;
            local_150._4_4_ = (char *)0x524431;
            iVar24 = FUN_008b24f0();
            if (iVar24 != 0) {
              pppuStack_144 = (uint ***)local_b8;
              local_150._4_4_ = (char *)0x524445;
              ppppcStack_148 = (char ****)FUN_008a6620();
              local_150._4_4_ = (char *)0x524450;
              FUN_008a8120();
            }
          }
          local_c = 0xffffffff;
          if (0xf < local_f0) {
            pppuStack_144 = (uint ***)local_104[0];
                    /* WARNING: Subroutine does not return */
            ppppcStack_148 = (char ****)&UNK_0052446c;
            FUN_00aae91b();
          }
        }
        local_c = 0xffffffff;
        local_12c = local_12c + 1;
        ppvVar9 = ExceptionList;
      } while (local_12c < (int)param_1[0x3a4] - (int)param_1[0x3a3] >> 2);
    }
  }
  else {
    pppuStack_144 = (uint ***)((*(int *)(*(int *)(DAT_012586dc + 0x10) + 8) / 1000) * 0x16d);
    pppuStack_164 = (uint ***)0xa;
    local_150._4_4_ = (char *)0xf;
    local_150._0_4_ = (char ****)0x0;
    pcStack_168 = "bad_debter";
    local_160 = 0;
    uStack_16c = 0x524293;
    ExceptionList = &pvStack_14;
    FUN_00409350();
    pppuStack_164 = param_1;
    pcStack_168 = (char *)0x524299;
    FUN_005114d0();
    pppuStack_144 = (uint ***)((*(int *)(*(int *)(DAT_012586dc + 0x10) + 0x38) / 1000) * 0x16d);
    pppuStack_164 = (uint ***)0xc;
    local_150._4_4_ = (char *)0xf;
    local_150._0_4_ = (char ****)0x0;
    pcStack_168 = "in_bankrupcy";
    local_160 = 0;
    uStack_16c = 0x5242db;
    FUN_00409350();
    pppuStack_164 = param_1;
    pcStack_168 = (char *)0x5242e1;
    FUN_005114d0();
  }
  iVar24 = DAT_012586dc;
  param_1[0x3a7] = *(uint ***)(DAT_012588e8 + 0xb0c);
  local_150 = (longlong)*(int *)(*(int *)(iVar24 + 0x10) + 0xc) * (longlong)(int)param_1[0x3a8];
  iVar24 = 0;
  pppuStack_144 = (uint ***)0x0;
  ppppcStack_148 = (char ****)0x3e8;
  uStack_154 = 0x5244bd;
  ppuVar12 = (uint **)__alldiv();
  param_1[0x3a8] = ppuVar12;
  local_128 = param_1[0x276];
  if (DAT_0131bb34 == 0) {
    pppuStack_144 = (uint ***)0x188;
    ppppcStack_148 = (char ****)0x5244e0;
    iVar13 = FUN_00aae9af();
    local_c = 7;
    if (iVar13 != 0) {
      pppuStack_144 = (uint ***)0x5244fd;
      iVar24 = FUN_0041a160();
    }
    iVar13 = DAT_0131bb34;
    local_c = 8;
    if ((iVar24 != DAT_0131bb34) && (DAT_0131bb34 != 0)) {
      pppuStack_144 = (uint ***)DAT_0131bb34;
      ppppcStack_148 = (char ****)0x524527;
      FUN_0096dd80();
      pppuStack_144 = (uint ***)iVar13;
                    /* WARNING: Subroutine does not return */
      ppppcStack_148 = (char ****)&UNK_0052452d;
      FUN_00aae91b();
    }
    local_c = 0xffffffff;
    DAT_0131bb34 = iVar24;
  }
  iVar24 = *(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2;
  while ((param_1[0x276] <= local_128 && (local_128 < param_1[0x277]))) {
    ppuVar12 = local_128 + 1;
    iVar13 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + (int)*local_128 * 4);
    local_128 = ppuVar12;
    if (0 < iVar24) {
      iVar23 = 0;
      local_130 = iVar24;
      do {
        iVar3 = *(int *)(iVar23 + *(int *)(iVar13 + 0x194));
joined_r0x005245bb:
        iVar7 = iVar3;
        if (iVar7 != 0) {
          iVar3 = *(int *)(iVar7 + 0x27c);
          if ((-1 < *(int *)(iVar7 + 0x254)) &&
             ((0 < *(int *)(iVar7 + 0x254) || (*(int *)(iVar7 + 0x250) != 0)))) {
            puVar1 = (uint *)(iVar7 + 0x120);
            uVar2 = *puVar1;
            *puVar1 = *puVar1 + 0x10000;
            *(int *)(iVar7 + 0x124) = *(int *)(iVar7 + 0x124) + (uint)(0xfffeffff < uVar2);
            if (*(int *)(iVar7 + 0x124) < 1) {
              if (*(int *)(iVar7 + 0x124) < 0) {
                *(undefined4 *)(iVar7 + 0x120) = 0;
                *(undefined4 *)(iVar7 + 0x124) = 0;
              }
              if ((*(int *)(iVar7 + 0x124) < 0) ||
                 ((*(int *)(iVar7 + 0x124) < 1 && (*(uint *)(iVar7 + 0x120) < 0x50001))))
              goto joined_r0x005245bb;
            }
            *(undefined4 *)(iVar7 + 0x120) = 0x50000;
            *(undefined4 *)(iVar7 + 0x124) = 0;
          }
          goto joined_r0x005245bb;
        }
        iVar23 = iVar23 + 0x10;
        local_130 = local_130 + -1;
      } while (local_130 != 0);
    }
  }
  ppuVar12 = param_1[0x276];
  while ((param_1[0x276] <= ppuVar12 && (ppuVar12 < param_1[0x277]))) {
    iVar24 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + (int)*ppuVar12 * 4);
    piVar21 = *(int **)(iVar24 + 0xd8);
    ppuVar12 = ppuVar12 + 1;
    while (local_128 = ppuVar12, piVar21 != (int *)0x0) {
      piVar4 = (int *)*piVar21;
      piVar21 = (int *)piVar21[2];
      pppuStack_144 = (uint ***)0x5246a6;
      cVar11 = (**(code **)(*piVar4 + 0x34))();
      if (cVar11 == '\0') {
        pppuStack_144 = (uint ***)0x5246c0;
        cVar11 = (**(code **)(*piVar4 + 0x30))();
        ppuVar12 = local_128;
        if (cVar11 != '\0') {
          iVar13 = piVar4[0x15];
          if (iVar13 != 0) {
            pppuStack_144 = (uint ***)(iVar13 + 8);
            ppppcStack_148 = (char ****)0x5246e2;
            FUN_0047dc20();
            pppuStack_144 = (uint ***)(iVar13 + 0x60);
            ppppcStack_148 = (char ****)0x5246eb;
            FUN_0047dca0();
            uVar2 = *(uint *)(iVar13 + 0xb8);
            iVar13 = *(int *)(iVar13 + 0xbc);
            pppuVar22 = param_1 + 0x39e;
            ppuVar12 = *pppuVar22;
            *pppuVar22 = (uint **)((int)*pppuVar22 + uVar2);
            param_1[0x39f] =
                 (uint **)((int)param_1[0x39f] + (uint)CARRY4((uint)ppuVar12,uVar2) + iVar13);
            ppuVar28 = param_1[(DAT_01258738 + 0xd) * 4];
            ppuVar12 = ppuVar28 + 0x10;
            puVar1 = *ppuVar12;
            *ppuVar12 = (uint *)((int)*ppuVar12 + uVar2);
            ppuVar28 = ppuVar28 + 0x11;
            *ppuVar28 = (uint *)((int)*ppuVar28 + (uint)CARRY4((uint)puVar1,uVar2) + iVar13);
          }
          for (pppuStack_144 = *(uint ****)(iVar24 + 0xd8); pppuStack_144 != (uint ***)0x0;
              pppuStack_144 = (uint ***)pppuStack_144[2]) {
            if (*pppuStack_144 == (uint **)piVar4) {
              if (pppuStack_144 != (uint ***)0x0) {
                if (*(char *)(iVar24 + 0xe4) == '\0') {
                  iVar13 = (int)pppuStack_144[1];
                  iVar23 = (int)pppuStack_144[2];
                  if (iVar13 != 0) {
                    *(int *)(iVar13 + 8) = iVar23;
                  }
                  if (iVar23 != 0) {
                    *(int *)(iVar23 + 4) = iVar13;
                  }
                  if (pppuStack_144 == (uint ***)*(undefined4 **)(iVar24 + 0xd8)) {
                    *(int *)(iVar24 + 0xd8) = iVar23;
                  }
                  if (pppuStack_144 == (uint ***)*(undefined4 **)(iVar24 + 0xdc)) {
                    *(int *)(iVar24 + 0xdc) = iVar13;
                  }
                    /* WARNING: Subroutine does not return */
                  ppppcStack_148 = (char ****)&UNK_00524786;
                  FUN_00aae91b();
                }
                *(undefined1 *)(pppuStack_144 + 3) = 1;
              }
              break;
            }
          }
          if (param_1[8] == *(uint ***)(DAT_012588e8 + 0xb60)) {
            iVar13 = *(int *)(DAT_012588e8 + 0xb24);
            if (0x1c < (int)(*(int *)(iVar13 + 0xd84) - *(int *)(iVar13 + 0xd80) & 0xfffffffcU)) {
              pppuStack_144 = (uint ***)0x5247c9;
              cVar11 = (**(code **)(**(int **)(*(int *)(iVar13 + 0xd80) + 0x1c) + 0x1c))();
              if ((cVar11 != '\0') &&
                 (iVar23 = *(int *)(*(int *)(*(int *)(iVar13 + 0xd80) + 0x1c) + 0x70), iVar23 != 0))
              {
                *(undefined1 *)(iVar23 + 0x160) = 1;
              }
            }
            if ((*(int *)(iVar13 + 0x1d08) != 0) &&
               (iVar13 = *(int *)(*(int *)(iVar13 + 0x1d08) + 0x2c), iVar13 != 0)) {
              *(undefined1 *)(iVar13 + 0x160) = 1;
            }
          }
          pppuStack_144 = (uint ***)0x1;
          ppppcStack_148 = (char ****)0x524806;
          (**(code **)*piVar4)();
          ppuVar12 = local_128;
        }
      }
      else {
        ppppcStack_148 = (char ****)0x5246b2;
        pppuStack_144 = (uint ***)piVar4;
        FUN_0053e7c0();
        ppuVar12 = local_128;
      }
    }
  }
  ppuVar12 = param_1[0x391];
  while (ppuVar12 != (uint **)0x0) {
    puVar1 = *ppuVar12;
    ppuVar12 = (uint **)ppuVar12[2];
    uVar2 = puVar1[0x18];
    while (uVar10 = uVar2, uVar10 != 0) {
      uVar2 = *(uint *)(uVar10 + 0x224);
      if (*(int *)(uVar10 + 0x17c) != 0) {
        iVar24 = 0;
        for (uVar5 = puVar1[0x18]; uVar5 != 0; uVar5 = *(uint *)(uVar5 + 0x224)) {
          if (uVar10 == uVar5) {
            if (uVar5 != 0) goto LAB_0052488a;
            break;
          }
          iVar24 = iVar24 + 1;
        }
        iVar24 = -1;
LAB_0052488a:
        if ((((uint **)puVar1[0x17] == param_1[8]) && (*(char *)(param_1 + 0x2b8) != '\0')) &&
           (iVar24 < (int)puVar1[0x1a])) {
          pppuStack_144 = (uint ***)0x50;
          ppppcStack_148 = (char ****)0x5248b7;
          puVar14 = (undefined4 *)FUN_00aae9af();
          uStack_110 = CONCAT44(uStack_110._4_4_,puVar14);
          if (puVar14 == (undefined4 *)0x0) {
            puVar14 = (undefined4 *)0x0;
          }
          else {
            local_128 = (uint **)puVar1[0x16];
            ppuStack_124 = (uint **)puVar1[0x17];
            puVar14[1] = 0x18d;
            *puVar14 = CCommand::vftable;
            puVar14[7] = 0xf;
            puVar14[6] = 0;
            *(undefined1 *)(puVar14 + 2) = 0;
            local_c = 10;
            pppuStack_144 = (uint ***)0x0;
            puVar14[0xb] = 0x913;
            puVar14[0xc] = 0x913;
            ppppcStack_148 = (char ****)&DAT_00ded94d;
            *(undefined2 *)(puVar14 + 0xd) = 0xffff;
            local_150._4_4_ = (char *)0x52492a;
            FUN_00409350();
            puVar14[9] = 0;
            *(undefined2 *)((int)puVar14 + 0x36) = 0;
            puVar14[0xe] = 0;
            puVar14[0xf] = iVar24;
            *(undefined2 *)(puVar14 + 10) = 0;
            *puVar14 = CDestroyStateBuildingCommand::vftable;
            puVar14[0x10] = puVar1[2];
            puVar14[0x11] = puVar1[3];
            puVar14[0x12] = local_128;
            puVar14[0x13] = ppuStack_124;
          }
          local_c = 0xffffffff;
          pppuStack_144 = (uint ***)0x52497f;
          iVar24 = (*(code *)(*param_1[0x337])[0x11])();
          ppppcStack_148 = (char ****)0x52498a;
          pppuStack_144 = (uint ***)puVar14;
          (**(code **)(**(int **)(iVar24 + 0x38) + 0x18))();
        }
      }
    }
  }
  iVar24 = 0;
  if (0 < (int)((int)param_1[0x48e] - (int)param_1[0x48d] & 0xfffffffcU)) {
    do {
      ppuVar12 = param_1[0x48d] + iVar24;
      if (param_1[0x48d][iVar24] != (uint *)0x0) {
        puVar1 = *ppuVar12;
        uVar2 = puVar1[0x11];
        puVar6 = *ppuVar12;
        puVar6[4] = puVar1[0x10];
        puVar6[5] = uVar2;
      }
      iVar24 = iVar24 + 1;
    } while (iVar24 < (int)param_1[0x48e] - (int)param_1[0x48d] >> 2);
  }
  puVar1 = *param_1[0x28];
  puVar1[4] = puVar1[0x18];
  puVar1[5] = puVar1[0x19];
  puVar1 = param_1[0x28][1];
  puVar1[4] = puVar1[0x18];
  puVar1[5] = puVar1[0x19];
  puVar1 = param_1[0x28][2];
  uVar2 = puVar1[0x18];
  puVar6 = param_1[0x28][2];
  puVar6[5] = puVar1[0x19];
  puVar6[4] = uVar2;
  ppuStack_124 = param_1[0x511];
  local_128 = param_1[0x510];
  uStack_118 = 0;
  uStack_110._4_4_ = (undefined4)((ulonglong)uStack_110 >> 0x20);
  uStack_110 = CONCAT44(uStack_110._4_4_,&ppppcStack_148);
  if (((int)ppuStack_124 < 1) && ((int)ppuStack_124 < 0)) {
    pppcVar15 = (char ***)&uStack_118;
  }
  else {
    pppcVar15 = (char ***)&local_128;
  }
  ppppcStack_148 = (char ****)*pppcVar15;
  pppuStack_144 = (uint ***)pppcVar15[1];
  local_150._4_4_ = (char *)0x524a80;
  FUN_00538070();
  uStack_118 = *(undefined8 *)(param_1 + 0x518);
  uStack_110 = 0;
  if (((int)param_1[0x519] < 1) && ((int)param_1[0x519] < 0)) {
    puVar16 = &uStack_110;
  }
  else {
    puVar16 = &uStack_118;
  }
  ppuVar12 = *(uint ***)((int)puVar16 + 4);
  param_1[0x512] = *(uint ***)puVar16;
  param_1[0x513] = ppuVar12;
  uStack_118 = *(undefined8 *)(param_1 + 0x51a);
  uStack_110 = 0;
  if (((int)param_1[0x51b] < 1) && ((int)param_1[0x51b] < 0)) {
    puVar16 = &uStack_110;
  }
  else {
    puVar16 = &uStack_118;
  }
  ppuVar12 = *(uint ***)((int)puVar16 + 4);
  param_1[0x514] = *(uint ***)puVar16;
  param_1[0x515] = ppuVar12;
  uStack_118._4_4_ = param_1[0x51d];
  uStack_118._0_4_ = param_1[0x51c];
  uStack_110 = 0;
  if (((int)uStack_118._4_4_ < 1) && ((int)uStack_118._4_4_ < 0)) {
    puVar16 = &uStack_110;
  }
  else {
    puVar16 = &uStack_118;
  }
  ppuVar12 = *(uint ***)((int)puVar16 + 4);
  param_1[0x516] = *(uint ***)puVar16;
  iVar24 = DAT_012588e8;
  param_1[0x517] = ppuVar12;
  ppuVar12 = param_1[0x337];
  if ((*(uint ***)(iVar24 + 0xb60) == param_1[8]) &&
     (8 < (int)((int)ppuVar12[0x361] - (int)ppuVar12[0x360] & 0xfffffffcU))) {
    pppuStack_144 = (uint ***)0x524b89;
    cVar11 = (**(code **)(*(int *)ppuVar12[0x360][2] + 0x1c))();
    if (cVar11 != '\0') {
      pppuStack_144 = (uint ***)0x524b9b;
      FUN_0060bb60();
    }
  }
  uVar2 = (uint)uStack_11c;
  ppuVar12 = param_1[0x391];
  while (ppuVar12 != (uint **)0x0) {
    puVar1 = *ppuVar12;
    ppuVar12 = (uint **)ppuVar12[2];
    uVar10 = puVar1[0x18];
    while (uVar5 = uVar10, uVar5 != 0) {
      uVar10 = *(uint *)(uVar5 + 0x224);
      if (*(char *)(uVar5 + 0x180) != '\0') {
        *(undefined1 *)(uVar5 + 0x180) = 0;
      }
    }
  }
  ppuStack_124 = *(uint ***)(DAT_012588e8 + 0xb60);
  local_128 = *(uint ***)(DAT_012588e8 + 0xb5c);
  uStack_11c = (uint ***)((uint)uStack_11c & 0xffffff);
  if (ppuStack_124 != param_1[8]) {
    iVar13 = 0;
    iVar24 = (int)param_1[0x3a4] - (int)param_1[0x3a3] >> 2;
    if (0 < iVar24) {
      ppuVar12 = param_1[0x3a3];
      do {
        uStack_118._0_4_ = (uint **)(*ppuVar12)[2];
        if ((uint **)(*ppuVar12)[3] == ppuStack_124) {
          uStack_11c = (uint ***)CONCAT13(1,(int3)uVar2);
          break;
        }
        iVar13 = iVar13 + 1;
        ppuVar12 = ppuVar12 + 1;
      } while (iVar13 < iVar24);
    }
  }
  local_130 = 0;
  if (0 < (int)((int)param_1[0x3aa] - (int)param_1[0x3a9] & 0xfffffffcU)) {
    do {
      puVar1 = param_1[0x3a9][local_130];
      piVar21 = (int *)param_1[0x2fa][puVar1[8]][0xe];
      if (piVar21 != (int *)0x0) {
        pppuStack_144 = (uint ***)0x524c7c;
        (**(code **)(*piVar21 + 0x2c))();
        iVar24 = DAT_012588e8;
        for (pppuStack_144 = *(uint ****)(DAT_012588e8 + 0xa84); pppuStack_144 != (uint ***)0x0;
            pppuStack_144 = (uint ***)pppuStack_144[2]) {
          if (*pppuStack_144 == (uint **)piVar21) {
            if (pppuStack_144 != (uint ***)0x0) {
              if (*(char *)(DAT_012588e8 + 0xa90) == '\0') {
                iVar13 = (int)pppuStack_144[1];
                iVar23 = (int)pppuStack_144[2];
                if (iVar13 != 0) {
                  *(int *)(iVar13 + 8) = iVar23;
                }
                if (iVar23 != 0) {
                  *(int *)(iVar23 + 4) = iVar13;
                }
                if (pppuStack_144 == (uint ***)*(undefined4 **)(iVar24 + 0xa84)) {
                  *(int *)(iVar24 + 0xa84) = iVar23;
                }
                if (pppuStack_144 == (uint ***)*(undefined4 **)(iVar24 + 0xa88)) {
                  *(int *)(iVar24 + 0xa88) = iVar13;
                }
                    /* WARNING: Subroutine does not return */
                ppppcStack_148 = (char ****)&UNK_00524ce6;
                FUN_00aae91b();
              }
              *(undefined1 *)(pppuStack_144 + 3) = 1;
            }
            break;
          }
        }
        puVar1 = param_1[0x2fa][puVar1[8]];
        *(undefined1 *)((int)puVar1 + 0x71) = 1;
        puVar1[0xe] = 0;
        pppuStack_144 = (uint ***)0x1;
        ppppcStack_148 = (char ****)0x524d14;
        (**(code **)*piVar21)();
      }
      local_130 = local_130 + 1;
    } while (local_130 < (int)param_1[0x3aa] - (int)param_1[0x3a9] >> 2);
  }
  ppuVar12 = ppuStack_124;
  pppuStack_144 = param_1;
  ppppcStack_148 = (char ****)0x524d3e;
  FUN_0050ea30();
  ppppcStack_148 = (char ****)param_1;
  local_150._4_4_ = (char *)0x524d44;
  FUN_00520150();
  if (ppuVar12 == param_1[8]) {
    ppppcStack_148 = (char ****)param_1;
    local_150._4_4_ = (char *)0x524d53;
    puVar17 = (undefined4 *)FUN_005061e0();
    ppppcStack_148 = (char ****)0x10;
    local_150._4_4_ = "MESSAGE_HEAD_GOV";
    uStack_c4 = 0xf;
    uStack_c8 = 0;
    apppuStack_d8[0] = (uint ***)((uint)apppuStack_d8[0] & 0xffffff00);
    local_150._0_4_ = (char ****)0x524d85;
    FUN_00409350();
    puStack_10 = (undefined1 *)0xb;
    local_f4 = 0xf;
    ppppcStack_148 = (char ****)0x9;
    puVar25 = (undefined4 *)0x0;
    local_150._4_4_ = "MESSENGER";
    uStack_f8 = 0;
    pppuStack_108 = (uint ***)((uint)pppuStack_108 & 0xffffff00);
    local_150._0_4_ = (char ****)0x524daf;
    FUN_00409350();
    ppppcStack_148 = (char ****)apppuStack_d8;
    local_150._4_4_ = auStack_ec;
    puStack_10._0_1_ = 0xc;
    local_150._0_4_ = (char ****)0x524dc6;
    FUN_009a8ee0();
    puStack_10._0_1_ = 0xd;
    puVar14 = DAT_0125b5e0;
    if (DAT_0125b5e0 == (undefined4 *)0x0) {
      ppppcStack_148 = (char ****)0x180;
      local_150._4_4_ = (char *)0x524de5;
      ppppcStack_148 = (char ****)FUN_00aae9af();
      uStack_118 = CONCAT44(ppppcStack_148,(uint **)uStack_118);
      puStack_10._0_1_ = 0xe;
      if (ppppcStack_148 != (char ****)0x0) {
        local_150._4_4_ = (char *)0x524dfe;
        puVar25 = (undefined4 *)FUN_00475150();
      }
      puStack_10._0_1_ = 0xf;
      uStack_118._4_4_ = (uint **)0x0;
      puVar14 = puVar25;
      if ((puVar25 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
        ppppcStack_148 = (char ****)0x1;
        local_150._4_4_ = (char *)0x524e26;
        (**(code **)*DAT_0125b5e0)();
      }
    }
    DAT_0125b5e0 = puVar14;
    puStack_10._0_1_ = 0xd;
    uStack_154 = (undefined4)*(undefined8 *)(DAT_0125b5e0 + 0x1b);
    local_150._0_4_ = (char ****)((ulonglong)*(undefined8 *)(DAT_0125b5e0 + 0x1b) >> 0x20);
    local_150._4_4_ = (char *)*(undefined8 *)(DAT_0125b5e0 + 0x1d);
    ppppcStack_148 = (char ****)((ulonglong)*(undefined8 *)(DAT_0125b5e0 + 0x1d) >> 0x20);
    uStack_158 = 0x524e5d;
    ppppcVar18 = (char ****)FUN_009a9880();
    ppppcStack_148 = (char ****)0xffffffff;
    local_150._4_4_ = (char *)0x0;
    local_150._0_4_ = (char ****)&pppuStack_108;
    puStack_10._0_1_ = 0x10;
    uStack_a8 = 0xf;
    local_ac = 0;
    pppuStack_bc = (uint ***)((uint)pppuStack_bc & 0xffffff00);
    uStack_154 = 0x524e9a;
    FUN_00408ed0();
    ppppcStack_148 = (char ****)0xffffffff;
    puStack_10._0_1_ = 0x11;
    local_150._4_4_ = (char *)0x0;
    local_8c = (uint **)0xf;
    uStack_90 = 0;
    apppuStack_a0[0] = (uint ***)((uint)apppuStack_a0[0] & 0xffffff00);
    uStack_154 = 0x524ed1;
    local_150._0_4_ = ppppcVar18;
    FUN_00408ed0();
    puStack_10._0_1_ = 0x12;
    iVar24 = puVar17[1];
    ppppcStack_148 = (char ****)0x44;
    local_150._4_4_ = (char *)0x524ee7;
    puVar19 = (undefined1 *)FUN_00aae9af();
    uStack_118 = CONCAT44(puVar19,(uint **)uStack_118);
    puStack_10._0_1_ = 0x13;
    uVar8 = puStack_10._0_1_;
    puStack_10._0_1_ = 0x13;
    if (puVar19 == (undefined1 *)0x0) {
      puVar19 = (undefined1 *)0x0;
      puStack_10._0_1_ = uVar8;
    }
    else {
      ppppcStack_148 = (char ****)0xffffffff;
      local_150._4_4_ = (char *)0x0;
      local_150._0_4_ = (char ****)&pppuStack_bc;
      *(undefined4 *)(puVar19 + 0x14) = 0xf;
      *(undefined4 *)(puVar19 + 0x10) = 0;
      *puVar19 = 0;
      uStack_154 = 0x524f20;
      FUN_00408ed0();
      ppppcStack_148 = (char ****)0xffffffff;
      puStack_10._0_1_ = 0x14;
      local_150._4_4_ = (char *)0x0;
      local_150._0_4_ = (char ****)apppuStack_a0;
      *(undefined4 *)(puVar19 + 0x30) = 0xf;
      *(undefined4 *)(puVar19 + 0x2c) = 0;
      puVar19[0x1c] = 0;
      uStack_154 = 0x524f4d;
      FUN_00408ed0();
      *(int *)(puVar19 + 0x38) = iVar24;
      *(undefined4 *)(puVar19 + 0x3c) = 0;
      puVar19[0x40] = 0;
    }
    iVar13 = puVar17[2];
    puVar17[1] = puVar19;
    puVar17[2] = iVar13 + 1;
    if (iVar13 == 0) {
      *puVar17 = puVar19;
    }
    else {
      *(undefined1 **)(iVar24 + 0x3c) = puVar19;
    }
    if (0xf < local_8c) {
      ppppcStack_148 = (char ****)apppuStack_a0[0];
                    /* WARNING: Subroutine does not return */
      local_150._4_4_ = &UNK_00524f99;
      FUN_00aae91b();
    }
    local_8c = (uint **)0xf;
    uStack_90 = 0;
    apppuStack_a0[0] = (uint ***)((uint)apppuStack_a0[0] & 0xffffff00);
    if (0xf < uStack_a8) {
      ppppcStack_148 = (char ****)pppuStack_bc;
                    /* WARNING: Subroutine does not return */
      local_150._4_4_ = &UNK_00524fd1;
      FUN_00aae91b();
    }
    uStack_a8 = 0xf;
    local_ac = 0;
    pppuStack_bc = (uint ***)((uint)pppuStack_bc & 0xffffff00);
    if (0xf < uStack_5c) {
      ppppcStack_148 = (char ****)pppuStack_70;
                    /* WARNING: Subroutine does not return */
      local_150._4_4_ = &UNK_00525004;
      FUN_00aae91b();
    }
    iVar24 = 0;
    uStack_5c = 0xf;
    uStack_60 = 0;
    pppuStack_70 = (uint ***)((uint)pppuStack_70 & 0xffffff00);
    puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,0x15);
    ppppcStack_148 = (char ****)0x525030;
    FUN_009adb70();
    if (pppuStack_e8 != (uint ***)0x0) {
      while( true ) {
        if (pppuStack_e8 == pppuStack_e4) {
                    /* WARNING: Subroutine does not return */
          local_150._4_4_ = &UNK_00525075;
          FUN_00aae91b();
        }
        if ((uint **)0xf < pppuStack_e8[5]) break;
        pppuStack_e8[5] = (uint **)0xf;
        pppuStack_e8[4] = (uint **)0x0;
        *(undefined1 *)pppuStack_e8 = 0;
        pppuStack_e8 = pppuStack_e8 + 8;
      }
      ppppcStack_148 = (char ****)*pppuStack_e8;
                    /* WARNING: Subroutine does not return */
      local_150._4_4_ = &UNK_00525052;
      FUN_00aae91b();
    }
    pppuStack_e8 = (uint ***)0x0;
    pppuStack_e4 = (uint ***)0x0;
    uStack_e0 = 0;
    if (0xf < local_f4) {
      ppppcStack_148 = (char ****)pppuStack_108;
                    /* WARNING: Subroutine does not return */
      local_150._4_4_ = &UNK_00525099;
      FUN_00aae91b();
    }
    puStack_10 = (undefined1 *)0xffffffff;
    local_f4 = 0xf;
    uStack_f8 = 0;
    pppuStack_108 = (uint ***)((uint)pppuStack_108 & 0xffffff00);
    if (0xf < uStack_c4) {
      ppppcStack_148 = (char ****)apppuStack_d8[0];
                    /* WARNING: Subroutine does not return */
      local_150._4_4_ = &UNK_005250cb;
      FUN_00aae91b();
    }
    ppppcStack_148 = (char ****)0x0;
    local_150._4_4_ = &DAT_00ded94d;
    uStack_c4 = 0xf;
    uStack_c8 = 0;
    apppuStack_d8[0] = (uint ***)((uint)apppuStack_d8[0] & 0xffffff00);
    local_150._0_4_ = (char ****)0x5250f5;
    FUN_00409350();
    puStack_10 = (undefined1 *)0x16;
    ppppcStack_148 = (char ****)0xa;
    local_150._4_4_ = "BANKRUPTCY";
    local_f4 = 0xf;
    uStack_f8 = 0;
    pppuStack_108 = (uint ***)((uint)pppuStack_108 & 0xffffff00);
    local_150._0_4_ = (char ****)0x52511d;
    FUN_00409350();
    puStack_10._0_1_ = 0x17;
    uStack_118 = CONCAT44(auStack_1c4,(uint **)uStack_118);
    pppuStack_1cc = (uint ***)0x0;
    iStack_1c8 = 0;
    local_12c = 0x2d2d2d;
    iVar13 = DAT_01262ef4;
    if (DAT_01262ef4 == 0) {
      iVar13 = FUN_00aae9af(0x44);
      puStack_10._0_1_ = 0x18;
      if (iVar13 != 0) {
        iVar24 = FUN_006a4e30();
      }
      iVar23 = DAT_01262ef4;
      puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,0x19);
      uStack_11c = (uint ***)0x0;
      iVar13 = iVar24;
      if ((iVar24 != DAT_01262ef4) && (DAT_01262ef4 != 0)) {
        FUN_006a4ea0(DAT_01262ef4);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(iVar23);
      }
    }
    DAT_01262ef4 = iVar13;
    puStack_10._0_1_ = 0x17;
    iVar13 = 0;
    ppuVar12 = param_1[8];
    uVar29 = 0;
    ppuVar28 = param_1[7];
    uVar27 = 0;
    ppppcVar18 = (char ****)apppuStack_d8;
    uVar26 = 0;
    uVar20 = FUN_006a55b0(puVar17,0,ppppcVar18,0,ppuVar28,ppuVar12,0x2d2d2d,0);
    FUN_006a7ed0(auStack_1c4,uVar20,puVar17,uVar26,ppppcVar18,uVar27,ppuVar28,ppuVar12,local_12c,
                 uVar29);
    puStack_10._0_1_ = 0x1a;
    iVar24 = DAT_01262ef4;
    if (DAT_01262ef4 == 0) {
      iStack_1c8 = 0x44;
      pppuStack_1cc = (uint ***)0x52522b;
      uStack_11c = (uint ***)FUN_00aae9af();
      puStack_10._0_1_ = 0x1b;
      if (uStack_11c != (uint ***)0x0) {
        iStack_1c8 = 0x525248;
        iVar13 = FUN_006a4e30();
      }
      iVar23 = DAT_01262ef4;
      puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,0x1c);
      uStack_11c = (uint ***)0x0;
      iVar24 = iVar13;
      if ((iVar13 != DAT_01262ef4) && (DAT_01262ef4 != 0)) {
        iStack_1c8 = DAT_01262ef4;
        pppuStack_1cc = (uint ***)0x525272;
        FUN_006a4ea0();
        iStack_1c8 = iVar23;
                    /* WARNING: Subroutine does not return */
        pppuStack_1cc = (uint ***)&UNK_00525278;
        FUN_00aae91b();
      }
    }
    DAT_01262ef4 = iVar24;
    iStack_1c8 = 0;
    pppuStack_1cc = param_1;
    puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,0x17);
    FUN_0042bb30(DAT_01262ef4);
    if (0xf < local_f4) {
      ppppcStack_148 = (char ****)pppuStack_108;
                    /* WARNING: Subroutine does not return */
      local_150._4_4_ = &UNK_005252b1;
      FUN_00aae91b();
    }
    local_f4 = 0xf;
    uStack_f8 = 0;
    pppuStack_108 = (uint ***)((uint)pppuStack_108 & 0xffffff00);
    ppppcStack_148 = (char ****)apppuStack_d8[0];
    uVar2 = uStack_c4;
  }
  else {
    if (cStack_11d == '\0') {
      ExceptionList = pvStack_18;
      return;
    }
    ppppcStack_148 = (char ****)param_1;
    local_150._4_4_ = (char *)0x5252ec;
    piVar21 = (int *)FUN_005061e0();
    ppppcStack_148 = (char ****)0x10;
    local_150._4_4_ = "MESSAGE_HEAD_GOV";
    uStack_c4 = 0xf;
    uStack_c8 = 0;
    apppuStack_d8[0] = (uint ***)((uint)apppuStack_d8[0] & 0xffffff00);
    local_150._0_4_ = (char ****)0x52531b;
    FUN_00409350();
    puStack_10 = (undefined1 *)0x1d;
    ppppcStack_148 = (char ****)0x9;
    local_150._4_4_ = "MESSENGER";
    local_f4 = 0xf;
    uStack_f8 = 0;
    pppuStack_108 = (uint ***)((uint)pppuStack_108 & 0xffffff00);
    local_150._0_4_ = (char ****)0x525347;
    FUN_00409350();
    ppppcStack_148 = (char ****)apppuStack_d8;
    local_150._4_4_ = auStack_ec;
    puStack_10._0_1_ = 0x1e;
    local_150._0_4_ = (char ****)0x52535e;
    FUN_009a8ee0();
    puStack_10._0_1_ = 0x1f;
    ppppcStack_148 = (char ****)0x52536f;
    iVar24 = FUN_00475500();
    uStack_154 = (undefined4)*(undefined8 *)(iVar24 + 0x6c);
    local_150._0_4_ = (char ****)((ulonglong)*(undefined8 *)(iVar24 + 0x6c) >> 0x20);
    local_150._4_4_ = (char *)*(undefined8 *)(iVar24 + 0x74);
    ppppcStack_148 = (char ****)((ulonglong)*(undefined8 *)(iVar24 + 0x74) >> 0x20);
    uStack_158 = 0x525397;
    uVar20 = FUN_009a9880();
    ppppcStack_148 = (char ****)0xffffffff;
    puStack_10._0_1_ = 0x20;
    local_150._4_4_ = (char *)0x0;
    local_150._0_4_ = (char ****)&pppuStack_108;
    uStack_a8 = 0xf;
    local_ac = 0;
    pppuStack_bc = (uint ***)((uint)pppuStack_bc & 0xffffff00);
    uStack_154 = 0x5253d4;
    FUN_00408ed0();
    ppppcStack_148 = (char ****)0xffffffff;
    puStack_10._0_1_ = 0x21;
    local_150._4_4_ = (char *)0x0;
    local_8c = (uint **)0xf;
    uStack_90 = 0;
    apppuStack_a0[0] = (uint ***)((uint)apppuStack_a0[0] & 0xffffff00);
    uStack_154 = 0x52540b;
    local_150._0_4_ = (char ****)uVar20;
    FUN_00408ed0();
    puStack_10._0_1_ = 0x22;
    ppuVar12 = (uint **)piVar21[1];
    ppppcStack_148 = (char ****)0x44;
    local_150._4_4_ = (char *)0x525421;
    pppuVar22 = (uint ***)FUN_00aae9af();
    puStack_10._0_1_ = 0x23;
    uStack_11c = pppuVar22;
    if (pppuVar22 == (uint ***)0x0) {
      pppuVar22 = (uint ***)0x0;
    }
    else {
      local_150._4_4_ = (char *)0x525443;
      ppppcStack_148 = (char ****)pppuVar22;
      FUN_00a3ab70();
      pppuVar22[0xe] = ppuVar12;
      pppuVar22[0xf] = (uint **)0x0;
      *(undefined1 *)(pppuVar22 + 0x10) = 0;
    }
    iVar24 = piVar21[2];
    piVar21[1] = (int)pppuVar22;
    piVar21[2] = iVar24 + 1;
    if (iVar24 == 0) {
      *piVar21 = (int)pppuVar22;
    }
    else {
      ppuVar12[0xf] = (uint *)pppuVar22;
    }
    ppppcStack_148 = (char ****)0x525480;
    FUN_00a39a80();
    if (0xf < uStack_5c) {
      ppppcStack_148 = (char ****)pppuStack_70;
                    /* WARNING: Subroutine does not return */
      local_150._4_4_ = &UNK_00525497;
      FUN_00aae91b();
    }
    uStack_5c = 0xf;
    uStack_60 = 0;
    pppuStack_70 = (uint ***)((uint)pppuStack_70 & 0xffffff00);
    puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,0x24);
    ppppcStack_148 = (char ****)0x5254c7;
    FUN_009adb70();
    if (pppuStack_e8 != (uint ***)0x0) {
      ppppcStack_148 = (char ****)0x5254d8;
      FUN_009e6a80();
      ppppcStack_148 = (char ****)pppuStack_e8;
                    /* WARNING: Subroutine does not return */
      local_150._4_4_ = &UNK_005254e2;
      FUN_00aae91b();
    }
    pppuStack_e8 = (uint ***)0x0;
    pppuStack_e4 = (uint ***)0x0;
    uStack_e0 = 0;
    if (0xf < local_f4) {
      ppppcStack_148 = (char ****)pppuStack_108;
                    /* WARNING: Subroutine does not return */
      local_150._4_4_ = &UNK_00525506;
      FUN_00aae91b();
    }
    puStack_10 = (undefined1 *)0xffffffff;
    local_f4 = 0xf;
    uStack_f8 = 0;
    pppuStack_108 = (uint ***)((uint)pppuStack_108 & 0xffffff00);
    if (0xf < uStack_c4) {
      ppppcStack_148 = (char ****)apppuStack_d8[0];
                    /* WARNING: Subroutine does not return */
      local_150._4_4_ = &UNK_00525538;
      FUN_00aae91b();
    }
    ppppcStack_148 = (char ****)0x0;
    local_150._4_4_ = &DAT_00ded94d;
    uStack_24 = 0xf;
    uStack_28 = 0;
    apppuStack_38[0] = (uint ***)((uint)apppuStack_38[0] & 0xffffff00);
    local_150._0_4_ = (char ****)0x525568;
    FUN_00409350();
    puStack_10 = (undefined1 *)0x25;
    ppppcStack_148 = (char ****)0xf;
    local_150._4_4_ = "THEY_BANKRUPTCY";
    uStack_40 = 0xf;
    uStack_44 = 0;
    pppuStack_54 = (uint ***)((uint)pppuStack_54 & 0xffffff00);
    local_150._0_4_ = (char ****)0x52559b;
    FUN_00409350();
    puStack_10._0_1_ = 0x26;
    uStack_11c = (uint ***)auStack_1c4;
    pppuStack_1cc = (uint ***)0x0;
    iStack_1c8 = 0;
    local_12c = 0x2d2d2d;
    uStack_118 = CONCAT44(&pppuStack_1cc,(uint **)uStack_118);
    puVar19 = auStack_1c4;
    if (DAT_01262ef4 == 0) {
      iVar24 = FUN_00aae9af(0x44);
      uStack_118 = CONCAT44(iVar24,(uint **)uStack_118);
      puStack_10._0_1_ = 0x27;
      if (iVar24 == 0) {
        uVar20 = 0;
      }
      else {
        uVar20 = FUN_006a4e30();
      }
      puStack_10._0_1_ = 0x26;
      FUN_006a59b0(uVar20);
      puVar19 = (undefined1 *)uStack_11c;
    }
    uStack_11c = (uint ***)puVar19;
    ppuVar12 = param_1[8];
    ppuVar28 = param_1[7];
    uVar29 = 0;
    uVar27 = 0;
    ppppcVar18 = (char ****)apppuStack_38;
    uVar26 = 0;
    uVar20 = FUN_006a55b0(piVar21,0,ppppcVar18,0,ppuVar28,ppuVar12,0x2d2d2d,0);
    FUN_006a7ed0(auStack_1c4,uVar20,piVar21,uVar26,ppppcVar18,uVar27,ppuVar28,ppuVar12,local_12c,
                 uVar29);
    puStack_10._0_1_ = 0x28;
    if (DAT_01262ef4 == 0) {
      iStack_1c8 = 0x44;
      pppuStack_1cc = (uint ***)0x52566f;
      iVar24 = FUN_00aae9af();
      uStack_118 = CONCAT44(iVar24,(uint **)uStack_118);
      puStack_10._0_1_ = 0x29;
      if (iVar24 == 0) {
        iStack_1c8 = 0;
      }
      else {
        iStack_1c8 = 0x52568c;
        iStack_1c8 = FUN_006a4e30();
      }
      puStack_10._0_1_ = 0x28;
      pppuStack_1cc = (uint ***)0x52569e;
      FUN_006a59b0();
    }
    iStack_1c8 = 0;
    pppuStack_1cc = param_1;
    puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,0x26);
    FUN_0042bb30(DAT_01262ef4);
    if (0xf < uStack_40) {
      ppppcStack_148 = (char ****)pppuStack_54;
                    /* WARNING: Subroutine does not return */
      local_150._4_4_ = &UNK_005256d1;
      FUN_00aae91b();
    }
    uStack_40 = 0xf;
    uStack_44 = 0;
    pppuStack_54 = (uint ***)((uint)pppuStack_54 & 0xffffff00);
    ppppcStack_148 = (char ****)apppuStack_38[0];
    uVar2 = uStack_24;
  }
  if (uVar2 < 0x10) {
    ExceptionList = pvStack_18;
    return;
  }
                    /* WARNING: Subroutine does not return */
  local_150._4_4_ = &UNK_00525704;
  FUN_00aae91b();
}

