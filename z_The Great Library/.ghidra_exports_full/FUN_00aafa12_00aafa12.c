// __ungetc_nolock @ 00aafa12 body=[[00aafa12, 00aafaf4]]


/* Library Function - Single Match
    __ungetc_nolock
   
   Library: Visual Studio 2010 Release */

int __cdecl __ungetc_nolock(int _Ch,FILE *_File)

{
  char *pcVar1;
  uint uVar2;
  int *piVar3;
  undefined *puVar4;
  
  if ((_File->_flag & 0x40) == 0) {
    uVar2 = __fileno(_File);
    if ((uVar2 == 0xffffffff) || (uVar2 == 0xfffffffe)) {
      puVar4 = &DAT_00ef2ee8;
    }
    else {
      puVar4 = (undefined *)((uVar2 & 0x1f) * 0x40 + (&DAT_013f3ae0)[(int)uVar2 >> 5]);
    }
    if ((puVar4[0x24] & 0x7f) == 0) {
      if ((uVar2 == 0xffffffff) || (uVar2 == 0xfffffffe)) {
        puVar4 = &DAT_00ef2ee8;
      }
      else {
        puVar4 = (undefined *)((uVar2 & 0x1f) * 0x40 + (&DAT_013f3ae0)[(int)uVar2 >> 5]);
      }
      if ((puVar4[0x24] & 0x80) == 0) goto LAB_00aafa95;
    }
    piVar3 = __errno();
    *piVar3 = 0x16;
    FUN_00ab7c17();
  }
  else {
LAB_00aafa95:
    if (_Ch != -1) {
      uVar2 = _File->_flag;
      if (((uVar2 & 1) != 0) || (((char)uVar2 < '\0' && ((uVar2 & 2) == 0)))) {
        if (_File->_base == (char *)0x0) {
          __getbuf(_File);
        }
        if (_File->_ptr == _File->_base) {
          if (_File->_cnt != 0) {
            return -1;
          }
          _File->_ptr = _File->_ptr + 1;
        }
        _File->_ptr = _File->_ptr + -1;
        pcVar1 = _File->_ptr;
        if ((_File->_flag & 0x40) == 0) {
          *pcVar1 = (char)_Ch;
        }
        else if (*pcVar1 != (char)_Ch) {
          _File->_ptr = pcVar1 + 1;
          return -1;
        }
        _File->_cnt = _File->_cnt + 1;
        _File->_flag = _File->_flag & 0xffffffefU | 1;
        return _Ch & 0xff;
      }
    }
  }
  return -1;
}

