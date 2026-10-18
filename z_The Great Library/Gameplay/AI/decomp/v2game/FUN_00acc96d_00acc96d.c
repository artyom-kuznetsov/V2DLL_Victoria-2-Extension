// __mbsrchr @ 00acc96d body=[[00acc96d, 00acc983]]


/* Library Function - Single Match
    __mbsrchr
   
   Library: Visual Studio 2010 Release */

uchar * __cdecl __mbsrchr(uchar *_Str,uint _Ch)

{
  uchar *puVar1;
  
  puVar1 = __mbsrchr_l(_Str,_Ch,(_locale_t)0x0);
  return puVar1;
}

