// FUN_00561bd0 @ 00561bd0 body=[[00561bd0, 00561c36]]


undefined4 * FUN_00561bd0(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4044b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  *param_1 = CGoodsPool::vftable;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  local_8 = 0;
  _memset(param_1 + 2,0,0x40);
  FUN_00423920();
  ExceptionList = local_10;
  return param_1;
}

