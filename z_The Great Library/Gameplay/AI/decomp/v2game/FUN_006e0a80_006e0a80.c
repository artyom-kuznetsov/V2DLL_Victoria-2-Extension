// FUN_006e0a80 @ 006e0a80 body=[[006e0a80, 006e0afc] [006e0b1c, 006e0b2e]]


undefined1 * FUN_006e0a80(int param_1,undefined1 *param_2)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b3f2c1;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; in_ECX != param_1; in_ECX = in_ECX + 0x30) {
    local_8 = 1;
    if (param_2 != (undefined1 *)0x0) {
      *(undefined4 *)(param_2 + 0x14) = 0xf;
      *(undefined4 *)(param_2 + 0x10) = 0;
      *param_2 = 0;
      FUN_00408ed0(in_ECX,0,0xffffffff);
      *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(in_ECX + 0x20);
      *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(in_ECX + 0x24);
      *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(in_ECX + 0x28);
      *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(in_ECX + 0x2c);
    }
    param_2 = param_2 + 0x30;
  }
  ExceptionList = local_10;
  return param_2;
}

