// _Xfiopen<> @ 00aada6a body=[[00aada6a, 00aadb11]]


/* Library Function - Multiple Matches With Same Base Name
    struct _iobuf * __cdecl std::_Xfiopen<char>(char const *,int,int)
    struct _iobuf * __cdecl std::_Xfiopen<wchar_t>(wchar_t const *,int,int)
   
   Library: Visual Studio 2010 Release */

_iobuf * _Xfiopen<>(char *param_1,uint param_2,int param_3)

{
  uint uVar1;
  _iobuf *_File;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = param_2 & 4;
  uVar2 = param_2 & 0x80;
  uVar1 = 1;
  if ((param_2 & 0x40) != 0) {
    param_2 = param_2 | 1;
  }
  if ((param_2 & 8) != 0) {
    param_2 = param_2 | 2;
  }
  iVar4 = 0;
  do {
    if (uVar1 == (param_2 & 0xffffff3b)) break;
    uVar1 = (&DAT_00dd923c)[iVar4];
    iVar4 = iVar4 + 1;
  } while (uVar1 != 0);
  if (*(int *)(&UNK_00dd9238 + iVar4 * 4) != 0) {
    if (((uVar2 == 0) || ((param_2 & 10) == 0)) ||
       (_File = std::_Xfsopen(param_1,0,param_3), _File == (_iobuf *)0x0)) {
      _File = std::_Xfsopen(param_1,iVar4,param_3);
      if (_File == (_iobuf *)0x0) {
        return (_iobuf *)0x0;
      }
      if (uVar3 == 0) {
        return _File;
      }
      iVar4 = _fseek(_File,0,2);
      if (iVar4 == 0) {
        return _File;
      }
    }
    _fclose(_File);
  }
  return (_iobuf *)0x0;
}

