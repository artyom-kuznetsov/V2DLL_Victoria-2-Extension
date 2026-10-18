// FUN_00a6b7d0 @ 00a6b7d0 body=[[00a6b7d0, 00a6b84b] [00a6b86b, 00a6b87d]]


undefined4 * FUN_00a6b7d0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b40d01;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; param_1 != param_2; param_1 = param_1 + 9) {
    local_8 = 1;
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      param_3[6] = 0xf;
      param_3[5] = 0;
      *(undefined1 *)(param_3 + 1) = 0;
      FUN_00408ed0(param_1 + 1,0,0xffffffff);
      param_3[8] = param_1[8];
    }
    param_3 = param_3 + 9;
  }
  ExceptionList = local_10;
  return param_3;
}

