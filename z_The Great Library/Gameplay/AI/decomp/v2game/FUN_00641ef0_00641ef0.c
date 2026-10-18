// FUN_00641ef0 @ 00641ef0 body=[[00641ef0, 00641f54] [00641f58, 00641f76] [00641f7a, 00641f8f] [00641f93, 00641fbf]]


void FUN_00641ef0(int param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3f6bd;
  pvStack_10 = ExceptionList;
  local_8 = 6;
  DAT_012588d8 = DAT_012588d8 + -1;
  ExceptionList = &pvStack_10;
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
    ExceptionList = &pvStack_10;
    (**(code **)(**(int **)(param_1 + 0x10) + 0x24))(1);
  }
  FUN_00642070(param_1);
  local_8._0_1_ = 5;
  FUN_00414d20();
  if (*(int *)(param_1 + 0x98) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(param_1 + 0x98));
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (*(int *)(param_1 + 100) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(param_1 + 100));
  }
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  if (*(int *)(param_1 + 0x54) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(param_1 + 0x54));
  }
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  local_8 = CONCAT31(local_8._1_3_,7);
  FUN_00445600(**(undefined4 **)(param_1 + 0x40),*(undefined4 **)(param_1 + 0x40));
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*(undefined4 *)(param_1 + 0x40));
}

