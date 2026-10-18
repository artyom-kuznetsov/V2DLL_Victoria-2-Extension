// FUN_005664e0 @ 005664e0 body=[[005664e0, 00566a55] [00566a5e, 00566a8a] [00566a93, 00566ab7] [00566ac0, 00566c48] [00566c4c, 00566c7f] [00566c83, 00566cb1] [00566cb5, 00566ce3] [00566ce7, 00566d15] [00566d19, 00566d47] [00566d4b, 00566d79] [00566d7d, 00566dad] [00566db1, 00566e64] [00566e68, 00566e92] [00566e96, 00566ec6] [00566eca, 00566f7c] [00566f80, 00566fd9] [00566fdd, 00567009] [0056700d, 00567060]]


void FUN_005664e0(int param_1,undefined4 *param_2)

{
  uint *puVar1;
  char cVar2;
  void *_Dst;
  int **ppiVar3;
  int **ppiVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int *piVar8;
  uint uVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  int *piVar13;
  int *piStack_3c8;
  undefined1 auStack_3c4 [12];
  undefined4 uStack_3b8;
  int iStack_394;
  int *apiStack_38c [2];
  int local_384;
  uint uStack_380;
  undefined4 uStack_370;
  uint uStack_36c;
  uint auStack_360 [4];
  undefined4 uStack_350;
  uint uStack_34c;
  uint uStack_344;
  undefined4 uStack_334;
  uint uStack_330;
  uint auStack_328 [4];
  undefined4 uStack_318;
  uint uStack_314;
  uint uStack_30c;
  undefined4 uStack_2fc;
  uint uStack_2f8;
  uint uStack_2f0;
  undefined4 uStack_2e0;
  uint uStack_2dc;
  uint auStack_2d4 [4];
  undefined4 uStack_2c4;
  uint uStack_2c0;
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
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b8ed79;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  FUN_0057afc0();
  _Dst = *(void **)(param_1 + 0xc);
  puVar1 = (uint *)(param_1 + 0xc);
  if (_Dst != *(void **)(param_1 + 0x10)) {
    uStack_3b8 = 0x566535;
    FID_conflict__memcpy(_Dst,*(void **)(param_1 + 0x10),0);
    *(void **)(param_1 + 0x10) = _Dst;
  }
  local_384 = 1;
  *(undefined4 *)(param_1 + 0x3c) = 1;
  if (DAT_0125880c == (undefined1 *)0x0) {
    iVar6 = FUN_00aae9af();
    local_c = 0;
    if (iVar6 == 0) {
      DAT_0125880c = (undefined1 *)0x0;
    }
    else {
      DAT_0125880c = (undefined1 *)FUN_00567560();
    }
    local_c = 0xffffffff;
  }
  apiStack_38c[1] = (int *)DAT_0125880c;
  FUN_004ec4a0();
  FUN_0068f390();
  FUN_0068f390();
  do {
    piVar8 = (int *)param_2[7];
    if ((char)piVar8[0x44] == '\0') {
      iVar6 = (**(code **)(*piVar8 + 4))();
      piVar8[2] = iVar6;
      if (iVar6 == 0) {
        piVar8[3] = 0x13;
      }
      *(undefined1 *)(piVar8 + 0x44) = 1;
    }
    piVar8 = piVar8 + 3;
    piVar10 = aiStack_228;
    for (iVar6 = 0x41; iVar6 != 0; iVar6 = iVar6 + -1) {
      *piVar10 = *piVar8;
      piVar8 = piVar8 + 1;
      piVar10 = piVar10 + 1;
    }
    if (aiStack_228[0] == 0x13) {
      iStack_394 = 0;
      if (0 < (int)(*(int *)(param_1 + 0x10) - *puVar1 & 0xfffffffc)) {
        do {
          uStack_34c = 0xf;
          uStack_350 = 0;
          auStack_360[0] = auStack_360[0] & 0xffffff00;
          FUN_00409350();
          local_c = 6;
          uStack_2dc = 0xf;
          uStack_2e0 = 0;
          uStack_2f0 = uStack_2f0 & 0xffffff00;
          FUN_00409350();
          local_c._0_1_ = 7;
          FUN_00567250();
          uStack_2f8 = 0xf;
          uStack_2fc = 0;
          uStack_30c = uStack_30c & 0xffffff00;
          local_c._0_1_ = 9;
          uStack_3b8 = 0x566b73;
          pcVar7 = __itoa(iStack_394,(char *)auStack_2d4,10);
          do {
            cVar2 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar2 != '\0');
          FUN_00409350();
          local_c._0_1_ = 10;
          FUN_00988fa0();
          local_c._0_1_ = 0xb;
          FUN_00988f20();
          local_c._0_1_ = 0xc;
          FUN_00988f20();
          local_c._0_1_ = 0xd;
          FUN_00988f20();
          local_c._0_1_ = 0xe;
          FUN_00988f20();
          if (0xf < uStack_268) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          uStack_268 = 0xf;
          uStack_26c = 0;
          uStack_27c = uStack_27c & 0xffffff00;
          if (0xf < uStack_2a0) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          uStack_2a0 = 0xf;
          uStack_2a4 = 0;
          uStack_2b4 = uStack_2b4 & 0xffffff00;
          if (0xf < uStack_230) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          uStack_230 = 0xf;
          uStack_234 = 0;
          uStack_244 = uStack_244 & 0xffffff00;
          if (0xf < uStack_24c) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          uStack_24c = 0xf;
          uStack_250 = 0;
          uStack_260 = uStack_260 & 0xffffff00;
          if (0xf < uStack_2f8) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          uStack_2f8 = 0xf;
          uStack_2fc = 0;
          uStack_30c = uStack_30c & 0xffffff00;
          if (0xf < uStack_284) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          uStack_284 = 0xf;
          uStack_288 = 0;
          uStack_298 = uStack_298 & 0xffffff00;
          if (0xf < uStack_2dc) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          uStack_2dc = 0xf;
          uStack_2e0 = 0;
          uStack_2f0 = uStack_2f0 & 0xffffff00;
          local_c._0_1_ = 0x17;
          if (0xf < uStack_34c) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          uStack_34c = 0xf;
          uStack_350 = 0;
          auStack_360[0] = auStack_360[0] & 0xffffff00;
          FUN_00448740();
          iVar6 = **(int **)(iStack_394 * 4 + *puVar1);
          while (iVar6 != 0) {
            iVar6 = *(int *)(iVar6 + 8);
            uStack_330 = 0xf;
            uStack_334 = 0;
            uStack_344 = uStack_344 & 0xffffff00;
            FUN_00409350();
            local_c._0_1_ = 0x18;
            FUN_00567250();
            local_c._0_1_ = 0x19;
            FUN_00988f20();
            local_c._0_1_ = 0x1a;
            uStack_3b8 = 0x566e54;
            FUN_00448aa0();
            if (0xf < uStack_36c) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            uStack_36c = 0xf;
            uStack_370 = 0;
            uStack_380 = uStack_380 & 0xffffff00;
            if (0xf < uStack_2c0) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            local_c._0_1_ = 0x17;
            uStack_2c0 = 0xf;
            uStack_2c4 = 0;
            auStack_2d4[0] = auStack_2d4[0] & 0xffffff00;
            if (0xf < uStack_330) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
          }
          uStack_330 = 0xf;
          uStack_334 = 0;
          uStack_344 = uStack_344 & 0xffffff00;
          FUN_00409350();
          local_c._0_1_ = 0x1b;
          uStack_36c = 0xf;
          uStack_370 = 0;
          uStack_380 = uStack_380 & 0xffffff00;
          uStack_3b8 = 0x566f1e;
          FUN_00408ed0();
          local_c._0_1_ = 0x1c;
          uStack_3b8 = 0x566f3e;
          FUN_004015b0();
          local_c._0_1_ = 0x1f;
          FUN_00418e30();
          local_c._0_1_ = 0x1e;
          if (0xf < uStack_36c) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          uStack_36c = 0xf;
          uStack_370 = 0;
          uStack_380 = uStack_380 & 0xffffff00;
          FUN_00401280();
          local_c = CONCAT31(local_c._1_3_,0x1b);
          FUN_00987ac0();
          ppuStack_1b0 = std::ios_base::vftable;
          FUN_00aad52d();
          if (0xf < uStack_330) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_c = 0xffffffff;
          uStack_330 = 0xf;
          uStack_334 = 0;
          uStack_344 = uStack_344 & 0xffffff00;
          if (0xf < uStack_314) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          iStack_394 = iStack_394 + 1;
          uStack_314 = 0xf;
          uStack_318 = 0;
          auStack_328[0] = auStack_328[0] & 0xffffff00;
        } while (iStack_394 < (int)(*(int *)(param_1 + 0x10) - *puVar1) >> 2);
      }
      (**(code **)*param_2)();
      ExceptionList = pvStack_18;
      return;
    }
    FUN_009a1440();
    pcVar7 = (char *)(param_2 + 9);
    uStack_34c = 0xf;
    uStack_350 = 0;
    auStack_360[0] = auStack_360[0] & 0xffffff00;
    do {
      cVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    FUN_00409350();
    local_c = 1;
    iVar6 = FUN_00aae9af();
    local_c._0_1_ = 2;
    if (iVar6 == 0) {
      piVar8 = (int *)0x0;
    }
    else {
      apiStack_38c[1] = (int *)&piStack_3c8;
      uStack_3b8 = 0;
      piStack_3c8 = (int *)((uint)piStack_3c8 & 0xffffff00);
      FUN_00408ed0(auStack_360,0,0xffffffff);
      piVar8 = (int *)FUN_00567090(iVar6);
    }
    local_c = CONCAT31(local_c._1_3_,1);
    ppiVar3 = *(int ***)(param_1 + 0x10);
    apiStack_38c[0] = piVar8;
    if ((apiStack_38c < ppiVar3) && (ppiVar4 = (int **)*puVar1, ppiVar4 <= apiStack_38c)) {
      if (ppiVar3 == *(int ***)(param_1 + 0x14)) {
        uVar9 = (int)ppiVar3 - (int)ppiVar4 >> 2;
        if (0x3ffffffe < uVar9) {
LAB_00566a93:
                    /* WARNING: Subroutine does not return */
          FUN_00aad3ad();
        }
        if ((uint)((int)*(int ***)(param_1 + 0x14) - (int)ppiVar4 >> 2) < uVar9 + 1) {
          FUN_004bf300();
        }
      }
      if (*(undefined4 **)(param_1 + 0x10) != (undefined4 *)0x0) {
        **(undefined4 **)(param_1 + 0x10) =
             *(undefined4 *)(*puVar1 + ((int)apiStack_38c - (int)ppiVar4 >> 2) * 4);
      }
    }
    else {
      if (ppiVar3 == *(int ***)(param_1 + 0x14)) {
        uVar9 = (int)((int)ppiVar3 - *puVar1) >> 2;
        if (0x3ffffffe < uVar9) goto LAB_00566a93;
        if ((uint)((int)((int)*(int ***)(param_1 + 0x14) - *puVar1) >> 2) < uVar9 + 1) {
          FUN_004bf300();
        }
      }
      if (*(undefined4 **)(param_1 + 0x10) != (undefined4 *)0x0) {
        **(undefined4 **)(param_1 + 0x10) = piVar8;
      }
    }
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 4;
    while( true ) {
      piVar10 = (int *)param_2[7];
      if ((char)piVar10[0x44] == '\0') {
        iVar6 = (**(code **)(*piVar10 + 4))();
        piVar10[2] = iVar6;
        if (iVar6 == 0) {
          piVar10[3] = 0x13;
        }
        *(undefined1 *)(piVar10 + 0x44) = 1;
      }
      piVar10 = piVar10 + 3;
      piVar13 = aiStack_120;
      for (iVar6 = 0x41; iVar6 != 0; iVar6 = iVar6 + -1) {
        *piVar13 = *piVar10;
        piVar10 = piVar10 + 1;
        piVar13 = piVar13 + 1;
      }
      if ((aiStack_120[0] == 4) || (aiStack_120[0] == 0x13)) break;
      FUN_009a1440();
      pcVar7 = (char *)(param_2 + 9);
      uStack_314 = 0xf;
      uStack_318 = 0;
      auStack_328[0] = auStack_328[0] & 0xffffff00;
      do {
        cVar2 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar2 != '\0');
      FUN_00409350();
      local_c._0_1_ = 3;
      iVar6 = FUN_00aae9af();
      local_c._0_1_ = 4;
      if (iVar6 == 0) {
        piVar10 = (int *)0x0;
      }
      else {
        apiStack_38c[1] = (int *)auStack_3c4;
        piStack_3c8 = (int *)0xffffffff;
        auStack_3c4[0] = 0;
        FUN_00408ed0(auStack_328,0);
        iVar5 = local_384;
        piStack_3c8 = piVar8;
        piVar10 = (int *)FUN_00567280(iVar6);
        local_384 = iVar5 + 1;
      }
      local_c = CONCAT31(local_c._1_3_,3);
      apiStack_38c[1] = (int *)piVar8[1];
      apiStack_38c[0] = piVar10;
      puVar11 = (undefined4 *)FUN_00aae9af();
      if (puVar11 == (undefined4 *)0x0) {
        puVar11 = (undefined4 *)0x0;
      }
      else {
        *puVar11 = piVar10;
        puVar11[1] = apiStack_38c[1];
        puVar11[2] = 0;
        *(undefined1 *)(puVar11 + 3) = 0;
      }
      iVar6 = piVar8[2];
      piVar8[1] = (int)puVar11;
      piVar8[2] = iVar6 + 1;
      if (iVar6 == 0) {
        *piVar8 = (int)puVar11;
      }
      else {
        *(undefined4 **)((int)apiStack_38c[1] + 8) = puVar11;
      }
      FUN_004ec4a0();
      (**(code **)(*piVar10 + 0xc))();
      ppiVar3 = *(int ***)(param_1 + 0x20);
      if ((apiStack_38c < ppiVar3) &&
         (ppiVar4 = *(int ***)(param_1 + 0x1c), ppiVar4 <= apiStack_38c)) {
        if (ppiVar3 == *(int ***)(param_1 + 0x24)) {
          uVar9 = (int)ppiVar3 - (int)ppiVar4 >> 2;
          if (0x3ffffffe < uVar9) goto LAB_00566a93;
          if ((uint)((int)*(int ***)(param_1 + 0x24) - (int)ppiVar4 >> 2) < uVar9 + 1) {
            FUN_004bf300();
          }
        }
        if (*(undefined4 **)(param_1 + 0x20) != (undefined4 *)0x0) {
          **(undefined4 **)(param_1 + 0x20) =
               *(undefined4 *)
                (*(int *)(param_1 + 0x1c) + ((int)apiStack_38c - (int)ppiVar4 >> 2) * 4);
        }
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 4;
      }
      else {
        if (ppiVar3 == *(int ***)(param_1 + 0x24)) {
          uVar9 = (int)ppiVar3 - *(int *)(param_1 + 0x1c) >> 2;
          if (0x3ffffffe < uVar9) goto LAB_00566a93;
          if ((uint)((int)*(int ***)(param_1 + 0x24) - *(int *)(param_1 + 0x1c) >> 2) < uVar9 + 1) {
            FUN_004bf300();
          }
        }
        if (*(undefined4 **)(param_1 + 0x20) != (undefined4 *)0x0) {
          **(undefined4 **)(param_1 + 0x20) = piVar10;
        }
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 4;
      }
      iVar6 = *(int *)(param_1 + 0x30);
      puVar12 = (undefined1 *)FUN_00aae9af();
      local_c._0_1_ = 5;
      apiStack_38c[1] = (int *)puVar12;
      if (puVar12 == (undefined1 *)0x0) {
        puVar12 = (undefined1 *)0x0;
      }
      else {
        *(undefined4 *)(puVar12 + 0x14) = 0xf;
        *(undefined4 *)(puVar12 + 0x10) = 0;
        *puVar12 = 0;
        uStack_3b8 = 0x566a03;
        FUN_00408ed0();
        *(int *)(puVar12 + 0x1c) = iVar6;
        *(undefined4 *)(puVar12 + 0x20) = 0;
        puVar12[0x24] = 0;
      }
      iVar5 = *(int *)(param_1 + 0x34);
      *(undefined1 **)(param_1 + 0x30) = puVar12;
      *(int *)(param_1 + 0x34) = iVar5 + 1;
      if (iVar5 == 0) {
        *(undefined1 **)(param_1 + 0x2c) = puVar12;
      }
      else {
        *(undefined1 **)(iVar6 + 0x20) = puVar12;
      }
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
      local_c = CONCAT31(local_c._1_3_,1);
      if (0xf < uStack_314) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    (**(code **)(*(int *)param_2[7] + 4))();
    local_c = 0xffffffff;
    if (0xf < uStack_34c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  } while( true );
}

