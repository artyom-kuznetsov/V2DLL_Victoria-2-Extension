// FUN_0090a010 @ 0090a010 body=[[0090a010, 0090a06b] [0090a076, 0090a0ae] [0090a0b9, 0090a0d5] [0090a0d9, 0090a104] [0090a108, 0090a12e] [0090a132, 0090a1bc] [0090a1c0, 0090a1db]]


void FUN_0090a010(int param_1)

{
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b3c200;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined ***)(param_1 + 0x1ac) = CEffect::vftable;
  piVar1 = (int *)(param_1 + 0x1b4);
  local_8._0_1_ = 0xd;
  local_8._1_3_ = 0;
  FUN_008601b0(piVar1);
  if (*piVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*piVar1);
  }
  *piVar1 = 0;
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  *(undefined4 *)(param_1 + 0x1bc) = 0;
  *(undefined ***)(param_1 + 0x18c) = CEffect::vftable;
  piVar1 = (int *)(param_1 + 0x194);
  local_8._0_1_ = 0xe;
  FUN_008601b0(piVar1);
  if (*piVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*piVar1);
  }
  *piVar1 = 0;
  *(undefined4 *)(param_1 + 0x198) = 0;
  *(undefined4 *)(param_1 + 0x19c) = 0;
  if (0xf < *(uint *)(param_1 + 0x184)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(param_1 + 0x170));
  }
  *(undefined4 *)(param_1 + 0x184) = 0xf;
  *(undefined4 *)(param_1 + 0x180) = 0;
  *(undefined1 *)(param_1 + 0x170) = 0;
  if (0xf < *(uint *)(param_1 + 0x168)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(param_1 + 0x154));
  }
  *(undefined4 *)(param_1 + 0x168) = 0xf;
  *(undefined4 *)(param_1 + 0x164) = 0;
  *(undefined1 *)(param_1 + 0x154) = 0;
  if (0xf < *(uint *)(param_1 + 0x14c)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(param_1 + 0x138));
  }
  *(undefined4 *)(param_1 + 0x14c) = 0xf;
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined1 *)(param_1 + 0x138) = 0;
  FUN_00849e90();
  local_8._0_1_ = 6;
  FUN_008b32d0();
  local_8._0_1_ = 5;
  FUN_008b32d0();
  local_8._0_1_ = 4;
  FUN_008b32d0();
  local_8._0_1_ = 3;
  FUN_008b32d0();
  local_8._0_1_ = 2;
  FUN_008b32d0();
  local_8._0_1_ = 1;
  FUN_008b32d0();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_008b32d0();
  if (0xf < *(uint *)(param_1 + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(param_1 + 0x14));
  }
  *(undefined4 *)(param_1 + 0x28) = 0xf;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  ExceptionList = local_10;
  return;
}

