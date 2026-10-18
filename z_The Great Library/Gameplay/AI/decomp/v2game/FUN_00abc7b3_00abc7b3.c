// __ftelli64 @ 00abc7b3 body=[[00abc7b3, 00abc815]]


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __ftelli64
   
   Library: Visual Studio 2010 Release */

longlong __cdecl __ftelli64(FILE *_File)

{
  int *piVar1;
  longlong lVar2;
  undefined4 local_24;
  undefined4 local_20;
  
  if (_File == (FILE *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00ab7c17();
    local_20 = 0xffffffff;
    local_24 = 0xffffffff;
  }
  else {
    __lock_file(_File);
    lVar2 = __ftelli64_nolock(_File);
    FUN_00abc816();
    local_24 = (undefined4)lVar2;
    local_20 = (undefined4)((ulonglong)lVar2 >> 0x20);
  }
  return CONCAT44(local_20,local_24);
}

