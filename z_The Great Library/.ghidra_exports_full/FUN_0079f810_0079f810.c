// FUN_0079f810 @ 0079f810 body=[[0079f810, 0079f8aa] [0079f8ce, 0079f8e0]]


undefined4 * FUN_0079f810(int param_1,undefined4 *param_2)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b4b399;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; in_ECX != param_1; in_ECX = in_ECX + 0x6c) {
    local_8 = 1;
    if (param_2 != (undefined4 *)0x0) {
      FUN_0040a720(param_2);
      local_8 = 2;
      *param_2 = CTransferSubUnitCommand::vftable;
      param_2[0xf] = *(undefined4 *)(in_ECX + 0x3c);
      param_2[0x10] = *(undefined4 *)(in_ECX + 0x40);
      param_2[0x11] = *(undefined4 *)(in_ECX + 0x44);
      param_2[0x17] = 0xf;
      param_2[0x16] = 0;
      *(undefined1 *)(param_2 + 0x12) = 0;
      FUN_00408ed0(in_ECX + 0x48,0,0xffffffff);
      param_2[0x19] = *(undefined4 *)(in_ECX + 100);
      param_2[0x1a] = *(undefined4 *)(in_ECX + 0x68);
    }
    param_2 = param_2 + 0x1b;
  }
  ExceptionList = local_10;
  return param_2;
}

