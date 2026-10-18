// __islower_l @ 00ab0635 body=[[00ab0635, 00ab0685]]


/* Library Function - Single Match
    __islower_l
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __islower_l(int _C,_locale_t _Locale)

{
  uint uVar1;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if ((int)(local_14.locinfo)->locale_name[3] < 2) {
    uVar1 = *(ushort *)(local_14.locinfo[1].lc_category[0].locale + _C * 2) & 2;
  }
  else {
    uVar1 = __isctype_l(_C,2,&local_14);
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}

