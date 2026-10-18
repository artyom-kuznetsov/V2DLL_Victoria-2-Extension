// __mbctolower_l @ 00ac0f06 body=[[00ac0f06, 00ac0fab]]


/* Library Function - Single Match
    __mbctolower_l
   
   Library: Visual Studio 2010 Release */

uint __cdecl __mbctolower_l(uint _Ch,_locale_t _Locale)

{
  int iVar1;
  localeinfo_struct local_1c;
  int local_14;
  char local_10;
  CHAR local_c;
  undefined1 local_b;
  CHAR local_8;
  undefined1 local_7;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_1c,_Locale);
  if (_Ch < 0x100) {
    if (((local_1c.mbcinfo)->mbctype[_Ch + 5] & 0x10) != 0) {
      _Ch = (uint)(local_1c.mbcinfo)->mbcasemap[_Ch + 4];
    }
  }
  else {
    local_8 = (CHAR)(_Ch >> 8);
    local_7 = (undefined1)_Ch;
    if ((((local_1c.mbcinfo)->mbctype[(_Ch >> 8 & 0xff) + 5] & 4) == 0) ||
       (iVar1 = ___crtLCMapStringA(&local_1c,*(LPCWSTR *)(local_1c.mbcinfo)->mbulinfo,0x100,&local_8
                                   ,2,&local_c,2,(local_1c.mbcinfo)->mbcodepage,1), iVar1 == 0)) {
      if (local_10 == '\0') {
        return _Ch;
      }
      *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
      return _Ch;
    }
    _Ch = (uint)CONCAT11(local_c,local_b);
  }
  if (local_10 != '\0') {
    *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
  }
  return _Ch;
}

