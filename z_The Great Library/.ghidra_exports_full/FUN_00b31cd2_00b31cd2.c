// _fgets @ 00b31cd2 body=[[00b31cd2, 00b31dfe]]


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _fgets
   
   Library: Visual Studio 2010 Release */

char * __cdecl _fgets(char *_Buf,int _MaxCount,FILE *_File)

{
  int *piVar1;
  uint uVar2;
  undefined *puVar3;
  char *pcVar4;
  char *local_20;
  
  local_20 = _Buf;
  if ((((_Buf == (char *)0x0) && (_MaxCount != 0)) || (_MaxCount < 0)) || (_File == (FILE *)0x0)) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00ab7c17();
  }
  else if (_MaxCount != 0) {
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
        if ((puVar3[0x24] & 0x80) == 0) goto LAB_00b31daa;
      }
      piVar1 = __errno();
      *piVar1 = 0x16;
      FUN_00ab7c17();
      local_20 = (char *)0x0;
    }
LAB_00b31daa:
    pcVar4 = _Buf;
    if (local_20 != (char *)0x0) {
      do {
        _MaxCount = _MaxCount + -1;
        if (_MaxCount == 0) break;
        piVar1 = &_File->_cnt;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 < 0) {
          uVar2 = __filbuf(_File);
        }
        else {
          uVar2 = (uint)(byte)*_File->_ptr;
          _File->_ptr = _File->_ptr + 1;
        }
        if (uVar2 == 0xffffffff) {
          if (pcVar4 == _Buf) {
            local_20 = (char *)0x0;
            goto LAB_00b31dea;
          }
          break;
        }
        *pcVar4 = (char)uVar2;
        pcVar4 = pcVar4 + 1;
      } while ((char)uVar2 != '\n');
      *pcVar4 = '\0';
    }
LAB_00b31dea:
    FUN_00b31e02();
    return local_20;
  }
  return (char *)0x0;
}

