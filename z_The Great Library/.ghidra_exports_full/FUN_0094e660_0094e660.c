// FUN_0094e660 @ 0094e660 body=[[0094e660, 0094ec8b] [0094ec8f, 0094eca7] [0094ecab, 0094ee2a] [0094ee30, 0094f3be] [0094f3c2, 0094f52a] [0094f52e, 0094f5fd] [0094f600, 0094f666] [0094f66a, 0094f77b] [0094f77f, 0094f8c4] [0094f8c8, 0094f95c] [0094f960, 0094fa3c] [0094fa40, 0094fbd0] [0094fbd4, 0094fc35] [0094fc40, 0094fd15] [0094fd19, 0094ff27]]


/* WARNING: Type propagation algorithm not settling */

void FUN_0094e660(int ******param_1)

{
  int *****pppppiVar1;
  int *****pppppiVar2;
  int *piVar3;
  char cVar4;
  int ***pppiVar5;
  int ****ppppiVar6;
  int *****pppppiVar7;
  int iVar8;
  int ******ppppppiVar9;
  int iVar10;
  int *******pppppppiVar11;
  int ****ppppiVar12;
  int *******pppppppiVar13;
  int extraout_EDX;
  undefined4 *puVar14;
  int iVar15;
  int ******ppppppiVar16;
  int *******local_144;
  int *******local_130;
  int *******local_12c;
  int ******local_124;
  int *****local_120;
  int *****local_11c;
  int ******local_114;
  int ******local_110;
  int *****local_10c;
  int ***local_104;
  int ***local_100;
  int ******local_fc;
  int local_f8;
  undefined4 local_f4;
  undefined4 local_ec;
  uint local_e8;
  int *******local_e0;
  int *******local_dc;
  int *******local_d8;
  int ******local_d4;
  uint local_cc;
  undefined4 local_c4;
  uint local_c0;
  int *****local_b8;
  undefined4 local_b4;
  int *****local_b0;
  undefined4 local_ac;
  int *****local_a8 [2];
  int *****local_a0;
  int ******local_9c;
  undefined4 local_8c;
  uint local_88;
  undefined1 *local_84;
  undefined1 local_60 [8];
  int *****local_58;
  int *****local_54;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00bb86ad;
  pvStack_14 = ExceptionList;
  for (ppppiVar6 = param_1[3][0x48]; ExceptionList = &pvStack_14, ppppiVar6 != (int ****)0x0;
      ppppiVar6 = (int ****)ppppiVar6[2]) {
    if (*ppppiVar6 == (int ***)0x8a1) {
      ppppiVar6 = param_1[3][0x48];
      goto joined_r0x0094e6ad;
    }
  }
  goto LAB_0094e707;
joined_r0x0094e6ad:
  if (ppppiVar6 == (int ****)0x0) goto LAB_0094e6bf;
  if (*ppppiVar6 == (int ***)0xa38) {
    ppppppiVar9 = param_1 + 8;
    goto LAB_0094e6e2;
  }
  ppppiVar6 = (int ****)ppppiVar6[2];
  goto joined_r0x0094e6ad;
LAB_0094e6bf:
  local_130 = (int *******)0x2d2d2d;
  local_ac = 0;
  local_b0 = (int *****)0x2d2d2d;
  ppppppiVar9 = &local_b0;
LAB_0094e6e2:
  local_114 = (int ******)param_1[6];
  local_144 = (int *******)param_1[9];
  ExceptionList = &pvStack_14;
  FUN_00518620(*(undefined4 *)(DAT_012587e4[1] + (int)param_1[7] * 4),ppppppiVar9,param_1[8]);
LAB_0094e707:
  for (ppppiVar6 = param_1[3][0x48]; ppppiVar6 != (int ****)0x0; ppppiVar6 = (int ****)ppppiVar6[2])
  {
    if (*ppppiVar6 == (int ***)0x8a3) {
      iVar15 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + (int)param_1[10] * 4);
      local_114 = *(int *******)(*(int *)(iVar15 + 0x188) + 0x58);
      iVar10 = *(int *)(DAT_012587e4[1] + *(int *)(*(int *)(iVar15 + 0x188) + 0x5c) * 4);
      iVar8 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(iVar10 + 0xbe4) * 4);
      if (((iVar8 == 0) || (*(int *)(iVar8 + 0x188) != *(int *)(iVar15 + 0x188))) ||
         (*(int *)(iVar10 + 0xe4c) != 1)) {
        ppppiVar6 = param_1[3][0x48];
        goto joined_r0x0094e7fb;
      }
      local_144 = (int *******)0x94e791;
      cVar4 = FUN_0090a800();
      if (cVar4 == '\0') {
        local_130 = (int *******)0x2d2d2d;
        local_b8 = (int *****)0x2d2d2d;
        local_b4 = 0;
        pppppiVar7 = (int *****)&local_b8;
      }
      else {
        pppppiVar7 = (int *****)(extraout_EDX + 0x1c);
      }
      local_114 = (int ******)param_1[6];
      local_144 = *(int ********)(extraout_EDX + 0x20);
      FUN_00518620(*(undefined4 *)(DAT_012587e4[1] + (int)param_1[7] * 4),pppppiVar7,
                   *(undefined4 *)(extraout_EDX + 0x1c));
      break;
    }
  }
