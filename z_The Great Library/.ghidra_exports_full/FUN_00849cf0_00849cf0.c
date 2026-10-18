// FUN_00849cf0 @ 00849cf0 body=[[00849cf0, 00849d0b]]


undefined4 FUN_00849cf0(void)

{
  int *in_ECX;
  float10 fVar1;
  
  fVar1 = (float10)(**(code **)(*in_ECX + 0xc))();
  if (fVar1 <= (float10)1e-06) {
    return 1;
  }
  return 0;
}

