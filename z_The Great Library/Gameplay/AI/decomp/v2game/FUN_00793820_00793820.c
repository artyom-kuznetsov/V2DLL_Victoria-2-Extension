// FUN_00793820 @ 00793820 body=[[00793820, 00793852] [00793856, 00793873] [00793877, 007938d2]]


void FUN_00793820(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3f023;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[0x1e] = CButtonObserver::vftable;
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

