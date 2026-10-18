// FUN_00a6ce80 @ 00a6ce80 body=[[00a6ce80, 00a6cec3] [00a6cec7, 00a6cf4b] [00a6cf4f, 00a6cf7a] [00a6cf7e, 00a6cfa4] [00a6cfa8, 00a6cff9]]


void FUN_00a6ce80(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3d8b1;
  local_10 = ExceptionList;
  local_8 = 9;
  ExceptionList = &local_10;
  *(undefined ***)(param_1 + 0x2b0) = &PTR_FUN_00e38350;
  if (0xf < *(uint *)(param_1 + 0x3cc)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(param_1 + 0x3b8));
  }
  *(undefined4 *)(param_1 + 0x3cc) = 0xf;
  *(undefined4 *)(param_1 + 0x3c8) = 0;
  *(undefined1 *)(param_1 + 0x3b8) = 0;
  FUN_009f8f70();
  FUN_004097a0(param_1 + 0x280);
  FUN_004097a0(param_1 + 0x270);
  FUN_004097a0(param_1 + 0x260);
  FUN_00a5c580();
  local_8._0_1_ = 8;
  FUN_00a5c580();
  local_8 = CONCAT31(local_8._1_3_,7);
  FUN_00a5c580();
  if (0xf < *(uint *)(param_1 + 0x1b4)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(param_1 + 0x1a0));
  }
  *(undefined4 *)(param_1 + 0x1b4) = 0xf;
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  *(undefined1 *)(param_1 + 0x1a0) = 0;
  if (0xf < *(uint *)(param_1 + 0x198)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(param_1 + 0x184));
  }
  *(undefined4 *)(param_1 + 0x198) = 0xf;
  *(undefined4 *)(param_1 + 0x194) = 0;
  *(undefined1 *)(param_1 + 0x184) = 0;
  if (0xf < *(uint *)(param_1 + 0x17c)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(param_1 + 0x168));
  }
  *(undefined4 *)(param_1 + 0x17c) = 0xf;
  *(undefined4 *)(param_1 + 0x178) = 0;
  *(undefined1 *)(param_1 + 0x168) = 0;
  *(undefined ***)(param_1 + 0x118) = CButtonObserver::vftable;
  *(undefined ***)(param_1 + 0xf0) = CScrollbarObserver::vftable;
  *(undefined ***)(param_1 + 200) = CScrollbarObserver::vftable;
  *(undefined ***)(param_1 + 0x78) = CButtonObserver::vftable;
  local_8 = 0xffffffff;
  FUN_009e1620();
  ExceptionList = local_10;
  return;
}

