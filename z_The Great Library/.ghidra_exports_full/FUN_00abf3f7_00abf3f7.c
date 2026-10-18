// __unlock_fhandle @ 00abf3f7 body=[[00abf3f7, 00abf41d]]


/* Library Function - Single Match
    __unlock_fhandle
   
   Library: Visual Studio 2010 Release */

void __cdecl __unlock_fhandle(int _Filehandle)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_013f3ae0)[_Filehandle >> 5] + 0xc + (_Filehandle & 0x1fU) * 0x40));
  return;
}

