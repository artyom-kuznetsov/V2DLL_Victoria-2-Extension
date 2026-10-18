// __fseeki64_nolock @ 00aaf6e5 body=[[00aaf6e5, 00aaf780]]


/* Library Function - Single Match
    __fseeki64_nolock
   
   Library: Visual Studio 2010 Release */

int __cdecl __fseeki64_nolock(FILE *_File,longlong _Offset,int _Origin)

{
  uint uVar1;
  int _FileHandle;
  int *piVar2;
  int unaff_EDI;
  longlong lVar3;
  undefined4 in_stack_00000008;
  
  if (((_File->_flag & 0x83U) == 0) ||
     (((_Offset._4_4_ != 0 && (_Offset._4_4_ != 1)) && (_Offset._4_4_ != 2)))) {
    piVar2 = __errno();
    *piVar2 = 0x16;
  }
  else {
    _File->_flag = _File->_flag & 0xffffffef;
    lVar3 = _Offset;
    if (_Offset._4_4_ == 1) {
      lVar3 = __ftelli64_nolock(_File);
      lVar3 = lVar3 + CONCAT44((undefined4)_Offset,in_stack_00000008);
      in_stack_00000008 = (undefined4)lVar3;
      lVar3 = CONCAT44(1,(int)((ulonglong)lVar3 >> 0x20));
      _Offset._4_4_ = 0;
    }
    __flush(_File);
    _Offset._0_4_ = (undefined4)lVar3;
    uVar1 = _File->_flag;
    if ((char)uVar1 < '\0') {
      _File->_flag = uVar1 & 0xfffffffc;
    }
    else if ((((uVar1 & 1) != 0) && ((uVar1 & 8) != 0)) && ((uVar1 & 0x400) == 0)) {
      _File->_bufsiz = 0x200;
    }
    _FileHandle = __fileno(_File);
    lVar3 = __lseeki64(_FileHandle,CONCAT44(_Offset._4_4_,(undefined4)_Offset),unaff_EDI);
    if (lVar3 != -1) {
      return 0;
    }
  }
  return -1;
}

