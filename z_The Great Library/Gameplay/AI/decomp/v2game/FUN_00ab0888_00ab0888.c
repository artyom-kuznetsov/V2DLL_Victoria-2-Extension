// __atof_l @ 00ab0888 body=[[00ab0888, 00ab0932]]


/* Library Function - Single Match
    __atof_l
   
   Library: Visual Studio 2010 Release */

double __cdecl __atof_l(char *_String,_locale_t _Locale)

{
  int *piVar1;
  uint uVar2;
  float10 fVar3;
  localeinfo_struct local_30;
  int local_28;
  char local_24;
  _flt local_20;
  uint local_8;
  
  local_8 = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_30,_Locale);
  if (_String == (char *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00ab7c17();
    if (local_24 != '\0') {
      *(uint *)(local_28 + 0x70) = *(uint *)(local_28 + 0x70) & 0xfffffffd;
    }
  }
  else {
    while( true ) {
      if ((int)(local_30.locinfo)->locale_name[3] < 2) {
        uVar2 = *(ushort *)(local_30.locinfo[1].lc_category[0].locale + (uint)(byte)*_String * 2) &
                8;
      }
      else {
        uVar2 = __isctype_l((uint)(byte)*_String,8,&local_30);
      }
      if (uVar2 == 0) break;
      _String = _String + 1;
    }
    __fltin2(&local_20,_String,&local_30);
    if (local_24 != '\0') {
      *(uint *)(local_28 + 0x70) = *(uint *)(local_28 + 0x70) & 0xfffffffd;
    }
  }
  fVar3 = (float10)__security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)fVar3;
}

