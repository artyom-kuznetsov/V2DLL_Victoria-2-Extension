// FUN_00b16840 @ 00b16840 body=[[00b16840, 00b168b1]]


void FUN_00b16840(float *param_1,float *param_2)

{
  float fVar1;
  
  fVar1 = SQRT(param_1[2] * param_1[2] + *param_1 * *param_1 + param_1[1] * param_1[1]);
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  if (param_1[2] < 0.0) {
    fVar1 = -fVar1;
  }
  fVar1 = fVar1 + param_1[2];
  param_2[2] = fVar1;
  fVar1 = SQRT(2.0 / (*param_2 * *param_2 + param_2[1] * param_2[1] + fVar1 * fVar1));
  *param_2 = *param_2 * fVar1;
  param_2[1] = param_2[1] * fVar1;
  param_2[2] = fVar1 * param_2[2];
  return;
}

