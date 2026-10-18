// FUN_00417030 @ 00417030 body=[[00417030, 00417141] [00417145, 004171ec] [004171f0, 004172ec] [004172f0, 00417324] [00417328, 00417352] [00417356, 00417380] [00417384, 004173ae] [004173b2, 004173e4] [004173e8, 00417567] [0041756b, 00417691] [00417695, 004176cd] [004176d1, 0041776c] [00417770, 00417869] [0041786d, 004178a1] [004178a5, 004178cf] [004178d3, 004178fd] [00417901, 0041792b] [0041792f, 0041795b] [0041795f, 004179e8] [004179ec, 00417ade] [00417ae2, 00417bbc] [00417bc0, 00417c31] [00417c35, 00417ca4] [00417cb0, 00417d0b] [00417d16, 00417d2a] [00417d32, 00417d79] [00417d80, 00417db6] [00417dba, 00417f4a] [00417f4e, 00417f7d] [00417f81, 00417fab] [00417faf, 00417fd9] [00417fdd, 00418007] [0041800b, 0041802f] [00418033, 00418089] [0041808d, 004181b7] [004181bb, 004181de] [004181e7, 0041828e] [00418292, 004182ac] [004182b0, 004182c6]]


/* WARNING: Removing unreachable block (ram,0x00417a98) */
/* WARNING: Removing unreachable block (ram,0x00417522) */
/* WARNING: Removing unreachable block (ram,0x004174c7) */
/* WARNING: Removing unreachable block (ram,0x00417a37) */
/* WARNING: Removing unreachable block (ram,0x00417a3b) */
/* WARNING: Type propagation algorithm not settling */

