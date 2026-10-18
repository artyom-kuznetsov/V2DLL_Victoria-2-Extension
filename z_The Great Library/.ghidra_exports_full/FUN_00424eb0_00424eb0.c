// FUN_00424eb0 @ 00424eb0 body=[[00424eb0, 00424efe] [00424f02, 00424f1a] [00424f1e, 00424f33] [00424f37, 00424f4c] [00424f50, 00424f65] [00424f69, 00424f83]]


void FUN_00424eb0(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3b314;
  local_10 = ExceptionList;
  local_8 = 5;
  ExceptionList = &local_10;
  FUN_0042b8b0(param_1 + 0x98);
  local_8 = CONCAT31(local_8._1_3_,4);
  FUN_0042b8b0(param_1 + 0x88);
  if (*(int *)(param_1 + 0x78) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(param_1 + 0x78));
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (*(int *)(param_1 + 0x68) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(param_1 + 0x68));
  }
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(int *)(param_1 + 0x4c) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(param_1 + 0x4c));
  }
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  if (*(int *)(param_1 + 0x3c) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(param_1 + 0x3c));
  }
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  if (*(int *)(param_1 + 0x2c) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(param_1 + 0x2c));
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  ExceptionList = local_10;
  return;
}

