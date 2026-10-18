// _wcstombs @ 00ab1c5a body=[[00ab1c5a, 00ab1c73]]


/* Library Function - Single Match
    _wcstombs
   
   Library: Visual Studio 2010 Release */

size_t __cdecl _wcstombs(char *_Dest,wchar_t *_Source,size_t _MaxCount)

{
  size_t sVar1;
  
  sVar1 = __wcstombs_l_helper(_Dest,_Source,_MaxCount,0);
  return sVar1;
}

