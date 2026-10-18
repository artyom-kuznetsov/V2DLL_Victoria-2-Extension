// FUN_00a49280 @ 00a49280 body=[[00a49280, 00a492f8] [00a492fc, 00a4931f] [00a49323, 00a4933d] [00a49341, 00a49360]]


void FUN_00a49280(undefined4 *param_1)

{
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b41066;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_FUN_00e413b8;
  param_1[0x23] = &PTR_LAB_00e41438;
  local_8 = 1;
  piVar1 = (int *)param_1[0x2b];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  FUN_004be200();
  if (0xf < (uint)param_1[0x29]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x24]);
  }
  param_1[0x29] = 0xf;
  param_1[0x28] = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
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

