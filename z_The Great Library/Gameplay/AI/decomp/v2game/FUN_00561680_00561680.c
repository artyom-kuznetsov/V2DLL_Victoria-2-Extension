// FUN_00561680 @ 00561680 body=[[00561680, 00561759] [00561760, 005617cc] [005617d0, 00561873] [00561877, 00561993] [0056199c, 005619ad] [005619b0, 00561b07] [00561b10, 00561bb7]]


void FUN_00561680(int param_1,undefined4 *param_2)

{
  uint *puVar1;
  char cVar2;
  void *pvVar3;
  int **ppiVar4;
  int **ppiVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  int *piVar9;
  uint uVar10;
  int *piVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  int *piVar15;
  int *apiStack_178 [5];
  int *piStack_164;
  uint auStack_15c [4];
  undefined4 uStack_14c;
  uint uStack_148;
  uint auStack_140 [4];
  undefined4 uStack_130;
  uint uStack_12c;
  int aiStack_11c [65];
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  int iStack_c;
  
  iStack_c = -1;
  puStack_10 = &LAB_00b46334;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  FUN_0057afc0(param_1 + 0x2c);
  pvVar3 = *(void **)(param_1 + 0x38);
  if (pvVar3 != *(void **)(param_1 + 0x3c)) {
    FID_conflict__memcpy(pvVar3,*(void **)(param_1 + 0x3c),0);
    *(void **)(param_1 + 0x3c) = pvVar3;
  }
  pvVar3 = *(void **)(param_1 + 0x1c);
  apiStack_178[1] = (int *)(param_1 + 0x1c);
  if (pvVar3 != *(void **)(param_1 + 0x20)) {
    FID_conflict__memcpy(pvVar3,*(void **)(param_1 + 0x20),0);
    apiStack_178[1][1] = (int)pvVar3;
  }
  FUN_0057afc0(param_1);
  pvVar3 = *(void **)(param_1 + 0xc);
  puVar1 = (uint *)(param_1 + 0xc);
  if (pvVar3 != *(void **)(param_1 + 0x10)) {
    FID_conflict__memcpy(pvVar3,*(void **)(param_1 + 0x10),0);
    *(void **)(param_1 + 0x10) = pvVar3;
  }
  apiStack_178[2] = (int *)0x0;
  DAT_012587f8 = 0;
  do {
    piVar9 = (int *)param_2[7];
    if ((char)piVar9[0x44] == '\0') {
      iVar7 = (**(code **)(*piVar9 + 4))();
      piVar9[2] = iVar7;
      if (iVar7 == 0) {
        piVar9[3] = 0x13;
      }
      *(undefined1 *)(piVar9 + 0x44) = 1;
    }
    piVar9 = piVar9 + 3;
    piVar15 = aiStack_11c;
    for (iVar7 = 0x41; iVar7 != 0; iVar7 = iVar7 + -1) {
      *piVar15 = *piVar9;
      piVar9 = piVar9 + 1;
      piVar15 = piVar15 + 1;
    }
    if (aiStack_11c[0] == 0x13) {
      piVar9 = apiStack_178[1];
      piVar15 = *(int **)(param_1 + 0x38);
      while ((*(int **)(param_1 + 0x38) <= piVar15 && (piVar15 < *(int **)(param_1 + 0x3c)))) {
        apiStack_178[3] = *(int **)(*piVar15 + 0x28);
        piStack_164 = piVar15 + 1;
        apiStack_178[2] = (int *)(*piVar15 + 0x28);
        while ((piVar15 = piStack_164, (int *)*apiStack_178[2] <= apiStack_178[3] &&
               (apiStack_178[3] < (int *)apiStack_178[2][1]))) {
          piVar9 = (int *)*apiStack_178[3];
          apiStack_178[3] = apiStack_178[3] + 1;
          apiStack_178[0] = piVar9;
          FUN_0099ec90(piVar9);
          ppiVar4 = *(int ***)(param_1 + 0x10);
          if (apiStack_178 < ppiVar4) {
            ppiVar5 = (int **)*puVar1;
            if (apiStack_178 < ppiVar5) goto LAB_00561a87;
            if (ppiVar4 == *(int ***)(param_1 + 0x14)) {
              uVar10 = (int)ppiVar4 - (int)ppiVar5 >> 2;
              if (0x3ffffffe < uVar10) goto LAB_0056199c;
              uVar10 = uVar10 + 1;
              uVar12 = (int)*(int ***)(param_1 + 0x14) - (int)ppiVar5 >> 2;
              if (uVar12 < uVar10) {
                if (0x3fffffff - (uVar12 >> 1) < uVar12) {
                  uVar12 = 0;
                }
                else {
                  uVar12 = uVar12 + (uVar12 >> 1);
                }
                if (uVar12 < uVar10) {
                  uVar12 = uVar10;
                }
                FUN_004bf300(uVar12);
              }
            }
            if (*(undefined4 **)(param_1 + 0x10) != (undefined4 *)0x0) {
              **(undefined4 **)(param_1 + 0x10) =
                   *(undefined4 *)(*puVar1 + ((int)apiStack_178 - (int)ppiVar5 >> 2) * 4);
            }
            *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 4;
            piVar9 = apiStack_178[1];
          }
          else {
LAB_00561a87:
            if (ppiVar4 == *(int ***)(param_1 + 0x14)) {
              uVar10 = (int)((int)ppiVar4 - *puVar1) >> 2;
              if (0x3ffffffe < uVar10) goto LAB_0056199c;
              uVar10 = uVar10 + 1;
              uVar12 = (int)((int)*(int ***)(param_1 + 0x14) - *puVar1) >> 2;
              if (uVar12 < uVar10) {
                if (0x3fffffff - (uVar12 >> 1) < uVar12) {
                  uVar12 = 0;
                }
                else {
                  uVar12 = uVar12 + (uVar12 >> 1);
                }
                if (uVar12 < uVar10) {
                  uVar12 = uVar10;
                }
                FUN_004bf300(uVar12);
              }
            }
            if (*(int **)(param_1 + 0x10) != (int *)0x0) {
              **(int **)(param_1 + 0x10) = (int)piVar9;
            }
            *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 4;
            piVar9 = apiStack_178[1];
          }
        }
      }
      uVar10 = *puVar1;
      DAT_012587f4 = (int)(*(int *)(param_1 + 0x10) - uVar10) >> 2;
      iVar7 = 0;
      if (DAT_012587f4 < 1) goto LAB_00561b96;
      do {
        piVar15 = (int *)(uVar10 + iVar7 * 4);
        iVar13 = *piVar15;
        if (((iVar13 != DAT_012587f0 + 0x48) && (iVar13 != 0)) && (*(char *)(iVar13 + 0x3d) != '\0')
           ) {
          piVar11 = (int *)piVar9[1];
          if ((piVar15 < piVar11) && (piVar6 = (int *)*piVar9, piVar6 <= piVar15)) {
            if (piVar11 == (int *)piVar9[2]) {
              FUN_00a513f0();
              piVar9 = apiStack_178[1];
            }
            piVar11 = (int *)piVar9[1];
            if (piVar11 != (int *)0x0) {
              iVar13 = *(int *)(*piVar9 + ((int)piVar15 - (int)piVar6 >> 2) * 4);
LAB_00561b79:
              *piVar11 = iVar13;
            }
          }
          else {
            if (piVar11 == (int *)piVar9[2]) {
              FUN_00a513f0();
              piVar9 = apiStack_178[1];
            }
            piVar11 = (int *)piVar9[1];
            if (piVar11 != (int *)0x0) {
              iVar13 = *piVar15;
              goto LAB_00561b79;
            }
          }
          piVar9[1] = piVar9[1] + 4;
        }
        uVar10 = *puVar1;
        iVar7 = iVar7 + 1;
        if ((int)(*(int *)(param_1 + 0x10) - uVar10) >> 2 <= iVar7) {
LAB_00561b96:
          (**(code **)*param_2)(1);
          ExceptionList = pvStack_18;
          return;
        }
      } while( true );
    }
    FUN_009a1440(param_2);
    uStack_148 = 0xf;
    uStack_14c = 0;
    auStack_15c[0] = auStack_15c[0] & 0xffffff00;
    pcVar8 = (char *)(param_2 + 9);
    do {
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    FUN_00409350(param_2 + 9,(int)pcVar8 - ((int)param_2 + 0x25));
    iStack_c = 0;
    piVar9 = (int *)FUN_00aae9af(0x38);
    iStack_c._0_1_ = 1;
    if (piVar9 == (int *)0x0) {
      apiStack_178[3] = (int *)0x0;
    }
    else {
      uStack_12c = 0xf;
      uStack_130 = 0;
      auStack_140[0] = auStack_140[0] & 0xffffff00;
      apiStack_178[0] = piVar9;
      FUN_00408ed0(auStack_15c,0,0xffffffff);
      iStack_c._0_1_ = 2;
      piVar9[2] = (int)apiStack_178[2];
      piVar9[1] = 0x18d;
      *piVar9 = (int)CGoodsCategory::vftable;
      piVar9[8] = 0xf;
      piVar9[7] = 0;
      *(undefined1 *)(piVar9 + 3) = 0;
      FUN_00408ed0(auStack_140,0,0xffffffff);
      piVar9[10] = 0;
      piVar9[0xb] = 0;
      piVar9[0xc] = 0;
      if (0xf < uStack_12c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_140[0]);
      }
      apiStack_178[2] = (int *)((int)apiStack_178[2] + 1);
      apiStack_178[3] = piVar9;
    }
    piVar9 = apiStack_178[3];
    iStack_c = (uint)iStack_c._1_3_ << 8;
    apiStack_178[0] = apiStack_178[3];
    FUN_0099ec90(apiStack_178[3]);
    ppiVar4 = *(int ***)(param_1 + 0x3c);
    puVar14 = (uint *)(param_1 + 0x38);
    if ((apiStack_178 < ppiVar4) && (ppiVar5 = (int **)*puVar14, ppiVar5 <= apiStack_178)) {
      if (ppiVar4 == *(int ***)(param_1 + 0x40)) {
        uVar10 = (int)ppiVar4 - (int)ppiVar5 >> 2;
        if (0x3ffffffe < uVar10) goto LAB_0056199c;
        uVar10 = uVar10 + 1;
        uVar12 = (int)*(int ***)(param_1 + 0x40) - (int)ppiVar5 >> 2;
        if (uVar12 < uVar10) {
          if (0x3fffffff - (uVar12 >> 1) < uVar12) {
            uVar12 = 0;
          }
          else {
            uVar12 = uVar12 + (uVar12 >> 1);
          }
          if (uVar12 < uVar10) {
            uVar12 = uVar10;
          }
          FUN_004bf300(uVar12);
          piVar9 = apiStack_178[3];
        }
      }
      if (*(undefined4 **)(param_1 + 0x3c) != (undefined4 *)0x0) {
        **(undefined4 **)(param_1 + 0x3c) =
             *(undefined4 *)(*puVar14 + ((int)apiStack_178 - (int)ppiVar5 >> 2) * 4);
      }
    }
    else {
      if (ppiVar4 == *(int ***)(param_1 + 0x40)) {
        uVar10 = (int)((int)ppiVar4 - *puVar14) >> 2;
        if (0x3ffffffe < uVar10) {
LAB_0056199c:
                    /* WARNING: Subroutine does not return */
          FUN_00aad3ad("vector<T> too long");
        }
        uVar10 = uVar10 + 1;
        uVar12 = (int)((int)*(int ***)(param_1 + 0x40) - *puVar14) >> 2;
        if (uVar12 < uVar10) {
          if (0x3fffffff - (uVar12 >> 1) < uVar12) {
            uVar12 = 0;
          }
          else {
            uVar12 = uVar12 + (uVar12 >> 1);
          }
          if (uVar12 < uVar10) {
            uVar12 = uVar10;
          }
          FUN_004bf300(uVar12);
          piVar9 = apiStack_178[3];
        }
      }
      if (*(undefined4 **)(param_1 + 0x3c) != (undefined4 *)0x0) {
        **(undefined4 **)(param_1 + 0x3c) = piVar9;
      }
    }
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 4;
    (**(code **)(*piVar9 + 0xc))(param_2);
    iStack_c = -1;
    if (0xf < uStack_148) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(auStack_15c[0]);
    }
  } while( true );
}

