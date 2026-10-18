// __flsbuf @ 00ab9c2b body=[[00ab9c2b, 00ab9d8e]]


/* Library Function - Single Match
    __flsbuf
   
   Library: Visual Studio 2010 Release */

int __cdecl __flsbuf(int _Ch,FILE *_File)

{
  char *_Buf;
  char *pcVar1;
  FILE *_File_00;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int unaff_EDI;
  uint uVar5;
  longlong lVar6;
  uint local_8;
  
  _File_00 = _File;
  _File = (FILE *)__fileno(_File);
  uVar5 = _File_00->_flag;
  if ((uVar5 & 0x82) == 0) {
    piVar2 = __errno();
    *piVar2 = 9;
LAB_00ab9c51:
    _File_00->_flag = _File_00->_flag | 0x20;
    return -1;
  }
  if ((uVar5 & 0x40) != 0) {
    piVar2 = __errno();
    *piVar2 = 0x22;
    goto LAB_00ab9c51;
  }
  if ((uVar5 & 1) != 0) {
    _File_00->_cnt = 0;
    if ((uVar5 & 0x10) == 0) {
      _File_00->_flag = uVar5 | 0x20;
      return -1;
    }
    _File_00->_ptr = _File_00->_base;
    _File_00->_flag = uVar5 & 0xfffffffe;
  }
  uVar5 = _File_00->_flag;
  _File_00->_flag = uVar5 & 0xffffffef | 2;
  _File_00->_cnt = 0;
  local_8 = 0;
  if (((uVar5 & 0x10c) == 0) &&
     (((iVar3 = FUN_00aaf1e2(), _File_00 != (FILE *)(iVar3 + 0x20) &&
       (iVar3 = FUN_00aaf1e2(), _File_00 != (FILE *)(iVar3 + 0x40))) ||
      (iVar3 = __isatty((int)_File), iVar3 == 0)))) {
    __getbuf(_File_00);
  }
  if ((_File_00->_flag & 0x108U) == 0) {
    uVar5 = 1;
    local_8 = __write((int)_File,&_Ch,1);
  }
  else {
    _Buf = _File_00->_base;
    pcVar1 = _File_00->_ptr;
    _File_00->_ptr = _Buf + 1;
    uVar5 = (int)pcVar1 - (int)_Buf;
    _File_00->_cnt = _File_00->_bufsiz + -1;
    if ((int)uVar5 < 1) {
      if ((_File == (FILE *)0xffffffff) || (_File == (FILE *)0xfffffffe)) {
        puVar4 = &DAT_00ef2ee8;
      }
      else {
        puVar4 = (undefined *)(((uint)_File & 0x1f) * 0x40 + (&DAT_013f3ae0)[(int)_File >> 5]);
      }
      if (((puVar4[4] & 0x20) != 0) &&
         (lVar6 = __lseeki64((int)_File,0x200000000,unaff_EDI), lVar6 == -1)) goto LAB_00ab9d79;
    }
    else {
      local_8 = __write((int)_File,_Buf,uVar5);
    }
    *_File_00->_base = (char)_Ch;
  }
  if (local_8 == uVar5) {
    return _Ch & 0xff;
  }
LAB_00ab9d79:
  _File_00->_flag = _File_00->_flag | 0x20;
  return -1;
}

