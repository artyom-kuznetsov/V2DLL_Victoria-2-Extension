// FUN_00add0c0 @ 00add0c0 body=[[00add0c0, 00add215]]


void FUN_00add0c0(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                 float *param_6,float *param_7,float *param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  *param_7 = 0.0;
  param_7[1] = 0.0;
  param_7[2] = 0.0;
  if (param_8 != (float *)0x0) {
    *param_8 = 0.0;
    param_8[1] = 0.0;
    param_8[2] = 0.0;
  }
  fVar1 = *param_2;
  fVar2 = *param_1;
  fVar3 = *param_3;
  fVar4 = *param_1;
  fVar5 = param_2[1];
  fVar6 = param_1[1];
  fVar7 = param_3[1];
  fVar8 = param_1[1];
  fVar9 = param_2[2];
  fVar10 = param_1[2];
  fVar11 = param_3[2];
  fVar12 = param_1[2];
  fVar17 = *param_5 - *param_4;
  fVar14 = *param_6 - *param_4;
  fVar16 = param_5[1] - param_4[1];
  fVar15 = param_6[1] - param_4[1];
  fVar13 = fVar15 * fVar17 - fVar16 * fVar14;
  if (1e-05 <= ABS(fVar13)) {
    fVar13 = 1.0 / fVar13;
  }
  else {
    fVar13 = 1.0;
  }
  *param_7 = (fVar15 * (fVar1 - fVar2) - fVar16 * (fVar3 - fVar4)) * fVar13;
  param_7[1] = (fVar15 * (fVar5 - fVar6) - fVar16 * (fVar7 - fVar8)) * fVar13;
  param_7[2] = (fVar15 * (fVar9 - fVar10) - fVar16 * (fVar11 - fVar12)) * fVar13;
  if (param_8 == (float *)0x0) {
    return;
  }
  *param_8 = (fVar17 * (fVar3 - fVar4) - fVar14 * (fVar1 - fVar2)) * fVar13;
  param_8[1] = (fVar17 * (fVar7 - fVar8) - fVar14 * (fVar5 - fVar6)) * fVar13;
  param_8[2] = (fVar17 * (fVar11 - fVar12) - fVar14 * (fVar9 - fVar10)) * fVar13;
  return;
}