LAB_0094e84c:
  ppppiVar6 = param_1[3][0x48];
  if (ppppiVar6 != (int ****)0x0) {
LAB_0094e860:
    if (*ppppiVar6 != (int ***)0x8a7) goto code_r0x0094e868;
    if (param_1[5] != (int *****)0x0) {
      local_fc = (int ******)0x0;
      local_f8 = 0;
      local_f4 = 0;
      local_144 = (int *******)param_1;
      local_c = 0;
      FUN_0094e4d0();
      local_104 = (int ***)(local_f8 - (int)local_fc >> 2);
      if (0 < (int)local_104) {
        local_114 = (int ******)param_1[4];
        iVar15 = *(int *)(DAT_012587e4[1] + (int)param_1[5] * 4);
        if ((int)(*(int *)(iVar15 + 0x9dc) - *(int *)(iVar15 + 0x9d8) & 0xfffffffcU) < 1) {
          pppppppiVar13 = (int *******)0x0;
          local_e0 = (int *******)0x0;
          local_dc = (int *******)0x0;
          local_d8 = (int *******)0x0;
          local_c = CONCAT31(local_c._1_3_,1);
          local_114 = (int ******)(*local_fc)[0x16];
          local_130 = *(int ********)
                       (*(int *)(DAT_012587e4[1] + (int)(*local_fc)[0x17] * 4) + 0xbe4);
          local_11c = (int *****)0x0;
          if (0 < (int)local_104) {
            do {
              ppppiVar6 = local_fc[(int)local_11c][0x12];
              local_10c = local_fc[(int)local_11c] + 0x12;
              pppppiVar7 = local_10c;
              while ((*pppppiVar7 <= ppppiVar6 && (ppppiVar6 < pppppiVar7[1]))) {
                ppppppiVar9 = (int ******)*ppppiVar6;
                ppppiVar6 = ppppiVar6 + 1;
                local_124 = ppppppiVar9;
                if ((int *******)ppppppiVar9 != local_130) {
                  if ((&local_124 < pppppppiVar13) &&
                     (pppppiVar7 = local_10c, local_e0 <= &local_124)) {
                    iVar15 = (int)&local_124 - (int)local_e0;
                    if (pppppppiVar13 == local_d8) {
                      local_144 = (int *******)0x94ea78;
                      FUN_007b94a0();
                      pppppppiVar13 = local_dc;
                    }
                    if (pppppppiVar13 != (int *******)0x0) {
                      *pppppppiVar13 = local_e0[iVar15 >> 2];
                    }
                    pppppppiVar13 = pppppppiVar13 + 1;
                    pppppiVar7 = local_10c;
                    local_dc = pppppppiVar13;
                  }
                  else {
                    if (pppppppiVar13 == local_d8) {
                      local_144 = (int *******)0x94eaae;
                      FUN_007b94a0();
                      pppppppiVar13 = local_dc;
                      pppppiVar7 = local_10c;
                    }
                    if (pppppppiVar13 != (int *******)0x0) {
                      *pppppppiVar13 = ppppppiVar9;
                    }
                    pppppppiVar13 = pppppppiVar13 + 1;
                    local_dc = pppppppiVar13;
                  }
                }
              }
              local_11c = (int *****)((int)local_11c + 1);
            } while ((int)local_11c < (int)local_104);
          }
          ppppiVar6 = param_1[3][0x48];
          if (ppppiVar6 == (int ****)0x0) {
LAB_0094eb03:
            local_130 = (int *******)0x2d2d2d;
            local_114 = (int ******)0x2d2d2d;
            local_110 = (int ******)0x0;
            ppppppiVar9 = (int ******)&local_114;
          }
          else {
            while (*ppppiVar6 != (int ***)0xa38) {
              ppppiVar6 = (int ****)ppppiVar6[2];
              if (ppppiVar6 == (int ****)0x0) goto LAB_0094eb03;
            }
            ppppppiVar9 = param_1 + 8;
          }
          local_144 = (int *******)0x94eb22;
          FUN_004ec520();
          local_144 = (int *******)param_1[5];
          FUN_004ecb50(&local_e0,0,ppppppiVar9,param_1[4]);
          puVar14 = DAT_012587e4;
          local_144 = (int *******)0x61a80;
          local_130 = (int *******)param_1[6];
          FUN_005179e0();
          local_124 = *(int *******)(DAT_012588e8 + 0xb0c);
          local_144 = (int *******)(*(int *)(*(int *)(DAT_012586dc + 0x30) + 0x400) / 1000);
          FUN_00424810();
          *(int *******)
           (*(int *)(*(int *)(*(int *)(puVar14[1] + (int)param_1[9] * 4) + 0xbe8) +
                    (int)param_1[5] * 4) + 0x6c) = local_124;
          *(int *******)
           (*(int *)(*(int *)(*(int *)(puVar14[1] + (int)param_1[5] * 4) + 0xbe8) +
                    (int)param_1[9] * 4) + 0x6c) = local_124;
          local_114 = (int ******)param_1[6];
          if (*(char *)(*(int *)(puVar14[1] + (int)param_1[7] * 4) + 0x31) != '\0') {
            local_144 = *(int ********)(puVar14[1] + (int)param_1[7] * 4);
            FUN_00533e50();
            puVar14 = DAT_012587e4;
          }
          local_114 = (int ******)param_1[6];
          iVar15 = puVar14[1];
          if ((*(int *)(*(int *)(iVar15 + (int)param_1[5] * 4) + 0xbd0) !=
               *(int *)(*(int *)(iVar15 + (int)param_1[7] * 4) + 0xbd0)) &&
             (local_114 = (int ******)param_1[6],
             *(char *)(*(int *)(*(int *)(iVar15 + (int)param_1[7] * 4) + 0xbd0) + 0x44) != '\0')) {
            local_114 = (int ******)param_1[4];
            local_144 = (int *******)0x0;
            FUN_00513a90(*(undefined4 *)(*(int *)(iVar15 + (int)param_1[7] * 4) + 0xbd0),0,0);
          }
          if (local_e0 != (int *******)0x0) {
            local_144 = local_e0;
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
        }
        else {
          local_144 = (int *******)0x94e8f4;
          cVar4 = FUN_0090a800();
          if (cVar4 == '\0') {
            local_12c = (int *******)0x0;
            local_130 = (int *******)0x2d2d2d;
            pppppppiVar13 = (int *******)&local_130;
          }
          else {
            pppppppiVar13 = (int *******)(param_1 + 8);
          }
          local_114 = *pppppppiVar13;
          local_110 = pppppppiVar13[1];
          local_124 = (int ******)(DAT_012588e8 + 0xb0c);
          iVar15 = 0;
          if (0 < (int)local_104) {
            do {
              local_144 = &local_114;
              FUN_004b5a90(local_fc[iVar15] + 0x12,param_1 + 4,local_124,1);
              iVar15 = iVar15 + 1;
            } while (iVar15 < (int)local_104);
          }
          pppiVar5 = (int ***)(*(int *)(*(int *)(DAT_012586dc + 0x30) + 0x3f8) +
                              *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4[1] +
                                                                 (int)param_1[7] * 4) + 0xbe8) +
                                               (int)param_1[5] * 4) + 0x3c));
          local_130 = (int *******)param_1[6];
          iVar15 = *(int *)(*(int *)(*(int *)(DAT_012587e4[1] + (int)param_1[7] * 4) + 0xbe8) +
                           (int)param_1[5] * 4);
          *(undefined1 *)(iVar15 + 0x71) = 1;
          if ((int)DAT_0131b1e8 < (int)pppiVar5) {
            pppiVar5 = DAT_0131b1e8;
          }
          if ((int)pppiVar5 < (int)DAT_0131b2c8) {
            pppiVar5 = DAT_0131b2c8;
          }
          *(int ****)(iVar15 + 0x3c) = pppiVar5;
        }
      }
      local_c = 0xffffffff;
      if (local_fc != (int ******)0x0) {
        local_144 = (int *******)local_fc;
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
  }
