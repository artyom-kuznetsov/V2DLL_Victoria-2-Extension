// FUN_009bc130 @ 009bc130 body=[[009bc130, 009bc19e] [009bc1c5, 009bc1d7]]


undefined4 * FUN_009bc130(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b49e79;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; in_ECX != param_1; in_ECX = in_ECX + 6) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = *in_ECX;
      param_2[1] = in_ECX[1];
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      local_8 = 2;
      FUN_009beeb0(in_ECX + 2);
    }
    param_2 = param_2 + 6;
  }
  ExceptionList = local_10;
  return param_2;
}

