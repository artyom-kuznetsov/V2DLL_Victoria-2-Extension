// FUN_00b03fe0 @ 00b03fe0 body=[[00b03fe0, 00b04070]]


void FUN_00b03fe0(float param_1)

{
  short *psVar1;
  undefined4 *in_ECX;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  if (*(ushort *)(in_ECX + 1) != 0) {
    psVar1 = (short *)*in_ECX;
    local_10 = (float)(int)*psVar1 * 3.051851e-05;
    local_c = (float)(int)psVar1[1] * 3.051851e-05;
    local_8 = (float)(int)psVar1[2] * 3.051851e-05;
    local_4 = (float)(int)psVar1[3] * 3.051851e-05;
    FUN_00b03eb0(*(float *)(psVar1 + (uint)*(ushort *)(in_ECX + 1) * 6 + -2) + param_1,&local_10);
    FUN_00b006b0();
  }
  return;
}

