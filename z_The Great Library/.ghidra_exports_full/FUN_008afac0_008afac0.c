// FUN_008afac0 @ 008afac0 body=[[008afac0, 008afb18] [008afb22, 008afb68] [008afb6c, 008afb8c]]


void FUN_008afac0(int param_1)

{
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b3c252;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined ***)(param_1 + 0x98) = CEffect::vftable;
  piVar1 = (int *)(param_1 + 0xa0);
  local_8._0_1_ = 5;
  local_8._1_3_ = 0;
  FUN_008601b0(piVar1);
  if (*piVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*piVar1);
  }
  *piVar1 = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  local_8._0_1_ = 3;
  FUN_008b32d0();
  local_8._0_1_ = 2;
  FUN_008b32d0();
  local_8._0_1_ = 1;
  FUN_008b32d0();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_008ae2f0();
  if (0xf < *(uint *)(param_1 + 0x1c)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(param_1 + 8));
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0xf;
  *(undefined1 *)(param_1 + 8) = 0;
  ExceptionList = local_10;
  return;
}

