// FUN_0072abb0 @ 0072abb0 body=[[0072abb0, 0072acd3]]


undefined4 * FUN_0072abb0(undefined4 *param_1,int param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3cb97;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = *(undefined4 *)(param_2 + 4);
  *param_1 = CBookmark::vftable;
  param_1[7] = 0xf;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  FUN_00408ed0(param_2 + 8,0,0xffffffff);
  local_8 = 0;
  param_1[0xe] = 0xf;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  FUN_00408ed0(param_2 + 0x24,0,0xffffffff);
  local_8._0_1_ = 1;
  param_1[0x15] = 0xf;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  FUN_00408ed0(param_2 + 0x40,0,0xffffffff);
  local_8._0_1_ = 2;
  param_1[0x1c] = 0xf;
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  FUN_00408ed0(param_2 + 0x5c,0,0xffffffff);
  local_8._0_1_ = 3;
  param_1[0x23] = 0xf;
  param_1[0x22] = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  FUN_00408ed0(param_2 + 0x78,0,0xffffffff);
  local_8 = CONCAT31(local_8._1_3_,4);
  FUN_00690900();
  param_1[0x29] = *(undefined4 *)(param_2 + 0xa4);
  *(undefined1 *)(param_1 + 0x2a) = *(undefined1 *)(param_2 + 0xa8);
  param_1[0x2b] = *(undefined4 *)(param_2 + 0xac);
  param_1[0x2c] = *(undefined4 *)(param_2 + 0xb0);
  ExceptionList = local_10;
  return param_1;
}

