// FUN_007b0380 @ 007b0380 body=[[007b0380, 007b0403] [007b0426, 007b0438]]


undefined4 * FUN_007b0380(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b4328c;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; in_ECX != param_1; in_ECX = in_ECX + 9) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = *in_ECX;
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[3] = 0;
      local_8 = 2;
      FUN_009beeb0(in_ECX + 1);
      param_2[5] = 0;
      param_2[6] = 0;
      param_2[7] = 0;
      local_8 = 4;
      FUN_009beeb0(in_ECX + 5);
    }
    param_2 = param_2 + 9;
  }
  ExceptionList = local_10;
  return param_2;
}

