// __mbsnbcmp @ 00acb12f body=[[00acb12f, 00acb148]]


/* Library Function - Single Match
    __mbsnbcmp
   
   Library: Visual Studio 2010 Release */

int __cdecl __mbsnbcmp(uchar *_Str1,uchar *_Str2,size_t _MaxCount)

{
  int iVar1;
  
  iVar1 = __mbsnbcmp_l(_Str1,_Str2,_MaxCount,(_locale_t)0x0);
  return iVar1;
}

