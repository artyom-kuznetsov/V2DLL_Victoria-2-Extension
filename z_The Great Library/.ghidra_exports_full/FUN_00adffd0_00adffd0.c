// FUN_00adffd0 @ 00adffd0 body=[[00adffd0, 00ae0014]]


void FUN_00adffd0(float *param_1,float *param_2,float *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar5 = 1.0 - param_4;
  fVar3 = param_2[1];
  fVar4 = param_2[2];
  *param_1 = *param_2 * fVar5 + *param_3 * param_4;
  param_1[1] = fVar3 * fVar5 + fVar1 * param_4;
  param_1[2] = fVar2 * param_4 + fVar4 * fVar5;
  return;
}

