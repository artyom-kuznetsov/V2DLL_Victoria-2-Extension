// FUN_005c3e70 @ 005c3e70 body=[[005c3e70, 005c41c3] [005c41cc, 005c4388] [005c438c, 005c43bb] [005c43bf, 005c43e9] [005c43ed, 005c4417] [005c441b, 005c4445] [005c4449, 005c4473] [005c4477, 005c449b] [005c449f, 005c44c2] [005c44c6, 005c4586] [005c458a, 005c45e8] [005c45ec, 005c4610] [005c4619, 005c47b5] [005c47b9, 005c47e8] [005c47ec, 005c4816] [005c481a, 005c4844] [005c4848, 005c4872] [005c4876, 005c489a] [005c489e, 005c48b9] [005c48bd, 005c48e6] [005c48ea, 005c49b3] [005c49b7, 005c4a15] [005c4a19, 005c4a4e] [005c4a52, 005c4ac4]]


void FUN_005c3e70(int param_1,undefined4 *param_2)

{
  char cVar1;
  void *pvVar2;
  int **ppiVar3;
  int **ppiVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  char *pcVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 ****ppppuVar11;
  int *piVar12;
  uint *puVar13;
  int *piVar14;
  uint *local_3a0;
  int *piStack_39c;
  int *apiStack_394 [4];
  uint auStack_384 [4];
  undefined4 uStack_374;
  uint uStack_370;
  undefined4 ***apppuStack_368 [4];
  undefined4 uStack_358;
  uint uStack_354;
  uint auStack_348 [4];
  undefined4 uStack_338;
  uint uStack_334;
  uint auStack_32c [4];
  undefined4 uStack_31c;
  uint uStack_318;
  uint auStack_310 [4];
  undefined4 uStack_300;
  uint uStack_2fc;
  uint auStack_2f4 [4];
  undefined4 uStack_2e4;
  uint uStack_2e0;
  uint auStack_2d8 [4];
  undefined4 uStack_2c8;
  uint uStack_2c4;
  uint uStack_2bc;
  undefined4 uStack_2ac;
  uint uStack_2a8;
  uint uStack_2a0;
  undefined4 uStack_290;
  uint uStack_28c;
  uint uStack_284;
  undefined4 uStack_274;
  uint uStack_270;
  uint auStack_268 [4];
  undefined4 uStack_258;
  uint uStack_254;
  undefined4 auStack_248 [5];
  uint uStack_234;
  int aiStack_228 [30];
  undefined **appuStack_1b0 [36];
  int aiStack_120 [66];
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  int iStack_c;
  
  iStack_c = 0xffffffff;
  puStack_10 = &LAB_00b8e4ed;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  FUN_0057afc0(param_1);
  piVar12 = *(int **)(param_1 + 0xc);
  puVar13 = (uint *)(param_1 + 0xc);
  iVar5 = *(int *)(param_1 + 0x10) - (int)piVar12 >> 2;
  apiStack_394[2] = (int *)puVar13;
  if (iVar5 != 0) {
    piVar14 = piVar12 + iVar5;
    for (; piVar12 != piVar14; piVar12 = piVar12 + 1) {
      if ((undefined4 *)*piVar12 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar12)(1);
      }
    }
  }
  pvVar2 = (void *)*puVar13;
  if (pvVar2 != *(void **)(param_1 + 0x10)) {
    FID_conflict__memcpy(pvVar2,*(void **)(param_1 + 0x10),0);
    *(void **)(param_1 + 0x10) = pvVar2;
  }
  piVar12 = *(int **)(param_1 + 0x1c);
  puVar13 = (uint *)(param_1 + 0x1c);
  iVar5 = *(int *)(param_1 + 0x20) - (int)piVar12 >> 2;
  apiStack_394[3] = (int *)puVar13;
  if (iVar5 != 0) {
    piVar14 = piVar12 + iVar5;
    for (; piVar12 != piVar14; piVar12 = piVar12 + 1) {
      if ((undefined4 *)*piVar12 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar12)(1);
      }
    }
  }
  pvVar2 = (void *)*puVar13;
  if (pvVar2 != *(void **)(param_1 + 0x20)) {
    FID_conflict__memcpy(pvVar2,*(void **)(param_1 + 0x20),0);
    *(void **)(param_1 + 0x20) = pvVar2;
  }
