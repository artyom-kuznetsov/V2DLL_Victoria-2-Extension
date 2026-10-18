// FUN_0043d1c0 @ 0043d1c0 body=[[0043d1c0, 0043d334] [0043d338, 0043d351]]


undefined4 * FUN_0043d1c0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 in_EDX;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b77699;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = param_2;
  *param_1 = CInvestProject::vftable;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = in_EDX;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  local_18 = 0x2d2d2d;
  param_1[3] = 0x2d2d2d;
  param_1[10] = CButtonObserverGlue<CInvestProject>::vftable;
  param_1[0xb] = param_1;
  param_1[0xc] = FUN_0043e090;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = CButtonObserverGlue<CInvestProject>::vftable;
  param_1[0x16] = param_1;
  param_1[0x17] = FUN_0043ddd0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = CButtonObserverGlue<CInvestProject>::vftable;
  param_1[0x21] = param_1;
  param_1[0x22] = FUN_0043df40;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = CScrollbarObserverGlue<CInvestProject>::vftable;
  param_1[0x30] = param_1;
  param_1[0x31] = FUN_0043e200;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  local_8 = 3;
  uStack_7 = 0;
  param_1[0x35] = 0;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350("interface/invest_project.gui",0x1c);
  local_8 = 4;
  FUN_009a4bd0(local_34,param_1);
  _local_8 = CONCAT31(uStack_7,3);
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  FUN_0043d7f0();
  ExceptionList = local_10;
  return param_1;
}

