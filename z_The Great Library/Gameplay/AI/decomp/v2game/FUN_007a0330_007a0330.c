// FUN_007a0330 @ 007a0330 body=[[007a0330, 007a03a4] [007a03a8, 007a03ba]]


undefined4 * FUN_007a0330(undefined4 *param_1,undefined4 param_2)

{
  uint in_stack_0000001c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b59953;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  *param_1 = &PTR_FUN_00e3a544;
  param_1[2] = DAT_00f0d850;
  param_1[3] = DAT_00f0d854;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[10] = 0xf;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  local_8 = 1;
  FUN_009c1390(&DAT_00f0d850);
  *param_1 = CMessageHandlerInterface::vftable;
  if (0xf < in_stack_0000001c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_2);
  }
  ExceptionList = local_10;
  return param_1;
}