LAB_005c3f73:
  piVar12 = (int *)param_2[7];
  if ((char)piVar12[0x44] == '\0') {
    iVar5 = (**(code **)(*piVar12 + 4))();
    piVar12[2] = iVar5;
    if (iVar5 == 0) {
      piVar12[3] = 0x13;
    }
    *(undefined1 *)(piVar12 + 0x44) = 1;
  }
  piVar12 = piVar12 + 3;
  piVar14 = aiStack_228;
  for (iVar5 = 0x41; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar14 = *piVar12;
    piVar12 = piVar12 + 1;
    piVar14 = piVar14 + 1;
  }
  if (aiStack_228[0] == 0x13) {
    apiStack_394[0] = (int *)*apiStack_394[2];
    piStack_39c = (int *)0x0;
    while( true ) {
      if ((apiStack_394[0] < (int *)*apiStack_394[2]) ||
         ((int *)apiStack_394[2][1] <= apiStack_394[0])) {
        apiStack_394[0] = (int *)*apiStack_394[3];
        piStack_39c = (int *)0x0;
        while( true ) {
          if ((apiStack_394[0] < (int *)*apiStack_394[3]) ||
             ((int *)apiStack_394[3][1] <= apiStack_394[0])) {
            uVar9 = *(undefined4 *)*apiStack_394[2];
            iVar5 = FUN_005b6140();
            *(undefined4 *)(iVar5 + 0x7c) = uVar9;
            FUN_005b5ef0(iVar5);
            uVar9 = *(undefined4 *)*apiStack_394[3];
            iVar5 = FUN_005b6140();
            *(undefined4 *)(iVar5 + 0x80) = uVar9;
            FUN_005b5ef0(iVar5);
            (**(code **)*param_2)(1);
            ExceptionList = pvStack_18;
            return;
          }
          piVar12 = (int *)*apiStack_394[0];
          apiStack_394[0] = apiStack_394[0] + 1;
          uStack_318 = 0xf;
          uStack_31c = 0;
          auStack_32c[0] = auStack_32c[0] & 0xffffff00;
          FUN_00409350(" name = ",8);
          iStack_c = 0x19;
          uStack_334 = 0xf;
          uStack_338 = 0;
          auStack_348[0] = auStack_348[0] & 0xffffff00;
          FUN_00409350(" tag = ",7);
          uStack_370 = 0xf;
          uStack_374 = 0;
          auStack_384[0] = auStack_384[0] & 0xffffff00;
          iStack_c._0_1_ = 0x1b;
          pcVar8 = __itoa((int)piStack_39c,(char *)auStack_248,10);
          pcVar6 = pcVar8;
          do {
            cVar1 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 != '\0');
          FUN_00409350(pcVar8,(int)pcVar6 - (int)(pcVar8 + 1));
          iStack_c._0_1_ = 0x1c;
          FUN_00988fa0(auStack_384);
          piStack_39c = (int *)((int)piStack_39c + 1);
          iStack_c._0_1_ = 0x1d;
          uVar9 = (**(code **)(*piVar12 + 0x18))(auStack_2f4);
          iStack_c._0_1_ = 0x1e;
          FUN_00988f20(auStack_348);
          iStack_c._0_1_ = 0x1f;
          FUN_00988f20(piVar12 + 0xb);
          iStack_c._0_1_ = 0x20;
          FUN_00988f20(auStack_32c);
          iStack_c._0_1_ = 0x21;
          FUN_00988f20(uVar9);
          if (0xf < uStack_2a8) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(uStack_2bc);
          }
          uStack_2a8 = 0xf;
          uStack_2ac = 0;
          uStack_2bc = uStack_2bc & 0xffffff00;
          if (0xf < uStack_2c4) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(auStack_2d8[0]);
          }
          uStack_2c4 = 0xf;
          uStack_2c8 = 0;
          auStack_2d8[0] = auStack_2d8[0] & 0xffffff00;
          if (0xf < uStack_28c) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(uStack_2a0);
          }
          uStack_28c = 0xf;
          uStack_290 = 0;
          uStack_2a0 = uStack_2a0 & 0xffffff00;
          if (0xf < uStack_2e0) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(auStack_2f4[0]);
          }
          uStack_2e0 = 0xf;
          uStack_2e4 = 0;
          auStack_2f4[0] = auStack_2f4[0] & 0xffffff00;
          if (0xf < uStack_270) break;
          uStack_270 = 0xf;
          uStack_274 = 0;
          uStack_284 = uStack_284 & 0xffffff00;
          if (0xf < uStack_370) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(auStack_384[0]);
          }
          uStack_370 = 0xf;
          uStack_374 = 0;
          auStack_384[0] = auStack_384[0] & 0xffffff00;
          if (0xf < uStack_334) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(auStack_348[0]);
          }
          uStack_334 = 0xf;
          uStack_338 = 0;
          auStack_348[0] = auStack_348[0] & 0xffffff00;
          iStack_c._0_1_ = 0x2a;
          if (0xf < uStack_318) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(auStack_32c[0]);
          }
          uStack_318 = 0xf;
          uStack_31c = 0;
          auStack_32c[0] = auStack_32c[0] & 0xffffff00;
          uStack_2fc = 0xf;
          uStack_300 = 0;
          auStack_310[0] = auStack_310[0] & 0xffffff00;
          FUN_00409350("traits.cpp",10);
          iStack_c._0_1_ = 0x2b;
          uStack_354 = 0xf;
          uStack_358 = 0;
          apppuStack_368[0] = (undefined4 ***)((uint)apppuStack_368[0] & 0xffffff00);
          FUN_00408ed0(auStack_268,0,0xffffffff);
          iStack_c._0_1_ = 0x2c;
          uVar9 = FUN_004015b0(auStack_310,0x1bb,0x10000);
          iStack_c._0_1_ = 0x2f;
          ppppuVar11 = (undefined4 ****)apppuStack_368[0];
          if (uStack_354 < 0x10) {
            ppppuVar11 = apppuStack_368;
          }
          uVar9 = FUN_00418e30(uVar9,ppppuVar11);
          iStack_c._0_1_ = 0x2e;
          if (0xf < uStack_354) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(apppuStack_368[0]);
          }
          uStack_354 = 0xf;
          uStack_358 = 0;
          apppuStack_368[0] = (undefined4 ***)((uint)apppuStack_368[0] & 0xffffff00);
          FUN_00401280(uVar9);
          iStack_c = CONCAT31(iStack_c._1_3_,0x2b);
          FUN_00987ac0(appuStack_1b0);
          appuStack_1b0[0] = std::ios_base::vftable;
          FUN_00aad52d(appuStack_1b0);
          if (0xf < uStack_2fc) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(auStack_310[0]);
          }
          iStack_c = 0xffffffff;
          uStack_2fc = 0xf;
          uStack_300 = 0;
          auStack_310[0] = auStack_310[0] & 0xffffff00;
          if (0xf < uStack_254) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(auStack_268[0]);
          }
          uStack_254 = 0xf;
          uStack_258 = 0;
          auStack_268[0] = auStack_268[0] & 0xffffff00;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uStack_284);
      }
      piVar12 = (int *)*apiStack_394[0];
      apiStack_394[0] = apiStack_394[0] + 1;
      uStack_370 = 0xf;
      uStack_374 = 0;
      auStack_384[0] = auStack_384[0] & 0xffffff00;
      FUN_00409350(" name = ",8);
      iStack_c = 2;
      uStack_334 = 0xf;
      uStack_338 = 0;
      auStack_348[0] = auStack_348[0] & 0xffffff00;
      FUN_00409350(" tag = ",7);
      uStack_318 = 0xf;
      uStack_31c = 0;
      auStack_32c[0] = auStack_32c[0] & 0xffffff00;
      iStack_c._0_1_ = 4;
      pcVar8 = __itoa((int)piStack_39c,(char *)auStack_268,10);
      pcVar6 = pcVar8;
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      FUN_00409350(pcVar8,(int)pcVar6 - (int)(pcVar8 + 1));
      iStack_c._0_1_ = 5;
      FUN_00988fa0(auStack_32c);
      piStack_39c = (int *)((int)piStack_39c + 1);
      iStack_c._0_1_ = 6;
      uVar9 = (**(code **)(*piVar12 + 0x18))(auStack_2d8);
      iStack_c._0_1_ = 7;
      FUN_00988f20(auStack_348);
      iStack_c._0_1_ = 8;
      FUN_00988f20(piVar12 + 0xb);
      iStack_c._0_1_ = 9;
      FUN_00988f20(auStack_384);
      iStack_c._0_1_ = 10;
      FUN_00988f20(uVar9);
      if (0xf < uStack_270) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uStack_284);
      }
      uStack_270 = 0xf;
      uStack_274 = 0;
      uStack_284 = uStack_284 & 0xffffff00;
      if (0xf < uStack_2e0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_2f4[0]);
      }
      uStack_2e0 = 0xf;
      uStack_2e4 = 0;
      auStack_2f4[0] = auStack_2f4[0] & 0xffffff00;
      if (0xf < uStack_28c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uStack_2a0);
      }
      uStack_28c = 0xf;
      uStack_290 = 0;
      uStack_2a0 = uStack_2a0 & 0xffffff00;
      if (0xf < uStack_2c4) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_2d8[0]);
      }
      uStack_2c4 = 0xf;
      uStack_2c8 = 0;
      auStack_2d8[0] = auStack_2d8[0] & 0xffffff00;
      if (0xf < uStack_2a8) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uStack_2bc);
      }
      uStack_2a8 = 0xf;
      uStack_2ac = 0;
      uStack_2bc = uStack_2bc & 0xffffff00;
      if (0xf < uStack_318) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_32c[0]);
      }
      uStack_318 = 0xf;
      uStack_31c = 0;
      auStack_32c[0] = auStack_32c[0] & 0xffffff00;
      if (0xf < uStack_334) break;
      uStack_334 = 0xf;
      uStack_338 = 0;
      auStack_348[0] = auStack_348[0] & 0xffffff00;
      iStack_c._0_1_ = 0x13;
      if (0xf < uStack_370) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_384[0]);
      }
      uStack_370 = 0xf;
      uStack_374 = 0;
      auStack_384[0] = auStack_384[0] & 0xffffff00;
      uStack_2fc = 0xf;
      uStack_300 = 0;
      auStack_310[0] = auStack_310[0] & 0xffffff00;
      FUN_00409350("traits.cpp",10);
      iStack_c._0_1_ = 0x14;
      uStack_354 = 0xf;
      uStack_358 = 0;
      apppuStack_368[0] = (undefined4 ***)((uint)apppuStack_368[0] & 0xffffff00);
      FUN_00408ed0(auStack_248,0,0xffffffff);
      iStack_c._0_1_ = 0x15;
      uVar9 = FUN_004015b0(auStack_310,0x1aa,0x10000);
      iStack_c._0_1_ = 0x18;
      ppppuVar11 = (undefined4 ****)apppuStack_368[0];
      if (uStack_354 < 0x10) {
        ppppuVar11 = apppuStack_368;
      }
      uVar9 = FUN_00418e30(uVar9,ppppuVar11);
      iStack_c._0_1_ = 0x17;
      if (0xf < uStack_354) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(apppuStack_368[0]);
      }
      uStack_354 = 0xf;
      uStack_358 = 0;
      apppuStack_368[0] = (undefined4 ***)((uint)apppuStack_368[0] & 0xffffff00);
      FUN_00401280(uVar9);
      iStack_c = CONCAT31(iStack_c._1_3_,0x14);
      FUN_00987ac0(appuStack_1b0);
      appuStack_1b0[0] = std::ios_base::vftable;
      FUN_00aad52d(appuStack_1b0);
      if (0xf < uStack_2fc) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_310[0]);
      }
      iStack_c = 0xffffffff;
      if (0xf < uStack_234) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_248[0]);
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(auStack_348[0]);
  }
  FUN_009a1440(param_2);
  if (param_2[8] != 0x762) goto LAB_005c3fdb;
  local_3a0 = (uint *)apiStack_394[2];
  goto LAB_005c3ff0;
