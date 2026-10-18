// FUN_00419dc0 @ 00419dc0 body=[[00419dc0, 00419e23] [00419e45, 00419e57]]


undefined4 * FUN_00419dc0(int param_1,undefined4 *param_2)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b408e9;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; in_ECX != param_1; in_ECX = in_ECX + 0x14) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      local_8 = 2;
      FUN_0043a750(in_ECX);
      param_2[4] = *(undefined4 *)(in_ECX + 0x10);
    }
    param_2 = param_2 + 5;
  }
  ExceptionList = local_10;
  return param_2;
}

