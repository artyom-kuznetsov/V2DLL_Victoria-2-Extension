// FUN_008b27b0 @ 008b27b0 body=[[008b27b0, 008b2ad5] [008b2ade, 008b2cc4] [008b2cc8, 008b2cf7] [008b2cfb, 008b2d25] [008b2d29, 008b2d53] [008b2d57, 008b2d81] [008b2d85, 008b2daf] [008b2db3, 008b2ddd] [008b2de1, 008b2e0d] [008b2e11, 008b2ec2] [008b2ec6, 008b2f1e] [008b2f22, 008b2f4e] [008b2f52, 008b2f95]]


void FUN_008b27b0(int param_1,undefined4 *param_2)

{
  char cVar1;
  void *_Dst;
  int **ppiVar2;
  int **ppiVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  uint uVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined4 uVar10;
  undefined4 ***pppuVar11;
  uint uVar12;
  int *piVar13;
  int *apiStack_378 [5];
  uint auStack_364 [4];
  undefined4 uStack_354;
  uint uStack_350;
  undefined4 **appuStack_348 [4];
  undefined4 uStack_338;
  uint uStack_334;
  uint auStack_328 [4];
  undefined4 uStack_318;
  uint uStack_314;
  uint auStack_308 [4];
  undefined4 uStack_2f8;
  uint uStack_2f4;
  uint auStack_2ec [4];
  undefined4 uStack_2dc;
  uint uStack_2d8;
  uint auStack_2d0 [4];
  undefined4 uStack_2c0;
  uint uStack_2bc;
  uint auStack_2b4 [4];
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
  undefined **appuStack_1b0 [36];
  int aiStack_120 [66];
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  int iStack_c;
  
  iStack_c = 0xffffffff;
  puStack_10 = &LAB_00b58b6e;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  FUN_0057afc0(param_1);
  _Dst = *(void **)(param_1 + 0xc);
  apiStack_378[2] = (int *)(param_1 + 0xc);
  if (_Dst != *(void **)(param_1 + 0x10)) {
    FID_conflict__memcpy(_Dst,*(void **)(param_1 + 0x10),0);
    *(void **)(param_1 + 0x10) = _Dst;
  }
  do {
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
    piVar13 = aiStack_228;
    for (iVar4 = 0x41; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar13 = *piVar6;
      piVar6 = piVar6 + 1;
      piVar13 = piVar13 + 1;
    }
    if (aiStack_228[0] == 0x13) {
      apiStack_378[3] = (int *)*apiStack_378[2];
      apiStack_378[0] = (int *)0x0;
      while( true ) {
        if ((apiStack_378[3] < (int *)*apiStack_378[2]) ||
           ((int *)apiStack_378[2][1] <= apiStack_378[3])) {
          (**(code **)*param_2)(1);
          ExceptionList = pvStack_18;
          return;
        }
        iVar4 = *apiStack_378[3];
        apiStack_378[3] = apiStack_378[3] + 1;
        uStack_350 = 0xf;
        uStack_354 = 0;
        auStack_364[0] = auStack_364[0] & 0xffffff00;
        FUN_00409350(" entries = ",0xb);
        iStack_c = 2;
        uStack_2f4 = 0xf;
        uStack_2f8 = 0;
        auStack_308[0] = auStack_308[0] & 0xffffff00;
        FUN_00409350(" tag = ",7);
        uStack_2d8 = 0xf;
        uStack_2dc = 0;
        auStack_2ec[0] = auStack_2ec[0] & 0xffffff00;
        iStack_c._0_1_ = 4;
        pcVar9 = __itoa((int)apiStack_378[0],(char *)auStack_328,10);
        pcVar5 = pcVar9;
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        FUN_00409350(pcVar9,(int)pcVar5 - (int)(pcVar9 + 1));
        iStack_c._0_1_ = 5;
        apiStack_378[1] = (int *)FUN_00988fa0(auStack_2ec);
        apiStack_378[0] = (int *)((int)apiStack_378[0] + 1);
        uStack_2bc = 0xf;
        uStack_2c0 = 0;
        auStack_2d0[0] = auStack_2d0[0] & 0xffffff00;
        iStack_c._0_1_ = 7;
        pcVar9 = __itoa(*(int *)(iVar4 + 0x28),(char *)auStack_328,10);
        pcVar5 = pcVar9;
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        FUN_00409350(pcVar9,(int)pcVar5 - (int)(pcVar9 + 1));
        iStack_c._0_1_ = 8;
        FUN_00988f20(auStack_308);
        iStack_c._0_1_ = 9;
        FUN_00988f20(iVar4 + 4);
        iStack_c._0_1_ = 10;
        FUN_00988f20(auStack_364);
        iStack_c._0_1_ = 0xb;
        FUN_00988f20(auStack_2d0);
        if (0xf < uStack_230) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(uStack_244);
        }
        uStack_230 = 0xf;
        uStack_234 = 0;
        uStack_244 = uStack_244 & 0xffffff00;
        if (0xf < uStack_24c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(uStack_260);
        }
        uStack_24c = 0xf;
        uStack_250 = 0;
        uStack_260 = uStack_260 & 0xffffff00;
        if (0xf < uStack_284) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(uStack_298);
        }
        uStack_284 = 0xf;
        uStack_288 = 0;
        uStack_298 = uStack_298 & 0xffffff00;
        if (0xf < uStack_2bc) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(auStack_2d0[0]);
        }
        uStack_2bc = 0xf;
        uStack_2c0 = 0;
        auStack_2d0[0] = auStack_2d0[0] & 0xffffff00;
        if (0xf < uStack_268) break;
        uStack_268 = 0xf;
        uStack_26c = 0;
        uStack_27c = uStack_27c & 0xffffff00;
        if (0xf < uStack_2d8) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(auStack_2ec[0]);
        }
        uStack_2d8 = 0xf;
        uStack_2dc = 0;
        auStack_2ec[0] = auStack_2ec[0] & 0xffffff00;
        if (0xf < uStack_2f4) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(auStack_308[0]);
        }
        uStack_2f4 = 0xf;
        uStack_2f8 = 0;
        auStack_308[0] = auStack_308[0] & 0xffffff00;
        iStack_c._0_1_ = 0x14;
        if (0xf < uStack_350) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(auStack_364[0]);
        }
        uStack_350 = 0xf;
        uStack_354 = 0;
        auStack_364[0] = auStack_364[0] & 0xffffff00;
        uStack_314 = 0xf;
        uStack_318 = 0;
        auStack_328[0] = auStack_328[0] & 0xffffff00;
        FUN_00409350("onaction.cpp",0xc);
        iStack_c._0_1_ = 0x15;
        uStack_334 = 0xf;
        uStack_338 = 0;
        appuStack_348[0] = (undefined4 **)((uint)appuStack_348[0] & 0xffffff00);
        FUN_00408ed0(auStack_2b4,0,0xffffffff);
        iStack_c._0_1_ = 0x16;
        uVar10 = FUN_004015b0(auStack_328,0xc6,0x10000);
        iStack_c._0_1_ = 0x19;
        pppuVar11 = (undefined4 ***)appuStack_348[0];
        if (uStack_334 < 0x10) {
          pppuVar11 = appuStack_348;
        }
        apiStack_378[1] = (int *)FUN_00418e30(uVar10,pppuVar11);
        iStack_c._0_1_ = 0x18;
        if (0xf < uStack_334) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(appuStack_348[0]);
        }
        uStack_334 = 0xf;
        uStack_338 = 0;
        appuStack_348[0] = (undefined4 **)((uint)appuStack_348[0] & 0xffffff00);
        FUN_00401280(apiStack_378[1]);
        iStack_c = CONCAT31(iStack_c._1_3_,0x15);
        FUN_00987ac0(appuStack_1b0);
        appuStack_1b0[0] = std::ios_base::vftable;
        FUN_00aad52d(appuStack_1b0);
        if (0xf < uStack_314) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(auStack_328[0]);
        }
        iStack_c = 0xffffffff;
        uStack_314 = 0xf;
        uStack_318 = 0;
        auStack_328[0] = auStack_328[0] & 0xffffff00;
        if (0xf < uStack_2a0) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(auStack_2b4[0]);
        }
        uStack_2a0 = 0xf;
        uStack_2a4 = 0;
        auStack_2b4[0] = auStack_2b4[0] & 0xffffff00;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_27c);
    }
    FUN_009a1440(param_2);
    pcVar5 = (char *)(param_2 + 9);
    uStack_350 = 0xf;
    uStack_354 = 0;
    auStack_364[0] = auStack_364[0] & 0xffffff00;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(param_2 + 9,(int)pcVar5 - ((int)param_2 + 0x25));
    iStack_c = 0;
    piVar6 = (int *)FUN_00aae9af(0x30);
    iStack_c._0_1_ = 1;
    if (piVar6 == (int *)0x0) {
      apiStack_378[1] = (int *)0x0;
    }
    else {
      *piVar6 = 0;
      piVar6[6] = 0xf;
      piVar6[5] = 0;
      *(undefined1 *)(piVar6 + 1) = 0;
      apiStack_378[0] = piVar6;
      FUN_00408ed0(auStack_364,0,0xffffffff);
      piVar6[8] = 0;
      piVar6[9] = 0;
      piVar6[10] = 0;
      *(undefined1 *)(piVar6 + 0xb) = 0;
      apiStack_378[1] = piVar6;
    }
    iStack_c = (uint)iStack_c._1_3_ << 8;
    apiStack_378[0] = apiStack_378[1];
    FUN_008b2ff0(apiStack_378[1]);
    piVar6 = apiStack_378[2];
    ppiVar2 = (int **)apiStack_378[2][1];
    if ((apiStack_378 < ppiVar2) && (ppiVar3 = (int **)*apiStack_378[2], ppiVar3 <= apiStack_378)) {
      if (ppiVar2 == (int **)apiStack_378[2][2]) {
        uVar7 = (int)ppiVar2 - (int)ppiVar3 >> 2;
        if (0x3ffffffe < uVar7) {
LAB_008b2ade:
                    /* WARNING: Subroutine does not return */
          FUN_00aad3ad("vector<T> too long");
        }
        uVar7 = uVar7 + 1;
        uVar12 = apiStack_378[2][2] - (int)ppiVar3 >> 2;
        if (uVar12 < uVar7) {
          if (0x3fffffff - (uVar12 >> 1) < uVar12) {
            uVar12 = 0;
          }
          else {
            uVar12 = uVar12 + (uVar12 >> 1);
          }
          if (uVar12 < uVar7) {
            uVar12 = uVar7;
          }
          FUN_004bf300(uVar12);
        }
      }
      puVar8 = (undefined4 *)piVar6[1];
      if (puVar8 != (undefined4 *)0x0) {
        piVar13 = *(int **)(*piVar6 + ((int)apiStack_378 - (int)ppiVar3 >> 2) * 4);
LAB_008b29c9:
        *puVar8 = piVar13;
      }
    }
    else {
      if (ppiVar2 == (int **)apiStack_378[2][2]) {
        uVar7 = (int)ppiVar2 - *apiStack_378[2] >> 2;
        if (0x3ffffffe < uVar7) goto LAB_008b2ade;
        uVar7 = uVar7 + 1;
        uVar12 = apiStack_378[2][2] - *apiStack_378[2] >> 2;
        if (uVar12 < uVar7) {
          if (0x3fffffff - (uVar12 >> 1) < uVar12) {
            uVar12 = 0;
          }
          else {
            uVar12 = uVar12 + (uVar12 >> 1);
          }
          if (uVar12 < uVar7) {
            uVar12 = uVar7;
          }
          FUN_004bf300(uVar12);
        }
      }
      puVar8 = (undefined4 *)piVar6[1];
      piVar13 = apiStack_378[1];
      if (puVar8 != (undefined4 *)0x0) goto LAB_008b29c9;
    }
    piVar6[1] = piVar6[1] + 4;
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
      piVar13 = aiStack_120;
      for (iVar4 = 0x41; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar13 = *piVar6;
        piVar6 = piVar6 + 1;
        piVar13 = piVar13 + 1;
      }
      if ((aiStack_120[0] == 4) || (aiStack_120[0] == 0x13)) break;
      FUN_009a1440(param_2);
      apiStack_378[3] = (int *)FUN_00aaf0c5(param_2 + 0x8b);
      iVar4 = FUN_00aaf0c5(param_2 + 9);
      piVar6 = apiStack_378[1];
      *apiStack_378[1] = *apiStack_378[1] + iVar4;
      apiStack_378[0] = (int *)apiStack_378[1][9];
      puVar8 = (undefined4 *)FUN_00aae9af(0x14);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        *puVar8 = apiStack_378[3];
        puVar8[1] = iVar4;
        puVar8[2] = apiStack_378[0];
        puVar8[3] = 0;
        *(undefined1 *)(puVar8 + 4) = 0;
      }
      iVar4 = piVar6[10];
      piVar6[9] = (int)puVar8;
      piVar6[10] = iVar4 + 1;
      if (iVar4 == 0) {
        piVar6[8] = (int)puVar8;
      }
      else {
        apiStack_378[0][3] = (int)puVar8;
      }
    }
    (**(code **)(*(int *)param_2[7] + 4))();
    iStack_c = 0xffffffff;
    if (0xf < uStack_350) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(auStack_364[0]);
    }
  } while( true );
}

