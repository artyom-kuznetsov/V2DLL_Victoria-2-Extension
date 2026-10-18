// FUN_008743c0 @ 008743c0 body=[[008743c0, 00874524] [00874528, 0087453c]]


undefined4 * FUN_008743c0(undefined4 *param_1,undefined4 param_2)

{
  uint in_stack_0000001c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4276c;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  *param_1 = CDecision::vftable;
  param_1[7] = 0xf;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  FUN_00408ed0(&param_2,0,0xffffffff);
  param_1[10] = 0x18d;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined2 *)(param_1 + 0xf) = 0;
  param_1[9] = CAndTrigger::vftable;
  param_1[0x11] = 0x18d;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined2 *)(param_1 + 0x16) = 0;
  param_1[0x10] = CAndTrigger::vftable;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  param_1[0x18] = 0x18d;
  param_1[0x17] = CEffect::vftable;
  *(undefined2 *)(param_1 + 0x1e) = 0;
  *(undefined1 *)(param_1 + 0x1f) = 1;
  param_1[0x25] = 0xf;
  param_1[0x24] = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  local_8._0_1_ = 5;
  *(undefined1 *)(param_1 + 0x27) = 0;
  param_1[0x2d] = 0xf;
  param_1[0x2c] = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  FUN_00409350(&DAT_00ded94d,0);
  local_8._0_1_ = 6;
  param_1[0x34] = 0xf;
  param_1[0x33] = 0;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  FUN_00409350(&DAT_00ded94d,0);
  local_8._0_1_ = 7;
  param_1[0x3b] = 0xf;
  param_1[0x3a] = 0;
  *(undefined1 *)(param_1 + 0x36) = 0;
  FUN_00409350(&DAT_00ded94d,0);
  local_8 = CONCAT31(local_8._1_3_,8);
  param_1[0x42] = 0xf;
  param_1[0x41] = 0;
  *(undefined1 *)(param_1 + 0x3d) = 0;
  FUN_00409350(&DAT_00ded94d,0);
  param_1[0x45] = 0x18d;
  param_1[0x44] = CMeanTimeToHappen::vftable;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x46] = 1000;
  if (0xf < in_stack_0000001c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_2);
  }
  ExceptionList = local_10;
  return param_1;
}

