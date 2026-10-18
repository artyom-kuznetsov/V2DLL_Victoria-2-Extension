// FUN_00a86590 @ 00a86590 body=[[00a86590, 00a8660c] [00a86610, 00a8662e]]


void FUN_00a86590(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3b3b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_FUN_00e44520;
  local_8 = 0;
  if ((int *)param_1[0x2e] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x2e] + 0x24))(1);
  }
  *param_1 = &PTR_FUN_00e44610;
  local_8 = 1;
  FUN_009b3740(param_1 + 0x1d);
  *param_1 = &PTR_FUN_00e387f8;
  if (*(undefined4 **)(param_1[0xd] + 0x98) == param_1) {
    *(undefined4 *)(param_1[0xd] + 0x98) = 0;
  }
  DAT_01258a84 = DAT_01258a84 + -1;
  if (0xf < (uint)param_1[10]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[5]);
  }
  param_1[9] = 0;
  param_1[10] = 0xf;
  *(undefined1 *)(param_1 + 5) = 0;
  ExceptionList = local_10;
  return;
}

