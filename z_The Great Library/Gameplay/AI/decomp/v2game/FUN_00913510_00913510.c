// FUN_00913510 @ 00913510 body=[[00913510, 009136e9] [009136f0, 0091397c] [00913980, 00913b9c] [00913ba6, 00913c49] [00913c50, 00914341] [00914350, 009144b0] [009144c0, 00914620] [00914630, 00914a86] [00914a8a, 00914abd] [00914ac1, 00914ba0] [00914ba4, 00914bd7] [00914bdb, 00914ce5] [00914ce9, 00914d11] [00914d15, 00914d49] [00914d4d, 00914f04] [00914f08, 00914f45] [00914f49, 00914f80] [00914f84, 00915052] [00915056, 009150de] [009150e2, 00915113] [00915117, 00915200] [00915204, 00915239] [0091523d, 009152e4] [009152e8, 0091543f] [00915443, 009155bf] [009155c3, 00915613] [00915617, 0091564f] [00915653, 00915782] [00915786, 009157cd] [009157d1, 00915808] [00915827, 0091593b] [0091593f, 00915986] [0091598a, 009159bd] [009159c1, 00915b83] [00915b87, 00915bd7] [00915bdb, 00915c46] [00915c4a, 00915c57] [00915c5b, 00915c77] [00915c7b, 00915c88] [00915c8c, 00915ca2]]


/* WARNING: Type propagation algorithm not settling */

