// _LangCountryEnumProc@4 @ 00ac2865 body=[[00ac2865, 00ac2a35]]


/* Library Function - Single Match
    _LangCountryEnumProc@4
   
   Library: Visual Studio 2010 Release
   lpLocaleEnumProc parameter of EnumSystemLocalesA
    */

void _LangCountryEnumProc_4(void)

{
  int *piVar1;
  _setloc_struct *p_Var2;
  _ptiddata p_Var3;
  LCID Locale;
  int iVar4;
  size_t sVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  CHAR local_80 [120];
  uint local_8;
  
  local_8 = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  p_Var3 = __getptd();
  p_Var2 = &p_Var3->_setloc_data;
  Locale = _LcidFromHexString();
  iVar4 = GetLocaleInfoA(Locale,(-(uint)((p_Var3->_setloc_data).bAbbrevCountry != 0) & 0xfffff005) +
                                0x1002,local_80,0x78);
  if (iVar4 == 0) {
LAB_00ac28b6:
    (p_Var3->_setloc_data).iLocState = 0;
    goto LAB_00ac2a25;
  }
  iVar4 = __stricmp((char *)(p_Var3->_setloc_data).pchCountry,local_80);
  if (iVar4 == 0) {
    iVar4 = GetLocaleInfoA(Locale,(-(uint)((p_Var3->_setloc_data).bAbbrevLanguage != 0) & 0xfffff002
                                  ) + 0x1001,local_80,0x78);
    if (iVar4 == 0) goto LAB_00ac28b6;
    iVar4 = __stricmp((char *)p_Var2->pchLanguage,local_80);
    if (iVar4 == 0) {
      piVar1 = &(p_Var3->_setloc_data).iLocState;
      *piVar1 = *piVar1 | 0x304;
      (p_Var3->_setloc_data)._cachecp = Locale;
LAB_00ac2966:
      *(LCID *)(p_Var3->_setloc_data)._cachein = Locale;
    }
    else if (((p_Var3->_setloc_data).iLocState & 2) == 0) {
      sVar5 = (p_Var3->_setloc_data).iPrimaryLen;
      if ((sVar5 == 0) ||
         (iVar4 = __strnicmp((char *)p_Var2->pchLanguage,local_80,sVar5), iVar4 != 0)) {
        if (((p_Var3->_setloc_data).iLocState & 1U) == 0) {
          uVar6 = _TestDefaultCountry(Locale);
          if ((int)uVar6 != 0) {
            (p_Var3->_setloc_data).iLocState = (uint)((ulonglong)uVar6 >> 0x20) | 1;
            goto LAB_00ac2966;
          }
        }
      }
      else {
        piVar1 = &(p_Var3->_setloc_data).iLocState;
        *piVar1 = *piVar1 | 2;
        *(LCID *)(p_Var3->_setloc_data)._cachein = Locale;
        sVar5 = _strlen((char *)p_Var2->pchLanguage);
        if (sVar5 == (p_Var3->_setloc_data).iPrimaryLen) {
          (p_Var3->_setloc_data)._cachecp = Locale;
        }
      }
    }
  }
  if (((p_Var3->_setloc_data).iLocState & 0x300U) == 0x300) goto LAB_00ac2a25;
  iVar4 = GetLocaleInfoA(Locale,(-(uint)((p_Var3->_setloc_data).bAbbrevLanguage != 0) & 0xfffff002)
                                + 0x1001,local_80,0x78);
  if (iVar4 == 0) goto LAB_00ac28b6;
  iVar4 = __stricmp((char *)p_Var2->pchLanguage,local_80);
  if (iVar4 == 0) {
    piVar1 = &(p_Var3->_setloc_data).iLocState;
    *piVar1 = *piVar1 | 0x200;
    if ((p_Var3->_setloc_data).bAbbrevLanguage == 0) {
      if (((p_Var3->_setloc_data).iPrimaryLen != 0) &&
         (sVar5 = _strlen((char *)p_Var2->pchLanguage), sVar5 == (p_Var3->_setloc_data).iPrimaryLen)
         ) {
        uVar7 = 1;
        goto LAB_00ac29fe;
      }
      goto LAB_00ac2a0b;
    }
    (p_Var3->_setloc_data).iLocState = (p_Var3->_setloc_data).iLocState | 0x100;
  }
  else {
    if ((((p_Var3->_setloc_data).bAbbrevLanguage != 0) || ((p_Var3->_setloc_data).iPrimaryLen == 0))
       || (iVar4 = __stricmp((char *)p_Var2->pchLanguage,local_80), iVar4 != 0)) goto LAB_00ac2a25;
    uVar7 = 0;
LAB_00ac29fe:
    iVar4 = _TestDefaultLanguage(uVar7,p_Var2);
    if (iVar4 == 0) goto LAB_00ac2a25;
LAB_00ac2a0b:
    piVar1 = &(p_Var3->_setloc_data).iLocState;
    *piVar1 = *piVar1 | 0x100;
  }
  if ((p_Var3->_setloc_data)._cachecp == 0) {
    (p_Var3->_setloc_data)._cachecp = Locale;
  }
LAB_00ac2a25:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

