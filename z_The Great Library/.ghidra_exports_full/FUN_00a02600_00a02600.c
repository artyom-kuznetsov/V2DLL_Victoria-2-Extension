// FUN_00a02600 @ 00a02600 body=[[00a02600, 00a026f7] [00a026fb, 00a0270e]]


undefined4 *
FUN_00a02600(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9)

{
  uint in_stack_00000038;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b41649;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  *param_1 = CCommand::vftable;
  param_1[7] = 0xf;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  local_8 = 1;
  uStack_7 = 0;
  param_1[0xb] = 0xea;
  param_1[0xc] = 0xea;
  *(undefined2 *)(param_1 + 0xd) = 0xffff;
  FUN_00409350(&DAT_00ded94d,0);
  param_1[9] = param_3;
  *(undefined2 *)(param_1 + 10) = param_4;
  *(undefined2 *)((int)param_1 + 0x36) = 1;
  param_1[0xe] = 0;
  *param_1 = &PTR_FUN_00e3e778;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  local_8 = 3;
  FUN_004134a0(param_5);
  local_8 = 4;
  param_1[0x14] = param_6;
  param_1[0x16] = param_8;
  param_1[0x15] = param_7;
  param_1[0x1c] = 0xf;
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  FUN_00408ed0(&param_9,0,0xffffffff);
  _local_8 = CONCAT31(uStack_7,5);
  param_1[0x23] = 0xf;
  param_1[0x22] = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  FUN_00408ed0(param_2,0,0xffffffff);
  if (0xf < in_stack_00000038) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_9);
  }
  ExceptionList = local_10;
  return param_1;
}

