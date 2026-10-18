// FUN_008ff7c0 @ 008ff7c0 body=[[008ff7c0, 008ff823]]


undefined4 * FUN_008ff7c0(undefined4 *param_1)

{
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b42408;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined2 *)(param_1 + 6) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  local_8 = 0;
  *param_1 = CUnemploymentByTypeTrigger::vftable;
  uVar1 = FUN_0096bb70();
  param_1[10] = uVar1;
  param_1[8] = 0;
  param_1[9] = 0;
  ExceptionList = local_10;
  return param_1;
}

