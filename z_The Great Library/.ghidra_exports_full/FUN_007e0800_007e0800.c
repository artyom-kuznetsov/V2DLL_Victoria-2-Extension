// FUN_007e0800 @ 007e0800 body=[[007e0800, 007e0841] [007e0845, 007e0877] [007e087b, 007e089c] [007e08a0, 007e08d2]]


void FUN_007e0800(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b59592;
  local_10 = ExceptionList;
  local_8 = 3;
  ExceptionList = &local_10;
  FUN_007e1ad0();
  if (*(int *)(param_1 + 0x6bd90) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(param_1 + 0x6bd90));
  }
  *(undefined4 *)(param_1 + 0x6bd90) = 0;
  *(undefined4 *)(param_1 + 0x6bd94) = 0;
  *(undefined4 *)(param_1 + 0x6bd98) = 0;
  if (*(int *)(param_1 + 0x6bd80) != 0) {
    FUN_00413860();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(param_1 + 0x6bd80));
  }
  *(undefined4 *)(param_1 + 0x6bd80) = 0;
  *(undefined4 *)(param_1 + 0x6bd84) = 0;
  *(undefined4 *)(param_1 + 0x6bd88) = 0;
  if (*(int *)(param_1 + 0x6bd6c) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(param_1 + 0x6bd6c));
  }
  *(undefined4 *)(param_1 + 0x6bd6c) = 0;
  *(undefined4 *)(param_1 + 0x6bd70) = 0;
  *(undefined4 *)(param_1 + 0x6bd74) = 0;
  local_8 = 0xffffffff;
  FUN_00995c50();
  ExceptionList = local_10;
  return;
}

