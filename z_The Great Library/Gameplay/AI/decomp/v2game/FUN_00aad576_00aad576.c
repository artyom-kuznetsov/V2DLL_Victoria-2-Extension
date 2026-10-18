// __Wcrtomb @ 00aad576 body=[[00aad576, 00aad5fc]]


/* Library Function - Single Match
    __Wcrtomb
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __Wcrtomb(char *param_1,wchar_t param_2,mbstate_t *param_3,_Cvtvec *param_4)

{
  int iVar1;
  uint CodePage;
  _locale_t plVar2;
  int *piVar3;
  uint uVar4;
  LPCSTR lpDefaultChar;
  _Cvtvec **lpUsedDefaultChar;
  
  if (param_4 == (_Cvtvec *)0x0) {
    iVar1 = ____lc_handle_func();
    uVar4 = *(uint *)(iVar1 + 8);
    CodePage = ____lc_codepage_func();
  }
  else {
    uVar4 = param_4->_Page;
    CodePage = param_4->_Mbcurmax;
  }
  if (uVar4 == 0) {
    if ((ushort)param_2 < 0x100) {
      *param_1 = (char)param_2;
      return 1;
    }
  }
  else {
    param_4 = (_Cvtvec *)0x0;
    plVar2 = __GetLocaleForCP(CodePage);
    lpUsedDefaultChar = &param_4;
    lpDefaultChar = (LPCSTR)0x0;
    iVar1 = FUN_00ab5c46(plVar2);
    iVar1 = WideCharToMultiByte(CodePage,0,&param_2,1,param_1,iVar1,lpDefaultChar,
                                (LPBOOL)lpUsedDefaultChar);
    if ((iVar1 != 0) && (param_4 == (_Cvtvec *)0x0)) {
      return iVar1;
    }
  }
  piVar3 = __errno();
  *piVar3 = 0x2a;
  return -1;
}

