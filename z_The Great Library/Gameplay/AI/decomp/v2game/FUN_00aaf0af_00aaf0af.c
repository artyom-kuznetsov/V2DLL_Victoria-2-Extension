// _atol @ 00aaf0af body=[[00aaf0af, 00aaf0c4]]


/* Library Function - Single Match
    _atol
   
   Library: Visual Studio 2010 Release */

long __cdecl _atol(char *_Str)

{
  long lVar1;
  
  lVar1 = _strtol(_Str,(char **)0x0,10);
  return lVar1;
}

