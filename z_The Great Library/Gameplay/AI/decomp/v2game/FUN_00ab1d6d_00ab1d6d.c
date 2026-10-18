// __stricmp @ 00ab1d6d body=[[00ab1d6d, 00ab1db3]]


/* Library Function - Single Match
    __stricmp
   
   Library: Visual Studio 2010 Release */

int __cdecl __stricmp(char *_Str1,char *_Str2)

{
  int *piVar1;
  int iVar2;
  
  if (DAT_00f1fc74 != 0) {
    iVar2 = __stricmp_l(_Str1,_Str2,(_locale_t)0x0);
    return iVar2;
  }
  if ((_Str1 != (char *)0x0) && (_Str2 != (char *)0x0)) {
    iVar2 = ___ascii_stricmp(_Str1,_Str2);
    return iVar2;
  }
  piVar1 = __errno();
  *piVar1 = 0x16;
  FUN_00ab7c17();
  return 0x7fffffff;
}

