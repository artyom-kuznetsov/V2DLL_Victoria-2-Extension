// FUN_007e8980 @ 007e8980 body=[[007e8980, 007e89e8] [007e89ec, 007e89fb]]


void FUN_007e8980(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
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
  FUN_00409350("GunNode",7);
  local_8 = 0;
  FUN_007e8a80(param_1,param_2,param_3,1,local_2c);
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  ExceptionList = local_10;
  return;
}

