// FUN_00b1da80 @ 00b1da80 body=[[00b1da80, 00b1dacb]]


void FUN_00b1da80(void)

{
  LARGE_INTEGER *lpPerformanceCount;
  LARGE_INTEGER *in_ECX;
  
  in_ECX[3].QuadPart = 0.0;
  in_ECX[4].QuadPart = 0.0;
  lpPerformanceCount = in_ECX + 1;
  in_ECX[5].QuadPart = 0.0;
  (in_ECX->s).LowPart = 0;
  (in_ECX->s).HighPart = 0;
  (lpPerformanceCount->s).LowPart = 0;
  *(undefined4 *)((int)in_ECX + 0xc) = 0;
  QueryPerformanceFrequency(in_ECX);
  QueryPerformanceCounter(lpPerformanceCount);
  in_ECX[3].QuadPart = 1.0 / (double)(longlong)*(_struct_19 *)in_ECX;
  QueryPerformanceCounter(lpPerformanceCount);
  in_ECX[4].QuadPart = (double)(longlong)*lpPerformanceCount * in_ECX[3].QuadPart;
  in_ECX[5].QuadPart = (double)(longlong)*lpPerformanceCount * in_ECX[3].QuadPart;
  return;
}

