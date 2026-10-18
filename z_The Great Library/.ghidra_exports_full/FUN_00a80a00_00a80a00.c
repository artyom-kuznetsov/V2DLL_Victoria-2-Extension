// FUN_00a80a00 @ 00a80a00 body=[[00a80a00, 00a80a98] [00a80ab8, 00a80aca]]


undefined1 * FUN_00a80a00(int param_1,undefined1 *param_2)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b3d5a1;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; in_ECX != param_1; in_ECX = in_ECX + 0x3c) {
    local_8 = 1;
    if (param_2 != (undefined1 *)0x0) {
      *(undefined4 *)(param_2 + 0x14) = 0xf;
      *(undefined4 *)(param_2 + 0x10) = 0;
      *param_2 = 0;
      FUN_00408ed0(in_ECX,0,0xffffffff);
      *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(in_ECX + 0x1c);
      *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(in_ECX + 0x20);
      *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(in_ECX + 0x24);
      *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(in_ECX + 0x28);
      *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(in_ECX + 0x2c);
      *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(in_ECX + 0x30);
      *(undefined4 *)(param_2 + 0x34) = *(undefined4 *)(in_ECX + 0x34);
      *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(in_ECX + 0x38);
    }
    param_2 = param_2 + 0x3c;
  }
  ExceptionList = local_10;
  return param_2;
}

