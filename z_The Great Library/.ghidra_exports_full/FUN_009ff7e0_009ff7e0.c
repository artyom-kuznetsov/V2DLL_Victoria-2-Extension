// FUN_009ff7e0 @ 009ff7e0 body=[[009ff7e0, 009ff8af] [009ff8b3, 009ff8c6]]


undefined4 *
FUN_009ff7e0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  uint in_stack_0000002c;
  undefined4 in_stack_00000034;
  undefined2 in_stack_00000038;
  undefined4 in_stack_0000003c;
  undefined4 in_stack_00000040;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b416ab;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  *param_1 = CCommand::vftable;
  param_1[7] = 0xf;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  local_8 = 1;
  uStack_7 = 0;
  param_1[0xb] = 0xd3;
  param_1[0xc] = 0xd3;
  *(undefined2 *)(param_1 + 0xd) = 0xffff;
  FUN_00409350(&DAT_00ded94d,0);
  param_1[9] = in_stack_00000034;
  *(undefined2 *)(param_1 + 10) = in_stack_00000038;
  *(undefined2 *)((int)param_1 + 0x36) = 1;
  param_1[0xe] = 0;
  _local_8 = CONCAT31(uStack_7,2);
  param_1[0xf] = param_2;
  param_1[0x10] = in_stack_00000040;
  param_1[0x11] = in_stack_0000003c;
  *param_1 = &PTR_FUN_00e3e688;
  param_1[0x12] = param_3;
  param_1[0x13] = param_4;
  param_1[0x14] = param_5;
  param_1[0x1a] = 0xf;
  param_1[0x19] = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  FUN_00408ed0(&param_6,0,0xffffffff);
  if (0xf < in_stack_0000002c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_6);
  }
  ExceptionList = local_10;
  return param_1;
}

