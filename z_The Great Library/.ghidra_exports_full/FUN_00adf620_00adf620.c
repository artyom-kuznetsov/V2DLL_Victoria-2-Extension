// FUN_00adf620 @ 00adf620 body=[[00adf620, 00adf8a0]]


undefined2
FUN_00adf620(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
            float *param_6)

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
  float *in_ECX;
  
  fVar1 = *param_2 - *param_1;
  fVar4 = param_2[1] - param_1[1];
  fVar12 = param_2[2] - param_1[2];
  fVar13 = *param_3 - *param_1;
  fVar11 = param_3[1] - param_1[1];
  fVar6 = param_3[2] - param_1[2];
  fVar9 = in_ECX[3] - *in_ECX;
  fVar7 = in_ECX[4] - in_ECX[1];
  fVar10 = in_ECX[5] - in_ECX[2];
  fVar5 = fVar7 * fVar6 - fVar10 * fVar11;
  fVar8 = fVar10 * fVar13 - fVar6 * fVar9;
  fVar2 = fVar9 * fVar11 - fVar13 * fVar7;
  fVar3 = fVar2 * fVar12 + fVar5 * fVar1 + fVar8 * fVar4;
  if ((fVar3 <= -1e-05) || (1e-05 <= fVar3)) {
    fVar14 = *in_ECX - *param_1;
    fVar15 = in_ECX[1] - param_1[1];
    fVar16 = in_ECX[2] - param_1[2];
    fVar3 = 1.0 / fVar3;
    fVar2 = (fVar16 * fVar2 + fVar14 * fVar5 + fVar15 * fVar8) * fVar3;
    if (0.0 <= fVar2) {
      if (fVar2 <= 1.0) {
        fVar5 = fVar15 * fVar12 - fVar16 * fVar4;
        fVar8 = fVar16 * fVar1 - fVar14 * fVar12;
        fVar1 = fVar14 * fVar4 - fVar15 * fVar1;
        fVar4 = (fVar1 * fVar10 + fVar5 * fVar9 + fVar8 * fVar7) * fVar3;
        if (fVar4 < 0.0) {
          return 0;
        }
        if (1.0 < fVar2 + fVar4) {
          return 0;
        }
        fVar3 = (fVar1 * fVar6 + fVar8 * fVar11 + fVar5 * fVar13) * fVar3;
        if (fVar3 < 0.0) {
          return 0;
        }
        if (fVar3 <= 1.0) {
          if (param_5 != (float *)0x0) {
            *param_5 = fVar2;
          }
          if (param_6 != (float *)0x0) {
            *param_6 = fVar4;
          }
          if (param_4 == (float *)0x0) {
            return 1;
          }
          fVar1 = in_ECX[1];
          fVar2 = in_ECX[2];
          *param_4 = fVar9 * fVar3 + *in_ECX;
          param_4[1] = fVar1 + fVar7 * fVar3;
          param_4[2] = fVar2 + fVar10 * fVar3;
          return 1;
        }
      }
      return 0;
    }
  }
  return 0;
}

