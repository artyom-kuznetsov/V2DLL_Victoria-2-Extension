// FUN_00499ff0 @ 00499ff0 body=[[00499ff0, 0049a14e] [0049a152, 0049a16c] [0049a170, 0049a408] [0049a411, 0049a640] [0049a644, 0049a66c] [0049a670, 0049a841] [0049a845, 0049a864] [0049a868, 0049a88f] [0049a893, 0049aaea] [0049aaee, 0049ab22] [0049ab26, 0049ab50] [0049ab54, 0049ab7e] [0049ab82, 0049abac] [0049abb0, 0049abda] [0049abde, 0049ac08] [0049ac0c, 0049ac36] [0049ac3a, 0049ac64] [0049ac68, 0049ac92] [0049ac96, 0049acc2] [0049acc6, 0049ad77] [0049ad7b, 0049add3] [0049add7, 0049adf8] [0049adfc, 0049ae31] [0049ae35, 0049ae7b]]


void FUN_00499ff0(int param_1)

{
  char cVar1;
  int **ppiVar2;
  int **ppiVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  char *pcVar9;
  undefined4 *puVar10;
  uint *puVar11;
  int *piVar12;
  uint *local_4f8;
  undefined4 ******ppppppuStack_4f4;
  undefined4 uStack_4f0;
  char *pcStack_4ec;
  int iStack_4cc;
  int *local_4c8;
  uint local_4c4;
  int *local_4c0;
  int *local_4bc;
  uint local_4b8;
  uint local_4b4;
  undefined4 ******appppppuStack_4b0 [2];
  undefined4 uStack_4a8;
  uint local_4a4;
  uint local_4a0;
  uint uStack_49c;
  uint uStack_498;
  undefined4 uStack_48c;
  uint uStack_488;
  uint uStack_484;
  undefined1 auStack_480 [4];
  uint uStack_47c;
  uint uStack_478;
  undefined4 uStack_46c;
  uint uStack_468;
  uint uStack_464;
  undefined1 uStack_45c;
  uint uStack_458;
  undefined4 uStack_44c;
  undefined4 uStack_448;
  uint uStack_444;
  undefined1 uStack_440;
  uint uStack_43c;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  uint uStack_428;
  uint local_420;
  undefined4 local_410;
  uint local_40c;
  undefined1 uStack_408;
  uint uStack_404;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  uint uStack_3f0;
  undefined1 uStack_3ec;
  uint uStack_3e8;
  undefined4 uStack_3dc;
  undefined4 uStack_3d8;
  uint uStack_3d4;
  uint local_3cc [4];
  undefined4 local_3bc;
  uint local_3b8;
  uint uStack_3b0;
  undefined4 uStack_3a0;
  uint uStack_39c;
  char acStack_398 [4];
  uint uStack_394;
  undefined4 uStack_384;
  uint uStack_380;
  uint uStack_374;
  undefined4 uStack_364;
  uint uStack_360;
  uint uStack_358;
  undefined4 uStack_348;
  uint uStack_344;
  uint uStack_33c;
  undefined4 uStack_32c;
  uint uStack_328;
  uint uStack_320;
  undefined4 uStack_310;
  uint uStack_30c;
  uint uStack_304;
  undefined4 uStack_2f4;
  uint uStack_2f0;
  undefined **ppuStack_274;
  undefined **ppuStack_270;
  int local_224 [65];
  int local_120 [66];
  void *pvStack_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b6021c;
  local_14 = ExceptionList;
  local_4c4 = 0;
  local_4b8 = 0;
  ExceptionList = &local_14;
  piVar4 = (int *)FUN_00aae9af();
  local_c = 0;
  local_4c8 = piVar4;
  if (piVar4 == (int *)0x0) {
    local_4bc = (int *)0x0;
  }
  else {
    local_40c = 0xf;
    local_410 = 0;
    local_420 = local_420 & 0xffffff00;
    FUN_00409350();
    local_c = CONCAT31(local_c._1_3_,1);
    local_4c4 = 1;
    piVar5 = (int *)FUN_00aae9af();
    local_c = 2;
    local_4c0 = piVar5;
    if (piVar5 == (int *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      FUN_0098ffc0();
      *piVar5 = (int)&PTR_FUN_00e37c3c;
    }
    *piVar4 = (int)&PTR_FUN_00e38524;
    piVar4[1] = 0;
    piVar4[2] = 0;
    piVar4[3] = 0;
    *(undefined1 *)(piVar4 + 4) = 0;
    local_c = 3;
    *(undefined1 *)(piVar4 + 5) = 0;
    piVar4[7] = (int)piVar5;
    piVar4[0xd0] = 0xf;
    piVar4[0xcf] = 0;
    *(undefined1 *)(piVar4 + 0xcb) = 0;
    FUN_00408ed0();
    piVar4[0xd2] = 0;
    piVar4[0xd3] = 0;
    piVar4[0xd4] = 0;
    *(undefined1 *)(piVar4 + 0xd6) = 1;
    piVar4[0xd7] = 0;
    local_4bc = piVar4;
  }
  local_c = 0xffffffff;
  if ((local_4c4 & 1) != 0) {
    if (0xf < local_40c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_40c = 0xf;
    local_410 = 0;
    local_420 = local_420 & 0xffffff00;
  }
  do {
    while( true ) {
      while( true ) {
        piVar4 = (int *)local_4bc[7];
        if ((char)piVar4[0x44] == '\0') {
          iVar6 = (**(code **)(*piVar4 + 4))();
          piVar4[2] = iVar6;
          if (iVar6 == 0) {
            piVar4[3] = 0x13;
          }
          *(undefined1 *)(piVar4 + 0x44) = 1;
        }
        piVar5 = local_4bc;
        piVar4 = piVar4 + 3;
        piVar12 = local_224;
        for (iVar6 = 0x41; iVar6 != 0; iVar6 = iVar6 + -1) {
          *piVar12 = *piVar4;
          piVar4 = piVar4 + 1;
          piVar12 = piVar12 + 1;
        }
        if (local_224[0] == 0x13) {
          (**(code **)*local_4bc)();
          ExceptionList = pvStack_18;
          return;
        }
        FUN_009a1440();
        iVar6 = piVar5[8];
        if (iVar6 != 0x2b4) break;
        uVar7 = FUN_00aaf0c5();
        *(undefined4 *)(param_1 + 0x2ac4) = uVar7;
      }
      if (iVar6 == 0x4cf) break;
      piVar5 = piVar5 + 9;
      local_3b8 = 0xf;
      local_3bc = 0;
      local_3cc[0] = local_3cc[0] & 0xffffff00;
      do {
        iVar6 = *piVar5;
        piVar5 = (int *)((int)piVar5 + 1);
      } while ((char)iVar6 != '\0');
      FUN_00409350();
      local_c = 7;
      local_4c4 = FUN_00aae9af();
      local_c._0_1_ = 8;
      if (local_4c4 == 0) {
        piVar4 = (int *)0x0;
      }
      else {
        local_4c8 = (int *)&local_4f8;
        local_4f8 = (uint *)((uint)local_4f8 & 0xffffff00);
        FUN_00408ed0(local_3cc,0,0xffffffff);
        piVar4 = (int *)FUN_00495a10();
      }
      local_c = CONCAT31(local_c._1_3_,7);
      local_4c8 = piVar4;
      (**(code **)(*piVar4 + 0xc))();
      piVar5 = *(int **)(param_1 + 0x2a6c);
      if ((&iStack_4cc < piVar5) && (*(int **)(param_1 + 0x2a68) <= &iStack_4cc)) {
        local_4c8 = (int *)((int)&iStack_4cc - (int)*(int **)(param_1 + 0x2a68) >> 2);
        if (piVar5 == *(int **)(param_1 + 0x2a70)) {
          FUN_00a513f0();
        }
        if (*(undefined4 **)(param_1 + 0x2a6c) != (undefined4 *)0x0) {
          **(undefined4 **)(param_1 + 0x2a6c) =
               *(undefined4 *)(*(int *)(param_1 + 0x2a68) + (int)local_4c8 * 4);
        }
      }
      else {
        if (piVar5 == *(int **)(param_1 + 0x2a70)) {
          FUN_00a513f0();
        }
        if (*(undefined4 **)(param_1 + 0x2a6c) != (undefined4 *)0x0) {
          **(undefined4 **)(param_1 + 0x2a6c) = piVar4;
        }
      }
      *(int *)(param_1 + 0x2a6c) = *(int *)(param_1 + 0x2a6c) + 4;
      if ((piVar4[0xc] - piVar4[0xb] & 0xfffffffcU) == 0) {
        uStack_468 = 0xf;
        uStack_46c = 0;
        uStack_47c = uStack_47c & 0xffffff00;
        FUN_00409350();
        puStack_10._0_1_ = 9;
        (**(code **)(*piVar4 + 0x18))();
        pcStack_4ec = auStack_480;
        local_14._0_1_ = 10;
        uStack_4f0 = 0x49a5b6;
        uStack_4f0 = FUN_004015b0();
        pcStack_4ec = "Terrain <";
        local_14 = (void *)CONCAT31(local_14._1_3_,0xb);
        ppppppuStack_4f4 = (undefined4 ******)0x49a5d1;
        FUN_00987d50();
        pcStack_4ec = (char *)FUN_00418e30();
        uStack_4f0 = 0x49a5f7;
        uStack_4f0 = FUN_00418e30();
        ppppppuStack_4f4 = (undefined4 ******)0x49a5fd;
        FUN_00401280();
        puStack_10._0_1_ = 10;
        FUN_00987ac0();
        ppuStack_274 = std::ios_base::vftable;
        FUN_00aad52d();
        if (0xf < local_4a4) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,7);
        local_4a4 = 0xf;
        uStack_4a8 = 0;
        local_4b8 = local_4b8 & 0xffffff00;
        if (0xf < uStack_468) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      }
      local_4c8 = (int *)0x0;
      if (0 < (int)(piVar4[0xc] - piVar4[0xb] & 0xfffffffcU)) {
        do {
          local_4c4 = *(int *)(piVar4[0xb] + (int)local_4c8 * 4);
          if (*(int *)(param_1 + 0x2268 + local_4c4 * 4) != 0) {
            uStack_468 = 0xf;
            uStack_46c = 0;
            uStack_47c = uStack_47c & 0xffffff00;
            FUN_00409350();
            uStack_488 = 0xf;
            uStack_48c = 0;
            uStack_49c = uStack_49c & 0xffffff00;
            puStack_10._0_1_ = 0xd;
            pcStack_4ec = (char *)0x49a6ed;
            pcVar9 = __itoa(local_4c4,acStack_398,10);
            do {
              cVar1 = *pcVar9;
              pcVar9 = pcVar9 + 1;
            } while (cVar1 != '\0');
            FUN_00409350();
            puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,0xe);
            puVar11 = &local_4b8;
            puVar10 = (undefined4 *)(**(code **)(*piVar4 + 0x18))();
            pcStack_4ec = auStack_480;
            local_14._0_1_ = 0xf;
            uStack_4f0 = 0x49a746;
            uStack_4f0 = FUN_004015b0();
            pcStack_4ec = "Terrain <";
            local_14 = (void *)CONCAT31(local_14._1_3_,0x10);
            ppppppuStack_4f4 = (undefined4 ******)0x49a763;
            FUN_00987d50();
            local_4f8 = puVar11;
            if (0xf < (uint)puVar10[5]) {
              puVar10 = (undefined4 *)*puVar10;
            }
            ppppppuStack_4f4 = (undefined4 ******)puVar10;
            uVar7 = FUN_00418e30();
            local_4f8 = (uint *)FUN_00418e30(uVar7,"> attempts to use index (");
            ppppppuStack_4f4 = appppppuStack_4b0[0];
            if (uStack_49c < 0x10) {
              ppppppuStack_4f4 = appppppuStack_4b0;
            }
            uVar7 = FUN_00418e30();
            piVar5 = (int *)FUN_00418e30(uVar7,"), which is already used.");
            local_4f8 = (uint *)0x49a7b0;
            ppppppuStack_4f4 = (undefined4 ******)piVar5;
            FUN_00408be0();
            iStack_4cc = 0;
            if (((*(byte *)(*(int *)(*piVar5 + 4) + 0xc + (int)piVar5) & 6) == 0) &&
               (iVar6 = (**(code **)(**(int **)(*(int *)(*piVar5 + 4) + 0x38 + (int)piVar5) + 0x34))
                                  (), iVar6 == -1)) {
              iStack_4cc = 4;
            }
            if (iStack_4cc != 0) {
              FUN_00401120();
            }
            puStack_10._0_1_ = 0xf;
            FUN_00987ac0();
            ppuStack_274 = std::ios_base::vftable;
            FUN_00aad52d();
            if (0xf < local_4a4) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            local_4a4 = 0xf;
            uStack_4a8 = 0;
            local_4b8 = local_4b8 & 0xffffff00;
            if (0xf < uStack_488) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,7);
            uStack_488 = 0xf;
            uStack_48c = 0;
            uStack_49c = uStack_49c & 0xffffff00;
            if (0xf < uStack_468) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
          }
          *(int **)(param_1 + 0x2268 + local_4c4 * 4) = piVar4;
          uVar7 = FUN_004a0b10();
          *(undefined4 *)(param_1 + 0x2668 + local_4c4 * 4) = uVar7;
          local_4c8 = (int *)((int)local_4c8 + 1);
        } while ((int)local_4c8 < piVar4[0xc] - piVar4[0xb] >> 2);
      }
      local_4a4 = 0xf;
      uStack_4a8 = 0;
      local_4b8 = local_4b8 & 0xffffff00;
      FUN_00409350();
      puStack_10._0_1_ = 0x11;
      uStack_3d8 = 0xf;
      uStack_3dc = 0;
      uStack_3ec = 0;
      FUN_00409350();
      puStack_10._0_1_ = 0x12;
      uStack_448 = 0xf;
      uStack_44c = 0;
      uStack_45c = 0;
      FUN_00409350();
      uStack_3f4 = 0xf;
      uStack_3f8 = 0;
      uStack_408 = 0;
      puStack_10._0_1_ = 0x14;
      pcStack_4ec = (char *)0x49a980;
      pcVar9 = __itoa((int)local_4bc,(char *)&uStack_47c,10);
      do {
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      FUN_00409350();
      puStack_10._0_1_ = 0x15;
      local_4c8 = (int *)FUN_00988fa0();
      local_4bc = (int *)((int)local_4bc + 1);
      uStack_42c = 0xf;
      uStack_430 = 0;
      uStack_440 = 0;
      puStack_10._0_1_ = 0x17;
      pcStack_4ec = (char *)0x49aa0a;
      pcVar9 = __itoa(piVar4[0xc] - piVar4[0xb] >> 2,(char *)&uStack_47c,10);
      do {
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      FUN_00409350();
      puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,0x18);
      (**(code **)(*piVar4 + 0x18))();
      local_c._0_1_ = 0x19;
      FUN_00988f20();
      local_c._0_1_ = 0x1a;
      FUN_00988f20();
      local_c._0_1_ = 0x1b;
      FUN_00988f20();
      local_c._0_1_ = 0x1c;
      FUN_00988f20();
      local_c._0_1_ = 0x1d;
      FUN_00988f20();
      if (0xf < uStack_30c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_30c = 0xf;
      uStack_310 = 0;
      uStack_320 = uStack_320 & 0xffffff00;
      if (0xf < uStack_344) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_344 = 0xf;
      uStack_348 = 0;
      uStack_358 = uStack_358 & 0xffffff00;
      if (0xf < uStack_328) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_328 = 0xf;
      uStack_32c = 0;
      uStack_33c = uStack_33c & 0xffffff00;
      if (0xf < uStack_2f0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_2f0 = 0xf;
      uStack_2f4 = 0;
      uStack_304 = uStack_304 & 0xffffff00;
      if (0xf < uStack_360) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_360 = 0xf;
      uStack_364 = 0;
      uStack_374 = uStack_374 & 0xffffff00;
      if (0xf < uStack_428) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_428 = 0xf;
      uStack_42c = 0;
      uStack_43c = uStack_43c & 0xffffff00;
      if (0xf < uStack_380) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_380 = 0xf;
      uStack_384 = 0;
      uStack_394 = uStack_394 & 0xffffff00;
      if (0xf < uStack_3f0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_3f0 = 0xf;
      uStack_3f4 = 0;
      uStack_404 = uStack_404 & 0xffffff00;
      if (0xf < uStack_444) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_444 = 0xf;
      uStack_448 = 0;
      uStack_458 = uStack_458 & 0xffffff00;
      if (0xf < uStack_3d4) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_3d4 = 0xf;
      uStack_3d8 = 0;
      uStack_3e8 = uStack_3e8 & 0xffffff00;
      local_c._0_1_ = 0x29;
      if (0xf < local_4a0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_4a0 = 0xf;
      local_4a4 = 0;
      local_4b4 = local_4b4 & 0xffffff00;
      uStack_464 = 0xf;
      uStack_468 = 0;
      uStack_478 = uStack_478 & 0xffffff00;
      FUN_00409350();
      local_c._0_1_ = 0x2a;
      uStack_484 = 0xf;
      uStack_488 = 0;
      uStack_498 = uStack_498 & 0xffffff00;
      FUN_00408ed0();
      local_c._0_1_ = 0x2b;
      FUN_004015b0();
      local_c._0_1_ = 0x2e;
      local_4c4 = FUN_00418e30();
      local_c._0_1_ = 0x2d;
      if (0xf < uStack_484) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_484 = 0xf;
      uStack_488 = 0;
      uStack_498 = uStack_498 & 0xffffff00;
      FUN_00401280();
      local_c = CONCAT31(local_c._1_3_,0x2a);
      FUN_00987ac0();
      ppuStack_270 = std::ios_base::vftable;
      FUN_00aad52d();
      if (0xf < uStack_464) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_464 = 0xf;
      uStack_468 = 0;
      uStack_478 = uStack_478 & 0xffffff00;
      if (0xf < uStack_39c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_c = 0xffffffff;
      uStack_39c = 0xf;
      uStack_3a0 = 0;
      uStack_3b0 = uStack_3b0 & 0xffffff00;
      if (0xf < local_3b8) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_3b8 = 0xf;
      local_3bc = 0;
      local_3cc[0] = local_3cc[0] & 0xffffff00;
    }
    local_4c4 = 0;
    while( true ) {
      piVar4 = (int *)local_4bc[7];
      if ((char)piVar4[0x44] == '\0') {
        iVar6 = (**(code **)(*piVar4 + 4))();
        piVar4[2] = iVar6;
        if (iVar6 == 0) {
          piVar4[3] = 0x13;
        }
        *(undefined1 *)(piVar4 + 0x44) = 1;
      }
      piVar5 = local_4bc;
      piVar4 = piVar4 + 3;
      piVar12 = local_120;
      for (iVar6 = 0x41; iVar6 != 0; iVar6 = iVar6 + -1) {
        *piVar12 = *piVar4;
        piVar4 = piVar4 + 1;
        piVar12 = piVar12 + 1;
      }
      if ((local_120[0] == 4) || (local_120[0] == 0x13)) break;
      FUN_009a1440();
      piVar5 = piVar5 + 9;
      local_4a0 = 0xf;
      local_4a4 = 0;
      local_4b4 = local_4b4 & 0xffffff00;
      do {
        iVar6 = *piVar5;
        piVar5 = (int *)((int)piVar5 + 1);
      } while ((char)iVar6 != '\0');
      FUN_00409350();
      local_c = 5;
      piVar4 = (int *)FUN_00aae9af();
      uVar8 = local_4c4;
      local_c._0_1_ = 6;
      if (piVar4 == (int *)0x0) {
        local_4c0 = (int *)0x0;
      }
      else {
        local_4c4 = (uint)&local_4f8;
        local_4f8 = (uint *)((uint)local_4f8 & 0xffffff00);
        local_4c8 = piVar4;
        FUN_00408ed0(&local_4b4,0,0xffffffff);
        local_4c0 = (int *)FUN_004d6e50(piVar4);
        local_4c4 = uVar8 + 1;
      }
      local_c = CONCAT31(local_c._1_3_,5);
      local_4c8 = local_4c0;
      (**(code **)(*local_4c0 + 0xc))();
      ppiVar2 = *(int ***)(param_1 + 0x224c);
      puVar11 = (uint *)(param_1 + 0x2248);
      if ((&local_4c8 < ppiVar2) && (ppiVar3 = (int **)*puVar11, ppiVar3 <= &local_4c8)) {
        local_4c0 = (int *)((int)&local_4c8 - (int)ppiVar3 >> 2);
        if (ppiVar2 == *(int ***)(param_1 + 0x2250)) {
          uVar8 = (int)ppiVar2 - (int)ppiVar3 >> 2;
          if (0x3ffffffe < uVar8) {
LAB_0049ae4f:
                    /* WARNING: Subroutine does not return */
            FUN_00aad3ad();
          }
          if ((uint)((int)*(int ***)(param_1 + 0x2250) - (int)ppiVar3 >> 2) < uVar8 + 1) {
            FUN_004bf300();
          }
        }
        if (*(undefined4 **)(param_1 + 0x224c) != (undefined4 *)0x0) {
          **(undefined4 **)(param_1 + 0x224c) = *(undefined4 *)(*puVar11 + (int)local_4c0 * 4);
        }
      }
      else {
        if (ppiVar2 == *(int ***)(param_1 + 0x2250)) {
          uVar8 = (int)((int)ppiVar2 - *puVar11) >> 2;
          if (0x3ffffffe < uVar8) goto LAB_0049ae4f;
          if ((uint)((int)((int)*(int ***)(param_1 + 0x2250) - *puVar11) >> 2) < uVar8 + 1) {
            FUN_004bf300();
          }
        }
        if (*(undefined4 **)(param_1 + 0x224c) != (undefined4 *)0x0) {
          **(undefined4 **)(param_1 + 0x224c) = local_4c0;
        }
      }
      *(int *)(param_1 + 0x224c) = *(int *)(param_1 + 0x224c) + 4;
      local_c = 0xffffffff;
      if (0xf < local_4a0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    (**(code **)(*(int *)local_4bc[7] + 4))();
  } while( true );
}

