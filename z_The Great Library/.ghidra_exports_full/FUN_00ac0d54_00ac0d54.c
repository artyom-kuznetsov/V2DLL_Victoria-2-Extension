// FID_conflict:__sopen_helper @ 00ac0d54 body=[[00ac0d54, 00ac0de4]]


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Different Base Names
    __sopen_helper
    __wsopen_helper
   
   Library: Visual Studio 2010 Release */

errno_t __cdecl
FID_conflict___sopen_helper
          (char *_Filename,int _OFlag,int _ShFlag,int _PMode,int *_PFileHandle,int _BSecure)

{
  int *piVar1;
  errno_t eVar2;
  undefined4 local_20 [5];
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_00e6c548;
  uStack_c = 0xac0d60;
  local_20[0] = 0;
  if (((_PFileHandle == (int *)0x0) || (*_PFileHandle = -1, _Filename == (char *)0x0)) ||
     ((_BSecure != 0 && ((_PMode & 0xfffffe7fU) != 0)))) {
    piVar1 = __errno();
    eVar2 = 0x16;
    *piVar1 = 0x16;
    FUN_00ab7c17();
  }
  else {
    local_8 = (undefined *)0x0;
    eVar2 = FUN_00ac0620(local_20,_Filename,_OFlag,_ShFlag,_PMode);
    local_8 = (undefined *)0xfffffffe;
    FUN_00ac0dea();
    if (eVar2 != 0) {
      *_PFileHandle = -1;
    }
  }
  return eVar2;
}

