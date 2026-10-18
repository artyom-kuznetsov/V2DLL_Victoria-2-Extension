// FUN_00a71420 @ 00a71420 body=[[00a71420, 00a71499]]


undefined4 * FUN_00a71420(undefined4 *param_1)

{
  int in_ECX;
  undefined4 *puVar1;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b40c38;
  local_10 = ExceptionList;
  local_14 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  if ((int)(*(int *)(in_ECX + 0xc) - *(int *)(in_ECX + 8) & 0xfffffff0U) < 1) {
    ExceptionList = &local_10;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    puVar1 = &local_24;
    local_8 = 2;
  }
  else {
    puVar1 = *(undefined4 **)(in_ECX + 8);
    ExceptionList = &local_10;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    local_8 = 1;
  }
  FUN_004134a0(puVar1);
  ExceptionList = local_10;
  return param_1;
}

