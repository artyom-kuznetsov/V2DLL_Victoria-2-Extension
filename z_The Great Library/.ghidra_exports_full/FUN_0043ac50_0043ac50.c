// FUN_0043ac50 @ 0043ac50 body=[[0043ac50, 0043acaa] [0043acae, 0043acc0]]


void FUN_0043ac50(undefined4 param_1)

{
  undefined4 *in_ECX;
  uint in_stack_00000018;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3ce98;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  *in_ECX = 43800000;
  FUN_00408ed0(&param_1,0,0xffffffff);
  FUN_0043bb10();
  if (0xf < in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return;
}

