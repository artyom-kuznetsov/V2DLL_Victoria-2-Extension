// FUN_00b1da40 @ 00b1da40 body=[[00b1da40, 00b1da58]]


float10 FUN_00b1da40(void)

{
  int in_ECX;
  
  QueryPerformanceCounter((LARGE_INTEGER *)(in_ECX + 0x10));
  return (float10)(longlong)*(LARGE_INTEGER *)(in_ECX + 0x10) * (float10)*(double *)(in_ECX + 0x18)
         - (float10)*(double *)(in_ECX + 0x20);
}

