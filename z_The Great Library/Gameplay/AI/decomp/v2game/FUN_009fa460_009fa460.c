// FUN_009fa460 @ 009fa460 body=[[009fa460, 009fa49f] [009fa4a5, 009fa4b5]]


void FUN_009fa460(undefined4 param_1)

{
  int in_ECX;
  uint in_stack_00000018;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3ce98;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  (**(code **)(*(int *)(in_ECX + 4) + 4))(&param_1);
  if (0xf < in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1);
  }
  ExceptionList = local_10;
  return;
}

