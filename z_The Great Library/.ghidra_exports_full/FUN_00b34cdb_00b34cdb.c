// __strupr @ 00b34cdb body=[[00b34cdb, 00b34d37]]


/* Library Function - Single Match
    __strupr
   
   Library: Visual Studio 2010 Release */

char * __cdecl __strupr(char *_String)

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
        if (('`' < cVar1) && (cVar1 < '{')) {
          *_String = cVar1 + -0x20;
        }
        _String = _String + 1;
      } while (*_String != '\0');
      return pcVar2;
    }
  }
  else {
    __strupr_s_l(_String,0xffffffff,(_locale_t)0x0);
  }
  return _String;
}

