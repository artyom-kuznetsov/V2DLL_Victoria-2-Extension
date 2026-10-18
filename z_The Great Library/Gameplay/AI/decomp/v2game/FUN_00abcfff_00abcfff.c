// __getstream @ 00abcfff body=[[00abcfff, 00abd125]]


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __getstream
   
   Library: Visual Studio 2010 Release */

FILE * __cdecl __getstream(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  BOOL BVar5;
  int _Index;
  FILE *pFVar6;
  FILE *_File;
  
  pFVar6 = (FILE *)0x0;
  __lock(1);
  _Index = 0;
  do {
    _File = pFVar6;
    if (DAT_013f4c20 <= _Index) {
LAB_00abd0f8:
      if (_File != (FILE *)0x0) {
        _File->_flag = _File->_flag & 0x8000;
        _File->_cnt = 0;
        _File->_base = (char *)0x0;
        _File->_ptr = (char *)0x0;
        _File->_tmpfname = (char *)0x0;
        _File->_file = -1;
      }
      FUN_00abd129();
      return _File;
    }
    piVar1 = (int *)(DAT_013f3c00 + _Index * 4);
    if (*piVar1 == 0) {
      pvVar4 = __malloc_crt(0x38);
      *(void **)(DAT_013f3c00 + _Index * 4) = pvVar4;
      if (pvVar4 != (void *)0x0) {
        BVar5 = InitializeCriticalSectionAndSpinCount
                          ((LPCRITICAL_SECTION)(*(int *)(DAT_013f3c00 + _Index * 4) + 0x20),4000);
        if (BVar5 == 0) {
          _free(*(void **)(DAT_013f3c00 + _Index * 4));
          *(undefined4 *)(DAT_013f3c00 + _Index * 4) = 0;
        }
        else {
          EnterCriticalSection((LPCRITICAL_SECTION)(*(int *)(DAT_013f3c00 + _Index * 4) + 0x20));
          _File = *(FILE **)(DAT_013f3c00 + _Index * 4);
          _File->_flag = 0;
        }
      }
      goto LAB_00abd0f8;
    }
    uVar2 = *(uint *)(*piVar1 + 0xc);
    if (((uVar2 & 0x83) == 0) && ((uVar2 & 0x8000) == 0)) {
      if ((_Index - 3U < 0x11) && (iVar3 = __mtinitlocknum(_Index + 0x10), iVar3 == 0))
      goto LAB_00abd0f8;
      __lock_file2(_Index,*(void **)(DAT_013f3c00 + _Index * 4));
      _File = *(FILE **)(DAT_013f3c00 + _Index * 4);
      if ((_File->_flag & 0x83) == 0) goto LAB_00abd0f8;
      __unlock_file2(_Index,_File);
    }
    _Index = _Index + 1;
  } while( true );
}

