// _fclose @ 00aaf86d body=[[00aaf86d, 00aaf8d5]]


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _fclose
   
   Library: Visual Studio 2010 Release */

int __cdecl _fclose(FILE *_File)

{
  int *piVar1;
  int local_20;
  
  local_20 = -1;
  if (_File == (FILE *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00ab7c17();
    local_20 = -1;
  }
  else if ((_File->_flag & 0x40) == 0) {
    __lock_file(_File);
    local_20 = __fclose_nolock(_File);
    FUN_00aaf8d9();
  }
  else {
    _File->_flag = 0;
  }
  return local_20;
}

