// __free_locale @ 00ab5cd4 body=[[00ab5cd4, 00ab5d7d]]


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __free_locale
   
   Library: Visual Studio 2010 Release */

void __cdecl __free_locale(_locale_t _Locale)

{
  pthreadlocinfo ptVar1;
  LONG LVar2;
  
  if (_Locale != (_locale_t)0x0) {
    __lock(0xd);
    if (_Locale->mbcinfo != (pthreadmbcinfo)0x0) {
      LVar2 = InterlockedDecrement(&_Locale->mbcinfo->refcount);
      if ((LVar2 == 0) && (_Locale->mbcinfo != (pthreadmbcinfo)&lpAddend_00ef2760)) {
        _free(_Locale->mbcinfo);
      }
    }
    FUN_00ab5d81();
    if (_Locale->locinfo != (pthreadlocinfo)0x0) {
      __lock(0xc);
      ___removelocaleref(_Locale->locinfo);
      ptVar1 = _Locale->locinfo;
      if (((ptVar1 != (pthreadlocinfo)0x0) && (ptVar1->refcount == 0)) &&
         (ptVar1 != (pthreadlocinfo)&DAT_00ef2df0)) {
        ___freetlocinfo(ptVar1);
      }
      FUN_00ab5d8d();
    }
    _Locale->locinfo = (pthreadlocinfo)0xbaadf00d;
    _Locale->mbcinfo = (pthreadmbcinfo)0xbaadf00d;
    _free(_Locale);
  }
  return;
}

