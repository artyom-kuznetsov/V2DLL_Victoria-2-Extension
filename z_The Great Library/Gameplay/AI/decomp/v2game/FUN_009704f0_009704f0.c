// FUN_009704f0 @ 009704f0 body=[[009704f0, 00970566] [0097058a, 0097059c]]


undefined4 * FUN_009704f0(int param_1,undefined4 *param_2)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b3e6a9;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; in_ECX != param_1; in_ECX = in_ECX + 0x1c) {
    if (param_2 != (undefined4 *)0x0) {
      param_2[1] = *(undefined4 *)(in_ECX + 4);
      *param_2 = CMeanTimeToHappen::vftable;
      param_2[2] = *(undefined4 *)(in_ECX + 8);
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[5] = 0;
      local_8 = 2;
      FUN_009beeb0(in_ECX + 0xc);
    }
    param_2 = param_2 + 7;
  }
  ExceptionList = local_10;
  return param_2;
}

