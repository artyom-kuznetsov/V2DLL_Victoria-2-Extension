// FUN_009f8180 @ 009f8180 body=[[009f8180, 009f8277] [009f827b, 009f828f]]


undefined4 *
FUN_009f8180(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
            undefined4 param_13,undefined4 param_14,undefined4 param_15)

{
  uint in_stack_00000050;
  undefined1 in_stack_00000058;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3dc79;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  *param_1 = CSessionConfiguration::vftable;
  param_1[7] = 0xf;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  FUN_00408ed0(param_2,0,0xffffffff);
  local_8._0_1_ = 1;
  param_1[0xe] = 0xf;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  FUN_00408ed0(param_5,0,0xffffffff);
  local_8._0_1_ = 2;
  param_1[0x15] = 0xf;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  FUN_00408ed0(param_3,0,0xffffffff);
  local_8 = CONCAT31(local_8._1_3_,3);
  param_1[0x17] = param_6;
  param_1[0x18] = param_7;
  param_1[0x19] = param_9;
  param_1[0x1a] = param_4;
  param_1[0x1b] = param_8;
  param_1[0x1d] = param_11;
  param_1[0x1c] = CVersion::vftable;
  param_1[0x1e] = param_12;
  param_1[0x1f] = param_13;
  param_1[0x20] = param_14;
  param_1[0x26] = 0xf;
  param_1[0x25] = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  FUN_00408ed0(&param_15,0,0xffffffff);
  *(undefined1 *)(param_1 + 0x28) = in_stack_00000058;
  if (0xf < in_stack_00000050) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_15);
  }
  ExceptionList = local_10;
  return param_1;
}

