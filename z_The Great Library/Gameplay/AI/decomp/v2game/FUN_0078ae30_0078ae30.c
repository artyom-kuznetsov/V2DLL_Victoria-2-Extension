// FUN_0078ae30 @ 0078ae30 body=[[0078ae30, 0078ae75] [0078ae79, 0078ae8e] [0078ae92, 0078aef1]]


void FUN_0078ae30(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3f023;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[0x20] = CWindowObserver::vftable;
  if (param_1[0x1b] != 0) {
    FUN_005e5d30(param_1);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x1b]);
  }
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  if (param_1[0x17] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x17]);
  }
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0xc] = CScrollbarObserver::vftable;
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

