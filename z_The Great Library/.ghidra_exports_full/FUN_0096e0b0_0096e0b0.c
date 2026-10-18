// FUN_0096e0b0 @ 0096e0b0 body=[[0096e0b0, 0096e1ec] [0096e1f0, 0096e284] [0096e288, 0096e3b8] [0096e3bc, 0096e620] [0096e624, 0096e741] [0096e745, 0096e776] [0096e77a, 0096e79b] [0096e79f, 0096e7ba] [0096e7c3, 0096e89a] [0096e89e, 0096e8cf] [0096e8d3, 0096e8f7] [0096e8fb, 0096e916] [0096e91f, 0096e9ac] [0096e9b0, 0096eb25] [0096eb29, 0096eb54] [0096eb5d, 0096ebdd] [0096ebe1, 0096ec7f] [0096ec83, 0096ed58] [0096ed60, 0096eedc] [0096eee0, 0096f01a] [0096f01e, 0096f04b] [0096f051, 0096f083] [0096f08c, 0096f12d] [0096f131, 0096f150] [0096f154, 0096f177] [0096f17b, 0096f19e] [0096f1a2, 0096f1b8] [0096f1bc, 0096f1eb] [0096f1ef, 0096f21e] [0096f222, 0096f251] [0096f255, 0096f284] [0096f288, 0096f2b7] [0096f2bb, 0096f2d1]]


/* WARNING: Type propagation algorithm not settling */

void FUN_0096e0b0(int param_1)

