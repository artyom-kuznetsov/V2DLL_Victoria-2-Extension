// FUN_00a42090 @ 00a42090 body=[[00a42090, 00a420cf]]


float10 FUN_00a42090(void)

{
  float fVar1;
  int *unaff_ESI;
  float10 fVar2;
  float10 fVar3;
  
  fVar1 = *(float *)(unaff_ESI[0x4f] + 0xdc);
  fVar2 = (float10)(**(code **)(*unaff_ESI + 0x178))();
  fVar3 = (float10)(**(code **)(*unaff_ESI + 0xa0))();
  return (float10)(float)(fVar3 * (float10)(double)fVar2 * (float10)fVar1);
}

