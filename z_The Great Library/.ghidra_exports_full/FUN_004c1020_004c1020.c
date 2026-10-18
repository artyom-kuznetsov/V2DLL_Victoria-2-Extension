// FUN_004c1020 @ 004c1020 body=[[004c1020, 004c1052] [004c1056, 004c1082]]


void FUN_004c1020(int param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3d153;
  pvStack_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)(param_1 + 0x5c) != 0) {
    ExceptionList = &pvStack_10;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(param_1 + 0x5c));
  }
  ExceptionList = &pvStack_10;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  local_8 = 1;
  FUN_00445600(**(undefined4 **)(param_1 + 0x50),*(undefined4 **)(param_1 + 0x50));
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*(undefined4 *)(param_1 + 0x50));
}

