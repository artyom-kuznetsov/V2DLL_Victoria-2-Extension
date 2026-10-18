// __mbsnbicmp @ 00acafc9 body=[[00acafc9, 00acafe2]]


/* Library Function - Single Match
    __mbsnbicmp
   
   Library: Visual Studio 2010 Release */

int __cdecl __mbsnbicmp(uchar *_Str1,uchar *_Str2,size_t _MaxCount)

{
  int iVar1;
  
  iVar1 = __mbsnbicmp_l(_Str1,_Str2,_MaxCount,(_locale_t)0x0);
  return iVar1;
}

