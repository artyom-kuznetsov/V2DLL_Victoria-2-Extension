// FUN_00994010 @ 00994010 body=[[00994010, 0099404c]]


void FUN_00994010(int param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b49a58;
  pvStack_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &pvStack_10;
  FUN_00462440(**(undefined4 **)(param_1 + 4),*(undefined4 **)(param_1 + 4));
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*(undefined4 *)(param_1 + 4));
}

