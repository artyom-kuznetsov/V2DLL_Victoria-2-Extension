// FUN_006376e0 @ 006376e0 body=[[006376e0, 00637747]]


undefined4 * FUN_006376e0(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b5a2b3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 10000;
  *(undefined1 *)((int)param_1 + 9) = 1;
  *param_1 = &PTR_FUN_00e3c8c0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  local_8 = 1;
  param_1[7] = 0;
  FUN_009e9ac0();
  *param_1 = CEU3DirectSound::vftable;
  ExceptionList = local_10;
  return param_1;
}

