// ___lc_strtolc @ 00ab5dda body=[[00ab5dda, 00ab5ef8]]


/* Library Function - Single Match
    ___lc_strtolc
   
   Library: Visual Studio 2010 Release */

undefined4 ___lc_strtolc(char *param_1,char *param_2)

{
  char cVar1;
  errno_t eVar2;
  uint _MaxCount;
  char *_Dst;
  char *_Str;
  rsize_t _SizeInBytes;
  
  _Str = param_2;
  _memset(param_1,0,0x90);
  if (*param_2 == '\0') {
    return 0;
  }
  if ((*param_2 == '.') && (param_2[1] != '\0')) {
    eVar2 = _strncpy_s(param_1 + 0x80,0x10,param_2 + 1,0xf);
    if (eVar2 == 0) {
      param_1[0x8f] = '\0';
      return 0;
    }
  }
  else {
    param_2 = (char *)0x0;
    _MaxCount = _strcspn(_Str,"_.,");
    while( true ) {
      if (_MaxCount == 0) {
        return 0xffffffff;
      }
      cVar1 = _Str[_MaxCount];
      if (param_2 == (char *)0x0) {
        if (0x3f < _MaxCount) {
          return 0xffffffff;
        }
        if (cVar1 == '.') {
          return 0xffffffff;
        }
        _SizeInBytes = 0x40;
        _Dst = param_1;
      }
      else if (param_2 == (char *)0x1) {
        if (0x3f < _MaxCount) {
          return 0xffffffff;
        }
        if (cVar1 == '_') {
          return 0xffffffff;
        }
        _SizeInBytes = 0x40;
        _Dst = param_1 + 0x40;
      }
      else {
        if (param_2 != (char *)0x2) {
          return 0xffffffff;
        }
        if (0xf < _MaxCount) {
          return 0xffffffff;
        }
        if ((cVar1 != '\0') && (cVar1 != ',')) {
          return 0xffffffff;
        }
        _SizeInBytes = 0x10;
        _Dst = param_1 + 0x80;
      }
      eVar2 = _strncpy_s(_Dst,_SizeInBytes,_Str,_MaxCount);
      if (eVar2 != 0) break;
      if (cVar1 == ',') {
        return 0;
      }
      if (cVar1 == '\0') {
        return 0;
      }
      param_2 = (char *)((int)param_2 + 1);
      _Str = _Str + _MaxCount + 1;
      _MaxCount = _strcspn(_Str,"_.,");
    }
  }
                    /* WARNING: Subroutine does not return */
  __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}

