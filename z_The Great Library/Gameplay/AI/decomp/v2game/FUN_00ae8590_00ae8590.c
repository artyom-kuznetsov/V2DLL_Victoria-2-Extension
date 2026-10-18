// FUN_00ae8590 @ 00ae8590 body=[[00ae8590, 00ae85e1]]


void FUN_00ae8590(float *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int in_ECX;
  
  sVar1 = *(short *)(in_ECX + 10);
  sVar2 = *(short *)(in_ECX + 0xc);
  sVar3 = *(short *)(in_ECX + 0xe);
  *param_1 = (float)(int)*(short *)(in_ECX + 8) * 3.051851e-05;
  param_1[1] = (float)(int)sVar1 * 3.051851e-05;
  param_1[2] = (float)(int)sVar2 * 3.051851e-05;
  param_1[3] = (float)(int)sVar3 * 3.051851e-05;
  return;
}

