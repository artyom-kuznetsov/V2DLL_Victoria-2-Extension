// FUN_00860390 @ 00860390 body=[[00860390, 00860457]]


undefined4 * FUN_00860390(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b429d1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = CGoodsProject::vftable;
  param_1[1] = 0x18d;
  param_1[3] = 0x18d;
  param_1[2] = CGoodsPool::vftable;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  local_8 = 0;
  _memset(param_1 + 4,0,0x40);
  FUN_00423920();
  param_1[0x19] = 0x18d;
  param_1[0x18] = CGoodsPool::vftable;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  local_8 = 2;
  _memset(param_1 + 0x1a,0,0x40);
  FUN_00423920();
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  ExceptionList = local_10;
  return param_1;
}

