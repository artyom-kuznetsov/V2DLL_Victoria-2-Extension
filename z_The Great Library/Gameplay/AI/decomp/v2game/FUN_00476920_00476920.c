// FUN_00476920 @ 00476920 body=[[00476920, 004769de] [004769e2, 004769fa]]


undefined4 * FUN_00476920(undefined4 *param_1)

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
  
  puStack_c = &LAB_00b772fe;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = CTradeFlow::vftable;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = in_EDX;
  local_18 = 0x2d2d2d;
  param_1[2] = 0x2d2d2d;
  param_1[7] = CButtonObserverGlue<CTradeFlow>::vftable;
  param_1[8] = param_1;
  param_1[9] = FUN_00477a80;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  local_8 = 1;
  uStack_7 = 0;
  param_1[0x1b] = 0;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350("interface/trade_flow.gui",0x18);
  local_8 = 2;
  FUN_009a4bd0(local_34,param_1);
  _local_8 = CONCAT31(uStack_7,1);
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  FUN_00476e90(param_1);
  ExceptionList = local_10;
  return param_1;
}

