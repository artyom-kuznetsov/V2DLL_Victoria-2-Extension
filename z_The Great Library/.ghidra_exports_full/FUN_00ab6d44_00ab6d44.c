// __calloc_crt @ 00ab6d44 body=[[00ab6d44, 00ab6d8f]]


/* Library Function - Single Match
    __calloc_crt
   
   Library: Visual Studio 2010 Release */

void * __cdecl __calloc_crt(size_t _Count,size_t _Size)

{
  void *pvVar1;
  uint dwMilliseconds;
  
  dwMilliseconds = 0;
  while( true ) {
    pvVar1 = (void *)__calloc_impl(_Count,_Size,0);
    if (pvVar1 != (void *)0x0) {
      return pvVar1;
    }
    if (DAT_00f1fc78 == 0) break;
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_00f1fc78 < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
    if (dwMilliseconds == 0xffffffff) {
      return (void *)0x0;
    }
  }
  return (void *)0x0;
}

