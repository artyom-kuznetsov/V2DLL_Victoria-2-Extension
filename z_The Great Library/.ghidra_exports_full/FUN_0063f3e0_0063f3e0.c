// FUN_0063f3e0 @ 0063f3e0 body=[[0063f3e0, 0063f430] [0063f434, 0063f444]]


void FUN_0063f3e0(int *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3a428;
  local_10 = ExceptionList;
  param_1 = (int *)*param_1;
  if (param_1 != (int *)0x0) {
    local_8 = 0;
    ExceptionList = &local_10;
    FUN_00ad3a70();
    FUN_00b13620();
    local_8 = 0xffffffff;
    if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*param_1)(1);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1);
  }
  return;
}

