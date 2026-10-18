// FUN_00ae8530 @ 00ae8530 body=[[00ae8530, 00ae8581]]


void FUN_00ae8530(float *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int in_ECX;
  
  sVar1 = *(short *)(in_ECX + 0x32);
  sVar2 = *(short *)(in_ECX + 0x34);
  sVar3 = *(short *)(in_ECX + 0x36);
  *param_1 = (float)(int)*(short *)(in_ECX + 0x30) * 3.051851e-05;
  param_1[1] = (float)(int)sVar1 * 3.051851e-05;
  param_1[2] = (float)(int)sVar2 * 3.051851e-05;
  param_1[3] = (float)(int)sVar3 * 3.051851e-05;
  return;
}

