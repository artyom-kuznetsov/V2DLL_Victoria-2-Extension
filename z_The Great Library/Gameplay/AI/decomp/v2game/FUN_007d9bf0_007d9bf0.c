// FUN_007d9bf0 @ 007d9bf0 body=[[007d9bf0, 007d9c56] [007d9c5a, 007d9c84] [007d9c88, 007d9cb4]]


void FUN_007d9bf0(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3ee24;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = CCounterObject::vftable;
  local_8 = 2;
  if ((int *)param_1[0x5c] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x5c] + 0x24))(1);
  }
  if ((int *)param_1[0x6d] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x6d] + 0x24))(1);
  }
  if (0xf < (uint)param_1[0x69]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[100]);
  }
  param_1[0x69] = 0xf;
  param_1[0x68] = 0;
  *(undefined1 *)(param_1 + 100) = 0;
  if (0xf < (uint)param_1[0x62]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x5d]);
  }
  param_1[0x62] = 0xf;
  param_1[0x61] = 0;
  *(undefined1 *)(param_1 + 0x5d) = 0;
  FUN_007d9930();
  ExceptionList = local_10;
  return;
}

