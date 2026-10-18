// FUN_00aa8e60 @ 00aa8e60 body=[[00aa8e60, 00aa8ecd] [00aa8efa, 00aa8f0d]]


undefined4 * FUN_00aa8e60(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b36561;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uStack_7 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 5) {
    local_8 = 1;
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      FUN_00aa8740(param_1 + 1);
    }
    param_3 = param_3 + 5;
  }
  ExceptionList = local_10;
  return param_3;
}

