// FUN_008c5850 @ 008c5850 body=[[008c5850, 008c5902] [008c5906, 008c5922] [008c5926, 008c5940] [008c5944, 008c59c5] [008c59c9, 008c59f9] [008c59fd, 008c5a1f] [008c5a28, 008c5a92] [008c5a96, 008c5ac6] [008c5aca, 008c5ae4] [008c5ae8, 008c5b7a] [008c5b7e, 008c5b98] [008c5b9c, 008c5bb9] [008c5bbd, 008c5bda] [008c5bde, 008c5bf2]]


undefined1 * FUN_008c5850(undefined1 *param_1,undefined4 param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  uint local_88 [4];
  undefined4 local_78;
  uint local_74;
  uint local_6c;
  undefined4 local_5c;
  uint local_58;
  uint local_50;
  undefined4 local_40;
  uint local_3c;
  uint local_34;
  int local_28;
  undefined4 local_24;
  uint local_20;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b67208;
  local_10 = ExceptionList;
  local_8 = 0;
  local_14 = 0;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  FUN_00409350();
  local_8 = 0;
  local_14 = 1;
  local_20 = 0xf;
  local_24 = 0;
  local_34 = local_34 & 0xffffff00;
  FUN_00409350();
  local_8 = 1;
  (**(code **)(**(int **)(in_ECX + 0x28) + 0x18))();
  local_8._0_1_ = 2;
  FUN_00988f20();
  local_8._0_1_ = 3;
  FUN_00448aa0();
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_3c = 0xf;
  local_40 = 0;
  uVar1 = local_50 >> 8;
  local_50 = uVar1 << 8;
  if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  local_58 = 0xf;
  local_5c = 0;
  local_6c = local_6c & 0xffffff00;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50 = uVar1 << 8;
  if (param_3 == '\0') {
    FUN_00409350();
    local_8 = 8;
    FUN_009a8ee0();
    local_8._0_1_ = 9;
    iVar2 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c));
    local_8._0_1_ = 10;
    FUN_00448aa0();
    if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_58 = 0xf;
    local_5c = 0;
    local_6c = local_6c & 0xffffff00;
    local_8._0_1_ = 0xb;
    FUN_009adb70();
    if (local_28 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  else {
    FUN_00409350();
    local_8 = 4;
    FUN_009a8ee0();
    local_8._0_1_ = 5;
    iVar2 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c));
    local_8._0_1_ = 6;
    FUN_00448aa0();
    if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_58 = 0xf;
    local_5c = 0;
    local_6c = local_6c & 0xffffff00;
    local_8._0_1_ = 7;
    FUN_009adb70();
    if (local_28 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_3c = 0xf;
  local_40 = 0;
  local_50 = local_50 & 0xffffff00;
  FUN_00409350();
  local_8 = 0xc;
  FUN_00988bb0(local_88,1);
  local_8._0_1_ = 0xd;
  FUN_00988fa0();
  local_8._0_1_ = 0xe;
  FUN_00988f20();
  local_8 = CONCAT31(local_8._1_3_,0xf);
  FUN_00448aa0();
  if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_58 = 0xf;
  local_5c = 0;
  local_6c = local_6c & 0xffffff00;
  if (local_20 < 0x10) {
    local_20 = 0xf;
    local_24 = 0;
    local_34 = local_34 & 0xffffff00;
    if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_74 = 0xf;
    local_78 = 0;
    local_88[0] = local_88[0] & 0xffffff00;
    if (local_3c < 0x10) {
      ExceptionList = local_10;
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

