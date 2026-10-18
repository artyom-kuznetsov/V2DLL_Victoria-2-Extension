// __vsnprintf @ 00ab1047 body=[[00ab1047, 00ab1063]]


/* Library Function - Single Match
    __vsnprintf
   
   Library: Visual Studio 2010 Release */

int __cdecl __vsnprintf(char *_Dest,size_t _Count,char *_Format,va_list _Args)

{
  int iVar1;
  
  iVar1 = __vsnprintf_l(_Dest,_Count,_Format,(_locale_t)0x0,_Args);
  return iVar1;
}

