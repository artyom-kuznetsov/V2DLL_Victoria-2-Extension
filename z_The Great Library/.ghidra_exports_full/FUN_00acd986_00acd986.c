// __mbsnbicoll @ 00acd986 body=[[00acd986, 00acd99f]]


/* Library Function - Single Match
    __mbsnbicoll
   
   Library: Visual Studio 2010 Release */

int __cdecl __mbsnbicoll(uchar *_Str1,uchar *_Str2,size_t _MaxCount)

{
  int iVar1;
  
  iVar1 = __mbsnbicoll_l(_Str1,_Str2,_MaxCount,(_locale_t)0x0);
  return iVar1;
}

