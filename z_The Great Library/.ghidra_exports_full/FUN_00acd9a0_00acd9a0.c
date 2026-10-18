// ___wtomb_environ @ 00acd9a0 body=[[00acd9a0, 00acda36]]


/* Library Function - Single Match
    ___wtomb_environ
   
   Library: Visual Studio 2010 Release */

int __cdecl ___wtomb_environ(void)

{
  LPCWSTR lpWideCharStr;
  size_t _Count;
  int iVar1;
  undefined4 *puVar2;
  char *local_8;
  
  local_8 = (LPSTR)0x0;
  lpWideCharStr = (LPCWSTR)*DAT_00f1fc54;
  puVar2 = DAT_00f1fc54;
  while( true ) {
    if (lpWideCharStr == (LPCWSTR)0x0) {
      return 0;
    }
    _Count = WideCharToMultiByte(0,0,lpWideCharStr,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    if ((_Count == 0) || (local_8 = __calloc_crt(_Count,1), local_8 == (LPSTR)0x0)) break;
    iVar1 = WideCharToMultiByte(0,0,(LPCWSTR)*puVar2,-1,local_8,_Count,(LPCSTR)0x0,(LPBOOL)0x0);
    if (iVar1 == 0) {
      _free(local_8);
      return -1;
    }
    iVar1 = ___crtsetenv(&local_8,0);
    if ((iVar1 < 0) && (local_8 != (LPSTR)0x0)) {
      _free(local_8);
      local_8 = (LPSTR)0x0;
    }
    puVar2 = puVar2 + 1;
    lpWideCharStr = (LPCWSTR)*puVar2;
  }
  return -1;
}

