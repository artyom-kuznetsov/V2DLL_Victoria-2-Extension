// FUN_00484060 @ 00484060  (requested 00484060, first bytes: 55 8B EC 83 E4 C0 6A FF)


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00484060(int param_1,int param_2)

{
  uint ****ppppuVar1;
  uint *****pppppuVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  uint ******ppppppuVar9;
  uint *******pppppppuVar10;
  undefined4 *******pppppppuVar11;
  int unaff_EBX;
  int iVar12;
  undefined4 *puVar13;
  longlong lVar14;
  char *pcVar15;
  undefined4 *******local_3b0 [2];
  undefined4 uStack_3a8;
  uint *******local_3a4;
  int local_3a0;
  uint local_39c;
  uint local_398;
  uint uStack_394;
  double dStack_390;
  undefined4 local_388;
  double local_384;
  undefined8 local_378;
  int local_370;
  undefined4 local_36c;
  int local_368;
  int local_364;
  undefined4 local_360;
  undefined4 local_35c;
  undefined8 local_358;
  undefined8 local_350;
  uint ******local_348;
  uint uStack_344;
  uint local_340;
  uint uStack_33c;
  uint uStack_338;
  undefined1 uStack_334;
  undefined4 uStack_330;
  uint uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  uint uStack_318;
  undefined1 uStack_30c;
  undefined4 uStack_308;
  undefined4 *******apppppppuStack_304 [2];
  uint uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  uint uStack_2f0;
  undefined4 uStack_2ec;
  uint uStack_2e8;
  undefined **ppuStack_26c;
  undefined **ppuStack_260;
  undefined **ppuStack_254;
  undefined **appuStack_198 [4];
  undefined **ppuStack_188;
  undefined **ppuStack_c8;
  undefined4 uStack_68;
  undefined4 uStack_5c;
  undefined4 uStack_54;
  undefined4 uStack_50;
  void *pvStack_4c;
  undefined1 *puStack_48;
  undefined4 local_44;
  
  puStack_48 = &LAB_00b9ed04;
  pvStack_4c = ExceptionList;
  local_360 = *(undefined4 *)(*(int *)(DAT_012586dc + 0x50) + 0x48);
  local_35c = *(undefined4 *)(*(int *)(DAT_012586dc + 0x50) + 0x4c);
  ExceptionList = &pvStack_4c;
  if ((DAT_013f3458 & 1) == 0) {
    DAT_013f3458 = DAT_013f3458 | 1;
    _DAT_013f24ac = 0x18d;
    _DAT_013f24a8 = CGoodsPool::vftable;
    DAT_013f24f0 = 0;
    DAT_013f24f4 = 0;
    DAT_013f24f8 = 0;
    local_44 = 1;
    ExceptionList = &pvStack_4c;
    _memset(&DAT_013f24b0,0,0x40);
    FUN_00423920();
    _atexit((_func_4879 *)&LAB_00c7ed80);
  }
  if ((DAT_013f3458 & 2) == 0) {
    DAT_013f3458 = DAT_013f3458 | 2;
    _DAT_013f255c = 0x18d;
    _DAT_013f2558 = CGoodsPool::vftable;
    DAT_013f25a0 = 0;
    DAT_013f25a4 = 0;
    _DAT_013f25a8 = 0;
    local_44 = 3;
    _memset(&DAT_013f2560,0,0x40);
    FUN_00423920();
    _atexit((_func_4879 *)&LAB_00c7ed40);
  }
  if ((DAT_013f3458 & 4) == 0) {
    DAT_013f3458 = DAT_013f3458 | 4;
    _DAT_013f2454 = 0x18d;
    _DAT_013f2450 = CGoodsPool::vftable;
    DAT_013f2498 = 0;
    DAT_013f249c = 0;
    _DAT_013f24a0 = 0;
    local_44 = 5;
    _memset(&DAT_013f2458,0,0x40);
    FUN_00423920();
    _atexit((_func_4879 *)&LAB_00c7ed00);
  }
  if ((DAT_013f3458 & 8) == 0) {
    DAT_013f3458 = DAT_013f3458 | 8;
    _DAT_013f1a9c = 0x18d;
    _DAT_013f1a98 = CGoodsPool::vftable;
    DAT_013f1ae0 = 0;
    _DAT_013f1ae4 = 0;
    _DAT_013f1ae8 = 0;
    local_44 = 7;
    _memset(&DAT_013f1aa0,0,0x40);
    FUN_00423920();
    _atexit((_func_4879 *)&LAB_00c7ecc0);
  }
  local_44 = 0xffffffff;
  FUN_00561c40();
  FUN_0047dbb0();
  local_364 = CONCAT31(local_364._1_3_,1);
  if (param_2 < 3) {
    local_364 = (uint)local_364._1_3_ << 8;
  }
  iVar8 = *(int *)(DAT_012588e8 + 0xbd4) - *(int *)(DAT_012588e8 + 0xbd0) >> 2;
  local_3a0 = DAT_012588e8;
  local_348 = (uint ******)0x0;
  iVar12 = DAT_012588e8;
  local_370 = iVar8;
  if (0 < iVar8) {
    do {
      ppppppuVar9 = local_348;
      if (local_348 == (uint ******)(((uint)local_348 / 0x14) * 0x14)) {
        FUN_00685620();
        iVar8 = local_370;
      }
      uVar7 = *(uint *)(*(int *)(iVar12 + 0xbd0) + (int)ppppppuVar9 * 4);
      local_340 = uVar7;
      if (0 < (int)(*(int *)(uVar7 + 0x9dc) - *(int *)(uVar7 + 0x9d8) & 0xfffffffcU)) {
        lVar14 = __alldiv();
        local_358 = lVar14 + CONCAT44(local_35c,local_360);
        pppppppuVar10 = *(uint ********)(uVar7 + 0x20);
        local_36c = CONCAT31(local_36c._1_3_,pppppppuVar10 == *(uint ********)(DAT_012588e8 + 0xb60)
                            );
        local_3a4 = pppppppuVar10;
        if ((DAT_013f3458 & 0x10) == 0) {
          DAT_013f3458 = DAT_013f3458 | 0x10;
          _DAT_013f2504 = 0x18d;
          _DAT_013f2500 = CGoodsPool::vftable;
          DAT_013f2548 = 0;
          DAT_013f254c = 0;
          _DAT_013f2550 = 0;
          local_44 = 0xc;
          _memset(&DAT_013f2508,0,0x40);
          FUN_00423920();
          _atexit((_func_4879 *)&LAB_00c7ec80);
          local_44 = 0xffffffff;
        }
        local_368 = (int)pppppppuVar10 * 0x58;
        FUN_0047dbb0();
        local_3b0[0] = *(undefined4 ********)(uVar7 + 0x1428);
        if (*(int *)(uVar7 + 0x142c) == 0) {
          local_39c = 0;
        }
        else {
          local_39c = *(uint *)(uVar7 + 0x142c);
        }
        if (0 < (int)local_39c) {
          FUN_0047dc20();
          pppppppuVar10 = local_3a4;
        }
        FUN_0047dbb0();
        puVar13 = (undefined4 *)(*(int *)(param_1 + 0x7f4) + (int)pppppppuVar10 * 8);
        *puVar13 = DAT_0125ba10;
        puVar13[1] = DAT_0125ba14;
        lVar14 = __alldiv();
        local_350 = lVar14 + CONCAT44(DAT_00f0ae14,DAT_00f0ae10);
        pppppppuVar10 = *(uint ********)(uVar7 + 0xe44);
        uVar6 = local_36c;
        while (local_36c = uVar6, pppppppuVar10 != (uint *******)0x0) {
          local_3b0[0] = (undefined4 *******)*pppppppuVar10;
          local_3a4 = (uint *******)pppppppuVar10[2];
          pppppuVar2 = (uint *****)local_3b0[0][0x18];
          while (pppppuVar2 != (uint *****)0x0) {
            uVar4 = (ulonglong)local_378 >> 0x20;
            local_378 = (double)CONCAT44((int)uVar4,pppppuVar2[0x89]);
            if (((0 < (int)pppppuVar2[8]) && ((int)pppppuVar2[0x61] < 0xb)) &&
               (*(char *)(pppppuVar2 + 0x62) == '\0')) {
              FUN_004dd470(pppppuVar2[6][0x4b],&DAT_013f2558,pppppuVar2 + 10,pppppuVar2[8]);
              FID_conflict__memcpy(pppppuVar2 + 0x22,&DAT_013f2560,DAT_012587f4);
              iVar12 = DAT_013f25a4 - DAT_013f25a0 >> 3;
              FUN_0043a880();
              iVar8 = 1;
              if (1 < iVar12) {
                do {
                  ppppuVar1 = pppppuVar2[0x32];
                  iVar3 = iVar8 * 2;
                  puVar13 = (undefined4 *)(DAT_013f25a0 + iVar8 * 8);
                  ppppuVar1[iVar3] = (uint ***)*puVar13;
                  iVar8 = iVar8 + 1;
                  (ppppuVar1 + iVar3)[1] = (uint ***)puVar13[1];
                } while (iVar8 < iVar12);
              }
              FUN_00482ff0(param_1,local_340,pppppuVar2);
            }
            uVar7 = local_340;
            pppppuVar2 = (uint *****)local_378;
          }
          pppppppuVar10 = local_3a4;
          uVar6 = local_36c;
          if ((char)local_364 != '\0') {
            if (local_3b0[0][0x91] != (undefined4 ******)0x4) {
              FUN_004a4f30(local_3b0[0] + 0x72);
              FUN_00483730();
            }
            FUN_004a46e0();
            pppppppuVar10 = local_3a4;
            uVar6 = local_36c;
          }
        }
        FUN_00487410(param_1);
        local_3b0[0] = (undefined4 *******)&stack0xfffffc38;
        FUN_00485e40(param_1,uVar7,uVar6,9 < param_2);
        FUN_0047dca0();
        FUN_0047dc20();
        if ((int)local_39c < 1) {
          FUN_0047dc20();
          FUN_0047dbb0();
          iVar8 = local_370;
          ppppppuVar9 = local_348;
          iVar12 = local_3a0;
        }
        else {
          FUN_0047e0b0();
          FUN_0047e180();
          FUN_0047dc20();
          FUN_0047e180();
          iVar8 = local_370;
          ppppppuVar9 = local_348;
          iVar12 = local_3a0;
        }
      }
      local_348 = (uint ******)((int)ppppppuVar9 + 1);
    } while ((int)local_348 < iVar8);
  }
  local_3a0 = param_1 + 0x4f4;
  FUN_0047dc20();
  FUN_0047dca0();
  if (DAT_012586d8 != '\0') {
    local_384 = (double)CONCAT44(local_384._4_4_,0xf);
    local_388 = 0;
    local_398 = local_398 & 0xffffff00;
    FUN_00409350();
    local_44 = 0x29;
    uVar5 = FUN_004015b0(&local_398);
    pcVar15 = "\n\nTOTAL_LEFT_ON_WORLD_MARKET_NOT_BOUGHT";
    local_44._0_1_ = 0x2a;
    uVar6 = uVar5;
    FUN_00987d50();
    FUN_00401280(uVar5,uVar6,pcVar15);
    uStack_54 = CONCAT31(uStack_54._1_3_,0x29);
    FUN_00987ac0(appuStack_198);
    appuStack_198[0] = std::ios_base::vftable;
    FUN_00aad52d(appuStack_198);
    uStack_54 = 0xffffffff;
    if (0xf < uStack_394) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_3a8);
    }
    uStack_2f8 = 0xf;
    uStack_2fc = 0;
    uStack_30c = 0;
    FUN_00409350("worldmarket.cpp",0xf);
    uStack_54 = 0x2b;
    uVar6 = FUN_004015b0();
    uStack_54 = CONCAT31(uStack_54._1_3_,0x2c);
    FUN_00987d50(uVar6,"--------------------------------------------",0x2c,0);
    FUN_00401280();
    local_44 = CONCAT31(local_44._1_3_,0x2b);
    FUN_00987ac0();
    ppuStack_188 = std::ios_base::vftable;
    FUN_00aad52d();
    local_44 = 0xffffffff;
    if (0xf < uStack_2e8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_3a4 = (uint *******)(DAT_012587f0 + 0xc);
    uStack_2e8 = 0xf;
    uStack_2ec = 0;
    uStack_2fc = uStack_2fc & 0xffffff00;
    ppppppuVar9 = *local_3a4;
    while ((local_44 = 0xffffffff, *local_3a4 <= ppppppuVar9 && (ppppppuVar9 < local_3a4[1]))) {
      pppppuVar2 = *ppppppuVar9;
      local_348 = ppppppuVar9 + 1;
      uStack_320 = 0xf;
      uStack_324 = 0;
      uStack_334 = 0;
      FUN_00409350();
      local_44 = 0x2d;
      uVar7 = (uint)*(byte *)(param_1 + 0x43c + (int)pppppuVar2[2]);
      local_358._0_4_ = *(undefined4 *)(*(int *)(param_1 + 0x47c) + uVar7 * 8);
      local_358._4_4_ = *(undefined4 *)(*(int *)(param_1 + 0x47c) + uVar7 * 8 + 4);
      FUN_005659c0(pppppuVar2);
      local_44._0_1_ = 0x2e;
      uVar6 = FUN_004015b0();
      local_44._0_1_ = 0x31;
      local_3b0[0] = (undefined4 *******)FUN_00418e30(uVar6);
      local_44._0_1_ = 0x30;
      if (0xf < local_384._0_4_) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_384 = (double)CONCAT44(local_384._4_4_,0xf);
      local_388 = 0;
      local_398 = local_398 & 0xffffff00;
      local_3b0[0] = (undefined4 *******)FUN_00418e30();
      local_378 = (double)CONCAT44(local_358._4_4_,(undefined4)local_358) * 3.0517578125e-05;
      FUN_0048c130(local_3b0[0]);
      FUN_00401280();
      uStack_50 = CONCAT31(uStack_50._1_3_,0x2d);
      FUN_00987ac0();
      ppuStack_254 = std::ios_base::vftable;
      FUN_00aad52d();
      uStack_50 = 0xffffffff;
      if (0xf < uStack_32c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_32c = 0xf;
      uStack_330 = 0;
      local_340 = local_340 & 0xffffff00;
      FUN_00409350("worldmarket.cpp",0xf);
      uStack_50 = 0x32;
      uVar7 = (uint)*(byte *)(param_1 + 0xc0 + (int)pppppuVar2[2]);
      local_35c = *(undefined4 *)(*(int *)(param_1 + 0x100) + uVar7 * 8);
      local_358._0_4_ = *(undefined4 *)(*(int *)(param_1 + 0x100) + uVar7 * 8 + 4);
      FUN_005659c0(pppppuVar2,&local_3a4);
      uStack_50._0_1_ = 0x33;
      uVar6 = FUN_004015b0();
      uStack_50._0_1_ = 0x36;
      pppppppuVar10 = local_3a4;
      if (dStack_390._0_4_ < 0x10) {
        pppppppuVar10 = (uint *******)&local_3a4;
      }
      uVar6 = FUN_00418e30(uVar6,pppppppuVar10);
      uStack_50 = CONCAT31(uStack_50._1_3_,0x35);
      if (0xf < dStack_390._0_4_) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_3a4);
      }
      dStack_390 = (double)CONCAT44(dStack_390._4_4_,0xf);
      uStack_394 = 0;
      local_3a4 = (uint *******)((uint)local_3a4 & 0xffffff00);
      uVar6 = FUN_00418e30(uVar6);
      local_384 = (double)CONCAT44((undefined4)local_358,local_35c) * 3.0517578125e-05;
      FUN_0048c130(uVar6,local_384);
      FUN_00401280();
      uStack_5c = CONCAT31(uStack_5c._1_3_,0x32);
      FUN_00987ac0();
      ppuStack_260 = std::ios_base::vftable;
      FUN_00aad52d();
      uStack_5c = 0xffffffff;
      if (0xf < uStack_338) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_338 = 0xf;
      uStack_33c = 0;
      local_350._4_4_ = local_350._4_4_ & 0xffffff00;
      FUN_00409350("worldmarket.cpp",0xf);
      uStack_5c = 0x37;
      uVar7 = (uint)*(byte *)(unaff_EBX + 8 + (int)pppppuVar2[2]);
      local_378 = (double)CONCAT44(*(undefined4 *)(*(int *)(unaff_EBX + 0x48) + uVar7 * 8 + 4),
                                   *(undefined4 *)(*(int *)(unaff_EBX + 0x48) + uVar7 * 8));
      FUN_005659c0(pppppuVar2,local_3b0);
      uStack_5c._0_1_ = 0x38;
      uVar6 = FUN_004015b0();
      uStack_5c._0_1_ = 0x3b;
      pppppppuVar11 = local_3b0[0];
      if (local_39c < 0x10) {
        pppppppuVar11 = local_3b0;
      }
      uVar6 = FUN_00418e30(uVar6,pppppppuVar11);
      uStack_5c = CONCAT31(uStack_5c._1_3_,0x3a);
      if (0xf < local_39c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_3b0[0]);
      }
      local_39c = 0xf;
      local_3a0 = 0;
      local_3b0[0] = (undefined4 *******)((uint)local_3b0[0] & 0xffffff00);
      uVar6 = FUN_00418e30(uVar6);
      dStack_390 = (double)(longlong)local_378 * 3.0517578125e-05;
      FUN_0048c130(uVar6,dStack_390);
      FUN_00401280();
      uStack_68 = CONCAT31(uStack_68._1_3_,0x37);
      FUN_00987ac0();
      ppuStack_26c = std::ios_base::vftable;
      FUN_00aad52d();
      uStack_68 = 0xffffffff;
      if (0xf < uStack_344) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_328 = 0xf;
      uStack_32c = 0;
      uStack_33c = uStack_33c & 0xffffff00;
      FUN_00409350("worldmarket.cpp",0xf);
      uStack_68 = 0x3c;
      local_364 = *(int *)(DAT_013f2498 + (uint)(byte)(&DAT_013f2458)[(int)pppppuVar2[2]] * 8);
      local_360 = *(undefined4 *)
                   (DAT_013f2498 + (uint)(byte)(&DAT_013f2458)[(int)pppppuVar2[2]] * 8 + 4);
      FUN_005659c0(pppppuVar2,apppppppuStack_304);
      uStack_68._0_1_ = 0x3d;
      uVar6 = FUN_004015b0(&uStack_33c,0x627,0x10002);
      uStack_68._0_1_ = 0x40;
      pppppppuVar11 = apppppppuStack_304[0];
      if (uStack_2f0 < 0x10) {
        pppppppuVar11 = apppppppuStack_304;
      }
      uVar6 = FUN_00418e30(uVar6,pppppppuVar11);
      uStack_68 = CONCAT31(uStack_68._1_3_,0x3f);
      if (0xf < uStack_2f0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(apppppppuStack_304[0]);
      }
      uStack_2f0 = 0xf;
      uStack_2f4 = 0;
      apppppppuStack_304[0] = (undefined4 *******)((uint)apppppppuStack_304[0] & 0xffffff00);
      uVar6 = FUN_00418e30(uVar6);
      FUN_0048c130(uVar6,(double)CONCAT44(local_360,local_364) * 3.0517578125e-05);
      FUN_00401280();
      local_44 = CONCAT31(local_44._1_3_,0x3c);
      FUN_00987ac0();
      ppuStack_c8 = std::ios_base::vftable;
      FUN_00aad52d();
      local_44 = 0xffffffff;
      if ((undefined4 ******)0xf < apppppppuStack_304[0]) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      apppppppuStack_304[0] = (undefined4 *******)0xf;
      uStack_308 = 0;
      uStack_318 = uStack_318 & 0xffffff00;
      ppppppuVar9 = local_348;
    }
  }
  local_3b0[0] = (undefined4 *******)&stack0xfffffc38;
  FUN_0047e2f0();
  ExceptionList = pvStack_4c;
  return;
}