void FUN_00913510(undefined4 *param_1)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  undefined3 uVar4;
  undefined1 uVar5;
  char cVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uVar13;
  int in_ECX;
  undefined4 **ppuVar14;
  int iVar15;
  undefined4 **ppuVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  undefined4 **ppuVar20;
  int unaff_ESI;
  undefined4 **ppuVar21;
  undefined8 uVar22;
  undefined4 **ppuStack_254;
  undefined4 *local_240 [4];
  undefined4 local_230;
  int *piStack_22c;
  int iStack_228;
  int *local_224;
  undefined4 **local_21c;
  undefined4 **ppuStack_218;
  undefined4 **local_214;
  undefined4 local_210;
  undefined4 **local_20c;
  undefined4 **ppuStack_208;
  undefined4 **ppuStack_204;
  undefined4 uStack_1fc;
  undefined **ppuStack_1f8;
  undefined4 *local_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  int iStack_1e8;
  uint uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined1 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined **appuStack_1c8 [4];
  undefined4 uStack_1b8;
  uint uStack_1b4;
  undefined4 uStack_1ac;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  int iStack_198;
  int iStack_194;
  undefined4 uStack_190;
  int local_18c;
  undefined **appuStack_188 [4];
  undefined4 uStack_178;
  uint uStack_174;
  undefined4 uStack_16c;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined **ppuStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  int iStack_148;
  undefined4 *puStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined1 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined **appuStack_120 [4];
  undefined4 uStack_110;
  uint uStack_10c;
  undefined4 uStack_104;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined **ppuStack_f0;
  int iStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  uint uStack_dc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  int iStack_bc;
  undefined4 local_b8;
  int local_b4;
  int local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined1 local_98 [8];
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_6c;
  undefined4 local_68;
  void *pvStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined1 local_c;
  undefined3 uStack_b;
  
  puStack_10 = &LAB_00bb763c;
  pvStack_14 = ExceptionList;
  local_214 = (undefined4 **)0x0;
  local_210 = 0;
  local_20c = (undefined4 **)0x0;
  local_a8 = 0;
  local_a4 = 0;
  local_a0 = 0;
  uStack_b = 0;
  uVar4 = uStack_b;
  local_c = 1;
  uStack_b = 0;
  local_240[0] = (undefined4 *)0x2d2d2d;
  local_b4 = 0;
  local_ac = 0;
  local_230 = *(int **)(in_ECX + 8);
  local_b8 = 0x2d2d2d;
  local_b0 = 0x2d2d2d;
  iVar15 = *(int *)(*(int *)(DAT_012587e4[1][*(int *)(in_ECX + 0xc)] + 0xbe8) +
                   *(int *)(in_ECX + 0x14) * 4);
  ExceptionList = &pvStack_14;
  if ((*(int *)(iVar15 + 0x34) == 0) &&
     (ExceptionList = &pvStack_14, uVar4 = uStack_b,
     *(int *)(DAT_012588e8 + 0xb0c) < *(int *)(iVar15 + 0x6c))) {
    local_230 = *(int **)(in_ECX + 8);
    iVar15 = DAT_012587e4[1][*(int *)(in_ECX + 0xc)];
    ppuStack_254 = local_240 + 2;
    ExceptionList = &pvStack_14;
    FUN_00950780(in_ECX + 0x28);
    ppuStack_254 = DAT_012587e4;
    iVar7 = *(int *)(iVar15 + 0x1430) + (int)local_240[2];
    if (iVar7 < 0) {
      iVar7 = 0;
    }
    *(int *)(iVar15 + 0x1430) = iVar7;
    local_230 = *(int **)(in_ECX + 8);
    local_240[0] = &ppuStack_254;
    FUN_00950a50();
    FUN_005341a0();
    ppuStack_254 = local_240 + 2;
    FUN_00950d20(in_ECX + 0x28);
    ppuStack_254 = (undefined4 **)0x0;
    uVar22 = __alldiv((int)local_240[2] << 0x1e,
                      (((int)local_240[2] >> 0x1f) << 0xf | (uint)local_240[2] >> 0x11) << 0xf |
                      ((uint)local_240[2] & 0x1ffff) >> 2,0x1f40000);
    local_18c = (int)((ulonglong)uVar22 >> 0x20);
    if (DAT_0131bb34 == 0) {
      ppuStack_254 = (undefined4 **)0x188;
      local_240[0] = (undefined4 *)FUN_00aae9af();
      local_c = 2;
      if (local_240[0] == (undefined4 *)0x0) {
        ppuStack_254 = (undefined4 **)0x0;
      }
      else {
        ppuStack_254 = (undefined4 **)0x9136a0;
        ppuStack_254 = (undefined4 **)FUN_0041a160();
      }
      local_c = 1;
      FUN_00423700();
    }
    local_21c = (undefined4 **)DAT_012587e4[1][*(int *)(in_ECX + 0xc)];
    piVar8 = local_21c[0x276];
    local_240[0] = (undefined4 *)(*(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2)
    ;
    local_230 = *(int **)(in_ECX + 8);
    while ((uVar4 = uStack_b, local_21c[0x276] <= piVar8 && (piVar8 < local_21c[0x277]))) {
      local_224 = *(int **)(*(int *)(DAT_012588e8 + 0xacc) + *piVar8 * 4);
      piVar8 = piVar8 + 1;
      local_230 = piVar8;
      if (0 < (int)local_240[0]) {
        iVar15 = 0;
        local_1f4 = local_240[0];
        do {
          iVar7 = *(int *)(iVar15 + *(int *)((int)local_224 + 0x194));
joined_r0x00913741:
          iVar9 = iVar7;
          if (iVar9 != 0) {
            iVar7 = *(int *)(iVar9 + 0x27c);
            puVar1 = (uint *)(iVar9 + 0x120);
            uVar10 = *puVar1;
            *puVar1 = *puVar1 + (uint)uVar22;
            *(int *)(iVar9 + 0x124) =
                 *(int *)(iVar9 + 0x124) + local_18c + (uint)CARRY4(uVar10,(uint)uVar22);
            if (*(int *)(iVar9 + 0x124) < 1) goto code_r0x0091376c;
            goto LAB_00913798;
          }
          iVar15 = iVar15 + 0x10;
          local_1f4 = (undefined4 *)((int)local_1f4 + -1);
        } while (local_1f4 != (undefined4 *)0x0);
        local_1f4 = (undefined4 *)0x0;
      }
    }
  }
  uStack_b = uVar4;
  ppuStack_254 = (undefined4 **)0x10c;
  local_240[0] = (undefined4 *)FUN_00aae9af();
  local_c = 3;
  if (local_240[0] == (undefined4 *)0x0) {
    local_1f4 = (undefined4 *)0x0;
  }
  else {
    ppuStack_254 = *(undefined4 ***)(in_ECX + 0x14);
    local_1f4 = (undefined4 *)FUN_009318b0();
  }
  puVar17 = local_1f4;
  iVar15 = DAT_012588e8;
  _local_c = CONCAT31(uStack_b,1);
  *(undefined1 *)((int)local_1f4 + 0xfd) = *(undefined1 *)(in_ECX + 0x69);
  local_21c = *(undefined4 ***)(iVar15 + 0xb40);
  ppuStack_254 = (undefined4 **)0x10;
  piVar8 = (int *)FUN_00aae9af();
  if (piVar8 == (int *)0x0) {
    piVar8 = (int *)0x0;
  }
  else {
    *piVar8 = (int)puVar17;
    piVar8[1] = (int)local_21c;
    piVar8[2] = 0;
    *(undefined1 *)(piVar8 + 3) = 0;
  }
  iVar7 = *(int *)(iVar15 + 0xb44);
  *(int **)(iVar15 + 0xb40) = piVar8;
  *(int *)(iVar15 + 0xb44) = iVar7 + 1;
  if (iVar7 == 0) {
    *(int **)(iVar15 + 0xb3c) = piVar8;
  }
  else {
    local_21c[2] = piVar8;
  }
  ppuStack_254 = *(undefined4 ***)(in_ECX + 0xc);
  FUN_00934280();
  ppuStack_254 = *(undefined4 ***)(in_ECX + 0x14);
  FUN_00935390();
  ppuStack_254 = (undefined4 **)0x0;
  FUN_008a8650();
  local_90 = *(undefined4 *)(in_ECX + 0x40);
  local_8c = *(undefined4 *)(in_ECX + 0x44);
  local_6c = *(undefined4 *)(in_ECX + 0x48);
  local_68 = *(undefined4 *)(in_ECX + 0x4c);
  ppuStack_254 = (undefined4 **)0x0;
  (**(code **)(*(int *)(*(int *)(in_ECX + 0x34) + 0x18c) + 0x2c))(local_98);
  *(undefined4 *)((int)puVar17 + 0xc) = *(undefined4 *)(DAT_012588e8 + 0xb0c);
  local_240[2] = *(undefined4 **)(in_ECX + 8);
  uVar5 = FUN_0092ede0();
  FUN_00931c30(puVar17,uVar5);
  iVar15 = *(int *)(*(int *)(DAT_012588e8 + 0xcf8) + 8);
  if ((*(char *)(unaff_ESI + 0x69) != '\0') && (iVar15 != 0)) {
    iVar7 = *(int *)((int)puVar17 + 0x30);
    iVar9 = *(int *)((int)puVar17 + 0x2c);
    if (iVar9 == iVar7) {
LAB_00913990:
      local_240[2] = *(undefined4 **)(iVar15 + 0x14);
      if (0 < (int)(*(int *)(DAT_012587e4[1][*(int *)(iVar15 + 0x18)] + 0x9dc) -
                    *(int *)(DAT_012587e4[1][*(int *)(iVar15 + 0x18)] + 0x9d8) & 0xfffffffcU)) {
        FUN_00934280(puVar17,1,0,*(undefined4 *)(iVar15 + 0x14),*(undefined4 *)(iVar15 + 0x18));
      }
    }
    else {
      do {
        if (*(int *)(iVar9 + 4) == *(int *)(iVar15 + 0x18)) break;
        iVar9 = iVar9 + 8;
      } while (iVar9 != iVar7);
      if (iVar9 == iVar7) goto LAB_00913990;
    }
    iVar7 = *(int *)((int)puVar17 + 0x40);
    iVar9 = *(int *)((int)puVar17 + 0x3c);
    if (iVar9 == iVar7) {
LAB_009139f0:
      local_240[2] = *(undefined4 **)(iVar15 + 0x1c);
      if (0 < (int)(*(int *)(DAT_012587e4[1][*(int *)(iVar15 + 0x20)] + 0x9dc) -
                    *(int *)(DAT_012587e4[1][*(int *)(iVar15 + 0x20)] + 0x9d8) & 0xfffffffcU)) {
        FUN_00935390(puVar17,1,0,*(undefined4 *)(iVar15 + 0x1c),*(undefined4 *)(iVar15 + 0x20));
      }
    }
    else {
      do {
        if (*(int *)(iVar9 + 4) == *(int *)(iVar15 + 0x20)) break;
        iVar9 = iVar9 + 8;
      } while (iVar9 != iVar7);
      if (iVar9 == iVar7) goto LAB_009139f0;
    }
    puVar19 = *(undefined4 **)(iVar15 + 0x2c);
LAB_00913a30:
    puVar18 = puVar19;
    if ((*(undefined4 **)(iVar15 + 0x2c) <= puVar18) && (puVar18 < *(undefined4 **)(iVar15 + 0x30)))
    {
      iVar7 = *(int *)((int)puVar17 + 0x30);
      iVar9 = *(int *)((int)puVar17 + 0x2c);
      puVar19 = puVar18 + 2;
      if (iVar9 != iVar7) goto code_r0x00913a4d;
      goto LAB_00913a64;
    }
    puVar19 = *(undefined4 **)(iVar15 + 0x3c);
LAB_00913a80:
    puVar18 = puVar19;
    if ((*(undefined4 **)(iVar15 + 0x3c) <= puVar18) && (puVar18 < *(undefined4 **)(iVar15 + 0x40)))
    {
      iVar7 = *(int *)((int)puVar17 + 0x40);
      iVar9 = *(int *)((int)puVar17 + 0x3c);
      puVar19 = puVar18 + 2;
      if (iVar9 != iVar7) goto code_r0x00913a9d;
      goto LAB_00913ab4;
    }
    piStack_22c = (int *)(*(int *)((int)puVar17 + 0x30) - *(int *)((int)puVar17 + 0x2c) >> 3);
    local_240[0] = (undefined4 *)0x0;
    if (0 < (int)piStack_22c) {
      do {
        iVar15 = *(int *)((int)puVar17 + 0x40) - *(int *)((int)puVar17 + 0x3c) >> 3;
        local_224 = (int *)0x0;
        puVar19 = local_240[0];
        if (0 < iVar15) {
          do {
            iVar7 = DAT_012588e8;
            local_240[2] = *(undefined4 **)(*(int *)((int)puVar17 + 0x2c) + (int)puVar19 * 8);
            piVar8 = *(int **)(*(int *)(*(int *)(DAT_012587e4[1]
                                                 [*(int *)(*(int *)((int)puVar17 + 0x2c) +
                                                           (int)puVar19 * 8 + 4)] + 0xbe8) +
                                       *(int *)(*(int *)((int)puVar17 + 0x3c) + 4 +
                                               (int)local_224 * 8) * 4) + 0x20);
            if (piVar8 != (int *)0x0) {
              for (piVar2 = *(int **)(DAT_012588e8 + 0xa84); piVar2 != (int *)0x0;
                  piVar2 = (int *)piVar2[2]) {
                if ((int *)*piVar2 == piVar8) {
                  if (piVar2 != (int *)0x0) {
                    if (*(char *)(DAT_012588e8 + 0xa90) == '\0') {
                      iVar15 = piVar2[1];
                      iVar9 = piVar2[2];
                      if (iVar15 != 0) {
                        *(int *)(iVar15 + 8) = iVar9;
                      }
                      if (iVar9 != 0) {
                        *(int *)(iVar9 + 4) = iVar15;
                      }
                      if (piVar2 == *(int **)(iVar7 + 0xa84)) {
                        *(int *)(iVar7 + 0xa84) = iVar9;
                      }
                      if (piVar2 == *(int **)(iVar7 + 0xa88)) {
                        *(int *)(iVar7 + 0xa88) = iVar15;
                      }
                    /* WARNING: Subroutine does not return */
                      FUN_00aae91b();
                    }
                    *(undefined1 *)(piVar2 + 3) = 1;
                  }
                  break;
                }
              }
              (**(code **)(*piVar8 + 0x2c))();
              (**(code **)*piVar8)();
              puVar19 = local_240[0];
            }
            local_224 = (int *)((int)local_224 + 1);
          } while ((int)local_224 < iVar15);
        }
        local_240[0] = (undefined4 *)((int)puVar19 + 1);
      } while ((int)local_240[0] < (int)piStack_22c);
    }
  }
  piVar8 = local_230;
  cVar6 = *(char *)(unaff_ESI + 0x68);
  local_230 = (int *)CONCAT13(1,(undefined3)local_230);
  if ((*(char *)(unaff_ESI + 0x69) != '\0') && (*(char *)(DAT_012588e8 + 0xb94) == '\0')) {
    cVar6 = '\0';
    local_230 = (int *)((uint)piVar8 & 0xffffff);
  }
  local_20c = (undefined4 **)0x0;
  ppuStack_208 = (undefined4 **)0x0;
  ppuStack_204 = (undefined4 **)0x0;
  if (cVar6 != '\0') {
    local_240[2] = *(undefined4 **)(unaff_ESI + 8);
    iVar15 = DAT_012587e4[1][*(int *)(unaff_ESI + 0xc)];
    local_224 = *(int **)(iVar15 + 0xd58);
    while ((*(int **)(iVar15 + 0xd58) <= local_224 && (local_224 < *(int **)(iVar15 + 0xd5c)))) {
      local_240[0] = (undefined4 *)*local_224;
      puVar17 = (undefined4 *)local_224[1];
      uStack_140 = *(undefined4 *)(DAT_012588e8 + 0xb0c);
      uStack_150 = *(undefined4 *)(unaff_ESI + 8);
      uStack_14c = *(undefined4 *)(unaff_ESI + 0xc);
      iStack_148 = *local_224;
      uStack_154 = 0x18d;
      uStack_138 = 0;
      uStack_134 = 0;
      ppuStack_158 = CCallAllyAction::vftable;
      pvStack_14._0_1_ = 5;
      uStack_130 = *(undefined4 *)(unaff_ESI + 0x10);
      uStack_12c = *(undefined4 *)(unaff_ESI + 0x14);
      local_240[1] = puVar17;
      local_224 = local_224 + 2;
      puStack_144 = puVar17;
      uStack_13c = uStack_140;
      cVar6 = FUN_00911760();
      if (cVar6 != '\0') {
        uStack_13c = *(undefined4 *)(DAT_012588e8 + 0xb0c);
        piVar8 = (int *)FUN_00aae9af();
        pvStack_14._0_1_ = 6;
        piStack_22c = piVar8;
        if (piVar8 == (int *)0x0) {
          piVar8 = (int *)0x0;
        }
        else {
          iVar7 = (*(code *)ppuStack_158[0xc])();
          piVar8[1] = 0x18d;
          *piVar8 = (int)CCommand::vftable;
          piVar8[7] = 0xf;
          piVar8[6] = 0;
          *(undefined1 *)(piVar8 + 2) = 0;
          pvStack_14._0_1_ = 7;
          piVar8[0xb] = 900;
          piVar8[0xc] = 900;
          *(undefined2 *)(piVar8 + 0xd) = 0xffff;
          FUN_00409350(&DAT_00ded94d,0);
          piVar8[0xf] = iVar7;
          piVar8[9] = 0;
          *(undefined2 *)(piVar8 + 10) = 0;
          *(undefined2 *)((int)piVar8 + 0x36) = 0;
          piVar8[0xe] = 0;
          *piVar8 = (int)CDiplomaticActionCommand::vftable;
        }
        pvStack_14._0_1_ = 5;
        (**(code **)(*piVar8 + 0x18))();
        (**(code **)*piVar8)();
        if (*(char *)(DAT_012587e4[1][(int)puVar17] + 0xcf4) != '\0') {
          if ((local_240 < ppuStack_208) && (local_20c <= local_240)) {
            iVar7 = (int)local_240 - (int)local_20c;
            if (ppuStack_208 == ppuStack_204) {
              uVar10 = (int)ppuStack_208 - (int)local_20c >> 3;
              if (0x1ffffffe < uVar10) goto LAB_00913f19;
              if ((uint)((int)ppuStack_204 - (int)local_20c >> 3) < uVar10 + 1) {
                FUN_004237e0();
              }
            }
            if (ppuStack_208 != (undefined4 **)0x0) {
              *ppuStack_208 = local_20c[(iVar7 >> 3) * 2];
              ppuStack_208[1] = (local_20c + (iVar7 >> 3) * 2)[1];
            }
            ppuStack_208 = ppuStack_208 + 2;
          }
          else {
            if (ppuStack_208 == ppuStack_204) {
              uVar10 = (int)ppuStack_208 - (int)local_20c >> 3;
              if (0x1ffffffe < uVar10) goto LAB_00913f19;
              if ((uint)((int)ppuStack_204 - (int)local_20c >> 3) < uVar10 + 1) {
                FUN_004237e0();
              }
            }
            if (ppuStack_208 != (undefined4 **)0x0) {
              *ppuStack_208 = local_240[0];
              ppuStack_208[1] = puVar17;
            }
            ppuStack_208 = ppuStack_208 + 2;
          }
        }
      }
      ppuStack_158 = CDiplomaticAction::vftable;
    }
  }
  pvStack_14._0_1_ = 4;
  local_240[2] = *(undefined4 **)(unaff_ESI + 8);
  iVar15 = DAT_012587e4[1][*(int *)(unaff_ESI + 0xc)];
  local_224 = *(int **)(iVar15 + 0xd48);
  ppuVar16 = ppuStack_208;
  ppuVar20 = local_21c;
  ppuVar21 = ppuStack_218;
  while ((*(int **)(iVar15 + 0xd48) <= local_224 && (local_224 < *(int **)(iVar15 + 0xd4c)))) {
    puVar17 = (undefined4 *)local_224[1];
    piVar8 = local_224 + 2;
    local_240[0] = (undefined4 *)*local_224;
    ppuVar14 = local_20c;
    local_240[1] = puVar17;
    if (local_20c == ppuVar16) {
LAB_00913fa6:
      if (ppuVar16 <= ppuVar14) goto LAB_009140b0;
      if ((local_240 < ppuVar21) && (ppuVar20 <= local_240)) {
        iVar7 = (int)local_240 - (int)ppuVar20 >> 3;
        local_224 = piVar8;
        if (ppuVar21 == local_214) {
          uVar10 = (int)ppuVar21 - (int)ppuVar20 >> 3;
          if (0x1ffffffe < uVar10) goto LAB_00913f19;
          if ((uint)((int)local_214 - (int)ppuVar20 >> 3) < uVar10 + 1) {
            FUN_004237e0();
            ppuVar16 = ppuStack_208;
            ppuVar20 = local_21c;
            ppuVar21 = ppuStack_218;
          }
        }
        if (ppuVar21 != (undefined4 **)0x0) {
          *ppuVar21 = ppuVar20[iVar7 * 2];
          ppuVar21[1] = ppuVar20[iVar7 * 2 + 1];
          ppuVar16 = ppuStack_208;
        }
        ppuVar21 = ppuVar21 + 2;
        ppuStack_218 = ppuVar21;
      }
      else {
        local_224 = piVar8;
        if (ppuVar21 == local_214) {
          uVar10 = (int)ppuVar21 - (int)ppuVar20 >> 3;
          if (0x1ffffffe < uVar10) goto LAB_00913f19;
          if ((uint)((int)local_214 - (int)ppuVar20 >> 3) < uVar10 + 1) {
            FUN_004237e0();
            ppuVar16 = ppuStack_208;
            ppuVar20 = local_21c;
            ppuVar21 = ppuStack_218;
          }
        }
        if (ppuVar21 != (undefined4 **)0x0) {
          *ppuVar21 = local_240[0];
          ppuVar21[1] = puVar17;
          ppuVar16 = ppuStack_208;
        }
        ppuVar21 = ppuVar21 + 2;
        ppuStack_218 = ppuVar21;
      }
    }
    else {
      do {
        if (ppuVar14[1] == puVar17) break;
        ppuVar14 = ppuVar14 + 2;
      } while (ppuVar14 != ppuVar16);
      if (local_20c <= ppuVar14) goto LAB_00913fa6;
LAB_009140b0:
      uStack_1e0 = *(undefined4 *)(DAT_012588e8 + 0xb0c);
      uStack_1f0 = *(undefined4 *)(unaff_ESI + 8);
      uStack_1ec = *(undefined4 *)(unaff_ESI + 0xc);
      iStack_1e8 = *local_224;
      uStack_1e4 = local_224[1];
      local_1f4 = (undefined4 *)0x18d;
      uStack_1d8 = 0;
      uStack_1d4 = 0;
      ppuStack_1f8 = CCallAllyAction::vftable;
      pvStack_14._0_1_ = 8;
      uStack_1d0 = *(undefined4 *)(unaff_ESI + 0x10);
      uStack_1cc = *(undefined4 *)(unaff_ESI + 0x14);
      local_224 = piVar8;
      uStack_1dc = uStack_1e0;
      cVar6 = FUN_00911760();
      if (cVar6 != '\0') {
        uStack_1dc = *(undefined4 *)(DAT_012588e8 + 0xb0c);
        piVar8 = (int *)FUN_00aae9af();
        pvStack_14._0_1_ = 9;
        piStack_22c = piVar8;
        if (piVar8 == (int *)0x0) {
          piVar8 = (int *)0x0;
        }
        else {
          iVar7 = (*(code *)ppuStack_1f8[0xc])();
          piVar8[1] = 0x18d;
          *piVar8 = (int)CCommand::vftable;
          piVar8[7] = 0xf;
          piVar8[6] = 0;
          *(undefined1 *)(piVar8 + 2) = 0;
          pvStack_14._0_1_ = 10;
          piVar8[0xb] = 900;
          piVar8[0xc] = 900;
          *(undefined2 *)(piVar8 + 0xd) = 0xffff;
          FUN_00409350(&DAT_00ded94d,0);
          piVar8[0xf] = iVar7;
          piVar8[9] = 0;
          *(undefined2 *)(piVar8 + 10) = 0;
          *(undefined2 *)((int)piVar8 + 0x36) = 0;
          piVar8[0xe] = 0;
          *piVar8 = (int)CDiplomaticActionCommand::vftable;
          ppuVar20 = local_21c;
        }
        pvStack_14._0_1_ = 8;
        (**(code **)(*piVar8 + 0x18))();
        (**(code **)*piVar8)();
        if ((local_240 < ppuVar21) && (ppuVar20 <= local_240)) {
          iVar7 = (int)local_240 - (int)ppuVar20 >> 3;
          if (ppuVar21 == local_214) {
            uVar10 = (int)ppuVar21 - (int)ppuVar20 >> 3;
            if (0x1ffffffe < uVar10) goto LAB_00913f19;
            if ((uint)((int)local_214 - (int)ppuVar20 >> 3) < uVar10 + 1) {
              FUN_004237e0();
              ppuVar20 = local_21c;
              ppuVar21 = ppuStack_218;
            }
          }
          if (ppuVar21 != (undefined4 **)0x0) {
            *ppuVar21 = ppuVar20[iVar7 * 2];
            ppuVar21[1] = ppuVar20[iVar7 * 2 + 1];
          }
        }
        else {
          if (ppuVar21 == local_214) {
            uVar10 = (int)ppuVar21 - (int)ppuVar20 >> 3;
            if (0x1ffffffe < uVar10) {
LAB_00913f19:
                    /* WARNING: Subroutine does not return */
              FUN_00aad3ad();
            }
            if ((uint)((int)local_214 - (int)ppuVar20 >> 3) < uVar10 + 1) {
              FUN_004237e0();
              ppuVar20 = local_21c;
              ppuVar21 = ppuStack_218;
            }
          }
          if (ppuVar21 != (undefined4 **)0x0) {
            *ppuVar21 = local_240[0];
            ppuVar21[1] = local_240[1];
          }
        }
        ppuVar21 = ppuVar21 + 2;
        ppuStack_218 = ppuVar21;
      }
      pvStack_14._0_1_ = 4;
      ppuStack_1f8 = CDiplomaticAction::vftable;
      ppuVar16 = ppuStack_208;
    }
  }
  iVar7 = 0;
  iVar15 = 0;
  iStack_198 = 0;
  iStack_194 = 0;
  uStack_190 = 0;
  if (local_230._3_1_ != '\0') {
    local_240[0] = (undefined4 *)DAT_012587e4[1][*(int *)(unaff_ESI + 0x14)];
    local_240[2] = (undefined4 *)local_240[0][0x356];
LAB_00914354:
    do {
      puVar17 = local_240[2];
      pvStack_14._0_1_ = 0xb;
      if ((puVar17 < (undefined4 *)local_240[0][0x356]) ||
         ((undefined4 *)local_240[0][0x357] <= puVar17)) goto LAB_0091448b;
      piStack_22c = (int *)*puVar17;
      iStack_228 = puVar17[1];
      local_240[2] = puVar17 + 2;
      for (iVar9 = iVar15; iVar9 != iVar7; iVar9 = iVar9 + 8) {
        if (*(int *)(iVar9 + 4) == iStack_228) {
          if (iVar9 != iVar7) goto LAB_00914354;
          break;
        }
      }
      FUN_0090e250(*(undefined4 *)(unaff_ESI + 0x10),*(undefined4 *)(unaff_ESI + 0x14),*puVar17,
                   iStack_228);
      pvStack_14._0_1_ = 0xc;
      uStack_1a0 = *(undefined4 *)(unaff_ESI + 8);
      uStack_19c = *(undefined4 *)(unaff_ESI + 0xc);
      cVar6 = FUN_00911760();
      if (cVar6 != '\0') {
        uStack_1ac = *(undefined4 *)(DAT_012588e8 + 0xb0c);
        iVar15 = FUN_00aae9af();
        pvStack_14._0_1_ = 0xd;
        if (iVar15 == 0) {
          piVar8 = (int *)0x0;
        }
        else {
          uVar11 = (*(code *)appuStack_1c8[0][0xc])();
          piVar8 = (int *)FUN_0090f620(iVar15,uVar11);
        }
        pvStack_14._0_1_ = 0xc;
        (**(code **)(*piVar8 + 0x18))();
        (**(code **)*piVar8)();
        FUN_004d61d0();
        iVar15 = iStack_198;
        iVar7 = iStack_194;
      }
      appuStack_1c8[0] = CDiplomaticAction::vftable;
    } while( true );
  }
  goto LAB_0091499e;
code_r0x0091376c:
  if (*(int *)(iVar9 + 0x124) < 0) {
    *(undefined4 *)(iVar9 + 0x120) = 0;
    *(undefined4 *)(iVar9 + 0x124) = 0;
  }
  if ((-1 < *(int *)(iVar9 + 0x124)) &&
     ((0 < *(int *)(iVar9 + 0x124) || (0x50000 < *(uint *)(iVar9 + 0x120))))) {
LAB_00913798:
    *(undefined4 *)(iVar9 + 0x120) = 0x50000;
    *(undefined4 *)(iVar9 + 0x124) = 0;
  }
  goto joined_r0x00913741;
code_r0x00913a4d:
  do {
    if (*(int *)(iVar9 + 4) == puVar18[1]) break;
    iVar9 = iVar9 + 8;
  } while (iVar9 != iVar7);
  if (iVar9 == iVar7) {
LAB_00913a64:
    FUN_00934280(puVar17,1,0,*puVar18,puVar18[1]);
  }
  goto LAB_00913a30;
code_r0x00913a9d:
  do {
    if (*(int *)(iVar9 + 4) == puVar18[1]) break;
    iVar9 = iVar9 + 8;
  } while (iVar9 != iVar7);
  if (iVar9 == iVar7) {
LAB_00913ab4:
    FUN_00935390(puVar17,1,0,*puVar18,puVar18[1]);
  }
  goto LAB_00913a80;
LAB_0091448b:
  local_240[0] = (undefined4 *)DAT_012587e4[1][*(int *)(unaff_ESI + 0x14)];
  local_240[2] = (undefined4 *)local_240[0][0x34e];
LAB_009144c4:
  do {
    puVar17 = local_240[2];
    pvStack_14._0_1_ = 0xb;
    if ((puVar17 < (undefined4 *)local_240[0][0x34e]) ||
       ((undefined4 *)local_240[0][0x34f] <= puVar17)) break;
    piStack_22c = (int *)*puVar17;
    iStack_228 = puVar17[1];
    local_240[2] = puVar17 + 2;
    for (iVar9 = iVar15; iVar9 != iVar7; iVar9 = iVar9 + 8) {
      if (*(int *)(iVar9 + 4) == iStack_228) {
        if (iVar9 != iVar7) goto LAB_009144c4;
        break;
      }
    }
    FUN_0090e250(*(undefined4 *)(unaff_ESI + 0x10),*(undefined4 *)(unaff_ESI + 0x14),*puVar17,
                 iStack_228);
    pvStack_14._0_1_ = 0xe;
    uStack_f8 = *(undefined4 *)(unaff_ESI + 8);
    uStack_f4 = *(undefined4 *)(unaff_ESI + 0xc);
    cVar6 = FUN_00911760();
    if (cVar6 != '\0') {
      uStack_104 = *(undefined4 *)(DAT_012588e8 + 0xb0c);
      iVar15 = FUN_00aae9af();
      pvStack_14._0_1_ = 0xf;
      if (iVar15 == 0) {
        piVar8 = (int *)0x0;
      }
      else {
        uVar11 = (*(code *)appuStack_120[0][0xc])();
        piVar8 = (int *)FUN_0090f620(iVar15,uVar11);
      }
      pvStack_14._0_1_ = 0xe;
      (**(code **)(*piVar8 + 0x18))();
      (**(code **)*piVar8)();
      FUN_004d61d0();
      iVar15 = iStack_198;
      iVar7 = iStack_194;
    }
    appuStack_120[0] = CDiplomaticAction::vftable;
  } while( true );
  local_240[0] = (undefined4 *)DAT_012587e4[1][*(int *)(unaff_ESI + 0x14)];
  local_240[2] = (undefined4 *)local_240[0][0x35e];
LAB_00914634:
  do {
    puVar17 = local_240[2];
    pvStack_14._0_1_ = 0xb;
    if ((puVar17 < (undefined4 *)local_240[0][0x35e]) ||
       ((undefined4 *)local_240[0][0x35f] <= puVar17)) break;
    piStack_22c = (int *)*puVar17;
    iStack_228 = puVar17[1];
    local_240[2] = puVar17 + 2;
    for (iVar9 = iVar15; iVar9 != iVar7; iVar9 = iVar9 + 8) {
      if (*(int *)(iVar9 + 4) == iStack_228) {
        if (iVar9 != iVar7) goto LAB_00914634;
        break;
      }
    }
    FUN_0090e250(*(undefined4 *)(unaff_ESI + 0x10),*(undefined4 *)(unaff_ESI + 0x14),*puVar17,
                 iStack_228);
    pvStack_14._0_1_ = 0x10;
    uStack_160 = *(undefined4 *)(unaff_ESI + 8);
    uStack_15c = *(undefined4 *)(unaff_ESI + 0xc);
    cVar6 = FUN_00911760();
    if (cVar6 != '\0') {
      uStack_16c = *(undefined4 *)(DAT_012588e8 + 0xb0c);
      iVar15 = FUN_00aae9af();
      pvStack_14._0_1_ = 0x11;
      if (iVar15 == 0) {
        piVar8 = (int *)0x0;
      }
      else {
        uVar11 = (*(code *)appuStack_188[0][0xc])();
        piVar8 = (int *)FUN_0090f620(iVar15,uVar11);
      }
      pvStack_14._0_1_ = 0x10;
      (**(code **)(*piVar8 + 0x18))();
      (**(code **)*piVar8)();
      FUN_004d61d0();
      FUN_004d61d0();
      iVar15 = iStack_198;
      iVar7 = iStack_194;
    }
    appuStack_188[0] = CDiplomaticAction::vftable;
  } while( true );
  if (*(int *)(DAT_012587e4[1][*(int *)(unaff_ESI + 0x14)] + 0xcfc) != 0) {
    local_240[2] = *(undefined4 **)(unaff_ESI + 0x10);
    iVar9 = DAT_012587e4[1][*(int *)(unaff_ESI + 0x14)];
    uVar11 = *(undefined4 *)(iVar9 + 0xcf8);
    iVar3 = *(int *)(iVar9 + 0xcfc);
    for (iVar12 = iVar15; iVar12 != iVar7; iVar12 = iVar12 + 8) {
      if (*(int *)(iVar12 + 4) == iVar3) {
        if (iVar12 != iVar7) goto LAB_00914899;
        break;
      }
    }
    FUN_0090e250(*(undefined4 *)(unaff_ESI + 0x10),*(undefined4 *)(unaff_ESI + 0x14),
                 *(undefined4 *)(iVar9 + 0xcf8),iVar3);
    pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,0x12);
    uStack_c8 = *(undefined4 *)(unaff_ESI + 8);
    uStack_c4 = *(undefined4 *)(unaff_ESI + 0xc);
    cVar6 = FUN_00911760();
    if (cVar6 != '\0') {
      piVar8 = (int *)FUN_009115b0();
      (**(code **)(*piVar8 + 0x18))();
      (**(code **)*piVar8)();
      FUN_004d61d0();
      iVar15 = iStack_198;
      iVar7 = iStack_194;
      uStack_c0 = uVar11;
      iStack_bc = iVar3;
    }
    ppuStack_f0 = CDiplomaticAction::vftable;
  }
