// FUN_005fe880 @ 005fe880 body=[[005fe880, 005fe901] [005fe905, 005fe920] [005fe924, 005feaf6]]


undefined4 * FUN_005fe880(undefined4 *param_1,undefined4 param_2)

{
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9a6ef;
  local_10 = ExceptionList;
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("topcolor_budget",0xf);
  local_8 = 0;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("country_budget",0xe);
  local_8._0_1_ = 1;
  FUN_007536e0(param_1,param_2,local_2c,local_48);
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  *param_1 = CBudgetView::vftable;
  param_1[0x17] = CButtonObserverGlue<CBudgetView>::vftable;
  param_1[0x18] = param_1;
  param_1[0x19] = FUN_0060c6d0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = CButtonObserverGlue<CBudgetView>::vftable;
  param_1[0x23] = param_1;
  param_1[0x24] = FUN_0060c6b0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = CButtonObserverGlue<CBudgetView>::vftable;
  param_1[0x2e] = param_1;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = FUN_0060c890;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *(undefined2 *)(param_1 + 0x38) = 0x101;
  *(undefined1 *)((int)param_1 + 0xe2) = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x67] = CButtonObserverGlue<CBudgetView>::vftable;
  param_1[0x68] = param_1;
  param_1[0x69] = FUN_0060bad0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = CButtonObserverGlue<CBudgetView>::vftable;
  param_1[0x73] = param_1;
  param_1[0x74] = FUN_0060ba50;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  local_8 = CONCAT31(local_8._1_3_,0xe);
  param_1[0x7f] = 0xffffffff;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  FUN_00602820(param_1);
  ExceptionList = local_10;
  return param_1;
}

