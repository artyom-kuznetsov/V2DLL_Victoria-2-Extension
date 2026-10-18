// FUN_004510c0 @ 004510c0 body=[[004510c0, 0045111c] [00451120, 00451131]]


void FUN_004510c0(void)

{
  int local_28 [5];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00b4d528;
  local_14 = ExceptionList;
  local_28[0] = 0;
  local_28[1] = 0;
  local_28[2] = 0;
  local_c = 0;
  ExceptionList = &local_14;
  FUN_00451b60(local_28);
  FUN_00451f10(local_28);
  if (local_28[0] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_28[0]);
  }
  ExceptionList = local_14;
  return;
}

