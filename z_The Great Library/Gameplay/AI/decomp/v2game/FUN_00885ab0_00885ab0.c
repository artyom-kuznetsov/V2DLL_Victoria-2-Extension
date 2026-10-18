// FUN_00885ab0 @ 00885ab0 body=[[00885ab0, 00885b18] [00885b22, 00885b47]]


void FUN_00885ab0(undefined4 *param_1)

{
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00b3aaae;
  local_10 = ExceptionList;
  local_8 = 1;
  ExceptionList = &local_10;
  FUN_0042b8b0(param_1 + 0xe);
  local_8 = local_8 & 0xffffff00;
  FUN_0042b8b0(param_1 + 10);
  *param_1 = CEffect::vftable;
  piVar1 = param_1 + 2;
  local_8 = 2;
  FUN_008601b0(piVar1);
  if (*piVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*piVar1);
  }
  *piVar1 = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  ExceptionList = local_10;
  return;
}

