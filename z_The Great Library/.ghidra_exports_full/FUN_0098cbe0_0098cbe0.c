// FUN_0098cbe0 @ 0098cbe0 body=[[0098cbe0, 0098cc2a] [0098cc2e, 0098cc61]]


void FUN_0098cbe0(undefined4 *param_1)

{
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3e536;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_FUN_00e379e8;
  local_8 = 1;
  piVar1 = (int *)param_1[0x50];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  if (param_1[0x52] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x52]);
  }
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  FUN_007d9930();
  ExceptionList = local_10;
  return;
}

