// __mbsicmp @ 00acc8ac body=[[00acc8ac, 00acc8c2]]


/* Library Function - Single Match
    __mbsicmp
   
   Library: Visual Studio 2010 Release */

int __cdecl __mbsicmp(uchar *_Str1,uchar *_Str2)

{
  int iVar1;
  
  iVar1 = __mbsicmp_l(_Str1,_Str2,(_locale_t)0x0);
  return iVar1;
}