LAB_0094ecab:
  puVar14 = DAT_012587e4;
  for (ppppiVar6 = param_1[3][0x48]; ppppiVar6 != (int ****)0x0; ppppiVar6 = (int ****)ppppiVar6[2])
  {
    if (*ppppiVar6 == (int ***)0x8a2) {
      if (param_1[5] == (int *****)0x0) {
        local_130 = (int *******)param_1[6];
        local_144 = *(int ********)(DAT_012587e4[1] + (int)param_1[7] * 4);
      }
      else {
        local_144 = *(int ********)(DAT_012587e4[1] + (int)param_1[9] * 4);
        local_130 = (int *******)param_1[8];
        FUN_00533f20();
        iVar15 = *(int *)(*(int *)(*(int *)(puVar14[1] + (int)param_1[9] * 4) + 0xbe8) +
                         (int)param_1[5] * 4);
        if (*(int *)(iVar15 + 0x40) != 0) {
          *(undefined4 *)(iVar15 + 0x44) = *(undefined4 *)(DAT_012588e8 + 0xb0c);
        }
        iVar8 = DAT_012586dc;
        *(undefined4 *)(iVar15 + 0x40) = 0;
        *(undefined4 *)(iVar15 + 0x48) = 0;
        iVar10 = *(int *)(*(int *)(iVar8 + 0x30) + 0x404);
        if (iVar10 < 0) {
          *(int *)(iVar15 + 0x4c) = -iVar10;
          *(int *)(iVar15 + 0x48) = iVar10;
        }
        else {
          *(undefined4 *)(iVar15 + 0x4c) = 0;
        }
        iVar15 = *(int *)(*(int *)(*(int *)(puVar14[1] + (int)param_1[7] * 4) + 0xbe8) +
                         (int)param_1[5] * 4);
        *(undefined4 *)(iVar15 + 0x48) = 100000;
        iVar10 = *(int *)(*(int *)(iVar8 + 0x30) + 0x404);
        if (iVar10 < 100000) {
          *(int *)(iVar15 + 0x4c) = 100000 - iVar10;
          *(int *)(iVar15 + 0x48) = iVar10;
        }
        else {
          *(undefined4 *)(iVar15 + 0x4c) = 0;
        }
        local_130 = (int *******)param_1[6];
        local_144 = *(int ********)(DAT_012587e4[1] + (int)param_1[7] * 4);
      }
      FUN_00533e50();
      break;
    }
  }
  for (ppppiVar6 = param_1[3][0x48]; ppppiVar6 != (int ****)0x0; ppppiVar6 = (int ****)ppppiVar6[2])
  {
    if (*ppppiVar6 == (int ***)0x264) {
      local_10c = (int *****)*DAT_012587e4;
      local_124 = (int ******)0x1;
      if (1 < (int)local_10c) {
        local_130 = (int *******)(DAT_012587e4 + 1);
        do {
          local_104 = (int ***)(*local_130)[(int)local_124][7];
          pppiVar5 = (int ***)(*local_130)[(int)local_124][8];
          iVar15 = DAT_012587e4[1];
          local_11c = param_1[6];
          local_100 = pppiVar5;
          if (*(int *)(*(int *)(*(int *)(iVar15 + (int)pppiVar5 * 4) + 0xe64) + 0x50) ==
              *(int *)(*(int *)(*(int *)(iVar15 + (int)param_1[7] * 4) + 0xe64) + 0x50)) {
            iVar10 = *(int *)(iVar15 + (int)pppiVar5 * 4);
            if (*(char *)(iVar10 + 0x31) == '\0') {
              if (*(int ******)(iVar10 + 0x142c) == param_1[9]) {
                local_11c = param_1[8];
                local_144 = *(int ********)(iVar15 + (int)param_1[9] * 4);
                FUN_00533f20();
                local_11c = param_1[6];
                local_144 = *(int ********)(DAT_012587e4[1] + (int)param_1[7] * 4);
                FUN_00533e50();
                iVar10 = DAT_012586dc;
                iVar15 = *(int *)(*(int *)(*(int *)(DAT_012587e4[1] + (int)param_1[7] * 4) + 0xbe8)
                                 + (int)local_100 * 4);
                *(undefined4 *)(iVar15 + 0x48) = 100000;
                iVar10 = *(int *)(*(int *)(iVar10 + 0x30) + 0x404);
                pppiVar5 = local_100;
                if (iVar10 < 100000) {
                  *(int *)(iVar15 + 0x4c) = 100000 - iVar10;
                  *(int *)(iVar15 + 0x48) = iVar10;
                }
                else {
                  *(undefined4 *)(iVar15 + 0x4c) = 0;
                }
              }
              else if (*(int *)(*(int *)(iVar15 + (int)pppiVar5 * 4) + 0x142c) == 0) {
                local_11c = (int *****)&local_144;
                local_144 = (int *******)0x186a0;
                FUN_0092f570();
              }
            }
            local_11c = param_1[8];
            iVar15 = *(int *)(*(int *)(*(int *)(DAT_012587e4[1] + (int)param_1[9] * 4) + 0xbe8) +
                             (int)pppiVar5 * 4);
            iVar10 = 0;
            if (*(int *)(iVar15 + 0x40) != 0) {
              *(undefined4 *)(iVar15 + 0x44) = *(undefined4 *)(DAT_012588e8 + 0xb0c);
            }
            iVar8 = DAT_012586dc;
            *(undefined4 *)(iVar15 + 0x40) = 0;
            *(undefined4 *)(iVar15 + 0x48) = 0;
            iVar8 = *(int *)(*(int *)(iVar8 + 0x30) + 0x404);
            if (iVar8 < 0) {
              iVar10 = -iVar8;
              *(int *)(iVar15 + 0x48) = iVar8;
            }
            pppppiVar7 = *(int ******)(iVar15 + 0x24);
            *(int *)(iVar15 + 0x4c) = iVar10;
            if (pppppiVar7 != (int *****)0x0) {
              local_144 = (int *******)0x94efee;
              (*(code *)(*pppppiVar7)[0xb])();
              for (local_144 = *(int ********)(DAT_012588e8 + 0xa84);
                  (local_144 != (int *******)0x0 && (*local_144 != (int ******)pppppiVar7));
                  local_144 = (int *******)local_144[2]) {
              }
              FUN_005f2ae0();
              local_144 = (int *******)0x1;
              (*(code *)**pppppiVar7)();
            }
          }
          local_124 = (int ******)((int)local_124 + 1);
        } while ((int)local_124 < (int)local_10c);
      }
      break;
    }
  }
  for (ppppiVar6 = param_1[3][0x48]; ppppiVar6 != (int ****)0x0; ppppiVar6 = (int ****)ppppiVar6[2])
  {
    if (*ppppiVar6 == (int ***)0x8aa) {
      if (param_1[5] != (int *****)0x0) {
        local_144 = (int *******)(param_1 + 8);
        FUN_0094ff30(param_1 + 4);
      }
      break;
    }
  }
  ppppiVar6 = param_1[3][0x48];
  if (ppppiVar6 != (int ****)0x0) {
LAB_0094f078:
    if (*ppppiVar6 != (int ***)0x942) goto code_r0x0094f080;
    local_130 = *(int ********)(DAT_012587e4[1] + (int)param_1[9] * 4);
    for (pppppiVar7 = (int *****)local_130[0x34e];
        (local_130[0x34e] <= pppppiVar7 && (pppppiVar7 < local_130[0x34f]));
        pppppiVar7 = pppppiVar7 + 2) {
      local_144 = (int *******)(param_1 + 8);
      FUN_0094ff30(pppppiVar7);
    }
    local_144 = (int *******)0x24;
    ppppiVar6 = (int ****)FUN_00aae9af();
    if (ppppiVar6 == (int ****)0x0) {
      ppppiVar6 = (int ****)0x0;
    }
    else {
      local_144 = (int *******)0x94f0e7;
      FUN_0057fb40();
      *ppppiVar6 = (int ***)CVassal::vftable;
    }
    iVar10 = DAT_012588e8;
    pppppiVar7 = param_1[8];
    pppiVar5 = *(int ****)(DAT_012588e8 + 0xb0c);
    local_12c = (int *******)param_1[9];
    local_120 = param_1[7];
    ppppiVar6[2] = (int ***)param_1[6];
    ppppiVar6[3] = (int ***)local_120;
    ppppiVar6[4] = (int ***)pppppiVar7;
    ppppiVar6[5] = (int ***)local_12c;
    puVar14 = DAT_012587e4;
    ppppiVar6[6] = pppiVar5;
    iVar15 = *(int *)(*(int *)(*(int *)(puVar14[1] + (int)param_1[7] * 4) + 0xbe8) +
                     (int)param_1[9] * 4);
    local_130 = (int *******)(iVar10 + 0xa84);
    *(undefined1 *)(iVar15 + 0x71) = 1;
    *(int *****)(iVar15 + 0x24) = ppppiVar6;
    local_124 = *(int *******)(iVar10 + 0xa88);
    local_144 = (int *******)0x10;
    pppppiVar7 = (int *****)FUN_00aae9af();
    if (pppppiVar7 == (int *****)0x0) {
      pppppiVar7 = (int *****)0x0;
    }
    else {
      *pppppiVar7 = ppppiVar6;
      pppppiVar7[1] = (int ****)local_124;
      pppppiVar7[2] = (int ****)0x0;
      *(undefined1 *)(pppppiVar7 + 3) = 0;
    }
    ppppppiVar9 = local_130[2];
    local_130[1] = (int ******)pppppiVar7;
    local_130[2] = (int ******)((int)ppppppiVar9 + 1);
    if (ppppppiVar9 == (int ******)0x0) {
      *local_130 = (int ******)pppppiVar7;
    }
    else {
      local_124[2] = pppppiVar7;
    }
    local_144 = (int *******)0x94f1be;
    local_130 = (int *******)ppppppiVar9;
    (*(code *)(*ppppiVar6)[10])();
    local_144 = (int *******)(param_1 + 6);
    FUN_007dcf30();
    local_144 = (int *******)(param_1 + 8);
    FUN_007dcf30();
  }
