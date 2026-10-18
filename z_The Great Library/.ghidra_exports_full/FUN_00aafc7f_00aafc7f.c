// _fflush @ 00aafc7f body=[[00aafc7f, 00aafcc7]]


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _fflush
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl _fflush(FILE *_File)

{
  int iVar1;
  
  if (_File == (FILE *)0x0) {
    iVar1 = flsall(0);
  }
  else {
    __lock_file(_File);
    iVar1 = __fflush_nolock(_File);
    FUN_00aafcc8();
  }
  return iVar1;
}

