// __mbschr @ 00ace2a8 body=[[00ace2a8, 00ace2be]]


/* Library Function - Single Match
    __mbschr
   
   Library: Visual Studio 2010 Release */

uchar * __cdecl __mbschr(uchar *_Str,uint _Ch)

{
  uchar *puVar1;
  
  puVar1 = __mbschr_l(_Str,_Ch,(_locale_t)0x0);
  return puVar1;
}

