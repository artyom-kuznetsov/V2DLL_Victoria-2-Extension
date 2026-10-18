// FUN_0052e5c0 @ 0052e5c0 body=[[0052e5c0, 0052e6a3] [0052e6a7, 0052e6d7] [0052e6db, 0052e775] [0052e779, 0052e7a9] [0052e7ad, 0052e7c6] [0052e7ca, 0052e890] [0052e894, 0052e8c4] [0052e8c8, 0052e8df] [0052e8e3, 0052e8f7]]


undefined1 * FUN_0052e5c0(int param_1,undefined1 *param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint local_60 [4];
  undefined4 local_50;
  uint local_4c;
  uint local_44 [4];
  undefined4 local_34;
  uint local_30;
  undefined1 local_28 [4];
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b73dc7;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *param_2 = 0;
  local_8 = 0;
  local_14 = 1;
  if (((*(int *)(param_4 + 0x5c) == *(int *)(param_1 + 0x20)) &&
      (*(char *)(param_1 + 0xae0) != '\0')) && (param_3 < *(int *)(param_4 + 0x68))) {
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = (uint)local_44[0]._1_3_ << 8;
    FUN_00409350("PRODUCTION_DESTROY_FACTORY_BECAUSE_TOOLTIP",0x2a);
    local_8 = 1;
    FUN_009a8ee0(local_28,local_44);
    local_8._0_1_ = 2;
    iVar2 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
    local_8._0_1_ = 3;
    FUN_00448aa0();
    if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_4c = 0xf;
    local_50 = 0;
    local_60[0] = local_60[0] & 0xffffff00;
    local_8._0_1_ = 4;
    FUN_009adb70();
    if (local_24 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  else {
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = (uint)local_44[0]._1_3_ << 8;
    FUN_00409350("PRODUCTION_NOT_DESTROY_FACTORY_BECAUSE_TOOLTIP",0x2e);
    local_8 = 5;
    FUN_009a8ee0(local_28,local_44);
    local_8._0_1_ = 6;
    iVar2 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
    local_8._0_1_ = 7;
    FUN_00448aa0();
    if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_4c = 0xf;
    local_50 = 0;
    local_60[0] = local_60[0] & 0xffffff00;
    local_8._0_1_ = 8;
    FUN_009adb70();
    if (local_24 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  local_8 = (uint)local_8._1_3_ << 8;
  if (0xf < local_30) {
    local_1c = 0;
    local_20 = 0;
    local_24 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  if (*(int *)(param_4 + 0x5c) == *(int *)(param_1 + 0x20)) {
    (**(code **)(*(int *)(param_1 + 0xaa8) + 0x20))(local_60,4);
    local_8 = 9;
    FUN_00448aa0();
    uVar1 = local_4c;
  }
  else {
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = local_44[0] & 0xffffff00;
    FUN_00409350("PRODUCTION_NOT_DESTROY_FACTORY_BECAUSE_FOREIGN_TOOLTIP",0x36);
    local_8 = 10;
    FUN_009a8ee0(local_28,local_44);
    local_8._0_1_ = 0xb;
    iVar2 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
    local_8._0_1_ = 0xc;
    FUN_00448aa0();
    if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_4c = 0xf;
    local_50 = 0;
    local_60[0] = local_60[0] & 0xffffff00;
    local_8 = CONCAT31(local_8._1_3_,0xd);
    FUN_009adb70();
    if (local_24 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    uVar1 = local_30;
  }
  if (uVar1 < 0x10) {
    ExceptionList = local_10;
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

