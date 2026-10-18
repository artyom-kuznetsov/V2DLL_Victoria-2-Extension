// FUN_00b12f00 @ 00b12f00 body=[[00b12f00, 00b12f29]]


float10 FUN_00b12f00(float param_1)

{
  int in_ECX;
  float10 fVar1;
  
  fVar1 = (float10)*(float *)(in_ECX + 0xc) - (float10)*(float *)(in_ECX + 8);
  if ((float10)0 < ABS(fVar1)) {
    return ((float10)param_1 - (float10)*(float *)(in_ECX + 8)) / fVar1;
  }
  return (float10)0;
}

