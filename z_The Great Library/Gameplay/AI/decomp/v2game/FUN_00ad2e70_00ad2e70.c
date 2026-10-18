// FUN_00ad2e70 @ 00ad2e70 body=[[00ad2e70, 00ad2eeb]]


void FUN_00ad2e70(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *in_ECX;
  
  fVar3 = in_ECX[8] * in_ECX[0x12] + *in_ECX * in_ECX[0x10] + in_ECX[4] * in_ECX[0x11];
  fVar4 = in_ECX[9] * in_ECX[0x12] + in_ECX[1] * in_ECX[0x10] + in_ECX[5] * in_ECX[0x11];
  fVar5 = in_ECX[10] * in_ECX[0x12] + in_ECX[2] * in_ECX[0x10] + in_ECX[6] * in_ECX[0x11];
  fVar1 = in_ECX[0x14];
  fVar2 = in_ECX[0x15];
  *param_2 = in_ECX[0x13] + fVar3;
  param_2[1] = fVar1 + fVar4;
  param_2[2] = fVar2 + fVar5;
  fVar1 = in_ECX[0x14];
  fVar2 = in_ECX[0x15];
  *param_1 = in_ECX[0x13] - fVar3;
  param_1[1] = fVar1 - fVar4;
  param_1[2] = fVar2 - fVar5;
  return;
}

