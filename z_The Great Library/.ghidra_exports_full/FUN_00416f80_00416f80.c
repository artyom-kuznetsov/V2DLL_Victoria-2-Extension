// FUN_00416f80 @ 00416f80 body=[[00416f80, 00416fc3] [00416fc7, 00416fdc] [00416fe0, 00417003] [00417007, 00417021]]


void FUN_00416f80(int *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4dcee;
  local_10 = ExceptionList;
  local_8 = 2;
  ExceptionList = &local_10;
  FUN_00418480();
  if (param_1[8] != 0) {
    FUN_00413860();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[8]);
  }
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  if (param_1[4] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[4]);
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  if (*param_1 != 0) {
    FUN_004197b0(param_1[1],param_1);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*param_1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  ExceptionList = local_10;
  return;
}