LAB_00914899:
  pvStack_14._0_1_ = 0xb;
  iVar9 = DAT_012587e4[1][*(int *)(unaff_ESI + 0x14)];
  local_240[2] = *(undefined4 **)(iVar9 + 0x1428);
  if (*(int *)(iVar9 + 0x142c) != 0) {
    local_240[2] = *(undefined4 **)(unaff_ESI + 0x10);
    iVar9 = DAT_012587e4[1][*(int *)(unaff_ESI + 0x14)];
    uVar11 = *(undefined4 *)(iVar9 + 0x1428);
    iVar3 = *(int *)(iVar9 + 0x142c);
    for (; iVar15 != iVar7; iVar15 = iVar15 + 8) {
      if (*(int *)(iVar15 + 4) == iVar3) {
        if (iVar15 != iVar7) goto LAB_0091499e;
        break;
      }
    }
    FUN_0090e250(*(undefined4 *)(unaff_ESI + 0x10),*(undefined4 *)(unaff_ESI + 0x14),
                 *(undefined4 *)(iVar9 + 0x1428),iVar3);
    pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,0x13);
    uStack_130 = *(undefined4 *)(unaff_ESI + 8);
    uStack_12c = *(undefined4 *)(unaff_ESI + 0xc);
    cVar6 = FUN_00911760();
    if (cVar6 != '\0') {
      piVar8 = (int *)FUN_009115b0();
      (**(code **)(*piVar8 + 0x18))();
      (**(code **)*piVar8)();
      FUN_004d61d0();
      local_b8 = uVar11;
      local_b4 = iVar3;
    }
  }
