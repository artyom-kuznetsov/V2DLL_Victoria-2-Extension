// FUN_007e6900 @ 007e6900 body=[[007e6900, 007e695a] [007e695e, 007e6979] [007e697d, 007e699b]]


void FUN_007e6900(undefined4 *param_1)

{
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b48988;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = CFlagType::vftable;
  local_8 = 0;
  piVar1 = (int *)param_1[0x24];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)param_1[0x25];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  if (0xf < (uint)param_1[0xf]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[10]);
  }
  param_1[0xf] = 0xf;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  if (0xf < (uint)param_1[7]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[2]);
  }
  param_1[6] = 0;
  param_1[7] = 0xf;
  *(undefined1 *)(param_1 + 2) = 0;
  ExceptionList = local_10;
  return;
}

