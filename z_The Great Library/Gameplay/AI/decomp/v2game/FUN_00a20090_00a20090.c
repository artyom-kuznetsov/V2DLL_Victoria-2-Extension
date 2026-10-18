// FUN_00a20090 @ 00a20090 body=[[00a20090, 00a20110]]


void FUN_00a20090(float *param_1,undefined4 param_2)

{
  int in_ECX;
  
  *param_1 = (float)*(ushort *)(in_ECX + 0x104) * 0.5 + *(float *)(in_ECX + 0xc4);
  param_1[1] = ((*(float *)(in_ECX + 200) - (float)*(ushort *)(in_ECX + 0x106) * 0.5) +
               (float)(int)(short)((uint)param_2 >> 0x10)) * -1.0;
  return;
}

