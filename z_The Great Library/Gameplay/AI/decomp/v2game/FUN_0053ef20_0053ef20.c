// FUN_0053ef20 @ 0053ef20 body=[[0053ef20, 0053ef7b] [0053ef7f, 0053ef91]]


bool FUN_0053ef20(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint in_stack_0000001c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3a868;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_00408ed0(&param_2,0,0xffffffff);
  iVar1 = FUN_0053ee50(param_1);
  if (0xf < in_stack_0000001c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return iVar1 != 0;
}

