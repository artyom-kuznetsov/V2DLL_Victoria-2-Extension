// FUN_004808d0 @ 004808d0  (requested 004808D0, first bytes: 55 8B EC 83 E4 C0 6A FF)


/* WARNING: Removing unreachable block (ram,0x00480cb0) */
/* WARNING: Removing unreachable block (ram,0x00480f92) */
/* WARNING: Removing unreachable block (ram,0x00480a8b) */
/* WARNING: Removing unreachable block (ram,0x00480a90) */
/* WARNING: Removing unreachable block (ram,0x00480b8c) */
/* WARNING: Removing unreachable block (ram,0x00480b90) */
/* WARNING: Removing unreachable block (ram,0x004818c8) */
/* WARNING: Removing unreachable block (ram,0x00481905) */

void FUN_004808d0(int param_1,undefined4 param_2,int param_3)

{
  void *_Dst;
  longlong *plVar1;
  byte bVar2;
  int iVar3;
  double dVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  int *piVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint *puVar17;
  int iVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 *puVar22;
  int *piVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  uint uVar28;
  int iVar29;
  int iVar30;
  uint uVar31;
  bool bVar32;
  longlong lVar33;
  undefined8 uVar34;
  uint *puStack_378;
  int iStack_374;
  undefined1 *puStack_370;
  uint *puStack_36c;
  int iStack_368;
  undefined1 *puStack_364;
  undefined8 uStack_360;
  undefined4 uStack_358;
  undefined8 uStack_354;
  int local_2f4;
  int local_2e8;
  int local_2dc;
  int local_2d8;
  int local_2d4;
  int local_2d0;
  int *local_2c0;
  uint *local_2ac;
  int *local_2a8;
  int local_27c;
  int local_278;
  undefined4 local_270;
  undefined4 uStack_26c;
  undefined4 local_268;
  uint local_264;
  undefined4 local_260;
  uint local_25c;
  uint local_258 [5];
  uint uStack_244;
  int local_234;
  uint local_230;
  int local_22c;
  uint local_228;
  int local_224;
  uint local_220;
  int local_21c;
  uint local_218;
  undefined4 local_214;
  uint local_210;
  int local_20c;
  uint local_208;
  int local_204;
  undefined4 local_200;
  uint local_1f8;
  int local_1f4;
  undefined4 local_1f0;
  uint local_1e8;
  int local_1e4;
  uint local_1e0;
  int local_1dc;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0 [6];
  undefined **local_1a8;
  undefined4 local_1a4;
  undefined1 local_1a0 [64];
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined **appuStack_e0 [3];
  undefined **appuStack_d4 [3];
  undefined **ppuStack_c8;
  undefined1 uStack_5c;
  undefined1 uStack_50;
  void *pvStack_4c;
  undefined1 *puStack_48;
  undefined4 local_44;
  
  local_44 = 0xffffffff;
  puStack_48 = &LAB_00bb4377;
  pvStack_4c = ExceptionList;
  ExceptionList = &pvStack_4c;
  FUN_0047dbb0();
  local_1a4 = 0x18d;
  local_1a8 = CGoodsPool::vftable;
  local_160 = 0;
  local_15c = 0;
  local_158 = 0;
  local_44 = 0;
  uStack_354 = (double)CONCAT44(0x48095e,(undefined4)uStack_354);
  _memset(local_1a0,0,0x40);
  FUN_00423920();
  local_44._0_1_ = 1;
  local_44._1_3_ = 0;
  FUN_00561c40();
  FUN_00561c40();
  FUN_00561c40();
  FUN_00561c40();
  FUN_00561c40();
  FUN_00561c40();
  iVar7 = *(int *)(DAT_012587f0 + 0x10) - *(int *)(DAT_012587f0 + 0xc) >> 2;
  if (DAT_0131bb34 == 0) {
    iVar8 = FUN_00aae9af();
    local_44._0_1_ = 2;
    if (iVar8 != 0) {
      FUN_0041a160();
    }
    local_44._0_1_ = 1;
    FUN_00423700();
  }
  iVar8 = DAT_0131bb34;
  local_234 = DAT_012588e8;
  FUN_00485bd0();
  local_2d4 = (*(int *)(param_1 + 0x3f8) - *(int *)(param_1 + 0x3f4)) / 0x58;
  if (0 < local_2d4) {
    iVar27 = 0;
    do {
      iVar29 = *(int *)(param_1 + 0x3f4) + iVar27;
      uStack_354 = (double)CONCAT44(0x480a78,(undefined4)uStack_354);
      _memset((void *)(iVar29 + 8),0,0x40);
      if (*(int *)(iVar29 + 0x48) != *(int *)(iVar29 + 0x4c)) {
        *(int *)(iVar29 + 0x4c) = *(int *)(iVar29 + 0x48);
      }
      uVar9 = *(uint *)(iVar29 + 0x4c);
      if ((uVar9 < 0x125e449) ||
         (puVar12 = *(undefined4 **)(iVar29 + 0x48), &DAT_0125e448 < puVar12)) {
        if (uVar9 == *(uint *)(iVar29 + 0x50)) {
          FUN_00423780();
        }
        puVar12 = *(undefined4 **)(iVar29 + 0x4c);
        if (puVar12 != (undefined4 *)0x0) {
          *puVar12 = DAT_0125e448;
          uVar19 = DAT_0125e44c;
          goto LAB_00480b15;
        }
      }
      else {
        if (uVar9 == *(uint *)(iVar29 + 0x50)) {
          FUN_00423780();
        }
        puVar22 = (undefined4 *)
                  (*(int *)(iVar29 + 0x48) + ((int)&DAT_0125e448 - (int)puVar12 >> 3) * 8);
        puVar12 = *(undefined4 **)(iVar29 + 0x4c);
        if (puVar12 != (undefined4 *)0x0) {
          *puVar12 = *puVar22;
          uVar19 = puVar22[1];
LAB_00480b15:
          puVar12[1] = uVar19;
        }
      }
      *(int *)(iVar29 + 0x4c) = *(int *)(iVar29 + 0x4c) + 8;
      iVar27 = iVar27 + 0x58;
      local_2d4 = local_2d4 + -1;
    } while (local_2d4 != 0);
  }
  iVar27 = (*(int *)(param_1 + 0x428) - *(int *)(param_1 + 0x424)) / 0x58;
  local_2d4 = 0;
  if (0 < iVar27) {
    local_2dc = 0;
    do {
      iVar29 = *(int *)(param_1 + 0x424) + local_2dc;
      uStack_354 = (double)CONCAT44(0x480b79,(undefined4)uStack_354);
      _memset((void *)(iVar29 + 8),0,0x40);
      if (*(int *)(iVar29 + 0x48) != *(int *)(iVar29 + 0x4c)) {
        *(int *)(iVar29 + 0x4c) = *(int *)(iVar29 + 0x48);
      }
      uVar9 = *(uint *)(iVar29 + 0x4c);
      if ((uVar9 < 0x125e449) ||
         (puVar12 = *(undefined4 **)(iVar29 + 0x48), &DAT_0125e448 < puVar12)) {
        if (uVar9 == *(uint *)(iVar29 + 0x50)) {
          uVar9 = (int)(uVar9 - *(int *)(iVar29 + 0x48)) >> 3;
          if (0x1ffffffe < uVar9) goto LAB_00480de8;
          if ((uint)((int)(*(uint *)(iVar29 + 0x50) - *(int *)(iVar29 + 0x48)) >> 3) < uVar9 + 1) {
            FUN_004237e0();
          }
        }
        puVar22 = *(undefined4 **)(iVar29 + 0x4c);
        if (puVar22 != (undefined4 *)0x0) {
          *puVar22 = DAT_0125e448;
          uVar19 = DAT_0125e44c;
          goto LAB_00480c7f;
        }
      }
      else {
        if (uVar9 == *(uint *)(iVar29 + 0x50)) {
          uVar9 = (int)(uVar9 - (int)puVar12) >> 3;
          if (0x1ffffffe < uVar9) goto LAB_00480de8;
          if ((uint)((int)(*(uint *)(iVar29 + 0x50) - (int)puVar12) >> 3) < uVar9 + 1) {
            FUN_004237e0();
          }
        }
        puVar22 = *(undefined4 **)(iVar29 + 0x4c);
        puVar12 = (undefined4 *)
                  (*(int *)(iVar29 + 0x48) + ((int)&DAT_0125e448 - (int)puVar12 >> 3) * 8);
        if (puVar22 != (undefined4 *)0x0) {
          *puVar22 = *puVar12;
          uVar19 = puVar12[1];
LAB_00480c7f:
          puVar22[1] = uVar19;
        }
      }
      *(int *)(iVar29 + 0x4c) = *(int *)(iVar29 + 0x4c) + 8;
      iVar29 = *(int *)(param_1 + 0x814) + local_2dc;
      uStack_354 = (double)CONCAT44(0x480c9d,(undefined4)uStack_354);
      _memset((void *)(iVar29 + 8),0,0x40);
      if (*(int *)(iVar29 + 0x48) != *(int *)(iVar29 + 0x4c)) {
        *(int *)(iVar29 + 0x4c) = *(int *)(iVar29 + 0x48);
      }
      uVar9 = *(uint *)(iVar29 + 0x4c);
      if ((uVar9 < 0x125e449) ||
         (puVar12 = *(undefined4 **)(iVar29 + 0x48), &DAT_0125e448 < puVar12)) {
        if (uVar9 == *(uint *)(iVar29 + 0x50)) {
          uVar9 = (int)(uVar9 - *(int *)(iVar29 + 0x48)) >> 3;
          if (0x1ffffffe < uVar9) goto LAB_00480de8;
          if ((uint)((int)(*(uint *)(iVar29 + 0x50) - *(int *)(iVar29 + 0x48)) >> 3) < uVar9 + 1) {
            FUN_004237e0();
          }
        }
        puVar12 = *(undefined4 **)(iVar29 + 0x4c);
        if (puVar12 != (undefined4 *)0x0) {
          *puVar12 = DAT_0125e448;
          uVar19 = DAT_0125e44c;
          goto LAB_00480d9f;
        }
      }
      else {
        if (uVar9 == *(uint *)(iVar29 + 0x50)) {
          uVar9 = (int)(uVar9 - (int)puVar12) >> 3;
          if (0x1ffffffe < uVar9) {
LAB_00480de8:
                    /* WARNING: Subroutine does not return */
            FUN_00aad3ad();
          }
          if ((uint)((int)(*(uint *)(iVar29 + 0x50) - (int)puVar12) >> 3) < uVar9 + 1) {
            FUN_004237e0();
          }
        }
        puVar22 = (undefined4 *)
                  (*(int *)(iVar29 + 0x48) + ((int)&DAT_0125e448 - (int)puVar12 >> 3) * 8);
        puVar12 = *(undefined4 **)(iVar29 + 0x4c);
        if (puVar12 != (undefined4 *)0x0) {
          *puVar12 = *puVar22;
          uVar19 = puVar22[1];
LAB_00480d9f:
          puVar12[1] = uVar19;
        }
      }
      *(int *)(iVar29 + 0x4c) = *(int *)(iVar29 + 0x4c) + 8;
      local_2dc = local_2dc + 0x58;
      local_2d4 = local_2d4 + 1;
    } while (local_2d4 < iVar27);
  }
  if (DAT_01258728 == (undefined4 *)0x0) {
    DAT_01258728 = (undefined4 *)FUN_00aae9af();
    if (DAT_01258728 == (undefined4 *)0x0) {
      DAT_01258728 = (undefined4 *)0x0;
    }
    else {
      *DAT_01258728 = 0;
      DAT_01258728[1] = 0;
      DAT_01258728[2] = 0;
      *(undefined1 *)(DAT_01258728 + 4) = 0;
    }
  }
  iVar27 = DAT_012588e8;
  puVar10 = (uint *)(DAT_012588e8 + 0xbd0);
  piVar11 = (int *)*puVar10;
  do {
    do {
      if ((piVar11 < (int *)*puVar10) || (*(int **)(iVar27 + 0xbd4) <= piVar11)) {
        piVar11 = *(int **)(DAT_012588e8 + 0xbd0);
        while (((int *)*puVar10 <= piVar11 && (piVar11 < *(int **)(iVar27 + 0xbd4)))) {
          iVar7 = *piVar11;
          piVar11 = piVar11 + 1;
          if ((((int)(*(int *)(iVar7 + 0x9dc) - *(int *)(iVar7 + 0x9d8) & 0xfffffffcU) < 1) ||
              (*(int *)(iVar7 + 0x20) == 0)) ||
             (((*(char *)(iVar7 + 0x1c) == 'R' && (*(char *)(iVar7 + 0x1d) == 'E')) &&
              (*(char *)(iVar7 + 0x1e) == 'B')))) {
            bVar32 = false;
          }
          else {
            bVar32 = true;
          }
          if (bVar32) {
            FUN_0047dbb0();
            local_200 = *(undefined4 *)(iVar7 + 0x1428);
            if (*(int *)(iVar7 + 0x142c) != 0) {
              uStack_354 = (double)CONCAT44(*(int *)(param_1 + 0x3f4) +
                                            *(int *)(iVar7 + 0x142c) * 0x58,0x4820c7);
              FUN_0047e220();
              FUN_0047dc20();
            }
          }
          else {
            FUN_00561c40();
          }
        }
        local_2c0 = *(int **)(DAT_012588e8 + 0xbd0);
        while (((int *)*puVar10 <= local_2c0 && (local_2c0 < *(int **)(iVar27 + 0xbd4)))) {
          iVar7 = *local_2c0;
          iVar8 = *(int *)(iVar7 + 0x20);
          local_2c0 = local_2c0 + 1;
          local_1f0 = *(undefined4 *)(iVar7 + 0x1428);
          if (*(int *)(iVar7 + 0x142c) == 0) {
            FUN_0047dbb0();
          }
          else {
            FUN_0047dbb0();
            uStack_354 = (double)CONCAT44(*(int *)(param_1 + 0x110) + iVar8 * 0x58,0x4821ad);
            FUN_0047e220();
            FUN_0047dbb0();
          }
        }
        FUN_0047e2f0();
        FUN_0047e2f0();
        if (DAT_012586d8 != '\0') {
          local_2a8 = *(int **)(DAT_012587f0 + 0xc);
          local_2ac = (uint *)(DAT_012587f0 + 0xc);
          while (((int *)*local_2ac <= local_2a8 && (local_2a8 < (int *)local_2ac[1]))) {
            iVar7 = *local_2a8;
            local_2a8 = local_2a8 + 1;
            FUN_009885d0();
            local_44._0_1_ = 0x8c;
            uVar9 = (uint)*(byte *)(*(int *)(iVar7 + 8) + 0x180 + param_1);
            local_270 = *(undefined4 *)(*(int *)(param_1 + 0x1c0) + uVar9 * 8);
            uStack_26c = *(undefined4 *)(*(int *)(param_1 + 0x1c0) + uVar9 * 8 + 4);
            puStack_364 = (undefined1 *)&uStack_360;
            puStack_36c = (uint *)0x4822e1;
            iStack_368 = iVar7;
            FUN_005659c0();
            puStack_364 = (undefined1 *)0x10002;
            iStack_368 = 0x35d;
            local_44._0_1_ = 0x8d;
            puStack_370 = (undefined1 *)0x482302;
            puStack_36c = local_258;
            puStack_364 = (undefined1 *)FUN_004015b0();
            local_44._0_1_ = 0x8f;
            iStack_368 = 0x48231b;
            FUN_004238b0();
            uVar19 = FUN_00418e30();
            uStack_354 = (double)CONCAT44(0x48234e,(undefined4)uStack_354);
            FUN_0048c130();
            uStack_354 = (double)CONCAT44(uVar19,0x482354);
            FUN_00401280();
            uStack_50 = 0x8c;
            uStack_354 = (double)CONCAT44(appuStack_d4,0x48236c);
            FUN_00987ac0();
            appuStack_d4[0] = std::ios_base::vftable;
            uStack_354 = (double)CONCAT44(appuStack_d4,0x482384);
            FUN_00aad52d();
            uStack_50 = 1;
            if (0xf < local_258[2]) {
              uStack_354 = (double)CONCAT44(local_264,&UNK_004823a6);
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            uStack_354 = (double)CONCAT44(0x4823ba,(undefined4)uStack_354);
            FUN_009885d0();
            uStack_50 = 0x90;
            uVar9 = (uint)*(byte *)(*(int *)(iVar7 + 8) + 0x10 + param_1);
            uVar19 = *(undefined4 *)(*(int *)(param_1 + 0x50) + uVar9 * 8);
            uStack_354._4_4_ = " supply: ";
            local_270 = *(undefined4 *)(*(int *)(param_1 + 0x50) + uVar9 * 8 + 4);
            puStack_370 = (undefined1 *)&puStack_36c;
            puStack_378 = (uint *)0x4823f9;
            iStack_374 = iVar7;
            FUN_005659c0();
            puStack_370 = (undefined1 *)0x10002;
            iStack_374 = 0x35e;
            uStack_50 = 0x91;
            puStack_378 = &local_264;
            puStack_370 = (undefined1 *)FUN_004015b0();
            uStack_50 = 0x93;
            iStack_374 = 0x482433;
            uVar20 = FUN_004238b0();
            uStack_354 = (double)CONCAT44(uStack_354._4_4_,uVar20);
            uStack_358 = 0x48243c;
            uVar20 = FUN_00418e30();
            uStack_354 = (double)CONCAT44(local_270,uVar19) * 3.0517578125e-05;
            uStack_360 = (double)CONCAT44(0x482466,(undefined4)uStack_360);
            uStack_358 = uVar20;
            FUN_0048c130();
            uStack_360 = (double)CONCAT44(uVar20,0x48246c);
            FUN_00401280();
            uStack_5c = 0x90;
            uStack_360 = (double)CONCAT44(appuStack_e0,0x482484);
            FUN_00987ac0();
            appuStack_e0[0] = std::ios_base::vftable;
            uStack_360 = (double)CONCAT44(appuStack_e0,0x48249c);
            FUN_00aad52d();
            uStack_5c = 1;
            if (0xf < local_25c) {
              uStack_360 = (double)CONCAT44(local_270,&UNK_004824be);
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            uStack_360 = (double)CONCAT44(0x4824d2,(undefined4)uStack_360);
            FUN_009885d0();
            uStack_5c = 0x94;
            uVar9 = (uint)*(byte *)(*(int *)(iVar7 + 8) + 0x288 + param_1);
            uVar19 = *(undefined4 *)(*(int *)(param_1 + 0x2c8) + uVar9 * 8);
            uStack_360._4_4_ = " price: ";
            uVar20 = *(undefined4 *)(*(int *)(param_1 + 0x2c8) + uVar9 * 8 + 4);
            FUN_005659c0(iVar7,&puStack_378);
            uStack_5c = 0x95;
            uVar21 = FUN_004015b0(&local_270,0x35f,0x10002);
            uStack_5c = 0x97;
            uVar21 = FUN_004238b0(uVar21);
            uStack_360 = (double)CONCAT44(uStack_360._4_4_,uVar21);
            puStack_364 = (undefined1 *)0x48255a;
            puStack_364 = (undefined1 *)FUN_00418e30();
            dVar4 = (double)CONCAT44(uVar20,uVar19) * 3.0517578125e-05;
            iStack_368 = 0x482584;
            uStack_360 = dVar4;
            FUN_0048c130();
            FUN_00401280();
            local_44._0_1_ = 0x94;
            FUN_00987ac0();
            ppuStack_c8 = std::ios_base::vftable;
            FUN_00aad52d();
            local_44._0_1_ = 1;
            if (0xf < uStack_244) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            local_2ac = (uint *)((ulonglong)dVar4 >> 0x20);
          }
        }
        FUN_0047e4a0();
        ExceptionList = pvStack_4c;
        return;
      }
      iVar29 = *piVar11;
      piVar11 = piVar11 + 1;
    } while ((int)(*(int *)(iVar29 + 0x9dc) - *(int *)(iVar29 + 0x9d8) & 0xfffffffcU) < 1);
    uStack_354 = (double)CONCAT44(0x480e7a,(undefined4)uStack_354);
    FID_conflict__memcpy((void *)(iVar29 + 0x11e4),(void *)(iVar29 + 0x118c),DAT_012587f4);
    iVar30 = *(int *)(iVar29 + 0x11d0) - *(int *)(iVar29 + 0x11cc) >> 3;
    FUN_0043a880();
    iVar24 = 1;
    if (1 < iVar30) {
      do {
        puVar12 = (undefined4 *)(*(int *)(iVar29 + 0x11cc) + iVar24 * 8);
        puVar22 = (undefined4 *)(*(int *)(iVar29 + 0x1224) + iVar24 * 8);
        *puVar22 = *puVar12;
        iVar24 = iVar24 + 1;
        puVar22[1] = puVar12[1];
      } while (iVar24 < iVar30);
    }
    iVar24 = *(int *)(iVar29 + 0x20);
    bVar32 = iVar24 == *(int *)(DAT_012588e8 + 0xb60);
    uStack_354 = (double)CONCAT44(*(int *)(*(int *)(iVar29 + 0xa60) + 0x128) << 0x1e,0x480f0c);
    __alldiv();
    iVar30 = *(int *)(param_1 + 0x808) - *(int *)(param_1 + 0x804) >> 2;
    iVar13 = iVar24 * 0x58;
    iVar25 = *(int *)(param_1 + 0x3f4) + iVar13;
    iVar26 = *(int *)(param_1 + 0x424) + iVar13;
    iVar13 = *(int *)(param_1 + 0x404) + iVar13;
    _Dst = (void *)(iVar13 + 8);
    uStack_354 = (double)CONCAT44(0x480f78,(undefined4)uStack_354);
    _memset(_Dst,0,0x40);
    if (*(int *)(iVar13 + 0x48) != *(int *)(iVar13 + 0x4c)) {
      *(int *)(iVar13 + 0x4c) = *(int *)(iVar13 + 0x48);
    }
    FUN_00423920();
    cVar6 = *(char *)(iVar29 + 0x129c);
    local_2f4 = 0;
    if (0 < iVar7) {
      local_2d0 = 0;
      do {
        iVar14 = *(int *)(iVar29 + 0x12a0) + local_2d0;
        if (*(char *)(iVar14 + 0x10) == '\0') {
          if (cVar6 != '\0') {
            local_20c = DAT_0125ba14;
            local_210 = DAT_0125ba10;
            puVar17 = &local_210;
            goto LAB_00481263;
          }
          uVar31 = (uint)*(byte *)(iVar29 + 0x118c + local_2f4);
          uVar9 = *(uint *)(*(int *)(iVar29 + 0x11cc) + uVar31 * 8);
          uVar28 = uVar9 - *(uint *)(iVar14 + 8);
          iVar14 = (*(int *)(*(int *)(iVar29 + 0x11cc) + uVar31 * 8 + 4) - *(int *)(iVar14 + 0xc)) -
                   (uint)(uVar9 < *(uint *)(iVar14 + 8));
          if ((DAT_0125ba14 <= iVar14) && ((DAT_0125ba14 < iVar14 || (DAT_0125ba10 < uVar28)))) {
            bVar2 = *(byte *)(local_2f4 + 8 + iVar25);
            local_228 = uVar28;
            local_224 = iVar14;
            if (bVar2 == 0) {
              *(char *)(local_2f4 + 8 + iVar25) =
                   (char)(*(int *)(iVar25 + 0x4c) - *(int *)(iVar25 + 0x48) >> 3);
              FUN_00423920();
            }
            else {
              iVar18 = *(int *)(iVar25 + 0x48);
              puVar17 = (uint *)(iVar18 + (uint)bVar2 * 8);
              uVar9 = *puVar17;
              *puVar17 = *puVar17 + uVar28;
              piVar23 = (int *)(iVar18 + (uint)bVar2 * 8 + 4);
              *piVar23 = *piVar23 + iVar14 + (uint)CARRY4(uVar9,uVar28);
            }
            bVar2 = *(byte *)(param_1 + 0x10 + local_2f4);
            local_208 = uVar28;
            local_204 = iVar14;
            if (bVar2 == 0) {
              *(char *)(param_1 + 0x10 + local_2f4) =
                   (char)(*(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x50) >> 3);
              FUN_00423920();
            }
            else {
              iVar18 = *(int *)(param_1 + 0x50);
              puVar17 = (uint *)(iVar18 + (uint)bVar2 * 8);
              uVar9 = *puVar17;
              *puVar17 = *puVar17 + uVar28;
              piVar23 = (int *)(iVar18 + (uint)bVar2 * 8 + 4);
              *piVar23 = *piVar23 + iVar14 + (uint)CARRY4(uVar9,uVar28);
            }
            bVar2 = *(byte *)((int)_Dst + local_2f4);
            local_1e8 = uVar28;
            local_1e4 = iVar14;
            if (bVar2 == 0) {
              *(char *)((int)_Dst + local_2f4) =
                   (char)(*(int *)(iVar13 + 0x4c) - *(int *)(iVar13 + 0x48) >> 3);
              FUN_00423920();
            }
            else {
              iVar18 = *(int *)(iVar13 + 0x48);
              puVar17 = (uint *)(iVar18 + (uint)bVar2 * 8);
              uVar9 = *puVar17;
              *puVar17 = *puVar17 + uVar28;
              piVar23 = (int *)(iVar18 + (uint)bVar2 * 8 + 4);
              *piVar23 = *piVar23 + iVar14 + (uint)CARRY4(uVar9,uVar28);
            }
            uStack_354 = (double)CONCAT44(0x481158,(undefined4)uStack_354);
            FUN_0047da90();
            if (!bVar32) goto LAB_0048136a;
            bVar2 = *(byte *)(param_1 + 0x5bc + local_2f4);
            local_1f8 = uVar28;
            local_1f4 = iVar14;
            if (bVar2 == 0) {
              *(char *)(param_1 + 0x5bc + local_2f4) =
                   (char)(*(int *)(param_1 + 0x600) - *(int *)(param_1 + 0x5fc) >> 3);
              FUN_00423920();
            }
            else {
              iVar18 = *(int *)(param_1 + 0x5fc);
              puVar17 = (uint *)(iVar18 + (uint)bVar2 * 8);
              uVar9 = *puVar17;
              *puVar17 = *puVar17 + uVar28;
              piVar23 = (int *)(iVar18 + (uint)bVar2 * 8 + 4);
              *piVar23 = *piVar23 + iVar14 + (uint)CARRY4(uVar9,uVar28);
            }
            bVar2 = *(byte *)(param_1 + 0x66c + local_2f4);
            local_230 = uVar28;
            local_22c = iVar14;
            if (bVar2 != 0) {
              iVar18 = *(int *)(param_1 + 0x6ac);
              puVar17 = (uint *)(iVar18 + (uint)bVar2 * 8);
              uVar9 = *puVar17;
              *puVar17 = *puVar17 + uVar28;
              piVar23 = (int *)(iVar18 + (uint)bVar2 * 8 + 4);
              *piVar23 = *piVar23 + iVar14 + (uint)CARRY4(uVar9,uVar28);
              goto LAB_0048136a;
            }
            *(char *)(param_1 + 0x66c + local_2f4) =
                 (char)(*(int *)(param_1 + 0x6b0) - *(int *)(param_1 + 0x6ac) >> 3);
LAB_00481365:
            FUN_00423920();
          }
        }
        else {
          local_218 = *(uint *)(iVar14 + 8);
          local_214 = *(undefined4 *)(iVar14 + 0xc);
          puVar17 = &local_218;
LAB_00481263:
          uVar9 = puVar17[1];
          uVar28 = *puVar17;
          if ((DAT_0125ba14 <= (int)uVar9) &&
             ((DAT_0125ba14 < (int)uVar9 || (DAT_0125ba10 < uVar28)))) {
            puVar17 = (uint *)(*(int *)(iVar29 + 0x11cc) +
                              (uint)*(byte *)(iVar29 + 0x118c + local_2f4) * 8);
            uVar31 = *puVar17;
            uVar15 = uVar28 - uVar31;
            iVar14 = (uVar9 - puVar17[1]) - (uint)(uVar28 < uVar31);
            if ((DAT_0125ba14 <= iVar14) && ((DAT_0125ba14 < iVar14 || (DAT_0125ba10 < uVar15)))) {
              bVar2 = *(byte *)(param_1 + 0x180 + local_2f4);
              local_220 = uVar15;
              local_21c = iVar14;
              if (bVar2 == 0) {
                *(char *)(param_1 + 0x180 + local_2f4) =
                     (char)(*(int *)(param_1 + 0x1c4) - *(int *)(param_1 + 0x1c0) >> 3);
                FUN_00423920();
              }
              else {
                iVar18 = *(int *)(param_1 + 0x1c0);
                puVar17 = (uint *)(iVar18 + (uint)bVar2 * 8);
                uVar9 = *puVar17;
                *puVar17 = *puVar17 + uVar15;
                piVar23 = (int *)(iVar18 + (uint)bVar2 * 8 + 4);
                *piVar23 = *piVar23 + iVar14 + (uint)CARRY4(uVar9,uVar15);
              }
              bVar2 = *(byte *)(local_2f4 + 8 + iVar26);
              local_1e0 = uVar15;
              local_1dc = iVar14;
              if (bVar2 == 0) {
                *(char *)(local_2f4 + 8 + iVar26) =
                     (char)(*(int *)(iVar26 + 0x4c) - *(int *)(iVar26 + 0x48) >> 3);
                goto LAB_00481365;
              }
              iVar18 = *(int *)(iVar26 + 0x48);
              puVar17 = (uint *)(iVar18 + (uint)bVar2 * 8);
              uVar9 = *puVar17;
              *puVar17 = *puVar17 + uVar15;
              piVar23 = (int *)(iVar18 + (uint)bVar2 * 8 + 4);
              *piVar23 = *piVar23 + iVar14 + (uint)CARRY4(uVar9,uVar15);
            }
          }
        }
LAB_0048136a:
        local_2d0 = local_2d0 + 0x18;
        local_2f4 = local_2f4 + 1;
      } while (local_2f4 < iVar7);
    }
    if (cVar6 != '\0') {
      FUN_0047dc20();
      FUN_0047dc20();
      FUN_0047dc20();
    }
    cVar6 = *(char *)(iVar29 + 0xb18);
    if (((cVar6 == '\0') ||
        ((*(int *)(iVar29 + 0x20) <
          *(int *)(DAT_012588e8 + 0xaf0) - *(int *)(DAT_012588e8 + 0xaec) >> 2 &&
         (*(int *)(*(int *)(DAT_012588e8 + 0xaec) + *(int *)(iVar29 + 0x20) * 4) == 0)))) &&
       ((*(int *)(DAT_012588e8 + 0xaf0) - *(int *)(DAT_012588e8 + 0xaec) >> 2 <=
         *(int *)(iVar29 + 0x20) ||
        ((*(int *)(*(int *)(DAT_012588e8 + 0xaec) + *(int *)(iVar29 + 0x20) * 4) != 0 ||
         (*(char *)(iVar29 + 0x67c) != '\0')))))) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if ((DAT_013f3600 & 1) == 0) {
      DAT_013f35fc = *(int *)(*(int *)(DAT_012586dc + 0x10) + 0x30) / 1000;
      DAT_013f3600 = DAT_013f3600 | 1;
    }
    if ((DAT_013f3600 & 2) == 0) {
      DAT_013f3600 = DAT_013f3600 | 2;
      DAT_013f35f8 = *(int *)(*(int *)(DAT_012586dc + 0x10) + 0x34) / 1000;
    }
    iVar13 = FUN_00457630();
    piVar23 = *(int **)(iVar29 + 0xe44);
    while (piVar23 != (int *)0x0) {
      iVar25 = *piVar23;
      piVar23 = (int *)piVar23[2];
      FUN_004d35f0();
      local_2d0 = 0;
      if (*(int *)(iVar25 + 0x68) == 0) {
        local_27c = 0;
      }
      else {
        local_27c = iVar13 % *(int *)(iVar25 + 0x68);
      }
      local_2d8 = 3;
      do {
        iVar14 = *(int *)(iVar25 + 0x68);
        iVar18 = *(int *)(iVar25 + 0x60);
        iVar16 = local_27c;
        if (0 < local_27c) {
          do {
            if (iVar18 != 0) {
              iVar18 = *(int *)(iVar18 + 0x224);
            }
            iVar16 = iVar16 + -1;
          } while (iVar16 != 0);
        }
        while (iVar16 = iVar18, iVar14 != 0) {
          iVar14 = iVar14 + -1;
          if (iVar16 == 0) {
            iVar16 = *(int *)(iVar25 + 0x60);
          }
          iVar18 = *(int *)(iVar16 + 0x224);
          if (cVar6 != '\0') {
            *(uint *)(iVar16 + 0x24) = (uint)(*(int *)(iVar16 + 0x128) < 1000);
          }
          if (*(int *)(iVar16 + 0x24) == local_2d8) {
            uStack_354 = (double)CONCAT44(0x4815a3,(undefined4)uStack_354);
            FUN_004f3900();
            if (((bVar5) &&
                ((((iVar3 = *(int *)(iVar16 + 0x20), iVar3 < 1 || (10 < *(int *)(iVar16 + 0x184)))
                  || (*(char *)(iVar16 + 0x188) != '\0')) &&
                 ((*(char *)(iVar16 + 0x188) == '\0' && (DAT_013f35f8 < *(int *)(iVar25 + 0x68))))))
                ) && (((iVar3 == 1 || ((iVar3 == 0 && (*(int *)(iVar16 + 0x17c) == 0)))) &&
                      (local_278 == 1000)))) {
              if ((*(int *)(iVar25 + 0x68) == 8) || (DAT_013f35fc <= local_2d0)) {
                for (iVar3 = *(int *)(iVar25 + 0x60); (iVar3 != 0 && (iVar16 != iVar3));
                    iVar3 = *(int *)(iVar3 + 0x224)) {
                }
                FUN_0052e900();
              }
              local_2d0 = local_2d0 + 1;
            }
          }
        }
        local_2d8 = local_2d8 + -1;
      } while (-1 < local_2d8);
      iVar25 = *(int *)(iVar25 + 0x60);
      while (iVar25 != 0) {
        iVar14 = *(int *)(iVar25 + 0x224);
        if (((0 < *(int *)(iVar25 + 0x20)) && (*(int *)(iVar25 + 0x184) < 0xb)) &&
           (*(char *)(iVar25 + 0x188) == '\0')) {
          uStack_354 = (double)CONCAT44(0x4816b5,(undefined4)uStack_354);
          FUN_004f3620();
          FUN_004f3790();
          FUN_004f3790();
          if (bVar32) {
            FUN_004f3790();
          }
          FUN_004f3530();
          FUN_0047dc20();
          FUN_0047dc20();
        }
        iVar25 = iVar14;
      }
      uStack_354 = (double)CONCAT44(0x481753,(undefined4)uStack_354);
      FUN_004a4f30();
      FUN_0047dc20();
      FUN_0047dc20();
    }
    piVar23 = *(int **)(iVar29 + 0x9d8);
    while ((*(int **)(iVar29 + 0x9d8) <= piVar23 && (piVar23 < *(int **)(iVar29 + 0x9dc)))) {
      iVar13 = *piVar23;
      piVar23 = piVar23 + 1;
      iVar13 = *(int *)(*(int *)(local_234 + 0xacc) + iVar13 * 4);
      local_2d8 = 0;
      if (0 < iVar30) {
        do {
          iVar25 = *(int *)(*(int *)(param_1 + 0x804) + local_2d8 * 4);
          local_2e8 = *(int *)(iVar25 * 0x10 + *(int *)(iVar13 + 0x194));
          if (local_2e8 != 0) {
            do {
              iVar14 = *(int *)(local_2e8 + 0x27c);
              FUN_0095eb00();
              puVar17 = (uint *)(*(int *)(param_1 + 0x7e4) + (iVar30 * iVar24 + iVar25) * 0x78);
              uVar28 = *(uint *)(local_2e8 + 0x1b0);
              iVar18 = *(int *)(local_2e8 + 0x1b4);
              uVar9 = *puVar17;
              *puVar17 = *puVar17 + uVar28;
              puVar17[1] = puVar17[1] + iVar18 + (uint)CARRY4(uVar9,uVar28);
              if ((*(char *)(*(int *)(local_2e8 + 0x68) + 0x39c) != '\0') &&
                 (iVar18 = *(int *)(local_2e8 + 0x1d4), *(int *)(iVar18 + 0xb0) != 0)) {
                lVar33 = FUN_00b31c36();
                if ((lVar33 < *(longlong *)(local_2e8 + 0x138)) ||
                   (*(char *)(local_2e8 + 0x1d1) == '\0')) {
                  uVar9 = *(uint *)(iVar18 + 0xe8);
                  if ((*(int *)(iVar18 + 0xec) <= DAT_00f0ae14) &&
                     ((*(int *)(iVar18 + 0xec) < DAT_00f0ae14 || (uVar9 < DAT_00f0ae10)))) {
                    uStack_354 = (double)CONCAT44(DAT_0125b968 + DAT_00f0ae10,0x4819df);
                    uVar34 = __allmul();
                    uVar9 = (uint)uVar34 >> 0xf | (int)((ulonglong)uVar34 >> 0x20) << 0x11;
                  }
                  uStack_354 = (double)CONCAT44(uVar9,0x481a18);
                  FUN_0048bfc0();
                  iVar18 = *(int *)(local_2e8 + 0x1d4);
                  *(undefined4 *)(iVar18 + 0xe8) = local_268;
                  uVar9 = local_264;
LAB_00481a32:
                  *(uint *)(iVar18 + 0xec) = uVar9;
                }
                else {
                  if (*(char *)(local_2e8 + 0x1d0) != '\0') {
LAB_0048190d:
                    uVar9 = *(uint *)(iVar18 + 0xe8);
                    if ((DAT_0125b96c <= *(int *)(iVar18 + 0xec)) &&
                       ((DAT_0125b96c < *(int *)(iVar18 + 0xec) || (DAT_0125b968 < uVar9)))) {
                      uStack_354 = (double)CONCAT44(DAT_00f0ae10 - DAT_0125b968,0x48194a);
                      uVar34 = __allmul();
                      uVar9 = (uint)uVar34 >> 0xf | (int)((ulonglong)uVar34 >> 0x20) << 0x11;
                    }
                    uStack_354 = (double)CONCAT44(uVar9,0x481983);
                    FUN_004730d0();
                    iVar18 = *(int *)(local_2e8 + 0x1d4);
                    *(undefined4 *)(iVar18 + 0xe8) = local_260;
                    uVar9 = local_25c;
                    goto LAB_00481a32;
                  }
                  lVar33 = FUN_00b31c36();
                  if (*(longlong *)(local_2e8 + 0x130) < lVar33) goto LAB_0048190d;
                }
                FUN_0095c920();
                if (*(int *)(*(int *)(*(int *)(local_2e8 + 0x1d4) + 0xb0) + 0x80) != 0) {
                  FUN_0041a0b0();
                  FUN_0041a0b0();
                  FUN_004dd3c0();
                  FUN_0047dbb0();
                  FUN_0047dc20();
                  FUN_0047dc20();
                  if (bVar32) {
                    FUN_0041a0b0();
                  }
                }
              }
              local_2e8 = iVar14;
            } while (iVar14 != 0);
          }
          local_2d8 = local_2d8 + 1;
        } while (local_2d8 < iVar30);
      }
      cVar6 = FUN_004c1780();
      if (cVar6 != '\0') {
        FUN_004c1380();
        FUN_004c1180();
        FUN_0041a0b0();
        FUN_0041a0b0();
        if (bVar32) {
          FUN_0041a0b0();
        }
      }
    }
    FUN_00534710();
    FUN_00534710();
    FUN_00534710();
    FUN_00534710();
    FUN_00534710();
    FUN_00534710();
    puVar12 = &DAT_00f0ae10;
    if (2 < param_3) {
      puVar12 = &DAT_00f0ae08;
    }
    uVar19 = *puVar12;
    FUN_00534710();
    uStack_354 = (double)CONCAT44(uVar19,0x481cbb);
    lVar33 = __allmul();
    local_1d8 = lVar33 >> 0xf;
    puVar12 = (undefined4 *)FUN_00534710();
    uStack_354 = (double)CONCAT44(*puVar12,0x481cf1);
    lVar33 = __allmul();
    local_1d0 = lVar33 >> 0xf;
    FUN_00534710();
    uStack_354 = (double)CONCAT44(uVar19,0x481d27);
    lVar33 = __allmul();
    local_1c8 = lVar33 >> 0xf;
    local_2e8 = 0;
    if (0 < iVar30) {
      do {
        iVar13 = *(int *)(*(int *)(param_1 + 0x804) + local_2e8 * 4);
        if (*(int *)(iVar8 + 0x10) - *(int *)(iVar8 + 0xc) >> 2 < iVar13) {
          iVar25 = FUN_0096bb70();
        }
        else {
          iVar25 = *(int *)(*(int *)(iVar8 + 0xc) + iVar13 * 4);
        }
        iVar14 = *(int *)(iVar25 + 0x3c);
        plVar1 = (longlong *)(*(int *)(param_1 + 0x7e4) + (iVar30 * iVar24 + iVar13) * 0x78);
        uStack_354 = (double)CONCAT44(local_1c0[iVar14 * 2],0x481dc9);
        lVar33 = __allmul();
        plVar1[1] = lVar33 >> 0xf;
        uStack_354 = (double)CONCAT44(*(undefined4 *)(&local_1d8 + iVar14),0x481df2);
        lVar33 = __allmul();
        plVar1[2] = lVar33 >> 0xf;
        uStack_354 = (double)CONCAT44(local_258[iVar14 * 2],0x481e1b);
        lVar33 = __allmul();
        *plVar1 = lVar33 >> 0xf;
        if (*(int *)(iVar25 + 0x348) < 4) {
          uStack_354 = (double)CONCAT44(0x10000 - *(int *)(iVar29 + 0xe70),0x481e55);
          lVar33 = __allmul();
          *plVar1 = lVar33 >> 0xf;
        }
        if (*(int *)(iVar25 + 0x368) < 4) {
          uStack_354 = (double)CONCAT44(0x10000 - *(int *)(iVar29 + 0xe70),0x481e8f);
          lVar33 = __allmul();
          plVar1[1] = lVar33 >> 0xf;
        }
        if (*(int *)(iVar25 + 0x388) < 4) {
          uStack_354 = (double)CONCAT44(0x10000 - *(int *)(iVar29 + 0xe70),0x481eca);
          lVar33 = __allmul();
          plVar1[2] = lVar33 >> 0xf;
        }
        iVar13 = param_1 + 0x178;
        uStack_354 = (double)CONCAT44(iVar13,0x481f07);
        FUN_0047e220();
        uStack_354 = (double)CONCAT44(iVar13,0x481f2f);
        FUN_0047e220();
        uStack_354 = (double)CONCAT44(iVar13,0x481f50);
        FUN_0047e220();
        uStack_354 = (double)CONCAT44(iVar26,0x481f78);
        FUN_0047e220();
        uStack_354 = (double)CONCAT44(iVar26,0x481f9a);
        FUN_0047e220();
        uStack_354 = (double)CONCAT44(iVar26,0x481fb5);
        FUN_0047e220();
        local_2e8 = local_2e8 + 1;
      } while (local_2e8 < iVar30);
    }
  } while( true );
}

