// _isalpha @ 00ab0586 body=[[00ab0586, 00ab05b5]]


/* Library Function - Single Match
    _isalpha
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl _isalpha(int _C)

{
  int iVar1;
  
  if (DAT_00f1fc74 == 0) {
    return *(ushort *)(PTR_DAT_00ef2eb8 + _C * 2) & 0x103;
  }
  iVar1 = __isalpha_l(_C,(_locale_t)0x0);
  return iVar1;
}

