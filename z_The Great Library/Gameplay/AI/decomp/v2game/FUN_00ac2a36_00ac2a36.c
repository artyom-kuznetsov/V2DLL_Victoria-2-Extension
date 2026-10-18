// _LanguageEnumProc@4 @ 00ac2a36 body=[[00ac2a36, 00ac2af5]]


/* Library Function - Single Match
    _LanguageEnumProc@4
   
   Library: Visual Studio 2010 Release
   lpLocaleEnumProc parameter of EnumSystemLocalesA
    */

void _LanguageEnumProc_4(void)

{
  int *piVar1;
  _setloc_struct *p_Var2;
  _ptiddata p_Var3;
  LCID Locale;
  int iVar4;
  undefined4 uVar5;
  CHAR local_80 [120];
  uint local_8;
  
  local_8 = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  p_Var3 = __getptd();
  p_Var2 = &p_Var3->_setloc_data;
  Locale = _LcidFromHexString();
  iVar4 = GetLocaleInfoA(Locale,(-(uint)((p_Var3->_setloc_data).bAbbrevLanguage != 0) & 0xfffff002)
                                + 0x1001,local_80,0x78);
  if (iVar4 == 0) {
    (p_Var3->_setloc_data).iLocState = 0;
    goto LAB_00ac2ae6;
  }
  iVar4 = __stricmp((char *)p_Var2->pchLanguage,local_80);
  if (iVar4 == 0) {
    if ((p_Var3->_setloc_data).bAbbrevLanguage == 0) {
      uVar5 = 1;
      goto LAB_00ac2ac4;
    }
  }
  else {
    if ((((p_Var3->_setloc_data).bAbbrevLanguage != 0) || ((p_Var3->_setloc_data).iPrimaryLen == 0))
       || (iVar4 = __stricmp((char *)p_Var2->pchLanguage,local_80), iVar4 != 0)) goto LAB_00ac2ae6;
    uVar5 = 0;
LAB_00ac2ac4:
    iVar4 = _TestDefaultLanguage(uVar5,p_Var2);
    if (iVar4 == 0) goto LAB_00ac2ae6;
  }
  piVar1 = &(p_Var3->_setloc_data).iLocState;
  *piVar1 = *piVar1 | 4;
  (p_Var3->_setloc_data)._cachecp = Locale;
  *(LCID *)(p_Var3->_setloc_data)._cachein = Locale;
LAB_00ac2ae6:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

