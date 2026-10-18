// FUN_00916f00 @ 00916f00 body=[[00916f00, 00916fbd] [00916fc1, 0091736c] [00917370, 00917639] [00917640, 00917755] [00917760, 00917aaa] [00917aae, 00917aee] [00917af2, 00917d34] [00917d38, 00917e1d] [00917e21, 00917e5e] [00917e62, 00917ee3] [00917ef0, 00918046] [00918050, 0091808e] [00918092, 009182ac] [009182b0, 009183b6] [009183c0, 00918425] [00918430, 009184ef] [009184f3, 009185c6] [009185d0, 00918677] [0091867b, 0091876a] [0091876e, 009187d6] [009187da, 009187e9] [009187ed, 00918801] [00918805, 00918824] [00918828, 0091883d] [00918841, 00918859]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_00916f00(undefined4 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  char **ppcVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  char ****ppppcVar8;
  char ****ppppcVar9;
  int *piVar10;
  char *****pppppcVar11;
  char ***pppcVar12;
  char ***pppcVar13;
  int *in_ECX;
  char ****ppppcVar14;
  char ****ppppcVar15;
  undefined4 *puVar16;
  int *piVar17;
  int iVar18;
  char ****ppppcVar19;
  int *piVar20;
  int iVar21;
  int iVar22;
  char ****ppppcStack_1b8;
  char **local_1a8 [4];
  undefined4 local_198;
  undefined4 local_194;
  int local_180;
  char ***local_168 [4];
  undefined4 local_158;
  uint local_154;
  char ****local_14c [4];
  undefined4 local_13c;
  uint local_138;
  char **local_130;
  undefined4 local_12c;
  undefined1 local_128 [4];
  char ***local_124;
  undefined4 local_120;
  undefined4 local_11c;
  char **local_118;
  char ***local_114;
  undefined4 local_110;
  char ****local_10c;
  int local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  uint local_f8;
  undefined4 local_f4;
  char ***local_f0;
  undefined4 local_ec;
  char **local_e8;
  char **local_e4;
  char ***local_e0 [4];
  undefined4 local_d0;
  uint local_cc;
  int *local_c4;
  char ***local_c0 [4];
  undefined4 local_b0;
  uint local_ac;
  int *local_a4;
  char ***local_a0;
  undefined4 local_9c;
  char *local_98;
  char ***local_94;
  char **local_90;
  char ***local_8c;
  int *local_88;
  int local_84;
  undefined1 *local_80;
  char ***local_7c;
  char ***local_78;
  char ***local_74;
  char ***local_6c;
  char ***local_68;
  char **local_64;
  char ***local_60;
  char ***local_5c;
  int *local_58;
  char ***local_54;
  char ***local_50;
  char ***local_4c;
  int local_44;
  char ***local_40;
  char ***local_3c;
  char **local_38;
  char ***local_34;
  char **local_30;
  char ***local_2c;
  int local_28;
  char ***local_24;
  char local_1e;
  char local_1d;
  int *local_1c;
  char local_16;
  char local_15;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00bb880a;
  local_10 = ExceptionList;
  local_38 = (char **)in_ECX[2];
  local_30 = (char **)in_ECX[4];
  local_34 = (char ***)in_ECX[3];
  local_2c = (char ***)in_ECX[5];
  if ((char)in_ECX[0xc] == '\0') {
    local_38 = (char **)in_ECX[4];
    local_30 = (char **)in_ECX[2];
    local_2c = (char ***)in_ECX[3];
    local_34 = (char ***)in_ECX[5];
  }
  local_7c = (char ***)0x0;
  local_78 = (char ***)0x0;
  local_74 = (char ***)0x0;
  local_54 = (char ***)0x0;
  local_50 = (char ***)0x0;
  local_4c = (char ***)0x0;
  local_8 = 1;
  ppppcStack_1b8 = (char ****)0x916f81;
  ExceptionList = &local_10;
  local_88 = in_ECX;
  FUN_004d61d0();
  ppppcStack_1b8 = (char ****)0x916f8c;
  FUN_004d61d0();
  local_44 = *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + (int)local_34 * 4) +
                                       0xbe8) + (int)local_2c * 4) + 0x34);
  if (local_44 == 0) {
    if ((char ****)local_54 != (char ****)0x0) {
      ppppcStack_1b8 = (char ****)local_54;
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    goto LAB_00918836;
  }
  iVar18 = *(int *)(local_44 + 0x30);
  iVar6 = *(int *)(local_44 + 0x2c);
  local_5c = (char ***)(local_44 + 0x2c);
  local_1d = '\0';
  local_1e = '\0';
  local_16 = '\0';
  if (iVar6 == iVar18) {
LAB_00917097:
    if ((char ***)(*local_5c)[1] == local_2c) {
      iVar18 = *(int *)(local_44 + 0x30) - (int)*local_5c >> 3;
      local_1e = '\x01';
      local_14 = 1;
      if (1 < iVar18) {
        do {
          ppppcStack_1b8 = (char ****)0x9170c6;
          FUN_004d61d0();
          local_14 = local_14 + 1;
        } while (local_14 < iVar18);
      }
    }
    local_3c = (char ***)(local_44 + 0x3c);
    if (*(char *****)(*(int *)(local_44 + 0x3c) + 4) == (char ****)local_34) {
      iVar18 = *(int *)(local_44 + 0x40) - *(int *)(local_44 + 0x3c) >> 3;
      local_1d = '\x01';
      if (1 < iVar18) {
        iVar6 = 1;
        do {
          ppppcStack_1b8 = (char ****)0x917110;
          FUN_004d61d0();
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar18);
      }
    }
  }
  else {
    do {
      if (*(char *****)(iVar6 + 4) == (char ****)local_34) break;
      iVar6 = iVar6 + 8;
    } while (iVar6 != iVar18);
    if (iVar6 == iVar18) goto LAB_00917097;
    local_16 = '\x01';
    if ((char ***)(*local_5c)[1] == local_34) {
      iVar18 = iVar18 - (int)*local_5c >> 3;
      local_1d = '\x01';
      local_14 = 1;
      if (1 < iVar18) {
        do {
          ppppcStack_1b8 = (char ****)0x917040;
          FUN_004d61d0();
          local_14 = local_14 + 1;
        } while (local_14 < iVar18);
      }
    }
    local_3c = (char ***)(local_44 + 0x3c);
    if ((char ***)(*local_3c)[1] == local_2c) {
      iVar18 = 1;
      iVar6 = *(int *)(local_44 + 0x40) - (int)*local_3c >> 3;
      local_1e = '\x01';
      if (1 < iVar6) {
        do {
          ppppcStack_1b8 = (char ****)0x917090;
          FUN_004d61d0();
          iVar18 = iVar18 + 1;
        } while (iVar18 < iVar6);
      }
    }
  }
  local_1c = (int *)0x0;
  ppppcVar19 = (char ****)local_78;
  ppppcVar9 = (char ****)local_7c;
  if (0 < (int)((int)local_78 - (int)local_7c & 0xfffffff8U)) {
    do {
      local_30 = (char **)ppppcVar9[(int)local_1c * 2];
      local_8c = *(char ****)
                  (*(int *)(DAT_012587e4 + 4) + (int)ppppcVar9[(int)local_1c * 2 + 1] * 4);
      local_60 = (char ***)((int)local_8c[0x34f] - (int)local_8c[0x34e] >> 3);
      local_14 = 0;
      if (0 < (int)local_60) {
        do {
          ppppcVar8 = (char ****)(local_8c[0x34e] + local_14 * 2);
          if (ppppcVar9 != ppppcVar19) {
            ppppcVar14 = ppppcVar9;
            do {
              if (ppppcVar14[1] == ppppcVar8[1]) {
                if (ppppcVar14 != ppppcVar19) goto LAB_009172c3;
                break;
              }
              ppppcVar14 = ppppcVar14 + 2;
            } while (ppppcVar14 != ppppcVar19);
          }
          local_30 = (char **)*ppppcVar8;
          pppcVar12 = (char ***)local_5c[1];
          pppcVar13 = (char ***)*local_5c;
          if (pppcVar13 == pppcVar12) {
LAB_009171d0:
            pppcVar12 = (char ***)local_3c[1];
            pppcVar13 = (char ***)*local_3c;
            if (pppcVar13 != pppcVar12) {
              do {
                if ((char ***)pppcVar13[1] == ppppcVar8[1]) break;
                pppcVar13 = pppcVar13 + 2;
              } while (pppcVar13 != pppcVar12);
              if (pppcVar13 != pppcVar12) goto LAB_009171f4;
            }
          }
          else {
            do {
              if ((char ***)pppcVar13[1] == ppppcVar8[1]) break;
              pppcVar13 = pppcVar13 + 2;
            } while (pppcVar13 != pppcVar12);
            if (pppcVar13 == pppcVar12) goto LAB_009171d0;
LAB_009171f4:
            if ((ppppcVar8 < ppppcVar19) && (ppppcVar9 <= ppppcVar8)) {
              iVar18 = (int)ppppcVar8 - (int)ppppcVar9;
              if (ppppcVar19 == (char ****)local_74) {
                uVar7 = (int)ppppcVar19 - (int)ppppcVar9 >> 3;
                if (0x1ffffffe < uVar7) goto LAB_00917306;
                ppppcVar8 = (char ****)(uVar7 + 1);
                ppppcVar14 = (char ****)((int)local_74 - (int)ppppcVar9 >> 3);
                if (ppppcVar14 < ppppcVar8) {
                  if ((char ****)(0x1fffffff - ((uint)ppppcVar14 >> 1)) < ppppcVar14) {
                    ppppcStack_1b8 = (char ****)0x0;
                  }
                  else {
                    ppppcStack_1b8 = (char ****)((int)ppppcVar14 + ((uint)ppppcVar14 >> 1));
                  }
                  if (ppppcStack_1b8 < ppppcVar8) {
                    ppppcStack_1b8 = ppppcVar8;
                  }
                  FUN_004237e0();
                  ppppcVar19 = (char ****)local_78;
                  ppppcVar9 = (char ****)local_7c;
                }
              }
              ppppcVar14 = (char ****)0x0;
              if (ppppcVar19 != (char ****)0x0) {
                *ppppcVar19 = ppppcVar9[(iVar18 >> 3) * 2];
                pppcVar12 = (ppppcVar9 + (iVar18 >> 3) * 2)[1];
LAB_009172b4:
                ppppcVar19[1] = pppcVar12;
                ppppcVar14 = (char ****)local_78;
                ppppcVar9 = (char ****)local_7c;
              }
            }
            else {
              if (ppppcVar19 == (char ****)local_74) {
                uVar7 = (int)ppppcVar19 - (int)ppppcVar9 >> 3;
                if (0x1ffffffe < uVar7) goto LAB_00917306;
                ppppcVar14 = (char ****)(uVar7 + 1);
                ppppcVar15 = (char ****)((int)local_74 - (int)ppppcVar9 >> 3);
                if (ppppcVar15 < ppppcVar14) {
                  if ((char ****)(0x1fffffff - ((uint)ppppcVar15 >> 1)) < ppppcVar15) {
                    ppppcStack_1b8 = (char ****)0x0;
                  }
                  else {
                    ppppcStack_1b8 = (char ****)((int)ppppcVar15 + ((uint)ppppcVar15 >> 1));
                  }
                  if (ppppcStack_1b8 < ppppcVar14) {
                    ppppcStack_1b8 = ppppcVar14;
                  }
                  FUN_004237e0();
                  ppppcVar19 = (char ****)local_78;
                  ppppcVar9 = (char ****)local_7c;
                }
              }
              ppppcVar14 = (char ****)0x0;
              if (ppppcVar19 != (char ****)0x0) {
                *ppppcVar19 = *ppppcVar8;
                pppcVar12 = ppppcVar8[1];
                goto LAB_009172b4;
              }
            }
            ppppcVar19 = ppppcVar14 + 2;
            local_78 = (char ***)ppppcVar19;
          }
LAB_009172c3:
          local_14 = local_14 + 1;
        } while (local_14 < (int)local_60);
      }
      local_1c = (int *)((int)local_1c + 1);
    } while ((int)local_1c < (int)ppppcVar19 - (int)ppppcVar9 >> 3);
  }
  local_1c = (int *)0x0;
  ppppcVar19 = (char ****)local_50;
  ppppcVar9 = (char ****)local_54;
  if (0 < (int)((int)local_50 - (int)local_54 & 0xfffffff8U)) {
    do {
      local_30 = (char **)ppppcVar9[(int)local_1c * 2];
      local_8c = *(char ****)
                  (*(int *)(DAT_012587e4 + 4) + (int)ppppcVar9[(int)local_1c * 2 + 1] * 4);
      local_60 = (char ***)((int)local_8c[0x34f] - (int)local_8c[0x34e] >> 3);
      local_14 = 0;
      if (0 < (int)local_60) {
        do {
          ppppcVar8 = (char ****)(local_8c[0x34e] + local_14 * 2);
          if (ppppcVar9 != ppppcVar19) {
            ppppcVar14 = ppppcVar9;
            do {
              if (ppppcVar14[1] == ppppcVar8[1]) {
                if (ppppcVar14 != ppppcVar19) goto LAB_009174a3;
                break;
              }
              ppppcVar14 = ppppcVar14 + 2;
            } while (ppppcVar14 != ppppcVar19);
          }
          local_30 = (char **)*ppppcVar8;
          pppcVar12 = (char ***)local_5c[1];
          pppcVar13 = (char ***)*local_5c;
          if (pppcVar13 == pppcVar12) {
LAB_009173b0:
            pppcVar12 = (char ***)local_3c[1];
            pppcVar13 = (char ***)*local_3c;
            if (pppcVar13 != pppcVar12) {
              do {
                if ((char ***)pppcVar13[1] == ppppcVar8[1]) break;
                pppcVar13 = pppcVar13 + 2;
              } while (pppcVar13 != pppcVar12);
              if (pppcVar13 != pppcVar12) goto LAB_009173d4;
            }
          }
          else {
            do {
              if ((char ***)pppcVar13[1] == ppppcVar8[1]) break;
              pppcVar13 = pppcVar13 + 2;
            } while (pppcVar13 != pppcVar12);
            if (pppcVar13 == pppcVar12) goto LAB_009173b0;
LAB_009173d4:
            if ((ppppcVar8 < ppppcVar19) && (ppppcVar9 <= ppppcVar8)) {
              iVar18 = (int)ppppcVar8 - (int)ppppcVar9;
              if (ppppcVar19 == (char ****)local_4c) {
                uVar7 = (int)ppppcVar19 - (int)ppppcVar9 >> 3;
                if (0x1ffffffe < uVar7) goto LAB_00917306;
                ppppcVar8 = (char ****)(uVar7 + 1);
                ppppcVar14 = (char ****)((int)local_4c - (int)ppppcVar9 >> 3);
                if (ppppcVar14 < ppppcVar8) {
                  if ((char ****)(0x1fffffff - ((uint)ppppcVar14 >> 1)) < ppppcVar14) {
                    ppppcStack_1b8 = (char ****)0x0;
                  }
                  else {
                    ppppcStack_1b8 = (char ****)((int)ppppcVar14 + ((uint)ppppcVar14 >> 1));
                  }
                  if (ppppcStack_1b8 < ppppcVar8) {
                    ppppcStack_1b8 = ppppcVar8;
                  }
                  FUN_004237e0();
                  ppppcVar19 = (char ****)local_50;
                  ppppcVar9 = (char ****)local_54;
                }
              }
              ppppcVar14 = (char ****)0x0;
              if (ppppcVar19 != (char ****)0x0) {
                *ppppcVar19 = ppppcVar9[(iVar18 >> 3) * 2];
                pppcVar12 = (ppppcVar9 + (iVar18 >> 3) * 2)[1];
LAB_00917494:
                ppppcVar19[1] = pppcVar12;
                ppppcVar14 = (char ****)local_50;
                ppppcVar9 = (char ****)local_54;
              }
            }
            else {
              if (ppppcVar19 == (char ****)local_4c) {
                uVar7 = (int)ppppcVar19 - (int)ppppcVar9 >> 3;
                if (0x1ffffffe < uVar7) {
LAB_00917306:
                  ppppcStack_1b8 = (char ****)0xdeda30;
                    /* WARNING: Subroutine does not return */
                  FUN_00aad3ad();
                }
                ppppcVar14 = (char ****)(uVar7 + 1);
                ppppcVar15 = (char ****)((int)local_4c - (int)ppppcVar9 >> 3);
                if (ppppcVar15 < ppppcVar14) {
                  if ((char ****)(0x1fffffff - ((uint)ppppcVar15 >> 1)) < ppppcVar15) {
                    ppppcStack_1b8 = (char ****)0x0;
                  }
                  else {
                    ppppcStack_1b8 = (char ****)((int)ppppcVar15 + ((uint)ppppcVar15 >> 1));
                  }
                  if (ppppcStack_1b8 < ppppcVar14) {
                    ppppcStack_1b8 = ppppcVar14;
                  }
                  FUN_004237e0();
                  ppppcVar19 = (char ****)local_50;
                  ppppcVar9 = (char ****)local_54;
                }
              }
              ppppcVar14 = (char ****)0x0;
              if (ppppcVar19 != (char ****)0x0) {
                *ppppcVar19 = *ppppcVar8;
                pppcVar12 = ppppcVar8[1];
                goto LAB_00917494;
              }
            }
            ppppcVar19 = ppppcVar14 + 2;
            local_50 = (char ***)ppppcVar19;
          }
LAB_009174a3:
          local_14 = local_14 + 1;
        } while (local_14 < (int)local_60);
      }
      local_1c = (int *)((int)local_1c + 1);
    } while ((int)local_1c < (int)ppppcVar19 - (int)ppppcVar9 >> 3);
  }
  piVar17 = local_88;
  ppppcStack_1b8 = local_168;
  piVar20 = local_88 + 10;
  FUN_00929480();
  local_8._0_1_ = 2;
  ppppcVar19 = (char ****)(*(int *)(*(int *)(DAT_012586dc + 0x30) + 0x400) / 1000);
  local_15 = '\0';
  local_1c = (int *)0x0;
  local_28 = 0;
  local_94 = (char ***)ppppcVar19;
  local_6c = (char ***)ppppcVar19;
  FUN_0092ab70();
  local_8c = (char ***)0x0;
  if (*(char *)(DAT_012588e8 + 0xd1c) != '\0') {
    local_8c = (char ***)
               FUN_004678d0(*(undefined4 *)(DAT_012586f4 + 8),local_44,piVar20,local_5c,local_3c,
                            &local_7c);
  }
  iVar18 = 0;
  local_60 = (char ***)(piVar17[0x1a] - piVar17[0x19] >> 6);
  local_14 = 0;
  if (0 < (int)local_60) {
    do {
      iVar6 = iVar18 + piVar17[0x19];
      ppppcVar9 = (char ****)
                  (*(int *)(*(int *)(iVar18 + 0xc + piVar17[0x19]) + 0x110) + (int)ppppcVar19);
      if ((int)local_6c <= (int)ppppcVar9) {
        local_6c = (char ***)ppppcVar9;
      }
      for (piVar20 = *(int **)(*(int *)(iVar6 + 0xc) + 0x120); piVar20 != (int *)0x0;
          piVar20 = (int *)piVar20[2]) {
        if (*piVar20 == 0x8a1) {
          local_30 = *(char ***)(iVar6 + 0x20);
          local_1c = (int *)((int)local_1c +
                            *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                             *(int *)(iVar6 + 0x24) * 4) + 0xe4c));
          goto LAB_0091760c;
        }
      }
      if ((*(int *)(piVar17[0x11] + local_14 * 4) == 0) ||
         (cVar5 = FUN_00952850(0,0), cVar5 == '\0')) {
        FUN_00951ed0();
      }
      else {
        FUN_0094e660();
        local_15 = '\x01';
      }
LAB_0091760c:
      local_14 = local_14 + 1;
      iVar18 = iVar18 + 0x40;
    } while (local_14 < (int)local_60);
  }
  iVar18 = 0;
  local_60 = (char ***)(piVar17[0x16] - piVar17[0x15] >> 6);
  local_14 = 0;
  if (0 < (int)local_60) {
    do {
      iVar6 = piVar17[0x15] + iVar18;
      ppppcVar9 = (char ****)
                  (*(int *)(*(int *)(piVar17[0x15] + 0xc + iVar18) + 0x110) + (int)ppppcVar19);
      if ((int)local_6c <= (int)ppppcVar9) {
        local_6c = (char ***)ppppcVar9;
      }
      for (piVar20 = *(int **)(*(int *)(iVar6 + 0xc) + 0x120); piVar20 != (int *)0x0;
          piVar20 = (int *)piVar20[2]) {
        if (*piVar20 == 0x8a1) {
          local_30 = *(char ***)(iVar6 + 0x20);
          local_28 = local_28 +
                     *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar6 + 0x24) * 4) +
                             0xe4c);
          goto LAB_009176cc;
        }
      }
      if ((*(int *)(piVar17[0xd] + local_14 * 4) == 0) || (cVar5 = FUN_00952850(0,0), cVar5 == '\0')
         ) {
        FUN_00951ed0();
      }
      else {
        FUN_0094e660();
        local_15 = '\x01';
      }
