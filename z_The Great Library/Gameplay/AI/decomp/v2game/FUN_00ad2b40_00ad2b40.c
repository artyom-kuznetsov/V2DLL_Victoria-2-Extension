// FUN_00ad2b40 @ 00ad2b40 body=[[00ad2b40, 00ad2e6a]]


void FUN_00ad2b40(float *param_1)

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
  float fVar11;
  float *in_ECX;
  
  fVar1 = in_ECX[0x10];
  fVar6 = *in_ECX * fVar1;
  fVar9 = in_ECX[1] * fVar1;
  fVar1 = fVar1 * in_ECX[2];
  fVar2 = in_ECX[0x11];
  fVar7 = in_ECX[4] * fVar2;
  fVar8 = in_ECX[5] * fVar2;
  fVar2 = fVar2 * in_ECX[6];
  fVar3 = in_ECX[0x12];
  fVar10 = fVar3 * in_ECX[8];
  fVar11 = in_ECX[9] * fVar3;
  fVar3 = fVar3 * in_ECX[10];
  fVar4 = in_ECX[0x14];
  fVar5 = in_ECX[0x15];
  *param_1 = ((in_ECX[0x13] - fVar6) - fVar7) - fVar10;
  param_1[1] = ((fVar4 - fVar9) - fVar8) - fVar11;
  param_1[2] = ((fVar5 - fVar1) - fVar2) - fVar3;
  fVar4 = in_ECX[0x14];
  fVar5 = in_ECX[0x15];
  param_1[3] = ((fVar6 + in_ECX[0x13]) - fVar7) - fVar10;
  param_1[4] = ((fVar9 + fVar4) - fVar8) - fVar11;
  param_1[5] = ((fVar1 + fVar5) - fVar2) - fVar3;
  fVar4 = in_ECX[0x14];
  fVar5 = in_ECX[0x15];
  param_1[6] = (fVar6 + in_ECX[0x13] + fVar7) - fVar10;
  param_1[7] = (fVar9 + fVar4 + fVar8) - fVar11;
  param_1[8] = (fVar1 + fVar5 + fVar2) - fVar3;
  fVar4 = in_ECX[0x14];
  fVar5 = in_ECX[0x15];
  param_1[9] = ((in_ECX[0x13] - fVar6) + fVar7) - fVar10;
  param_1[10] = ((fVar4 - fVar9) + fVar8) - fVar11;
  param_1[0xb] = ((fVar5 - fVar1) + fVar2) - fVar3;
  fVar4 = in_ECX[0x14];
  fVar5 = in_ECX[0x15];
  param_1[0xc] = ((in_ECX[0x13] - fVar6) - fVar7) + fVar10;
  param_1[0xd] = ((fVar4 - fVar9) - fVar8) + fVar11;
  param_1[0xe] = ((fVar5 - fVar1) - fVar2) + fVar3;
  fVar4 = in_ECX[0x14];
  fVar5 = in_ECX[0x15];
  param_1[0xf] = ((fVar6 + in_ECX[0x13]) - fVar7) + fVar10;
  param_1[0x10] = ((fVar9 + fVar4) - fVar8) + fVar11;
  param_1[0x11] = ((fVar1 + fVar5) - fVar2) + fVar3;
  fVar4 = in_ECX[0x14];
  fVar5 = in_ECX[0x15];
  param_1[0x12] = fVar6 + in_ECX[0x13] + fVar7 + fVar10;
  param_1[0x13] = fVar9 + fVar4 + fVar8 + fVar11;
  param_1[0x14] = fVar1 + fVar5 + fVar2 + fVar3;
  fVar4 = in_ECX[0x14];
  fVar5 = in_ECX[0x15];
  param_1[0x15] = (in_ECX[0x13] - fVar6) + fVar7 + fVar10;
  param_1[0x16] = (fVar4 - fVar9) + fVar8 + fVar11;
  param_1[0x17] = (fVar5 - fVar1) + fVar2 + fVar3;
  return;
}

