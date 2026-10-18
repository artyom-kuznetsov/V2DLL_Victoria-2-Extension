// FUN_004daed0 @ 004daed0 body=[[004daed0, 004db25a] [004db263, 004db40a] [004db40e, 004db445] [004db449, 004db474] [004db478, 004db4a3] [004db4a7, 004db4d2] [004db4d6, 004db4fb] [004db4ff, 004db51e] [004db522, 004db54c] [004db550, 004db613] [004db617, 004db676] [004db67a, 004db6b0] [004db6b4, 004db6fd]]


void FUN_004daed0(int param_1,undefined4 *param_2)

{
  char cVar1;
  byte bVar2;
  void *_Dst;
  int **ppiVar3;
  int **ppiVar4;
  int iVar5;
  char *pcVar6;
  int *piVar7;
  uint uVar8;
  byte *pbVar9;
  undefined4 *puVar10;
  int *piVar11;
  bool bVar12;
  undefined1 auStack_2a0 [16];
  undefined4 uStack_290;
  int *apiStack_270 [2];
  int local_268;
  uint auStack_264 [4];
  undefined4 uStack_254;
  uint uStack_250;
  uint uStack_248;
  undefined4 uStack_238;
  uint uStack_234;
  uint uStack_228;
  undefined4 uStack_218;
  uint uStack_214;
  uint uStack_20c;
  undefined4 uStack_1fc;
  uint uStack_1f8;
  uint auStack_1f0 [4];
  undefined4 uStack_1e0;
  uint uStack_1dc;
  uint uStack_1d0;
  undefined4 uStack_1c0;
  uint uStack_1bc;
  undefined4 *puStack_1b4;
  uint uStack_1ac;
  undefined4 uStack_19c;
  uint uStack_198;
  uint uStack_190;
  undefined4 uStack_180;
  uint uStack_17c;
  uint uStack_174;
  undefined4 uStack_164;
  uint uStack_160;
  uint uStack_158;
  undefined4 uStack_148;
  uint uStack_144;
  uint uStack_13c;
  undefined4 uStack_12c;
  uint uStack_128;
  int aiStack_120 [30];
  undefined **ppuStack_a8;
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b96321;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  FUN_0057afc0();
  _Dst = *(void **)(param_1 + 0xc);
  apiStack_270[1] = (int *)(param_1 + 0xc);
  if (_Dst != *(void **)(param_1 + 0x10)) {
    uStack_290 = 0x4daf24;
    FID_conflict__memcpy(_Dst,*(void **)(param_1 + 0x10),0);
    apiStack_270[1][1] = (int)_Dst;
  }
  iVar5 = DAT_01258730;
  if (DAT_01258730 == 0) {
    local_268 = FUN_00aae9af();
    local_c = iVar5;
    if (local_268 == 0) {
      DAT_01258730 = 0;
    }
    else {
      DAT_01258730 = FUN_004dac50();
    }
    local_c = 0xffffffff;
  }
  iVar5 = DAT_01258730;
  FUN_004dc3b0();
  local_268 = iVar5;
  FUN_0068f390();
  *(int *)(param_1 + 0x2c) = iVar5;
  *(int *)(param_1 + 0x30) = iVar5;
  *(int *)(param_1 + 0x34) = iVar5;
  *(int *)(param_1 + 0x38) = iVar5;
  local_268 = 1;
  do {
    piVar7 = (int *)param_2[7];
    if ((char)piVar7[0x44] == '\0') {
      iVar5 = (**(code **)(*piVar7 + 4))();
      piVar7[2] = iVar5;
      if (iVar5 == 0) {
        piVar7[3] = 0x13;
      }
      *(undefined1 *)(piVar7 + 0x44) = 1;
    }
    piVar7 = piVar7 + 3;
    piVar11 = aiStack_120;
    for (iVar5 = 0x41; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar11 = *piVar7;
      piVar7 = piVar7 + 1;
      piVar11 = piVar11 + 1;
    }
    if (aiStack_120[0] == 0x13) {
      for (uVar8 = *apiStack_270[1];
          ((uint)*apiStack_270[1] <= uVar8 && (uVar8 < (uint)apiStack_270[1][1])); uVar8 = uVar8 + 4
          ) {
        FUN_004d9ab0();
      }
      apiStack_270[0] = (int *)0x0;
      puVar10 = (undefined4 *)*apiStack_270[1];
      while( true ) {
        if ((puVar10 < (undefined4 *)*apiStack_270[1]) ||
           ((undefined4 *)apiStack_270[1][1] <= puVar10)) {
          (**(code **)*param_2)();
          ExceptionList = pvStack_18;
          return;
        }
        piVar7 = (int *)*puVar10;
        puStack_1b4 = puVar10 + 1;
        uStack_250 = 0xf;
        uStack_254 = 0;
        auStack_264[0] = auStack_264[0] & 0xffffff00;
        FUN_00409350();
        local_c = 3;
        uStack_1f8 = 0xf;
        uStack_1fc = 0;
        uStack_20c = uStack_20c & 0xffffff00;
        FUN_00409350();
        uStack_214 = 0xf;
        uStack_218 = 0;
        uStack_228 = uStack_228 & 0xffffff00;
        local_c._0_1_ = 5;
        uStack_290 = 0x4db329;
        pcVar6 = __itoa((int)apiStack_270[0],(char *)auStack_1f0,10);
        do {
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        FUN_00409350();
        local_c._0_1_ = 6;
        FUN_00988fa0();
        local_c._0_1_ = 7;
        apiStack_270[0] = (int *)((int)apiStack_270[0] + 1);
        local_268 = (**(code **)(*piVar7 + 0x18))();
        local_c._0_1_ = 8;
        FUN_00988f20();
        local_c._0_1_ = 9;
        FUN_00988f20();
        local_c._0_1_ = 10;
        FUN_00988f20();
        local_c._0_1_ = 0xb;
        FUN_00988f20();
        if (0xf < uStack_128) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        uStack_128 = 0xf;
        uStack_12c = 0;
        uStack_13c = uStack_13c & 0xffffff00;
        if (0xf < uStack_160) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        uStack_160 = 0xf;
        uStack_164 = 0;
        uStack_174 = uStack_174 & 0xffffff00;
        if (0xf < uStack_198) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        uStack_198 = 0xf;
        uStack_19c = 0;
        uStack_1ac = uStack_1ac & 0xffffff00;
        if (0xf < uStack_17c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        uStack_17c = 0xf;
        uStack_180 = 0;
        uStack_190 = uStack_190 & 0xffffff00;
        if (0xf < uStack_144) break;
        uStack_144 = 0xf;
        uStack_148 = 0;
        uStack_158 = uStack_158 & 0xffffff00;
        if (0xf < uStack_214) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        uStack_214 = 0xf;
        uStack_218 = 0;
        uStack_228 = uStack_228 & 0xffffff00;
        if (0xf < uStack_1f8) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        uStack_1f8 = 0xf;
        uStack_1fc = 0;
        uStack_20c = uStack_20c & 0xffffff00;
        local_c._0_1_ = 0x14;
        if (0xf < uStack_250) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        uStack_250 = 0xf;
        uStack_254 = 0;
        auStack_264[0] = auStack_264[0] & 0xffffff00;
        uStack_1dc = 0xf;
        uStack_1e0 = 0;
        auStack_1f0[0] = auStack_1f0[0] & 0xffffff00;
        FUN_00409350();
        local_c._0_1_ = 0x15;
        uStack_234 = 0xf;
        uStack_238 = 0;
        uStack_248 = uStack_248 & 0xffffff00;
        uStack_290 = 0x4db5af;
        FUN_00408ed0();
        local_c._0_1_ = 0x16;
        uStack_290 = 0x4db5d5;
        FUN_004015b0();
        local_c._0_1_ = 0x19;
        local_268 = FUN_00418e30();
        local_c._0_1_ = 0x18;
        if (0xf < uStack_234) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        uStack_234 = 0xf;
        uStack_238 = 0;
        uStack_248 = uStack_248 & 0xffffff00;
        FUN_00401280();
        local_c = CONCAT31(local_c._1_3_,0x15);
        FUN_00987ac0();
        ppuStack_a8 = std::ios_base::vftable;
        FUN_00aad52d();
        if (0xf < uStack_1dc) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_c = 0xffffffff;
        uStack_1dc = 0xf;
        uStack_1e0 = 0;
        auStack_1f0[0] = auStack_1f0[0] & 0xffffff00;
        if (0xf < uStack_1bc) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        uStack_1bc = 0xf;
        uStack_1c0 = 0;
        uStack_1d0 = uStack_1d0 & 0xffffff00;
        puVar10 = puStack_1b4;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    FUN_009a1440();
    pcVar6 = (char *)(param_2 + 9);
    uStack_250 = 0xf;
    uStack_254 = 0;
    auStack_264[0] = auStack_264[0] & 0xffffff00;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_00409350();
    local_c = 1;
    piVar7 = (int *)FUN_00aae9af();
    iVar5 = local_268;
    local_c._0_1_ = 2;
    if (piVar7 == (int *)0x0) {
      piVar7 = (int *)0x0;
    }
    else {
      local_268 = (int)auStack_2a0;
      uStack_290 = 0;
      auStack_2a0[0] = 0;
      apiStack_270[0] = piVar7;
      FUN_00408ed0(auStack_264,0,0xffffffff);
      piVar7 = (int *)FUN_004d8b60(piVar7);
      local_268 = iVar5 + 1;
    }
    local_c = CONCAT31(local_c._1_3_,1);
    apiStack_270[0] = piVar7;
    FUN_004dc3b0();
    piVar11 = apiStack_270[1];
    ppiVar3 = (int **)apiStack_270[1][1];
    if ((apiStack_270 < ppiVar3) && (ppiVar4 = (int **)*apiStack_270[1], ppiVar4 <= apiStack_270)) {
      if (ppiVar3 == (int **)apiStack_270[1][2]) {
        uVar8 = (int)ppiVar3 - (int)ppiVar4 >> 2;
        if (0x3ffffffe < uVar8) {
LAB_004db263:
                    /* WARNING: Subroutine does not return */
          FUN_00aad3ad();
        }
        if ((uint)(apiStack_270[1][2] - (int)ppiVar4 >> 2) < uVar8 + 1) {
          FUN_004bf300();
        }
      }
      if ((undefined4 *)piVar11[1] != (undefined4 *)0x0) {
        *(undefined4 *)piVar11[1] =
             *(undefined4 *)(*piVar11 + ((int)apiStack_270 - (int)ppiVar4 >> 2) * 4);
      }
    }
    else {
      if (ppiVar3 == (int **)apiStack_270[1][2]) {
        uVar8 = (int)ppiVar3 - *apiStack_270[1] >> 2;
        if (0x3ffffffe < uVar8) goto LAB_004db263;
        if ((uint)(apiStack_270[1][2] - *apiStack_270[1] >> 2) < uVar8 + 1) {
          FUN_004bf300();
        }
      }
      if ((undefined4 *)piVar11[1] != (undefined4 *)0x0) {
        *(undefined4 *)piVar11[1] = piVar7;
      }
    }
    piVar11[1] = piVar11[1] + 4;
    pbVar9 = (byte *)(piVar7 + 8);
    if (0xf < (uint)piVar7[0xd]) {
      pbVar9 = *(byte **)pbVar9;
    }
    pcVar6 = "naval_base";
    do {
      bVar2 = *pbVar9;
      bVar12 = bVar2 < (byte)*pcVar6;
      if (bVar2 != *pcVar6) {
LAB_004db198:
        iVar5 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
        goto LAB_004db19d;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar9[1];
      bVar12 = bVar2 < (byte)pcVar6[1];
      if (bVar2 != pcVar6[1]) goto LAB_004db198;
      pbVar9 = pbVar9 + 2;
      pcVar6 = pcVar6 + 2;
    } while (bVar2 != 0);
    iVar5 = 0;
LAB_004db19d:
    if (iVar5 == 0) {
      *(int **)(param_1 + 0x30) = piVar7;
    }
    (**(code **)(*piVar7 + 0xc))();
    if (piVar7[4] == 2) {
      *(int **)(param_1 + 0x34) = piVar7;
    }
    else if (piVar7[4] == 4) {
      *(int **)(param_1 + 0x38) = piVar7;
    }
    if (*(char *)((int)piVar7 + 0x131) != '\0') {
      piVar7[0x4d] = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c) >> 2;
      ppiVar3 = *(int ***)(param_1 + 0x20);
      if (apiStack_270 < ppiVar3) {
        ppiVar4 = *(int ***)(param_1 + 0x1c);
        if (apiStack_270 < ppiVar4) goto LAB_004db221;
        if (ppiVar3 == *(int ***)(param_1 + 0x24)) {
          FUN_00a513f0();
        }
        if (*(undefined4 **)(param_1 + 0x20) != (undefined4 *)0x0) {
          **(undefined4 **)(param_1 + 0x20) =
               *(undefined4 *)
                (*(int *)(param_1 + 0x1c) + ((int)apiStack_270 - (int)ppiVar4 >> 2) * 4);
        }
      }
      else {
LAB_004db221:
        if (ppiVar3 == *(int ***)(param_1 + 0x24)) {
          FUN_00a513f0();
        }
        if (*(undefined4 **)(param_1 + 0x20) != (undefined4 *)0x0) {
          **(undefined4 **)(param_1 + 0x20) = piVar7;
        }
      }
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 4;
    }
    local_c = 0xffffffff;
    if (0xf < uStack_250) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  } while( true );
}

