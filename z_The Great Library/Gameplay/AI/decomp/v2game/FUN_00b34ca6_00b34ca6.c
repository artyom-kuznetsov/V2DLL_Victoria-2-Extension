// __strupr_s_l @ 00b34ca6 body=[[00b34ca6, 00b34cda]]


/* Library Function - Single Match
    __strupr_s_l
   
   Library: Visual Studio 2010 Release */

errno_t __cdecl __strupr_s_l(char *_Str,size_t _Size,_locale_t _Locale)

{
  int iVar1;
  localeinfo_struct *unaff_EBX;
  uint unaff_EDI;
  _LocaleUpdate local_14 [8];
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate(local_14,_Locale);
  iVar1 = _strupr_s_l_stat((char *)_Size,unaff_EDI,unaff_EBX);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return iVar1;
}

