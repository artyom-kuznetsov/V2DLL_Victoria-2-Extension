// __whiteout @ 00ab7cb4 body=[[00ab7cb4, 00ab7cdd]]


/* Library Function - Single Match
    __whiteout
   
   Library: Visual Studio 2010 Release */

uint __whiteout(void)

{
  uint uVar1;
  int iVar2;
  int *unaff_ESI;
  
  do {
    *unaff_ESI = *unaff_ESI + 1;
    uVar1 = __inc();
    if (uVar1 == 0xffffffff) {
      return 0xffffffff;
    }
    iVar2 = _isspace(uVar1 & 0xff);
  } while (iVar2 != 0);
  return uVar1;
}