LAB_009176cc:
      local_14 = local_14 + 1;
      iVar18 = iVar18 + 0x40;
    } while (local_14 < (int)local_60);
  }
  piVar20 = local_1c;
  local_24 = (char ***)(&ppppcStack_1b8 + -(int)local_1c);
  iVar18 = (int)local_1c * -3;
  local_1a8[-5 - (int)local_1c] = (char **)0x9176f7;
  local_80 = (undefined1 *)(&ppppcStack_1b8 + (int)local_1c * -2);
  local_1a8[(int)local_1c * -2 + -5] = (char **)0x917701;
  local_1c = (int *)0x0;
  local_a4 = (int *)(&ppppcStack_1b8 + iVar18);
  local_1a8[(int)piVar20 * -3 + -5] = (char **)0x91771a;
  local_60 = (char ***)(&ppppcStack_1b8 + ((int)piVar20 * -3 - local_28));
  local_1a8[(int)piVar20 * -3 + (-5 - local_28)] = (char **)0x917724;
  local_e4 = (char **)(&ppppcStack_1b8 + (int)piVar20 * -3 + local_28 * -2);
  local_1a8[(int)piVar20 * -3 + local_28 * -2 + -5] = (char **)0x917731;
  local_c4 = (int *)&stack0xfffffe4c;
  ppppcVar19 = (char ****)(piVar17[0x1a] - piVar17[0x19] >> 6);
  local_14 = 0;
  local_28 = 0;
  local_34 = (char ***)ppppcVar19;
  if (0 < (int)ppppcVar19) {
    local_84 = 0;
    local_c4 = (int *)&stack0xfffffe4c;
    do {
      iVar18 = local_84;
      ppppcVar9 = (char ****)
                  (*(int *)(*(int *)(piVar17[0x19] + 0xc + local_84) + 0x110) + (int)local_94);
      if ((int)local_6c <= (int)ppppcVar9) {
        local_6c = (char ***)ppppcVar9;
      }
      piVar20 = *(int **)(*(int *)(piVar17[0x19] + local_84 + 0xc) + 0x120);
      if (piVar20 != (int *)0x0) {
LAB_00917790:
        if (*piVar20 != 0x8a1) goto code_r0x00917798;
        if (*(int *)(piVar17[0x11] + local_28 * 4) == 0) {
LAB_00917854:
          ppppcStack_1b8 = (char ****)(piVar17[0x19] + iVar18);
          FUN_00951ed0();
        }
        else {
          ppppcStack_1b8 = (char ****)0x0;
          cVar5 = FUN_00952850(0);
          piVar20 = local_88;
          if (cVar5 == '\0') goto LAB_00917854;
          iVar6 = piVar17[0x19];
          pppcVar12 = *(char ****)(iVar6 + 0x20 + iVar18);
          ppppcVar8 = (char ****)(iVar6 + iVar18);
          ppppcVar9 = *(char *****)(piVar17[0x19] + 0x24 + iVar18);
          piVar10 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                      *(int *)(iVar6 + 0x24 + iVar18) * 4) + 0xe44);
          piVar17 = *(int **)(piVar17[0x19] + 0x1c + iVar18);
          if (piVar10 != (int *)0x0) {
            puVar16 = (undefined4 *)(local_80 + (int)local_1c * 4);
            do {
              uVar2 = **(undefined4 **)(*piVar10 + 0x48);
              piVar10 = (int *)piVar10[2];
              piVar1 = (int *)((int)local_1c + 1);
              *(char *****)(((int)local_24 - (int)local_80) + (int)puVar16) = ppppcVar9;
              *puVar16 = piVar17;
              *(undefined4 *)(((int)local_a4 - (int)local_80) + (int)puVar16) = uVar2;
              puVar16 = puVar16 + 1;
              ppppcVar19 = (char ****)local_34;
              iVar18 = local_84;
              local_1c = piVar1;
            } while (piVar10 != (int *)0x0);
          }
          ppppcStack_1b8 = ppppcVar8;
          local_68 = (char ***)ppppcVar9;
          local_58 = piVar17;
          local_40 = (char ***)ppppcVar8;
          local_30 = (char **)pppcVar12;
          FUN_0094e660();
          local_15 = '\x01';
          piVar17 = piVar20;
        }
      }
