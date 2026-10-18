// FUN_0051b6c0 @ 0051b6c0 body=[[0051b6c0, 0051b7d7] [0051b7db, 0051b807]]


undefined4 FUN_0051b6c0(int param_1,undefined4 param_2)

{
  int *piVar1;
  int in_EDX;
  uint local_80;
  void *pvStack_1c;
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b3ff33;
  local_14 = ExceptionList;
  piVar1 = (int *)(*(int *)(param_1 + 0x1234) + in_EDX * 4);
  if (*piVar1 != 0) {
    ExceptionList = &local_14;
    (**(code **)(*(int *)*piVar1 + 0x28))();
    ExceptionList = pvStack_1c;
    return param_2;
  }
  local_c = 0;
  ExceptionList = &local_14;
  FUN_0051b610();
  FUN_00988b20();
  local_c._0_1_ = 1;
  FUN_00408ed0();
  local_c = (uint)local_c._1_3_ << 8;
  if (0xf < local_80) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  FUN_0040c830();
  FUN_00459820();
  ExceptionList = local_14;
  return param_2;
}

