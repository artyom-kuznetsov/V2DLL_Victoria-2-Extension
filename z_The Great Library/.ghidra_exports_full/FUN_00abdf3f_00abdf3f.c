// ___crtGetEnvironmentStringsA @ 00abdf3f body=[[00abdf3f, 00abdfd5]]


/* Library Function - Single Match
    ___crtGetEnvironmentStringsA
   
   Library: Visual Studio 2010 Release */

LPVOID __cdecl ___crtGetEnvironmentStringsA(void)

{
  WCHAR WVar1;
  LPWCH lpWideCharStr;
  WCHAR *pWVar2;
  int iVar4;
  size_t _Size;
  LPSTR local_8;
  WCHAR *pWVar3;
  
  lpWideCharStr = GetEnvironmentStringsW();
  if (lpWideCharStr == (LPWCH)0x0) {
    local_8 = (LPSTR)0x0;
  }
  else {
    WVar1 = *lpWideCharStr;
    pWVar2 = lpWideCharStr;
    while (WVar1 != L'\0') {
      do {
        pWVar3 = pWVar2;
        pWVar2 = pWVar3 + 1;
      } while (*pWVar2 != L'\0');
      pWVar2 = pWVar3 + 2;
      WVar1 = *pWVar2;
    }
    iVar4 = ((int)pWVar2 - (int)lpWideCharStr >> 1) + 1;
    _Size = WideCharToMultiByte(0,0,lpWideCharStr,iVar4,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    if ((_Size == 0) || (local_8 = __malloc_crt(_Size), local_8 == (LPSTR)0x0)) {
      FreeEnvironmentStringsW(lpWideCharStr);
      local_8 = (LPSTR)0x0;
    }
    else {
      iVar4 = WideCharToMultiByte(0,0,lpWideCharStr,iVar4,local_8,_Size,(LPCSTR)0x0,(LPBOOL)0x0);
      if (iVar4 == 0) {
        _free(local_8);
        local_8 = (LPSTR)0x0;
      }
      FreeEnvironmentStringsW(lpWideCharStr);
    }
  }
  return local_8;
}

