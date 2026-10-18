// __recalloc_crt @ 00ab6dde body=[[00ab6dde, 00ab6e2f]]


/* Library Function - Single Match
    __recalloc_crt
   
   Library: Visual Studio 2010 Release */

void * __cdecl __recalloc_crt(void *_Ptr,size_t _Count,size_t _Size)

{
  void *pvVar1;
  uint dwMilliseconds;
  
  dwMilliseconds = 0;
  do {
    pvVar1 = __recalloc(_Ptr,_Count,_Size);
    if (pvVar1 != (void *)0x0) {
      return pvVar1;
    }
    if (_Size == 0) {
      return (void *)0x0;
    }
    if (DAT_00f1fc78 == 0) {
      return (void *)0x0;
    }
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_00f1fc78 < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
  } while (dwMilliseconds != 0xffffffff);
  return (void *)0x0;
}

