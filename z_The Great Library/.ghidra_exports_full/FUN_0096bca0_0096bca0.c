// FUN_0096bca0 @ 0096bca0 body=[[0096bca0, 0096bcd5] [0096bcd9, 0096bcff] [0096bd03, 0096bd28] [0096bd2c, 0096bd4d] [0096bd51, 0096bd72] [0096bd76, 0096bd97] [0096bd9b, 0096bdbc] [0096bdc0, 0096bde1] [0096bde5, 0096be5b] [0096be5f, 0096be7d]]


void FUN_0096bca0(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b3c0ec;
  local_10 = ExceptionList;
  local_8 = 5;
  if (*(int *)(param_1 + 0x3dc) != 0) {
    ExceptionList = &local_10;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(param_1 + 0x3dc));
  }
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x3dc) = 0;
  *(undefined4 *)(param_1 + 0x3e0) = 0;
  *(undefined4 *)(param_1 + 0x3e4) = 0;
  if (0xf < *(uint *)(param_1 + 0x3b4)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(param_1 + 0x3a0));
  }
  *(undefined4 *)(param_1 + 0x3b4) = 0xf;
  *(undefined4 *)(param_1 + 0x3b0) = 0;
  *(undefined1 *)(param_1 + 0x3a0) = 0;
  if (*(int *)(param_1 + 0x310) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(param_1 + 0x310));
  }
  *(undefined4 *)(param_1 + 0x310) = 0;
  *(undefined4 *)(param_1 + 0x314) = 0;
  *(undefined4 *)(param_1 + 0x318) = 0;
  if (*(int *)(param_1 + 0x2b8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(param_1 + 0x2b8));
  }
  *(undefined4 *)(param_1 + 0x2b8) = 0;
  *(undefined4 *)(param_1 + 700) = 0;
  *(undefined4 *)(param_1 + 0x2c0) = 0;
  if (*(int *)(param_1 + 0x260) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(param_1 + 0x260));
  }
  *(undefined4 *)(param_1 + 0x260) = 0;
  *(undefined4 *)(param_1 + 0x264) = 0;
  *(undefined4 *)(param_1 + 0x268) = 0;
  if (*(int *)(param_1 + 0x208) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(param_1 + 0x208));
  }
  *(undefined4 *)(param_1 + 0x208) = 0;
  *(undefined4 *)(param_1 + 0x20c) = 0;
  *(undefined4 *)(param_1 + 0x210) = 0;
  if (*(int *)(param_1 + 0x1b0) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(param_1 + 0x1b0));
  }
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  *(undefined4 *)(param_1 + 0x1b4) = 0;
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  if (*(int *)(param_1 + 0x158) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(param_1 + 0x158));
  }
  *(undefined4 *)(param_1 + 0x158) = 0;
  *(undefined4 *)(param_1 + 0x15c) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  FUN_0096fce0(param_1 + 0xd8);
  local_8._0_1_ = 4;
  FUN_0096fce0(param_1 + 200);
  local_8._0_1_ = 3;
  FUN_008ae2f0();
  local_8._0_1_ = 2;
  FUN_008ae2f0();
  local_8._0_1_ = 1;
  FUN_005c5190(param_1 + 0x80);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_005c5190(param_1 + 0x70);
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

