// FUN_0046e0a0 @ 0046e0a0 body=[[0046e0a0, 0046e147] [0046e14b, 0046e165]]


undefined4 * FUN_0046e0a0(undefined4 *param_1,undefined4 param_2)

{
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b93903;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = CNewsManagerButton::vftable;
  param_1[1] = 0;
  param_1[2] = param_2;
  param_1[3] = CButtonObserverGlue<CNewsManagerButton>::vftable;
  param_1[4] = param_1;
  param_1[5] = FUN_0046e8a0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  local_8 = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("interface/news.gui",0x12);
  local_8._0_1_ = 1;
  FUN_009a4bd0(local_2c,param_1);
  local_8 = (uint)local_8._1_3_ << 8;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  FUN_0046e540();
  ExceptionList = local_10;
  return param_1;
}