LAB_0091785f:
      local_28 = local_28 + 1;
      local_84 = iVar18 + 0x40;
    } while (local_28 < (int)ppppcVar19);
  }
  piVar20 = (int *)(piVar17[0x16] - piVar17[0x15] >> 6);
  local_84 = 0;
  local_58 = piVar20;
  if (0 < (int)piVar20) {
    local_28 = 0;
    do {
      iVar18 = local_28;
      piVar17 = local_88;
      ppppcVar19 = (char ****)
                   (*(int *)(*(int *)(local_88[0x15] + 0xc + local_28) + 0x110) + (int)local_94);
      if ((int)local_6c <= (int)ppppcVar19) {
        local_6c = (char ***)ppppcVar19;
      }
      piVar10 = *(int **)(*(int *)(local_88[0x15] + local_28 + 0xc) + 0x120);
      if (piVar10 != (int *)0x0) {
LAB_009178c6:
        if (*piVar10 != 0x8a1) goto code_r0x009178ce;
        if (*(int *)(local_88[0xd] + local_84 * 4) == 0) {
LAB_00917989:
          ppppcStack_1b8 = (char ****)(piVar17[0x15] + iVar18);
          FUN_00951ed0();
        }
        else {
          ppppcStack_1b8 = (char ****)0x0;
          cVar5 = FUN_00952850(0);
          if (cVar5 == '\0') goto LAB_00917989;
          pppcVar12 = *(char ****)(piVar17[0x15] + 0x20 + iVar18);
          ppppcVar8 = (char ****)(piVar17[0x15] + iVar18);
          ppppcVar19 = *(char *****)(piVar17[0x15] + 0x24 + iVar18);
          piVar10 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + (int)ppppcVar8[9] * 4) + 0xe44);
          ppppcVar9 = *(char *****)(piVar17[0x15] + 0x1c + iVar18);
          if (piVar10 != (int *)0x0) {
            pppcVar13 = (char ***)(local_e4 + local_14);
            do {
              uVar2 = **(undefined4 **)(*piVar10 + 0x48);
              piVar10 = (int *)piVar10[2];
              iVar6 = local_14 + 1;
              *(char *****)(((int)local_60 - (int)local_e4) + (int)pppcVar13) = ppppcVar19;
              *pppcVar13 = (char **)ppppcVar9;
              *(undefined4 *)(((int)local_c4 - (int)local_e4) + (int)pppcVar13) = uVar2;
              pppcVar13 = pppcVar13 + 1;
              iVar18 = local_28;
              piVar20 = local_58;
              local_14 = iVar6;
            } while (piVar10 != (int *)0x0);
          }
          ppppcStack_1b8 = ppppcVar8;
          local_68 = (char ***)ppppcVar8;
          local_40 = (char ***)ppppcVar9;
          local_34 = (char ***)ppppcVar19;
          local_30 = (char **)pppcVar12;
          FUN_0094e660();
          local_15 = '\x01';
        }
      }
