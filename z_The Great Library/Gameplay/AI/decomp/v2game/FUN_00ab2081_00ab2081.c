// doexit @ 00ab2081 body=[[00ab2081, 00ab21ab] [00ab21bb, 00ab21c0]]


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* WARNING: Removing unreachable block (ram,0x00ab21b2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _doexit
   
   Library: Visual Studio 2010 Release */

void __cdecl doexit(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  int *piVar5;
  int *piVar6;
  int *local_34;
  int *local_2c;
  int *local_28;
  undefined4 *local_24;
  undefined4 *local_20;
  
  __lock(8);
  if (DAT_00f1fc6c != 1) {
    _DAT_00f1fc68 = 1;
    DAT_00f1fc64 = (undefined1)param_3;
    if (param_2 == 0) {
      piVar1 = DecodePointer(Ptr_013f3bec);
      if (piVar1 != (int *)0x0) {
        piVar2 = DecodePointer(Ptr_013f3be8);
        local_34 = piVar1;
        local_2c = piVar2;
        local_28 = piVar1;
        while (piVar2 = piVar2 + -1, piVar1 <= piVar2) {
          iVar3 = FUN_00ab96ff();
          if (*piVar2 != iVar3) {
            if (piVar2 < piVar1) break;
            pcVar4 = DecodePointer((PVOID)*piVar2);
            iVar3 = FUN_00ab96ff();
            *piVar2 = iVar3;
            (*pcVar4)();
            piVar5 = DecodePointer(Ptr_013f3bec);
            piVar6 = DecodePointer(Ptr_013f3be8);
            if ((local_28 != piVar5) || (piVar1 = local_34, local_2c != piVar6)) {
              piVar1 = piVar5;
              piVar2 = piVar6;
              local_34 = piVar5;
              local_2c = piVar6;
              local_28 = piVar5;
            }
          }
        }
      }
      for (local_20 = &DAT_00dbb02c; local_20 < &DAT_00dbb038; local_20 = local_20 + 1) {
        if ((code *)*local_20 != (code *)0x0) {
          (*(code *)*local_20)();
        }
      }
    }
    for (local_24 = &DAT_00dbb03c; local_24 < &DAT_00dbb040; local_24 = local_24 + 1) {
      if ((code *)*local_24 != (code *)0x0) {
        (*(code *)*local_24)();
      }
    }
  }
  FUN_00ab21ac();
  if (param_3 == 0) {
    DAT_00f1fc6c = 1;
    FUN_00abb496(8);
    ___crtExitProcess(param_1);
    return;
  }
  return;
}

