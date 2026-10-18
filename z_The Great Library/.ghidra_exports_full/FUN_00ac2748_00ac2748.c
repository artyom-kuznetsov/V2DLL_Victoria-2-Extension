// _GetPrimaryLen @ 00ac2748 body=[[00ac2748, 00ac2762]]


/* Library Function - Single Match
    _GetPrimaryLen
   
   Library: Visual Studio 2010 Release */

int _GetPrimaryLen(void)

{
  char cVar1;
  int iVar2;
  char *in_EDX;
  
  iVar2 = 0;
  while( true ) {
    cVar1 = *in_EDX;
    in_EDX = in_EDX + 1;
    if (((cVar1 < 'A') || ('Z' < cVar1)) && (0x19 < (byte)(cVar1 + 0x9fU))) break;
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}

