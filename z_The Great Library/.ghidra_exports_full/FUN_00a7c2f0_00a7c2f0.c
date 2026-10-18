// FUN_00a7c2f0 @ 00a7c2f0 body=[[00a7c2f0, 00a7c362]]


void FUN_00a7c2f0(float *param_1)

{
  int in_ECX;
  
  *param_1 = (float)*(ushort *)(in_ECX + 0x104) * 0.5 + *(float *)(in_ECX + 0xc4);
  param_1[1] = (*(float *)(in_ECX + 200) - (float)*(ushort *)(in_ECX + 0x106) * 0.5) * -1.0;
  return;
}

