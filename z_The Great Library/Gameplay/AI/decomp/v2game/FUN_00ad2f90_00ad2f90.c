// FUN_00ad2f90 @ 00ad2f90 body=[[00ad2f90, 00ad3008]]


void FUN_00ad2f90(float *param_1,float param_2,float param_3,float *param_4,float *param_5,
                 float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = param_6[1];
  fVar2 = param_6[2];
  fVar3 = param_5[1];
  fVar4 = param_5[2];
  fVar7 = (1.0 - param_2) - param_3;
  fVar5 = param_4[1];
  fVar6 = param_4[2];
  *param_1 = *param_4 * fVar7 + *param_5 * param_2 + *param_6 * param_3;
  param_1[1] = fVar3 * param_2 + fVar5 * fVar7 + fVar1 * param_3;
  param_1[2] = fVar2 * param_3 + fVar6 * fVar7 + fVar4 * param_2;
  return;
}

