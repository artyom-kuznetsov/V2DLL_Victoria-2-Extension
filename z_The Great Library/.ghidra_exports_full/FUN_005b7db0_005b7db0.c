// FUN_005b7db0 @ 005b7db0 body=[[005b7db0, 005b7e6a] [005b7e6e, 005b7f18] [005b7f1c, 005b800b] [005b800f, 005b8023]]


undefined4 FUN_005b7db0(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  uint local_74 [4];
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
  puStack_c = &LAB_00b71d41;
  local_10 = ExceptionList;
  local_14 = 0;
  iVar2 = *(int *)(param_1 + 0xb0);
  if (iVar2 == 0) {
    local_44 = 0xf;
    local_48 = 0;
    local_58[0] = local_58[0] & 0xffffff00;
    ExceptionList = &local_10;
    FUN_00409350("GENERAL",7);
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
  else {
    local_60 = 0xf;
    local_64 = 0;
    local_74[0] = local_74[0] & 0xffffff00;
    if (iVar2 == 1) {
      ExceptionList = &local_10;
      FUN_00409350("ADMIRAL",7);
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
    else if (iVar2 == 2) {
      ExceptionList = &local_10;
      FUN_00409350("AIRDUDE",7);
      local_8 = 7;
      FUN_009a8ee0(local_3c,local_74);
      local_8._0_1_ = 8;
      iVar2 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
      local_14 = 1;
      local_8 = CONCAT31(local_8._1_3_,7);
      FUN_009a9740();
      uVar1 = local_60;
    }
    else {
      ExceptionList = &local_10;
      FUN_00409350("INACTIVE",8);
      local_8 = 9;
      FUN_009a8ee0(local_3c,local_74);
      local_8._0_1_ = 10;
      iVar2 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
      local_14 = 1;
      local_8 = CONCAT31(local_8._1_3_,9);
      FUN_009a9740();
      uVar1 = local_60;
    }
  }
  if (uVar1 < 0x10) {
    ExceptionList = local_10;
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

