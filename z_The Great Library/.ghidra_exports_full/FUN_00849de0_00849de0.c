// FUN_00849de0 @ 00849de0 body=[[00849de0, 00849e06]]


undefined4 FUN_00849de0(void)

{
  int *in_ECX;
  float10 fVar1;
  
  fVar1 = (float10)(**(code **)(*in_ECX + 0xc))();
  if ((fVar1 <= (float10)1e-06) && (in_ECX[5] == 0)) {
    return 1;
  }
  return 0;
}

