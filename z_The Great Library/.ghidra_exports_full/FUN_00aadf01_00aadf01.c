// __GetLocaleForCP @ 00aadf01 body=[[00aadf01, 00aadf9b]]


/* Library Function - Single Match
    __GetLocaleForCP
   
   Library: Visual Studio 2010 Release */

_locale_t __cdecl __GetLocaleForCP(uint param_1)

{
  undefined4 *Comperand;
  int iVar1;
  undefined4 *puVar2;
  int *_Memory;
  
  _Memory = (int *)0x0;
  do {
    Comperand = *(undefined4 **)(&DAT_00f1fa18 + (param_1 % 0x3e) * 4);
    for (puVar2 = Comperand; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2) {
      if (puVar2[1] == param_1) {
        if (_Memory != (int *)0x0) {
          __free_locale((_locale_t)_Memory[2]);
          _free(_Memory);
        }
        return (_locale_t)puVar2[2];
      }
    }
    if (_Memory == (int *)0x0) {
      _Memory = __malloc_crt(0xc);
      if (_Memory == (int *)0x0) {
        return (_locale_t)0x0;
      }
      iVar1 = __CreateLocForCP(param_1);
      _Memory[2] = iVar1;
      if (iVar1 == 0) {
        _free(_Memory);
        return (_locale_t)0x0;
      }
      _Memory[1] = param_1;
    }
    *_Memory = (int)Comperand;
    puVar2 = (undefined4 *)
             InterlockedCompareExchange
                       ((LONG *)(&DAT_00f1fa18 + (param_1 % 0x3e) * 4),(LONG)_Memory,(LONG)Comperand
                       );
    if (puVar2 == Comperand) {
      return (_locale_t)_Memory[2];
    }
  } while( true );
}

