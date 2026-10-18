// FUN_00adff20 @ 00adff20 body=[[00adff20, 00adffc0]]


void FUN_00adff20(float *param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *in_ECX;
  
  fVar1 = 1.0 - param_3;
  if (param_2[3] * in_ECX[3] + param_2[2] * in_ECX[2] + param_2[1] * in_ECX[1] + *param_2 * *in_ECX
      < 0.0) {
    param_3 = -param_3;
  }
  fVar5 = *in_ECX * fVar1 + *param_2 * param_3;
  fVar3 = fVar1 * in_ECX[1] + param_2[1] * param_3;
  fVar4 = in_ECX[2] * fVar1 + param_2[2] * param_3;
  fVar1 = param_2[3] * param_3 + in_ECX[3] * fVar1;
  fVar2 = 1.0 / SQRT(fVar1 * fVar1 + fVar4 * fVar4 + fVar5 * fVar5 + fVar3 * fVar3);
  *param_1 = fVar2 * fVar5;
  param_1[1] = fVar3 * fVar2;
  param_1[2] = fVar4 * fVar2;
  param_1[3] = fVar1 * fVar2;
  return;
}

