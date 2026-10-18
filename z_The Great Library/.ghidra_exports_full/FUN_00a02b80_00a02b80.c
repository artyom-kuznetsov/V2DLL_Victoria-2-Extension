// FUN_00a02b80 @ 00a02b80 body=[[00a02b80, 00a02c99] [00a02c9d, 00a02cb4] [00a02cb8, 00a02ccf] [00a02cd3, 00a02cea] [00a02cee, 00a02d0b] [00a02d0f, 00a02d23]]


undefined4 * FUN_00a02b80(undefined4 *param_1)

{
  uint in_stack_0000001c;
  undefined4 in_stack_00000024;
  uint in_stack_0000003c;
  uint in_stack_00000044;
  undefined4 in_stack_00000054;
  uint in_stack_00000058;
  uint in_stack_00000060;
  undefined4 in_stack_00000070;
  uint in_stack_00000074;
  undefined4 in_stack_0000007c;
  undefined4 in_stack_00000080;
  undefined4 in_stack_00000084;
  undefined4 in_stack_00000088;
  uint in_stack_0000009c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b56234;
  local_10 = ExceptionList;
  local_8 = 4;
  ExceptionList = &local_10;
  FUN_00408ed0();
  local_8._0_1_ = 5;
  FUN_00408ed0(&stack0x00000044,0,0xffffffff);
  local_8._0_1_ = 4;
  FUN_009fa9f0(param_1,0xde);
  local_8._0_1_ = 6;
  *param_1 = &PTR_FUN_00e3e7b4;
  param_1[0x22] = 0xf;
  param_1[0x21] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  FUN_00408ed0();
  local_8._0_1_ = 7;
  param_1[0x24] = in_stack_00000024;
  param_1[0x25] = in_stack_0000007c;
  param_1[0x27] = in_stack_00000084;
  param_1[0x26] = in_stack_00000080;
  param_1[0x2d] = 0xf;
  param_1[0x2c] = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  FUN_00408ed0();
  local_8 = CONCAT31(local_8._1_3_,8);
  param_1[0x34] = 0xf;
  param_1[0x33] = 0;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  FUN_00408ed0();
  if (0xf < in_stack_0000001c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (0xf < in_stack_0000003c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (0xf < in_stack_00000058) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  in_stack_00000058 = 0xf;
  in_stack_00000054 = 0;
  in_stack_00000044 = in_stack_00000044 & 0xffffff00;
  if (0xf < in_stack_00000074) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  in_stack_00000074 = 0xf;
  in_stack_00000070 = 0;
  in_stack_00000060 = in_stack_00000060 & 0xffffff00;
  if (0xf < in_stack_0000009c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

