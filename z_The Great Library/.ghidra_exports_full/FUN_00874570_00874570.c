// FUN_00874570 @ 00874570 body=[[00874570, 008745b5] [008745b9, 008745e6] [008745ea, 00874610] [00874614, 0087463a] [0087463e, 00874664] [00874668, 008746ab] [008746b6, 008746e3] [008746e7, 00874706]]


void FUN_00874570(int param_1)

{
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b3c44d;
  local_10 = ExceptionList;
  local_8 = 8;
  ExceptionList = &local_10;
  FUN_008ae2f0();
  if (0xf < *(uint *)(param_1 + 0x108)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(param_1 + 0xf4));
  }
  *(undefined4 *)(param_1 + 0x108) = 0xf;
  *(undefined4 *)(param_1 + 0x104) = 0;
  *(undefined1 *)(param_1 + 0xf4) = 0;
  if (0xf < *(uint *)(param_1 + 0xec)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(param_1 + 0xd8));
  }
  *(undefined4 *)(param_1 + 0xec) = 0xf;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined1 *)(param_1 + 0xd8) = 0;
  if (0xf < *(uint *)(param_1 + 0xd0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(param_1 + 0xbc));
  }
  *(undefined4 *)(param_1 + 0xd0) = 0xf;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined1 *)(param_1 + 0xbc) = 0;
  if (0xf < *(uint *)(param_1 + 0xb4)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(param_1 + 0xa0));
  }
  *(undefined4 *)(param_1 + 0xb4) = 0xf;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0xa0) = 0;
  if (0xf < *(uint *)(param_1 + 0x94)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(param_1 + 0x80));
  }
  *(undefined4 *)(param_1 + 0x94) = 0xf;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x80) = 0;
  *(undefined ***)(param_1 + 0x5c) = CEffect::vftable;
  piVar1 = (int *)(param_1 + 100);
  local_8._0_1_ = 9;
  FUN_008601b0(piVar1);
  if (*piVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*piVar1);
  }
  *piVar1 = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  local_8._0_1_ = 1;
  FUN_008b32d0();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_008b32d0();
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

