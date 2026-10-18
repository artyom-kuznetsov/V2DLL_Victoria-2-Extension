// _islower @ 00ab0686 body=[[00ab0686, 00ab06b3]]


/* Library Function - Single Match
    _islower
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl _islower(int _C)

{
  int iVar1;
  
  if (DAT_00f1fc74 == 0) {
    return *(ushort *)(PTR_DAT_00ef2eb8 + _C * 2) & 2;
  }
  iVar1 = __islower_l(_C,(_locale_t)0x0);
  return iVar1;
}

