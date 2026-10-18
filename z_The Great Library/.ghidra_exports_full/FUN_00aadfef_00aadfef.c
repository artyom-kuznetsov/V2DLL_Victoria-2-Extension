// __Mbrtowc @ 00aadfef body=[[00aadfef, 00aae161]]


/* Library Function - Single Match
    __Mbrtowc
   
   Library: Visual Studio 2010 Release */

int __cdecl
__Mbrtowc(wchar_t *param_1,char *param_2,size_t param_3,mbstate_t *param_4,_Cvtvec *param_5)

{
  ushort uVar1;
  int iVar2;
  uint CodePage;
  _locale_t plVar3;
  int *piVar4;
  ushort *puVar5;
  uint uVar6;
  
  if ((param_2 == (char *)0x0) || (param_3 == 0)) {
    return 0;
  }
  if (*param_2 == '\0') {
    if (param_1 == (wchar_t *)0x0) {
      return 0;
    }
    *param_1 = L'\0';
    return 0;
  }
  if (param_5 == (_Cvtvec *)0x0) {
    iVar2 = ____lc_handle_func();
    uVar6 = *(uint *)(iVar2 + 8);
    CodePage = ____lc_codepage_func();
  }
  else {
    uVar6 = param_5->_Page;
    CodePage = param_5->_Mbcurmax;
  }
  if (uVar6 == 0) {
    if (param_1 != (wchar_t *)0x0) {
      *param_1 = (ushort)(byte)*param_2;
    }
    return 1;
  }
  plVar3 = __GetLocaleForCP(CodePage);
  if (*param_4 == 0) {
    if (plVar3 == (_locale_t)0x0) {
      puVar5 = ___pctype_func();
      uVar1 = puVar5[(byte)*param_2] & 0x8000;
    }
    else {
      uVar1 = plVar3->mbcinfo->mbctype[(byte)*param_2 + 5] & 4;
    }
    if (uVar1 == 0) {
      iVar2 = MultiByteToWideChar(CodePage,9,param_2,1,param_1,(uint)(param_1 != (wchar_t *)0x0));
      if (iVar2 != 0) {
        return 1;
      }
      goto LAB_00aae0a4;
    }
    uVar6 = FUN_00ab5c46(plVar3);
    if (param_3 < uVar6) {
      *(char *)param_4 = *param_2;
      return -2;
    }
    iVar2 = FUN_00ab5c46(plVar3);
    if (1 < iVar2) {
      uVar6 = (uint)(param_1 != (wchar_t *)0x0);
      iVar2 = FUN_00ab5c46(plVar3);
      iVar2 = MultiByteToWideChar(CodePage,9,param_2,iVar2,param_1,uVar6);
      if (iVar2 != 0) goto LAB_00aae095;
    }
    if (param_2[1] != '\0') goto LAB_00aae095;
  }
  else {
    *(char *)((int)param_4 + 1) = *param_2;
    iVar2 = FUN_00ab5c46(plVar3);
    if ((1 < iVar2) &&
       (iVar2 = MultiByteToWideChar(CodePage,9,(LPCSTR)param_4,2,param_1,
                                    (uint)(param_1 != (wchar_t *)0x0)), iVar2 != 0)) {
      *param_4 = 0;
LAB_00aae095:
      iVar2 = FUN_00ab5c46(plVar3);
      return iVar2;
    }
  }
  *param_4 = 0;
LAB_00aae0a4:
  piVar4 = __errno();
  *piVar4 = 0x2a;
  return -1;
}

