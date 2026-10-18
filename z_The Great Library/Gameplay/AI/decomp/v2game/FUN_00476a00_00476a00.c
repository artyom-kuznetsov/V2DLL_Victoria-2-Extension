// FUN_00476a00 @ 00476a00 body=[[00476a00, 00476a6f] [00476a73, 00476a9b] [00476a9f, 00476ab2] [00476ab6, 00476ad7]]


void FUN_00476a00(undefined4 *param_1)

{
  int *piVar1;
  uint local_2c;
  int local_20 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4d266;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = CTradeFlow::vftable;
  local_8 = 1;
  local_20[2] = 0xf;
  local_20[1] = 0;
  local_2c = local_2c & 0xffffff00;
  FUN_00409350("interface/trade_flow.gui",0x18);
  local_8._0_1_ = 2;
  FUN_009a4ca0(param_1);
  local_8 = CONCAT31(local_8._1_3_,1);
  if (0xf < (uint)local_20[2]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c);
  }
  if ((int *)param_1[1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[1] + 0x50))();
    param_1[1] = 0;
  }
  piVar1 = param_1 + 0x17;
  if (piVar1 != local_20) {
    if (*piVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*piVar1);
    }
    *piVar1 = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
  }
  if (*piVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*piVar1);
  }
  *piVar1 = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[7] = CButtonObserver::vftable;
  ExceptionList = local_10;
  return;
}

