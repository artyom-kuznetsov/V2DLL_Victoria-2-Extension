// FUN_00b19a30 @ 00b19a30 body=[[00b19a30, 00b19aa6]]


undefined4 FUN_00b19a30(void)

{
  float fVar1;
  float *in_ECX;
  
  fVar1 = (*in_ECX * in_ECX[5] - in_ECX[4] * in_ECX[1]) * in_ECX[10] +
          (in_ECX[6] * in_ECX[1] - in_ECX[2] * in_ECX[5]) * in_ECX[8] +
          (in_ECX[4] * in_ECX[2] - *in_ECX * in_ECX[6]) * in_ECX[9];
  if (fVar1 < 0.0 != (fVar1 == 0.0)) {
    return 1;
  }
  return 0;
}

