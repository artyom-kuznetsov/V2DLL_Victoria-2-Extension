// FUN_00b11230 @ 00b11230 body=[[00b11230, 00b11286]]


float10 FUN_00b11230(float param_1,float param_2,float param_3)

{
  int in_ECX;
  float10 fVar1;
  float10 fVar2;
  
  fVar2 = (float10)param_3 * (float10)*(float *)(in_ECX + 0x60) * (float10)param_2;
  fVar1 = (float10)param_2 * (float10)*(float *)(in_ECX + 0x60) - fVar2;
  if (fVar1 < (float10)1e-05) {
    return (float10)0;
  }
  fVar1 = (float10)fcos((((float10)param_1 - fVar2) / fVar1) * (float10)3.1415927);
  fVar1 = ((float10)1 - fVar1) * (float10)0.5;
  return ((float10)1 - fVar1) * (float10)0.0 + fVar1;
}

