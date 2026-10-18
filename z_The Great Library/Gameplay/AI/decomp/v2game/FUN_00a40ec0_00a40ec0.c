// FUN_00a40ec0 @ 00a40ec0 body=[[00a40ec0, 00a40f40] [00a40f67, 00a40f79]]


undefined4 * FUN_00a40ec0(int param_1,undefined4 *param_2)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b3d9d1;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; in_ECX != param_1; in_ECX = in_ECX + 0x2c) {
    local_8 = 1;
    if (param_2 != (undefined4 *)0x0) {
      param_2[1] = *(undefined4 *)(in_ECX + 4);
      *param_2 = &PTR_FUN_00e40cc0;
      param_2[2] = *(undefined4 *)(in_ECX + 8);
      param_2[3] = *(undefined4 *)(in_ECX + 0xc);
      param_2[9] = 0xf;
      param_2[8] = 0;
      *(undefined1 *)(param_2 + 4) = 0;
      FUN_00408ed0(in_ECX + 0x10,0,0xffffffff);
    }
    param_2 = param_2 + 0xb;
  }
  ExceptionList = local_10;
  return param_2;
}

