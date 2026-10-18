// FUN_004e8f90 @ 004e8f90 body=[[004e8f90, 004e901a] [004e901e, 004e9030]]


void FUN_004e8f90(int param_1)

{
  undefined1 local_2c [20];
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3def8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  __allmul(*(undefined4 *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 0xc4),0x320000,0);
  FUN_00988bb0(local_2c,5);
  local_8 = 0;
  FUN_0042c180();
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return;
}

