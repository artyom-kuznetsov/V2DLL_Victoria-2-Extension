// FUN_00b1eb70 @ 00b1eb70 body=[[00b1eb70, 00b1ebe9]]


void FUN_00b1eb70(float *param_1,float *param_2,float param_3,int *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  float fVar8;
  
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = param_1[3];
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar6 = param_2[3];
  pfVar7 = (float *)*param_4;
  fVar8 = 1.0 - param_3;
  *pfVar7 = *param_1 * fVar8 + *param_2 * param_3;
  pfVar7[1] = fVar1 * fVar8 + fVar4 * param_3;
  pfVar7[2] = fVar2 * fVar8 + fVar5 * param_3;
  pfVar7[3] = fVar8 * fVar3 + fVar6 * param_3;
  return;
}

