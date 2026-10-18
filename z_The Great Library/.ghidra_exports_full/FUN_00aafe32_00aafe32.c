// __strnicmp @ 00aafe32 body=[[00aafe32, 00aafe84]]


/* Library Function - Single Match
    __strnicmp
   
   Library: Visual Studio 2010 Release */

int __cdecl __strnicmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  int *piVar1;
  int iVar2;
  
  if (DAT_00f1fc74 != 0) {
    iVar2 = __strnicmp_l(_Str1,_Str2,_MaxCount,(_locale_t)0x0);
    return iVar2;
  }
  if (((_Str1 != (char *)0x0) && (_Str2 != (char *)0x0)) && (_MaxCount < 0x80000000)) {
    iVar2 = ___ascii_strnicmp(_Str1,_Str2,_MaxCount);
    return iVar2;
  }
  piVar1 = __errno();
  *piVar1 = 0x16;
  FUN_00ab7c17();
  return 0x7fffffff;
}

