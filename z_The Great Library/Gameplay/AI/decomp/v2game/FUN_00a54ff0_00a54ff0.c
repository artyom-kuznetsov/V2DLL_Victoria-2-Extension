// FUN_00a54ff0 @ 00a54ff0 body=[[00a54ff0, 00a55168] [00a5516c, 00a55180]]


undefined4 * FUN_00a54ff0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint in_stack_0000001c;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b487ae;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  param_1[6] = 0;
  param_1[7] = 0xf;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[9] = 0;
  param_1[0xf] = 0xf;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  local_8 = 1;
  uStack_7 = 0;
  *param_1 = &PTR_FUN_00e41a40;
  param_1[0x1b] = 0xf;
  param_1[0x1a] = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  FUN_00409350(&DAT_00ded94d,0);
  local_8 = 2;
  param_1[0x22] = 0xf;
  param_1[0x21] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  FUN_00409350(&DAT_00ded94d,0);
  uVar1 = DAT_00f092fc;
  local_8 = 3;
  param_1[0x24] = 0xffffffff;
  param_1[0x25] = 1;
  param_1[0x26] = in_stack_00000024;
  param_1[0x27] = 0;
  param_1[0x28] = uVar1;
  param_1[0x29] = in_stack_00000028;
  param_1[0x2a] = in_stack_0000002c;
  param_1[0x30] = 0xf;
  param_1[0x2f] = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  FUN_00409350(&DAT_00ded94d,0);
  param_1[0x37] = 0xf;
  param_1[0x36] = 0;
  *(undefined1 *)(param_1 + 0x32) = 0;
  param_1[0x3e] = 0xf;
  param_1[0x3d] = 0;
  *(undefined1 *)(param_1 + 0x39) = 0;
  local_8 = 6;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  *(undefined2 *)(param_1 + 0x48) = 1;
  param_1[0x49] = 0;
  param_1[0x4f] = 0xf;
  param_1[0x4e] = 0;
  *(undefined1 *)(param_1 + 0x4a) = 0;
  FUN_00409350(&DAT_00ded94d,0);
  _local_8 = CONCAT31(uStack_7,7);
  FUN_00408ed0(&param_2,0,0xffffffff);
  if (0xf < in_stack_0000001c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_2);
  }
  ExceptionList = local_10;
  return param_1;
}

