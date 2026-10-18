// FUN_00a87550 @ 00a87550 body=[[00a87550, 00a875a0] [00a875a4, 00a87617] [00a8761b, 00a8763a]]


void FUN_00a87550(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b3b38e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_FUN_00e44718;
  param_1[0x15] = &PTR_FUN_00e447c8;
  param_1[0x28] = &PTR_LAB_00e447d0;
  local_8 = 2;
  if (param_1[0x2e] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x2e]);
  }
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  if ((undefined4 *)param_1[0x2b] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x2b])(1);
  }
  param_1[0x28] = CScrollbarObserver::vftable;
  local_8._0_1_ = 3;
  FUN_007e1ad0();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_00a5c580();
  *param_1 = &PTR_FUN_00e387f8;
  if (*(undefined4 **)(param_1[0xd] + 0x98) == param_1) {
    *(undefined4 *)(param_1[0xd] + 0x98) = 0;
  }
  DAT_01258a84 = DAT_01258a84 + -1;
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

