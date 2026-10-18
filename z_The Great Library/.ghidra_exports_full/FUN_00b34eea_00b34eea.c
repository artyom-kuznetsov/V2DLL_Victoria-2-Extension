// __strlwr @ 00b34eea body=[[00b34eea, 00b34f46]]


/* Library Function - Single Match
    __strlwr
   
   Library: Visual Studio 2010 Release */

char * __cdecl __strlwr(char *_String)

{
  char cVar1;
  char *pcVar2;
  int *piVar3;
  
  if (DAT_00f1fc74 == 0) {
    pcVar2 = _String;
    if (_String == (char *)0x0) {
      piVar3 = __errno();
      *piVar3 = 0x16;
      FUN_00ab7c17();
      return (char *)0x0;
    }
    if (*_String != '\0') {
      do {
        cVar1 = *_String;
        if (('@' < cVar1) && (cVar1 < '[')) {
          *_String = cVar1 + ' ';
        }
        _String = _String + 1;
      } while (*_String != '\0');
      return pcVar2;
    }
  }
  else {
    __strlwr_s_l(_String,0xffffffff,(_locale_t)0x0);
  }
  return _String;
}

