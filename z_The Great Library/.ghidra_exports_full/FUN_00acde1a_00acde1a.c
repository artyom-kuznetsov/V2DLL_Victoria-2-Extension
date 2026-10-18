// __strnicoll_l @ 00acde1a body=[[00acde1a, 00acdf03]]


/* Library Function - Single Match
    __strnicoll_l
   
   Library: Visual Studio 2010 Release */

int __cdecl __strnicoll_l(char *_Str1,char *_Str2,size_t _MaxCount,_locale_t _Locale)

{
  LPCWSTR _LocaleName;
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
  if ((_Str1 == (char *)0x0) || (_Str2 == (char *)0x0)) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00ab7c17();
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    return 0x7fffffff;
  }
  if (_MaxCount < 0x80000000) {
    _LocaleName = (LPCWSTR)(local_14.locinfo)->lc_category[0].locale;
    if (_LocaleName == (LPCWSTR)0x0) {
      iVar2 = __strnicmp_l(_Str1,_Str2,_MaxCount,&local_14);
    }
    else {
      iVar2 = ___crtCompareStringA
                        (&local_14,_LocaleName,0x1001,_Str1,_MaxCount,_Str2,_MaxCount,
                         (local_14.locinfo)->lc_collate_cp);
      if (iVar2 == 0) {
        piVar1 = __errno();
        *piVar1 = 0x16;
        goto LAB_00acdee1;
      }
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
LAB_00acdee1:
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    iVar2 = 0x7fffffff;
  }
  return iVar2;
}

