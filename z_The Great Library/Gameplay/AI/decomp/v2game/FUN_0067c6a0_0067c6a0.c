// FUN_0067c6a0 @ 0067c6a0 body=[[0067c6a0, 0067c71e] [0067c722, 0067c732]]


void FUN_0067c6a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  uint in_stack_00000024;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4c528;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  cVar1 = FUN_006477c0(&param_4,param_2,param_1);
  if (cVar1 != '\0') {
    FUN_0067c740();
  }
  cVar1 = FUN_006477c0(&param_4,param_3,param_2);
  if (cVar1 != '\0') {
    FUN_0067c740();
  }
  cVar1 = FUN_006477c0(&param_4,param_2,param_1);
  if (cVar1 != '\0') {
    FUN_0067c740();
  }
  if (0xf < in_stack_00000024) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_4);
  }
  ExceptionList = local_10;
  return;
}

