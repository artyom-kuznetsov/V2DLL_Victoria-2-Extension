// FUN_00562cd0 @ 00562cd0 body=[[00562cd0, 00562e41]]


undefined4 *
FUN_00562cd0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5334b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0044bc60(param_1);
  local_8 = 0;
  *param_1 = CNationalFocus::vftable;
  param_1[0x11] = 0xf;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  FUN_00408ed0(param_2,0,0xffffffff);
  param_1[0x13] = param_3;
  param_1[0x14] = param_4;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x19] = 0x18d;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined2 *)(param_1 + 0x1e) = 0;
  param_1[0x18] = CAndTrigger::vftable;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0x18d;
  param_1[0x23] = CGoodsPool::vftable;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  local_8._0_1_ = 4;
  _memset(param_1 + 0x25,0,0x40);
  FUN_00423920();
  local_8._0_1_ = 5;
  param_1[0x39] = 0;
  *(undefined2 *)(param_1 + 0x3a) = 1;
  param_1[0x3b] = 0;
  param_1[0x3c] = 1;
  param_1[0x42] = 0xf;
  param_1[0x41] = 0;
  *(undefined1 *)(param_1 + 0x3d) = 0;
  FUN_00409350(&DAT_00ded94d,0);
  local_8._0_1_ = 6;
  uVar1 = (undefined1)local_8;
  local_8._0_1_ = 6;
  param_1[0x44] = 0;
  if (DAT_0131bb34 == 0) {
    iVar2 = FUN_00aae9af(0x188);
    local_8._0_1_ = 7;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_0041a160();
    }
    local_8._0_1_ = 6;
    FUN_00423700(uVar3);
    uVar1 = (undefined1)local_8;
  }
  local_8._0_1_ = uVar1;
  FUN_004d5f50();
  ExceptionList = local_10;
  return param_1;
}

