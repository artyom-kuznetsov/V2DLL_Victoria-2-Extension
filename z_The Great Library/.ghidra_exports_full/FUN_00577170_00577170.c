// FUN_00577170 @ 00577170 body=[[00577170, 00577358] [0057735c, 005773b6] [005773c0, 0057749f] [005774a3, 005774d7] [005774db, 00577505] [00577509, 00577535] [00577539, 00577636] [0057763a, 0057766e] [00577672, 00577696] [0057769a, 005776bd] [005776c1, 00577927] [0057792b, 005779cc] [005779d0, 00577b16] [00577b1a, 00577cd0] [00577cd4, 00577fd4] [00577fd8, 00577fed] [00577ff1, 00578025] [0057802e, 00578052] [00578056, 00578085] [00578089, 005780bc] [005780c0, 005780de] [005780e2, 00578105] [00578109, 0057811f]]


void FUN_00577170(uint *param_1)

{
  uint ***pppuVar1;
  uint ***pppuVar2;
  int iVar3;
  undefined1 uVar4;
  char cVar5;
  uint **ppuVar6;
  uint **ppuVar7;
  uint *puVar8;
  undefined4 uVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  uint *puVar13;
  uint **ppuVar14;
  undefined4 unaff_EDI;
  uint uVar15;
  bool bVar16;
  uint *local_470;
  int *piStack_46c;
  undefined4 ****ppppuStack_468;
  undefined4 ****ppppuStack_464;
  uint *local_460;
  undefined4 ****local_45c;
  uint ***pppuStack_458;
  undefined4 ****ppppuStack_454;
  uint **local_444 [2];
  uint *local_43c;
  uint **local_438;
  uint **ppuStack_430;
  int *local_42c;
  uint **ppuStack_428;
  uint local_424;
  uint local_420 [2];
  undefined4 ****ppppuStack_418;
  undefined4 ****ppppuStack_414;
  undefined4 local_410;
  uint local_40c;
  uint local_404;
  uint uStack_400;
  undefined4 local_3f4;
  uint local_3f0;
  uint *local_3e8;
  int local_3e4;
  undefined4 local_3e0;
  undefined4 local_3d8;
  uint local_3d4;
  uint **local_3cc;
  uint **local_3c8;
  undefined4 local_3c4;
  uint local_3bc [4];
  int local_3ac;
  uint local_3a8;
  uint *local_3a0;
  uint *local_39c;
  undefined4 local_398;
  uint local_390;
  uint local_38c;
  undefined4 local_388;
  uint local_380 [4];
  undefined4 local_370;
  uint local_36c;
  uint local_364;
  undefined4 local_354;
  uint local_350;
  undefined4 ****local_348 [4];
  undefined4 uStack_338;
  uint local_334;
  undefined4 ****local_32c [4];
  undefined4 uStack_31c;
  uint local_318;
  uint local_310;
  undefined4 local_300;
  uint local_2fc;
  uint local_2f4;
  undefined4 local_2e4;
  uint local_2e0;
  undefined1 local_2d8;
  undefined4 local_2c8;
  undefined4 local_2c4;
  undefined1 local_2bc;
  undefined4 local_2ac;
  undefined4 local_2a8;
  undefined **appuStack_228 [48];
  undefined **appuStack_168 [19];
  uint auStack_11c [66];
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00b9e7aa;
  pvStack_14 = ExceptionList;
  local_42c = (int *)0x0;
  local_2c4 = 0xf;
  local_2c8 = 0;
  local_2d8 = 0;
  local_2a8 = 0xf;
  local_2ac = 0;
  local_2bc = 0;
  local_3a0 = (uint *)0x0;
  local_39c = (uint *)0x0;
  local_398 = 0;
  local_390 = 0;
  local_38c = 0;
  local_388 = 0;
  local_3cc = (uint **)0x0;
  local_3c8 = (uint **)0x0;
  local_3c4 = 0;
  local_c._0_1_ = 4;
  local_c._1_3_ = 0;
  ppppuStack_454 = (undefined4 ****)0x57722c;
  ExceptionList = &pvStack_14;
  FUN_004367c0();
  local_c._0_1_ = 5;
  ppppuStack_454 = (undefined4 ****)0x577249;
  FUN_00436780();
  local_c._0_1_ = 6;
  iVar11 = *(int *)(DAT_012586e0 + 0x70);
  local_424 = 1;
  if (iVar11 != 0) {
    local_45c = local_348[0];
    if (local_334 < 0x10) {
      local_45c = local_348;
    }
    ppppuStack_454 = (undefined4 ****)&DAT_00dfa554;
    pppuStack_458 = &local_3cc;
    local_460 = (uint *)0x577292;
    FUN_00992240();
  }
  if (iVar11 != 1) {
    local_3e8 = (uint *)0x0;
    local_3e4 = 0;
    local_3e0 = 0;
    local_c = CONCAT31(local_c._1_3_,7);
    local_45c = local_32c[0];
    if (local_318 < 0x10) {
      local_45c = local_32c;
    }
    ppppuStack_454 = (undefined4 ****)&DAT_00dfa554;
    pppuStack_458 = (uint ***)&local_3e8;
    local_460 = (uint *)0x5772d9;
    FUN_00992240();
    puVar8 = (uint *)((local_3e4 - (int)local_3e8) / 0x1c);
    puVar13 = local_3e8;
    if (0 < (int)puVar8) {
      do {
        local_43c = puVar8;
        ppuVar7 = local_3c8;
        pppuStack_458 = (uint ***)local_3c8;
        local_45c = (undefined4 *****)0x577316;
        ppppuStack_454 = (undefined4 ****)puVar13;
        ppuVar6 = (uint **)FUN_0045c080();
        if (ppuVar6 == ppuVar7) {
          ppppuStack_454 = (undefined4 ****)0x57732b;
          FUN_00a840b0();
        }
        puVar13 = puVar13 + 7;
        puVar8 = (uint *)((int)local_43c + -1);
      } while ((int)local_43c + -1 != 0);
      local_43c = (uint *)0x0;
    }
    puVar8 = local_3e8;
    local_c._0_1_ = 6;
    if (local_3e8 != (uint *)0x0) {
      ppppuStack_454 = (undefined4 ****)0x577353;
      FUN_00413860();
      ppppuStack_454 = (undefined4 ****)puVar8;
                    /* WARNING: Subroutine does not return */
      pppuStack_458 = (uint ***)&UNK_00577359;
      FUN_00aae91b();
    }
  }
  uVar15 = local_390;
  ppppuStack_454 =
       (undefined4 ****)
       (((int)local_3c8 - (int)local_3cc) / 0x1c + (int)(local_38c - local_390) / 0x1c);
  pppuStack_458 = (uint ***)0x5773af;
  FUN_00419660();
  local_438 = (uint **)uVar15;
  while ((local_390 <= local_438 && (local_438 < local_38c))) {
    ppppuStack_454 = (undefined4 ****)0xffffffff;
    pppuStack_458 = (uint ***)0x0;
    local_45c = (undefined4 ****)local_438;
    local_3f0 = 0xf;
    local_3f4 = 0;
    local_404 = local_404 & 0xffffff00;
    local_460 = (uint *)0x577405;
    local_438 = (uint **)((int)local_438 + 0x1c);
    FUN_00408ed0();
    local_c._0_1_ = 8;
    ppppuStack_454 = (undefined4 ****)0x1;
    pppuStack_458 = (uint ***)&DAT_00dedc68;
    local_3a8 = 0xf;
    local_3ac = 0;
    local_3bc[0] = local_3bc[0] & 0xffffff00;
    local_45c = (undefined4 *****)0x577435;
    FUN_00409350();
    ppppuStack_454 = (undefined4 ****)local_3bc;
    local_c._0_1_ = 9;
    pppuStack_458 = (uint ***)0x577458;
    FUN_00988f20();
    ppppuStack_454 = (undefined4 ****)&local_404;
    local_c._0_1_ = 10;
    pppuStack_458 = (uint ***)0x577473;
    FUN_00988f20();
    local_c._0_1_ = 0xb;
    ppppuStack_454 = (undefined4 ****)0x577489;
    FUN_00a840b0();
    if (0xf < local_36c) {
      ppppuStack_454 = (undefined4 ****)local_380[0];
                    /* WARNING: Subroutine does not return */
      pppuStack_458 = (uint ***)&UNK_005774a0;
      FUN_00aae91b();
    }
    local_36c = 0xf;
    local_370 = 0;
    local_380[0] = local_380[0] & 0xffffff00;
    if (0xf < local_2e0) {
      ppppuStack_454 = (undefined4 ****)local_2f4;
                    /* WARNING: Subroutine does not return */
      pppuStack_458 = (uint ***)&UNK_005774d8;
      FUN_00aae91b();
    }
    local_2e0 = 0xf;
    local_2e4 = 0;
    local_2f4 = local_2f4 & 0xffffff00;
    if (0xf < local_3a8) {
      ppppuStack_454 = (undefined4 ****)local_3bc[0];
                    /* WARNING: Subroutine does not return */
      pppuStack_458 = (uint ***)&UNK_00577506;
      FUN_00aae91b();
    }
    local_c._0_1_ = 6;
    uVar4 = (undefined1)local_c;
    local_c._0_1_ = 6;
    local_3a8 = 0xf;
    local_3ac = 0;
    local_3bc[0] = local_3bc[0] & 0xffffff00;
    if (0xf < local_3f0) {
      ppppuStack_454 = (undefined4 ****)local_404;
                    /* WARNING: Subroutine does not return */
      pppuStack_458 = (uint ***)&UNK_00577536;
      FUN_00aae91b();
    }
    local_3f0 = 0xf;
    local_3f4 = 0;
    local_404 = local_404 & 0xffffff00;
    local_c._0_1_ = uVar4;
  }
  local_438 = local_3cc;
  while ((local_3cc <= local_438 && (local_438 < local_3c8))) {
    ppppuStack_454 = (undefined4 ****)0xffffffff;
    pppuStack_458 = (uint ***)0x0;
    local_45c = (undefined4 ****)local_438;
    local_40c = 0xf;
    local_410 = 0;
    local_420[0] = local_420[0] & 0xffffff00;
    local_460 = (uint *)0x5775a5;
    local_438 = local_438 + 7;
    FUN_00408ed0();
    local_c._0_1_ = 0xc;
    ppppuStack_454 = (undefined4 ****)0x1;
    pppuStack_458 = (uint ***)&DAT_00dedc68;
    local_3d4 = 0xf;
    local_3d8 = 0;
    local_3e8 = (uint *)((uint)local_3e8 & 0xffffff00);
    local_45c = (undefined4 *****)0x5775cf;
    FUN_00409350();
    ppppuStack_454 = (undefined4 ****)&local_3e8;
    local_c._0_1_ = 0xd;
    pppuStack_458 = (uint ***)0x5775ef;
    FUN_00988f20();
    ppppuStack_454 = (undefined4 ****)local_420;
    local_c._0_1_ = 0xe;
    pppuStack_458 = (uint ***)0x57760a;
    FUN_00988f20();
    local_c._0_1_ = 0xf;
    ppppuStack_454 = (undefined4 ****)0x577620;
    FUN_00a840b0();
    if (0xf < local_2fc) {
      ppppuStack_454 = (undefined4 ****)local_310;
                    /* WARNING: Subroutine does not return */
      pppuStack_458 = (uint ***)&UNK_00577637;
      FUN_00aae91b();
    }
    local_2fc = 0xf;
    local_300 = 0;
    local_310 = local_310 & 0xffffff00;
    if (0xf < local_350) {
      ppppuStack_454 = (undefined4 ****)local_364;
                    /* WARNING: Subroutine does not return */
      pppuStack_458 = (uint ***)&UNK_0057766f;
      FUN_00aae91b();
    }
    local_350 = 0xf;
    local_354 = 0;
    local_364 = local_364 & 0xffffff00;
    if (0xf < local_3d4) {
      ppppuStack_454 = (undefined4 ****)local_3e8;
                    /* WARNING: Subroutine does not return */
      pppuStack_458 = (uint ***)&UNK_00577697;
      FUN_00aae91b();
    }
    local_c._0_1_ = 6;
    uVar4 = (undefined1)local_c;
    local_c._0_1_ = 6;
    local_3d4 = 0xf;
    local_3d8 = 0;
    local_3e8 = (uint *)((uint)local_3e8 & 0xffffff00);
    if (0xf < local_40c) {
      ppppuStack_454 = (undefined4 ****)local_420[0];
                    /* WARNING: Subroutine does not return */
      pppuStack_458 = (uint ***)&UNK_005776be;
      FUN_00aae91b();
    }
    local_40c = 0xf;
    local_410 = 0;
    local_420[0] = local_420[0] & 0xffffff00;
    local_c._0_1_ = uVar4;
  }
  if (DAT_01258810 == (uint **)0x0) {
    ppppuStack_454 = (undefined4 ****)0x390;
    pppuStack_458 = (uint ***)0x5776ea;
    ppuVar7 = (uint **)FUN_00aae9af();
    local_c._0_1_ = 0x10;
    local_438 = ppuVar7;
    if (ppuVar7 == (uint **)0x0) {
      DAT_01258810 = (uint **)0x0;
    }
    else {
      ppppuStack_454 = (undefined4 ****)0x0;
      local_43c = (uint *)&local_470;
      local_45c = (undefined4 *****)0xf;
      local_460 = (uint *)0x0;
      local_470 = (uint *)((uint)local_470 & 0xffffff00);
      FUN_00409350("notech",6);
      FUN_00569c70(ppuVar7);
      *ppuVar7 = (uint *)CNullTechnology::vftable;
      DAT_01258810 = ppuVar7;
    }
    local_c._0_1_ = 6;
  }
  ppuVar7 = DAT_01258810;
  pppuVar1 = (uint ***)param_1[1];
  local_444[0] = DAT_01258810;
  if (local_444 < pppuVar1) {
    pppuVar2 = (uint ***)*param_1;
    if (pppuVar2 <= local_444) {
      if (pppuVar1 == (uint ***)param_1[2]) {
        ppppuStack_454 = (undefined4 ****)0x577773;
        FUN_00a513f0();
      }
      if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
        *(undefined4 *)param_1[1] =
             *(undefined4 *)(*param_1 + ((int)local_444 - (int)pppuVar2 >> 2) * 4);
      }
      param_1[1] = param_1[1] + 4;
      goto LAB_005777a5;
    }
  }
  if (pppuVar1 == (uint ***)param_1[2]) {
    ppppuStack_454 = (undefined4 ****)0x577798;
    FUN_00a513f0();
  }
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[1] = ppuVar7;
  }
  param_1[1] = param_1[1] + 4;
