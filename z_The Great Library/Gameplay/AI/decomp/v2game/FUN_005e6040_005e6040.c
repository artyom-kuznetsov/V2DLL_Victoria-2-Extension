// FUN_005e6040 @ 005e6040 body=[[005e6040, 005e60bf] [005e60e5, 005e60f7]]


undefined4 * FUN_005e6040(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b45a31;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; param_1 != param_2; param_1 = param_1 + 10) {
    local_8 = 1;
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
      param_3[8] = 0xf;
      param_3[7] = 0;
      *(undefined1 *)(param_3 + 3) = 0;
      FUN_00408ed0(param_1 + 3,0,0xffffffff);
    }
    param_3 = param_3 + 10;
  }
  ExceptionList = local_10;
  return param_3;
}

