// FUN_007a2310 @ 007a2310 body=[[007a2310, 007a239a] [007a239e, 007a23e8] [007a23ec, 007a2419] [007a241d, 007a2459] [007a245d, 007a247c]]


void FUN_007a2310(undefined4 *param_1)

{
  int iVar1;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b435fc;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = CChannelHandler::vftable;
  local_8 = 3;
  (**(code **)(*(int *)param_1[0xc] + 0x5c))();
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("RefreshButton",0xd);
  local_8._0_1_ = 4;
  iVar1 = (**(code **)(*(int *)param_1[0x12] + 0x34))(local_2c);
  (**(code **)(*(int *)(iVar1 + 0x54) + 8))(param_1 + 0x14);
  local_8._0_1_ = 3;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("JoinButton",10);
  local_8._0_1_ = 5;
  iVar1 = (**(code **)(*(int *)param_1[0x12] + 0x34))(local_2c);
  (**(code **)(*(int *)(iVar1 + 0x54) + 8))(param_1 + 0x1f);
  local_8 = CONCAT31(local_8._1_3_,3);
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  (**(code **)(*(int *)param_1[0x12] + 0x50))();
  if ((undefined4 *)param_1[0x13] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x13])(1);
  }
  if (0xf < (uint)param_1[0x30]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x2b]);
  }
  param_1[0x30] = 0xf;
  param_1[0x2f] = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  param_1[0x1f] = CButtonObserver::vftable;
  param_1[0x14] = CButtonObserver::vftable;
  *param_1 = &PTR_FUN_00e3a544;
  FUN_009c1650();
  if (0xf < (uint)param_1[10]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[5]);
  }
  param_1[9] = 0;
  param_1[10] = 0xf;
  *(undefined1 *)(param_1 + 5) = 0;
  ExceptionList = local_10;
  return;
}

