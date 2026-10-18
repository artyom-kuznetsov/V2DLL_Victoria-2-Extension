// FUN_00ad25a0 @ 00ad25a0 body=[[00ad25a0, 00ad269a]]


void FUN_00ad25a0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float *in_ECX;
  
  fVar1 = *param_1 * *param_1;
  fVar2 = param_1[1] * *param_1;
  fVar4 = param_1[1] * param_1[1];
  fVar5 = *param_1 * param_1[2];
  fVar7 = param_1[1] * param_1[2];
  fVar9 = param_1[2] * param_1[2];
  fVar8 = param_1[3] * *param_1;
  fVar6 = param_1[1] * param_1[3];
  fVar3 = param_1[3] * param_1[2];
  fVar10 = param_1[3] * param_1[3];
  *in_ECX = ((fVar1 - fVar4) - fVar9) + fVar10;
  in_ECX[1] = fVar3 + fVar2 + fVar2 + fVar3;
  in_ECX[2] = ((fVar5 - fVar6) + fVar5) - fVar6;
  in_ECX[3] = 0.0;
  in_ECX[4] = ((fVar2 - fVar3) + fVar2) - fVar3;
  in_ECX[5] = ((fVar4 - fVar1) - fVar9) + fVar10;
  in_ECX[6] = fVar8 + fVar7 + fVar7 + fVar8;
  in_ECX[7] = 0.0;
  in_ECX[8] = fVar6 + fVar5 + fVar5 + fVar6;
  in_ECX[9] = ((fVar7 - fVar8) + fVar7) - fVar8;
  in_ECX[10] = (fVar9 - (fVar4 + fVar1)) + fVar10;
  in_ECX[0xb] = 0.0;
  in_ECX[0xc] = *param_2;
  in_ECX[0xd] = param_2[1];
  in_ECX[0xe] = param_2[2];
  in_ECX[0xf] = 1.0;
  return;
}

