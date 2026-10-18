// FUN_00a834b0 @ 00a834b0 body=[[00a834b0, 00a834f9]]


void FUN_00a834b0(int param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b40bb9;
  pvStack_10 = ExceptionList;
  local_8 = 3;
  ExceptionList = &pvStack_10;
  FUN_00a84330(**(undefined4 **)(param_1 + 0x54),*(undefined4 **)(param_1 + 0x54));
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*(undefined4 *)(param_1 + 0x54));
}

