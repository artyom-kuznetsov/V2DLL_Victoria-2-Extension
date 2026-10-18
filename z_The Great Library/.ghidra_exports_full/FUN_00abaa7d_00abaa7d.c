// _vsprintf @ 00abaa7d body=[[00abaa7d, 00abaa96]]


/* Library Function - Single Match
    _vsprintf
   
   Library: Visual Studio 2010 Release */

int __cdecl _vsprintf(char *_Dest,char *_Format,va_list _Args)

{
  int iVar1;
  
  iVar1 = __vsprintf_l(_Dest,_Format,(_locale_t)0x0,_Args);
  return iVar1;
}