LAB_005c3fdb:
  if (param_2[8] == 0x99) {
    local_3a0 = (uint *)apiStack_394[3];
LAB_005c3ff0:
    while( true ) {
      piVar12 = (int *)param_2[7];
      if ((char)piVar12[0x44] == '\0') {
        iVar5 = (**(code **)(*piVar12 + 4))();
        piVar12[2] = iVar5;
        if (iVar5 == 0) {
          piVar12[3] = 0x13;
        }
        *(undefined1 *)(piVar12 + 0x44) = 1;
      }
      piVar12 = piVar12 + 3;
      piVar14 = aiStack_120;
      for (iVar5 = 0x41; iVar5 != 0; iVar5 = iVar5 + -1) {
        *piVar14 = *piVar12;
        piVar12 = piVar12 + 1;
        piVar14 = piVar14 + 1;
      }
      if ((aiStack_120[0] == 4) || (aiStack_120[0] == 0x13)) break;
      FUN_009a1440(param_2);
      uStack_370 = 0xf;
      uStack_374 = 0;
      auStack_384[0] = auStack_384[0] & 0xffffff00;
      pcVar6 = (char *)(param_2 + 9);
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      FUN_00409350(param_2 + 9,(int)pcVar6 - ((int)param_2 + 0x25));
      iStack_c = 0;
      iVar5 = FUN_00aae9af(0x4c);
      iStack_c._0_1_ = 1;
      if (iVar5 == 0) {
        piStack_39c = (int *)0x0;
      }
      else {
        piStack_39c = (int *)FUN_005c3070(iVar5,auStack_384,1);
      }
      iStack_c = (uint)iStack_c._1_3_ << 8;
      ppiVar3 = (int **)local_3a0[1];
      apiStack_394[0] = piStack_39c;
      if ((apiStack_394 < ppiVar3) && (ppiVar4 = (int **)*local_3a0, ppiVar4 <= apiStack_394)) {
        if (ppiVar3 == (int **)local_3a0[2]) {
          uVar7 = (int)ppiVar3 - (int)ppiVar4 >> 2;
          if (0x3ffffffe < uVar7) {
LAB_005c41de:
                    /* WARNING: Subroutine does not return */
            FUN_00aad3ad("vector<T> too long");
          }
          uVar7 = uVar7 + 1;
          uVar10 = (int)local_3a0[2] - (int)ppiVar4 >> 2;
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
        if ((undefined4 *)local_3a0[1] != (undefined4 *)0x0) {
          *(undefined4 *)local_3a0[1] =
               *(undefined4 *)(*local_3a0 + ((int)apiStack_394 - (int)ppiVar4 >> 2) * 4);
        }
      }
      else {
        if (ppiVar3 == (int **)local_3a0[2]) {
          uVar7 = (int)((int)ppiVar3 - *local_3a0) >> 2;
          if (0x3ffffffe < uVar7) goto LAB_005c41de;
          uVar7 = uVar7 + 1;
          uVar10 = (int)((int)local_3a0[2] - *local_3a0) >> 2;
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
        if ((undefined4 *)local_3a0[1] != (undefined4 *)0x0) {
          *(undefined4 *)local_3a0[1] = piStack_39c;
        }
      }
      local_3a0[1] = local_3a0[1] + 4;
      FUN_005c4b60(piStack_39c);
      (**(code **)(*piStack_39c + 0xc))(param_2);
      iStack_c = 0xffffffff;
      if (0xf < uStack_370) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_384[0]);
      }
    }
    (**(code **)(*(int *)param_2[7] + 4))();
  }
  goto LAB_005c3f73;
}

