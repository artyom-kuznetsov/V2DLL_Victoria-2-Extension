// FUN_00739b90 @ 00739b90 body=[[00739b90, 00739bed] [00739c0d, 00739c1f]]


undefined4 * FUN_00739b90(int param_1,undefined4 *param_2)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b442c9;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; in_ECX != param_1; in_ECX = in_ECX + 0x10) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      local_8 = 2;
      FUN_00738ab0(in_ECX);
    }
    param_2 = param_2 + 4;
  }
  ExceptionList = local_10;
  return param_2;
}