LAB_0094f1d3:
  for (ppppiVar6 = param_1[3][0x48]; ppppiVar6 != (int ****)0x0; ppppiVar6 = (int ****)ppppiVar6[2])
  {
    if (*ppppiVar6 == (int ***)0x6c2) {
      local_144 = (int *******)0x30;
      iVar15 = FUN_00aae9af();
      if (iVar15 == 0) {
        ppppppiVar9 = (int ******)0x0;
      }
      else {
        local_144 = (int *******)0x94f204;
        ppppppiVar9 = (int ******)FUN_0092cb70();
      }
      local_12c = (int *******)param_1[7];
      pppppiVar7 = *(int ******)(DAT_012588e8 + 0xb0c);
      pppppiVar2 = param_1[8];
      pppppiVar1 = param_1[6];
      ppppppiVar9[5] = param_1[9];
      ppppppiVar9[2] = pppppiVar1;
      ppppppiVar9[4] = pppppiVar2;
      ppppppiVar9[6] = pppppiVar7;
      ppppiVar6 = (*ppppppiVar9)[10];
      ppppppiVar9[3] = (int *****)local_12c;
      local_144 = (int *******)0x94f242;
      (*(code *)ppppiVar6)();
      local_144 = (int *******)ppppppiVar9;
      FUN_004a7bc0();
      break;
    }
  }
  ppppiVar6 = param_1[3][0x48];
  if (ppppiVar6 != (int ****)0x0) {
LAB_0094f265:
    if (*ppppiVar6 != (int ***)0xa2f) goto code_r0x0094f26d;
    if (DAT_0125ce80 == 0) {
      local_144 = (int *******)0x3c;
      local_130 = (int *******)FUN_00aae9af();
      local_c = 2;
      if (local_130 == (int *******)0x0) {
        local_144 = (int *******)0x0;
      }
      else {
        local_144 = (int *******)0x94f2a6;
        local_144 = (int *******)FUN_004dada0();
      }
      FUN_004dc340();
    }
    pppppiVar7 = *(int ******)(DAT_0125ce80 + 0x38);
    local_fc = (int ******)0x0;
    local_f8 = 0;
    local_f4 = 0;
    local_144 = (int *******)param_1;
    local_c = 3;
    local_11c = pppppiVar7;
    FUN_0094e4d0();
    local_130 = (int *******)(local_f8 - (int)local_fc >> 2);
    if (0 < (int)local_130) {
      local_10c = (int *****)0x0;
      do {
        pppppiVar2 = local_fc[(int)local_10c];
        ppppiVar6 = pppppiVar2[0x12];
        local_124 = (int ******)0x0;
        if (0 < (int)((int)pppppiVar2[0x13] - (int)ppppiVar6 & 0xfffffffcU)) {
          do {
            if (*(char *)((int)pppppiVar7 + 0x131) != '\0') {
              iVar15 = *(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                                        (int)ppppiVar6[(int)local_124] * 4) + 0x118);
              if (DAT_0125ceac < *(int *)(*(int *)(iVar15 + (int)pppppiVar7[0x4d] * 4) + 0x20)) {
                if (*(char *)((int)pppppiVar7 + 0x131) == '\0') {
                  iVar15 = 0;
                }
                else {
                  iVar15 = *(int *)(iVar15 + (int)pppppiVar7[0x4d] * 4);
                }
                *(undefined4 *)(iVar15 + 0x24) = 0;
                *(undefined4 *)(iVar15 + 0x20) = 0;
              }
            }
            ppppiVar6 = pppppiVar2[0x12];
            local_124 = (int ******)((int)local_124 + 1);
            pppppiVar7 = local_11c;
          } while ((int)local_124 < (int)pppppiVar2[0x13] - (int)ppppiVar6 >> 2);
        }
        local_10c = (int *****)((int)local_10c + 1);
      } while ((int)local_10c < (int)local_130);
    }
    local_c = 0xffffffff;
    if (local_fc != (int ******)0x0) {
      local_144 = (int *******)local_fc;
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
LAB_0094f3c2:
  ppppiVar6 = param_1[3][0x48];
  if (ppppiVar6 != (int ****)0x0) {
LAB_0094f3d3:
    if (*ppppiVar6 != (int ***)0xa30) goto code_r0x0094f3db;
    if (DAT_0125ce80 == 0) {
      local_144 = (int *******)0x3c;
      local_130 = (int *******)FUN_00aae9af();
      local_c = 4;
      if (local_130 == (int *******)0x0) {
        local_144 = (int *******)0x0;
      }
      else {
        local_144 = (int *******)0x94f414;
        local_144 = (int *******)FUN_004dada0();
      }
      FUN_004dc340();
    }
    local_124 = *(int *******)(DAT_0125ce80 + 0x30);
    local_fc = (int ******)0x0;
    local_f8 = 0;
    local_f4 = 0;
    local_144 = (int *******)param_1;
    local_c = 5;
    FUN_0094e4d0();
    local_130 = (int *******)(local_f8 - (int)local_fc >> 2);
    if ((0 < (int)local_130) && (local_11c = (int *****)0x0, 0 < (int)local_130)) {
      do {
        pppppiVar7 = local_fc[(int)local_11c];
        ppppiVar6 = pppppiVar7[0x12];
        local_10c = (int *****)0x0;
        if (0 < (int)((int)pppppiVar7[0x13] - (int)ppppiVar6 & 0xfffffffcU)) {
          do {
            if (*(char *)((int)local_124 + 0x131) != '\0') {
              iVar15 = *(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                                        (int)ppppiVar6[(int)local_10c] * 4) + 0x118);
              if (DAT_0125ceac < *(int *)(*(int *)(iVar15 + (int)local_124[0x4d] * 4) + 0x20)) {
                if (*(char *)((int)local_124 + 0x131) == '\0') {
                  iVar15 = 0;
                }
                else {
                  iVar15 = *(int *)(iVar15 + (int)local_124[0x4d] * 4);
                }
                *(undefined4 *)(iVar15 + 0x24) = 0;
                *(undefined4 *)(iVar15 + 0x20) = 0;
              }
            }
            ppppiVar6 = pppppiVar7[0x12];
            local_10c = (int *****)((int)local_10c + 1);
          } while ((int)local_10c < (int)pppppiVar7[0x13] - (int)ppppiVar6 >> 2);
        }
        local_11c = (int *****)((int)local_11c + 1);
      } while ((int)local_11c < (int)local_130);
    }
    local_c = 0xffffffff;
    if (local_fc != (int ******)0x0) {
      local_144 = (int *******)local_fc;
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
LAB_0094f52e:
  ppppiVar6 = param_1[3][0x48];
  if (ppppiVar6 != (int ****)0x0) {
LAB_0094f540:
    if (*ppppiVar6 != (int ***)0x8a4) goto code_r0x0094f548;
    iVar15 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x388);
    local_144 = (int *******)0x47c35040;
    FUN_00401000();
    local_144 = (int *******)0x94f57d;
    iVar10 = FUN_00b31c00();
    local_144 = (int *******)0x0;
    iVar15 = __alldiv((longlong)iVar10 * (longlong)iVar15,1000);
    local_144 = (int *******)0x43fa4001;
    FUN_00401000();
    local_144 = (int *******)0x94f5ab;
    iVar10 = FUN_00b31c00();
    local_fc = (int ******)0x0;
    local_f8 = 0;
    local_f4 = 0;
    local_c._0_1_ = 6;
    local_c._1_3_ = 0;
    local_130 = (int *******)param_1[8];
    ppppppiVar9 = *(int *******)(*(int *)(DAT_012587e4[1] + (int)param_1[9] * 4) + 0x7b4);
    while (ppppppiVar9 != (int ******)0x0) {
      local_124 = (int ******)ppppppiVar9[2];
      ppppppiVar16 = (int ******)*ppppppiVar9;
      local_144 = (int *******)0x0;
      iVar8 = FUN_009b7950(0x45);
      ppppppiVar9 = local_124;
      if (iVar8 % 100 < (iVar10 + iVar15) / 1000) {
        local_144 = (int *******)ppppppiVar16;
        FUN_0079de40(local_a8);
        local_c._0_1_ = 7;
        local_144 = (int *******)0x94f648;
        FUN_005e5bb0();
        local_c._0_1_ = 6;
        if (0xf < local_88) {
          local_144 = (int *******)local_9c;
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_88 = 0xf;
        local_8c = 0;
        local_9c = (int ******)((uint)local_9c & 0xffffff00);
        ppppppiVar9 = local_124;
      }
    }
    ppppppiVar9 = (int ******)((local_f8 - (int)local_fc) / 0x28);
    if (0 < (int)ppppppiVar9) {
      ppppppiVar16 = local_fc + 1;
      local_124 = ppppppiVar9;
      do {
        local_e0 = (int *******)ppppppiVar16[-1];
        local_dc = (int *******)*ppppppiVar16;
        local_144 = (int *******)0xffffffff;
        local_d8 = (int *******)ppppppiVar16[1];
        local_c0 = 0xf;
        local_c4 = 0;
        local_d4 = (int ******)((uint)local_d4 & 0xffffff00);
        FUN_00408ed0();
        local_c = CONCAT31(local_c._1_3_,8);
        local_144 = (int *******)0x94f711;
        cVar4 = FUN_005e5800();
        if (cVar4 != '\0') {
          local_130 = local_dc;
          local_12c = local_d8;
          iVar15 = DAT_01258a94;
          if (local_dc < (int *******)0x1269) {
            iVar15 = DAT_01258a98;
          }
          if (iVar15 == 0) {
LAB_0094f74e:
            local_144 = (int *******)0x0;
          }
          else {
            local_144 = (int *******)0x94f745;
            iVar15 = FUN_009c1d40();
            if (iVar15 == 0) goto LAB_0094f74e;
            local_144 = (int *******)(iVar15 + -8);
          }
          local_e0 = local_144;
          FUN_0068aa10();
        }
        local_c._0_1_ = 6;
        if (0xf < local_c0) {
          local_144 = (int *******)local_d4;
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        ppppppiVar16 = ppppppiVar16 + 10;
        local_124 = (int ******)((int)local_124 + -1);
        local_c0 = 0xf;
        local_c4 = 0;
        local_d4 = (int ******)((uint)local_d4 & 0xffffff00);
      } while (local_124 != (int ******)0x0);
    }
    pppppppiVar13 = *(int ********)(DAT_012587e4[1] + (int)param_1[9] * 4);
    ppppppiVar9 = pppppppiVar13[0x276];
    local_130 = pppppppiVar13;
    while ((pppppppiVar13[0x276] <= ppppppiVar9 && (ppppppiVar9 < pppppppiVar13[0x277]))) {
      puVar14 = *(undefined4 **)
                 (*(int *)(*(int *)(DAT_012588e8 + 0xacc) + (int)*ppppppiVar9 * 4) + 0xd8);
      ppppppiVar9 = ppppppiVar9 + 1;
      while (local_124 = ppppppiVar9, puVar14 != (undefined4 *)0x0) {
        ppppppiVar16 = (int ******)*puVar14;
        puVar14 = (undefined4 *)puVar14[2];
        local_144 = (int *******)0x94f804;
        cVar4 = (*(code *)(*ppppppiVar16)[0xd])();
        ppppppiVar9 = local_124;
        pppppppiVar13 = local_130;
        if (cVar4 != '\0') {
          local_10c = param_1[8];
          local_144 = (int *******)ppppppiVar16;
          FUN_0053e7c0();
          ppppppiVar9 = local_124;
          pppppppiVar13 = local_130;
        }
      }
    }
    local_144 = (int *******)0x24;
    iVar15 = FUN_00aae9af();
    if (iVar15 == 0) {
      ppppppiVar9 = (int ******)0x0;
    }
    else {
      local_144 = (int *******)0x94f845;
      ppppppiVar9 = (int ******)FUN_0092cdb0();
    }
    local_120 = param_1[7];
    pppppiVar7 = param_1[6];
    pppppiVar2 = *(int ******)(DAT_012588e8 + 0xb0c);
    local_12c = (int *******)param_1[9];
    ppppppiVar9[2] = param_1[8];
    ppppppiVar9[4] = pppppiVar7;
    ppppppiVar9[3] = (int *****)local_12c;
    ppppppiVar9[5] = local_120;
    ppppppiVar9[6] = pppppiVar2;
    local_144 = (int *******)ppppppiVar9;
    FUN_004a7bc0();
    local_144 = (int *******)0x94f896;
    (*(code *)(*ppppppiVar9)[10])();
    ppppppiVar9 = local_fc;
    local_c = 0xffffffff;
    if (local_fc != (int ******)0x0) {
      local_144 = local_130;
      FUN_005e5d30();
      local_144 = (int *******)ppppppiVar9;
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
LAB_0094f8c8:
  for (ppppiVar6 = param_1[3][0x48]; ppppiVar6 != (int ****)0x0; ppppiVar6 = (int ****)ppppiVar6[2])
  {
    if (*ppppiVar6 == (int ***)0x8a5) {
      local_144 = (int *******)0x24;
      iVar15 = FUN_00aae9af();
      if (iVar15 == 0) {
        ppppppiVar9 = (int ******)0x0;
      }
      else {
        local_144 = (int *******)0x94f8f9;
        ppppppiVar9 = (int ******)FUN_0092ca00();
      }
      local_120 = param_1[9];
      pppppiVar7 = param_1[8];
      pppppiVar2 = *(int ******)(DAT_012588e8 + 0xb0c);
      local_12c = (int *******)param_1[7];
      ppppppiVar9[2] = param_1[6];
      ppppppiVar9[4] = pppppiVar7;
      ppppppiVar9[3] = (int *****)local_12c;
      ppppppiVar9[5] = local_120;
      ppppppiVar9[6] = pppppiVar2;
      local_144 = (int *******)ppppppiVar9;
      FUN_004a7bc0();
      local_144 = (int *******)0x94f94a;
      (*(code *)(*ppppppiVar9)[10])();
      break;
    }
  }
  for (ppppiVar6 = param_1[3][0x48]; ppppiVar6 != (int ****)0x0; ppppiVar6 = (int ****)ppppiVar6[2])
  {
    if (*ppppiVar6 == (int ***)0x8a8) {
      iVar15 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x390);
      local_130 = (int *******)param_1[8];
      iVar10 = *(int *)(DAT_012587e4[1] + (int)param_1[9] * 4);
      local_144 = (int *******)0x0;
      iVar10 = __alldiv((longlong)
                        (*(int *)(iVar10 + 0xea0) + *(int *)(*(int *)(iVar10 + 0xbcc) + 0x28c)) *
                        (longlong)*(int *)(*(int *)(DAT_012586dc + 0x30) + 0x394),1000);
      local_144 = (int *******)-(iVar10 + iVar15);
      local_130 = (int *******)param_1[8];
      FUN_005341a0();
      break;
    }
  }
  for (ppppiVar6 = param_1[3][0x48]; (ppppiVar6 != (int ****)0x0 && (*ppppiVar6 != (int ***)0x8da));
      ppppiVar6 = (int ****)ppppiVar6[2]) {
  }
  local_130 = (int *******)param_1[6];
  ppppppiVar9 = *(int *******)(DAT_012587e4[1] + (int)param_1[7] * 4);
  local_114 = (int ******)param_1[8];
  iVar15 = *(int *)(DAT_012587e4[1] + (int)param_1[9] * 4);
  ppppiVar6 = param_1[3][0x48];
  local_124 = ppppppiVar9;
  local_10c = (int *****)iVar15;
  if (ppppiVar6 != (int ****)0x0) {
LAB_0094fa40:
    if (*ppppiVar6 != (int ***)0x975) goto code_r0x0094fa48;
    local_144 = (int *******)0x0;
    FUN_00513a90(ppppppiVar9[0x2f4],1,ppppppiVar9[0x213]);
    local_11c = (int *****)ppppppiVar9[0x2fa][(int)param_1[9]];
    *(undefined1 *)((int)local_11c + 0x71) = 1;
    pppiVar5 = (int ***)0x0;
    if ((int)DAT_0131b1e8 < 0) {
      pppiVar5 = DAT_0131b1e8;
    }
    if ((int)pppiVar5 < (int)DAT_0131b2c8) {
      pppiVar5 = DAT_0131b2c8;
    }
    local_11c[0xf] = (int ****)pppiVar5;
    if (*(char *)((int)ppppppiVar9 + 0x31) != '\0') {
      local_114 = *(int *******)(iVar15 + 0x1428);
      local_144 = (int *******)ppppppiVar9;
      if (*(int *)(iVar15 + 0x142c) != 0) {
        local_114 = *(int *******)(iVar15 + 0x1428);
        local_144 = *(int ********)(DAT_012587e4[1] + *(int *)(iVar15 + 0x142c) * 4);
        FUN_00533f20();
        local_144 = (int *******)local_124;
      }
      FUN_00533e50();
    }
    local_11c = (int *****)local_11c[0xd];
    if (local_11c == (int *****)0x0) goto LAB_0094fd21;
    local_144 = (int *******)0xe35c00;
    FUN_00928880(&local_e0);
    local_c = 9;
    pppppppiVar13 = local_e0;
    if (local_cc < 0x10) {
      pppppppiVar13 = (int *******)&local_e0;
    }
    local_e8 = 0xf;
    local_ec = 0;
    local_fc = (int ******)((uint)local_fc & 0xffffff00);
    pppppppiVar11 = pppppppiVar13;
    do {
      cVar4 = *(char *)pppppppiVar11;
      pppppppiVar11 = (int *******)((int)pppppppiVar11 + 1);
    } while (cVar4 != '\0');
    local_144 = (int *******)((int)pppppppiVar11 - (int)((int)pppppppiVar13 + 1));
    FUN_00409350(pppppppiVar13);
    local_c._0_1_ = 10;
    if (DAT_0131acac == 0) {
      local_144 = (int *******)0x20;
      local_130 = (int *******)FUN_00aae9af();
      local_c._0_1_ = 0xb;
      if (local_130 == (int *******)0x0) {
        local_144 = (int *******)0x0;
      }
      else {
        local_144 = (int *******)0x94fb88;
        local_144 = (int *******)FUN_0090cca0();
      }
      local_c._0_1_ = 10;
      FUN_0090d9d0();
    }
    iVar15 = DAT_0131acac;
    local_144 = &local_fc;
    local_104 = (int ***)FUN_0090da40();
    if (local_104 == (int ***)0x0) {
      local_104 = (int ***)**(undefined4 **)(iVar15 + 0xc);
    }
    local_c = CONCAT31(local_c._1_3_,9);
    if (0xf < local_e8) {
      local_144 = (int *******)local_fc;
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_e8 = 0xf;
    local_ec = 0;
    local_fc = (int ******)((uint)local_fc & 0xffffff00);
    if (local_104 != (int ***)0x0) {
      ppppiVar6 = local_11c[0xc];
      ppppiVar12 = local_11c[0xb];
      pppppiVar7 = local_11c + 0xb;
      if (ppppiVar12 == ppppiVar6) {
LAB_0094fc13:
        pppppiVar7 = local_11c + 0xf;
      }
      else {
        do {
          if ((int *****)ppppiVar12[1] == param_1[9]) break;
          ppppiVar12 = ppppiVar12 + 2;
        } while (ppppiVar12 != ppppiVar6);
        if (ppppiVar12 == ppppiVar6) goto LAB_0094fc13;
      }
      ppppiVar6 = *pppppiVar7;
      iVar15 = 0;
      local_11c = pppppiVar7;
      if (0 < (int)((int)pppppiVar7[1] - (int)ppppiVar6 & 0xfffffff8U)) {
        do {
          if ((int *****)ppppiVar6[iVar15 * 2 + 1] != param_1[9]) {
            local_144 = (int *******)0x0;
            FUN_008a8650();
            local_58 = (int *****)ppppiVar6[iVar15 * 2];
            local_54 = (int *****)ppppiVar6[iVar15 * 2 + 1];
            local_144 = (int *******)0x0;
            FUN_008a8650();
            local_9c = (int ******)param_1[9];
            local_a0 = param_1[8];
            local_84 = local_60;
            local_144 = (int *******)local_a8;
            cVar4 = (*(code *)(*local_104)[8])();
            pppppiVar7 = local_11c;
            if (cVar4 != '\0') {
              local_114 = (int ******)ppppiVar6[iVar15 * 2];
              local_144 = (int *******)0x1;
              FUN_00535fc0(param_1 + 8,local_104 + 5,0xc);
              pppppiVar7 = local_11c;
            }
          }
          ppppiVar6 = *pppppiVar7;
          iVar15 = iVar15 + 1;
        } while (iVar15 < (int)pppppiVar7[1] - (int)ppppiVar6 >> 3);
      }
    }
    local_c = 0xffffffff;
    if (0xf < local_cc) {
      local_144 = local_e0;
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
LAB_0094fd21:
  pppppiVar7 = local_10c;
  ppppppiVar9 = local_124;
  for (ppppiVar6 = param_1[3][0x48]; ppppiVar6 != (int ****)0x0; ppppiVar6 = (int ****)ppppiVar6[2])
  {
    if (*ppppiVar6 == (int ***)0x976) {
      local_144 = (int *******)0x0;
      FUN_00513a90(local_124[0x2f4],1,0);
      local_114 = *(int *******)((int)pppppiVar7 + 0x1428);
      if (*(int *)((int)pppppiVar7 + 0x142c) != 0) {
        local_114 = *(int *******)((int)local_10c + 0x1428);
        local_144 = *(int ********)(DAT_012587e4[1] + *(int *)((int)local_10c + 0x142c) * 4);
        FUN_00533f20();
        ppppppiVar9 = local_124;
      }
      if (*(char *)((int)ppppppiVar9 + 0x31) != '\0') {
        local_144 = (int *******)ppppppiVar9;
        FUN_00533e50();
      }
      break;
    }
  }
  ppppiVar6 = param_1[3][0x48];
  do {
    if (ppppiVar6 == (int ****)0x0) {
LAB_0094fe32:
      if (0 < (int)param_1[3][0x6f]) {
        local_144 = (int *******)0x0;
        FUN_008a8650();
        local_144 = (int *******)0x0;
        FUN_008a8650();
        local_58 = param_1[6];
        local_54 = param_1[7];
        local_84 = local_60;
        local_a0 = param_1[8];
        local_9c = (int ******)param_1[9];
        local_144 = (int *******)0x0;
        (*(code *)param_1[3][0x6b][0xb])(local_a8);
      }
      local_144 = (int *******)&local_130;
      local_124 = param_1 + 8;
      FUN_009503d0(param_1);
      pppppppiVar13 = local_130;
      local_10c = (int *****)&local_144;
      local_144 = local_130;
      local_114 = (int ******)param_1[6];
      FUN_005341a0();
      local_130 = (int *******)&local_144;
      local_144 = (int *******)-(int)pppppppiVar13;
      local_114 = (int ******)*local_124;
      FUN_005341a0();
      ExceptionList = pvStack_14;
      return;
    }
    if (*ppppiVar6 == (int ***)0xa4c) {
      if (param_1[0xf] != (int *****)0x0) {
        local_144 = (int *******)0x2;
        FUN_005370f0();
        local_144 = (int *******)ppppppiVar9;
        FUN_00545be0();
        iVar15 = DAT_012588e8;
        *(undefined4 *)(*(int *)(*(int *)(DAT_012588e8 + 0xb24) + 0x24) + 0x1c) = 1;
        pppppiVar7 = *(int ******)(iVar15 + 0xb60);
        if ((param_1[7] == pppppiVar7) || (param_1[9] == pppppiVar7)) {
          piVar3 = *(int **)(iVar15 + 0xb24);
          local_144 = (int *******)0x94fe11;
          local_144 = (int *******)(**(code **)(*piVar3 + 0x124))();
          if ((local_144 != (int *******)0x0) && (*(char *)((int)local_144[8] + 0x67) != '\0')) {
            FUN_00740050();
          }
          local_144 = (int *******)0x4;
          (**(code **)(*piVar3 + 0xe0))();
        }
      }
      goto LAB_0094fe32;
    }
    ppppiVar6 = (int ****)ppppiVar6[2];
  } while( true );
joined_r0x0094e7fb:
  if (ppppiVar6 == (int ****)0x0) goto LAB_0094e80f;
  if (*ppppiVar6 == (int ***)0xa38) {
    local_144 = (int *******)(iVar10 + 0x1c);
    goto LAB_0094e832;
  }
  ppppiVar6 = (int ****)ppppiVar6[2];
  goto joined_r0x0094e7fb;
LAB_0094e80f:
  local_130 = (int *******)0x2d2d2d;
  local_b8 = (int *****)0x2d2d2d;
  local_b4 = 0;
  local_144 = (int *******)&local_b8;
LAB_0094e832:
  FUN_004b5a90(*(int *)(iVar15 + 0x188) + 0x48,param_1 + 6,DAT_012588e8 + 0xb0c,1);
  goto LAB_0094e84c;
code_r0x0094e868:
  ppppiVar6 = (int ****)ppppiVar6[2];
  if (ppppiVar6 == (int ****)0x0) goto LAB_0094ecab;
  goto LAB_0094e860;
code_r0x0094f080:
  ppppiVar6 = (int ****)ppppiVar6[2];
  if (ppppiVar6 == (int ****)0x0) goto LAB_0094f1d3;
  goto LAB_0094f078;
code_r0x0094f26d:
  ppppiVar6 = (int ****)ppppiVar6[2];
  if (ppppiVar6 == (int ****)0x0) goto LAB_0094f3c2;
  goto LAB_0094f265;
code_r0x0094f3db:
  ppppiVar6 = (int ****)ppppiVar6[2];
  if (ppppiVar6 == (int ****)0x0) goto LAB_0094f52e;
  goto LAB_0094f3d3;
code_r0x0094f548:
  ppppiVar6 = (int ****)ppppiVar6[2];
  if (ppppiVar6 == (int ****)0x0) goto LAB_0094f8c8;
  goto LAB_0094f540;
code_r0x0094fa48:
  ppppiVar6 = (int ****)ppppiVar6[2];
  if (ppppiVar6 == (int ****)0x0) goto LAB_0094fd21;
  goto LAB_0094fa40;
}