void FUN_00417030(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6,int param_7)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  char *pcVar11;
  int iVar12;
  undefined4 *******pppppppuVar13;
  int *piVar14;
  char *pcVar15;
  int *piVar16;
  undefined4 *puVar17;
  bool bVar18;
  int local_31c;
  int local_318;
  int local_310;
  int local_30c;
  undefined4 *local_304;
  int *local_2f8;
  int local_2f4;
  int local_2f0;
  uint local_2e8;
  uint uStack_2e4;
  undefined4 *******local_2d8;
  uint local_2d4;
  int local_2cc;
  uint local_2c8;
  uint local_2c4;
  undefined4 local_2c0;
  undefined4 local_2b8;
  uint local_2b4;
  int *local_2ac;
  int *local_2a8;
  undefined4 local_2a4;
  undefined4 local_29c;
  uint local_298;
  uint local_290 [4];
  undefined4 local_280;
  uint local_27c;
  uint local_274 [4];
  undefined4 local_264;
  uint local_260;
  uint local_258 [4];
  undefined4 local_248;
  uint local_244;
  uint local_23c;
  undefined4 local_238;
  undefined4 local_234;
  undefined4 local_22c;
  uint local_228;
  int local_220;
  int local_21c;
  int local_218;
  uint local_214;
  undefined4 local_204;
  uint local_200;
  uint local_1f8;
  undefined4 local_1e8;
  uint local_1e4;
  uint local_1dc;
  undefined4 local_1cc;
  uint local_1c8;
  uint local_1c0 [4];
  undefined4 local_1b0;
  uint local_1ac;
  uint local_1a4;
  undefined4 local_194;
  uint local_190;
  undefined4 local_188 [5];
  uint local_174;
  uint local_168;
  undefined4 local_158;
  uint local_154;
  uint local_14c;
  undefined4 local_13c;
  uint local_138;
  uint local_130;
  undefined4 local_120;
  uint local_11c;
  uint local_114;
  undefined4 local_104;
  uint local_100;
  char local_f8 [136];
  undefined **appuStack_70 [19];
  void *pvStack_24;
  undefined1 uStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined1 local_c;
  undefined3 uStack_b;
  
  puStack_10 = &LAB_00b5c60c;
  pvStack_14 = ExceptionList;
  local_304 = (undefined4 *)0x0;
  local_c = 0;
  uStack_b = 0;
  ExceptionList = &pvStack_14;
  if (DAT_01268284 == 0) {
    ExceptionList = &pvStack_14;
    local_2cc = FUN_00aae9af(0x1c);
    local_c = 1;
    if (local_2cc == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_008b0060();
    }
    local_c = 0;
    FUN_007e7840(uVar5);
  }
  piVar14 = (int *)(DAT_01268284 + 0xc);
  iVar6 = *(int *)(DAT_01268284 + 0x10) - *(int *)(DAT_01268284 + 0xc) >> 2;
  local_31c = 0;
  if (0 < iVar6) {
    do {
      iVar10 = *(int *)(*piVar14 + local_31c * 4);
      local_2b4 = 0xf;
      local_2b8 = 0;
      local_2c8 = local_2c8 & 0xffffff00;
      FUN_00409350("_house_",7);
      pbVar9 = (byte *)(iVar10 + 0xc);
      local_c = 2;
      FUN_00988f20(&local_2c8);
      local_c = 4;
      if (0xf < local_2b4) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_2c8);
      }
      local_2b4 = 0xf;
      local_2b8 = 0;
      local_2c8 = local_2c8 & 0xffffff00;
      local_30c = 0;
      iVar8 = param_7;
      if (0 < param_6) {
        do {
          piVar16 = (int *)0x0;
          if (0 < iVar8) {
            do {
              local_c = 4;
              local_1ac = 0xf;
              local_1b0 = 0;
              local_1c0[0] = local_1c0[0] & 0xffffff00;
              FUN_00409350(&DAT_00defd44,1);
              local_298 = 0xf;
              local_29c = 0;
              local_2ac = (int *)((uint)local_2ac & 0xffffff00);
              piVar16 = (int *)((int)piVar16 + 1);
              local_c = 6;
              pcVar7 = __itoa((int)piVar16,(char *)local_188,10);
              pcVar15 = pcVar7;
              do {
                cVar1 = *pcVar15;
                pcVar15 = pcVar15 + 1;
              } while (cVar1 != '\0');
              FUN_00409350(pcVar7,(int)pcVar15 - (int)(pcVar7 + 1));
              local_228 = 0xf;
              local_22c = 0;
              local_23c = local_23c & 0xffffff00;
              local_c = 8;
              pcVar7 = __itoa(local_30c + 1,(char *)local_188,10);
              pcVar15 = pcVar7;
              do {
                cVar1 = *pcVar15;
                pcVar15 = pcVar15 + 1;
              } while (cVar1 != '\0');
              FUN_00409350(pcVar7,(int)pcVar15 - (int)(pcVar7 + 1));
              local_c = 9;
              FUN_00988f20(&local_23c);
              local_c = 10;
              FUN_00988f20(local_1c0);
              local_c = 0xb;
              uVar5 = FUN_00988f20(&local_2ac);
              local_c = 0xc;
              iVar8 = FUN_005c2ad0(uVar5);
              if (0xf < local_100) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b(local_114);
              }
              local_100 = 0xf;
              local_104 = 0;
              local_114 = local_114 & 0xffffff00;
              if (0xf < local_138) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b(local_14c);
              }
              local_138 = 0xf;
              local_13c = 0;
              local_14c = local_14c & 0xffffff00;
              if (0xf < local_11c) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b(local_130);
              }
              local_11c = 0xf;
              local_120 = 0;
              local_130 = local_130 & 0xffffff00;
              if (0xf < local_228) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b(local_23c);
              }
              local_228 = 0xf;
              local_22c = 0;
              local_23c = local_23c & 0xffffff00;
              if (0xf < local_298) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b(local_2ac);
              }
              local_c = 4;
              local_298 = 0xf;
              local_29c = 0;
              local_2ac = (int *)((uint)local_2ac & 0xffffff00);
              if (0xf < local_1ac) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b(local_1c0[0]);
              }
              local_1ac = 0xf;
              local_1b0 = 0;
              local_1c0[0] = local_1c0[0] & 0xffffff00;
              local_2f8 = piVar16;
              if (iVar8 == 0) goto LAB_0041754a;
              iVar8 = param_7;
            } while ((int)piVar16 < param_7);
          }
          local_30c = local_30c + 1;
        } while (local_30c < param_6);
      }
      local_c = 4;
      FUN_00a840b0();
      if (0xf < *(uint *)(iVar10 + 0x20)) {
        pbVar9 = *(byte **)pbVar9;
      }
      pcVar15 = "Generic";
      do {
        bVar2 = *pbVar9;
        bVar18 = bVar2 < (byte)*pcVar15;
        if (bVar2 != *pcVar15) {
LAB_00417470:
          iVar10 = (1 - (uint)bVar18) - (uint)(bVar18 != 0);
          goto LAB_00417475;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar9[1];
        bVar18 = bVar2 < (byte)pcVar15[1];
        if (bVar2 != pcVar15[1]) goto LAB_00417470;
        pbVar9 = pbVar9 + 2;
        pcVar15 = pcVar15 + 2;
      } while (bVar2 != 0);
      iVar10 = 0;
LAB_00417475:
      puVar17 = &param_5;
      if (iVar10 != 0) {
        puVar17 = &param_4;
      }
      if (puVar17 < local_304) {
        if (local_304 == (undefined4 *)0x0) {
          FUN_004bf300(1);
        }
        else {
          *local_304 = *(undefined4 *)(((int)puVar17 >> 2) * 4);
        }
      }
      else if (local_304 == (undefined4 *)0x0) {
        FUN_004bf300(1);
      }
      else {
        *local_304 = *puVar17;
      }
      local_304 = local_304 + 1;
LAB_0041754a:
      local_c = 0;
      if (0xf < local_154) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_168);
      }
      local_31c = local_31c + 1;
      local_154 = 0xf;
      local_158 = 0;
      local_168 = local_168 & 0xffffff00;
    } while (local_31c < iVar6);
  }
  iVar10 = DAT_012588e8;
  iVar6 = *DAT_012587e4;
  local_318 = DAT_012588e8;
  local_2f4 = 0;
  if (0 < iVar6) {
    do {
      iVar8 = *(int *)(*(int *)(iVar10 + 0xadc) + local_2f4 * 4);
      pcVar15 = (char *)(iVar8 + 0x1c);
      if ((*(int *)(iVar8 + 0x20) != 0) &&
         (((*pcVar15 != 'R' || (*(char *)(iVar8 + 0x1d) != 'E')) || (*(char *)(iVar8 + 0x1e) != 'B')
          ))) {
        local_260 = 0xf;
        local_264 = 0;
        local_274[0] = local_274[0] & 0xffffff00;
        FUN_00409350("_house_",7);
        local_c = 0xd;
        local_190 = 0xf;
        local_194 = 0;
        local_1a4 = local_1a4 & 0xffffff00;
        pcVar7 = pcVar15;
        do {
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        FUN_00409350(pcVar15,(int)pcVar7 - (iVar8 + 0x1d));
        local_c = 0xe;
        FUN_00988f20(local_274);
        if (0xf < local_190) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_1a4);
        }
        local_190 = 0xf;
        local_194 = 0;
        local_1a4 = local_1a4 & 0xffffff00;
        local_c = 0x11;
        if (0xf < local_260) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_274[0]);
        }
        local_260 = 0xf;
        local_264 = 0;
        local_274[0] = local_274[0] & 0xffffff00;
        local_31c = 0;
        if (0 < param_6) {
          do {
            piVar14 = (int *)0x0;
            if (0 < param_7) {
              do {
                local_c = 0x11;
                local_2d4 = 0xf;
                local_2d8 = (undefined4 *******)0x0;
                local_2e8 = local_2e8 & 0xffffff00;
                FUN_00409350(&DAT_00defd44,1);
                local_244 = 0xf;
                local_248 = 0;
                local_258[0] = local_258[0] & 0xffffff00;
                piVar14 = (int *)((int)piVar14 + 1);
                local_c = 0x13;
                pcVar11 = __itoa((int)piVar14,local_f8,10);
                pcVar7 = pcVar11;
                do {
                  cVar1 = *pcVar7;
                  pcVar7 = pcVar7 + 1;
                } while (cVar1 != '\0');
                FUN_00409350(pcVar11,(int)pcVar7 - (int)(pcVar11 + 1));
                local_27c = 0xf;
                local_280 = 0;
                local_290[0] = local_290[0] & 0xffffff00;
                local_c = 0x15;
                pcVar11 = __itoa(local_31c + 1,local_f8,10);
                pcVar7 = pcVar11;
                do {
                  cVar1 = *pcVar7;
                  pcVar7 = pcVar7 + 1;
                } while (cVar1 != '\0');
                FUN_00409350(pcVar11,(int)pcVar7 - (int)(pcVar11 + 1));
                local_c = 0x16;
                FUN_00988f20(local_290);
                local_c = 0x17;
                FUN_00988f20(&local_2e8);
                local_c = 0x18;
                uVar5 = FUN_00988f20(local_258);
                local_c = 0x19;
                iVar12 = FUN_005c2ad0(uVar5);
                if (0xf < local_1e4) {
                    /* WARNING: Subroutine does not return */
                  FUN_00aae91b(local_1f8);
                }
                local_1e4 = 0xf;
                local_1e8 = 0;
                local_1f8 = local_1f8 & 0xffffff00;
                if (0xf < local_1c8) {
                    /* WARNING: Subroutine does not return */
                  FUN_00aae91b(local_1dc);
                }
                local_1c8 = 0xf;
                local_1cc = 0;
                local_1dc = local_1dc & 0xffffff00;
                if (0xf < local_200) {
                    /* WARNING: Subroutine does not return */
                  FUN_00aae91b(local_214);
                }
                local_200 = 0xf;
                local_204 = 0;
                local_214 = local_214 & 0xffffff00;
                if (0xf < local_27c) {
                    /* WARNING: Subroutine does not return */
                  FUN_00aae91b(local_290[0]);
                }
                local_27c = 0xf;
                local_280 = 0;
                local_290[0] = local_290[0] & 0xffffff00;
                if (0xf < local_244) {
                    /* WARNING: Subroutine does not return */
                  FUN_00aae91b(local_258[0]);
                }
                local_c = 0x11;
                local_244 = 0xf;
                local_248 = 0;
                local_258[0] = local_258[0] & 0xffffff00;
                if (0xf < local_2d4) {
                    /* WARNING: Subroutine does not return */
                  FUN_00aae91b(local_2e8);
                }
                local_2f8 = piVar14;
                if (iVar12 == 0) goto LAB_00417ac1;
              } while ((int)piVar14 < param_7);
            }
            local_31c = local_31c + 1;
          } while (local_31c < param_6);
        }
        local_c = 0x11;
        local_2d4 = 0xf;
        local_2d8 = (undefined4 *******)0x0;
        local_2e8 = local_2e8 & 0xffffff00;
        pcVar7 = pcVar15;
        do {
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        FUN_00409350(pcVar15,(int)pcVar7 - (iVar8 + 0x1d));
        local_c = 0x1a;
        FUN_00a840b0();
        local_c = 0x11;
        if (0xf < local_2d4) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_2e8);
        }
        if (&param_3 < local_304) {
          if (local_304 == (undefined4 *)0x0) {
            FUN_004bf300(1);
          }
          else {
            *local_304 = *(undefined4 *)(((int)&param_3 >> 2) * 4);
          }
        }
        else if (local_304 == (undefined4 *)0x0) {
          FUN_004bf300(1);
        }
        else {
          *local_304 = param_3;
        }
        local_304 = local_304 + 1;
