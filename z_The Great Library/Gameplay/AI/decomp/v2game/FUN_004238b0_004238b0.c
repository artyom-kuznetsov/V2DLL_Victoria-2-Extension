// FUN_004238b0 @ 004238b0 body=[[004238b0, 004238f9] [004238fd, 0042390d]]


undefined4 FUN_004238b0(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint in_stack_0000001c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3a868;
  local_10 = ExceptionList;
  local_8 = 0;
  puVar1 = param_2;
  if (in_stack_0000001c < 0x10) {
    puVar1 = &param_2;
  }
  ExceptionList = &local_10;
  uVar2 = FUN_00418e30(param_1,puVar1);
  if (0xf < in_stack_0000001c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_2);
  }
  ExceptionList = local_10;
  return uVar2;
}

