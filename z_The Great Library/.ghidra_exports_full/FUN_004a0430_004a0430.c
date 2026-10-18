// FUN_004a0430 @ 004a0430 body=[[004a0430, 004a046e]]


void FUN_004a0430(int param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b49a58;
  pvStack_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &pvStack_10;
  FUN_004a2b00(**(undefined4 **)(param_1 + 4),*(undefined4 **)(param_1 + 4));
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*(undefined4 *)(param_1 + 4));
}

