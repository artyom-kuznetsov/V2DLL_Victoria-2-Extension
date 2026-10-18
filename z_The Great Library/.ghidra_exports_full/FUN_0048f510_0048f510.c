// FUN_0048f510 @ 0048f510 body=[[0048f510, 0048f548] [0048f552, 0048f56b]]


void FUN_0048f510(int *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b401e8;
  pvStack_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &pvStack_10;
  FUN_0048f3f0();
  if (*param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*param_1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(param_1);
}

