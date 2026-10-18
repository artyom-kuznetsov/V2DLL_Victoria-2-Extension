// FUN_00ae45a0 @ 00ae45a0 body=[[00ae45a0, 00ae4968]]


void FUN_00ae45a0(float *param_1,float *param_2)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  float fVar4;
  float *pfVar5;
  float fVar6;
  float *pfVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  uint uVar13;
  undefined4 *puVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  float local_30;
  float local_28;
  uint local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00b37c7a;
  local_c = ExceptionList;
  uVar13 = DAT_00ef259c ^ (uint)&stack0xffffffbc;
  ExceptionList = &local_c;
  fVar4 = param_1[4];
  param_1[0xc] = 0.0;
  if (fVar4 == 0.0) {
    param_1[0xf] = 0.0;
  }
  else {
    param_1[0xf] = 3.4028235e+38;
    local_28 = 0.0;
    if (fVar4 != 0.0) {
      do {
        uVar15 = 0;
        pfVar5 = *(float **)((int)param_1[3] + (int)local_28 * 4);
        fVar12 = (*pfVar5 - *param_1) * (*pfVar5 - *param_1) +
                 (pfVar5[1] - param_1[1]) * (pfVar5[1] - param_1[1]) +
                 (pfVar5[2] - param_1[2]) * (pfVar5[2] - param_1[2]);
        if (fVar12 <= 1e-05) {
          fVar12 = 0.0;
        }
        else {
          fVar12 = SQRT(fVar12);
        }
        iVar17 = 0;
        local_18 = 0;
        fVar6 = param_1[8];
        local_4 = 0;
        local_30 = 0.0;
        if (fVar6 != 0.0) {
          do {
            piVar2 = (int *)((int)param_1[7] + (int)local_30 * 4);
            iVar16 = *piVar2;
            if (((pfVar5 == *(float **)(iVar16 + 0x10)) || (pfVar5 == *(float **)(iVar16 + 0x14)))
               || (pfVar5 == *(float **)(iVar16 + 0x18))) {
              uVar1 = local_18 + 1;
              if (uVar15 < uVar1) {
                uVar15 = local_18 + 2;
                if (uVar15 == 0) {
                  local_18 = 0;
                  uVar1 = local_18;
                  if (iVar17 != 0) {
                    (*(code *)PTR__free_00f01b10)(iVar17);
                    iVar17 = 0;
                  }
                }
                else if (iVar17 == 0) {
                  iVar17 = (*(code *)PTR_FUN_00f01b08)(uVar15 * 4,1,4,2,0,0xffffffff,uVar13);
                }
                else {
                  iVar17 = (*(code *)PTR_FUN_00f01b0c)(iVar17,uVar15 * 4);
                }
              }
              local_18 = uVar1;
              piVar3 = (int *)(iVar17 + -4 + local_18 * 4);
              if (piVar3 != (int *)0x0) {
                *piVar3 = *piVar2;
              }
            }
            local_30 = (float)((int)local_30 + 1);
          } while ((uint)local_30 < (uint)fVar6);
        }
        fVar11 = 0.0;
        local_30 = 0.0;
        if (fVar6 != 0.0) {
          do {
            fVar10 = 1.0;
            uVar15 = 0;
            if (3 < (int)local_18) {
              pfVar7 = *(float **)((int)param_1[7] + (int)local_30 * 4);
              iVar16 = (local_18 - 4 >> 2) + 1;
              puVar14 = (undefined4 *)(iVar17 + 8);
              uVar15 = iVar16 * 4;
              do {
                pfVar8 = (float *)puVar14[-2];
                fVar9 = (1.0 - (pfVar8[2] * pfVar7[2] + *pfVar8 * *pfVar7 + pfVar8[1] * pfVar7[1]))
                        * 0.5;
                if (fVar9 <= fVar10) {
                  fVar10 = fVar9;
                }
                pfVar8 = (float *)puVar14[-1];
                fVar9 = (1.0 - (pfVar8[2] * pfVar7[2] + *pfVar8 * *pfVar7 + pfVar8[1] * pfVar7[1]))
                        * 0.5;
                if (fVar9 <= fVar10) {
                  fVar10 = fVar9;
                }
                pfVar8 = (float *)*puVar14;
                fVar9 = (1.0 - (pfVar8[2] * pfVar7[2] + *pfVar8 * *pfVar7 + pfVar8[1] * pfVar7[1]))
                        * 0.5;
                if (fVar9 <= fVar10) {
                  fVar10 = fVar9;
                }
                pfVar8 = (float *)puVar14[1];
                fVar9 = (1.0 - (pfVar8[2] * pfVar7[2] + *pfVar8 * *pfVar7 + pfVar8[1] * pfVar7[1]))
                        * 0.5;
                if (fVar9 <= fVar10) {
                  fVar10 = fVar9;
                }
                puVar14 = puVar14 + 4;
                iVar16 = iVar16 + -1;
              } while (iVar16 != 0);
            }
            if (uVar15 < local_18) {
              pfVar7 = *(float **)((int)param_1[7] + (int)local_30 * 4);
              do {
                pfVar8 = *(float **)(iVar17 + uVar15 * 4);
                fVar9 = (1.0 - (pfVar8[2] * pfVar7[2] + *pfVar8 * *pfVar7 + pfVar8[1] * pfVar7[1]))
                        * 0.5;
                if (fVar9 <= fVar10) {
                  fVar10 = fVar9;
                }
                uVar15 = uVar15 + 1;
              } while (uVar15 < local_18);
            }
            if (fVar11 <= fVar10) {
              fVar11 = fVar10;
            }
            local_30 = (float)((int)local_30 + 1);
          } while ((uint)local_30 < (uint)fVar6);
        }
        if (local_18 != 2) {
          *(undefined1 *)(pfVar5 + 0x10) = 1;
          *(undefined1 *)(param_1 + 0x10) = 1;
        }
        fVar6 = (float)((int)param_1[0xe] + 1);
        if ((int)param_1[0xe] + 1 < 0) {
          fVar6 = fVar6 + 4.2949673e+09;
        }
        local_4 = 0xffffffff;
        fVar12 = fVar6 * param_2[2] + fVar11 * param_2[1] * *param_2 * fVar12;
        if (iVar17 != 0) {
          (*(code *)PTR__free_00f01b10)(iVar17);
        }
        if (fVar12 < param_1[0xf] != (fVar12 == param_1[0xf])) {
          fVar6 = *(float *)((int)param_1[3] + (int)local_28 * 4);
          param_1[0xf] = fVar12;
          param_1[0xc] = fVar6;
        }
        local_28 = (float)((int)local_28 + 1);
      } while ((uint)local_28 < (uint)fVar4);
    }
    if (*(char *)(param_1 + 0x10) != '\0') {
      param_1[0xf] = 3.4028235e+38 - 1.0 / (param_1[0xf] + 1.0);
    }
  }
  ExceptionList = local_c;
  return;
}

