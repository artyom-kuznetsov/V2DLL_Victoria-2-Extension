// FUN_00b16e20 @ 00b16e20 body=[[00b16e20, 00b16fbf]]


float * FUN_00b16e20(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  
  fVar2 = param_2[10] + *param_2 + param_2[5];
  if (NAN(fVar2) || 0.0 < fVar2 == (fVar2 == 0.0)) {
    uVar3 = (uint)(*param_2 < param_2[5]);
    if (param_2[uVar3 * 5] < param_2[10]) {
      uVar3 = 2;
    }
    if (uVar3 == 0) {
      fVar2 = SQRT((*param_2 - (param_2[10] + param_2[5])) + param_2[0xf]);
      *param_1 = fVar2 * 0.5;
      fVar2 = 0.5 / fVar2;
      param_1[1] = (param_2[4] + param_2[1]) * fVar2;
      param_1[2] = (param_2[8] + param_2[2]) * fVar2;
      param_1[3] = (param_2[9] - param_2[6]) * fVar2;
    }
    else if (uVar3 == 1) {
      fVar2 = SQRT((param_2[5] - (param_2[10] + *param_2)) + param_2[0xf]);
      param_1[1] = fVar2 * 0.5;
      fVar2 = 0.5 / fVar2;
      param_1[2] = (param_2[9] + param_2[6]) * fVar2;
      *param_1 = (param_2[4] + param_2[1]) * fVar2;
      param_1[3] = (param_2[2] - param_2[8]) * fVar2;
    }
    else if (uVar3 == 2) {
      fVar2 = SQRT((param_2[10] - (*param_2 + param_2[5])) + param_2[0xf]);
      param_1[2] = fVar2 * 0.5;
      fVar2 = 0.5 / fVar2;
      *param_1 = (param_2[8] + param_2[2]) * fVar2;
      param_1[1] = (param_2[9] + param_2[6]) * fVar2;
      param_1[3] = (param_2[4] - param_2[1]) * fVar2;
    }
  }
  else {
    fVar1 = param_2[0xf];
    param_1[3] = SQRT(fVar2 + fVar1) * 0.5;
    fVar2 = 0.5 / SQRT(fVar2 + fVar1);
    *param_1 = (param_2[9] - param_2[6]) * fVar2;
    param_1[1] = (param_2[2] - param_2[8]) * fVar2;
    param_1[2] = (param_2[4] - param_2[1]) * fVar2;
  }
  if (param_2[0xf] != 1.0) {
    fVar2 = 1.0 / SQRT(param_2[0xf]);
    *param_1 = *param_1 * fVar2;
    param_1[1] = fVar2 * param_1[1];
    param_1[2] = param_1[2] * fVar2;
    param_1[3] = param_1[3] * fVar2;
    return param_1;
  }
  return param_1;
}

