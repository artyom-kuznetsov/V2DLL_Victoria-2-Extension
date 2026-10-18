// FUN_00ae88a0 @ 00ae88a0 body=[[00ae88a0, 00ae8a63]]


void FUN_00ae88a0(float *param_1,float param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  
  fVar4 = *param_1 - param_2;
  iVar6 = 1;
  fVar1 = ABS(fVar4);
  if (fVar1 < ABS(param_1[1])) {
    iVar6 = 2;
    fVar1 = ABS(param_1[1]);
  }
  if (fVar1 < ABS(param_1[2])) {
    iVar6 = 3;
    fVar1 = ABS(param_1[2]);
  }
  iVar5 = 1;
  fVar2 = param_1[3] - param_2;
  if (fVar1 < ABS(fVar2)) {
    iVar5 = 2;
    iVar6 = 2;
    fVar1 = ABS(fVar2);
  }
  if (fVar1 < ABS(param_1[4])) {
    iVar5 = 2;
    iVar6 = 3;
    fVar1 = ABS(param_1[4]);
  }
  param_2 = param_1[5] - param_2;
  if (ABS(param_2) <= fVar1) {
    if (iVar5 == 1) {
      if (iVar6 != 3) {
        *param_3 = -param_1[1];
        param_3[1] = fVar4;
        param_3[2] = 0.0;
        fVar1 = param_1[1];
        fVar2 = param_1[2];
        fVar3 = param_1[1];
        *param_4 = -(fVar4 * param_1[2]);
        param_4[1] = -(fVar1 * fVar2);
        param_4[2] = fVar4 * fVar4 + fVar3 * fVar3;
        return;
      }
      *param_3 = param_1[2];
      param_3[1] = 0.0;
      param_3[2] = -fVar4;
      fVar1 = param_1[2];
      fVar2 = param_1[1];
      fVar3 = param_1[2];
      *param_4 = -(param_1[1] * fVar4);
      param_4[1] = fVar4 * fVar4 + fVar1 * fVar1;
      param_4[2] = -(fVar2 * fVar3);
      return;
    }
    if (iVar5 == 2) {
      fVar4 = param_1[4];
      *param_3 = 0.0;
      param_3[1] = -fVar4;
      param_3[2] = fVar2;
      fVar4 = param_1[1];
      fVar1 = param_1[1];
      fVar3 = param_1[4];
      *param_4 = param_1[4] * param_1[4] + fVar2 * fVar2;
      param_4[1] = -(fVar4 * fVar2);
      param_4[2] = -(fVar1 * fVar3);
      return;
    }
    if (iVar5 != 3) {
      return;
    }
  }
  fVar4 = param_1[4];
  *param_3 = 0.0;
  param_3[1] = -param_2;
  param_3[2] = fVar4;
  fVar4 = param_1[4];
  fVar1 = param_1[2];
  fVar2 = param_1[2];
  *param_4 = param_1[4] * param_1[4] + param_2 * param_2;
  param_4[1] = -(fVar4 * fVar1);
  param_4[2] = -(param_2 * fVar2);
  return;
}

