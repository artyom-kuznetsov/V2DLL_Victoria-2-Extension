// _ProcessCodePage @ 00ac266e body=[[00ac266e, 00ac26f1]]


/* Library Function - Single Match
    _ProcessCodePage
   
   Library: Visual Studio 2010 Release */

UINT _ProcessCodePage(void)

{
  int iVar1;
  UINT UVar2;
  char *unaff_ESI;
  int unaff_EDI;
  UINT local_8;
  
  if (((unaff_ESI != (char *)0x0) && (*unaff_ESI != '\0')) &&
     (iVar1 = _strcmp(unaff_ESI,"ACP"), iVar1 != 0)) {
    iVar1 = _strcmp(unaff_ESI,"OCP");
    if (iVar1 != 0) {
      UVar2 = _atol(unaff_ESI);
      return UVar2;
    }
    iVar1 = GetLocaleInfoW(*(LCID *)(unaff_EDI + 0x1c),0x2000000b,(LPWSTR)&local_8,2);
    if (iVar1 == 0) {
      return 0;
    }
    return local_8;
  }
  iVar1 = GetLocaleInfoW(*(LCID *)(unaff_EDI + 0x1c),0x20001004,(LPWSTR)&local_8,2);
  if (iVar1 == 0) {
    return 0;
  }
  if (local_8 != 0) {
    return local_8;
  }
  UVar2 = GetACP();
  return UVar2;
}

