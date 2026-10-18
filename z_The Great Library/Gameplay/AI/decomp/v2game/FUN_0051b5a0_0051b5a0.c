// FUN_0051b5a0 @ 0051b5a0 body=[[0051b5a0, 0051b5ed] [0051b5f1, 0051b601]]


void FUN_0051b5a0(undefined4 param_1)

{
  int in_ECX;
  uint in_stack_00000018;
  undefined4 uStack_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3ce98;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_005498a0(&uStack_18,*(undefined4 *)(in_ECX + 0x174),&param_1);
  FUN_00549840();
  if (0xf < in_stack_00000018) {
    uStack_18 = param_1;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return;
}

