// _isupper @ 00ab0607 body=[[00ab0607, 00ab0634]]


/* Library Function - Single Match
    _isupper
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl _isupper(int _C)

{
  int iVar1;
  
  if (DAT_00f1fc74 == 0) {
    return *(ushort *)(PTR_DAT_00ef2eb8 + _C * 2) & 1;
  }
  iVar1 = __isupper_l(_C,(_locale_t)0x0);
  return iVar1;
}

