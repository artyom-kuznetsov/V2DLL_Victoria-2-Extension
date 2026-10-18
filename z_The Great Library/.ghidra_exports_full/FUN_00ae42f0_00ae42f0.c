// FUN_00ae42f0 @ 00ae42f0 body=[[00ae42f0, 00ae4597]]


/* WARNING: Removing unreachable block (ram,0x00ae4572) */

float10 FUN_00ae42f0(float *param_1,float *param_2,float *param_3)

{
  int *piVar1;
  int *piVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  undefined4 *puVar7;
  uint uVar8;
  float fVar9;
  int iVar10;
  uint uVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00b37c57;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  fVar6 = (*param_2 - *param_1) * (*param_2 - *param_1) +
          (param_2[1] - param_1[1]) * (param_2[1] - param_1[1]) +
          (param_2[2] - param_1[2]) * (param_2[2] - param_1[2]);
  if (fVar6 <= 1e-05) {
    fVar6 = 0.0;
  }
  else {
    fVar6 = SQRT(fVar6);
  }
  uVar8 = 0;
  fVar3 = param_1[8];
  fVar9 = 0.0;
  local_4 = 0;
  uVar11 = uVar8;
  if (fVar3 != 0.0) {
    do {
      piVar1 = (int *)((int)param_1[7] + (int)fVar9 * 4);
      iVar10 = *piVar1;
      if (((param_2 == *(float **)(iVar10 + 0x10)) || (param_2 == *(float **)(iVar10 + 0x14))) ||
         (uVar8 = uVar11, param_2 == *(float **)(iVar10 + 0x18))) {
        uVar8 = uVar11 + 1;
        if (uVar8 != 0) {
          FUN_00aeb6c0(uVar11 + 2);
        }
        piVar2 = (int *)(uVar8 * 4 + -4);
        if (piVar2 != (int *)0x0) {
          *piVar2 = *piVar1;
        }
      }
      fVar9 = (float)((int)fVar9 + 1);
      uVar11 = uVar8;
    } while ((uint)fVar9 < (uint)fVar3);
  }
  fVar15 = (float10)0;
  fVar9 = 0.0;
  if (fVar3 != 0.0) {
    fVar16 = (float10)1;
    fVar12 = (float10)0.5;
    do {
      uVar11 = 0;
      fVar14 = fVar16;
      if (3 < (int)uVar8) {
        pfVar4 = *(float **)((int)param_1[7] + (int)fVar9 * 4);
        puVar7 = (undefined4 *)&DAT_00000008;
        iVar10 = (uVar8 - 4 >> 2) + 1;
        uVar11 = iVar10 * 4;
        do {
          pfVar5 = (float *)puVar7[-2];
          fVar13 = (fVar16 - ((float10)pfVar5[2] * (float10)pfVar4[2] +
                             (float10)*pfVar5 * (float10)*pfVar4 +
                             (float10)pfVar5[1] * (float10)pfVar4[1])) * fVar12;
          if (fVar13 <= fVar14) {
            fVar14 = fVar13;
          }
          pfVar5 = (float *)puVar7[-1];
          fVar13 = (fVar16 - ((float10)pfVar5[2] * (float10)pfVar4[2] +
                             (float10)*pfVar5 * (float10)*pfVar4 +
                             (float10)pfVar5[1] * (float10)pfVar4[1])) * fVar12;
          if (fVar13 <= fVar14) {
            fVar14 = fVar13;
          }
          pfVar5 = (float *)*puVar7;
          fVar13 = (fVar16 - ((float10)pfVar5[2] * (float10)pfVar4[2] +
                             (float10)*pfVar5 * (float10)*pfVar4 +
                             (float10)pfVar5[1] * (float10)pfVar4[1])) * fVar12;
          if (fVar13 <= fVar14) {
            fVar14 = fVar13;
          }
          pfVar5 = (float *)puVar7[1];
          fVar13 = (fVar16 - ((float10)pfVar5[2] * (float10)pfVar4[2] +
                             (float10)*pfVar5 * (float10)*pfVar4 +
                             (float10)pfVar5[1] * (float10)pfVar4[1])) * fVar12;
          if (fVar13 <= fVar14) {
            fVar14 = fVar13;
          }
          puVar7 = puVar7 + 4;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
      if (uVar11 < uVar8) {
        pfVar4 = *(float **)((int)param_1[7] + (int)fVar9 * 4);
        do {
          pfVar5 = *(float **)(uVar11 * 4);
          fVar13 = (fVar16 - ((float10)pfVar5[2] * (float10)pfVar4[2] +
                             (float10)*pfVar5 * (float10)*pfVar4 +
                             (float10)pfVar5[1] * (float10)pfVar4[1])) * fVar12;
          if (fVar13 <= fVar14) {
            fVar14 = fVar13;
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar8);
      }
      if (fVar15 <= fVar14) {
        fVar15 = fVar14;
      }
      fVar9 = (float)((int)fVar9 + 1);
    } while ((uint)fVar9 < (uint)fVar3);
  }
  if (uVar8 != 2) {
    *(undefined1 *)(param_2 + 0x10) = 1;
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  fVar16 = (float10)((int)param_1[0xe] + 1);
  if ((int)param_1[0xe] + 1 < 0) {
    fVar16 = fVar16 + (float10)4.2949673e+09;
  }
  ExceptionList = local_c;
  return fVar16 * (float10)param_3[2] +
         (float10)*param_3 * (float10)fVar6 * fVar15 * (float10)param_3[1];
}

