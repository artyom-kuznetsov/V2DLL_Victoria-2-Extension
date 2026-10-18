// FUN_0040c120 @ 0040c120 body=[[0040c120, 0040c1a1]]


void FUN_0040c120(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3f023;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[0x34] = CButtonObserver::vftable;
  param_1[0x20] = CButtonObserver::vftable;
  param_1[0x12] = CCheckBoxObserver::vftable;
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

