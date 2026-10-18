// FUN_00b16970 @ 00b16970 body=[[00b16970, 00b16a10]]


void FUN_00b16970(float *param_1,float *param_2)

{
  float fVar1;
  
  fVar1 = param_2[2] * param_1[2] + param_2[1] * param_1[1] + *param_1 * *param_2;
  *param_1 = *param_1 - *param_2 * fVar1;
  param_1[1] = param_1[1] - param_2[1] * fVar1;
  param_1[2] = param_1[2] - fVar1 * param_2[2];
  fVar1 = param_1[6] * param_2[2] + *param_2 * param_1[4] + param_1[5] * param_2[1];
  param_1[4] = param_1[4] - *param_2 * fVar1;
  param_1[5] = param_1[5] - param_2[1] * fVar1;
  param_1[6] = param_1[6] - fVar1 * param_2[2];
  fVar1 = param_1[10] * param_2[2] + *param_2 * param_1[8] + param_1[9] * param_2[1];
  param_1[8] = param_1[8] - *param_2 * fVar1;
  param_1[9] = param_1[9] - param_2[1] * fVar1;
  param_1[10] = param_1[10] - fVar1 * param_2[2];
  return;
}

