// FUN_005e5f40 @ 005e5f40 body=[[005e5f40, 005e5fb8] [005e5fd8, 005e5fea]]


undefined4 * FUN_005e5f40(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b45a51;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; in_ECX != param_1; in_ECX = in_ECX + 10) {
    local_8 = 1;
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = *in_ECX;
      param_2[1] = in_ECX[1];
      param_2[2] = in_ECX[2];
      param_2[8] = 0xf;
      param_2[7] = 0;
      *(undefined1 *)(param_2 + 3) = 0;
      FUN_00408ed0(in_ECX + 3,0,0xffffffff);
    }
    param_2 = param_2 + 10;
  }
  ExceptionList = local_10;
  return param_2;
}