{
  int **ppiVar1;
  int **ppiVar2;
  int iVar3;
  undefined1 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *******pppppppuVar9;
  undefined4 *puVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int *piVar14;
  uint uVar15;
  undefined4 extraout_ECX;
  int iStack_294;
  int *local_290;
  int local_28c;
  undefined4 *local_288;
  int *local_284;
  char local_27d;
  undefined4 *local_27c;
  int local_278;
  undefined4 local_274;
  undefined4 *local_26c;
  uint local_268 [4];
  undefined4 local_258;
  uint local_254;
  uint uStack_250;
  uint local_24c [3];
  undefined4 uStack_240;
  uint local_23c;
  uint local_238;
  uint uStack_234;
  uint local_230;
  undefined4 uStack_224;
  uint local_220;
  uint local_21c;
  undefined4 *local_214;
  undefined4 *local_210;
  undefined4 local_20c;
  undefined4 *local_204;
  undefined4 *local_200;
  undefined4 local_1fc;
  undefined4 *local_1f4;
  undefined4 *local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e4;
  uint local_1e0;
  uint local_1d8 [4];
  undefined4 local_1c8;
  uint local_1c4;
  int *local_1bc;
  uint local_1b8 [4];
  undefined4 local_1a8;
  uint local_1a4;
  uint local_19c [4];
  undefined4 local_18c;
  uint local_188;
  undefined4 *******local_180 [4];
  undefined4 uStack_170;
  uint local_16c;
  undefined4 *******local_164 [4];
  undefined4 uStack_154;
  uint local_150;
  uint local_148;
  undefined4 uStack_138;
  uint uStack_134;
  undefined4 local_12c [5];
  uint uStack_118;
  undefined1 local_110;
  undefined4 local_100;
  undefined4 local_fc;
  undefined1 local_f4;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined **appuStack_64 [20];
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b5e23a;
  pvStack_14 = ExceptionList;
  local_288 = (undefined4 *)0x0;
  ExceptionList = &pvStack_14;
  FUN_004367c0();
  local_c = 0;
  FUN_00436780();
  iVar11 = *(int *)(DAT_012586e0 + 0x44);
  local_188 = 0xf;
  local_18c = 0;
  local_19c[0] = local_19c[0] & 0xffffff00;
  local_c._0_1_ = 2;
  local_1a4 = 0xf;
  local_1a8 = 0;
  local_1b8[0] = local_1b8[0] & 0xffffff00;
  FUN_00409350("/pop_types.txt",0xe);
  local_c = CONCAT31(local_c._1_3_,3);
  if (iVar11 == 1) {
    FUN_00408ed0(local_12c,0,0xffffffff);
  }
  else if (iVar11 == 2) {
    pcVar5 = (char *)FUN_00988f20(local_1b8);
    local_288 = (undefined4 *)0x1;
    if (0xf < *(uint *)(pcVar5 + 0x14)) {
      pcVar5 = *(char **)pcVar5;
    }
    if ((pcVar5 != (char *)0x0) && (*pcVar5 != '\0')) {
      iVar11 = PHYSFS_exists(pcVar5);
      local_27d = '\x01';
      if (iVar11 != 0) goto LAB_0096e1ce;
    }
  }
  local_27d = '\0';
LAB_0096e1ce:
  if ((local_288 != (undefined4 *)0x0) && (local_288 = (undefined4 *)0x0, 0xf < local_21c)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_230);
  }
  if (local_27d == '\0') {
    uVar6 = FUN_00988f20(local_1b8);
    local_c._0_1_ = 5;
    FUN_00408ed0(uVar6,0,0xffffffff);
  }
  else {
    uVar6 = FUN_00988f20(local_1b8);
    local_c._0_1_ = 4;
    FUN_00408ed0(uVar6,0,0xffffffff);
  }
  if (0xf < local_21c) {
    local_c._0_1_ = 3;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_230);
  }
  local_c._0_1_ = 3;
  puVar7 = (undefined4 *)FUN_00aae9af(0x360);
  local_c._0_1_ = 6;
  local_26c = puVar7;
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    local_1e0 = 0xf;
    local_1e4 = 0;
    local_1f4 = (undefined4 *)((uint)local_1f4 & 0xffffff00);
    FUN_00409350("UNNAMED_SESSION",0xf);
    local_c = CONCAT31(local_c._1_3_,7);
    local_288 = (undefined4 *)((uint)local_288 | 2);
    puVar8 = (undefined4 *)FUN_00aae9af(0x114);
    local_c = 8;
    if (puVar8 == (undefined4 *)0x0) {
      puVar8 = (undefined4 *)0x0;
    }
    else {
      FUN_0098ffc0(local_19c);
      *puVar8 = &PTR_FUN_00e37c3c;
    }
    *puVar7 = &PTR_FUN_00e38524;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    *(undefined1 *)(puVar7 + 4) = 0;
    local_c = 9;
    puVar7[7] = puVar8;
    *(undefined1 *)(puVar7 + 5) = 0;
    puVar7[0xd0] = 0xf;
    puVar7[0xcf] = 0;
    *(undefined1 *)(puVar7 + 0xcb) = 0;
    FUN_00408ed0(&local_1f4,0,0xffffffff);
    puVar7[0xd2] = 0;
    puVar7[0xd3] = 0;
    puVar7[0xd4] = 0;
    *(undefined1 *)(puVar7 + 0xd6) = 1;
    puVar7[0xd7] = 0;
  }
  local_c = 3;
  if (((uint)local_288 & 2) != 0) {
    local_288 = (undefined4 *)((uint)local_288 & 0xfffffffd);
    if (0xf < local_1e0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_1f4);
    }
    local_1e0 = 0xf;
    local_1e4 = 0;
    local_1f4 = (undefined4 *)((uint)local_1f4 & 0xffffff00);
  }
  FUN_0096dc40(param_1,puVar7);
  if (puVar7 != (undefined4 *)0x0) {
    (**(code **)*puVar7)(1);
  }
  local_e0 = 0xf;
  local_e4 = 0;
  local_f4 = 0;
  local_fc = 0xf;
  local_100 = 0;
  local_110 = 0;
  local_c._0_1_ = 0xc;
  FUN_004367c0();
  local_c._0_1_ = 0xd;
  FUN_00436780();
  local_c._0_1_ = 0xe;
  local_284 = *(int **)(DAT_012586e0 + 0x78);
  if (DAT_01258a2c == 0) {
    local_26c = (undefined4 *)FUN_00aae9af(0x3f0);
    local_c._0_1_ = 0xf;
    if (local_26c == (undefined4 *)0x0) {
      DAT_01258a2c = 0;
    }
    else {
      DAT_01258a2c = FUN_0096bbf0();
    }
  }
  iVar11 = DAT_01258a2c;
  local_c._0_1_ = 0xe;
  FUN_0068f390();
  FUN_008b2480(iVar11);
  piVar14 = local_284;
  local_28c = 1;
  local_214 = (undefined4 *)0x0;
  local_210 = (undefined4 *)0x0;
  local_20c = 0;
  puVar7 = (undefined4 *)0x0;
  local_1f4 = (undefined4 *)0x0;
  local_1f0 = (undefined4 *)0x0;
  local_1ec = 0;
  local_204 = (undefined4 *)0x0;
  local_200 = (undefined4 *)0x0;
  local_1fc = 0;
  local_c._0_1_ = 0x12;
  if (local_284 != (int *)0x0) {
    pppppppuVar9 = local_180[0];
    if (local_16c < 0x10) {
      pppppppuVar9 = local_180;
    }
    FUN_00992240(pppppppuVar9,&local_204,&DAT_00dfa554);
  }
  if (piVar14 != (int *)0x1) {
    local_27c = (undefined4 *)0x0;
    local_278 = 0;
    local_274 = 0;
    local_c = CONCAT31(local_c._1_3_,0x13);
    pppppppuVar9 = local_164[0];
    if (local_150 < 0x10) {
      pppppppuVar9 = local_164;
    }
    FUN_00992240(pppppppuVar9,&local_27c,&DAT_00dfa554);
    local_290 = (int *)((local_278 - (int)local_27c) / 0x1c);
    puVar8 = local_27c;
    if (0 < (int)local_290) {
      do {
        puVar7 = local_200;
        puVar10 = (undefined4 *)FUN_0045c080(local_200,puVar8);
        if (puVar10 == puVar7) {
          FUN_00a840b0();
        }
        local_290 = (int *)((int)local_290 + -1);
        puVar7 = local_1f4;
        puVar8 = puVar8 + 7;
      } while (local_290 != (int *)0x0);
    }
    local_c._0_1_ = 0x12;
    if (local_27c != (undefined4 *)0x0) {
      FUN_00413860();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_27c);
    }
  }
  FUN_00419660(((int)local_200 - (int)local_204) / 0x1c + ((int)local_1f0 - (int)puVar7) / 0x1c);
  local_27c = puVar7;
  uVar4 = (undefined1)local_c;
  while ((local_c._0_1_ = uVar4, puVar7 = local_27c, local_1f4 <= local_27c &&
         (local_27c < local_1f0))) {
    local_27c = local_27c + 7;
    local_238 = 0xf;
    local_23c = 0;
    local_24c[0] = local_24c[0] & 0xffffff00;
    FUN_00408ed0(puVar7,0,0xffffffff);
    local_c._0_1_ = 0x14;
    local_254 = 0xf;
    local_258 = 0;
    local_268[0] = local_268[0] & 0xffffff00;
    FUN_00409350(&DAT_00dedc68,1);
    local_c._0_1_ = 0x15;
    FUN_00988f20(local_268);
    local_c._0_1_ = 0x16;
    FUN_00988f20(local_24c);
    local_c._0_1_ = 0x17;
    FUN_00a840b0();
    if (0xf < local_1c4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_1d8[0]);
    }
    local_1c4 = 0xf;
    local_1c8 = 0;
    local_1d8[0] = local_1d8[0] & 0xffffff00;
    if (0xf < local_21c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_230);
    }
    local_21c = 0xf;
    local_220 = 0;
    local_230 = local_230 & 0xffffff00;
    if (0xf < local_254) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_268[0]);
    }
    local_c._0_1_ = 0x12;
    uVar4 = (undefined1)local_c;
    local_c._0_1_ = 0x12;
    if (0xf < local_238) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_24c[0]);
    }
  }
  local_27c = local_204;
  uVar4 = (undefined1)local_c;
  while ((local_c._0_1_ = uVar4, puVar7 = local_27c, local_204 <= local_27c &&
         (local_27c < local_200))) {
    local_27c = local_27c + 7;
    local_254 = 0xf;
    local_258 = 0;
    local_268[0] = local_268[0] & 0xffffff00;
    FUN_00408ed0(puVar7,0,0xffffffff);
    local_c._0_1_ = 0x18;
    local_238 = 0xf;
    local_23c = 0;
    local_24c[0] = local_24c[0] & 0xffffff00;
    FUN_00409350(&DAT_00dedc68,1);
    local_c._0_1_ = 0x19;
    FUN_00988f20(local_24c);
    local_c._0_1_ = 0x1a;
    FUN_00988f20(local_268);
    local_c._0_1_ = 0x1b;
    FUN_00a840b0();
    if (0xf < local_21c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_230);
    }
    local_21c = 0xf;
    local_220 = 0;
    local_230 = local_230 & 0xffffff00;
    if (0xf < local_1c4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_1d8[0]);
    }
    local_1c4 = 0xf;
    local_1c8 = 0;
    local_1d8[0] = local_1d8[0] & 0xffffff00;
    if (0xf < local_238) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_24c[0]);
    }
    local_c._0_1_ = 0x12;
    uVar4 = (undefined1)local_c;
    local_c._0_1_ = 0x12;
    if (0xf < local_254) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_268[0]);
    }
  }
  local_27c = local_214;
  uVar4 = (undefined1)local_c;
  do {
    local_c._0_1_ = uVar4;
    puVar7 = local_27c;
    if ((local_27c < local_214) || (local_210 <= local_27c)) {
      local_290 = (int *)0x0;
      local_26c = (undefined4 *)(*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc) >> 2);
      if (0 < (int)local_26c) {
        do {
          if (DAT_0131bb34 == 0) {
            iVar11 = FUN_00aae9af(0x188);
            local_c._0_1_ = 0x1f;
            if (iVar11 == 0) {
              iVar11 = 0;
            }
            else {
              iVar11 = FUN_0041a160();
            }
            iVar13 = DAT_0131bb34;
            local_c = CONCAT31(local_c._1_3_,0x20);
            if ((iVar11 != DAT_0131bb34) && (DAT_0131bb34 != 0)) {
              FUN_0096dd80(DAT_0131bb34);
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(iVar13);
            }
            local_c._0_1_ = 0x12;
            DAT_0131bb34 = iVar11;
          }
          local_284 = (int *)(param_1 + 0xc);
          iVar11 = (int)local_290 * 4;
          FUN_0096fc30();
          if (DAT_0131bb34 == 0) {
            iVar13 = FUN_00aae9af(0x188);
            local_c._0_1_ = 0x21;
            if (iVar13 == 0) {
              iVar13 = 0;
            }
            else {
              iVar13 = FUN_0041a160();
            }
            iVar3 = DAT_0131bb34;
            local_c = CONCAT31(local_c._1_3_,0x22);
            local_1bc = (int *)0x0;
            if ((iVar13 != DAT_0131bb34) && (DAT_0131bb34 != 0)) {
              FUN_0096dd80(DAT_0131bb34);
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(iVar3);
            }
            local_c._0_1_ = 0x12;
            DAT_0131bb34 = iVar13;
          }
          FUN_0096fc30();
          local_28c = 0;
          if (0 < (*(int *)(*(int *)(*local_284 + iVar11) + 0xcc) -
                  *(int *)(*(int *)(*local_284 + iVar11) + 200)) / 0x30) {
            iVar13 = 0;
            do {
              *(undefined4 *)(*(int *)(*(int *)(*local_284 + iVar11) + 200) + 0x18 + iVar13) = 0;
              *(undefined4 *)(*(int *)(*(int *)(*local_284 + iVar11) + 0xd8) + 0x18 + iVar13) = 0;
              local_28c = local_28c + 1;
              iVar13 = iVar13 + 0x30;
            } while (local_28c <
                     (*(int *)(*(int *)(*local_284 + iVar11) + 0xcc) -
                     *(int *)(*(int *)(*local_284 + iVar11) + 200)) / 0x30);
          }
          local_290 = (int *)((int)local_290 + 1);
        } while ((int)local_290 < (int)local_26c);
      }
      local_27c = local_214;
      local_290 = (undefined4 *)0x4;
      uVar4 = (undefined1)local_c;
      while ((local_c._0_1_ = uVar4, puVar7 = local_27c, local_214 <= local_27c &&
             (local_27c < local_210))) {
        local_27c = local_27c + 7;
        local_1c4 = 0xf;
        local_1c8 = 0;
        local_1d8[0] = local_1d8[0] & 0xffffff00;
        FUN_00408ed0(puVar7,0,0xffffffff);
        local_c._0_1_ = 0x23;
        piVar14 = (int *)FUN_00aae9af(0x360);
        local_c._0_1_ = 0x24;
        local_1bc = piVar14;
        if (piVar14 == (int *)0x0) {
          local_284 = (int *)0x0;
        }
        else {
          local_254 = 0xf;
          local_258 = 0;
          local_268[0] = local_268[0] & 0xffffff00;
          FUN_00409350("UNNAMED_SESSION",0xf);
          local_c = CONCAT31(local_c._1_3_,0x25);
          local_288 = (undefined4 *)((uint)local_288 | 4);
          puVar7 = (undefined4 *)FUN_00aae9af(0x114);
          local_c = 0x26;
          local_26c = puVar7;
          if (puVar7 == (undefined4 *)0x0) {
            puVar7 = (undefined4 *)0x0;
          }
          else {
            FUN_0098ffc0(local_1d8);
            *puVar7 = &PTR_FUN_00e37c3c;
          }
          *piVar14 = (int)&PTR_FUN_00e38524;
          piVar14[1] = 0;
          piVar14[2] = 0;
          piVar14[3] = 0;
          *(undefined1 *)(piVar14 + 4) = 0;
          local_c = 0x27;
          *(undefined1 *)(piVar14 + 5) = 0;
          piVar14[7] = (int)puVar7;
          piVar14[0xd0] = 0xf;
          piVar14[0xcf] = 0;
          *(undefined1 *)(piVar14 + 0xcb) = 0;
          FUN_00408ed0(local_268,0,0xffffffff);
          piVar14[0xd2] = 0;
          piVar14[0xd3] = 0;
          piVar14[0xd4] = 0;
          *(undefined1 *)(piVar14 + 0xd6) = 1;
          piVar14[0xd7] = 0;
          local_284 = piVar14;
        }
        piVar14 = local_284;
        local_c = 0x23;
        if (((uint)local_288 & 4) != 0) {
          local_288 = (undefined4 *)((uint)local_288 & 0xfffffffb);
          if (0xf < local_254) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_268[0]);
          }
          local_254 = 0xf;
          local_258 = 0;
          local_268[0] = local_268[0] & 0xffffff00;
        }
        puVar7 = (undefined4 *)((int)local_290 + *(int *)(param_1 + 0xc));
        local_290 = local_290 + 1;
        (**(code **)(*(int *)*puVar7 + 0xc))(local_284);
        if (piVar14[3] != 0) {
          local_23c = 0xf;
          uStack_240 = 0;
          uStack_250 = uStack_250 & 0xffffff00;
          FUN_00409350("poptype.cpp",0xb);
          puStack_10._0_1_ = 0x29;
          local_290 = (int *)FUN_009a1320(&uStack_234);
          puStack_10._0_1_ = 0x2a;
          uVar6 = FUN_004015b0(&uStack_250,0x312,0x10004);
          puStack_10._0_1_ = 0x2b;
          iVar11 = *(int *)(param_1 + 0xc);
          FUN_00987d50(uVar6,"Error reading poptype ",0x16,0);
          uVar6 = FUN_0096f8b0(uVar6,*(undefined4 *)(iVar11 + iStack_294),extraout_ECX,&DAT_00ded950
                              );
          uVar6 = FUN_00418e30(uVar6);
          puVar7 = local_290;
          if (0xf < (uint)local_290[5]) {
            puVar7 = (undefined4 *)*local_290;
          }
          uVar6 = FUN_00418e30(uVar6,puVar7);
          FUN_00401280(uVar6);
          puStack_10._0_1_ = 0x2a;
          FUN_00987ac0(appuStack_64);
          appuStack_64[0] = std::ios_base::vftable;
          FUN_00aad52d(appuStack_64);
          if (0xf < local_220) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(uStack_234);
          }
          puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,0x23);
          local_220 = 0xf;
          uStack_224 = 0;
          uStack_234 = uStack_234 & 0xffffff00;
          if (0xf < local_23c) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(uStack_250);
          }
        }
        (**(code **)*local_288)(1);
        local_c._0_1_ = 0x12;
        uVar4 = (undefined1)local_c;
        local_c._0_1_ = 0x12;
        if (0xf < local_1c4) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_1d8[0]);
        }
      }
      *(undefined4 *)(param_1 + 0x17c) = 0;
      *(undefined4 *)(param_1 + 0x180) = 0;
      *(undefined4 *)(param_1 + 0x184) = 0;
      iVar11 = 1;
      if (4 < (int)(*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc) & 0xfffffffcU)) {
        iVar13 = *(int *)(param_1 + 0xc);
        do {
          FUN_0096f5b0(*(undefined4 *)(iVar13 + iVar11 * 4));
          iVar13 = *(int *)(param_1 + 0xc);
          if (*(char *)(*(int *)(iVar13 + iVar11 * 4) + 0x3db) != '\0') {
            *(int *)(param_1 + 0x17c) = iVar11;
          }
          if (*(char *)(*(int *)(iVar13 + iVar11 * 4) + 0x3da) != '\0') {
            *(int *)(param_1 + 0x180) = iVar11;
          }
          if (*(char *)(*(int *)(iVar13 + iVar11 * 4) + 0x39c) != '\0') {
            *(int *)(param_1 + 0x184) = iVar11;
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 < *(int *)(param_1 + 0x10) - iVar13 >> 2);
      }
      puVar10 = local_1f4;
      puVar8 = local_214;
      puVar7 = local_204;
      if (local_204 != (undefined4 *)0x0) {
        while( true ) {
          if (puVar7 == local_200) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_204);
          }
          if (0xf < (uint)puVar7[5]) break;
          puVar7[5] = 0xf;
          puVar7[4] = 0;
          *(undefined1 *)puVar7 = 0;
          puVar7 = puVar7 + 7;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(*puVar7);
      }
      if (local_1f4 != (undefined4 *)0x0) {
        FUN_00413860();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(puVar10);
      }
      if (local_214 != (undefined4 *)0x0) {
        FUN_00413860();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(puVar8);
      }
      if (0xf < local_150) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_164[0]);
      }
      local_150 = 0xf;
      uStack_154 = 0;
      local_164[0] = (undefined4 *******)((uint)local_164[0] & 0xffffff00);
      if (local_16c < 0x10) {
        local_16c = 0xf;
        uStack_170 = 0;
        local_180[0] = (undefined4 *******)((uint)local_180[0] & 0xffffff00);
        if (0xf < local_1a4) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_1b8[0]);
        }
        local_1a4 = 0xf;
        local_1a8 = 0;
        local_1b8[0] = local_1b8[0] & 0xffffff00;
        if (0xf < local_188) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_19c[0]);
        }
        local_188 = 0xf;
        local_18c = 0;
        local_19c[0] = local_19c[0] & 0xffffff00;
        if (0xf < uStack_134) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_148);
        }
        uStack_134 = 0xf;
        uStack_138 = 0;
        local_148 = local_148 & 0xffffff00;
        if (uStack_118 < 0x10) {
          ExceptionList = pvStack_14;
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_12c[0]);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_180[0]);
    }
    local_27c = local_27c + 7;
    local_254 = 0xf;
    local_258 = 0;
    local_268[0] = local_268[0] & 0xffffff00;
    FUN_00408ed0(puVar7,0,0xffffffff);
    local_c = CONCAT31(local_c._1_3_,0x1c);
    uVar6 = FUN_005484e0(local_268,&DAT_00dfa554,4);
    iVar11 = FUN_005484e0(local_268,&DAT_00dedc68,1);
    while (0 < iVar11) {
      iVar11 = FUN_005484e0(local_268,&DAT_00dedc68,1);
    }
    FUN_009895f0(uVar6);
    local_c._0_1_ = 0x1d;
    local_26c = (undefined4 *)FUN_00aae9af(0x3f0);
    local_c._0_1_ = 0x1e;
    if (local_26c == (undefined4 *)0x0) {
      local_290 = (int *)0x0;
    }
    else {
      local_290 = (int *)FUN_0096be90(local_26c,local_24c,local_28c);
      local_28c = local_28c + 1;
    }
    local_c = CONCAT31(local_c._1_3_,0x1d);
    local_284 = local_290;
    FUN_008b2480(local_290);
    ppiVar1 = *(int ***)(param_1 + 0x10);
    if ((&local_284 < ppiVar1) && (ppiVar2 = *(int ***)(param_1 + 0xc), ppiVar2 <= &local_284)) {
      if (ppiVar1 == *(int ***)(param_1 + 0x14)) {
        uVar12 = (int)ppiVar1 - (int)ppiVar2 >> 2;
        if (0x3ffffffe < uVar12) {
LAB_0096eb5d:
                    /* WARNING: Subroutine does not return */
          FUN_00aad3ad("vector<T> too long");
        }
        uVar12 = uVar12 + 1;
        uVar15 = (int)*(int ***)(param_1 + 0x14) - (int)ppiVar2 >> 2;
        if (uVar15 < uVar12) {
          if (0x3fffffff - (uVar15 >> 1) < uVar15) {
            uVar15 = 0;
          }
          else {
            uVar15 = uVar15 + (uVar15 >> 1);
          }
          if (uVar15 < uVar12) {
            uVar15 = uVar12;
          }
          FUN_004bf300(uVar15);
        }
      }
      if (*(undefined4 **)(param_1 + 0x10) != (undefined4 *)0x0) {
        **(undefined4 **)(param_1 + 0x10) =
             *(undefined4 *)(*(int *)(param_1 + 0xc) + ((int)&local_284 - (int)ppiVar2 >> 2) * 4);
      }
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 4;
    }
    else {
      if (ppiVar1 == *(int ***)(param_1 + 0x14)) {
        uVar12 = (int)ppiVar1 - *(int *)(param_1 + 0xc) >> 2;
        if (0x3ffffffe < uVar12) goto LAB_0096eb5d;
        uVar12 = uVar12 + 1;
        uVar15 = (int)*(int ***)(param_1 + 0x14) - *(int *)(param_1 + 0xc) >> 2;
        if (uVar15 < uVar12) {
          if (0x3fffffff - (uVar15 >> 1) < uVar15) {
            uVar15 = 0;
          }
          else {
            uVar15 = uVar15 + (uVar15 >> 1);
          }
          if (uVar15 < uVar12) {
            uVar15 = uVar12;
          }
          FUN_004bf300(uVar15);
        }
      }
      if (*(undefined4 **)(param_1 + 0x10) != (undefined4 *)0x0) {
        **(undefined4 **)(param_1 + 0x10) = local_290;
      }
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 4;
    }
    if (0xf < local_238) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_24c[0]);
    }
    local_c._0_1_ = 0x12;
    uVar4 = (undefined1)local_c;
    local_c._0_1_ = 0x12;
    local_238 = 0xf;
    local_23c = 0;
    local_24c[0] = local_24c[0] & 0xffffff00;
    if (0xf < local_254) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_268[0]);
    }
  } while( true );
}

