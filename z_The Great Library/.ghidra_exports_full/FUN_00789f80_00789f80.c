// FUN_00789f80 @ 00789f80 body=[[00789f80, 00789fbd] [00789fc1, 0078a02d]]


void FUN_00789f80(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3f023;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = CSubUnitEntry::vftable;
  param_1[7] = CSubUnitEntry::vftable;
  if (0xf < (uint)param_1[0x26]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x21]);
  }
  param_1[0x26] = 0xf;
  param_1[0x25] = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  param_1[10] = CButtonObserver::vftable;
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

