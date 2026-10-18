// _IsRootUNCName @ 00ab3a6a body=[[00ab3a6a, 00ab3ae3]]


/* Library Function - Single Match
    _IsRootUNCName
   
   Library: Visual Studio 2010 Release */

undefined4 _IsRootUNCName(void)

{
  size_t sVar1;
  char *pcVar2;
  char cVar3;
  char *unaff_ESI;
  
  sVar1 = _strlen(unaff_ESI);
  if ((((4 < sVar1) && ((*unaff_ESI == '\\' || (*unaff_ESI == '/')))) &&
      ((unaff_ESI[1] == '\\' || (unaff_ESI[1] == '/')))) &&
     ((unaff_ESI[2] != '\\' && (unaff_ESI[2] != '/')))) {
    pcVar2 = unaff_ESI + 3;
    cVar3 = *pcVar2;
    if (cVar3 != '\0') {
      do {
        if ((cVar3 == '\\') || (cVar3 == '/')) break;
        pcVar2 = pcVar2 + 1;
        cVar3 = *pcVar2;
      } while (cVar3 != '\0');
      if ((*pcVar2 != '\0') && (pcVar2 = pcVar2 + 1, *pcVar2 != '\0')) {
        cVar3 = *pcVar2;
        if (cVar3 != '\0') {
          do {
            if ((cVar3 == '\\') || (cVar3 == '/')) break;
            pcVar2 = pcVar2 + 1;
            cVar3 = *pcVar2;
          } while (cVar3 != '\0');
          if ((*pcVar2 != '\0') && (pcVar2[1] != '\0')) {
            return 0;
          }
        }
        return 1;
      }
    }
  }
  return 0;
}

