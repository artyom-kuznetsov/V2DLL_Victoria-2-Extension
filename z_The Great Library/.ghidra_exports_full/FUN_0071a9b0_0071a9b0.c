// FUN_0071a9b0 @ 0071a9b0 body=[[0071a9b0, 0071aa18] [0071aa1c, 0071aa50]]


undefined4 *
FUN_0071a9b0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b505d2;
  local_10 = ExceptionList;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("market_activity_entry",0x15);
  local_8 = 0;
  FUN_00719e50(param_1,param_2,local_2c,param_4);
  local_8 = CONCAT31(local_8._1_3_,2);
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  *param_1 = CMarketActivityEntry::vftable;
  param_1[7] = CMarketActivityEntry::vftable;
  FUN_0071aa60();
  ExceptionList = local_10;
  return param_1;
}

