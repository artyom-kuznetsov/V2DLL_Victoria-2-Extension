// getNumberOfDimensions @ 00ac453d body=[[00ac453d, 00ac459e]]


/* Library Function - Single Match
    private: static int __cdecl UnDecorator::getNumberOfDimensions(void)
   
   Library: Visual Studio 2010 Release */

int __cdecl UnDecorator::getNumberOfDimensions(void)

{
  int iVar1;
  char cVar2;
  
  cVar2 = *DAT_00f20978;
  if (cVar2 != '\0') {
    if (('/' < cVar2) && (cVar2 < ':')) {
      DAT_00f20978 = DAT_00f20978 + 1;
      return cVar2 + -0x2f;
    }
    iVar1 = 0;
LAB_00ac4588:
    if (cVar2 == '@') {
      cVar2 = *DAT_00f20978;
      DAT_00f20978 = DAT_00f20978 + 1;
      if (cVar2 != '@') {
LAB_00ac459b:
        iVar1 = -1;
      }
      return iVar1;
    }
    if (cVar2 != '\0') {
      if ((cVar2 < 'A') || ('P' < cVar2)) goto LAB_00ac459b;
      DAT_00f20978 = DAT_00f20978 + 1;
      iVar1 = cVar2 + -0x41 + iVar1 * 0x10;
      cVar2 = *DAT_00f20978;
      goto LAB_00ac4588;
    }
  }
  return 0;
}

