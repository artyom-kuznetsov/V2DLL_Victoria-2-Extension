// FUN_00460060 @ 00460060 body=[[00460060, 004600a9]]


void FUN_00460060(int param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b46ed5;
  pvStack_10 = ExceptionList;
  local_8 = 1;
  ExceptionList = &pvStack_10;
  FUN_00462440(**(undefined4 **)(param_1 + 0x1c),*(undefined4 **)(param_1 + 0x1c));
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*(undefined4 *)(param_1 + 0x1c));
}

