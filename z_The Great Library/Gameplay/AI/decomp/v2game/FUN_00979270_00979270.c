// FUN_00979270 @ 00979270 body=[[00979270, 009792e8]]


undefined4 * FUN_00979270(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3e67b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[3] = param_3;
  param_1[1] = 0x18d;
  *param_1 = CUpperHouse::vftable;
  param_1[2] = param_2;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  local_8 = 0;
  FUN_004bea40();
  ExceptionList = local_10;
  return param_1;
}

