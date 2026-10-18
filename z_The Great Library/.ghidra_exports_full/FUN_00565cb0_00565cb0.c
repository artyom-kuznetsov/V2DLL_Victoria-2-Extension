// FUN_00565cb0 @ 00565cb0 body=[[00565cb0, 00565e53] [00565e57, 00565f78] [00565f81, 00565f8e] [00565f90, 005660e1]]


void FUN_00565cb0(int param_1,undefined4 *param_2)

{
  char cVar1;
  void *pvVar2;
  int **ppiVar3;
  int **ppiVar4;
  int iVar5;
  char *pcVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  uint *puVar11;
  int *apiStack_174 [4];
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
  puStack_10 = &LAB_00b46304;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  FUN_0057afc0(param_1);
  pvVar2 = *(void **)(param_1 + 0xc);
  if (pvVar2 != *(void **)(param_1 + 0x10)) {
    FID_conflict__memcpy(pvVar2,*(void **)(param_1 + 0x10),0);
    *(void **)(param_1 + 0x10) = pvVar2;
  }
  FUN_0057afc0(param_1 + 0x1c);
  pvVar2 = *(void **)(param_1 + 0x28);
  if (pvVar2 != *(void **)(param_1 + 0x2c)) {
    FID_conflict__memcpy(pvVar2,*(void **)(param_1 + 0x2c),0);
    *(void **)(param_1 + 0x2c) = pvVar2;
  }
  apiStack_174[1] = (int *)0x0;
  DAT_01258808 = 0;
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
    piVar10 = aiStack_11c;
    for (iVar5 = 0x41; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar10 = *piVar7;
      piVar7 = piVar7 + 1;
      piVar10 = piVar10 + 1;
    }
    if (aiStack_11c[0] == 0x13) {
      piVar7 = *(int **)(param_1 + 0x28);
      do {
        if ((piVar7 < *(int **)(param_1 + 0x28)) || (*(int **)(param_1 + 0x2c) <= piVar7)) {
          (**(code **)*param_2)(1);
          ExceptionList = pvStack_18;
          return;
        }
        piStack_164 = piVar7 + 1;
        apiStack_174[1] = (int *)(*piVar7 + 0x28);
        piVar10 = *(int **)(*piVar7 + 0x28);
        while ((piVar7 = piStack_164, (int *)*apiStack_174[1] <= piVar10 &&
               (piVar10 < (int *)apiStack_174[1][1]))) {
          piVar7 = (int *)*piVar10;
          apiStack_174[2] = piVar10 + 1;
          apiStack_174[0] = piVar7;
          FUN_0057b150(piVar7);
          ppiVar3 = *(int ***)(param_1 + 0x10);
          if ((apiStack_174 < ppiVar3) &&
             (ppiVar4 = *(int ***)(param_1 + 0xc), ppiVar4 <= apiStack_174)) {
            if (ppiVar3 == *(int ***)(param_1 + 0x14)) {
              uVar8 = (int)ppiVar3 - (int)ppiVar4 >> 2;
              if (0x3ffffffe < uVar8) goto LAB_00565f81;
              uVar8 = uVar8 + 1;
              uVar9 = (int)*(int ***)(param_1 + 0x14) - (int)ppiVar4 >> 2;
              if (uVar9 < uVar8) {
                if (0x3fffffff - (uVar9 >> 1) < uVar9) {
                  uVar9 = 0;
                }
                else {
                  uVar9 = uVar9 + (uVar9 >> 1);
                }
                if (uVar9 < uVar8) {
                  uVar9 = uVar8;
                }
                FUN_004bf300(uVar9);
              }
            }
            if (*(undefined4 **)(param_1 + 0x10) != (undefined4 *)0x0) {
              **(undefined4 **)(param_1 + 0x10) =
                   *(undefined4 *)
                    (*(int *)(param_1 + 0xc) + ((int)apiStack_174 - (int)ppiVar4 >> 2) * 4);
            }
            *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 4;
            piVar10 = apiStack_174[2];
          }
          else {
            if (ppiVar3 == *(int ***)(param_1 + 0x14)) {
              uVar8 = *(uint *)(param_1 + 0xc);
              uVar9 = (int)((int)ppiVar3 - uVar8) >> 2;
              if (0x3ffffffe < uVar9) goto LAB_00565f81;
              uVar9 = uVar9 + 1;
              uVar8 = (int)((int)*(int ***)(param_1 + 0x14) - uVar8) >> 2;
              if (uVar8 < uVar9) {
                if (0x3fffffff - (uVar8 >> 1) < uVar8) {
                  uVar8 = 0;
                }
                else {
                  uVar8 = uVar8 + (uVar8 >> 1);
                }
                if (uVar8 < uVar9) {
                  uVar8 = uVar9;
                }
                FUN_004bf300(uVar8);
              }
            }
            if (*(int **)(param_1 + 0x10) != (int *)0x0) {
              **(int **)(param_1 + 0x10) = (int)piVar7;
            }
            *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 4;
            piVar10 = apiStack_174[2];
          }
        }
      } while( true );
    }
    FUN_009a1440(param_2);
    uStack_148 = 0xf;
    uStack_14c = 0;
    auStack_15c[0] = auStack_15c[0] & 0xffffff00;
    pcVar6 = (char *)(param_2 + 9);
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(param_2 + 9,(int)pcVar6 - ((int)param_2 + 0x25));
    iStack_c = 0;
    piVar7 = (int *)FUN_00aae9af(0x38);
    iStack_c._0_1_ = 1;
    if (piVar7 == (int *)0x0) {
      apiStack_174[2] = (int *)0x0;
    }
    else {
      uStack_12c = 0xf;
      uStack_130 = 0;
      auStack_140[0] = auStack_140[0] & 0xffffff00;
      apiStack_174[0] = piVar7;
      FUN_00408ed0(auStack_15c,0,0xffffffff);
      iStack_c._0_1_ = 2;
      piVar7[1] = 0x18d;
      *piVar7 = (int)CNationalFocusCategory::vftable;
      piVar7[2] = (int)apiStack_174[1];
      piVar7[8] = 0xf;
      piVar7[7] = 0;
      *(undefined1 *)(piVar7 + 3) = 0;
      FUN_00408ed0(auStack_140,0,0xffffffff);
      piVar7[10] = 0;
      piVar7[0xb] = 0;
      piVar7[0xc] = 0;
      if (0xf < uStack_12c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_140[0]);
      }
      apiStack_174[1] = (int *)((int)apiStack_174[1] + 1);
      apiStack_174[2] = piVar7;
    }
    piVar7 = apiStack_174[2];
    iStack_c = (uint)iStack_c._1_3_ << 8;
    apiStack_174[0] = apiStack_174[2];
    FUN_0099ec90(apiStack_174[2]);
    ppiVar3 = *(int ***)(param_1 + 0x2c);
    puVar11 = (uint *)(param_1 + 0x28);
    if (apiStack_174 < ppiVar3) {
      ppiVar4 = (int **)*puVar11;
      if (apiStack_174 < ppiVar4) goto LAB_00565efa;
      if (ppiVar3 == *(int ***)(param_1 + 0x30)) {
        uVar8 = (int)ppiVar3 - (int)ppiVar4 >> 2;
        if (0x3ffffffe < uVar8) goto LAB_00565f81;
        uVar8 = uVar8 + 1;
        uVar9 = (int)*(int ***)(param_1 + 0x30) - (int)ppiVar4 >> 2;
        if (uVar9 < uVar8) {
          if (0x3fffffff - (uVar9 >> 1) < uVar9) {
            uVar9 = 0;
          }
          else {
            uVar9 = uVar9 + (uVar9 >> 1);
          }
          if (uVar9 < uVar8) {
            uVar9 = uVar8;
          }
          FUN_004bf300(uVar9);
          piVar7 = apiStack_174[2];
        }
      }
      if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
        **(undefined4 **)(param_1 + 0x2c) =
             *(undefined4 *)(*puVar11 + ((int)apiStack_174 - (int)ppiVar4 >> 2) * 4);
      }
    }
    else {
LAB_00565efa:
      if (ppiVar3 == *(int ***)(param_1 + 0x30)) {
        uVar8 = (int)((int)ppiVar3 - *puVar11) >> 2;
        if (0x3ffffffe < uVar8) {
LAB_00565f81:
                    /* WARNING: Subroutine does not return */
          FUN_00aad3ad("vector<T> too long");
        }
        uVar8 = uVar8 + 1;
        uVar9 = (int)((int)*(int ***)(param_1 + 0x30) - *puVar11) >> 2;
        if (uVar9 < uVar8) {
          if (0x3fffffff - (uVar9 >> 1) < uVar9) {
            uVar9 = 0;
          }
          else {
            uVar9 = uVar9 + (uVar9 >> 1);
          }
          if (uVar9 < uVar8) {
            uVar9 = uVar8;
          }
          FUN_004bf300(uVar9);
          piVar7 = apiStack_174[2];
        }
      }
      if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
        **(undefined4 **)(param_1 + 0x2c) = piVar7;
      }
    }
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 4;
    (**(code **)(*piVar7 + 0xc))(param_2);
    iStack_c = -1;
    if (0xf < uStack_148) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(auStack_15c[0]);
    }
  } while( true );
}

