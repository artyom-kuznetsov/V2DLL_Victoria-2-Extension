// FUN_004a7b40 @ 004a7b40 body=[[004a7b40, 004a7b98] [004a7ba2, 004a7bbd]]


void FUN_004a7b40(undefined4 *param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar1 = DAT_012588e8;
  puStack_c = &LAB_00b3aacb;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  *param_1 = CSelectable::vftable;
  if (*(char *)(param_1 + 1) != '\0') {
    (**(code **)(**(int **)(iVar1 + 0xb24) + 0xa4))(1);
  }
  if (param_1[2] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[2]);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  ExceptionList = local_10;
  return;
}

