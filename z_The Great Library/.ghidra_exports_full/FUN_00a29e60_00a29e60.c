// FUN_00a29e60 @ 00a29e60 body=[[00a29e60, 00a29ec8] [00a29ecc, 00a29ee5] [00a29ee9, 00a29f03]]


void FUN_00a29e60(int *param_1)

{
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3a716;
  local_10 = ExceptionList;
  local_8 = 1;
  piVar1 = (int *)*param_1;
  ExceptionList = &local_10;
  if (piVar1 != (int *)0x0) {
    ExceptionList = &local_10;
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  if (param_1[0x20] != 0) {
    (**(code **)(*(int *)param_1[0x20] + 8))((int *)param_1[0x20]);
  }
  if (param_1[1] != 0) {
    (**(code **)(*(int *)param_1[1] + 8))((int *)param_1[1]);
  }
  if (0xf < (uint)param_1[0x10]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0xb]);
  }
  param_1[0x10] = 0xf;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  if (param_1[6] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[6]);
  }
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  ExceptionList = local_10;
  return;
}

