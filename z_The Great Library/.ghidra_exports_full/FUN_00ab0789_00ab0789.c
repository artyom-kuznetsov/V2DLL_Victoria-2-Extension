// _isxdigit @ 00ab0789 body=[[00ab0789, 00ab07b8]]


/* Library Function - Single Match
    _isxdigit
   
   Library: Visual Studio 2010 Release */

int __cdecl _isxdigit(int _C)

{
  int iVar1;
  
  if (DAT_00f1fc74 == 0) {
    return *(ushort *)(PTR_DAT_00ef2eb8 + _C * 2) & 0x80;
  }
  iVar1 = __isxdigit_l(_C,(_locale_t)0x0);
  return iVar1;
}

