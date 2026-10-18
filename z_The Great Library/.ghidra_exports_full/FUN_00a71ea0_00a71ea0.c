// FUN_00a71ea0 @ 00a71ea0 body=[[00a71ea0, 00a71ede] [00a71ee4, 00a71ef4]]


void FUN_00a71ea0(undefined4 param_1)

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
  FUN_00a72560(in_ECX + 0x58,&param_1);
  if (0xf < in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1);
  }
  ExceptionList = local_10;
  return;
}

