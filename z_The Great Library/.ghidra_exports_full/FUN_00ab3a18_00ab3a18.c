// _strftime @ 00ab3a18 body=[[00ab3a18, 00ab3a36]]


/* Library Function - Single Match
    _strftime
   
   Library: Visual Studio 2010 Release */

size_t __cdecl _strftime(char *_Buf,size_t _SizeInBytes,char *_Format,tm *_Tm)

{
  size_t sVar1;
  
  sVar1 = __Strftime_l(_Buf,_SizeInBytes,_Format,_Tm,0,0);
  return sVar1;
}

