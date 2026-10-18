// FUN_0079f750 @ 0079f750 body=[[0079f750, 0079f7ce] [0079f7f5, 0079f807]]


undefined4 * FUN_0079f750(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b437e1;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; in_ECX != param_1; in_ECX = in_ECX + 0xb) {
    local_8 = 1;
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = *in_ECX;
      param_2[1] = in_ECX[1];
      param_2[2] = in_ECX[2];
      param_2[8] = 0xf;
      param_2[7] = 0;
      *(undefined1 *)(param_2 + 3) = 0;
      FUN_00408ed0(in_ECX + 3,0,0xffffffff);
      param_2[10] = in_ECX[10];
    }
    param_2 = param_2 + 0xb;
  }
  ExceptionList = local_10;
  return param_2;
}

