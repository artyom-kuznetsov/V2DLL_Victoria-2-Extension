// FUN_0040a260 @ 0040a260 body=[[0040a260, 0040a2ea] [0040a30a, 0040a31c]]


undefined4 * FUN_0040a260(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b409ac;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; in_ECX != param_1; in_ECX = in_ECX + 0xd) {
    if (param_2 != (undefined4 *)0x0) {
      param_2[7] = 0xf;
      param_2[6] = 0;
      *(undefined1 *)(param_2 + 2) = 0;
      local_8 = 2;
      *param_2 = *in_ECX;
      param_2[1] = in_ECX[1];
      FUN_00408ed0(in_ECX + 2,0,0xffffffff);
      param_2[9] = in_ECX[9];
      param_2[0xb] = in_ECX[0xb];
      param_2[0xc] = in_ECX[0xc];
      param_2[10] = in_ECX[10];
    }
    param_2 = param_2 + 0xd;
  }
  ExceptionList = local_10;
  return param_2;
}

