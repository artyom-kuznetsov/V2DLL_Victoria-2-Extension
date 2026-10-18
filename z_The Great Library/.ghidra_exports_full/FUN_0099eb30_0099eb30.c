// FUN_0099eb30 @ 0099eb30 body=[[0099eb30, 0099eba3]]


undefined4 * FUN_0099eb30(undefined4 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3aec8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined1 *)((int)param_1 + -7) = 1;
  local_8 = 0;
  *param_1 = &PTR_FUN_00e384c8;
  *(undefined8 *)(param_1 + 1) = *in_ECX;
  param_1[3] = *(undefined4 *)(in_ECX + 1);
  *(undefined8 *)(param_1 + 4) = *param_2;
  *(undefined8 *)(param_1 + 6) = param_2[1];
  param_1[8] = *(undefined4 *)(param_2 + 2);
  uVar1 = tbb::internal::get_initial_auto_partitioner_divisor();
  param_1[9] = uVar1;
  ExceptionList = local_10;
  return param_1;
}

