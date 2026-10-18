// FUN_00a46af0 @ 00a46af0 body=[[00a46af0, 00a46b2c]]


void FUN_00a46af0(int param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b49a58;
  pvStack_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &pvStack_10;
  FUN_00a46f10(**(undefined4 **)(param_1 + 4),*(undefined4 **)(param_1 + 4));
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*(undefined4 *)(param_1 + 4));
}

