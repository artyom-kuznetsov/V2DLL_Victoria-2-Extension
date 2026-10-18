// __time64 @ 00ab231d body=[[00ab231d, 00ab236d]]


/* WARNING: Removing unreachable block (ram,0x00ab2354) */
/* Library Function - Single Match
    __time64
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

__time64_t __cdecl __time64(__time64_t *_Time)

{
  longlong lVar1;
  _FILETIME local_c;
  
  GetSystemTimeAsFileTime(&local_c);
  lVar1 = __aulldiv(local_c.dwLowDateTime + 0x2ac18000,
                    local_c.dwHighDateTime + 0xfe624e21 + (uint)(0xd53e7fff < local_c.dwLowDateTime)
                    ,10000000,0);
  if (0x793406fff < lVar1) {
    lVar1 = -1;
  }
  if (_Time != (__time64_t *)0x0) {
    *_Time = lVar1;
  }
  return lVar1;
}

