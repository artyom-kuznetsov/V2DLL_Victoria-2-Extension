// FUN_005c5bd0 @ 005c5bd0 body=[[005c5bd0, 005c5c48] [005c5c6c, 005c5c7e]]


undefined4 * FUN_005c5bd0(int param_1,undefined4 *param_2)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b3f999;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; in_ECX != param_1; in_ECX = in_ECX + 0x1c) {
    if (param_2 != (undefined4 *)0x0) {
      param_2[1] = *(undefined4 *)(in_ECX + 4);
      *param_2 = CUniqueUnitNameInternal::vftable;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      local_8 = 2;
      FUN_009d5f10(in_ECX + 8);
      *(undefined2 *)(param_2 + 6) = *(undefined2 *)(in_ECX + 0x18);
    }
    param_2 = param_2 + 7;
  }
  ExceptionList = local_10;
  return param_2;
}

