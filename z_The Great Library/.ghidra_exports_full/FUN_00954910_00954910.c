// FUN_00954910 @ 00954910 body=[[00954910, 00954a3d]]


undefined4 * FUN_00954910(undefined4 *param_1)

{
  undefined8 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4209e;
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
  param_1[0x17] = 0x18d;
  param_1[0x16] = CGoodsPool::vftable;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  local_8 = 2;
  _memset(param_1 + 0x18,0,0x40);
  FUN_00423920();
  param_1[0x2c] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0x8000;
  param_1[0x33] = 0;
  param_1[0x34] = 0x8000;
  param_1[0x35] = 0;
  param_1[0x36] = 0x8000;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  uVar1 = FUN_00b31c36();
  *(undefined8 *)(param_1 + 0x3a) = uVar1;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  ExceptionList = local_10;
  return param_1;
}

