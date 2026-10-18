// FUN_00ad27d0 @ 00ad27d0 body=[[00ad27d0, 00ad28fc]]


void FUN_00ad27d0(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *in_ECX;
  
  fVar1 = *in_ECX;
  fVar2 = in_ECX[1];
  fVar3 = in_ECX[2];
  *in_ECX = param_1[8] * fVar3 + *param_1 * fVar1 + param_1[4] * fVar2;
  in_ECX[1] = param_1[9] * fVar3 + fVar1 * param_1[1] + fVar2 * param_1[5];
  in_ECX[2] = fVar3 * param_1[10] + param_1[6] * fVar2 + param_1[2] * fVar1;
  fVar1 = in_ECX[4];
  fVar2 = in_ECX[5];
  fVar3 = in_ECX[6];
  in_ECX[4] = param_1[8] * fVar3 + *param_1 * fVar1 + param_1[4] * fVar2;
  in_ECX[5] = param_1[9] * fVar3 + fVar1 * param_1[1] + fVar2 * param_1[5];
  in_ECX[6] = fVar3 * param_1[10] + param_1[6] * fVar2 + param_1[2] * fVar1;
  fVar1 = in_ECX[8];
  fVar2 = in_ECX[9];
  fVar3 = in_ECX[10];
  in_ECX[8] = param_1[8] * fVar3 + *param_1 * fVar1 + param_1[4] * fVar2;
  in_ECX[9] = param_1[9] * fVar3 + fVar1 * param_1[1] + fVar2 * param_1[5];
  in_ECX[10] = fVar3 * param_1[10] + param_1[6] * fVar2 + param_1[2] * fVar1;
  fVar1 = in_ECX[0xc];
  fVar2 = in_ECX[0xd];
  fVar3 = in_ECX[0xe];
  in_ECX[0xc] = param_1[8] * fVar3 + *param_1 * fVar1 + param_1[4] * fVar2;
  in_ECX[0xd] = param_1[9] * fVar3 + fVar1 * param_1[1] + fVar2 * param_1[5];
  in_ECX[0xe] = fVar3 * param_1[10] + param_1[6] * fVar2 + param_1[2] * fVar1;
  return;
}

