// FUN_00a3abf0 @ 00a3abf0 body=[[00a3abf0, 00a3ac58] [00a3ac78, 00a3ac8a]]


undefined4 * FUN_00a3abf0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b489b9;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; in_ECX != param_1; in_ECX = in_ECX + 5) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = *in_ECX;
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[3] = 0;
      local_8 = 2;
      FUN_00a39e60(in_ECX + 1);
    }
    param_2 = param_2 + 5;
  }
  ExceptionList = local_10;
  return param_2;
}

