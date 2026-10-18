// FUN_0043c9b0 @ 0043c9b0 body=[[0043c9b0, 0043ca56] [0043ca5a, 0043ca6c]]


void FUN_0043c9b0(undefined1 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  int *piVar4;
  int *local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00bb8828;
  local_10 = ExceptionList;
  local_24 = (int *)0x0;
  local_20 = 0;
  local_1c = 0;
  local_8 = 0;
  local_14 = 0;
  ExceptionList = &local_10;
  if (*DAT_012587e4 != 0) {
    ExceptionList = &local_10;
    FUN_0043cb20(&local_24,0,&local_14);
  }
  iVar2 = local_20;
  piVar1 = local_24;
  FUN_0043ceb0(param_2,&local_24);
  FUN_0093d690();
  param_2 = iVar2 - (int)piVar1 >> 2;
  piVar4 = piVar1;
  if (0 < param_2) {
    do {
      if (*piVar4 != 0) {
        puVar3 = (undefined1 *)FUN_0043caa0();
        *puVar3 = 1;
      }
      param_2 = param_2 + -1;
      piVar4 = piVar4 + 1;
    } while (param_2 != 0);
  }
  *param_1 = 1;
  param_1[0x14] = 1;
  if (piVar1 == (int *)0x0) {
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(piVar1);
}

