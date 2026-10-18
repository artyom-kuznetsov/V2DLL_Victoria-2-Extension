// FUN_00439010 @ 00439010 body=[[00439010, 0043919f]]


undefined4 * FUN_00439010(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b47ba2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  *param_1 = CTaxSetting::vftable;
  param_1[2] = param_2;
  uVar3 = FUN_00b31c36();
  *(undefined8 *)(param_1 + 4) = uVar3;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  local_8 = 0;
  _eh_vector_constructor_iterator_(param_1 + 10,0x10,2,FUN_00413490,FUN_00aa8540);
  local_8._0_1_ = 1;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = param_3;
  param_1[0x18] = 0x8000;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  if (DAT_0131bb34 == 0) {
    iVar1 = FUN_00aae9af(0x188);
    local_8._0_1_ = 2;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_0041a160();
    }
    local_8._0_1_ = 1;
    FUN_00423700(uVar2);
  }
  FUN_0043a880();
  if (DAT_0131bb34 == 0) {
    iVar1 = FUN_00aae9af(0x188);
    local_8._0_1_ = 3;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_0041a160();
    }
    local_8._0_1_ = 1;
    FUN_00423700(uVar2);
  }
  FUN_0043a880();
  if (DAT_0131bb34 == 0) {
    iVar1 = FUN_00aae9af(0x188);
    local_8._0_1_ = 4;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_0041a160();
    }
    local_8._0_1_ = 1;
    FUN_00423700(uVar2);
  }
  FUN_0043a880();
  ExceptionList = local_10;
  return param_1;
}

