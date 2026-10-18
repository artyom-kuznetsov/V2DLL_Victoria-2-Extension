// FUN_00aeba70 @ 00aeba70 body=[[00aeba70, 00aebb3f]]


void FUN_00aeba70(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *in_ECX;
  
  fVar3 = (param_1[2] * in_ECX[0xd] + *param_1 * in_ECX[0xb] + in_ECX[0xc] * param_1[1]) * 2.0;
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  in_ECX[0xb] = in_ECX[0xb] - *param_1 * fVar3;
  in_ECX[0xc] = in_ECX[0xc] - fVar1 * fVar3;
  in_ECX[0xd] = in_ECX[0xd] - fVar2 * fVar3;
  fVar3 = (param_1[2] * in_ECX[2] + *param_1 * *in_ECX + param_1[1] * in_ECX[1]) * 2.0;
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  *in_ECX = *in_ECX - *param_1 * fVar3;
  in_ECX[1] = in_ECX[1] - fVar1 * fVar3;
  in_ECX[2] = in_ECX[2] - fVar3 * fVar2;
  in_ECX[3] = -in_ECX[3];
  fVar3 = (param_1[2] * in_ECX[6] + *param_1 * in_ECX[4] + param_1[1] * in_ECX[5]) * 2.0;
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  in_ECX[4] = in_ECX[4] - *param_1 * fVar3;
  in_ECX[5] = in_ECX[5] - fVar1 * fVar3;
  in_ECX[6] = in_ECX[6] - fVar2 * fVar3;
  in_ECX[7] = -in_ECX[7];
  return;
}

