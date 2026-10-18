// _Locimp_dtor @ 00aad6cf body=[[00aad6cf, 00aad72e]]


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    private: static void __cdecl std::locale::_Locimp::_Locimp_dtor(class std::locale::_Locimp *)
   
   Library: Visual Studio 2010 Release */

void __cdecl std::locale::_Locimp::_Locimp_dtor(_Locimp *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  _Lockit local_14 [12];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0xaad6db;
  _Lockit::_Lockit(local_14,0);
  local_8 = 0;
  iVar2 = *(int *)(param_1 + 0xc);
  while (iVar2 != 0) {
    iVar2 = iVar2 + -1;
    if (*(int *)(*(int *)(param_1 + 8) + iVar2 * 4) != 0) {
      puVar1 = (undefined4 *)FUN_00445f70();
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
    }
  }
  _free(*(void **)(param_1 + 8));
  local_8 = 0xffffffff;
  FUN_00aad9f1();
  return;
}

