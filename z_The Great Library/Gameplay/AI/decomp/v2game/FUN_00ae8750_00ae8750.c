// FUN_00ae8750 @ 00ae8750 body=[[00ae8750, 00ae8893]]


void FUN_00ae8750(float *param_1,float param_2,float *param_3)

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
  int iVar12;
  
  iVar12 = 1;
  fVar4 = *param_1 - param_2;
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar5 = param_1[3] - param_2;
  fVar3 = param_1[4];
  param_2 = param_1[5] - param_2;
  fVar11 = param_2 * fVar5 - fVar3 * fVar3;
  fVar8 = ABS(fVar11);
  fVar10 = fVar3 * fVar2 - param_2 * fVar1;
  if (fVar8 < ABS(fVar10)) {
    iVar12 = 2;
    fVar8 = ABS(fVar10);
  }
  fVar9 = fVar3 * fVar1 - fVar5 * fVar2;
  if (fVar8 < ABS(fVar9)) {
    iVar12 = 3;
    fVar8 = ABS(fVar9);
  }
  fVar6 = param_2 * fVar4 - fVar2 * fVar2;
  fVar7 = ABS(fVar6);
  if (fVar8 < fVar7) {
    iVar12 = 2;
    fVar8 = fVar7;
  }
  fVar2 = fVar2 * fVar1 - fVar3 * fVar4;
  if (fVar8 < ABS(fVar2)) {
    iVar12 = 3;
    fVar8 = ABS(fVar2);
  }
  fVar1 = fVar5 * fVar4 - fVar1 * fVar1;
  if (ABS(fVar1) <= fVar8) {
    if (iVar12 == 1) {
      *param_3 = fVar11;
      param_3[1] = fVar10;
      param_3[2] = fVar9;
      return;
    }
    if (iVar12 == 2) {
      *param_3 = fVar10;
      param_3[1] = fVar6;
      param_3[2] = fVar2;
      return;
    }
  }
  *param_3 = fVar9;
  param_3[1] = fVar2;
  param_3[2] = fVar1;
  return;
}

