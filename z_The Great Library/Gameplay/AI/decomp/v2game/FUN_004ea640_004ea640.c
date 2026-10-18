// FUN_004ea640 @ 004ea640 body=[[004ea640, 004ea672] [004ea676, 004ea6bb] [004ea6c6, 004ea70d] [004ea718, 004ea761] [004ea765, 004ea783]]


void FUN_004ea640(int param_1)

{
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b3d02c;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)(param_1 + 0x134) != 0) {
    ExceptionList = &local_10;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(param_1 + 0x134));
  }
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined ***)(param_1 + 0xd8) = CEffect::vftable;
  piVar1 = (int *)(param_1 + 0xe0);
  local_8._0_1_ = 7;
  local_8._1_3_ = 0;
  FUN_008601b0(piVar1);
  if (*piVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*piVar1);
  }
  *piVar1 = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  local_8._0_1_ = 5;
  FUN_008b32d0();
  *(undefined ***)(param_1 + 0x9c) = CEffect::vftable;
  piVar1 = (int *)(param_1 + 0xa4);
  local_8._0_1_ = 8;
  FUN_008601b0(piVar1);
  if (*piVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*piVar1);
  }
  *piVar1 = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  local_8._0_1_ = 3;
  FUN_008b32d0();
  local_8._0_1_ = 2;
  FUN_008ae2f0();
  local_8._0_1_ = 1;
  FUN_008ae2f0();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_008ae2f0();
  if (0xf < *(uint *)(param_1 + 0x24)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(param_1 + 0x10));
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0xf;
  *(undefined1 *)(param_1 + 0x10) = 0;
  ExceptionList = local_10;
  return;
}

