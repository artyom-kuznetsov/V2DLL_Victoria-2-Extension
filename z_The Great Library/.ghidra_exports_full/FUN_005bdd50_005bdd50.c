// FUN_005bdd50 @ 005bdd50 body=[[005bdd50, 005bddff] [005bde03, 005bdeaa] [005bdeae, 005be0b3] [005be0b7, 005be0ce] [005be0d2, 005be0e4]]


undefined4 FUN_005bdd50(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined1 local_70 [28];
  uint local_54 [4];
  undefined4 local_44;
  uint local_40;
  undefined1 local_38 [20];
  undefined1 local_24 [4];
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b71c24;
  local_10 = ExceptionList;
  if (param_2 == 0) {
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = local_54[0] & 0xffffff00;
    ExceptionList = &local_10;
    FUN_00409350("TYPE_INF",8);
    local_8 = 0;
    FUN_009a8ee0(local_24,local_54);
    local_8._0_1_ = 1;
    iVar1 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
    local_8 = CONCAT31(local_8._1_3_,2);
    FUN_009adb70();
    if (local_20 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
joined_r0x005bde10:
    if (local_40 < 0x10) {
      ExceptionList = local_10;
      return param_1;
    }
    local_18 = 0;
    local_1c = 0;
    local_20 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (param_2 == 1) {
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = (uint)local_54[0]._1_3_ << 8;
    ExceptionList = &local_10;
    FUN_00409350("TYPE_CAV",8);
    local_8 = 3;
    FUN_009a8ee0(local_24,local_54);
    local_8._0_1_ = 4;
    iVar1 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
    local_8 = CONCAT31(local_8._1_3_,5);
    FUN_009adb70();
    if (local_20 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    goto joined_r0x005bde10;
  }
  if ((param_2 == 2) || (param_2 == 3)) {
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = (uint)local_54[0]._1_3_ << 8;
    ExceptionList = &local_10;
    FUN_00409350("TYPE_SPECIAL",0xc);
    local_8 = 6;
    FUN_009a8ee0(local_24,local_54);
    local_8._0_1_ = 7;
    iVar1 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
    local_8 = CONCAT31(local_8._1_3_,8);
    FUN_009adb70();
    if (local_20 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    goto joined_r0x005bde10;
  }
  if (param_2 == 4) {
    ExceptionList = &local_10;
    FUN_009885d0();
    local_8 = 9;
    FUN_009a8ee0(local_24,local_54);
    local_8._0_1_ = 10;
    iVar1 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
    local_8 = CONCAT31(local_8._1_3_,9);
  }
  else {
    if (param_2 != 5) {
      if (param_2 != 6) {
        ExceptionList = &local_10;
        FUN_009885d0();
        ExceptionList = local_10;
        return param_1;
      }
      ExceptionList = &local_10;
      FUN_009885d0();
      local_8 = 0xd;
      FUN_009a8ee0(local_38,local_70);
      local_8._0_1_ = 0xe;
      iVar1 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
      local_8 = CONCAT31(local_8._1_3_,0xd);
      FUN_009a9740();
      goto LAB_005bdf3d;
    }
    ExceptionList = &local_10;
    FUN_009885d0();
    local_8 = 0xb;
    FUN_009a8ee0(local_24,local_54);
    local_8._0_1_ = 0xc;
    iVar1 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
    local_8 = CONCAT31(local_8._1_3_,0xb);
  }
  FUN_009a9740();
LAB_005bdf3d:
  FUN_00408ad0();
  ExceptionList = local_10;
  return param_1;
}

