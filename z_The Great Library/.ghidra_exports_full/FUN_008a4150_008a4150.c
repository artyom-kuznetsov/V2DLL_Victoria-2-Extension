// FUN_008a4150 @ 008a4150 body=[[008a4150, 008a417c] [008a4180, 008a41b8] [008a41c2, 008a41dc]]


void FUN_008a4150(undefined4 *param_1)

{
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3aacb;
  local_10 = ExceptionList;
  if (0xf < (uint)param_1[0xe]) {
    ExceptionList = &local_10;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[9]);
  }
  ExceptionList = &local_10;
  param_1[0xe] = 0xf;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *param_1 = CEffect::vftable;
  piVar1 = param_1 + 2;
  local_8 = 0;
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