LAB_00917994:
      local_84 = local_84 + 1;
      local_28 = iVar18 + 0x40;
    } while (local_84 < (int)piVar20);
  }
  if (local_1e == '\0') {
    ppppcStack_1b8 = (char ****)0xe33aa8;
    FUN_00928880();
    local_8._0_1_ = 3;
    pppppcVar11 = (char *****)local_14c[0];
    if (local_138 < 0x10) {
      pppppcVar11 = local_14c;
    }
    local_cc = 0xf;
    local_d0 = 0;
    local_e0[0] = (char ***)((uint)local_e0[0] & 0xffffff00);
    ppppcStack_1b8 = (char ****)((int)pppppcVar11 + 1);
    do {
      cVar5 = *(char *)pppppcVar11;
      pppppcVar11 = (char *****)((int)pppppcVar11 + 1);
    } while (cVar5 != '\0');
    ppppcStack_1b8 = (char ****)((int)pppppcVar11 - (int)ppppcStack_1b8);
    FUN_00409350();
    local_8._0_1_ = 4;
    ppppcVar19 = DAT_0131acac;
    if (DAT_0131acac == (char ****)0x0) {
      ppppcStack_1b8 = (char ****)0x20;
      ppppcVar19 = (char ****)FUN_00aae9af();
      local_8._0_1_ = 5;
      if (ppppcVar19 == (char ****)0x0) {
        ppppcVar19 = (char ****)0x0;
      }
      else {
        ppppcVar19[1] = (char ***)0x1ff;
        *ppppcVar19 = (char ***)0x0;
        ppppcStack_1b8 = (char ****)0x7fc;
        local_34 = (char ***)ppppcVar19;
        pppcVar12 = (char ***)FUN_00aad56b();
        ppppcVar19[2] = pppcVar12;
        _memset(pppcVar12,0,(int)ppppcVar19[1] * 4);
        pppcVar12 = DAT_0131ac90;
        ppppcVar19[3] = (char ***)0x0;
        ppppcVar19[4] = (char ***)0x0;
        ppppcVar19[5] = (char ***)0x0;
        ppppcVar19[7] = pppcVar12;
      }
      ppppcVar9 = DAT_0131acac;
      local_8 = CONCAT31(local_8._1_3_,6);
      local_34 = (char ***)0x0;
      if ((ppppcVar19 != DAT_0131acac) && (DAT_0131acac != (char ****)0x0)) {
        ppppcStack_1b8 = DAT_0131acac;
        FUN_0090cd00();
        ppppcStack_1b8 = ppppcVar9;
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    DAT_0131acac = ppppcVar19;
    ppppcVar19 = DAT_0131acac;
    local_8._0_1_ = 4;
    ppppcStack_1b8 = local_e0;
    local_94 = (char ***)FUN_0090da40();
    if ((char ****)local_94 == (char ****)0x0) {
      local_94 = (char ***)*ppppcVar19[3];
    }
    local_8._0_1_ = 3;
    if (0xf < local_cc) {
      ppppcStack_1b8 = (char ****)local_e0[0];
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_cc = 0xf;
    local_d0 = 0;
    local_e0[0] = (char ***)((uint)local_e0[0] & 0xffffff00);
    if (local_16 == '\0') {
      pppcVar12 = (char ***)*local_5c;
    }
    else {
      pppcVar12 = (char ***)*local_3c;
    }
    ppppcVar19 = (char ****)pppcVar12[1];
    local_30 = *pppcVar12;
    local_2c = (char ***)ppppcVar19;
    ppppcStack_1b8 = (char ****)0x917b35;
    piVar20 = (int *)&stack0xfffffe4c;
    local_58 = (int *)&stack0xfffffe4c;
    local_28 = 0;
    local_84 = 0;
    local_68 = (char ***)0x0;
    if (0 < (int)local_1c) {
      local_40 = (char ***)(local_80 + -(int)local_24);
      local_88 = (int *)&stack0xfffffe4c;
      local_34 = (char ***)((int)local_24 - (int)local_a4);
      piVar17 = local_a4;
      do {
        local_80 = *(undefined1 **)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *piVar17 * 4) + 0x188)
        ;
        for (piVar10 = local_58; piVar10 != piVar20; piVar10 = piVar10 + 1) {
          if ((undefined1 *)*piVar10 == local_80) {
            if (piVar10 != piVar20) goto LAB_00917c95;
            break;
          }
        }
        local_124 = local_94;
        iVar18 = *(int *)(*(int *)(DAT_012587e4 + 4) +
                         *(int *)((int)local_34 + (int)piVar17 + (int)local_40) * 4);
        iVar6 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)((int)local_34 + (int)piVar17) * 4);
        local_120 = *(undefined4 *)(iVar6 + 0x1c);
        local_11c = *(undefined4 *)(iVar6 + 0x20);
        local_118 = local_30;
        local_114 = local_2c;
        local_110 = *(undefined4 *)(iVar18 + 0x1c);
        local_10c = *(char *****)(iVar18 + 0x20);
        ppppcStack_1b8 = (char ****)0x0;
        local_104 = 0;
        local_100 = 0;
        local_f8 = local_f8 & 0xffffff00;
        local_f4 = 0;
        local_12c = 0x18d;
        local_130 = CWarGoal::vftable;
        local_fc = DAT_0131b788;
        local_108 = *piVar17;
        piVar20 = (int *)FUN_00951920(&local_130);
        ppppcVar19 = (char ****)local_2c;
        local_84 = local_84 + *piVar20;
        if (150000 < local_84) break;
        ppppcStack_1b8 = (char ****)&local_130;
        FUN_00938300(local_30);
        local_28 = local_28 + 1;
        *local_88 = (int)local_80;
        piVar20 = local_88 + 1;
        local_88 = piVar20;
LAB_00917c95:
        local_68 = (char ***)((int)local_68 + 1);
        piVar17 = piVar17 + 1;
      } while ((int)local_68 < (int)local_1c);
      if (local_28 != 0) {
        ppppcStack_1b8 = &local_34;
        local_34 = (char ***)ppppcVar19;
        piVar20 = (int *)FUN_0093d080();
        iVar18 = *piVar20;
        iVar6 = *(int *)(iVar18 + 0x10);
        local_24 = (char ***)0x0;
        if (0 < (int)(*(int *)(iVar18 + 0x14) - iVar6 & 0xffffffc0U)) {
          iVar21 = 0;
          do {
            ppppcStack_1b8 = (char ****)(iVar21 + iVar6);
            for (ppcVar3 = ppppcStack_1b8[3][0x48]; ppcVar3 != (char **)0x0;
                ppcVar3 = (char **)ppcVar3[2]) {
              if (*ppcVar3 == (char *)0x8da) {
                FUN_00938360(local_30);
                goto LAB_00917d0c;
              }
            }
            local_24 = (char ***)((int)local_24 + 1);
            iVar21 = iVar21 + 0x40;
LAB_00917d0c:
            iVar6 = *(int *)(iVar18 + 0x10);
          } while ((int)local_24 < *(int *)(iVar18 + 0x14) - iVar6 >> 6);
        }
      }
    }
    local_8._0_1_ = 2;
    if (0xf < local_138) {
      ppppcStack_1b8 = local_14c[0];
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_138 = 0xf;
    local_13c = 0;
    local_14c[0] = (char ****)((uint)local_14c[0] & 0xffffff00);
  }
  if (local_1d == '\0') {
    ppppcStack_1b8 = (char ****)0xe33aa8;
    FUN_00928880();
    local_8._0_1_ = 7;
    pppppcVar11 = (char *****)local_10c;
    if (local_f8 < 0x10) {
      pppppcVar11 = &local_10c;
    }
    local_ac = 0xf;
    local_b0 = 0;
    local_c0[0] = (char ***)((uint)local_c0[0] & 0xffffff00);
    ppppcStack_1b8 = (char ****)((int)pppppcVar11 + 1);
    do {
      cVar5 = *(char *)pppppcVar11;
      pppppcVar11 = (char *****)((int)pppppcVar11 + 1);
    } while (cVar5 != '\0');
    ppppcStack_1b8 = (char ****)((int)pppppcVar11 - (int)ppppcStack_1b8);
    FUN_00409350();
    local_8._0_1_ = 8;
    ppppcVar19 = DAT_0131acac;
    if (DAT_0131acac == (char ****)0x0) {
      ppppcStack_1b8 = (char ****)0x20;
      local_34 = (char ***)FUN_00aae9af();
      local_8._0_1_ = 9;
      if (local_34 == (char ***)0x0) {
        ppppcVar19 = (char ****)0x0;
      }
      else {
        ppppcStack_1b8 = (char ****)0x917df6;
        ppppcVar19 = (char ****)FUN_0090cca0();
      }
      ppppcVar9 = DAT_0131acac;
      local_8 = CONCAT31(local_8._1_3_,10);
      local_34 = (char ***)0x0;
      if ((ppppcVar19 != DAT_0131acac) && (DAT_0131acac != (char ****)0x0)) {
        ppppcStack_1b8 = DAT_0131acac;
        FUN_0090cd00();
        ppppcStack_1b8 = ppppcVar9;
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    DAT_0131acac = ppppcVar19;
    ppppcVar19 = DAT_0131acac;
    local_8._0_1_ = 8;
    ppppcStack_1b8 = local_c0;
    local_68 = (char ***)FUN_0090da40();
    if ((char ****)local_68 == (char ****)0x0) {
      local_68 = (char ***)*ppppcVar19[3];
    }
    local_8._0_1_ = 7;
    if (0xf < local_ac) {
      ppppcStack_1b8 = (char ****)local_c0[0];
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_ac = 0xf;
    local_b0 = 0;
    local_c0[0] = (char ***)((uint)local_c0[0] & 0xffffff00);
    if (local_16 == '\0') {
      pppcVar12 = (char ***)*local_3c;
    }
    else {
      pppcVar12 = (char ***)*local_5c;
    }
    local_98 = (char *)*pppcVar12;
    local_94 = (char ***)pppcVar12[1];
    local_34 = (char ***)&stack0xfffffe4c;
    local_28 = 0;
    local_58 = (int *)0x0;
    local_80 = (undefined1 *)0x0;
    if (0 < local_14) {
      local_40 = (char ***)((int)local_60 + -(int)local_c4);
      local_1c = local_c4;
      local_60 = (char ***)((int)local_e4 - (int)local_60);
      local_34 = (char ***)&stack0xfffffe4c;
      local_24 = (char ***)&stack0xfffffe4c;
      do {
        iVar6 = DAT_012587e4;
        iVar18 = *local_1c;
        local_e4 = *(char ***)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + iVar18 * 4) + 0x188);
        for (ppppcVar19 = (char ****)local_34; ppppcVar19 != (char ****)local_24;
            ppppcVar19 = ppppcVar19 + 1) {
          if (*ppppcVar19 == (char ***)local_e4) {
            if (ppppcVar19 != (char ****)local_24) goto LAB_00917fe7;
            break;
          }
        }
        piVar20 = (int *)((int)local_40 + (int)local_1c);
        ppppcStack_1b8 =
             *(char *****)
              (*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)((int)piVar20 + (int)local_60) * 4) +
              0x20);
        FUN_0094bdb0(local_98,local_94);
        iVar6 = *(int *)(*(int *)(iVar6 + 4) + *piVar20 * 4);
        local_198 = *(undefined4 *)(iVar6 + 0x1c);
        local_194 = *(undefined4 *)(iVar6 + 0x20);
        ppppcStack_1b8 = (char ****)0x0;
        local_180 = iVar18;
        piVar20 = (int *)FUN_00951920(local_1a8);
        local_58 = (int *)((int)local_58 + *piVar20);
        if (150000 < (int)local_58) break;
        ppppcStack_1b8 = (char ****)local_1a8;
        FUN_00938300(local_98);
        local_28 = local_28 + 1;
        *local_24 = local_e4;
        local_24 = local_24 + 1;
LAB_00917fe7:
        local_1c = local_1c + 1;
        local_80 = local_80 + 1;
      } while ((int)local_80 < local_14);
      if (local_28 != 0) {
        ppppcStack_1b8 = &local_34;
        local_34 = local_94;
        piVar20 = (int *)FUN_0093d080();
        iVar18 = *piVar20;
        iVar6 = *(int *)(iVar18 + 0x10);
        iVar21 = 0;
        if (0 < (int)(*(int *)(iVar18 + 0x14) - iVar6 & 0xffffffc0U)) {
          iVar22 = 0;
          do {
            ppppcStack_1b8 = (char ****)(iVar22 + iVar6);
            for (ppcVar3 = ppppcStack_1b8[3][0x48]; ppcVar3 != (char **)0x0;
                ppcVar3 = (char **)ppcVar3[2]) {
              if (*ppcVar3 == (char *)0x8da) {
                FUN_00938360(local_98);
                goto LAB_00918067;
              }
            }
            iVar21 = iVar21 + 1;
            iVar22 = iVar22 + 0x40;
LAB_00918067:
            iVar6 = *(int *)(iVar18 + 0x10);
          } while (iVar21 < *(int *)(iVar18 + 0x14) - iVar6 >> 6);
        }
      }
    }
    local_8._0_1_ = 2;
    if (0xf < local_f8) {
      ppppcStack_1b8 = local_10c;
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_f8 = 0xf;
    local_fc = 0;
    local_10c = (char ****)((uint)local_10c & 0xffffff00);
  }
  local_60 = *(char ****)(DAT_012588e8 + 0xb0c);
  ppppcStack_1b8 = (char ****)local_6c;
  FUN_00424810();
  local_40 = (char ***)((int)local_78 - (int)local_7c >> 3);
  local_24 = (char ***)0x0;
  ppppcVar19 = (char ****)local_54;
  ppppcVar9 = (char ****)local_7c;
  if (0 < (int)local_40) {
    do {
      local_30 = (char **)ppppcVar9[(int)local_24 * 2];
      ppppcVar8 = (char ****)ppppcVar9[(int)local_24 * 2 + 1];
      local_34 = (char ***)((int)local_50 - (int)ppppcVar19 >> 3);
      iVar18 = 0;
      if (0 < (int)local_34) {
        do {
          local_e8 = (char **)ppppcVar19[iVar18 * 2];
          ppppcVar19 = (char ****)ppppcVar19[iVar18 * 2 + 1];
          ppppcStack_1b8 = ppppcVar19;
          FUN_00517c40();
          ppppcStack_1b8 = ppppcVar8;
          FUN_00517c40();
          iVar6 = DAT_012587e4;
          *(char ****)
           (*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + (int)ppppcVar8 * 4) + 0xbe8) +
                    (int)ppppcVar19 * 4) + 0x6c) = local_60;
          iVar18 = iVar18 + 1;
          *(char ****)
           (*(int *)(*(int *)(*(int *)(*(int *)(iVar6 + 4) + (int)ppppcVar19 * 4) + 0xbe8) +
                    (int)ppppcVar8 * 4) + 0x6c) = local_60;
          ppppcVar19 = (char ****)local_54;
          ppppcVar9 = (char ****)local_7c;
        } while (iVar18 < (int)local_34);
      }
      local_24 = (char ***)((int)local_24 + 1);
    } while ((int)local_24 < (int)local_40);
  }
  iVar18 = 0;
  local_a0 = (char ***)0x0;
  local_9c = 0;
  local_98 = (char *)0x0;
  local_f0 = (char ***)0x0;
  local_ec = 0;
  local_e8 = (char **)0x0;
  ppppcStack_1b8 = (char ****)local_5c;
  local_8 = CONCAT31(local_8._1_3_,0xc);
  FUN_0043a750();
  ppppcStack_1b8 = (char ****)local_3c;
  FUN_0043a750();
  ppppcVar19 = (char ****)local_7c;
  if ((local_1e != '\0') && (iVar6 = (int)local_78 - (int)local_7c >> 3, 0 < iVar6)) {
    do {
      local_30 = (char **)ppppcVar19[iVar18 * 2];
      if (local_16 == '\0') {
LAB_0091824e:
        pppcVar12 = (char ***)local_3c[1];
        pppcVar13 = (char ***)*local_3c;
        if (pppcVar13 != pppcVar12) {
          do {
            if ((char ***)pppcVar13[1] == ppppcVar19[iVar18 * 2 + 1]) break;
            pppcVar13 = pppcVar13 + 2;
          } while (pppcVar13 != pppcVar12);
          if (pppcVar13 != pppcVar12) {
            ppppcStack_1b8 = (char ****)0x1;
            FUN_00936070(local_44,ppppcVar19[iVar18 * 2]);
            ppppcVar19 = (char ****)local_7c;
          }
        }
      }
      else {
        pppcVar12 = (char ***)local_5c[1];
        pppcVar13 = (char ***)*local_5c;
        if (pppcVar13 == pppcVar12) goto LAB_0091824e;
        do {
          if ((char ***)pppcVar13[1] == ppppcVar19[iVar18 * 2 + 1]) break;
          pppcVar13 = pppcVar13 + 2;
        } while (pppcVar13 != pppcVar12);
        if (pppcVar13 == pppcVar12) goto LAB_0091824e;
        ppppcStack_1b8 = (char ****)0x1;
        FUN_009351c0(local_44,ppppcVar19[iVar18 * 2]);
        ppppcVar19 = (char ****)local_7c;
      }
      iVar18 = iVar18 + 1;
    } while (iVar18 < iVar6);
  }
  ppppcVar9 = (char ****)local_54;
  if (local_1d != '\0') {
    iVar18 = (int)local_50 - (int)local_54 >> 3;
    iVar6 = 0;
    if (0 < iVar18) {
      do {
        local_30 = (char **)ppppcVar9[iVar6 * 2];
        if (local_16 == '\0') {
LAB_009182f2:
          pppcVar12 = (char ***)local_5c[1];
          pppcVar13 = (char ***)*local_5c;
          if (pppcVar13 != pppcVar12) {
            do {
              if ((char ***)pppcVar13[1] == ppppcVar9[iVar6 * 2 + 1]) break;
              pppcVar13 = pppcVar13 + 2;
            } while (pppcVar13 != pppcVar12);
            if (pppcVar13 != pppcVar12) {
              ppppcStack_1b8 = (char ****)0x1;
              FUN_009351c0(local_44,ppppcVar9[iVar6 * 2]);
              ppppcVar9 = (char ****)local_54;
            }
          }
        }
        else {
          pppcVar12 = (char ***)local_3c[1];
          pppcVar13 = (char ***)*local_3c;
          if (pppcVar13 == pppcVar12) goto LAB_009182f2;
          do {
            if ((char ***)pppcVar13[1] == ppppcVar9[iVar6 * 2 + 1]) break;
            pppcVar13 = pppcVar13 + 2;
          } while (pppcVar13 != pppcVar12);
          if (pppcVar13 == pppcVar12) goto LAB_009182f2;
          ppppcStack_1b8 = (char ****)0x1;
          FUN_00936070(local_44,ppppcVar9[iVar6 * 2]);
          ppppcVar9 = (char ****)local_54;
        }
        iVar6 = iVar6 + 1;
        ppppcVar19 = (char ****)local_7c;
      } while (iVar6 < iVar18);
    }
  }
  pppcVar12 = local_8c;
  if ((char ****)local_8c != (char ****)0x0) {
    if ((int)((int)local_5c[1] - (int)*local_5c & 0xfffffff8U) < 8) {
      bVar4 = false;
    }
    else {
      bVar4 = 7 < (int)((int)local_3c[1] - (int)*local_3c & 0xfffffff8U);
    }
    ppppcStack_1b8 = (char ****)(uint)!bVar4;
    FUN_00466050(local_8c + 0xd);
    ppppcStack_1b8 = (char ****)pppcVar12;
    FUN_00457b00();
    ppppcVar9 = (char ****)local_54;
    ppppcVar19 = (char ****)local_7c;
  }
  local_30 = *(char ***)(DAT_012588e8 + 0xb5c);
  local_2c = *(char ****)(DAT_012588e8 + 0xb60);
  local_40 = (char ***)((int)local_78 - (int)ppppcVar19 >> 3);
  iVar18 = 0;
  if (0 < (int)local_40) {
    do {
      local_90 = (char **)ppppcVar19[iVar18 * 2];
      local_8c = ppppcVar19[iVar18 * 2 + 1];
      ppppcVar19 = *(char *****)(*(int *)(DAT_012587e4 + 4) + (int)local_8c * 4);
      local_38 = local_90;
      local_34 = (char ***)ppppcVar19;
      if (*(char *)(DAT_012588e8 + 0xd1c) != '\0') {
        ppppcStack_1b8 = ppppcVar19;
        FUN_005b53d0();
        local_64 = (char **)ppppcVar19[7];
        iVar6 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + (int)ppppcVar19[8] * 4) + 0x9e8);
        while (iVar6 != 0) {
          iVar6 = *(int *)(iVar6 + 8);
          ppppcStack_1b8 = (char ****)0x918449;
          FUN_004b7c50();
        }
        ppppcStack_1b8 = (char ****)0x91845a;
        FUN_005dbd90();
      }
      pppcVar12 = local_8c;
      if (local_15 != '\0') {
        ppppcStack_1b8 = *(char *****)(*(int *)(DAT_012587e4 + 4) + (int)local_8c * 4);
        FUN_00520150();
      }
      ppppcStack_1b8 = (char ****)0x91848d;
      FUN_0085ccb0();
      if (pppcVar12 == local_2c) {
        ppppcStack_1b8 = (char ****)0x5;
        local_ac = 0xf;
        local_b0 = 0;
        local_c0[0] = (char ***)((uint)local_c0[0] & 0xffffff00);
        FUN_00409350();
        local_8._0_1_ = 0xd;
        ppppcStack_1b8 = (char ****)0x9184c7;
        piVar20 = (int *)FUN_009c7290();
        ppppcStack_1b8 = local_c0;
        (**(code **)(*piVar20 + 0x60))();
        local_8 = CONCAT31(local_8._1_3_,0xc);
        if (0xf < local_ac) {
          ppppcStack_1b8 = (char ****)local_c0[0];
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_ac = 0xf;
        local_b0 = 0;
        local_c0[0] = (char ***)((uint)local_c0[0] & 0xffffff00);
      }
      iVar18 = iVar18 + 1;
      ppppcVar9 = (char ****)local_54;
      ppppcVar19 = (char ****)local_7c;
    } while (iVar18 < (int)local_40);
  }
  local_34 = *(char ****)(*(int *)(DAT_012586dc + 0x40) + 0x150);
  local_40 = (char ***)((int)local_50 - (int)ppppcVar9 >> 3);
  local_24 = (char ***)0x0;
  if (0 < (int)local_40) {
    do {
      pppcVar12 = local_24;
      local_90 = (char **)ppppcVar9[(int)local_24 * 2];
      local_60 = ppppcVar9[(int)local_24 * 2 + 1];
      ppppcVar19 = *(char *****)(*(int *)(DAT_012587e4 + 4) + (int)local_60 * 4);
      local_8c = (char ***)&ppppcStack_1b8;
      ppppcStack_1b8 = (char ****)local_34;
      local_64 = local_90;
      FUN_0053efa0();
      iVar18 = DAT_012588e8;
      ppppcVar19[0x130] = *(char ****)(DAT_012588e8 + 0xb0c);
      if (*(char *)(iVar18 + 0xd1c) != '\0') {
        ppppcStack_1b8 = ppppcVar19;
        FUN_005b53d0();
        local_90 = (char **)ppppcVar19[7];
        iVar18 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + (int)ppppcVar19[8] * 4) + 0x9e8);
        while (iVar18 != 0) {
          iVar18 = *(int *)(iVar18 + 8);
          ppppcStack_1b8 = (char ****)0x9185e9;
          FUN_004b7c50();
        }
        ppppcStack_1b8 = (char ****)0x9185f8;
        FUN_005dbd90();
        pppcVar12 = local_24;
      }
      if (local_15 != '\0') {
        ppppcStack_1b8 = ppppcVar19;
        FUN_00520150();
      }
      ppppcStack_1b8 = (char ****)0x918614;
      FUN_0085ccb0();
      if (local_60 == local_2c) {
        ppppcStack_1b8 = (char ****)0x5;
        local_cc = 0xf;
        local_d0 = 0;
        local_e0[0] = (char ***)((uint)local_e0[0] & 0xffffff00);
        FUN_00409350();
        local_8._0_1_ = 0xe;
        ppppcStack_1b8 = (char ****)0x91864f;
        piVar20 = (int *)FUN_009c7290();
        ppppcStack_1b8 = local_e0;
        (**(code **)(*piVar20 + 0x60))();
        local_8 = CONCAT31(local_8._1_3_,0xc);
        if (0xf < local_cc) {
          ppppcStack_1b8 = (char ****)local_e0[0];
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_cc = 0xf;
        local_d0 = 0;
        local_e0[0] = (char ***)((uint)local_e0[0] & 0xffffff00);
      }
      local_24 = (char ***)((int)pppcVar12 + 1);
      ppppcVar9 = (char ****)local_54;
    } while ((int)local_24 < (int)local_40);
  }
  ppppcStack_1b8 = (char ****)0x5;
  local_ac = 0xf;
  local_b0 = 0;
  local_c0[0] = (char ***)((uint)local_c0[0] & 0xffffff00);
  FUN_00409350();
  ppppcStack_1b8 = local_168;
  local_8._0_1_ = 0xf;
  FUN_00424aa0(local_128);
  local_8._0_1_ = 0x10;
  pppcVar12 = (char ***)param_1[1];
  ppppcStack_1b8 = (char ****)0x44;
  ppppcVar19 = (char ****)FUN_00aae9af();
  local_8._0_1_ = 0x11;
  local_34 = (char ***)ppppcVar19;
  if (ppppcVar19 == (char ****)0x0) {
    ppppcVar19 = (char ****)0x0;
  }
  else {
    ppppcStack_1b8 = ppppcVar19;
    FUN_00a3ab70();
    ppppcVar19[0xe] = pppcVar12;
    ppppcVar19[0xf] = (char ***)0x0;
    *(undefined1 *)(ppppcVar19 + 0x10) = 0;
  }
  iVar18 = param_1[2];
  param_1[1] = ppppcVar19;
  param_1[2] = iVar18 + 1;
  if (iVar18 == 0) {
    *param_1 = ppppcVar19;
  }
  else {
    pppcVar12[0xf] = (char **)ppppcVar19;
  }
  ppppcStack_1b8 = (char ****)0x918752;
  FUN_00a39a80();
  local_8 = CONCAT31(local_8._1_3_,0xc);
  if (0xf < local_ac) {
    ppppcStack_1b8 = (char ****)local_c0[0];
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_ac = 0xf;
  local_b0 = 0;
  local_c0[0] = (char ***)((uint)local_c0[0] & 0xffffff00);
  if (*(char *)(DAT_012588e8 + 0xd1c) != '\0') {
    iVar18 = *(int *)(DAT_012588e8 + 0xb24);
    *(uint *)(iVar18 + 0x74) = *(uint *)(iVar18 + 0x74) | 0xf;
    if ((*(int *)(iVar18 + 0x7c) - *(int *)(iVar18 + 0x78) & 0xfffffffcU) == 0) {
      ppppcStack_1b8 = (char ****)0x9187bd;
      FUN_004e9b90();
    }
    else {
      **(undefined4 **)(iVar18 + 0x78) = 0xffffffff;
    }
  }
  if ((char ****)local_f0 != (char ****)0x0) {
    ppppcStack_1b8 = (char ****)local_f0;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if ((char ****)local_a0 != (char ****)0x0) {
    ppppcStack_1b8 = (char ****)local_a0;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (0xf < local_154) {
    ppppcStack_1b8 = (char ****)local_168[0];
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_154 = 0xf;
  local_158 = 0;
  local_168[0] = (char ***)((uint)local_168[0] & 0xffffff00);
  if ((char ****)local_54 != (char ****)0x0) {
    ppppcStack_1b8 = (char ****)local_54;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
LAB_00918836:
  local_4c = (char ***)0x0;
  local_50 = (char ***)0x0;
  local_54 = (char ***)0x0;
  if ((char ****)local_7c == (char ****)0x0) {
    ExceptionList = local_10;
    return;
  }
  ppppcStack_1b8 = (char ****)local_7c;
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
code_r0x00917798:
  piVar20 = (int *)piVar20[2];
  if (piVar20 == (int *)0x0) goto LAB_0091785f;
  goto LAB_00917790;
code_r0x009178ce:
  piVar10 = (int *)piVar10[2];
  if (piVar10 == (int *)0x0) goto LAB_00917994;
  goto LAB_009178c6;
}

