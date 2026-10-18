// _isspace @ 00ab080a body=[[00ab080a, 00ab0837]]


/* Library Function - Single Match
    _isspace
   
   Library: Visual Studio 2010 Release */

int __cdecl _isspace(int _C)

{
  int iVar1;
  
  if (DAT_00f1fc74 == 0) {
    return *(ushort *)(PTR_DAT_00ef2eb8 + _C * 2) & 8;
  }
  iVar1 = __isspace_l(_C,(_locale_t)0x0);
  return iVar1;
}

