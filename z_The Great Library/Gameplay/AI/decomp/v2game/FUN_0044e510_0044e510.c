// FUN_0044e510 @ 0044e510 body=[[0044e510, 0044e779] [0044e782, 0044e914] [0044e918, 0044e947] [0044e94b, 0044e975] [0044e979, 0044e9a3] [0044e9a7, 0044e9d1] [0044e9d5, 0044e9f9] [0044e9fd, 0044ea1b] [0044ea1f, 0044ea48] [0044ea4c, 0044eb0c] [0044eb10, 0044eb6e] [0044eb72, 0044eba7] [0044ebab, 0044ebf1]]


void FUN_0044e510(int param_1,undefined4 *param_2)

{
  char cVar1;
  void *_Dst;
  int **ppiVar2;
  int **ppiVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  uint uVar7;
  char *pcVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 ***pppuVar11;
  int *piVar12;
  int *apiStack_274 [4];
  uint auStack_264 [4];
  undefined4 uStack_254;
  uint uStack_250;
  undefined4 **appuStack_248 [4];
  undefined4 uStack_238;
  uint uStack_234;
  uint auStack_228 [4];
  undefined4 uStack_218;
  uint uStack_214;
  uint auStack_20c [4];
  undefined4 uStack_1fc;
  uint uStack_1f8;
  uint auStack_1f0 [4];
  undefined4 uStack_1e0;
  uint uStack_1dc;
  uint auStack_1d0 [4];
  undefined4 uStack_1c0;
  uint uStack_1bc;
  int *piStack_1b4;
  uint uStack_1ac;
  undefined4 uStack_19c;
  uint uStack_198;
  uint auStack_190 [4];
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
  undefined **appuStack_a8 [36];
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  int iStack_c;
  
  iStack_c = 0xffffffff;
  puStack_10 = &LAB_00b609be;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  FUN_0057afc0(param_1);
  apiStack_274[3] = (int *)(param_1 + 0xc);
  _Dst = (void *)*apiStack_274[3];
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
    piVar12 = aiStack_120;
    for (iVar4 = 0x41; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar12 = *piVar6;
      piVar6 = piVar6 + 1;
      piVar12 = piVar12 + 1;
    }
    if (aiStack_120[0] == 0x13) {
      apiStack_274[0] = (int *)0x0;
      piVar6 = (int *)*apiStack_274[3];
      while( true ) {
        if ((piVar6 < (int *)*apiStack_274[3]) || ((int *)apiStack_274[3][1] <= piVar6)) {
          (**(code **)*param_2)(1);
          ExceptionList = pvStack_18;
          return;
        }
        piVar12 = (int *)*piVar6;
        piStack_1b4 = piVar6 + 1;
        uStack_250 = 0xf;
        uStack_254 = 0;
        auStack_264[0] = auStack_264[0] & 0xffffff00;
        FUN_00409350(" name = ",8);
        iStack_c = 3;
        uStack_1f8 = 0xf;
        uStack_1fc = 0;
        auStack_20c[0] = auStack_20c[0] & 0xffffff00;
        FUN_00409350(" tag = ",7);
        uStack_214 = 0xf;
        uStack_218 = 0;
        auStack_228[0] = auStack_228[0] & 0xffffff00;
        iStack_c._0_1_ = 5;
        pcVar8 = __itoa((int)apiStack_274[0],(char *)auStack_1f0,10);
        pcVar5 = pcVar8;
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        FUN_00409350(pcVar8,(int)pcVar5 - (int)(pcVar8 + 1));
        iStack_c._0_1_ = 6;
        apiStack_274[1] = (int *)FUN_00988fa0(auStack_228);
        iStack_c._0_1_ = 7;
        apiStack_274[0] = (int *)((int)apiStack_274[0] + 1);
        apiStack_274[2] = (int *)(**(code **)(*piVar12 + 0x18))(auStack_190);
        iStack_c._0_1_ = 8;
        FUN_00988f20(auStack_20c);
        iStack_c._0_1_ = 9;
        FUN_00988f20(piVar12 + 0xc);
        iStack_c._0_1_ = 10;
        FUN_00988f20(auStack_264);
        iStack_c._0_1_ = 0xb;
        FUN_00988f20(apiStack_274[2]);
        if (0xf < uStack_128) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(uStack_13c);
        }
        uStack_128 = 0xf;
        uStack_12c = 0;
        uStack_13c = uStack_13c & 0xffffff00;
        if (0xf < uStack_160) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(uStack_174);
        }
        uStack_160 = 0xf;
        uStack_164 = 0;
        uStack_174 = uStack_174 & 0xffffff00;
        if (0xf < uStack_198) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(uStack_1ac);
        }
        uStack_198 = 0xf;
        uStack_19c = 0;
        uStack_1ac = uStack_1ac & 0xffffff00;
        if (0xf < uStack_17c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(auStack_190[0]);
        }
        uStack_17c = 0xf;
        uStack_180 = 0;
        auStack_190[0] = auStack_190[0] & 0xffffff00;
        if (0xf < uStack_144) break;
        uStack_144 = 0xf;
        uStack_148 = 0;
        uStack_158 = uStack_158 & 0xffffff00;
        if (0xf < uStack_214) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(auStack_228[0]);
        }
        uStack_214 = 0xf;
        uStack_218 = 0;
        auStack_228[0] = auStack_228[0] & 0xffffff00;
        if (0xf < uStack_1f8) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(auStack_20c[0]);
        }
        uStack_1f8 = 0xf;
        uStack_1fc = 0;
        auStack_20c[0] = auStack_20c[0] & 0xffffff00;
        iStack_c._0_1_ = 0x14;
        if (0xf < uStack_250) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(auStack_264[0]);
        }
        uStack_250 = 0xf;
        uStack_254 = 0;
        auStack_264[0] = auStack_264[0] & 0xffffff00;
        uStack_1dc = 0xf;
        uStack_1e0 = 0;
        auStack_1f0[0] = auStack_1f0[0] & 0xffffff00;
        FUN_00409350("modifier.cpp",0xc);
        iStack_c._0_1_ = 0x15;
        uStack_234 = 0xf;
        uStack_238 = 0;
        appuStack_248[0] = (undefined4 **)((uint)appuStack_248[0] & 0xffffff00);
        FUN_00408ed0(auStack_1d0,0,0xffffffff);
        iStack_c._0_1_ = 0x16;
        uVar9 = FUN_004015b0(auStack_1f0,0x35a,0x10000);
        iStack_c._0_1_ = 0x19;
        pppuVar11 = (undefined4 ***)appuStack_248[0];
        if (uStack_234 < 0x10) {
          pppuVar11 = appuStack_248;
        }
        apiStack_274[1] = (int *)FUN_00418e30(uVar9,pppuVar11);
        iStack_c._0_1_ = 0x18;
        if (0xf < uStack_234) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(appuStack_248[0]);
        }
        uStack_234 = 0xf;
        uStack_238 = 0;
        appuStack_248[0] = (undefined4 **)((uint)appuStack_248[0] & 0xffffff00);
        FUN_00401280(apiStack_274[1]);
        iStack_c = CONCAT31(iStack_c._1_3_,0x15);
        FUN_00987ac0(appuStack_a8);
        appuStack_a8[0] = std::ios_base::vftable;
        FUN_00aad52d(appuStack_a8);
        if (0xf < uStack_1dc) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(auStack_1f0[0]);
        }
        iStack_c = 0xffffffff;
        uStack_1dc = 0xf;
        uStack_1e0 = 0;
        auStack_1f0[0] = auStack_1f0[0] & 0xffffff00;
        if (0xf < uStack_1bc) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(auStack_1d0[0]);
        }
        uStack_1bc = 0xf;
        uStack_1c0 = 0;
        auStack_1d0[0] = auStack_1d0[0] & 0xffffff00;
        piVar6 = piStack_1b4;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_158);
    }
    FUN_009a1440(param_2);
    uStack_250 = 0xf;
    uStack_254 = 0;
    auStack_264[0] = auStack_264[0] & 0xffffff00;
    pcVar5 = (char *)(param_2 + 9);
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(param_2 + 9,(int)pcVar5 - ((int)param_2 + 0x25));
    iStack_c = 0;
    piVar6 = (int *)FUN_00aae9af(0x68);
    iStack_c._0_1_ = 1;
    apiStack_274[1] = piVar6;
    if (piVar6 == (int *)0x0) {
      apiStack_274[2] = (int *)0x0;
    }
    else {
      FUN_0044bc60(piVar6);
      iStack_c._0_1_ = 2;
      *piVar6 = (int)CStaticModifier::vftable;
      piVar6[0x11] = 0xf;
      piVar6[0x10] = 0;
      *(undefined1 *)(piVar6 + 0xc) = 0;
      FUN_00408ed0(auStack_264,0,0xffffffff);
      *piVar6 = (int)CTriggeredModifier::vftable;
      piVar6[0x14] = 0x18d;
      piVar6[0x15] = 0;
      piVar6[0x16] = 0;
      piVar6[0x17] = 0;
      *(undefined2 *)(piVar6 + 0x19) = 0;
      piVar6[0x13] = (int)CAndTrigger::vftable;
      apiStack_274[2] = piVar6;
    }
    iStack_c = (uint)iStack_c._1_3_ << 8;
    apiStack_274[0] = apiStack_274[2];
    FUN_0057b150(apiStack_274[2]);
    piVar6 = apiStack_274[3];
    ppiVar2 = (int **)apiStack_274[3][1];
    if ((apiStack_274 < ppiVar2) && (ppiVar3 = (int **)*apiStack_274[3], ppiVar3 <= apiStack_274)) {
      apiStack_274[1] = (int *)((int)apiStack_274 - (int)ppiVar3 >> 2);
      if (ppiVar2 == (int **)apiStack_274[3][2]) {
        uVar7 = (int)ppiVar2 - (int)ppiVar3 >> 2;
        if (0x3ffffffe < uVar7) {
LAB_0044e782:
                    /* WARNING: Subroutine does not return */
          FUN_00aad3ad("vector<T> too long");
        }
        uVar7 = uVar7 + 1;
        uVar10 = apiStack_274[3][2] - (int)ppiVar3 >> 2;
        if (uVar10 < uVar7) {
          if (0x3fffffff - (uVar10 >> 1) < uVar10) {
            uVar10 = 0;
          }
          else {
            uVar10 = uVar10 + (uVar10 >> 1);
          }
          if (uVar10 < uVar7) {
            uVar10 = uVar7;
          }
          FUN_004bf300(uVar10);
        }
      }
      if ((undefined4 *)piVar6[1] != (undefined4 *)0x0) {
        *(undefined4 *)piVar6[1] = *(undefined4 *)(*piVar6 + (int)apiStack_274[1] * 4);
      }
    }
    else {
      if (ppiVar2 == (int **)apiStack_274[3][2]) {
        uVar7 = (int)ppiVar2 - *apiStack_274[3] >> 2;
        if (0x3ffffffe < uVar7) goto LAB_0044e782;
        uVar7 = uVar7 + 1;
        uVar10 = apiStack_274[3][2] - *apiStack_274[3] >> 2;
        if (uVar10 < uVar7) {
          if (0x3fffffff - (uVar10 >> 1) < uVar10) {
            uVar10 = 0;
          }
          else {
            uVar10 = uVar10 + (uVar10 >> 1);
          }
          if (uVar10 < uVar7) {
            uVar10 = uVar7;
          }
          FUN_004bf300(uVar10);
        }
      }
      if ((undefined4 *)piVar6[1] != (undefined4 *)0x0) {
        *(undefined4 *)piVar6[1] = apiStack_274[2];
      }
    }
    piVar6[1] = piVar6[1] + 4;
    (**(code **)(*apiStack_274[2] + 0xc))(param_2);
    iStack_c = 0xffffffff;
    if (0xf < uStack_250) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(auStack_264[0]);
    }
  } while( true );
}

