// FUN_009af9f0 @ 009af9f0 body=[[009af9f0, 009afdd0] [009afdda, 009b0041] [009b0050, 009b005b] [009b006a, 009b022e] [009b0232, 009b0268] [009b0272, 009b032c] [009b0330, 009b0348]]


undefined4 FUN_009af9f0(int param_1)

{
  ushort uVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int *piVar7;
  int **ppiVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  undefined1 auStack_228 [4];
  undefined4 uStack_224;
  int **ppiStack_220;
  int **ppiStack_21c;
  int **ppiStack_218;
  uint *puStack_214;
  int *piStack_210;
  undefined ***pppuStack_20c;
  int *piStack_1f4;
  uint auStack_1f0 [3];
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  uint uStack_1dc;
  undefined1 *puStack_1d8;
  undefined1 auStack_1b4 [148];
  undefined **appuStack_120 [67];
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  pvStack_14 = ExceptionList;
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b573ea;
  ExceptionList = &pvStack_14;
  if (*(char *)(param_1 + 0x25d) != '\0') {
    puVar5 = *(undefined4 **)(param_1 + 4);
    ExceptionList = &pvStack_14;
    *(undefined1 *)(param_1 + 0x25d) = 0;
    for (; puVar5 != (undefined4 *)0x0; puVar5 = (undefined4 *)puVar5[2]) {
      pppuStack_20c = (undefined ***)0x3;
      piStack_210 = (int *)0x9afa3b;
      (**(code **)(*(int *)*puVar5 + 4))();
    }
    pppuStack_20c = (undefined ***)0x9afa49;
    FUN_009b1190();
  }
  iVar9 = *(int *)(param_1 + 0x2c);
  if (iVar9 == 7) {
    for (puVar5 = *(undefined4 **)(param_1 + 4); puVar5 != (undefined4 *)0x0;
        puVar5 = (undefined4 *)puVar5[2]) {
      pppuStack_20c = (undefined ***)0x2;
      piStack_210 = (int *)0x9afa63;
      (**(code **)(*(int *)*puVar5 + 4))();
    }
    ExceptionList = pvStack_14;
    return 0;
  }
  if (iVar9 == 3) {
    for (puVar5 = *(undefined4 **)(param_1 + 4); puVar5 != (undefined4 *)0x0;
        puVar5 = (undefined4 *)puVar5[2]) {
      pppuStack_20c = (undefined ***)0x7;
      piStack_210 = (int *)0x9afa9b;
      (**(code **)(*(int *)*puVar5 + 4))();
    }
    ExceptionList = pvStack_14;
    return 0;
  }
  if ((((iVar9 == 4) || (iVar9 == 2)) || (iVar9 == 0xb)) || (iVar9 == 0xc)) {
    pppuStack_20c = (undefined ***)0x0;
    piStack_210 = (int *)0x9afbb3;
    (**(code **)(**(int **)(param_1 + 0x38) + 0x1c))();
    if ((*(char *)(param_1 + 0x234) == '\0') && (*(char *)(param_1 + 0x25e) == '\0')) {
      puStack_214 = (uint *)0x9afbd6;
      piStack_210 = (int *)(param_1 + 0x44);
      FUN_00549980();
      piStack_210 = (int *)0x9afbe0;
      puVar5 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0x38) + 0x20))();
      if (puVar5[2] != 0) {
        do {
          piStack_210 = (int *)0x9afc01;
          FUN_0068f390();
          piStack_210 = (int *)*puVar5;
          puStack_214 = (uint *)0x9afc11;
          FUN_005f2ae0();
        } while (puVar5[2] != 0);
        piVar7 = *(int **)(param_1 + 0x44);
        piVar3 = piVar7 + (*(int *)(param_1 + 0x48) - (int)piVar7 >> 2);
        for (; piVar7 != piVar3; piVar7 = piVar7 + 1) {
          piStack_210 = (int *)0x9afc3d;
          cVar4 = (**(code **)(*(int *)*piVar7 + 0x38))();
          if (cVar4 == '\0') {
            if (DAT_01258a65 != '\0') {
              piStack_210 = (int *)0x9afe81;
              FUN_009885d0();
              puStack_10 = (undefined1 *)0x3;
              piStack_210 = (int *)0x9afe99;
              (**(code **)(*(int *)*piVar7 + 0x1c))();
              piStack_210 = (int *)0x9afea4;
              FUN_00990880();
              piStack_210 = (int *)0x301;
              ppiStack_218 = &piStack_1f4;
              puStack_214 = (uint *)0x228;
              puStack_10._0_1_ = 4;
              ppiStack_21c = (int **)0x9afec6;
              FUN_004015b0();
              puStack_10._0_1_ = 5;
              piStack_210 = (int *)0x9afedd;
              piStack_210 = (int *)FUN_00987d20();
              puStack_214 = (uint *)0x9afee5;
              piStack_210 = (int *)FUN_00989050();
              puStack_214 = (uint *)0x9afeee;
              FUN_00401280();
              puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,4);
              piStack_210 = (int *)0x9aff02;
              FUN_00401650();
              piStack_210 = (int *)0x9aff0b;
              FUN_00408ad0();
              puStack_10 = (undefined1 *)0xffffffff;
              piStack_210 = (int *)0x9aff1f;
              FUN_00408ad0();
            }
          }
          else {
            bVar11 = DAT_01258a65 != '\0';
            *(undefined1 *)(param_1 + 0x234) = 1;
            if (bVar11) {
              piStack_210 = (int *)0x9afc67;
              FUN_009885d0();
              puStack_10 = (undefined1 *)0x0;
              piStack_210 = (int *)0x9afc7f;
              (**(code **)(*(int *)*piVar7 + 0x1c))();
              piStack_210 = (int *)0x9afc8a;
              FUN_00990880();
              piStack_210 = (int *)0x301;
              ppiStack_218 = &piStack_1f4;
              puStack_214 = (uint *)0x213;
              puStack_10._0_1_ = 1;
              ppiStack_21c = (int **)0x9afcac;
              FUN_004015b0();
              puStack_10._0_1_ = 2;
              ppiStack_21c = *(int ***)(*piVar7 + 0x38);
              ppiStack_218 = (int **)&DAT_00ded950;
              ppiStack_220 = (int **)0x9afcd4;
              puStack_214 = (uint *)ppiStack_21c;
              piStack_210 = (int *)ppiStack_21c;
              ppiStack_220 = (int **)FUN_00987d20();
              uStack_224 = 0x9afcdc;
              ppiStack_21c = (int **)FUN_00989050();
              ppiStack_220 = (int **)0x9afce5;
              puStack_214 = (uint *)FUN_00418e30();
              ppiStack_218 = (int **)0x9afcee;
              piStack_210 = (int *)FUN_00447240();
              puStack_214 = (uint *)0x9afcf4;
              FUN_00401280();
              puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,1);
              piStack_210 = (int *)0x9afd08;
              FUN_00401650();
              piStack_210 = (int *)0x9afd11;
              FUN_00408ad0();
              puStack_10 = (undefined1 *)0xffffffff;
              piStack_210 = (int *)0x9afd25;
              FUN_00408ad0();
            }
            piStack_210 = (int *)0x9afd32;
            (**(code **)(*(int *)*piVar7 + 0x18))();
            *(undefined1 *)(param_1 + 0x234) = 0;
            uVar6 = *(undefined4 *)(*piVar7 + 0x38);
            iVar9 = *(int *)(param_1 + 0x224);
            piStack_210 = (int *)0x10;
            puStack_214 = (uint *)0x9afd4b;
            puVar5 = (undefined4 *)FUN_00aae9af();
            if (puVar5 == (undefined4 *)0x0) {
              puVar5 = (undefined4 *)0x0;
            }
            else {
              *puVar5 = uVar6;
              puVar5[1] = iVar9;
              puVar5[2] = 0;
              *(undefined1 *)(puVar5 + 3) = 0;
            }
            iVar2 = *(int *)(param_1 + 0x228);
            *(undefined4 **)(param_1 + 0x224) = puVar5;
            *(int *)(param_1 + 0x228) = iVar2 + 1;
            if (iVar2 == 0) {
              *(undefined4 **)(param_1 + 0x220) = puVar5;
            }
            else {
              *(undefined4 **)(iVar9 + 8) = puVar5;
            }
            if ((*(int *)(param_1 + 0x230) < *(int *)(param_1 + 0x228)) &&
               (piStack_210 = *(int **)(param_1 + 0x220), piStack_210 != (int *)0x0)) {
              if (*(char *)(param_1 + 0x22c) == '\0') {
                iVar9 = *(int *)((int)piStack_210 + 8);
                *(int *)(param_1 + 0x220) = iVar9;
                if (iVar9 == 0) {
                  *(undefined4 *)(param_1 + 0x224) = 0;
                }
                else {
                  *(undefined4 *)(iVar9 + 4) = 0;
                }
                    /* WARNING: Subroutine does not return */
                puStack_214 = (uint *)&UNK_009afdd1;
                FUN_00aae91b();
              }
              *(undefined1 *)((int)piStack_210 + 0xc) = 1;
            }
            piStack_210 = (int *)0x9afde7;
            cVar4 = (**(code **)(*(int *)*piVar7 + 0x30))();
            if (cVar4 != '\0') {
              puStack_1d8 = auStack_228;
              FUN_00401320();
              uVar6 = (**(code **)(*(int *)*piVar7 + 0x34))();
              iVar9 = *(int *)(param_1 + 0xdc);
              piStack_210 = (int *)0x10;
              puStack_214 = (uint *)0x9afe1f;
              puVar5 = (undefined4 *)FUN_00aae9af();
              if (puVar5 == (undefined4 *)0x0) {
                puVar5 = (undefined4 *)0x0;
              }
              else {
                *puVar5 = uVar6;
                puVar5[1] = iVar9;
                puVar5[2] = 0;
                *(undefined1 *)(puVar5 + 3) = 0;
              }
              iVar2 = *(int *)(param_1 + 0xe0);
              *(undefined4 **)(param_1 + 0xdc) = puVar5;
              *(int *)(param_1 + 0xe0) = iVar2 + 1;
              if (iVar2 == 0) {
                *(undefined4 **)(param_1 + 0xd8) = puVar5;
              }
              else {
                *(undefined4 **)(iVar9 + 8) = puVar5;
              }
            }
          }
        }
        piStack_210 = (int *)param_1;
        puStack_214 = (uint *)0x9aff3a;
        FUN_009b0e50();
      }
      piStack_210 = (int *)0x9aff44;
      piStack_1f4 = (int *)(**(code **)(**(int **)(param_1 + 0x38) + 0x50))();
      for (piVar3 = (int *)*piStack_1f4; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[2]) {
        if (*(int *)(*piVar3 + 0x38) != 0) {
          for (piVar7 = *(int **)(param_1 + 0x220); piVar7 != (int *)0x0; piVar7 = (int *)piVar7[2])
          {
            if (*piVar7 == *(int *)(*piVar3 + 0x38)) {
              pppuStack_20c = (undefined ***)0xb;
              uVar10 = 0;
              piStack_210 = (int *)0xe38f98;
              uStack_1dc = 0xf;
              uStack_1e0 = 0;
              auStack_1f0[0] = auStack_1f0[0] & 0xffffff00;
              puStack_214 = (uint *)0x9b015b;
              FUN_00409350();
              pppuStack_20c = (undefined ***)0x301;
              puStack_214 = auStack_1f0;
              piStack_210 = (int *)0x257;
              uStack_c = 8;
              ppiStack_218 = (int **)0x9b017e;
              ppiVar8 = (int **)FUN_004015b0();
              pppuStack_20c = (undefined ***)0x0;
              piStack_210 = (int *)0x19;
              puStack_214 = (uint *)0xe39024;
              uStack_c = CONCAT31(uStack_c._1_3_,9);
              ppiStack_21c = (int **)0x9b0199;
              ppiStack_218 = ppiVar8;
              FUN_00987d50();
              ppiStack_220 = (int **)0x9b019f;
              ppiStack_21c = ppiVar8;
              FUN_00408be0();
              if ((*(byte *)((*ppiVar8)[1] + 0xc + (int)ppiVar8) & 6) == 0) {
                pppuStack_20c = (undefined ***)0x9b01b8;
                iVar9 = (**(code **)(**(int **)((*ppiVar8)[1] + 0x38 + (int)ppiVar8) + 0x34))();
                if (iVar9 == -1) {
                  uVar10 = 4;
                }
              }
              if (uVar10 != 0) {
                piStack_210 = (int *)(*(uint *)((int)ppiVar8 + (*ppiVar8)[1] + 0xc) | uVar10);
                if (*(int *)((int)ppiVar8 + (*ppiVar8)[1] + 0x38) == 0) {
                  piStack_210 = (int *)((uint)piStack_210 | 4);
                }
                pppuStack_20c = (undefined ***)0x0;
                puStack_214 = (uint *)0x9b01e3;
                FUN_00401120();
              }
              pppuStack_20c = appuStack_120;
              uStack_c = CONCAT31(uStack_c._1_3_,8);
              piStack_210 = (int *)0x9b01f8;
              FUN_00987ac0();
              pppuStack_20c = appuStack_120;
              appuStack_120[0] = std::ios_base::vftable;
              piStack_210 = (int *)0x9b0210;
              FUN_00aad52d();
              uStack_c = 0xffffffff;
              if (uStack_1dc < 0x10) goto LAB_009b0232;
              goto LAB_009b022a;
            }
          }
        }
        *(undefined1 *)(param_1 + 0x234) = 1;
        pppuStack_20c = (undefined ***)0x9aff8f;
        cVar4 = (**(code **)(*(int *)*piVar3 + 0x38))();
        if (cVar4 == '\0') {
          pppuStack_20c = (undefined ***)0xb;
          piStack_210 = (int *)0xe38f98;
          uStack_1dc = 0xf;
          uStack_1e0 = 0;
          auStack_1f0[0] = auStack_1f0[0] & 0xffffff00;
          puStack_214 = (uint *)0x9b008f;
          FUN_00409350();
          pppuStack_20c = (undefined ***)0x301;
          puStack_214 = auStack_1f0;
          piStack_210 = (int *)0x253;
          uStack_c = 6;
          ppiStack_218 = (int **)0x9b00b2;
          ppiVar8 = (int **)FUN_004015b0();
          pppuStack_20c = (undefined ***)0x0;
          uStack_c._0_1_ = 7;
          uVar1 = *(ushort *)(*piVar3 + 0x34);
          piStack_210 = (int *)0x2d;
          puStack_214 = (uint *)0xe38ff4;
          ppiStack_21c = (int **)0x9b00d8;
          ppiStack_218 = ppiVar8;
          FUN_00987d50();
          uStack_224 = 0x9b00df;
          ppiStack_220 = ppiVar8;
          ppiStack_21c = (int **)(uint)uVar1;
          pppuStack_20c = (undefined ***)FUN_00455470();
          piStack_210 = (int *)0x9b00e5;
          FUN_00401280();
          pppuStack_20c = appuStack_120;
          uStack_c = CONCAT31(uStack_c._1_3_,6);
          piStack_210 = (int *)0x9b00fd;
          FUN_00987ac0();
          pppuStack_20c = appuStack_120;
          appuStack_120[0] = std::ios_base::vftable;
          piStack_210 = (int *)0x9b0115;
          FUN_00aad52d();
          uStack_c = 0xffffffff;
          if (0xf < uStack_1dc) {
LAB_009b022a:
            uStack_c = 0xffffffff;
                    /* WARNING: Subroutine does not return */
            piStack_210 = (int *)&UNK_009b022f;
            pppuStack_20c = (undefined ***)auStack_1f0[0];
            FUN_00aae91b();
          }
        }
        else {
          pppuStack_20c = (undefined ***)0x9affa0;
          (**(code **)(*(int *)*piVar3 + 0x18))();
          *(undefined1 *)(param_1 + 0x234) = 0;
          uVar6 = *(undefined4 *)(*piVar3 + 0x38);
          iVar9 = *(int *)(param_1 + 0x224);
          pppuStack_20c = (undefined ***)0x10;
          piStack_210 = (int *)0x9affb9;
          puVar5 = (undefined4 *)FUN_00aae9af();
          if (puVar5 == (undefined4 *)0x0) {
            puVar5 = (undefined4 *)0x0;
          }
          else {
            *puVar5 = uVar6;
            puVar5[1] = iVar9;
            puVar5[2] = 0;
            *(undefined1 *)(puVar5 + 3) = 0;
          }
          iVar2 = *(int *)(param_1 + 0x228);
          *(undefined4 **)(param_1 + 0x224) = puVar5;
          *(int *)(param_1 + 0x228) = iVar2 + 1;
          if (iVar2 == 0) {
            *(undefined4 **)(param_1 + 0x220) = puVar5;
          }
          else {
            *(undefined4 **)(iVar9 + 8) = puVar5;
          }
          if ((*(int *)(param_1 + 0x230) < *(int *)(param_1 + 0x228)) &&
             (pppuStack_20c = *(undefined ****)(param_1 + 0x220),
             pppuStack_20c != (undefined ***)0x0)) {
            if (*(char *)(param_1 + 0x22c) == '\0') {
              iVar9 = *(int *)((int)pppuStack_20c + 8);
              *(int *)(param_1 + 0x220) = iVar9;
              if (iVar9 != 0) {
                *(undefined4 *)(iVar9 + 4) = 0;
                    /* WARNING: Subroutine does not return */
                piStack_210 = (int *)&UNK_009b0042;
                FUN_00aae91b();
              }
              *(undefined4 *)(param_1 + 0x224) = 0;
                    /* WARNING: Subroutine does not return */
              piStack_210 = (int *)&UNK_009b005c;
              FUN_00aae91b();
            }
            *(undefined1 *)((int)pppuStack_20c + 0xc) = 1;
          }
        }
LAB_009b0232:
        if ((undefined4 *)*piVar3 != (undefined4 *)0x0) {
          pppuStack_20c = (undefined ***)0x1;
          piStack_210 = (int *)0x9b0244;
          (*(code *)**(undefined4 **)*piVar3)();
        }
      }
      pppuStack_20c = (undefined ***)*piStack_1f4;
      if (pppuStack_20c != (undefined ***)0x0) {
                    /* WARNING: Subroutine does not return */
        piStack_210 = (int *)&UNK_009b0269;
        FUN_00aae91b();
      }
      *piStack_1f4 = 0;
      piStack_1f4[1] = 0;
      piStack_1f4[2] = 0;
    }
    else {
      piStack_210 = (int *)0xb;
      puStack_214 = (uint *)0xe38f98;
      uStack_1e0 = 0xf;
      uStack_1e4 = 0;
      piStack_1f4 = (int *)((uint)piStack_1f4 & 0xffffff00);
      ppiStack_218 = (int **)0x9b02a4;
      FUN_00409350();
      piStack_210 = (int *)0x301;
      ppiStack_218 = &piStack_1f4;
      puStack_214 = (uint *)0x260;
      puStack_10 = (undefined1 *)0xa;
      ppiStack_21c = (int **)0x9b02c8;
      uVar6 = FUN_004015b0();
      piStack_210 = (int *)0x0;
      puStack_214 = (uint *)0x22;
      ppiStack_218 = (int **)0xe39040;
      puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,0xb);
      ppiStack_220 = (int **)0x9b02e4;
      ppiStack_21c = (int **)uVar6;
      FUN_00987d50();
      piStack_210 = (int *)0x9b02ea;
      pppuStack_20c = (undefined ***)uVar6;
      FUN_00401280();
      pppuStack_20c = appuStack_120;
      uStack_c = CONCAT31(uStack_c._1_3_,10);
      piStack_210 = (int *)0x9b0301;
      FUN_00987ac0();
      pppuStack_20c = appuStack_120;
      appuStack_120[0] = std::ios_base::vftable;
      piStack_210 = (int *)0x9b0319;
      FUN_00aad52d();
      if (0xf < uStack_1dc) {
        pppuStack_20c = (undefined ***)auStack_1f0[0];
                    /* WARNING: Subroutine does not return */
        piStack_210 = (int *)&UNK_009b032d;
        FUN_00aae91b();
      }
    }
  }
  else if (iVar9 == 10) {
    pppuStack_20c = (undefined ***)0x0;
    piStack_210 = (int *)0x9afaf2;
    (**(code **)(**(int **)(param_1 + 0x38) + 0x1c))();
  }
  else if (iVar9 != 0xd) {
    pppuStack_20c = (undefined ***)0x0;
    piStack_210 = (int *)0x9afb0c;
    (**(code **)(**(int **)(param_1 + 0x38) + 0x1c))();
    if ((*(char *)(param_1 + 0x234) == '\0') && (*(char *)(param_1 + 0x25e) == '\0')) {
      if (*(int *)(param_1 + 0x2c) == 6) {
        pppuStack_20c = (undefined ***)param_1;
        piStack_210 = (int *)0x9afb2e;
        FUN_009b0350();
      }
    }
    else {
      pppuStack_20c = (undefined ***)0x9afb41;
      FUN_009885d0();
      pppuStack_20c = (undefined ***)0x301;
      piStack_210 = (int *)0x279;
      uStack_c = 0xc;
      ppiStack_218 = (int **)0x9afb65;
      puStack_214 = (uint *)auStack_1b4;
      FUN_004015b0();
      uStack_c._0_1_ = 0xd;
      pppuStack_20c = (undefined ***)0x9afb7c;
      pppuStack_20c = (undefined ***)FUN_00987d20();
      piStack_210 = (int *)0x9afb82;
      FUN_00401280();
      uStack_c = CONCAT31(uStack_c._1_3_,0xc);
      pppuStack_20c = (undefined ***)0x9afb99;
      FUN_00401650();
      pppuStack_20c = (undefined ***)0x9afba2;
      FUN_00408ad0();
    }
  }
  ExceptionList = pvStack_14;
  return 1;
}

