// FUN_00427800 @ 00427800 body=[[00427800, 00427832] [00427836, 0042784b] [0042784f, 0042787a] [0042787e, 00427893] [00427897, 004278b1]]


void FUN_00427800(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3b2c1;
  local_10 = ExceptionList;
  local_8 = 2;
  if (*(int *)(param_1 + 0x5c) != 0) {
    ExceptionList = &local_10;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(param_1 + 0x5c));
  }
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  if (*(int *)(param_1 + 0x4c) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(param_1 + 0x4c));
  }
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  FUN_0042b8b0(param_1 + 0x3c);
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_0042b8b0(param_1 + 0x2c);
  if (*(int *)(param_1 + 0x1c) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(param_1 + 0x1c));
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(param_1 + 0xc));
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  ExceptionList = local_10;
  return;
}

