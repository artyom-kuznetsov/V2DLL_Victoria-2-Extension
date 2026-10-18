// FUN_00b1da60 @ 00b1da60 body=[[00b1da60, 00b1da7f]]


float10 FUN_00b1da60(void)

{
  double dVar1;
  int in_ECX;
  float10 fVar2;
  
  QueryPerformanceCounter((LARGE_INTEGER *)(in_ECX + 0x10));
  fVar2 = (float10)(longlong)*(LARGE_INTEGER *)(in_ECX + 0x10) * (float10)*(double *)(in_ECX + 0x18)
  ;
  dVar1 = *(double *)(in_ECX + 0x28);
  *(double *)(in_ECX + 0x28) = (double)fVar2;
  return fVar2 - (float10)dVar1;
}

