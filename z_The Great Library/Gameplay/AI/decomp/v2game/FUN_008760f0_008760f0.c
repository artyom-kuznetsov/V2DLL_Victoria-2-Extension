// FUN_008760f0 @ 008760f0 body=[[008760f0, 0087613c] [00876140, 00876148] [00876152, 00876177]]


void FUN_008760f0(undefined4 *param_1)

{
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4abe3;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_008b32d0();
  *param_1 = CEffect::vftable;
  piVar1 = param_1 + 2;
  local_8 = 1;
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

