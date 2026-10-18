// FUN_007bd750 @ 007bd750 body=[[007bd750, 007bd794] [007bd798, 007bd7f4]]


void FUN_007bd750(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3f023;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[0x56] = CButtonObserver::vftable;
  param_1[0x42] = CButtonObserver::vftable;
  param_1[0x2e] = CButtonObserver::vftable;
  param_1[0x1a] = CButtonObserver::vftable;
  if (0xf < (uint)param_1[0x17]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x12]);
  }
  param_1[0x17] = 0xf;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
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

