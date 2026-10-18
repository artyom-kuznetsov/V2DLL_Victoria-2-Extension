// FUN_00451640 @ 00451640 body=[[00451640, 004516c3] [004516c7, 004516d9]]


void FUN_00451640(void)

{
  int local_28 [5];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b4d528;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_004518c0();
  local_28[0] = 0;
  local_28[1] = 0;
  local_28[2] = 0;
  local_c = 0;
  FUN_00409350(&DAT_00df9b74,4);
  FUN_00451930(local_28);
  FUN_00451ab0();
  if (local_28[0] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_14;
  return;
}

