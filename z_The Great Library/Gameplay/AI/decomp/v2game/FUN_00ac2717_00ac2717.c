// _LcidFromHexString @ 00ac2717 body=[[00ac2717, 00ac2747]]


/* Library Function - Single Match
    _LcidFromHexString
   
   Library: Visual Studio 2010 Release */

int _LcidFromHexString(void)

{
  char cVar1;
  char *in_EDX;
  int iVar2;
  
  iVar2 = 0;
  while (cVar1 = *in_EDX, cVar1 != '\0') {
    in_EDX = in_EDX + 1;
    if ((byte)(cVar1 + 0x9fU) < 6) {
      cVar1 = cVar1 + -0x27;
    }
    else if ((byte)(cVar1 + 0xbfU) < 6) {
      cVar1 = cVar1 + -7;
    }
    iVar2 = cVar1 + -0x30 + iVar2 * 0x10;
  }
  return iVar2;
}

