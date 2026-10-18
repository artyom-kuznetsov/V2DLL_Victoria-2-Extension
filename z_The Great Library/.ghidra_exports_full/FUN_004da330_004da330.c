// FUN_004da330 @ 004da330 body=[[004da330, 004da3f3] [004da3f7, 004da417] [004da42f, 004da4ca] [004da4ce, 004da4ee] [004da506, 004da59d] [004da5b5, 004da6ea]]


undefined4 FUN_004da330(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined1 local_78 [4];
  int local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 local_64 [20];
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  undefined1 local_34 [32];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b7544a;
  local_14 = ExceptionList;
  if (param_2 == 0) {
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    ExceptionList = &local_14;
    FUN_00409350("BUILDTYPE_FACTORY",0x11);
    local_c = 0;
    FUN_009a8ee0(local_78,local_50);
    local_c._0_1_ = 1;
    iVar1 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
    local_c = CONCAT31(local_c._1_3_,2);
    FUN_009adb70();
    if (local_74 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_74 = 0;
    local_70 = 0;
    local_6c = 0;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  else if (param_2 == 1) {
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = (uint)local_50[0]._1_3_ << 8;
    ExceptionList = &local_14;
    FUN_00409350("BUILDTYPE_RGO",0xd);
    local_c = 3;
    FUN_009a8ee0(local_78,local_50);
    local_c._0_1_ = 4;
    iVar1 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
    local_c = CONCAT31(local_c._1_3_,5);
    FUN_009adb70();
    if (local_74 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_74 = 0;
    local_70 = 0;
    local_6c = 0;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  else if (param_2 == 2) {
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = (uint)local_50[0]._1_3_ << 8;
    ExceptionList = &local_14;
    FUN_00409350("BUILDTYPE_INFRASTRUCTURE",0x18);
    local_c = 6;
    FUN_009a8ee0(local_78,local_50);
    local_c._0_1_ = 7;
    iVar1 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
    local_c = CONCAT31(local_c._1_3_,6);
    FUN_009a9740();
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  else {
    if (param_2 == 3) {
      ExceptionList = &local_14;
      FUN_009885d0();
      local_c = 8;
      FUN_009a8ee0(local_78,local_50);
      local_c._0_1_ = 9;
      iVar1 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
      local_c = CONCAT31(local_c._1_3_,8);
      FUN_009a9740();
      FUN_00408ad0();
      ExceptionList = local_14;
      return param_1;
    }
    if (param_2 == 4) {
      ExceptionList = &local_14;
      FUN_009885d0();
      local_c = 10;
      FUN_009a8ee0(local_64,local_34);
      local_c._0_1_ = 0xb;
      iVar1 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
      local_c = CONCAT31(local_c._1_3_,10);
      FUN_009a9740();
      FUN_00408ad0();
      ExceptionList = local_14;
      return param_1;
    }
    ExceptionList = &local_14;
    FUN_009885d0();
  }
  ExceptionList = local_14;
  return param_1;
}

