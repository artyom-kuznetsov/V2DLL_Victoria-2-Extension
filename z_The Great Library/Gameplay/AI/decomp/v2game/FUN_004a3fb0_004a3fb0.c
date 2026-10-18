// FUN_004a3fb0 @ 004a3fb0 body=[[004a3fb0, 004a4043] [004a4065, 004a4077]]


undefined1 * FUN_004a3fb0(int param_1,undefined1 *param_2)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b40179;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; in_ECX != param_1; in_ECX = in_ECX + 0x40) {
    local_8 = 1;
    if (param_2 != (undefined1 *)0x0) {
      *(undefined4 *)(param_2 + 0x14) = 0xf;
      *(undefined4 *)(param_2 + 0x10) = 0;
      *param_2 = 0;
      FUN_00408ed0(in_ECX,0,0xffffffff);
      local_8 = 2;
      *(undefined4 *)(param_2 + 0x30) = 0xf;
      *(undefined4 *)(param_2 + 0x2c) = 0;
      param_2[0x1c] = 0;
      FUN_00408ed0(in_ECX + 0x1c,0,0xffffffff);
      *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(in_ECX + 0x38);
      *(undefined4 *)(param_2 + 0x3c) = *(undefined4 *)(in_ECX + 0x3c);
    }
    param_2 = param_2 + 0x40;
  }
  ExceptionList = local_10;
  return param_2;
}

