// __mbsnbicoll_l @ 00acd8a8 body=[[00acd8a8, 00acd985]]


/* Library Function - Single Match
    __mbsnbicoll_l
   
   Library: Visual Studio 2010 Release */

int __cdecl __mbsnbicoll_l(uchar *_Str1,uchar *_Str2,size_t _MaxCount,_locale_t _Locale)

{
  int *piVar1;
  int iVar2;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if (_MaxCount == 0) {
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    return 0;
  }
  if ((_Str1 == (uchar *)0x0) || (_Str2 == (uchar *)0x0)) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00ab7c17();
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    return 0x7fffffff;
  }
  if (_MaxCount < 0x80000000) {
    if ((local_14.mbcinfo)->ismbcodepage == 0) {
      iVar2 = __strnicoll_l((char *)_Str1,(char *)_Str2,_MaxCount,_Locale);
    }
    else {
      iVar2 = ___crtCompareStringA
                        (&local_14,*(LPCWSTR *)(local_14.mbcinfo)->mbulinfo,0x1001,(LPCSTR)_Str1,
                         _MaxCount,(LPCSTR)_Str2,_MaxCount,(local_14.mbcinfo)->mbcodepage);
      if (iVar2 == 0) goto LAB_00acd963;
      iVar2 = iVar2 + -2;
    }
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
  }
  else {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00ab7c17();
LAB_00acd963:
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    iVar2 = 0x7fffffff;
  }
  return iVar2;
}

