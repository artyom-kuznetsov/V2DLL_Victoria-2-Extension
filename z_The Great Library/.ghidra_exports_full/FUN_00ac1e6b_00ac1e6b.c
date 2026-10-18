// ___init_time @ 00ac1e6b body=[[00ac1e6b, 00ac1ee7]]


/* Library Function - Single Match
    ___init_time
   
   Library: Visual Studio 2010 Release */

int __cdecl ___init_time(threadlocinfo *_LocInfo)

{
  undefined **ppuVar1;
  undefined **_Memory;
  int iVar2;
  
  if (_LocInfo->lc_category[1].locale == (char *)0x0) {
    _Memory = &PTR_DAT_00ef2c88;
LAB_00ac1ec5:
    ppuVar1 = (undefined **)_LocInfo[1].lc_category[0].wrefcount;
    if (ppuVar1 != &PTR_DAT_00ef2c88) {
      InterlockedDecrement((LONG *)(ppuVar1 + 0x2d));
    }
    _LocInfo[1].lc_category[0].wrefcount = (int *)_Memory;
    iVar2 = 0;
  }
  else {
    _Memory = __calloc_crt(1,0x164);
    if (_Memory != (undefined **)0x0) {
      iVar2 = __get_lc_time();
      if (iVar2 == 0) {
        _Memory[0x2d] = (undefined *)0x1;
        goto LAB_00ac1ec5;
      }
      ___free_lc_time(_Memory);
      _free(_Memory);
    }
    iVar2 = 1;
  }
  return iVar2;
}

