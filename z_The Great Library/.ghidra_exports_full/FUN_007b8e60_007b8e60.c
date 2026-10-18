// FUN_007b8e60 @ 007b8e60 body=[[007b8e60, 007b8ee0] [007b8ee4, 007b8ef3]]


void FUN_007b8e60(int param_1,float param_2)

{
  int *piVar1;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3def8;
  local_10 = ExceptionList;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("download_progress",0x11);
  local_8 = 0;
  piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0x20) + 0x44))(local_2c);
  (**(code **)(*piVar1 + 0x48))((int)(param_2 * 100.0));
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  ExceptionList = local_10;
  return;
}

