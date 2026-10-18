// FUN_0054cba0 @ 0054cba0 body=[[0054cba0, 0054cbfd] [0054cc1d, 0054cc2f]]


undefined4 * FUN_0054cba0(int param_1,undefined4 *param_2)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b463c9;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; in_ECX != param_1; in_ECX = in_ECX + 0x10) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      local_8 = 2;
      FUN_0054b8c0(in_ECX);
    }
    param_2 = param_2 + 4;
  }
  ExceptionList = local_10;
  return param_2;
}

