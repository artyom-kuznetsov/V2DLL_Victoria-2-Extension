// __Towupper @ 00aade57 body=[[00aade57, 00aadebe]]


/* Library Function - Single Match
    __Towupper
   
   Library: Visual Studio 2010 Release */

wchar_t __cdecl __Towupper(wchar_t param_1,_Ctypevec *param_2)

{
  int iVar1;
  uint local_8;
  
  local_8 = (uint)(ushort)param_1;
  if (param_1 != L'\xffff') {
    if (((LPCWSTR)param_2->_Page == (LPCWSTR)0x0) && ((ushort)param_1 < 0x100)) {
      if ((ushort)(param_1 + L'ﾟ') < 0x1a) {
        return param_1 + L'￠';
      }
    }
    else {
      iVar1 = ___crtLCMapStringW((LPCWSTR)param_2->_Page,0x200,&param_1,1,(LPWSTR)&local_8,1);
      if (iVar1 != 0) {
        param_1 = (wchar_t)local_8;
      }
    }
  }
  return param_1;
}

