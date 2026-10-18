// _fwrite @ 00aaf610 body=[[00aaf610, 00aaf67f]]


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _fwrite
   
   Library: Visual Studio 2010 Release */

size_t __cdecl _fwrite(void *_Str,size_t _Size,size_t _Count,FILE *_File)

{
  int *piVar1;
  size_t sVar2;
  
  if ((_Size != 0) && (_Count != 0)) {
    if (_File != (FILE *)0x0) {
      __lock_file(_File);
      sVar2 = __fwrite_nolock(_Str,_Size,_Count,_File);
      FUN_00aaf680();
      return sVar2;
    }
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00ab7c17();
  }
  return 0;
}

