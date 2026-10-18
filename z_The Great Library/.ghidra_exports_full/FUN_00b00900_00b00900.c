// FUN_00b00900 @ 00b00900 body=[[00b00900, 00b00950]]


void FUN_00b00900(float *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short *in_ECX;
  
  sVar1 = in_ECX[1];
  sVar2 = in_ECX[2];
  sVar3 = in_ECX[3];
  *param_1 = (float)(int)*in_ECX * 3.051851e-05;
  param_1[1] = (float)(int)sVar1 * 3.051851e-05;
  param_1[2] = (float)(int)sVar2 * 3.051851e-05;
  param_1[3] = (float)(int)sVar3 * 3.051851e-05;
  return;
}

