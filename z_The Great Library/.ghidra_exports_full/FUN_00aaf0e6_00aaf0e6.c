// FID_conflict:_fputc @ 00aaf0e6 body=[[00aaf0e6, 00aaf1d6]]


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Different Base Names
    _fputc
    _putc
   
   Library: Visual Studio 2010 Release */

int __cdecl FID_conflict__fputc(int _Ch,FILE *_File)

{
  int *piVar1;
  uint uVar2;
  undefined *puVar3;
  uint local_20;
  
  local_20 = 0;
  if (_File == (FILE *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00ab7c17();
    return -1;
  }
  __lock_file(_File);
  if ((_File->_flag & 0x40) == 0) {
    uVar2 = __fileno(_File);
    if ((uVar2 == 0xffffffff) || (uVar2 == 0xfffffffe)) {
      puVar3 = &DAT_00ef2ee8;
    }
    else {
      puVar3 = (undefined *)((uVar2 & 0x1f) * 0x40 + (&DAT_013f3ae0)[(int)uVar2 >> 5]);
    }
    if ((puVar3[0x24] & 0x7f) == 0) {
      if ((uVar2 == 0xffffffff) || (uVar2 == 0xfffffffe)) {
        puVar3 = &DAT_00ef2ee8;
      }
      else {
        puVar3 = (undefined *)((uVar2 & 0x1f) * 0x40 + (&DAT_013f3ae0)[(int)uVar2 >> 5]);
      }
      if ((puVar3[0x24] & 0x80) == 0) goto LAB_00aaf19c;
    }
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00ab7c17();
    local_20 = 0xffffffff;
  }
LAB_00aaf19c:
  if (local_20 == 0) {
    piVar1 = &_File->_cnt;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      local_20 = __flsbuf(_Ch,_File);
    }
    else {
      *_File->_ptr = (char)_Ch;
      local_20 = _Ch & 0xff;
      _File->_ptr = _File->_ptr + 1;
    }
  }
  FUN_00aaf1da();
  return local_20;
}

