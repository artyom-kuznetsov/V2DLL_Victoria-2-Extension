// FUN_007967a0 @ 007967a0 body=[[007967a0, 007967e2] [007967e6, 00796803] [00796807, 00796862]]


void FUN_007967a0(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3f023;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = CLeaderAssignmentEntry::vftable;
  param_1[7] = CLeaderAssignmentEntry::vftable;
  param_1[0x20] = CButtonObserver::vftable;
  if (0xf < (uint)param_1[0x1c]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x17]);
  }
  param_1[0x1c] = 0xf;
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  if (0xf < (uint)param_1[0x12]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0xd]);
  }
  param_1[0x12] = 0xf;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *param_1 = &PTR_FUN_00e392f0;
  param_1[7] = &PTR_FUN_00e39320;
  local_8 = 1;
  if ((int *)param_1[8] != (int *)0x0) {
    (**(code **)(*(int *)param_1[8] + 0x50))();
  }
  local_8 = 0xffffffff;
  param_1[7] = &PTR_FUN_00e39158;
  *param_1 = &PTR_FUN_00e38708;
  FUN_009a62b0();
  ExceptionList = local_10;
  return;
}

