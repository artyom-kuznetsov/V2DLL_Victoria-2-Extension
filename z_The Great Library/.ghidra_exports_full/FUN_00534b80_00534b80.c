// FUN_00534b80 @ 00534b80 body=[[00534b80, 00534ec6] [00534eca, 00534f5b] [00534f5f, 00534f95] [00534f99, 00535014] [00535018, 005350c9] [005350cd, 00535119] [0053511d, 005356fb] [005356ff, 0053578f] [00535793, 005357cb] [005357cf, 00535849] [0053584d, 005358e5] [005358e9, 00535934] [0053593a, 00535c72] [00535c76, 00535cac] [00535cb0, 00535ce2] [00535ce6, 00535d03] [00535d1e, 00535db5]]


void FUN_00534b80(int param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  int *piVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined1 **ppuVar14;
  undefined1 *puVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined1 auStack_438 [100];
  undefined4 uStack_3d4;
  int iStack_3d0;
  undefined4 uStack_3cc;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  int local_398;
  undefined4 uStack_394;
  int iStack_390;
  int local_38c;
  undefined4 local_388;
  int local_384;
  undefined1 *puStack_380;
  undefined1 *puStack_37c;
  int iStack_378;
  int local_370;
  undefined1 *puStack_36c;
  undefined1 *puStack_364;
  undefined1 *puStack_360;
  int iStack_35c;
  undefined4 uStack_354;
  int iStack_350;
  undefined4 uStack_34c;
  int iStack_348;
  int local_344;
  undefined4 local_340;
  undefined4 local_33c;
  undefined4 uStack_334;
  int local_32c;
  undefined4 local_328;
  undefined4 local_324;
  uint auStack_31c [4];
  undefined4 uStack_30c;
  uint uStack_308;
  uint auStack_300 [4];
  int iStack_2f0;
  uint uStack_2ec;
  undefined4 auStack_2e4 [5];
  uint uStack_2d0;
  uint auStack_2ac [4];
  int iStack_29c;
  uint uStack_298;
  uint auStack_290 [4];
  undefined4 uStack_280;
  uint uStack_27c;
  uint uStack_274;
  undefined4 uStack_264;
  uint uStack_260;
  uint uStack_258;
  undefined4 uStack_248;
  uint uStack_244;
  uint uStack_23c;
  undefined4 uStack_22c;
  uint uStack_228;
  uint uStack_220;
  undefined4 uStack_210;
  uint uStack_20c;
  uint uStack_204;
  undefined4 uStack_1f4;
  uint uStack_1f0;
  uint uStack_1e8;
  undefined4 uStack_1d8;
  uint uStack_1d4;
  uint uStack_1cc;
  undefined4 uStack_1bc;
  uint uStack_1b8;
  uint uStack_1b0;
  undefined4 uStack_1a0;
  uint uStack_19c;
  undefined1 auStack_194 [56];
  undefined1 auStack_15c [56];
  undefined1 auStack_124 [28];
  undefined1 local_108 [8];
  undefined4 local_100;
  int local_fc;
  undefined1 *local_e4;
  undefined1 auStack_bc [20];
  undefined1 local_a8 [8];
  undefined4 local_a0;
  undefined4 local_9c;
  undefined1 auStack_60 [8];
  undefined4 uStack_58;
  undefined4 uStack_54;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00ba6e67;
  local_14 = ExceptionList;
  bVar4 = false;
  bVar3 = false;
  if (((*(int *)(param_1 + 0x20) != 0) &&
      ((((*(char *)(param_1 + 0x1c) != 'R' || (*(char *)(param_1 + 0x1d) != 'E')) ||
        (*(char *)(param_1 + 0x1e) != 'B')) &&
       (0 < (int)(*(int *)(param_1 + 0x9dc) - *(int *)(param_1 + 0x9d8) & 0xfffffffcU))))) &&
     ((*(char *)(DAT_012588e8 + 0xd1c) != '\0' || (*(char *)(DAT_012588e8 + 0xd10) == '\0')))) {
    uStack_3c0 = 0x45;
    uStack_3c8 = CONCAT44(0x534c04,(undefined4)uStack_3c8);
    ExceptionList = &local_14;
    uVar7 = FUN_009b7950();
    uStack_3c0 = CONCAT44(uVar7,0x534c11);
    FUN_008a8650();
    local_100 = *(undefined4 *)(param_1 + 0x1c);
    local_fc = *(int *)(param_1 + 0x20);
    uStack_3c0 = 0x45;
    uStack_3c8 = CONCAT44(0x534c2d,(undefined4)uStack_3c8);
    uVar7 = FUN_009b7950();
    uStack_3c0 = CONCAT44(uVar7,0x534c3a);
    FUN_008a8650();
    local_a0 = *(undefined4 *)(param_1 + 0x1c);
    local_9c = *(undefined4 *)(param_1 + 0x20);
    local_e4 = local_a8;
    uStack_3c0 = CONCAT44(0x534c61,(undefined4)uStack_3c0);
    uVar7 = FUN_0090cc40();
    piVar11 = DAT_012587e4;
    if ((*(int *)(param_1 + 0x20) == *(int *)(DAT_012588e8 + 0xb60)) &&
       (*(int *)(DAT_012588e8 + 0xb0c) != *(int *)(DAT_012588e8 + 0xb10))) {
      uStack_3c0 = CONCAT44(0x534c9b,(undefined4)uStack_3c0);
      FUN_0090cc40();
      local_344 = 0;
      local_340 = 0;
      local_33c = 0;
      uStack_3c0 = CONCAT44(0x534cbb,(undefined4)uStack_3c0);
      FUN_005492e0();
      local_c = 0;
      local_32c = 0;
      local_328 = 0;
      local_324 = 0;
      uStack_3c0 = CONCAT44(0x534ce5,(undefined4)uStack_3c0);
      FUN_005492e0();
      local_c = CONCAT31(local_c._1_3_,1);
      iVar8 = *piVar11;
      iVar12 = 0;
      if (0 < iVar8) {
        do {
          iVar1 = *(int *)(piVar11[1] + iVar12 * 4);
          local_388 = *(undefined4 *)(iVar1 + 0x1c);
          local_384 = *(int *)(iVar1 + 0x20);
          if (((local_384 != 0) &&
              ((((char)local_388 != 'R' || ((char)((uint)local_388 >> 8) != 'E')) ||
               ((char)((uint)local_388 >> 0x10) != 'B')))) &&
             (local_384 != *(int *)(param_1 + 0x20))) {
            uStack_3c0 = CONCAT44(&local_32c,&local_344);
            uStack_3c8 = CONCAT44(local_108,&local_388);
            iStack_3d0 = param_1;
            uStack_3d4 = 0x534d73;
            uStack_3cc = uVar7;
            local_100 = local_388;
            local_fc = local_384;
            FUN_00535dc0();
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 < iVar8);
      }
      local_38c = 0;
      uStack_3c0 = CONCAT44(0x534d81,(undefined4)uStack_3c0);
      iVar8 = FUN_0090cc40();
      local_370 = *(int *)(iVar8 + 0x10) - *(int *)(iVar8 + 0xc) >> 2;
      if (0 < local_370) {
        do {
          if (DAT_0131acac == 0) {
            uStack_3c0 = 0x2000534da8;
            iVar8 = FUN_00aae9af();
            local_c._0_1_ = 2;
            if (iVar8 == 0) {
              uVar7 = 0;
            }
            else {
              uStack_3c0 = CONCAT44(0x534dc2,(undefined4)uStack_3c0);
              uVar7 = FUN_0090cca0();
            }
            local_c = CONCAT31(local_c._1_3_,1);
            uStack_3c0 = CONCAT44(uVar7,0x534dd4);
            FUN_0090d9d0();
          }
          if (local_38c < *(int *)(DAT_0131acac + 0x10) - *(int *)(DAT_0131acac + 0xc) >> 2) {
            piVar11 = *(int **)(*(int *)(DAT_0131acac + 0xc) + local_38c * 4);
          }
          else {
            piVar11 = (int *)**(undefined4 **)(DAT_0131acac + 0xc);
          }
          uStack_3c0 = CONCAT44(0x534e02,(undefined4)uStack_3c0);
          cVar6 = (**(code **)(*piVar11 + 0x1c))();
          if (cVar6 != '\0') {
            uStack_298 = 0xf;
            iStack_29c = 0;
            auStack_2ac[0] = auStack_2ac[0] & 0xffffff00;
            uStack_334 = 0x2d2d2d;
            uStack_394 = 0x2d2d2d;
            iVar8 = local_38c * 0x10;
            puVar13 = *(undefined4 **)(local_344 + iVar8);
            iStack_390 = 0;
            while ((local_c._0_1_ = 3, *(undefined4 **)(local_344 + iVar8) <= puVar13 &&
                   (puVar13 < *(undefined4 **)(local_344 + 4 + iVar8)))) {
              uStack_34c = *puVar13;
              iStack_348 = puVar13[1];
              puVar13 = puVar13 + 2;
              if (iStack_390 == 0) {
                uStack_3c0 = CONCAT44(0x534e90,(undefined4)uStack_3c0);
                uVar7 = FUN_0055dd40();
                uStack_3c0 = 0xffffffff00000000;
                local_c._0_1_ = 4;
                uStack_3c8 = CONCAT44(uVar7,0x534ea8);
                FUN_00448aa0();
                local_c._0_1_ = 3;
                if (0xf < uStack_19c) {
                  uStack_3c0 = CONCAT44(uStack_1b0,&UNK_00534ec7);
                    /* WARNING: Subroutine does not return */
                  FUN_00aae91b();
                }
                iStack_390 = iStack_348;
                uStack_394 = uStack_34c;
                uStack_19c = 0xf;
                uStack_1a0 = 0;
                uStack_1b0 = uStack_1b0 & 0xffffff00;
              }
              else {
                uStack_3c0 = CONCAT44(0x534f0c,(undefined4)uStack_3c0);
                uVar7 = FUN_0055dd40();
                local_c._0_1_ = 5;
                uStack_3c0 = CONCAT44(uVar7,0x534f26);
                uVar7 = FUN_00988fa0();
                uStack_3c0 = 0xffffffff00000000;
                local_c._0_1_ = 6;
                uStack_3c8 = CONCAT44(uVar7,0x534f41);
                FUN_00448aa0();
                if (0xf < uStack_20c) {
                  uStack_3c0 = CONCAT44(uStack_220,&UNK_00534f5c);
                    /* WARNING: Subroutine does not return */
                  FUN_00aae91b();
                }
                local_c._0_1_ = 3;
                uStack_20c = 0xf;
                uStack_210 = 0;
                uStack_220 = uStack_220 & 0xffffff00;
                if (0xf < uStack_228) {
                  uStack_3c0 = CONCAT44(uStack_23c,&UNK_00534f96);
                    /* WARNING: Subroutine does not return */
                  FUN_00aae91b();
                }
                uStack_228 = 0xf;
                uStack_22c = 0;
                uStack_23c = uStack_23c & 0xffffff00;
              }
            }
            if ((int)(*(int *)(local_344 + 4 + iVar8) - *(int *)(local_344 + iVar8) & 0xfffffff8U) <
                0x21) {
LAB_00534fee:
              bVar2 = false;
            }
            else {
              uStack_3c0 = CONCAT44(piVar11,0x534fdf);
              iVar12 = FUN_004f68b0();
              bVar3 = true;
              bVar2 = true;
              if (*(int *)(iVar12 + 0x10) == 0) goto LAB_00534fee;
            }
            if (bVar3) {
              bVar3 = false;
              if (0xf < uStack_27c) {
                uStack_3c0 = CONCAT44(auStack_290[0],&UNK_00535015);
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b();
              }
              uStack_27c = 0xf;
              uStack_280 = 0;
              auStack_290[0] = auStack_290[0] & 0xffffff00;
            }
            if (bVar2) {
              uStack_3c0 = CONCAT44(piVar11,0x53504c);
              uVar7 = FUN_004f68b0();
              uStack_3c0 = CONCAT44(uVar7,auStack_bc);
              local_c._0_1_ = 7;
              uStack_3c8 = CONCAT44(0x535062,(undefined4)uStack_3c8);
              FUN_009a8ee0();
              local_c._0_1_ = 8;
              uStack_3c0 = CONCAT44(0x535071,(undefined4)uStack_3c0);
              iVar12 = FUN_00475500();
              uStack_3c8 = *(undefined8 *)(iVar12 + 0x6c);
              uStack_3c0 = *(undefined8 *)(iVar12 + 0x74);
              uStack_3cc = 0x535097;
              uVar7 = FUN_009a9880();
              uStack_3c0 = 0xffffffff00000000;
              local_c._0_1_ = 9;
              uStack_3c8 = CONCAT44(uVar7,0x5350af);
              FUN_00408ed0();
              if (0xf < uStack_1b8) {
                uStack_3c0 = CONCAT44(uStack_1cc,&UNK_005350ca);
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b();
              }
              uStack_1b8 = 0xf;
              uStack_1bc = 0;
              uStack_1cc = uStack_1cc & 0xffffff00;
              local_c._0_1_ = 7;
              uStack_3c0 = CONCAT44(auStack_bc,0x5350fc);
              FUN_009a9740();
              local_c._0_1_ = 3;
              if (0xf < uStack_1f0) {
                uStack_3c0 = CONCAT44(uStack_204,&UNK_0053511a);
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b();
              }
              uStack_1f0 = 0xf;
              uStack_1f4 = 0;
              uStack_204 = uStack_204 & 0xffffff00;
            }
            if ((iStack_29c != 0) && (iStack_390 != 0)) {
              uStack_3c0 = CONCAT44(param_1,0x535152);
              FUN_005061e0();
              uStack_3c0 = CONCAT44(0x53515b,(undefined4)uStack_3c0);
              FUN_004e9500();
              local_c._0_1_ = 10;
              uStack_3c0 = CONCAT44(0x535174,(undefined4)uStack_3c0);
              FUN_009885d0();
              uStack_3c0 = CONCAT44(auStack_2ac,auStack_31c);
              local_c._0_1_ = 0xb;
              uStack_3c8 = CONCAT44(auStack_15c,0x535194);
              iVar12 = FUN_00424aa0();
              puVar15 = puStack_37c;
              local_c._0_1_ = 0xc;
              uStack_3c0 = 0x44005351ad;
              puVar9 = (undefined1 *)FUN_00aae9af();
              local_c._0_1_ = 0xd;
              uVar5 = (undefined1)local_c;
              local_c._0_1_ = 0xd;
              puStack_36c = puVar9;
              if (puVar9 == (undefined1 *)0x0) {
                puStack_37c = (undefined1 *)0x0;
                local_c._0_1_ = uVar5;
              }
              else {
                uStack_3c0 = 0xffffffff00000000;
                *(undefined4 *)(puVar9 + 0x14) = 0xf;
                *(undefined4 *)(puVar9 + 0x10) = 0;
                *puVar9 = 0;
                uStack_3c8 = CONCAT44(iVar12,0x5351d9);
                FUN_00408ed0();
                local_c._0_1_ = 0xe;
                uStack_3c0 = 0xffffffff00000000;
                *(undefined4 *)(puVar9 + 0x30) = 0xf;
                *(undefined4 *)(puVar9 + 0x2c) = 0;
                puVar9[0x1c] = 0;
                uStack_3c8 = CONCAT44(iVar12 + 0x1c,0x5351fc);
                FUN_00408ed0();
                *(undefined1 **)(puVar9 + 0x38) = puVar15;
                *(undefined4 *)(puVar9 + 0x3c) = 0;
                puVar9[0x40] = 0;
                puStack_37c = puVar9;
              }
              puVar9 = puStack_37c;
              if (iStack_378 != 0) {
                *(undefined1 **)(puVar15 + 0x3c) = puStack_37c;
                puVar9 = puStack_380;
              }
              puStack_380 = puVar9;
              uStack_3c0 = CONCAT44(0x535239,(undefined4)uStack_3c0);
              iStack_378 = iStack_378 + 1;
              FUN_00a39a80();
              local_c._0_1_ = 10;
              uStack_3c0 = CONCAT44(0x53524d,(undefined4)uStack_3c0);
              FUN_00408ad0();
              uStack_3c0 = CONCAT44(0x53525e,(undefined4)uStack_3c0);
              FUN_009885d0();
              uStack_3c0 = CONCAT44(auStack_2e4,piVar11);
              local_c._0_1_ = 0xf;
              uStack_3c8 = CONCAT44(0x535278,(undefined4)uStack_3c8);
              uVar7 = FUN_0090a830();
              uStack_3c0 = CONCAT44(uVar7,auStack_31c);
              local_c._0_1_ = 0x10;
              uStack_3c8 = CONCAT44(auStack_15c,0x535291);
              iVar12 = FUN_00424aa0();
              puVar15 = puStack_37c;
              local_c._0_1_ = 0x11;
              uStack_3c0 = 0x44005352aa;
              puVar9 = (undefined1 *)FUN_00aae9af();
              local_c._0_1_ = 0x12;
              uVar5 = (undefined1)local_c;
              local_c._0_1_ = 0x12;
              puStack_36c = puVar9;
              if (puVar9 == (undefined1 *)0x0) {
                puStack_37c = (undefined1 *)0x0;
                local_c._0_1_ = uVar5;
              }
              else {
                uStack_3c0 = 0xffffffff00000000;
                *(undefined4 *)(puVar9 + 0x14) = 0xf;
                *(undefined4 *)(puVar9 + 0x10) = 0;
                *puVar9 = 0;
                uStack_3c8 = CONCAT44(iVar12,0x5352d6);
                FUN_00408ed0();
                local_c._0_1_ = 0x13;
                uStack_3c0 = 0xffffffff00000000;
                *(undefined4 *)(puVar9 + 0x30) = 0xf;
                *(undefined4 *)(puVar9 + 0x2c) = 0;
                puVar9[0x1c] = 0;
                uStack_3c8 = CONCAT44(iVar12 + 0x1c,0x5352f9);
                FUN_00408ed0();
                *(undefined1 **)(puVar9 + 0x38) = puVar15;
                *(undefined4 *)(puVar9 + 0x3c) = 0;
                puVar9[0x40] = 0;
                puStack_37c = puVar9;
              }
              puVar9 = puStack_37c;
              if (iStack_378 != 0) {
                *(undefined1 **)(puVar15 + 0x3c) = puStack_37c;
                puVar9 = puStack_380;
              }
              puStack_380 = puVar9;
              uStack_3c0 = CONCAT44(0x535336,(undefined4)uStack_3c0);
              iStack_378 = iStack_378 + 1;
              FUN_00a39a80();
              uStack_3c0 = CONCAT44(0x535342,(undefined4)uStack_3c0);
              FUN_00408ad0();
              local_c._0_1_ = 10;
              uStack_3c0 = CONCAT44(0x535356,(undefined4)uStack_3c0);
              FUN_00408ad0();
              uStack_3c0 = 0x535363;
              FUN_008a8650();
              uStack_58 = *(undefined4 *)(param_1 + 0x1c);
              uStack_54 = *(undefined4 *)(param_1 + 0x20);
              uStack_3c0 = CONCAT44(0x53538b,(undefined4)uStack_3c0);
              FUN_009885d0();
              uStack_3c0 = CONCAT44(auStack_60,auStack_15c);
              local_c._0_1_ = 0x14;
              uStack_3c8 = CONCAT44(piVar11,0x5353ad);
              FUN_0090a8e0();
              local_c._0_1_ = 0x15;
              uStack_3c0 = CONCAT44(auStack_31c,0x5353c6);
              FUN_00988f20();
              uStack_3c0 = CONCAT44(0x5353d2,(undefined4)uStack_3c0);
              FUN_00408ad0();
              local_c._0_1_ = 0x18;
              uStack_3c0 = CONCAT44(0x5353e6,(undefined4)uStack_3c0);
              FUN_00408ad0();
              uStack_3c0 = CONCAT44(*(undefined4 *)(DAT_012587e4[1] + iStack_390 * 4),param_1);
              uStack_3c8 = CONCAT44(auStack_2e4,piVar11);
              uStack_3cc = 0x535409;
              uVar7 = FUN_0090aaf0();
              uStack_3c0 = 0xffffffff00000000;
              local_c._0_1_ = 0x19;
              uStack_3c8 = CONCAT44(uVar7,0x53541c);
              FUN_00408ed0();
              local_c._0_1_ = 0x18;
              uStack_3c0 = CONCAT44(0x535430,(undefined4)uStack_3c0);
              FUN_00408ad0();
              uStack_3c0 = CONCAT44(0x535441,(undefined4)uStack_3c0);
              FUN_009885d0();
              uStack_3c0 = CONCAT44(auStack_124,auStack_194);
              local_c._0_1_ = 0x1a;
              uStack_3c8 = CONCAT44(auStack_2e4,0x535461);
              iVar12 = FUN_00424aa0();
              puVar15 = puStack_37c;
              local_c._0_1_ = 0x1b;
              uStack_3c0 = 0x440053547a;
              puVar9 = (undefined1 *)FUN_00aae9af();
              local_c._0_1_ = 0x1c;
              uVar5 = (undefined1)local_c;
              local_c._0_1_ = 0x1c;
              puStack_36c = puVar9;
              if (puVar9 == (undefined1 *)0x0) {
                puStack_37c = (undefined1 *)0x0;
                local_c._0_1_ = uVar5;
              }
              else {
                uStack_3c0 = 0xffffffff00000000;
                *(undefined4 *)(puVar9 + 0x14) = 0xf;
                *(undefined4 *)(puVar9 + 0x10) = 0;
                *puVar9 = 0;
                uStack_3c8 = CONCAT44(iVar12,0x5354a6);
                FUN_00408ed0();
                local_c._0_1_ = 0x1d;
                uStack_3c0 = 0xffffffff00000000;
                *(undefined4 *)(puVar9 + 0x30) = 0xf;
                *(undefined4 *)(puVar9 + 0x2c) = 0;
                puVar9[0x1c] = 0;
                uStack_3c8 = CONCAT44(iVar12 + 0x1c,0x5354c9);
                FUN_00408ed0();
                *(undefined1 **)(puVar9 + 0x38) = puVar15;
                *(undefined4 *)(puVar9 + 0x3c) = 0;
                puVar9[0x40] = 0;
                puStack_37c = puVar9;
              }
              puVar9 = puStack_37c;
              if (iStack_378 != 0) {
                *(undefined1 **)(puVar15 + 0x3c) = puStack_37c;
                puVar9 = puStack_380;
              }
              puStack_380 = puVar9;
              uStack_3c0 = CONCAT44(0x535506,(undefined4)uStack_3c0);
              iStack_378 = iStack_378 + 1;
              FUN_00a39a80();
              local_c._0_1_ = 0x18;
              uStack_3c0 = CONCAT44(0x53551a,(undefined4)uStack_3c0);
              FUN_00408ad0();
              uStack_3c0 = CONCAT44(0x53552b,(undefined4)uStack_3c0);
              FUN_009885d0();
              local_c._0_1_ = 0x1e;
              uStack_3c0 = CONCAT44(0x535544,(undefined4)uStack_3c0);
              FUN_009885d0();
              local_c._0_1_ = 0x1f;
              puStack_36c = auStack_438;
              uVar7 = *(undefined4 *)
                       (*(int *)(DAT_012588e8 + 0xacc) +
                       *(int *)(*(int *)(DAT_012587e4[1] + iStack_390 * 4) + 0xbe4) * 4);
              uVar18 = *(undefined4 *)(param_1 + 0x20);
              uVar17 = *(undefined4 *)(param_1 + 0x1c);
              uVar16 = 0;
              puVar13 = auStack_2e4;
              ppuVar14 = &puStack_380;
              FUN_006a4f40(ppuVar14,uVar7,puVar13,0,uVar17,uVar18,uStack_394,iStack_390);
              uVar10 = FUN_006a55b0();
              FUN_006a7ed0(auStack_438,uVar10,ppuVar14,uVar7,puVar13,uVar16,uVar17,uVar18,uStack_394
                           ,iStack_390);
              local_c._0_1_ = 0x20;
              uVar7 = FUN_006a4f40();
              local_c._0_1_ = 0x1f;
              FUN_0042bb30(uVar7);
              uStack_3c0 = CONCAT44(0x5355fc,(undefined4)uStack_3c0);
              FUN_00408ad0();
              uStack_3c0 = CONCAT44(0x535608,(undefined4)uStack_3c0);
              FUN_00408ad0();
              uStack_3c0 = CONCAT44(0x535614,(undefined4)uStack_3c0);
              FUN_00408ad0();
              uStack_3c0 = CONCAT44(&puStack_380,0x53561e);
              FUN_0042b9f0();
            }
            uStack_2ec = 0xf;
            iStack_2f0 = 0;
            auStack_300[0] = auStack_300[0] & 0xffffff00;
            puVar13 = *(undefined4 **)(local_32c + iVar8);
            local_388 = 0x2d2d2d;
            uStack_394 = 0x2d2d2d;
            iStack_390 = 0;
            iVar12 = local_32c;
            while ((local_c._0_1_ = 0x21, *(undefined4 **)(iVar12 + iVar8) <= puVar13 &&
                   (puVar13 < *(undefined4 **)(iVar12 + 4 + iVar8)))) {
              uStack_354 = *puVar13;
              iStack_350 = puVar13[1];
              puStack_36c = (undefined1 *)*puVar13;
              iVar1 = *(int *)(DAT_012587e4[1] + puVar13[1] * 4);
              puVar13 = puVar13 + 2;
              if (0 < (int)(*(int *)(iVar1 + 0x9dc) - *(int *)(iVar1 + 0x9d8) & 0xfffffffcU)) {
                if (iStack_390 == 0) {
                  uStack_3c0 = CONCAT44(0x5356c5,(undefined4)uStack_3c0);
                  uVar7 = FUN_0055dd40();
                  uStack_3c0 = 0xffffffff00000000;
                  local_c._0_1_ = 0x22;
                  uStack_3c8 = CONCAT44(uVar7,0x5356dd);
                  FUN_00448aa0();
                  local_c._0_1_ = 0x21;
                  if (0xf < uStack_1d4) {
                    uStack_3c0 = CONCAT44(uStack_1e8,&UNK_005356fc);
                    /* WARNING: Subroutine does not return */
                    FUN_00aae91b();
                  }
                  uStack_394 = uStack_354;
                  iStack_390 = iStack_350;
                  uStack_1d4 = 0xf;
                  uStack_1d8 = 0;
                  uStack_1e8 = uStack_1e8 & 0xffffff00;
                  iVar12 = local_32c;
                }
                else {
                  uStack_3c0 = CONCAT44(0x535744,(undefined4)uStack_3c0);
                  uVar7 = FUN_0055dd40();
                  local_c._0_1_ = 0x23;
                  uStack_3c0 = CONCAT44(uVar7,0x53575e);
                  uVar7 = FUN_00988fa0();
                  uStack_3c0 = 0xffffffff00000000;
                  local_c._0_1_ = 0x24;
                  uStack_3c8 = CONCAT44(uVar7,0x535779);
                  FUN_00448aa0();
                  if (0xf < uStack_260) {
                    uStack_3c0 = CONCAT44(uStack_274,&UNK_00535790);
                    /* WARNING: Subroutine does not return */
                    FUN_00aae91b();
                  }
                  local_c._0_1_ = 0x21;
                  uStack_260 = 0xf;
                  uStack_264 = 0;
                  uStack_274 = uStack_274 & 0xffffff00;
                  if (0xf < uStack_244) {
                    uStack_3c0 = CONCAT44(uStack_258,&UNK_005357cc);
                    /* WARNING: Subroutine does not return */
                    FUN_00aae91b();
                  }
                  uStack_244 = 0xf;
                  uStack_248 = 0;
                  uStack_258 = uStack_258 & 0xffffff00;
                  iVar12 = local_32c;
                }
              }
            }
            if ((int)(*(int *)(iVar12 + 4 + iVar8) - *(int *)(iVar12 + iVar8) & 0xfffffff8U) < 0x21)
            {
LAB_00535823:
              bVar2 = false;
            }
            else {
              uStack_3c0 = CONCAT44(piVar11,0x535814);
              iVar8 = FUN_004f68b0();
              bVar4 = true;
              bVar2 = true;
              if (*(int *)(iVar8 + 0x10) == 0) goto LAB_00535823;
            }
            if ((bVar4) && (bVar4 = false, 0xf < uStack_2d0)) {
              uStack_3c0 = CONCAT44(auStack_2e4[0],&UNK_0053584a);
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            if (bVar2) {
              uStack_3c0 = CONCAT44(piVar11,0x535868);
              uVar7 = FUN_004f68b0();
              uStack_3c0 = CONCAT44(uVar7,auStack_290);
              local_c._0_1_ = 0x25;
              uStack_3c8 = CONCAT44(0x53587e,(undefined4)uStack_3c8);
              FUN_009a8ee0();
              local_c._0_1_ = 0x26;
              uStack_3c0 = CONCAT44(0x53588d,(undefined4)uStack_3c0);
              iVar8 = FUN_00475500();
              uStack_3c8 = *(undefined8 *)(iVar8 + 0x6c);
              uStack_3c0 = *(undefined8 *)(iVar8 + 0x74);
              uStack_3cc = 0x5358b3;
              uVar7 = FUN_009a9880();
              uStack_3c0 = 0xffffffff00000000;
              local_c._0_1_ = 0x27;
              uStack_3c8 = CONCAT44(uVar7,0x5358cb);
              FUN_00408ed0();
              if (0xf < uStack_308) {
                uStack_3c0 = CONCAT44(auStack_31c[0],&UNK_005358e6);
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b();
              }
              uStack_308 = 0xf;
              uStack_30c = 0;
              auStack_31c[0] = auStack_31c[0] & 0xffffff00;
              local_c._0_1_ = 0x25;
              uStack_3c0 = CONCAT44(auStack_290,0x535917);
              FUN_009a9740();
              local_c._0_1_ = 0x21;
              if (0xf < uStack_2d0) {
                uStack_3c0 = CONCAT44(auStack_2e4[0],&UNK_00535935);
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b();
              }
            }
            if ((iStack_2f0 != 0) && (iStack_390 != 0)) {
              uStack_3c0 = CONCAT44(param_1,0x53595f);
              FUN_005061e0();
              uStack_3c0 = CONCAT44(0x535968,(undefined4)uStack_3c0);
              FUN_004e9500();
              local_c._0_1_ = 0x28;
              uStack_3c0 = CONCAT44(0x535981,(undefined4)uStack_3c0);
              FUN_009885d0();
              uStack_3c0 = CONCAT44(auStack_300,auStack_2e4);
              local_c._0_1_ = 0x29;
              uStack_3c8 = CONCAT44(auStack_15c,0x5359a1);
              iVar8 = FUN_00424aa0();
              puVar15 = puStack_360;
              local_c._0_1_ = 0x2a;
              uStack_3c0 = 0x44005359ba;
              puVar9 = (undefined1 *)FUN_00aae9af();
              local_c._0_1_ = 0x2b;
              uVar5 = (undefined1)local_c;
              local_c._0_1_ = 0x2b;
              puStack_36c = puVar9;
              if (puVar9 == (undefined1 *)0x0) {
                puStack_360 = (undefined1 *)0x0;
                local_c._0_1_ = uVar5;
              }
              else {
                uStack_3c0 = 0xffffffff00000000;
                *(undefined4 *)(puVar9 + 0x14) = 0xf;
                *(undefined4 *)(puVar9 + 0x10) = 0;
                *puVar9 = 0;
                uStack_3c8 = CONCAT44(iVar8,0x5359e6);
                FUN_00408ed0();
                local_c._0_1_ = 0x2c;
                uStack_3c0 = 0xffffffff00000000;
                *(undefined4 *)(puVar9 + 0x30) = 0xf;
                *(undefined4 *)(puVar9 + 0x2c) = 0;
                puVar9[0x1c] = 0;
                uStack_3c8 = CONCAT44(iVar8 + 0x1c,0x535a09);
                FUN_00408ed0();
                *(undefined1 **)(puVar9 + 0x38) = puVar15;
                *(undefined4 *)(puVar9 + 0x3c) = 0;
                puVar9[0x40] = 0;
                puStack_360 = puVar9;
              }
              puVar9 = puStack_360;
              if (iStack_35c != 0) {
                *(undefined1 **)(puVar15 + 0x3c) = puStack_360;
                puVar9 = puStack_364;
              }
              puStack_364 = puVar9;
              uStack_3c0 = CONCAT44(0x535a46,(undefined4)uStack_3c0);
              iStack_35c = iStack_35c + 1;
              FUN_00a39a80();
              local_c._0_1_ = 0x28;
              uStack_3c0 = CONCAT44(0x535a5a,(undefined4)uStack_3c0);
              FUN_00408ad0();
              uStack_3c0 = CONCAT44(0x535a6b,(undefined4)uStack_3c0);
              FUN_009885d0();
              uStack_3c0 = CONCAT44(auStack_15c,piVar11);
              local_c._0_1_ = 0x2d;
              uStack_3c8 = CONCAT44(0x535a85,(undefined4)uStack_3c8);
              uVar7 = FUN_0090a830();
              uStack_3c0 = CONCAT44(uVar7,auStack_2e4);
              local_c._0_1_ = 0x2e;
              uStack_3c8 = CONCAT44(auStack_194,0x535a9e);
              iVar8 = FUN_00424aa0();
              puVar15 = puStack_360;
              local_c._0_1_ = 0x2f;
              uStack_3c0 = 0x4400535ab7;
              puVar9 = (undefined1 *)FUN_00aae9af();
              local_c._0_1_ = 0x30;
              uVar5 = (undefined1)local_c;
              local_c._0_1_ = 0x30;
              puStack_36c = puVar9;
              if (puVar9 == (undefined1 *)0x0) {
                puStack_360 = (undefined1 *)0x0;
                local_c._0_1_ = uVar5;
              }
              else {
                uStack_3c0 = 0xffffffff00000000;
                *(undefined4 *)(puVar9 + 0x14) = 0xf;
                *(undefined4 *)(puVar9 + 0x10) = 0;
                *puVar9 = 0;
                uStack_3c8 = CONCAT44(iVar8,0x535ae3);
                FUN_00408ed0();
                local_c._0_1_ = 0x31;
                uStack_3c0 = 0xffffffff00000000;
                *(undefined4 *)(puVar9 + 0x30) = 0xf;
                *(undefined4 *)(puVar9 + 0x2c) = 0;
                puVar9[0x1c] = 0;
                uStack_3c8 = CONCAT44(iVar8 + 0x1c,0x535b06);
                FUN_00408ed0();
                *(undefined1 **)(puVar9 + 0x38) = puVar15;
                *(undefined4 *)(puVar9 + 0x3c) = 0;
                puVar9[0x40] = 0;
                puStack_360 = puVar9;
              }
              puVar9 = puStack_360;
              if (iStack_35c != 0) {
                *(undefined1 **)(puVar15 + 0x3c) = puStack_360;
                puVar9 = puStack_364;
              }
              puStack_364 = puVar9;
              uStack_3c0 = CONCAT44(0x535b43,(undefined4)uStack_3c0);
              iStack_35c = iStack_35c + 1;
              FUN_00a39a80();
              uStack_3c0 = CONCAT44(0x535b4f,(undefined4)uStack_3c0);
              FUN_00408ad0();
              local_c._0_1_ = 0x28;
              uStack_3c0 = CONCAT44(0x535b63,(undefined4)uStack_3c0);
              FUN_00408ad0();
              uStack_3c0 = CONCAT44(0x535b74,(undefined4)uStack_3c0);
              FUN_009885d0();
              local_c._0_1_ = 0x32;
              uStack_3c0 = CONCAT44(0x535b8d,(undefined4)uStack_3c0);
              FUN_009885d0();
              local_c._0_1_ = 0x33;
              puStack_36c = auStack_438;
              uVar7 = *(undefined4 *)
                       (*(int *)(DAT_012588e8 + 0xacc) +
                       *(int *)(*(int *)(DAT_012587e4[1] + iStack_390 * 4) + 0xbe4) * 4);
              uVar18 = *(undefined4 *)(param_1 + 0x20);
              uVar17 = *(undefined4 *)(param_1 + 0x1c);
              uVar16 = 0;
              puVar15 = auStack_194;
              ppuVar14 = &puStack_364;
              FUN_006a4f40(ppuVar14,uVar7,puVar15,0,uVar17,uVar18,uStack_394,iStack_390);
              uVar10 = FUN_006a55b0();
              FUN_006a7ed0(auStack_438,uVar10,ppuVar14,uVar7,puVar15,uVar16,uVar17,uVar18,uStack_394
                           ,iStack_390);
              local_c._0_1_ = 0x34;
              uVar7 = FUN_006a4f40();
              local_c._0_1_ = 0x33;
              FUN_0042bb30(uVar7);
              uStack_3c0 = CONCAT44(0x535c42,(undefined4)uStack_3c0);
              FUN_00408ad0();
              uStack_3c0 = CONCAT44(0x535c4e,(undefined4)uStack_3c0);
              FUN_00408ad0();
              uStack_3c0 = CONCAT44(&puStack_364,0x535c58);
              FUN_0042b9f0();
            }
            if (0xf < uStack_2ec) {
              uStack_3c0 = CONCAT44(auStack_300[0],&UNK_00535c73);
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            local_c = CONCAT31(local_c._1_3_,1);
            uStack_2ec = 0xf;
            iStack_2f0 = 0;
            auStack_300[0] = auStack_300[0] & 0xffffff00;
            if (0xf < uStack_298) {
              uStack_3c0 = CONCAT44(auStack_2ac[0],&UNK_00535cad);
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
          }
          local_38c = local_38c + 1;
        } while (local_38c < local_370);
      }
      iVar12 = local_32c;
      iVar8 = local_344;
      if (local_32c != 0) {
        uStack_3c0 = CONCAT44(local_328,0x535cdd);
        FUN_004651b0();
        uStack_3c0 = CONCAT44(iVar12,&UNK_00535ce3);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      if (local_344 != 0) {
        uStack_3c0 = CONCAT44(local_340,0x535cfe);
        FUN_004651b0();
        uStack_3c0 = CONCAT44(iVar8,&UNK_00535d04);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    else {
      local_370 = *DAT_012587e4;
      local_398 = 0;
      if (0 < local_370) {
        do {
          iVar8 = *(int *)(piVar11[1] + local_398 * 4);
          local_384 = *(int *)(iVar8 + 0x20);
          local_388 = *(undefined4 *)(iVar8 + 0x1c);
          if (((local_384 != 0) &&
              ((((char)local_388 != 'R' || ((char)((uint)local_388 >> 8) != 'E')) ||
               ((char)((uint)local_388 >> 0x10) != 'B')))) &&
             (local_384 != *(int *)(param_1 + 0x20))) {
            uStack_3c0 = 0;
            uStack_3c8 = CONCAT44(local_108,&local_388);
            iStack_3d0 = param_1;
            uStack_3d4 = 0x535d90;
            uStack_3cc = uVar7;
            local_100 = local_388;
            local_fc = local_384;
            FUN_00535dc0();
          }
          local_398 = local_398 + 1;
        } while (local_398 < local_370);
      }
    }
  }
  ExceptionList = local_14;
  return;
}

