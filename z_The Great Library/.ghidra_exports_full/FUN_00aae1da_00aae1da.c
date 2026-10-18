// _Atexit @ 00aae1da body=[[00aae1da, 00aae20b]]


/* Library Function - Single Match
    void __cdecl _Atexit(void (__cdecl*)(void))
   
   Library: Visual Studio 2010 Release */

void __cdecl _Atexit(_func_void *param_1)

{
  PVOID pvVar1;
  
  if (DAT_00ef21e8 == 0) {
                    /* WARNING: Subroutine does not return */
    _abort();
  }
  DAT_00ef21e8 = DAT_00ef21e8 + -1;
  pvVar1 = EncodePointer(param_1);
  *(PVOID *)(DAT_00ef21e8 * 4 + 0xf1fbdc) = pvVar1;
  return;
}

