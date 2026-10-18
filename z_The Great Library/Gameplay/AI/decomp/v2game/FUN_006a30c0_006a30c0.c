// FUN_006a30c0 @ 006a30c0 body=[[006a30c0, 006a3149] [006a314d, 006a31dd] [006a31e1, 006a31ed] [006a31f1, 006a3201]]


void FUN_006a30c0(undefined4 param_1,int param_2)

{
  int iVar1;
  void **ppvVar2;
  int in_EDX;
  int in_stack_0000001c;
  int in_stack_00000020;
  int local_24 [5];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b929f8;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  ppvVar2 = &local_10;
  if (in_stack_0000001c * 2 <= in_stack_00000020) {
    do {
      iVar1 = in_EDX + in_stack_0000001c * 4;
      in_EDX = iVar1 + in_stack_0000001c * 4;
      FUN_006a37f0(local_24,iVar1,in_EDX);
      if (local_24[0] != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      in_stack_00000020 = in_stack_00000020 + in_stack_0000001c * -2;
      ppvVar2 = ExceptionList;
    } while (in_stack_0000001c * 2 <= in_stack_00000020);
  }
  ExceptionList = ppvVar2;
  if (in_stack_0000001c < in_stack_00000020) {
    FUN_006a37f0(local_24,in_EDX + in_stack_0000001c * 4,param_1);
  }
  else {
    FUN_0098f4a0();
  }
  if (local_24[0] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (param_2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return;
}

