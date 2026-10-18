// _wctomb_s @ 00aca0ff body=[[00aca0ff, 00aca11b]]


/* Library Function - Single Match
    _wctomb_s
   
   Library: Visual Studio 2010 Release */

errno_t __cdecl _wctomb_s(int *_SizeConverted,char *_MbCh,rsize_t _SizeInBytes,wchar_t _WCh)

{
  errno_t eVar1;
  
  eVar1 = __wctomb_s_l(_SizeConverted,_MbCh,_SizeInBytes,_WCh,(_locale_t)0x0);
  return eVar1;
}