LAB_00417ac1:
        local_c = 0;
        if (0xf < local_174) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_188[0]);
        }
      }
      local_2f4 = local_2f4 + 1;
    } while (local_2f4 < iVar6);
  }
  iVar6 = (param_1[9] - param_1[8]) / 0x1c;
  local_2cc = iVar6;
  if (iVar6 < 1) {
    local_2d4 = 0xf;
    local_2d8 = (undefined4 *******)0x0;
    local_2e8 = local_2e8 & 0xffffff00;
    FUN_00409350("citypool.cpp",0xc);
    local_c = 0x2d;
    uVar5 = FUN_004015b0(&local_2e8,0x84,0x10004);
    _local_c = CONCAT31(uStack_b,0x2e);
    FUN_00987d50(uVar5,"CCityPool::Initialize() - Missing city cultures defined.",0x38,0);
    FUN_00401280(uVar5);
    uStack_1c = 0x2d;
    FUN_00987ac0(appuStack_70);
    appuStack_70[0] = std::ios_base::vftable;
    FUN_00aad52d(appuStack_70);
    if (0xf < uStack_2e4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2f8);
    }
    param_1[0xd] = 0;
    param_1[0xc] = 0;
  }
  else {
    param_1[0xd] = param_7;
    param_1[0xc] = param_6;
    local_2f0 = 0;
    FUN_00418b50(iVar6);
    local_2f4 = 0;
    uVar4 = local_c;
    if (0 < iVar6) {
      do {
        local_c = uVar4;
        local_318 = *(int *)(local_2f4 * 4);
        local_244 = 0xf;
        local_248 = 0;
        local_258[0] = local_258[0] & 0xffffff00;
        FUN_00409350("_house_",7);
        local_c = 0x1b;
        FUN_00988f20(local_258);
        if (0xf < local_244) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_258[0]);
        }
        local_244 = 0xf;
        local_248 = 0;
        local_258[0] = local_258[0] & 0xffffff00;
        local_23c = 0;
        local_238 = 0;
        local_234 = 0;
        local_c = 0x1e;
        FUN_004190d0();
        uVar3 = local_23c;
        iVar6 = param_7;
        _local_c = CONCAT31(uStack_b,0x1d);
        if (local_23c != 0) {
          FUN_00419800(local_238,local_2cc);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(uVar3);
        }
        piVar14 = (int *)(((param_1[1] - *param_1 & 0xfffffff0U) - 0x10) + *param_1);
        local_23c = 0;
        local_238 = 0;
        local_234 = 0;
        FUN_00418c20(param_7);
        local_310 = 0;
        if (0 < iVar6) {
          iVar6 = iVar6 + 1;
          local_318 = local_318 / iVar6;
          local_21c = -local_318;
          local_220 = -(local_318 * param_6);
          local_31c = local_318 * iVar6 * param_6;
          do {
            local_2ac = (int *)0x0;
            local_2a8 = (int *)0x0;
            local_2a4 = 0;
            local_c = 0x1f;
            FUN_004191a0();
            iVar6 = param_6;
            _local_c = CONCAT31(uStack_b,0x1d);
            piVar16 = local_2ac;
            if (local_2ac != (int *)0x0) {
              while( true ) {
                if (piVar16 == local_2a8) {
                    /* WARNING: Subroutine does not return */
                  FUN_00aae91b(local_2ac);
                }
                if (*piVar16 != 0) break;
                *piVar16 = 0;
                piVar16[1] = 0;
                piVar16[2] = 0;
                piVar16 = piVar16 + 5;
              }
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(*piVar16);
            }
            iVar10 = *piVar14;
            local_2f8 = (int *)(((piVar14[1] - iVar10 & 0xfffffff0U) - 0x10) + iVar10);
            local_2ac = (int *)0x0;
            local_2a8 = (int *)0x0;
            local_2a4 = 0;
            FUN_00418cf0(param_6);
            local_318 = 0;
            if (0 < iVar6) {
              local_2f0 = local_2f0 + local_31c;
              do {
                local_2c8 = 0;
                local_2c4 = 0;
                local_2c0 = 0;
                local_c = 0x20;
                FUN_00419250();
                local_c = 0x1d;
                if (local_2c8 != 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00aae91b(local_2c8);
                }
                local_218 = *local_2f8 + -0x14 + ((local_2f8[1] - *local_2f8) / 0x14) * 0x14;
                local_2d4 = 0xf;
                local_2d8 = (undefined4 *******)0x0;
                local_2e8 = local_2e8 & 0xffffff00;
                FUN_00409350(&DAT_00defd44,1);
                local_260 = 0xf;
                local_264 = 0;
                local_274[0] = local_274[0] & 0xffffff00;
                local_318 = local_318 + 1;
                local_c = 0x22;
                pcVar7 = __itoa(local_318,local_f8,10);
                pcVar15 = pcVar7;
                do {
                  cVar1 = *pcVar15;
                  pcVar15 = pcVar15 + 1;
                } while (cVar1 != '\0');
                FUN_00409350(pcVar7,(int)pcVar15 - (int)(pcVar7 + 1));
                local_27c = 0xf;
                local_280 = 0;
                local_290[0] = local_290[0] & 0xffffff00;
                local_c = 0x24;
                pcVar7 = __itoa(local_310 + 1,local_f8,10);
                pcVar15 = pcVar7;
                do {
                  cVar1 = *pcVar15;
                  pcVar15 = pcVar15 + 1;
                } while (cVar1 != '\0');
                FUN_00409350(pcVar7,(int)pcVar15 - (int)(pcVar7 + 1));
                local_c = 0x25;
                FUN_00988f20(local_290);
                local_c = 0x26;
                FUN_00988f20(&local_2e8);
                local_c = 0x27;
                uVar5 = FUN_00988f20(local_274);
                _local_c = CONCAT31(uStack_b,0x28);
                FUN_00418780(param_2,uVar5);
                if (0xf < local_200) {
                    /* WARNING: Subroutine does not return */
                  FUN_00aae91b(local_214);
                }
                local_200 = 0xf;
                local_204 = 0;
                local_214 = local_214 & 0xffffff00;
                if (0xf < local_1c8) {
                    /* WARNING: Subroutine does not return */
                  FUN_00aae91b(local_1dc);
                }
                local_1c8 = 0xf;
                local_1cc = 0;
                local_1dc = local_1dc & 0xffffff00;
                if (0xf < local_1e4) {
                    /* WARNING: Subroutine does not return */
                  FUN_00aae91b(local_1f8);
                }
                local_1e4 = 0xf;
                local_1e8 = 0;
                local_1f8 = local_1f8 & 0xffffff00;
                if (0xf < local_27c) {
                    /* WARNING: Subroutine does not return */
                  FUN_00aae91b(local_290[0]);
                }
                local_27c = 0xf;
                local_280 = 0;
                local_290[0] = local_290[0] & 0xffffff00;
                if (0xf < local_260) {
                    /* WARNING: Subroutine does not return */
                  FUN_00aae91b(local_274[0]);
                }
                local_260 = 0xf;
                local_264 = 0;
                local_274[0] = local_274[0] & 0xffffff00;
                if (0xf < local_2d4) {
                    /* WARNING: Subroutine does not return */
                  FUN_00aae91b(local_2e8);
                }
              } while (local_318 < param_6);
            }
            local_31c = local_31c + local_220;
            local_310 = local_310 + 1;
          } while (local_310 < param_7);
        }
        local_c = 0;
        uVar4 = local_c;
        local_c = 0;
        if (0xf < local_174) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_188[0]);
        }
        local_2f4 = local_2f4 + 1;
      } while (local_2f4 < local_2cc);
    }
    local_2d4 = 0xf;
    local_2d8 = (undefined4 *******)0x0;
    local_2e8 = local_2e8 & 0xffffff00;
    FUN_00409350("citypool.cpp",0xc);
    local_2b4 = 0xf;
    local_2b8 = 0;
    local_2c8 = local_2c8 & 0xffffff00;
    local_c = 0x2a;
    pcVar7 = __itoa(local_2f0,local_f8,10);
    pcVar15 = pcVar7;
    do {
      cVar1 = *pcVar15;
      pcVar15 = pcVar15 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(pcVar7,(int)pcVar15 - (int)(pcVar7 + 1));
    local_c = 0x2b;
    uVar5 = FUN_004015b0(&local_2e8,0x80,0x10002);
    _local_c = CONCAT31(uStack_b,0x2c);
    FUN_00987d50(uVar5,"Initialized cities with total ",0x1e,0);
    pppppppuVar13 = local_2d8;
    if (local_2c4 < 0x10) {
      pppppppuVar13 = &local_2d8;
    }
    uVar5 = FUN_00418e30(uVar5,pppppppuVar13);
    uVar5 = FUN_00418e30(uVar5," meshes of typical buildings.");
    FUN_00401280(uVar5);
    uStack_1c = 0x2b;
    FUN_00987ac0(appuStack_70);
    appuStack_70[0] = std::ios_base::vftable;
    FUN_00aad52d(appuStack_70);
    if (0xf < local_2c4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2d8);
    }
    local_2c4 = 0xf;
    local_2c8 = 0;
    local_2d8 = (undefined4 *******)((uint)local_2d8 & 0xffffff00);
    if (0xf < uStack_2e4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2f8);
    }
  }
  *(undefined1 *)(param_1 + 0xe) = 1;
  if (local_318 == 0) {
    ExceptionList = pvStack_24;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_318);
}