LAB_005777a5:
  pppuStack_458 = (uint ***)0x5777b1;
  ppppuStack_454 = (undefined4 ****)ppuVar7;
  FUN_0057b020();
  local_3e8 = local_3a0;
  uVar4 = (undefined1)local_c;
  do {
    local_c._0_1_ = uVar4;
    uVar15 = local_390;
    puVar8 = local_3a0;
    ppuVar7 = local_3cc;
    if ((local_3e8 < local_3a0) || (local_39c <= local_3e8)) {
      if (0xf < local_318) {
        ppppuStack_454 = local_32c[0];
                    /* WARNING: Subroutine does not return */
        pppuStack_458 = (uint ***)&UNK_00578053;
        FUN_00aae91b();
      }
      local_318 = 0xf;
      uStack_31c = 0;
      local_32c[0] = (undefined4 ****)((uint)local_32c[0] & 0xffffff00);
      if (0xf < local_334) {
        ppppuStack_454 = local_348[0];
                    /* WARNING: Subroutine does not return */
        pppuStack_458 = (uint ***)&UNK_00578086;
        FUN_00aae91b();
      }
      local_334 = 0xf;
      uStack_338 = 0;
      local_348[0] = (undefined4 ****)((uint)local_348[0] & 0xffffff00);
      if (local_3cc != (uint **)0x0) {
        ppppuStack_454 = (undefined4 ****)0x5780b7;
        FUN_00413860();
        ppppuStack_454 = (undefined4 ****)ppuVar7;
                    /* WARNING: Subroutine does not return */
        pppuStack_458 = (uint ***)&UNK_005780bd;
        FUN_00aae91b();
      }
      if (local_390 != 0) {
        ppppuStack_454 = (undefined4 ****)0x5780d9;
        FUN_00413860();
        ppppuStack_454 = (undefined4 ****)uVar15;
                    /* WARNING: Subroutine does not return */
        pppuStack_458 = (uint ***)&UNK_005780df;
        FUN_00aae91b();
      }
      if (local_3a0 != (uint *)0x0) {
        ppppuStack_454 = (undefined4 ****)0x578100;
        FUN_00413860();
        ppppuStack_454 = (undefined4 ****)puVar8;
                    /* WARNING: Subroutine does not return */
        pppuStack_458 = (uint ***)&UNK_00578106;
        FUN_00aae91b();
      }
      ExceptionList = pvStack_14;
      return;
    }
    ppppuStack_454 = (undefined4 ****)0xffffffff;
    pppuStack_458 = (uint ***)0x0;
    local_45c = (undefined4 ****)local_3e8;
    local_3f0 = 0xf;
    local_3f4 = 0;
    local_404 = local_404 & 0xffffff00;
    local_460 = (uint *)0x577805;
    local_3e8 = local_3e8 + 7;
    FUN_00408ed0();
    ppppuStack_454 = (undefined4 ****)0x360;
    local_c._0_1_ = 0x11;
    pppuStack_458 = (uint ***)0x577817;
    ppuVar7 = (uint **)FUN_00aae9af();
    local_c._0_1_ = 0x12;
    local_438 = ppuVar7;
    if (ppuVar7 == (uint **)0x0) {
      local_444[0] = (uint **)0x0;
    }
    else {
      ppppuStack_454 = (undefined4 ****)0xf;
      pppuStack_458 = (uint ***)0xded978;
      local_40c = 0xf;
      local_410 = 0;
      local_420[0] = local_420[0] & 0xffffff00;
      local_45c = (undefined4 ****)0x57784b;
      FUN_00409350();
      local_c = CONCAT31(local_c._1_3_,0x13);
      local_42c = (int *)((uint)local_42c | 1);
      ppppuStack_454 = (undefined4 ****)0x114;
      pppuStack_458 = (uint ***)0x577862;
      puVar8 = (uint *)FUN_00aae9af();
      local_c = 0x14;
      local_43c = puVar8;
      if (puVar8 == (uint *)0x0) {
        puVar8 = (uint *)0x0;
      }
      else {
        ppppuStack_454 = (undefined4 ****)&local_404;
        pppuStack_458 = (uint ***)0x577886;
        FUN_0098ffc0();
        *puVar8 = (uint)&PTR_FUN_00e37c3c;
      }
      *ppuVar7 = (uint *)&PTR_FUN_00e38524;
      ppuVar7[1] = (uint *)0x0;
      ppuVar7[2] = (uint *)0x0;
      ppuVar7[3] = (uint *)0x0;
      *(undefined1 *)(ppuVar7 + 4) = 0;
      local_c = 0x15;
      ppppuStack_454 = (undefined4 ****)0xffffffff;
      *(undefined1 *)(ppuVar7 + 5) = 0;
      ppuVar7[7] = puVar8;
      pppuStack_458 = (uint ***)0x0;
      local_45c = (undefined4 ****)local_420;
      ppuVar7[0xd0] = (uint *)0xf;
      ppuVar7[0xcf] = (uint *)0x0;
      *(undefined1 *)(ppuVar7 + 0xcb) = 0;
      local_460 = (uint *)0x5778d2;
      FUN_00408ed0();
      ppuVar7[0xd2] = (uint *)0x0;
      ppuVar7[0xd3] = (uint *)0x0;
      ppuVar7[0xd4] = (uint *)0x0;
      *(undefined1 *)(ppuVar7 + 0xd6) = 1;
      ppuVar7[0xd7] = (uint *)0x0;
      local_444[0] = ppuVar7;
    }
    local_c = 0x11;
    if (((uint)local_42c & 1) != 0) {
      local_42c = (int *)((uint)local_42c & 0xfffffffe);
      if (0xf < local_40c) {
        ppppuStack_454 = (undefined4 ****)local_420[0];
                    /* WARNING: Subroutine does not return */
        pppuStack_458 = (uint ***)&UNK_00577928;
        FUN_00aae91b();
      }
      local_40c = 0xf;
      local_410 = 0;
      local_420[0] = local_420[0] & 0xffffff00;
    }
    ppppuStack_454 = (undefined4 ****)0x4;
    pppuStack_458 = (uint ***)&DAT_00dfa554;
    local_45c = (undefined4 ****)&local_404;
    local_460 = (uint *)0x57794a;
    ppppuStack_454 = (undefined4 ****)FUN_005484e0();
    pppuStack_458 = (uint ***)0x57795d;
    FUN_009895f0();
    ppppuStack_454 = (undefined4 ****)0x1;
    pppuStack_458 = (uint ***)&DAT_00dedc68;
    local_45c = (undefined4 ****)&local_404;
    local_c._0_1_ = 0x17;
    local_460 = (uint *)0x577978;
    FUN_005484e0();
    ppppuStack_454 = (undefined4 ****)local_3ac;
    pppuStack_458 = (uint ***)0x577996;
    local_45c = (undefined4 ****)FUN_009895f0();
    ppppuStack_454 = (undefined4 ****)0xffffffff;
    pppuStack_458 = (uint ***)0x0;
    local_c._0_1_ = 0x18;
    local_460 = (uint *)0x5779ae;
    FUN_00408ed0();
    local_c._0_1_ = 0x17;
    if (0xf < local_350) {
      ppppuStack_454 = (undefined4 ****)local_364;
                    /* WARNING: Subroutine does not return */
      pppuStack_458 = (uint ***)&UNK_005779cd;
      FUN_00aae91b();
    }
    local_350 = 0xf;
    local_354 = 0;
    local_364 = local_364 & 0xffffff00;
    if (local_3ac == 0) {
      ppppuStack_454 = (undefined4 ****)0xe;
      pppuStack_458 = (uint ***)0xe00464;
      local_36c = 0xf;
      local_370 = 0;
      local_380[0] = local_380[0] & 0xffffff00;
      local_45c = (undefined4 ****)0x577a22;
      FUN_00409350();
      ppppuStack_454 = (undefined4 ****)0x10004;
      local_45c = (undefined4 ****)local_380;
      pppuStack_458 = (uint ***)0x822;
      local_c._0_1_ = 0x19;
      local_460 = (uint *)0x577a48;
      uVar9 = FUN_004015b0();
      ppppuStack_454 = (undefined4 ****)0x0;
      pppuStack_458 = (uint ***)0x13;
      local_45c = (undefined4 ****)0xe009cc;
      local_c = CONCAT31(local_c._1_3_,0x1a);
      ppppuStack_464 = (undefined4 ****)0x577a63;
      local_460 = (uint *)uVar9;
      FUN_00987d50();
      ppppuStack_464 = ppppuStack_414;
      if (uStack_400 < 0x10) {
        ppppuStack_464 = &ppppuStack_414;
      }
      piStack_46c = (int *)0x577a79;
      ppppuStack_468 = (undefined4 ****)uVar9;
      piVar10 = (int *)FUN_00418e30();
      ppppuStack_468 = (undefined4 ****)0x577a84;
      ppppuStack_464 = (undefined4 ****)piVar10;
      FUN_00408be0();
      uVar15 = 0;
      if ((*(byte *)(*(int *)(*piVar10 + 4) + 0xc + (int)piVar10) & 6) == 0) {
        ppppuStack_454 = (undefined4 ****)0x577a9f;
        iVar11 = (**(code **)(**(int **)(*(int *)(*piVar10 + 4) + 0x38 + (int)piVar10) + 0x34))();
        if (iVar11 == -1) {
          uVar15 = 4;
        }
      }
      if (uVar15 != 0) {
        pppuStack_458 = (uint ***)(*(uint *)((int)piVar10 + *(int *)(*piVar10 + 4) + 0xc) | uVar15);
        if (*(int *)((int)piVar10 + *(int *)(*piVar10 + 4) + 0x38) == 0) {
          pppuStack_458 = (uint ***)((uint)pppuStack_458 | 4);
        }
        ppppuStack_454 = (undefined4 ****)0x0;
        local_45c = (undefined4 ****)0x577ac8;
        FUN_00401120();
      }
      ppppuStack_454 = (undefined4 ****)appuStack_228;
      local_c._0_1_ = 0x19;
      pppuStack_458 = (uint ***)0x577add;
      FUN_00987ac0();
      ppppuStack_454 = (undefined4 ****)appuStack_228;
      appuStack_228[0] = std::ios_base::vftable;
      pppuStack_458 = (uint ***)0x577af5;
      FUN_00aad52d();
      local_c._0_1_ = 0x17;
      if (0xf < local_36c) {
        ppppuStack_454 = (undefined4 ****)local_380[0];
                    /* WARNING: Subroutine does not return */
        pppuStack_458 = (uint ***)&UNK_00577b17;
        FUN_00aae91b();
      }
      local_36c = 0xf;
      local_370 = 0;
      local_380[0] = local_380[0] & 0xffffff00;
    }
    local_c._0_1_ = 0x17;
    local_43c = (uint *)0x0;
    ppuVar7 = DAT_01258810;
    if (DAT_01258810 == (uint **)0x0) {
      ppppuStack_454 = (undefined4 ****)0x390;
      pppuStack_458 = (uint ***)0x577b4b;
      ppuVar7 = (uint **)FUN_00aae9af();
      local_c._0_1_ = 0x1b;
      local_438 = ppuVar7;
      if (ppuVar7 == (uint **)0x0) {
        ppuVar7 = (uint **)0x0;
      }
      else {
        ppppuStack_454 = (undefined4 ****)0x0;
        ppuStack_428 = &local_470;
        local_45c = (undefined4 ****)0xf;
        local_460 = (uint *)0x0;
        local_470 = (uint *)((uint)local_470 & 0xffffff00);
        FUN_00409350("notech",6);
        FUN_00569c70(ppuVar7);
        *ppuVar7 = (uint *)CNullTechnology::vftable;
      }
      local_c._0_1_ = 0x17;
      DAT_01258810 = ppuVar7;
    }
    while( true ) {
      puVar8 = local_444[0][7];
      ppuStack_428 = ppuVar7;
      if ((char)puVar8[0x44] == '\0') {
        ppppuStack_454 = (undefined4 ****)0x577bbc;
        uVar15 = (**(code **)(*puVar8 + 4))();
        puVar8[2] = uVar15;
        if (uVar15 == 0) {
          puVar8[3] = 0x13;
        }
        *(undefined1 *)(puVar8 + 0x44) = 1;
      }
      ppuVar7 = local_444[0];
      puVar8 = puVar8 + 3;
      puVar13 = auStack_11c;
      for (iVar11 = 0x41; iVar11 != 0; iVar11 = iVar11 + -1) {
        *puVar13 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar13 = puVar13 + 1;
      }
      if (auStack_11c[0] == 0x13) break;
      ppppuStack_454 = (undefined4 ****)local_444[0];
      pppuStack_458 = (uint ***)0x577bfa;
      FUN_009a1440();
      ppppuStack_454 = (undefined4 ****)0x390;
      pppuStack_458 = (uint ***)0x577c04;
      ppuStack_430 = (uint **)FUN_00aae9af();
      local_c._0_1_ = 0x1c;
      if (ppuStack_430 == (uint **)0x0) {
        local_444[1] = (uint **)0x0;
      }
      else {
        ppppuStack_454 = (undefined4 ****)local_424;
        ppuVar14 = ppuVar7 + 9;
        local_438 = &local_470;
        local_45c = (undefined4 ****)0xf;
        local_460 = (uint *)0x0;
        local_470 = (uint *)((uint)local_470 & 0xffffff00);
        ppuVar6 = ppuVar14;
        do {
          cVar5 = *(char *)ppuVar6;
          ppuVar6 = (uint **)((int)ppuVar6 + 1);
        } while (cVar5 != '\0');
        FUN_00409350(ppuVar14,(int)ppuVar6 - ((int)ppuVar7 + 0x25));
        local_444[1] = (uint **)FUN_00569c70(ppuStack_430);
        local_424 = local_424 + 1;
      }
      local_c._0_1_ = 0x17;
      ppuStack_430 = local_444[1];
      iVar11 = DAT_0125eadc;
      if (DAT_0125eadc == 0) {
        ppppuStack_454 = (undefined4 ****)0x9c;
        pppuStack_458 = (uint ***)0x577c8b;
        ppppuStack_454 = (undefined4 ****)FUN_00aae9af();
        local_c._0_1_ = 0x1d;
        if (ppppuStack_454 == (undefined4 ****)0x0) {
          iVar11 = 0;
        }
        else {
          pppuStack_458 = (uint ***)0x577ca4;
          local_438 = (uint **)ppppuStack_454;
          iVar11 = FUN_00576fe0();
        }
        iVar3 = DAT_0125eadc;
        local_c = CONCAT31(local_c._1_3_,0x1e);
        local_438 = (uint **)0x0;
        if ((iVar11 != DAT_0125eadc) && (DAT_0125eadc != 0)) {
          ppppuStack_454 = (undefined4 ****)DAT_0125eadc;
          pppuStack_458 = (uint ***)0x577ccb;
          FUN_00576d10();
          ppppuStack_454 = (undefined4 ****)iVar3;
                    /* WARNING: Subroutine does not return */
          pppuStack_458 = (uint ***)&UNK_00577cd1;
          FUN_00aae91b();
        }
      }
      DAT_0125eadc = iVar11;
      local_c._0_1_ = 0x17;
      ppppuStack_454 = (undefined4 ****)local_3bc;
      pppuStack_458 = (uint ***)0x577cf3;
      puVar8 = (uint *)FUN_005c2ad0();
      if (puVar8 != (uint *)0x0) {
        local_444[1][0xc4] = puVar8;
      }
      pppuVar1 = (uint ***)param_1[1];
      if ((&ppuStack_430 < pppuVar1) && (pppuVar2 = (uint ***)*param_1, pppuVar2 <= &ppuStack_430))
      {
        local_438 = (uint **)((int)&ppuStack_430 - (int)pppuVar2 >> 2);
        if (pppuVar1 == (uint ***)param_1[2]) {
          uVar15 = (int)pppuVar1 - (int)pppuVar2 >> 2;
          if (0x3ffffffe < uVar15) {
LAB_0057802e:
            ppppuStack_454 = (undefined4 ****)0xdeda30;
                    /* WARNING: Subroutine does not return */
            pppuStack_458 = (uint ***)0x578038;
            FUN_00aad3ad();
          }
          uVar15 = uVar15 + 1;
          uVar12 = (int)param_1[2] - (int)pppuVar2 >> 2;
          if (uVar12 < uVar15) {
            if (0x3fffffff - (uVar12 >> 1) < uVar12) {
              ppppuStack_454 = (undefined4 ****)0x0;
            }
            else {
              ppppuStack_454 = (undefined4 ****)(uVar12 + (uVar12 >> 1));
            }
            if (ppppuStack_454 < uVar15) {
              ppppuStack_454 = (undefined4 ****)uVar15;
            }
            pppuStack_458 = (uint ***)0x577d61;
            FUN_004bf300();
          }
        }
        if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
          *(undefined4 *)param_1[1] = *(undefined4 *)(*param_1 + (int)local_438 * 4);
        }
      }
      else {
        if (pppuVar1 == (uint ***)param_1[2]) {
          uVar15 = (int)((int)pppuVar1 - *param_1) >> 2;
          if (0x3ffffffe < uVar15) goto LAB_0057802e;
          uVar15 = uVar15 + 1;
          uVar12 = (int)((int)param_1[2] - *param_1) >> 2;
          if (uVar12 < uVar15) {
            if (0x3fffffff - (uVar12 >> 1) < uVar12) {
              ppppuStack_454 = (undefined4 ****)0x0;
            }
            else {
              ppppuStack_454 = (undefined4 ****)(uVar12 + (uVar12 >> 1));
            }
            if (ppppuStack_454 < uVar15) {
              ppppuStack_454 = (undefined4 ****)uVar15;
            }
            pppuStack_458 = (uint ***)0x577dba;
            FUN_004bf300();
          }
        }
        if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
          *(undefined4 *)param_1[1] = local_444[1];
        }
      }
      ppuVar7 = local_444[1];
      param_1[1] = param_1[1] + 4;
      ppppuStack_454 = (undefined4 ****)local_444[1];
      pppuStack_458 = (uint ***)0x577ddb;
      FUN_0057b020();
      ppppuStack_454 = (undefined4 ****)local_444[0];
      pppuStack_458 = (uint ***)0x577de9;
      (*(code *)(*ppuVar7)[3])();
      piVar10 = local_42c;
      pppuStack_458 = (uint ***)0x577df6;
      cVar5 = (**(code **)(*local_42c + 0x20))();
      if (cVar5 == '\0') {
LAB_00577e6f:
        if (DAT_01258810 == (uint **)0x0) {
          ppppuStack_454 = (undefined4 ****)0x390;
          pppuStack_458 = (uint ***)0x577e82;
          ppuVar7 = (uint **)FUN_00aae9af();
          local_c._0_1_ = 0x1f;
          local_438 = ppuVar7;
          if (ppuVar7 == (uint **)0x0) {
            DAT_01258810 = (uint **)0x0;
          }
          else {
            ppppuStack_454 = (undefined4 ****)0x0;
            ppuStack_428 = &local_470;
            local_45c = (undefined4 ****)0xf;
            local_460 = (uint *)0x0;
            local_470 = (uint *)((uint)local_470 & 0xffffff00);
            FUN_00409350("notech",6);
            FUN_00569c70(ppuVar7);
            *ppuVar7 = (uint *)CNullTechnology::vftable;
            DAT_01258810 = ppuVar7;
          }
          local_c._0_1_ = 0x17;
          ppuVar7 = local_444[1];
        }
        local_43c = (uint *)((int)local_43c + 1);
        ppuVar7[0xbb] = (uint *)DAT_01258810;
      }
      else {
        puVar8 = ppuVar7[0xc9];
        puVar13 = (uint *)piVar10[0xc9];
        ppppuStack_454 = (undefined4 ****)puVar13;
        if (puVar8 <= puVar13) {
          ppppuStack_454 = (undefined4 ****)puVar8;
        }
        pppuStack_458 = (uint ***)0x577e36;
        iVar11 = FUN_00414bd0();
        bVar16 = false;
        if (iVar11 == 0) {
          if (puVar13 < puVar8) {
            uVar15 = 0xffffffff;
          }
          else {
            uVar15 = (uint)(puVar13 != puVar8);
          }
          bVar16 = uVar15 == 0;
        }
        ppuVar7 = local_444[1];
        if (!bVar16) goto LAB_00577e6f;
        local_43c = (uint *)((int)local_43c + 1);
        local_444[1][0xbb] = (uint *)ppuStack_428;
      }
    }
    ppppuStack_454 = (undefined4 ****)0x1;
    pppuStack_458 = (uint ***)0x577ef7;
    (*(code *)**local_444[0])();
    pppuStack_458 = (uint ***)0xe;
    local_45c = (undefined4 ****)0xe00464;
    local_410 = 0xf;
    ppppuStack_414 = (undefined4 *****)0x0;
    local_424 = local_424 & 0xffffff00;
    local_460 = (uint *)0x577f17;
    FUN_00409350();
    pppuStack_458 = (uint ***)0x10000;
    local_460 = &local_424;
    local_45c = (undefined4 ****)0x843;
    puStack_10._0_1_ = 0x20;
    ppppuStack_464 = (undefined4 ****)0x577f3a;
    piVar10 = (int *)FUN_004015b0();
    pppuStack_458 = (uint ***)0x0;
    local_45c = (undefined4 *****)0x14;
    local_460 = (uint *)0xe009e4;
    puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,0x21);
    ppppuStack_468 = (undefined4 ****)0x577f55;
    ppppuStack_464 = (undefined4 ****)piVar10;
    FUN_00987d50();
    ppppuStack_468 = ppppuStack_418;
    if (local_404 < 0x10) {
      ppppuStack_468 = &ppppuStack_418;
    }
    local_470 = (uint *)0x577f6f;
    piStack_46c = piVar10;
    uVar9 = FUN_00418e30();
    local_470 = (uint *)&DAT_00e009e0;
    ppppuStack_468 = (undefined4 ****)unaff_EDI;
    piStack_46c = (int *)FUN_00418e30(uVar9);
    local_470 = (uint *)0x577f8c;
    ppppuStack_454 = (undefined4 ****)FUN_00455470();
    pppuStack_458 = (uint ***)0x577f92;
    FUN_00401280();
    ppppuStack_454 = (undefined4 ****)appuStack_168;
    local_c._0_1_ = 0x20;
    pppuStack_458 = (uint ***)0x577faa;
    FUN_00987ac0();
    ppppuStack_454 = (undefined4 ****)appuStack_168;
    appuStack_168[0] = std::ios_base::vftable;
    pppuStack_458 = (uint ***)0x577fc2;
    FUN_00aad52d();
    if (0xf < local_40c) {
      ppppuStack_454 = (undefined4 ****)local_420[0];
                    /* WARNING: Subroutine does not return */
      pppuStack_458 = (uint ***)&UNK_00577fd5;
      FUN_00aae91b();
    }
    if (0xf < local_3a8) {
      ppppuStack_454 = (undefined4 ****)local_3bc[0];
                    /* WARNING: Subroutine does not return */
      pppuStack_458 = (uint ***)&UNK_00577fee;
      FUN_00aae91b();
    }
    local_c._0_1_ = 6;
    uVar4 = (undefined1)local_c;
    local_c._0_1_ = 6;
    local_3a8 = 0xf;
    local_3ac = 0;
    local_3bc[0] = local_3bc[0] & 0xffffff00;
    if (0xf < local_3f0) {
      ppppuStack_454 = (undefined4 ****)local_404;
                    /* WARNING: Subroutine does not return */
      pppuStack_458 = (uint ***)&UNK_00578026;
      FUN_00aae91b();
    }
  } while( true );
}

