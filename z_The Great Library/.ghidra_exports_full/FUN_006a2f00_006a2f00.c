// FUN_006a2f00 @ 006a2f00 body=[[006a2f00, 006a2f93] [006a2fb5, 006a2fc7]]


undefined1 * FUN_006a2f00(int param_1,undefined1 *param_2)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b3f379;
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
      *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(in_ECX + 0x1c);
      *(undefined4 *)(param_2 + 0x34) = 0xf;
      *(undefined4 *)(param_2 + 0x30) = 0;
      param_2[0x20] = 0;
      FUN_00408ed0(in_ECX + 0x20,0,0xffffffff);
      *(undefined4 *)(param_2 + 0x3c) = *(undefined4 *)(in_ECX + 0x3c);
    }
    param_2 = param_2 + 0x40;
  }
  ExceptionList = local_10;
  return param_2;
}

