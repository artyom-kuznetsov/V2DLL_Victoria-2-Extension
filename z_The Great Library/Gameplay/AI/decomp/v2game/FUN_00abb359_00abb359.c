// __fcloseall @ 00abb359 body=[[00abb359, 00abb3eb]]


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __fcloseall
   
   Library: Visual Studio 2010 Release */

int __cdecl __fcloseall(void)

{
  FILE *_File;
  int iVar1;
  int iVar2;
  int local_20;
  
  local_20 = 0;
  __lock(1);
  for (iVar2 = 3; iVar2 < DAT_013f4c20; iVar2 = iVar2 + 1) {
    if (*(int *)(DAT_013f3c00 + iVar2 * 4) != 0) {
      _File = *(FILE **)(DAT_013f3c00 + iVar2 * 4);
      if ((_File->_flag & 0x83) != 0) {
        iVar1 = _fclose(_File);
        if (iVar1 != -1) {
          local_20 = local_20 + 1;
        }
      }
      if (0x13 < iVar2) {
        DeleteCriticalSection((LPCRITICAL_SECTION)(*(int *)(DAT_013f3c00 + iVar2 * 4) + 0x20));
        _free(*(void **)(DAT_013f3c00 + iVar2 * 4));
        *(undefined4 *)(DAT_013f3c00 + iVar2 * 4) = 0;
      }
    }
  }
  FUN_00abb3ec();
  return local_20;
}