LAB_0091499e:
  pvStack_14._0_1_ = 0xb;
  uStack_1e4 = 0xf;
  iStack_1e8 = 0;
  ppuStack_1f8 = (undefined **)((uint)ppuStack_1f8 & 0xffffff00);
  FUN_00409350("AGRESSOR",8);
  pvStack_14._0_1_ = 0x14;
  local_240[2] = *(undefined4 **)(unaff_ESI + 8);
  FUN_004f97a0();
  pvStack_14._0_1_ = 0x15;
  FUN_00424aa0();
  pvStack_14._0_1_ = 0x16;
  local_240[0] = (undefined4 *)param_1[1];
  iVar15 = FUN_00aae9af();
  pvStack_14._0_1_ = 0x17;
  if (iVar15 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = FUN_0042b900(iVar15,local_240[0]);
  }
  iVar15 = param_1[2];
  param_1[1] = uVar11;
  param_1[2] = iVar15 + 1;
  if (iVar15 == 0) {
    *param_1 = uVar11;
  }
  else {
    local_240[0][0xf] = uVar11;
  }
  FUN_00a39a80();
  if (0xf < uStack_1b4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  pvStack_14._0_1_ = 0xb;
  uStack_1b4 = 0xf;
  uStack_1b8 = 0;
  appuStack_1c8[0] = (undefined **)((uint)appuStack_1c8[0] & 0xffffff00);
  if (0xf < uStack_1e4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_1e4 = 0xf;
  iStack_1e8 = 0;
  ppuStack_1f8 = (undefined **)((uint)ppuStack_1f8 & 0xffffff00);
  FUN_00409350("DEFENDER",8);
  pvStack_14._0_1_ = 0x18;
  local_240[2] = *(undefined4 **)(unaff_ESI + 0x10);
  FUN_004f97a0();
  pvStack_14._0_1_ = 0x19;
  FUN_00424aa0();
  pvStack_14._0_1_ = 0x1a;
  local_240[0] = (undefined4 *)param_1[1];
  iVar15 = FUN_00aae9af();
  pvStack_14._0_1_ = 0x1b;
  if (iVar15 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = FUN_0042b900(iVar15,local_240[0]);
  }
  iVar15 = param_1[2];
  param_1[1] = uVar11;
  param_1[2] = iVar15 + 1;
  if (iVar15 == 0) {
    *param_1 = uVar11;
  }
  else {
    local_240[0][0xf] = uVar11;
  }
  FUN_00a39a80();
  if (0xf < uStack_1b4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  pvStack_14._0_1_ = 0xb;
  uStack_1b4 = 0xf;
  uStack_1b8 = 0;
  appuStack_1c8[0] = (undefined **)((uint)appuStack_1c8[0] & 0xffffff00);
  if (0xf < uStack_1e4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_174 = 0xf;
  uStack_178 = 0;
  appuStack_188[0] = (undefined **)((uint)appuStack_188[0] & 0xffffff00);
  FUN_00409350("MESSAGE_HEAD_MARS",0x11);
  pvStack_14._0_1_ = 0x1c;
  uStack_dc = 0xf;
  uStack_e0 = 0;
  ppuStack_f0 = (undefined **)((uint)ppuStack_f0 & 0xffffff00);
  FUN_00409350("MESSENGER",9);
  pvStack_14._0_1_ = 0x1d;
  FUN_006a4f40();
  FUN_00424ce0(&ppuStack_1f8,appuStack_188);
  pvStack_14._0_1_ = 0x1e;
  FUN_00424aa0();
  pvStack_14._0_1_ = 0x1f;
  local_240[0] = (undefined4 *)param_1[1];
  iVar15 = FUN_00aae9af();
  pvStack_14._0_1_ = 0x20;
  if (iVar15 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = FUN_0042b900(iVar15,local_240[0]);
  }
  iVar15 = param_1[2];
  param_1[1] = uVar11;
  param_1[2] = iVar15 + 1;
  if (iVar15 == 0) {
    *param_1 = uVar11;
  }
  else {
    local_240[0][0xf] = uVar11;
  }
  FUN_00a39a80();
  if (0xf < uStack_1e4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_1e4 = 0xf;
  iStack_1e8 = 0;
  ppuStack_1f8 = (undefined **)((uint)ppuStack_1f8 & 0xffffff00);
  if (0xf < uStack_dc) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  pvStack_14._0_1_ = 0xb;
  uVar5 = pvStack_14._0_1_;
  pvStack_14._0_1_ = 0xb;
  uStack_dc = 0xf;
  uStack_e0 = 0;
  ppuStack_f0 = (undefined **)((uint)ppuStack_f0 & 0xffffff00);
  if (0xf < uStack_174) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_240[2] = *(undefined4 **)(unaff_ESI + 8);
  uStack_174 = 0xf;
  uStack_178 = 0;
  appuStack_188[0] = (undefined **)((uint)appuStack_188[0] & 0xffffff00);
  local_240[0] = *(undefined4 **)
                  (*(int *)(DAT_012587e4[1][*(int *)(unaff_ESI + 0xc)] + 0xbe8) +
                  *(int *)(unaff_ESI + 0x14) * 4);
  piVar8 = (int *)local_240[0][0x14];
  do {
    if (piVar8 == (int *)0x0) {
      cVar6 = FUN_0092eff0();
      uVar5 = pvStack_14._0_1_;
      if ((cVar6 == '\0') && (*(char *)(unaff_ESI + 0x69) == '\0')) {
        uStack_10c = 0xf;
        uStack_110 = 0;
        appuStack_120[0] = (undefined **)((uint)appuStack_120[0] & 0xffffff00);
        FUN_00409350("WAR_INJUST",10);
        pvStack_14._0_1_ = 0x2b;
        uStack_174 = 0xf;
        uStack_178 = 0;
        appuStack_188[0] = (undefined **)((uint)appuStack_188[0] & 0xffffff00);
        FUN_00409350("CASUS",5);
        pvStack_14._0_1_ = 0x2c;
        FUN_009a8ee0(&ppuStack_f0,appuStack_120);
        pvStack_14._0_1_ = 0x2d;
        iVar15 = FUN_00475500();
        FUN_009a9880(*(undefined8 *)(iVar15 + 0x6c),*(undefined8 *)(iVar15 + 0x74));
        pvStack_14._0_1_ = 0x2e;
        FUN_00424aa0();
        pvStack_14._0_1_ = 0x2f;
        iVar15 = param_1[1];
        iVar7 = FUN_00aae9af();
        pvStack_14._0_1_ = 0x30;
        if (iVar7 == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = FUN_0042b900(iVar7,iVar15);
        }
        iVar9 = param_1[2];
        param_1[1] = uVar11;
        param_1[2] = iVar9 + 1;
        if (iVar9 == 0) {
          *param_1 = uVar11;
        }
        else {
          *(undefined4 *)(iVar15 + 0x3c) = uVar11;
        }
        FUN_00a39a80();
        if (0xf < uStack_1e4) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        uStack_1e4 = 0xf;
        iStack_1e8 = 0;
        ppuStack_1f8 = (undefined **)((uint)ppuStack_1f8 & 0xffffff00);
        pvStack_14._0_1_ = 0x2c;
        FUN_009a9740();
        if (0xf < uStack_174) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,0xb);
        uStack_174 = 0xf;
        uStack_178 = 0;
        appuStack_188[0] = (undefined **)((uint)appuStack_188[0] & 0xffffff00);
        if (0xf < uStack_10c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_240[2] = *(undefined4 **)(unaff_ESI + 8);
        uStack_110 = 0;
        uStack_10c = 0xf;
        appuStack_120[0] = (undefined **)((uint)appuStack_120[0] & 0xffffff00);
        local_240[0] = (undefined4 *)DAT_012587e4[1][*(int *)(unaff_ESI + 0xc)];
        FUN_009500e0();
        iVar7 = local_240[0][0x50c] + iVar7;
        if (iVar7 < 0) {
          iVar7 = 0;
        }
        local_240[0][0x50c] = iVar7;
        goto LAB_00915301;
      }
      break;
    }
    iVar15 = *piVar8;
    piVar8 = (int *)piVar8[2];
  } while (*(int *)(iVar15 + 0x24) != *(int *)(*(int *)(unaff_ESI + 0x34) + 8));
  pvStack_14._0_1_ = uVar5;
  uStack_10c = 0xf;
  uStack_110 = 0;
  appuStack_120[0] = (undefined **)((uint)appuStack_120[0] & 0xffffff00);
  FUN_00409350("WAR_JUST",8);
  pvStack_14._0_1_ = 0x21;
  FUN_009a8ee0(&ppuStack_f0,appuStack_120);
  pvStack_14._0_1_ = 0x23;
  if (0xf < uStack_10c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_10c = 0xf;
  uStack_110 = 0;
  appuStack_120[0] = (undefined **)((uint)appuStack_120[0] & 0xffffff00);
  uStack_1e4 = 0xf;
  iStack_1e8 = 0;
  ppuStack_1f8 = (undefined **)((uint)ppuStack_1f8 & 0xffffff00);
  FUN_00409350(&DAT_00e33a30,2);
  pvStack_14._0_1_ = 0x24;
  FUN_0090a830(*(undefined4 *)(unaff_ESI + 0x34),appuStack_1c8);
  pvStack_14._0_1_ = 0x25;
  FUN_009a9980();
  if (0xf < uStack_1b4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  pvStack_14._0_1_ = 0x23;
  uStack_1b4 = 0xf;
  uStack_1b8 = 0;
  appuStack_1c8[0] = (undefined **)((uint)appuStack_1c8[0] & 0xffffff00);
  if (0xf < uStack_1e4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_1e4 = 0xf;
  iStack_1e8 = 0;
  ppuStack_1f8 = (undefined **)((uint)ppuStack_1f8 & 0xffffff00);
  FUN_00409350("CASUS",5);
  pvStack_14._0_1_ = 0x26;
  iVar15 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar15 + 0x6c),*(undefined8 *)(iVar15 + 0x74));
  pvStack_14._0_1_ = 0x27;
  FUN_00424aa0();
  pvStack_14._0_1_ = 0x28;
  iVar15 = param_1[1];
  iVar7 = FUN_00aae9af();
  pvStack_14._0_1_ = 0x29;
  if (iVar7 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = FUN_0042b900(iVar7,iVar15);
  }
  iVar7 = param_1[2];
  param_1[1] = uVar11;
  param_1[2] = iVar7 + 1;
  if (iVar7 == 0) {
    *param_1 = uVar11;
  }
  else {
    *(undefined4 *)(iVar15 + 0x3c) = uVar11;
  }
  FUN_00a39a80();
  if (0xf < uStack_1b4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  pvStack_14._0_1_ = 0x23;
  uStack_1b4 = 0xf;
  uStack_1b8 = 0;
  appuStack_1c8[0] = (undefined **)((uint)appuStack_1c8[0] & 0xffffff00);
  if (0xf < uStack_1e4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  piVar8 = (int *)local_240[0][0x14];
  do {
    if (piVar8 == (int *)0x0) goto LAB_009152a3;
    puVar17 = (undefined4 *)*piVar8;
    piVar8 = (int *)piVar8[2];
  } while (puVar17[9] != *(int *)(*(int *)(unaff_ESI + 0x34) + 8));
  FUN_0092f0a0(local_240[0],0);
  for (piVar8 = *(int **)(DAT_012588e8 + 0xa84);
      (piVar8 != (int *)0x0 && ((undefined4 *)*piVar8 != puVar17)); piVar8 = (int *)piVar8[2]) {
  }
  FUN_005f2ae0();
  (**(code **)*puVar17)();
LAB_009152a3:
  pvStack_14._0_1_ = 0x2a;
  FUN_009adb70();
  pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,0xb);
  if (iStack_ec != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  iStack_ec = 0;
  uStack_e8 = 0;
  uStack_e4 = 0;
LAB_00915301:
  local_240[2] = *(undefined4 **)(unaff_ESI + 8);
  FUN_0092e290();
  if (*(char *)(DAT_012588e8 + 0xd1c) != '\0') {
    uVar11 = *(undefined4 *)(DAT_012588e8 + 0xcf4);
    uVar13 = FUN_00469fc0(*(undefined4 *)(DAT_012586f4 + 8),uStack_1fc,&local_21c,&uStack_c0,
                          &local_b8);
    FUN_00457b00(uVar11,uVar13);
  }
  uStack_10c = 0xf;
  uStack_110 = 0;
  appuStack_120[0] = (undefined **)((uint)appuStack_120[0] & 0xffffff00);
  FUN_00409350(&DAT_00e00e10,3);
  pvStack_14._0_1_ = 0x31;
  FUN_00424aa0();
  pvStack_14._0_1_ = 0x32;
  iVar15 = param_1[1];
  iVar7 = FUN_00aae9af();
  pvStack_14._0_1_ = 0x33;
  if (iVar7 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = FUN_0042b900(iVar7,iVar15);
  }
  iVar7 = param_1[2];
  param_1[1] = uVar11;
  param_1[2] = iVar7 + 1;
  if (iVar7 == 0) {
    *param_1 = uVar11;
  }
  else {
    *(undefined4 *)(iVar15 + 0x3c) = uVar11;
  }
  FUN_00a39a80();
  pvStack_14._0_1_ = 0xb;
  uVar5 = pvStack_14._0_1_;
  pvStack_14._0_1_ = 0xb;
  if (0xf < uStack_10c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  iVar15 = *(int *)(unaff_ESI + 0xc);
  iVar7 = iVar15 % 3;
  uStack_10c = 0xf;
  uStack_110 = 0;
  appuStack_120[0] = (undefined **)((uint)appuStack_120[0] & 0xffffff00);
  if (iVar15 == (iVar15 / 3) * 3) {
    uStack_1b4 = 0xf;
    uStack_1b8 = 0;
    appuStack_1c8[0] = (undefined **)((uint)appuStack_1c8[0] & 0xffffff00);
    FUN_00409350("MESS_BADWORDS1",0xe);
    pvStack_14._0_1_ = 0x34;
    uStack_174 = 0xf;
    uStack_178 = 0;
    appuStack_188[0] = (undefined **)((uint)appuStack_188[0] & 0xffffff00);
    FUN_00409350("BADWORD",7);
    pvStack_14._0_1_ = 0x35;
    FUN_009a8ee0(&ppuStack_f0,appuStack_1c8);
    pvStack_14._0_1_ = 0x36;
    iVar15 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar15 + 0x6c),*(undefined8 *)(iVar15 + 0x74));
    pvStack_14._0_1_ = 0x37;
    FUN_00424aa0();
    pvStack_14._0_1_ = 0x38;
    iVar15 = param_1[1];
    iVar7 = FUN_00aae9af();
    pvStack_14._0_1_ = 0x39;
    if (iVar7 == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = FUN_0042b900(iVar7,iVar15);
    }
    iVar7 = param_1[2];
    param_1[1] = uVar11;
    param_1[2] = iVar7 + 1;
    if (iVar7 == 0) {
      *param_1 = uVar11;
    }
    else {
      *(undefined4 *)(iVar15 + 0x3c) = uVar11;
    }
    FUN_00a39a80();
    if ((undefined4 *)0xf < puStack_144) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    puStack_144 = (undefined4 *)0xf;
    iStack_148 = 0;
    ppuStack_158 = (undefined **)((uint)ppuStack_158 & 0xffffff00);
    pvStack_14._0_1_ = 0x3a;
    FUN_009adb70();
    FUN_004d8540();
    if (0xf < uStack_174) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    pvStack_14._0_1_ = 0xb;
    uStack_174 = 0xf;
    uStack_178 = 0;
    appuStack_188[0] = (undefined **)((uint)appuStack_188[0] & 0xffffff00);
    if (0xf < uStack_1b4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_1b4 = 0xf;
    uStack_1b8 = 0;
    appuStack_1c8[0] = (undefined **)((uint)appuStack_1c8[0] & 0xffffff00);
  }
  else {
    pvStack_14._0_1_ = uVar5;
    if (iVar7 == 1) {
      FUN_004471e0();
      pvStack_14._0_1_ = 0x3b;
      FUN_004471e0();
      pvStack_14._0_1_ = 0x3c;
      FUN_009a8ee0(&ppuStack_f0,appuStack_188);
      pvStack_14._0_1_ = 0x3d;
      iVar15 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar15 + 0x6c),*(undefined8 *)(iVar15 + 0x74));
      pvStack_14._0_1_ = 0x3e;
      FUN_00424aa0();
      pvStack_14._0_1_ = 0x3f;
      iVar15 = param_1[1];
      iVar7 = FUN_00aae9af();
      pvStack_14._0_1_ = 0x40;
      if (iVar7 == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = FUN_0042b900(iVar7,iVar15);
      }
      iVar7 = param_1[2];
      param_1[1] = uVar11;
      param_1[2] = iVar7 + 1;
      if (iVar7 == 0) {
        *param_1 = uVar11;
      }
      else {
        *(undefined4 *)(iVar15 + 0x3c) = uVar11;
      }
      FUN_00a39a80();
      if ((undefined4 *)0xf < puStack_144) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      puStack_144 = (undefined4 *)0xf;
      iStack_148 = 0;
      ppuStack_158 = (undefined **)((uint)ppuStack_158 & 0xffffff00);
      pvStack_14._0_1_ = 0x3c;
      FUN_009a9740();
      if (0xf < uStack_1b4) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      pvStack_14._0_1_ = 0xb;
      uStack_1b4 = 0xf;
      uStack_1b8 = 0;
      appuStack_1c8[0] = (undefined **)((uint)appuStack_1c8[0] & 0xffffff00);
      if (0xf < uStack_174) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    else {
      if (iVar7 != 2) {
        if (iVar7 == 3) {
          FUN_009885d0();
          pvStack_14._0_1_ = 0x47;
          FUN_009885d0();
          pvStack_14._0_1_ = 0x48;
          FUN_009a8ee0(&ppuStack_f0,appuStack_1c8);
          pvStack_14._0_1_ = 0x49;
          iVar15 = FUN_00475500();
          FUN_009a9880(*(undefined8 *)(iVar15 + 0x6c),*(undefined8 *)(iVar15 + 0x74));
          pvStack_14._0_1_ = 0x4a;
          FUN_00424aa0();
          pvStack_14._0_1_ = 0x4b;
          iVar15 = param_1[1];
          iVar7 = FUN_00aae9af();
          pvStack_14._0_1_ = 0x4c;
          if (iVar7 == 0) {
            uVar11 = 0;
          }
          else {
            uVar11 = FUN_0042b900(iVar7,iVar15);
          }
          iVar7 = param_1[2];
          param_1[1] = uVar11;
          param_1[2] = iVar7 + 1;
          if (iVar7 == 0) {
            *param_1 = uVar11;
          }
          else {
            *(undefined4 *)(iVar15 + 0x3c) = uVar11;
          }
          FUN_00a39a80();
          FUN_00408ad0();
          pvStack_14._0_1_ = 0x48;
          FUN_009a9740();
          FUN_00408ad0();
          pvStack_14._0_1_ = 0xb;
          FUN_00408ad0();
        }
        goto LAB_00915b17;
      }
      FUN_009885d0();
      pvStack_14._0_1_ = 0x41;
      FUN_009885d0();
      pvStack_14._0_1_ = 0x42;
      FUN_009a8ee0(&ppuStack_f0,appuStack_188);
      pvStack_14._0_1_ = 0x43;
      iVar15 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar15 + 0x6c),*(undefined8 *)(iVar15 + 0x74));
      pvStack_14._0_1_ = 0x44;
      FUN_00424aa0();
      pvStack_14._0_1_ = 0x45;
      iVar15 = param_1[1];
      iVar7 = FUN_00aae9af();
      pvStack_14._0_1_ = 0x46;
      if (iVar7 == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = FUN_0042b900(iVar7,iVar15);
      }
      iVar7 = param_1[2];
      param_1[1] = uVar11;
      param_1[2] = iVar7 + 1;
      if (iVar7 == 0) {
        *param_1 = uVar11;
      }
      else {
        *(undefined4 *)(iVar15 + 0x3c) = uVar11;
      }
      FUN_00a39a80();
      if ((undefined4 *)0xf < puStack_144) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      puStack_144 = (undefined4 *)0xf;
      iStack_148 = 0;
      ppuStack_158 = (undefined **)((uint)ppuStack_158 & 0xffffff00);
      pvStack_14._0_1_ = 0x42;
      FUN_009a9740();
      if (0xf < uStack_1b4) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      pvStack_14._0_1_ = 0xb;
      uStack_1b4 = 0xf;
      uStack_1b8 = 0;
      appuStack_1c8[0] = (undefined **)((uint)appuStack_1c8[0] & 0xffffff00);
      if (0xf < uStack_174) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    pvStack_14._0_1_ = 0xb;
    uStack_1b4 = 0xf;
    uStack_1b8 = 0;
    uStack_174 = 0xf;
    uStack_178 = 0;
    appuStack_188[0] = (undefined **)((uint)appuStack_188[0] & 0xffffff00);
  }
LAB_00915b17:
  if (*(int *)(unaff_ESI + 0xc) == *(int *)(DAT_012588e8 + 0xb60)) {
    uStack_1e4 = 0xf;
    iStack_1e8 = 0;
    ppuStack_1f8 = (undefined **)((uint)ppuStack_1f8 & 0xffffff00);
    FUN_00409350("declarewar",10);
    pvStack_14._0_1_ = 0x4d;
    piVar8 = (int *)FUN_009c7290();
    (**(code **)(*piVar8 + 0x60))();
    pvStack_14._0_1_ = 0xb;
    if (0xf < uStack_1e4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  else {
    if (*(int *)(unaff_ESI + 0x14) != *(int *)(DAT_012588e8 + 0xb60)) goto LAB_00915bf0;
    FUN_004471e0();
    pvStack_14._0_1_ = 0x4e;
    piVar8 = (int *)FUN_009c7290();
    (**(code **)(*piVar8 + 0x60))();
    pvStack_14._0_1_ = 0xb;
    if (0xf < uStack_1e4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  pvStack_14._0_1_ = 0xb;
  uStack_1e4 = 0xf;
  iStack_1e8 = 0;
  ppuStack_1f8 = (undefined **)((uint)ppuStack_1f8 & 0xffffff00);
LAB_00915bf0:
  if (*(char *)(DAT_012588e8 + 0xd1c) != '\0') {
    iVar15 = *(int *)(DAT_012588e8 + 0xb24);
    *(uint *)(iVar15 + 0x74) = *(uint *)(iVar15 + 0x74) | 0xf;
    if ((*(int *)(iVar15 + 0x7c) - *(int *)(iVar15 + 0x78) & 0xfffffffcU) == 0) {
      FUN_004e9b90();
    }
    else {
      **(undefined4 **)(iVar15 + 0x78) = 0xffffffff;
    }
  }
  if (iStack_198 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (local_20c != (undefined4 **)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_20c = (undefined4 **)0x0;
  ppuStack_208 = (undefined4 **)0x0;
  ppuStack_204 = (undefined4 **)0x0;
  if (local_b0 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (local_21c != (undefined4 **)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = pvStack_1c;
  return;
}

