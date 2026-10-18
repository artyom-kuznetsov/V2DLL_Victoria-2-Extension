// FUN_00578120 @ 00578120 body=[[00578120, 005786db] [005786df, 005787b4] [005787b8, 005789ee] [005789f7, 00578a18] [00578a1c, 00578a52] [00578a5b, 00578d26] [00578d2f, 00578e01] [00578e0a, 00578e39] [00578e3d, 00578e70] [00578e74, 00578e8a]]


/* WARNING: Type propagation algorithm not settling */

void FUN_00578120(undefined4 *param_1)

{
  char cVar1;
  void *pvVar2;
  int **ppiVar3;
  int **ppiVar4;
  void **ppvVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  undefined4 uVar10;
  int *in_ECX;
  char *pcVar11;
  uint *puVar12;
  int iVar13;
  int *piStack_604;
  int aiStack_600 [3];
  undefined4 uStack_5f4;
  undefined4 uStack_5f0;
  int *piStack_5d0;
  int *piStack_5cc;
  int iStack_5c8;
  int *piStack_5c4;
  int *piStack_5c0;
  uint uStack_5bc;
  undefined4 uStack_5ac;
  uint uStack_5a8;
  uint *puStack_5a0;
  int *piStack_59c;
  uint auStack_598 [4];
  undefined4 uStack_588;
  uint uStack_584;
  uint *puStack_574;
  int *piStack_570;
  uint *puStack_56c;
  uint uStack_568;
  undefined4 uStack_558;
  uint uStack_554;
  uint auStack_54c [4];
  undefined4 uStack_53c;
  uint uStack_538;
  uint uStack_534;
  undefined4 uStack_524;
  uint uStack_520;
  uint uStack_504;
  undefined **ppuStack_480;
  int aiStack_438 [66];
  int aiStack_330 [66];
  int aiStack_228 [66];
  int aiStack_120 [66];
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b9332b;
  pvStack_14 = ExceptionList;
  piVar7 = (int *)*in_ECX;
  iVar6 = in_ECX[1] - (int)piVar7 >> 2;
  ppvVar5 = &pvStack_14;
  if (iVar6 != 0) {
    piVar8 = piVar7 + iVar6;
    ppvVar5 = &pvStack_14;
    for (; ExceptionList = ppvVar5, ppvVar5 = ExceptionList, piVar7 != piVar8; piVar7 = piVar7 + 1)
    {
      if ((undefined4 *)*piVar7 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar7)();
      }
      ppvVar5 = ExceptionList;
    }
  }
  ExceptionList = ppvVar5;
  FUN_0057afc0();
  pvVar2 = (void *)*in_ECX;
  if (pvVar2 != (void *)in_ECX[1]) {
    uStack_5f0 = 0x578198;
    FID_conflict__memcpy(pvVar2,(void *)in_ECX[1],0);
    in_ECX[1] = (int)pvVar2;
  }
  puStack_574 = (uint *)(in_ECX + 7);
  FUN_0057b240();
  piStack_570 = in_ECX + 0xb;
  FUN_0057afc0();
  pvVar2 = (void *)in_ECX[7];
  if (pvVar2 != (void *)in_ECX[8]) {
    iStack_5c8 = 0;
    uStack_5f0 = 0x5781db;
    FID_conflict__memcpy(pvVar2,(void *)in_ECX[8],0);
    in_ECX[8] = iStack_5c8 + (int)pvVar2;
  }
  puStack_5a0 = (uint *)(in_ECX + 0xe);
  FUN_0057b1c0();
  piStack_59c = in_ECX + 0x12;
  FUN_0057afc0();
  pvVar2 = (void *)in_ECX[0xe];
  if (pvVar2 != (void *)in_ECX[0xf]) {
    iStack_5c8 = 0;
    uStack_5f0 = 0x578222;
    FID_conflict__memcpy(pvVar2,(void *)in_ECX[0xf],0);
    in_ECX[0xf] = iStack_5c8 + (int)pvVar2;
  }
  pvVar2 = (void *)in_ECX[0x19];
  if (pvVar2 != (void *)in_ECX[0x1a]) {
    uStack_5f0 = 0x57824e;
    FID_conflict__memcpy(pvVar2,(void *)in_ECX[0x1a],0);
    in_ECX[0x1a] = (int)pvVar2;
  }
  FUN_0057afc0();
  piVar7 = (int *)in_ECX[0x20];
  puVar12 = (uint *)(in_ECX + 0x20);
  iVar6 = in_ECX[0x21] - (int)piVar7 >> 2;
  puStack_56c = puVar12;
  if ((iVar6 != 0) && (piVar8 = piVar7 + iVar6, iStack_5c8 = (int)piVar8, piVar7 != piVar8)) {
    do {
      if ((undefined4 *)*piVar7 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar7)();
        piVar8 = (int *)iStack_5c8;
      }
      piVar7 = piVar7 + 1;
    } while (piVar7 != piVar8);
  }
  pvVar2 = (void *)*puVar12;
  if (pvVar2 != (void *)in_ECX[0x21]) {
    iStack_5c8 = 0;
    uStack_5f0 = 0x5782c9;
    FID_conflict__memcpy(pvVar2,(void *)in_ECX[0x21],0);
    in_ECX[0x21] = (int)pvVar2 + iStack_5c8;
  }
  iStack_5c8 = (int)(in_ECX + 0x24);
  FUN_0057afc0();
  FUN_004367c0();
  uStack_c = 0;
  FUN_00436780();
  uStack_c = CONCAT31(uStack_c._1_3_,1);
  if (*(int *)(DAT_012586e0 + 0x44) == 1) {
    uStack_5f0 = 0x57833d;
    FUN_00408ed0();
  }
  do {
    while( true ) {
      piVar7 = (int *)param_1[7];
      if ((char)piVar7[0x44] == '\0') {
        iVar6 = (**(code **)(*piVar7 + 4))();
        piVar7[2] = iVar6;
        if (iVar6 == 0) {
          piVar7[3] = 0x13;
        }
        *(undefined1 *)(piVar7 + 0x44) = 1;
      }
      piVar7 = piVar7 + 3;
      piVar8 = aiStack_228;
      for (iVar6 = 0x41; iVar6 != 0; iVar6 = iVar6 + -1) {
        *piVar8 = *piVar7;
        piVar7 = piVar7 + 1;
        piVar8 = piVar8 + 1;
      }
      if ((aiStack_228[0] == 4) || (aiStack_228[0] == 0x13)) {
        (**(code **)*param_1)();
        if (0xf < uStack_520) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        uStack_520 = 0xf;
        uStack_524 = 0;
        uStack_534 = uStack_534 & 0xffffff00;
        if (uStack_504 < 0x10) {
          ExceptionList = pvStack_18;
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      FUN_009a1440();
      if (param_1[8] == 0x512) break;
      if (param_1[8] == 0x1c9) {
        if (DAT_01258818 == (int *)0x0) {
          piStack_5c4 = (int *)FUN_00aae9af();
          uStack_c._0_1_ = 0xd;
          if (piStack_5c4 == (int *)0x0) {
            DAT_01258818 = (int *)0x0;
          }
          else {
            DAT_01258818 = (int *)FUN_0057a3d0();
          }
          uStack_c = CONCAT31(uStack_c._1_3_,1);
        }
        piVar7 = DAT_01258818;
        ppiVar3 = (int **)puVar12[1];
        piStack_5d0 = DAT_01258818;
        if (&piStack_5d0 < ppiVar3) {
          ppiVar4 = (int **)*puVar12;
          if (&piStack_5d0 < ppiVar4) goto LAB_00578af5;
          if (ppiVar3 == (int **)puVar12[2]) {
            FUN_00a513f0();
          }
          if ((undefined4 *)puVar12[1] != (undefined4 *)0x0) {
            *(undefined4 *)puVar12[1] =
                 *(undefined4 *)(*puVar12 + ((int)&piStack_5d0 - (int)ppiVar4 >> 2) * 4);
          }
        }
        else {
LAB_00578af5:
          if (ppiVar3 == (int **)puVar12[2]) {
            FUN_00a513f0();
          }
          if ((undefined4 *)puVar12[1] != (undefined4 *)0x0) {
            *(undefined4 *)puVar12[1] = piVar7;
          }
        }
        puVar12[1] = puVar12[1] + 4;
        FUN_0057b150();
        piStack_5c4 = (int *)0x1;
        while( true ) {
          piVar7 = (int *)param_1[7];
          if ((char)piVar7[0x44] == '\0') {
            iVar6 = (**(code **)(*piVar7 + 4))();
            piVar7[2] = iVar6;
            if (iVar6 == 0) {
              piVar7[3] = 0x13;
            }
            *(undefined1 *)(piVar7 + 0x44) = 1;
          }
          piVar7 = piVar7 + 3;
          piVar8 = aiStack_120;
          for (iVar6 = 0x41; iVar6 != 0; iVar6 = iVar6 + -1) {
            *piVar8 = *piVar7;
            piVar7 = piVar7 + 1;
            piVar8 = piVar8 + 1;
          }
          if ((aiStack_120[0] == 4) || (aiStack_120[0] == 0x13)) break;
          FUN_009a1440();
          pcVar11 = (char *)(param_1 + 9);
          uStack_5a8 = 0xf;
          uStack_5ac = 0;
          uStack_5bc = uStack_5bc & 0xffffff00;
          do {
            cVar1 = *pcVar11;
            pcVar11 = pcVar11 + 1;
          } while (cVar1 != '\0');
          FUN_00409350();
          uStack_c._0_1_ = 0xe;
          piVar7 = (int *)FUN_00aae9af();
          uStack_c._0_1_ = 0xf;
          if (piVar7 == (int *)0x0) {
            piStack_5c0 = (int *)0x0;
          }
          else {
            piStack_5c0 = piVar7;
            FUN_0044bc60();
            uStack_c._0_1_ = 0x10;
            *piVar7 = (int)CTechnologySchool::vftable;
            piVar7[0x11] = 0xf;
            piVar7[0x10] = 0;
            *(undefined1 *)(piVar7 + 0xc) = 0;
            uStack_5f0 = 0x578c0a;
            FUN_00408ed0();
            piVar7[0x13] = (int)piStack_5c4;
            piStack_5c4 = (int *)((int)piStack_5c4 + 1);
            piStack_5c0 = piVar7;
          }
          piVar7 = piStack_5c0;
          uStack_c = CONCAT31(uStack_c._1_3_,0xe);
          ppiVar3 = (int **)puVar12[1];
          piStack_5d0 = piStack_5c0;
          if ((&piStack_5d0 < ppiVar3) && (ppiVar4 = (int **)*puVar12, ppiVar4 <= &piStack_5d0)) {
            if (ppiVar3 == (int **)puVar12[2]) {
              uVar9 = (int)ppiVar3 - (int)ppiVar4 >> 2;
              if (0x3ffffffe < uVar9) goto LAB_00578e0a;
              if ((uint)((int)puVar12[2] - (int)ppiVar4 >> 2) < uVar9 + 1) {
                FUN_004bf300();
              }
            }
            if ((undefined4 *)puVar12[1] != (undefined4 *)0x0) {
              *(undefined4 *)puVar12[1] =
                   *(undefined4 *)(*puVar12 + ((int)&piStack_5d0 - (int)ppiVar4 >> 2) * 4);
            }
          }
          else {
            if (ppiVar3 == (int **)puVar12[2]) {
              uVar9 = (int)((int)ppiVar3 - *puVar12) >> 2;
              if (0x3ffffffe < uVar9) {
LAB_00578e0a:
                    /* WARNING: Subroutine does not return */
                FUN_00aad3ad();
              }
              if ((uint)((int)((int)puVar12[2] - *puVar12) >> 2) < uVar9 + 1) {
                FUN_004bf300();
              }
            }
            if ((undefined4 *)puVar12[1] != (undefined4 *)0x0) {
              *(undefined4 *)puVar12[1] = piVar7;
            }
          }
          piVar7 = piStack_5c0;
          puVar12[1] = puVar12[1] + 4;
          FUN_0057b150();
          (**(code **)(*piVar7 + 0xc))();
          uStack_c = CONCAT31(uStack_c._1_3_,1);
          if (0xf < uStack_5a8) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
        }
      }
      else {
        uStack_5a8 = 0xf;
        uStack_5ac = 0;
        uStack_5bc = uStack_5bc & 0xffffff00;
        FUN_00409350();
        uStack_c._0_1_ = 0x11;
        uStack_5f0 = 0x578d77;
        uVar10 = FUN_004015b0();
        uStack_c._0_1_ = 0x12;
        uStack_5f4 = 0x578d93;
        uStack_5f0 = uVar10;
        FUN_00987d50();
        uStack_5f4 = 0x578da3;
        uStack_5f0 = uVar10;
        FUN_00418e30();
        FUN_00418e30();
        uStack_5f0 = 0x578db2;
        FUN_00401280();
        uStack_c._0_1_ = 0x11;
        FUN_00987ac0();
        ppuStack_480 = std::ios_base::vftable;
        FUN_00aad52d();
        uStack_c = CONCAT31(uStack_c._1_3_,1);
        if (0xf < uStack_5a8) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      }
    }
    if (DAT_01258814 == (int *)0x0) {
      piVar7 = (int *)FUN_00aae9af();
      uStack_c._0_1_ = 2;
      piStack_5c4 = piVar7;
      if (piVar7 == (int *)0x0) {
        DAT_01258814 = (int *)0x0;
      }
      else {
        piStack_5c0 = aiStack_600;
        piStack_604 = (int *)0x8;
        uStack_5f0 = 0;
        aiStack_600[0]._0_1_ = 0;
        FUN_00409350("noFolder");
        piStack_604 = piVar7;
        FUN_00576a40();
        *piVar7 = (int)CNullTechnologyFolder::vftable;
        DAT_01258814 = piVar7;
      }
      uStack_c = CONCAT31(uStack_c._1_3_,1);
    }
    puVar12 = puStack_5a0;
    piVar7 = DAT_01258814;
    ppiVar3 = (int **)puStack_5a0[1];
    piStack_5cc = DAT_01258814;
    if (&piStack_5cc < ppiVar3) {
      ppiVar4 = (int **)*puStack_5a0;
      if (&piStack_5cc < ppiVar4) goto LAB_0057845e;
      if (ppiVar3 == (int **)puStack_5a0[2]) {
        FUN_00a513f0();
      }
      if ((undefined4 *)puVar12[1] != (undefined4 *)0x0) {
        *(undefined4 *)puVar12[1] =
             *(undefined4 *)(*puVar12 + ((int)&piStack_5cc - (int)ppiVar4 >> 2) * 4);
      }
    }
    else {
LAB_0057845e:
      if (ppiVar3 == (int **)puStack_5a0[2]) {
        FUN_00a513f0();
      }
      if ((undefined4 *)puVar12[1] != (undefined4 *)0x0) {
        *(undefined4 *)puVar12[1] = piVar7;
      }
    }
    puVar12[1] = puVar12[1] + 4;
    FUN_008b2480();
    piStack_5c0 = (int *)0x1;
    piStack_5c4 = (int *)0x1;
    while( true ) {
      piVar7 = (int *)param_1[7];
      if ((char)piVar7[0x44] == '\0') {
        iVar6 = (**(code **)(*piVar7 + 4))();
        piVar7[2] = iVar6;
        if (iVar6 == 0) {
          piVar7[3] = 0x13;
        }
        *(undefined1 *)(piVar7 + 0x44) = 1;
      }
      piVar7 = piVar7 + 3;
      piVar8 = aiStack_438;
      for (iVar6 = 0x41; iVar6 != 0; iVar6 = iVar6 + -1) {
        *piVar8 = *piVar7;
        piVar7 = piVar7 + 1;
        piVar8 = piVar8 + 1;
      }
      if ((aiStack_438[0] == 4) || (aiStack_438[0] == 0x13)) break;
      (**(code **)(*(int *)param_1[7] + 4))();
      pcVar11 = (char *)(param_1[7] + 0x10);
      uStack_538 = 0xf;
      uStack_53c = 0;
      auStack_54c[0] = auStack_54c[0] & 0xffffff00;
      do {
        cVar1 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar1 != '\0');
      FUN_00409350();
      uStack_c._0_1_ = 3;
      piVar8 = (int *)FUN_00aae9af();
      piVar7 = piStack_5c0;
      uStack_c._0_1_ = 4;
      if (piVar8 == (int *)0x0) {
        piStack_5d0 = (int *)0x0;
      }
      else {
        piStack_5c0 = aiStack_600;
        piStack_604 = (int *)0xffffffff;
        uStack_5f0 = 0;
        aiStack_600[0]._0_1_ = 0;
        piStack_5d0 = piVar8;
        FUN_00408ed0(auStack_54c,0);
        piStack_604 = piVar8;
        piStack_5d0 = (int *)FUN_00576a40();
        piStack_5c0 = (int *)((int)piVar7 + 1);
      }
      puVar12 = puStack_5a0;
      piVar7 = piStack_5d0;
      uStack_c = CONCAT31(uStack_c._1_3_,3);
      ppiVar3 = (int **)puStack_5a0[1];
      piStack_5cc = piStack_5d0;
      if ((&piStack_5cc < ppiVar3) && (ppiVar4 = (int **)*puStack_5a0, ppiVar4 <= &piStack_5cc)) {
        if (ppiVar3 == (int **)puStack_5a0[2]) {
          uVar9 = (int)ppiVar3 - (int)ppiVar4 >> 2;
          if (0x3ffffffe < uVar9) goto LAB_00578e0a;
          if ((uint)((int)puStack_5a0[2] - (int)ppiVar4 >> 2) < uVar9 + 1) {
            FUN_004bf300();
          }
        }
        if ((undefined4 *)puVar12[1] != (undefined4 *)0x0) {
          *(undefined4 *)puVar12[1] =
               *(undefined4 *)(*puVar12 + ((int)&piStack_5cc - (int)ppiVar4 >> 2) * 4);
        }
      }
      else {
        if (ppiVar3 == (int **)puStack_5a0[2]) {
          uVar9 = (int)((int)ppiVar3 - *puStack_5a0) >> 2;
          if (0x3ffffffe < uVar9) goto LAB_00578e0a;
          if ((uint)((int)((int)puStack_5a0[2] - *puStack_5a0) >> 2) < uVar9 + 1) {
            FUN_004bf300();
          }
        }
        if ((undefined4 *)puVar12[1] != (undefined4 *)0x0) {
          *(undefined4 *)puVar12[1] = piVar7;
        }
      }
      puVar12[1] = puVar12[1] + 4;
      FUN_008b2480();
      uStack_554 = 0xf;
      uStack_558 = 0;
      uStack_568 = uStack_568 & 0xffffff00;
      FUN_00409350();
      uStack_c._0_1_ = 5;
      FUN_00988f20();
      uStack_c._0_1_ = 7;
      if (0xf < uStack_554) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_554 = 0xf;
      uStack_558 = 0;
      uStack_568 = uStack_568 & 0xffffff00;
      iVar6 = FUN_009902d0();
      iVar13 = DAT_0125a5b8 - DAT_0125a5b4 >> 2;
      piStack_5d0[0x11] = iVar13;
      uStack_5f0 = 0x578728;
      piVar7 = (int *)FUN_00aae9af();
      uStack_c._0_1_ = 8;
      if (piVar7 == (int *)0x0) {
        piVar7 = (int *)0x0;
      }
      else {
        uStack_584 = 0xf;
        uStack_588 = 0;
        auStack_598[0] = auStack_598[0] & 0xffffff00;
        uStack_5f0 = 0x578768;
        piStack_5d0 = piVar7;
        FUN_00408ed0();
        *piVar7 = (int)CModifierDefinition::vftable;
        piVar7[6] = 0xf;
        piVar7[5] = 0;
        *(undefined1 *)(piVar7 + 1) = 0;
        uStack_c._0_1_ = 10;
        piVar7[9] = iVar13;
        piVar7[8] = iVar6;
        uStack_5f0 = 0x57879e;
        FUN_00408ed0();
        *(undefined2 *)(piVar7 + 10) = 0x101;
        if (0xf < uStack_584) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        uStack_584 = 0xf;
        uStack_588 = 0;
        auStack_598[0] = auStack_598[0] & 0xffffff00;
      }
      uStack_c = CONCAT31(uStack_c._1_3_,7);
      piStack_5d0 = piVar7;
      FUN_0044ee00();
      FUN_009a1440();
      puVar12 = puStack_574;
      while( true ) {
        piVar7 = (int *)param_1[7];
        if ((char)piVar7[0x44] == '\0') {
          iVar6 = (**(code **)(*piVar7 + 4))();
          piVar7[2] = iVar6;
          if (iVar6 == 0) {
            piVar7[3] = 0x13;
          }
          *(undefined1 *)(piVar7 + 0x44) = 1;
        }
        piVar7 = piVar7 + 3;
        piVar8 = aiStack_330;
        for (iVar6 = 0x41; iVar6 != 0; iVar6 = iVar6 + -1) {
          *piVar8 = *piVar7;
          piVar7 = piVar7 + 1;
          piVar8 = piVar8 + 1;
        }
        if ((aiStack_330[0] == 4) || (aiStack_330[0] == 0x13)) break;
        (**(code **)(*(int *)param_1[7] + 4))();
        pcVar11 = (char *)(param_1[7] + 0x10);
        uStack_584 = 0xf;
        uStack_588 = 0;
        auStack_598[0] = auStack_598[0] & 0xffffff00;
        do {
          cVar1 = *pcVar11;
          pcVar11 = pcVar11 + 1;
        } while (cVar1 != '\0');
        FUN_00409350();
        uStack_c._0_1_ = 0xb;
        piVar8 = (int *)FUN_00aae9af();
        piVar7 = piStack_5c4;
        uStack_c._0_1_ = 0xc;
        if (piVar8 == (int *)0x0) {
          piStack_5cc = (int *)0x0;
        }
        else {
          piStack_5c4 = (int *)&piStack_604;
          uStack_5f0 = 0xf;
          uStack_5f4 = 0;
          piStack_604 = (int *)((uint)piStack_604 & 0xffffff00);
          piStack_5d0 = piVar8;
          FUN_00408ed0(auStack_598,0,0xffffffff);
          piStack_5cc = (int *)FUN_00576800(piVar8);
          piStack_5c4 = (int *)((int)piVar7 + 1);
        }
        piVar7 = piStack_5cc;
        uStack_c = CONCAT31(uStack_c._1_3_,0xb);
        ppiVar3 = (int **)puVar12[1];
        piStack_5d0 = piStack_5cc;
        if ((&piStack_5d0 < ppiVar3) && (ppiVar4 = (int **)*puVar12, ppiVar4 <= &piStack_5d0)) {
          if (ppiVar3 == (int **)puVar12[2]) {
            uVar9 = (int)ppiVar3 - (int)ppiVar4 >> 2;
            if (0x3ffffffe < uVar9) goto LAB_00578e0a;
            if ((uint)((int)puVar12[2] - (int)ppiVar4 >> 2) < uVar9 + 1) {
              FUN_004bf300();
            }
          }
          if ((undefined4 *)puVar12[1] != (undefined4 *)0x0) {
            *(undefined4 *)puVar12[1] =
                 *(undefined4 *)(*puVar12 + ((int)&piStack_5d0 - (int)ppiVar4 >> 2) * 4);
          }
        }
        else {
          if (ppiVar3 == (int **)puVar12[2]) {
            uVar9 = (int)((int)ppiVar3 - *puVar12) >> 2;
            if (0x3ffffffe < uVar9) goto LAB_00578e0a;
            if ((uint)((int)((int)puVar12[2] - *puVar12) >> 2) < uVar9 + 1) {
              FUN_004bf300();
            }
          }
          if ((undefined4 *)puVar12[1] != (undefined4 *)0x0) {
            *(undefined4 *)puVar12[1] = piVar7;
          }
        }
        puVar12[1] = puVar12[1] + 4;
        FUN_008b2480();
        uStack_c = CONCAT31(uStack_c._1_3_,7);
        if (0xf < uStack_584) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      }
      (**(code **)(*(int *)param_1[7] + 4))();
      if (0xf < uStack_5a8) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_c = CONCAT31(uStack_c._1_3_,1);
      uStack_5a8 = 0xf;
      uStack_5ac = 0;
      uStack_5bc = uStack_5bc & 0xffffff00;
      if (0xf < uStack_538) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    (**(code **)(*(int *)param_1[7] + 4))();
    puVar12 = puStack_56c;
  } while( true );
}

