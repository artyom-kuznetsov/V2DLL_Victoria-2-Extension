// FUN_00900590 @ 00900590 body=[[00900590, 0090064c] [00900650, 009006f2] [009006f6, 009007a2] [009007a6, 00900839] [0090083d, 00900854] [00900858, 0090086c]]


undefined4 FUN_00900590(undefined4 param_1,undefined4 param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  int local_74 [4];
  undefined4 local_64;
  uint local_60;
  uint local_58 [4];
  undefined4 local_48;
  uint local_44;
  undefined1 local_3c [4];
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_28 [4];
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b65561;
  local_10 = ExceptionList;
  local_14 = 0;
  if (param_3 == '\0') {
    local_60 = 0xf;
    local_64 = 0;
    local_74[0] = (uint)local_74[0]._1_3_ << 8;
    if (*(char *)(in_ECX + 0x1c) == '\0') {
      ExceptionList = &local_10;
      FUN_00409350("CAN_NOT_BUILD_FACTORY",0x15);
      local_8 = 10;
      FUN_009a8ee0(local_3c,local_74);
      local_8._0_1_ = 0xb;
      iVar2 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
      local_14 = 1;
      local_8 = CONCAT31(local_8._1_3_,0xc);
      FUN_009adb70();
      if (local_38 != 0) {
        FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_38 = 0;
      local_34 = 0;
      local_30 = 0;
      uVar1 = local_60;
    }
    else {
      ExceptionList = &local_10;
      FUN_00409350("CAN_BUILD_FACTORY",0x11);
      local_8 = 7;
      FUN_009a8ee0(local_3c,local_74);
      local_8._0_1_ = 8;
      iVar2 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
      local_14 = 1;
      local_8 = CONCAT31(local_8._1_3_,9);
      FUN_009adb70();
      if (local_38 != 0) {
        FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_38 = 0;
      local_34 = 0;
      local_30 = 0;
      uVar1 = local_60;
    }
  }
  else if (*(char *)(in_ECX + 0x1c) == '\0') {
    local_60 = 0xf;
    local_64 = 0;
    local_74[0] = (uint)local_74[0]._1_3_ << 8;
    ExceptionList = &local_10;
    FUN_00409350("CAN_BUILD_FACTORY",0x11);
    local_8 = 4;
    FUN_009a8ee0(local_3c,local_74);
    local_8._0_1_ = 5;
    iVar2 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
    local_14 = 1;
    local_8 = CONCAT31(local_8._1_3_,6);
    FUN_009adb70();
    if (local_38 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    uVar1 = local_60;
  }
  else {
    local_44 = 0xf;
    local_48 = 0;
    local_58[0] = local_58[0] & 0xffffff00;
    ExceptionList = &local_10;
    FUN_00409350("CAN_NOT_BUILD_FACTORY",0x15);
    local_8 = 1;
    FUN_009a8ee0(local_28,local_58);
    local_8._0_1_ = 2;
    iVar2 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
    local_14 = 1;
    local_8 = CONCAT31(local_8._1_3_,3);
    FUN_009adb70();
    if (local_24 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    uVar1 = local_44;
  }
  if (uVar1 < 0x10) {
    ExceptionList = local_10;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

