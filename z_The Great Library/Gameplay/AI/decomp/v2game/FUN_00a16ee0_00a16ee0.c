// FUN_00a16ee0 @ 00a16ee0 body=[[00a16ee0, 00a16f72] [00a16f76, 00a16f89]]


undefined4 * FUN_00a16ee0(undefined4 *param_1,undefined4 param_2)

{
  uint in_stack_0000001c;
  undefined4 in_stack_00000024;
  undefined1 in_stack_00000028;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b48f0e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  *param_1 = &PTR_FUN_00e3f0c4;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  local_8 = 1;
  uStack_7 = 0;
  param_1[0xb] = 0xf;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  FUN_00408ed0(&param_2,0,0xffffffff);
  _local_8 = CONCAT31(uStack_7,2);
  param_1[0xd] = in_stack_00000024;
  param_1[0x13] = 0xf;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  FUN_00409350(&DAT_00ded94d,0);
  *(undefined1 *)(param_1 + 0x15) = in_stack_00000028;
  if (0xf < in_stack_0000001c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_2);
  }
  ExceptionList = local_10;
  return param_1;
}

