// FUN_007b8250 @ 007b8250 body=[[007b8250, 007b82d4]]


void FUN_007b8250(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3f023;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[0x4a] = CButtonObserver::vftable;
  param_1[0x36] = CButtonObserver::vftable;
  FUN_007b46e0();
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

