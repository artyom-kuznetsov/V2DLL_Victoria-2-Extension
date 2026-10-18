// FUN_00b1da20 @ 00b1da20 body=[[00b1da20, 00b1da3b]]


void FUN_00b1da20(void)

{
  double dVar1;
  int in_ECX;
  
  QueryPerformanceCounter((LARGE_INTEGER *)(in_ECX + 8));
  dVar1 = (double)(longlong)*(LARGE_INTEGER *)(in_ECX + 8) * *(double *)(in_ECX + 0x18);
  *(double *)(in_ECX + 0x20) = dVar1;
  *(double *)(in_ECX + 0x28) = dVar1;
  return;
}

