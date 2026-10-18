// FUN_00975130 @ 00975130 body=[[00975130, 00975716] [0097571f, 009758cf] [009758d3, 0097590a] [0097590e, 00975939] [0097593d, 00975968] [0097596c, 00975997] [0097599b, 009759c6] [009759ca, 009759ef] [009759f3, 00975a17] [00975a1b, 00975ade] [00975ae2, 00975b41] [00975b45, 00975b7b] [00975b7f, 00975bc5]]


void FUN_00975130(int param_1,undefined4 *param_2)

{
  char cVar1;
  int **ppiVar2;
  int **ppiVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint *puVar9;
  int *piVar10;
  undefined1 auStack_3b0 [16];
  undefined4 uStack_3a0;
  int *piStack_384;
  int *piStack_380;
  int local_37c;
  uint *local_378;
  uint *puStack_374;
  int iStack_370;
  undefined4 *puStack_36c;
  uint auStack_364 [4];
  undefined4 uStack_354;
  uint uStack_350;
  uint uStack_348;
  undefined4 uStack_338;
  uint uStack_334;
  uint uStack_328;
  undefined4 uStack_318;
  uint uStack_314;
  uint uStack_30c;
  undefined4 uStack_2fc;
  uint uStack_2f8;
  uint auStack_2f0 [4];
  undefined4 uStack_2e0;
  uint uStack_2dc;
  uint uStack_2d0;
  undefined4 uStack_2c0;
  uint uStack_2bc;
  uint uStack_2b4;
  undefined4 uStack_2a4;
  uint uStack_2a0;
  uint uStack_298;
  undefined4 uStack_288;
  uint uStack_284;
  uint uStack_27c;
  undefined4 uStack_26c;
  uint uStack_268;
  uint uStack_260;
  undefined4 uStack_250;
  uint uStack_24c;
  uint uStack_244;
  undefined4 uStack_234;
  uint uStack_230;
  int aiStack_228 [30];
  undefined **ppuStack_1b0;
  int aiStack_120 [66];
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  int local_c;
  
  iVar4 = DAT_01258a40;
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b788f1;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if (DAT_01258a40 == 0) {
    ExceptionList = &pvStack_14;
    local_37c = FUN_00aae9af();
    local_c = iVar4;
    if (local_37c == 0) {
      DAT_01258a40 = 0;
    }
    else {
      DAT_01258a40 = FUN_009747a0();
    }
  }
  iVar4 = DAT_01258a40;
  local_c = 0xffffffff;
  FUN_00975e60();
  local_378 = (uint *)(param_1 + 0x18);
  local_37c = iVar4;
  FUN_0068f390();
  FUN_005611f0();
  DAT_01258a44 = 1;
LAB_009751d0:
  piVar6 = (int *)param_2[7];
  if ((char)piVar6[0x44] == '\0') {
    iVar4 = (**(code **)(*piVar6 + 4))();
    piVar6[2] = iVar4;
    if (iVar4 == 0) {
      piVar6[3] = 0x13;
    }
    *(undefined1 *)(piVar6 + 0x44) = 1;
  }
  piVar6 = piVar6 + 3;
  piVar10 = aiStack_228;
  for (iVar4 = 0x41; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar10 = *piVar6;
    piVar6 = piVar6 + 1;
    piVar10 = piVar10 + 1;
  }
  if (aiStack_228[0] == 0x13) {
    piStack_384 = (int *)0x0;
    puVar8 = (undefined4 *)*local_378;
    while( true ) {
      if ((puVar8 < (undefined4 *)*local_378) || ((undefined4 *)local_378[1] <= puVar8)) {
        (**(code **)*param_2)();
        ExceptionList = pvStack_18;
        return;
      }
      puStack_36c = puVar8 + 1;
      uStack_350 = 0xf;
      uStack_354 = 0;
      auStack_364[0] = auStack_364[0] & 0xffffff00;
      FUN_00409350();
      local_c = 3;
      uStack_314 = 0xf;
      uStack_318 = 0;
      uStack_328 = uStack_328 & 0xffffff00;
      FUN_00409350();
      uStack_2f8 = 0xf;
      uStack_2fc = 0;
      uStack_30c = uStack_30c & 0xffffff00;
      local_c._0_1_ = 5;
      uStack_3a0 = 0x9757e9;
      pcVar5 = __itoa((int)piStack_384,(char *)auStack_2f0,10);
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      FUN_00409350();
      local_c._0_1_ = 6;
      FUN_00988fa0();
      local_c._0_1_ = 7;
      piStack_384 = (int *)((int)piStack_384 + 1);
      local_37c = FUN_00974c50();
      local_c._0_1_ = 8;
      FUN_00988f20();
      local_c._0_1_ = 9;
      FUN_00988f20();
      local_c._0_1_ = 10;
      FUN_00988f20();
      local_c._0_1_ = 0xb;
      FUN_00988f20();
      if (0xf < uStack_230) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_230 = 0xf;
      uStack_234 = 0;
      uStack_244 = uStack_244 & 0xffffff00;
      if (0xf < uStack_2a0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_2a0 = 0xf;
      uStack_2a4 = 0;
      uStack_2b4 = uStack_2b4 & 0xffffff00;
      if (0xf < uStack_24c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_24c = 0xf;
      uStack_250 = 0;
      uStack_260 = uStack_260 & 0xffffff00;
      if (0xf < uStack_284) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_284 = 0xf;
      uStack_288 = 0;
      uStack_298 = uStack_298 & 0xffffff00;
      if (0xf < uStack_268) break;
      uStack_268 = 0xf;
      uStack_26c = 0;
      uStack_27c = uStack_27c & 0xffffff00;
      if (0xf < uStack_2f8) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_2f8 = 0xf;
      uStack_2fc = 0;
      uStack_30c = uStack_30c & 0xffffff00;
      if (0xf < uStack_314) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_314 = 0xf;
      uStack_318 = 0;
      uStack_328 = uStack_328 & 0xffffff00;
      local_c._0_1_ = 0x14;
      if (0xf < uStack_350) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_350 = 0xf;
      uStack_354 = 0;
      auStack_364[0] = auStack_364[0] & 0xffffff00;
      uStack_2dc = 0xf;
      uStack_2e0 = 0;
      auStack_2f0[0] = auStack_2f0[0] & 0xffffff00;
      FUN_00409350();
      local_c._0_1_ = 0x15;
      uStack_334 = 0xf;
      uStack_338 = 0;
      uStack_348 = uStack_348 & 0xffffff00;
      uStack_3a0 = 0x975a7a;
      FUN_00408ed0();
      local_c._0_1_ = 0x16;
      uStack_3a0 = 0x975aa0;
      FUN_004015b0();
      local_c._0_1_ = 0x19;
      local_37c = FUN_00418e30();
      local_c._0_1_ = 0x18;
      if (0xf < uStack_334) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_334 = 0xf;
      uStack_338 = 0;
      uStack_348 = uStack_348 & 0xffffff00;
      FUN_00401280();
      local_c = CONCAT31(local_c._1_3_,0x15);
      FUN_00987ac0();
      ppuStack_1b0 = std::ios_base::vftable;
      FUN_00aad52d();
      if (0xf < uStack_2dc) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_c = 0xffffffff;
      uStack_2dc = 0xf;
      uStack_2e0 = 0;
      auStack_2f0[0] = auStack_2f0[0] & 0xffffff00;
      if (0xf < uStack_2bc) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_2bc = 0xf;
      uStack_2c0 = 0;
      uStack_2d0 = uStack_2d0 & 0xffffff00;
      puVar8 = puStack_36c;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  FUN_009a1440();
  piVar6 = DAT_0131be94;
  iVar4 = param_2[8];
  if (iVar4 < 0x1f1) {
    if (iVar4 == 0x1f0) {
      puVar9 = (uint *)(param_1 + 0x48);
      iStack_370 = 3;
    }
    else {
      if (iVar4 != 0x1ee) {
        if (iVar4 == 0x1ef) {
          puVar9 = (uint *)(param_1 + 0x38);
          iStack_370 = 2;
          goto LAB_00975294;
        }
        goto LAB_009751d0;
      }
      puVar9 = (uint *)(param_1 + 0x28);
      iStack_370 = 1;
    }
  }
  else {
    if (iVar4 == 0x966) {
      puVar9 = (uint *)(param_1 + 0x68);
      iStack_370 = 4;
      goto LAB_00975294;
    }
    if (iVar4 != 0x967) goto LAB_009751d0;
    puVar9 = (uint *)(param_1 + 0x58);
    iStack_370 = 5;
  }
LAB_00975294:
  puStack_374 = puVar9;
  if (puVar9 == (uint *)0x0) goto LAB_009751d0;
  ppiVar2 = (int **)puVar9[1];
  piStack_384 = DAT_0131be94;
  if (&piStack_384 < ppiVar2) {
    ppiVar3 = (int **)*puVar9;
    if (&piStack_384 < ppiVar3) goto LAB_009752f0;
    if (ppiVar2 == (int **)puVar9[2]) {
      FUN_00a513f0();
    }
    if ((undefined4 *)puVar9[1] != (undefined4 *)0x0) {
      *(undefined4 *)puVar9[1] =
           *(undefined4 *)(*puVar9 + ((int)&piStack_384 - (int)ppiVar3 >> 2) * 4);
      puVar9[1] = puVar9[1] + 4;
      local_37c = 1;
      goto LAB_00975317;
    }
  }
  else {
LAB_009752f0:
    if (ppiVar2 == (int **)puVar9[2]) {
      FUN_00a513f0();
    }
    if ((undefined4 *)puVar9[1] != (undefined4 *)0x0) {
      *(undefined4 *)puVar9[1] = piVar6;
    }
  }
  puVar9[1] = puVar9[1] + 4;
  local_37c = 1;
LAB_00975317:
  while( true ) {
    piVar6 = (int *)param_2[7];
    if ((char)piVar6[0x44] == '\0') {
      iVar4 = (**(code **)(*piVar6 + 4))();
      piVar6[2] = iVar4;
      if (iVar4 == 0) {
        piVar6[3] = 0x13;
      }
      *(undefined1 *)(piVar6 + 0x44) = 1;
    }
    piVar6 = piVar6 + 3;
    piVar10 = aiStack_120;
    for (iVar4 = 0x41; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar10 = *piVar6;
      piVar6 = piVar6 + 1;
      piVar10 = piVar10 + 1;
    }
    if ((aiStack_120[0] == 4) || (aiStack_120[0] == 0x13)) break;
    FUN_009a1440();
    pcVar5 = (char *)(param_2 + 9);
    uStack_350 = 0xf;
    uStack_354 = 0;
    auStack_364[0] = auStack_364[0] & 0xffffff00;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_00409350();
    local_c = 1;
    piVar6 = (int *)FUN_00aae9af();
    iVar4 = local_37c;
    local_c._0_1_ = 2;
    if (piVar6 == (int *)0x0) {
      piStack_384 = (int *)0x0;
    }
    else {
      local_37c = (int)auStack_3b0;
      uStack_3a0 = 0;
      auStack_3b0[0] = 0;
      piStack_384 = piVar6;
      FUN_00408ed0(auStack_364,0,0xffffffff);
      piStack_384 = (int *)FUN_009748d0(piVar6);
      local_37c = iVar4 + 1;
    }
    piVar6 = piStack_384;
    local_c = CONCAT31(local_c._1_3_,1);
    piStack_384[0x17] = iStack_370;
    piStack_380 = piStack_384;
    (**(code **)(*piStack_384 + 0xc))();
    ppiVar2 = (int **)puVar9[1];
    if ((&piStack_380 < ppiVar2) && (ppiVar3 = (int **)*puVar9, ppiVar3 <= &piStack_380)) {
      if (ppiVar2 == (int **)puVar9[2]) {
        uVar7 = (int)ppiVar2 - (int)ppiVar3 >> 2;
        if (0x3ffffffe < uVar7) {
LAB_00975731:
                    /* WARNING: Subroutine does not return */
          FUN_00aad3ad();
        }
        if ((uint)((int)puVar9[2] - (int)ppiVar3 >> 2) < uVar7 + 1) {
          FUN_004bf300();
        }
      }
      if ((undefined4 *)puVar9[1] != (undefined4 *)0x0) {
        *(undefined4 *)puVar9[1] =
             *(undefined4 *)(*puVar9 + ((int)&piStack_380 - (int)ppiVar3 >> 2) * 4);
      }
    }
    else {
      if (ppiVar2 == (int **)puVar9[2]) {
        uVar7 = (int)((int)ppiVar2 - *puVar9) >> 2;
        if (0x3ffffffe < uVar7) goto LAB_00975731;
        if ((uint)((int)((int)puVar9[2] - *puVar9) >> 2) < uVar7 + 1) {
          FUN_004bf300();
          piVar6 = piStack_384;
        }
      }
      if ((undefined4 *)puVar9[1] != (undefined4 *)0x0) {
        *(undefined4 *)puVar9[1] = piVar6;
      }
    }
    piVar6 = piStack_384;
    puVar9[1] = puVar9[1] + 4;
    FUN_005611f0();
    puStack_36c = (undefined4 *)piVar6[2];
    while (((undefined4 *)piStack_384[2] <= puStack_36c &&
           (puStack_36c < (undefined4 *)piStack_384[3]))) {
      piVar6 = (int *)*puStack_36c;
      puStack_36c = puStack_36c + 1;
      piStack_380 = piVar6;
      FUN_00975e60();
      puVar9 = local_378;
      ppiVar2 = (int **)local_378[1];
      if ((&piStack_380 < ppiVar2) && (ppiVar3 = (int **)*local_378, ppiVar3 <= &piStack_380)) {
        if (ppiVar2 == (int **)local_378[2]) {
          uVar7 = (int)ppiVar2 - (int)ppiVar3 >> 2;
          if (0x3ffffffe < uVar7) goto LAB_00975731;
          if ((uint)((int)local_378[2] - (int)ppiVar3 >> 2) < uVar7 + 1) {
            FUN_004bf300();
          }
        }
        if ((undefined4 *)puVar9[1] != (undefined4 *)0x0) {
          *(undefined4 *)puVar9[1] =
               *(undefined4 *)(*puVar9 + ((int)&piStack_380 - (int)ppiVar3 >> 2) * 4);
        }
      }
      else {
        if (ppiVar2 == (int **)local_378[2]) {
          uVar7 = (int)((int)ppiVar2 - *local_378) >> 2;
          if (0x3ffffffe < uVar7) goto LAB_00975731;
          if ((uint)((int)((int)local_378[2] - *local_378) >> 2) < uVar7 + 1) {
            FUN_004bf300();
          }
        }
        if ((undefined4 *)puVar9[1] != (undefined4 *)0x0) {
          *(undefined4 *)puVar9[1] = piVar6;
        }
      }
      puVar9[1] = puVar9[1] + 4;
      if (piVar6[0x6e] != 0 || piVar6[0x6f] != 0) {
        ppiVar2 = *(int ***)(param_1 + 0x7c);
        puVar9 = (uint *)(param_1 + 0x78);
        if ((&piStack_380 < ppiVar2) && (ppiVar3 = (int **)*puVar9, ppiVar3 <= &piStack_380)) {
          if (ppiVar2 == *(int ***)(param_1 + 0x80)) {
            uVar7 = (int)ppiVar2 - (int)ppiVar3 >> 2;
            if (0x3ffffffe < uVar7) goto LAB_00975731;
            if ((uint)((int)*(int ***)(param_1 + 0x80) - (int)ppiVar3 >> 2) < uVar7 + 1) {
              FUN_004bf300();
              piVar6 = piStack_380;
            }
          }
          if (*(undefined4 **)(param_1 + 0x7c) != (undefined4 *)0x0) {
            **(undefined4 **)(param_1 + 0x7c) =
                 *(undefined4 *)(*puVar9 + ((int)&piStack_380 - (int)ppiVar3 >> 2) * 4);
          }
        }
        else {
          if (ppiVar2 == *(int ***)(param_1 + 0x80)) {
            uVar7 = (int)((int)ppiVar2 - *puVar9) >> 2;
            if (0x3ffffffe < uVar7) goto LAB_00975731;
            if ((uint)((int)((int)*(int ***)(param_1 + 0x80) - *puVar9) >> 2) < uVar7 + 1) {
              FUN_004bf300();
            }
          }
          if (*(undefined4 **)(param_1 + 0x7c) != (undefined4 *)0x0) {
            **(undefined4 **)(param_1 + 0x7c) = piVar6;
          }
        }
        *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 4;
      }
      if ((char)piVar6[0x71] != '\0') {
        *(int **)(param_1 + 0x8c) = piVar6;
      }
    }
    local_c = 0xffffffff;
    puVar9 = puStack_374;
    if (0xf < uStack_350) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  (**(code **)(*(int *)param_2[7] + 4))();
  goto LAB_009751d0;
}

