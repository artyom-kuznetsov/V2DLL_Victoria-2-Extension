// FUN_00964b70 @ 00964b70 body=[[00964b70, 00964c20] [00964c24, 00964c3e] [00964c42, 00964cb0] [00964cb4, 00964d32] [00964d36, 00964d53] [00964d57, 00964d79]]


/* WARNING: Removing unreachable block (ram,0x00964d4b) */

undefined4 FUN_00964b70(int param_1,undefined4 param_2)

{
  int iVar1;
  uint local_60 [4];
  undefined4 local_50;
  uint local_4c;
  uint local_44;
  undefined4 local_34;
  uint local_30;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00ba293b;
  local_10 = ExceptionList;
  local_8 = 0;
  local_14 = 0;
  local_30 = 0xf;
  local_34 = 0;
  local_44 = local_44 & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350();
  local_8 = 1;
  FUN_009a8ee0();
  local_8._0_1_ = 2;
  iVar1 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c));
  local_14 = 1;
  local_8._0_1_ = 3;
  FUN_009adb70();
  if (local_24 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  if (local_30 < 0x10) {
    local_30 = 0xf;
    local_34 = 0;
    local_44 = local_44 & 0xffffff00;
    FUN_00448740();
    FUN_008a8650();
    FUN_008aed50();
    local_8 = 4;
    FUN_00448aa0();
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0 < *(int *)(*(int *)(*(int *)(param_1 + 100) + 0x9c) + 0x2e8)) {
      FUN_00409350();
      local_8 = 5;
      (**(code **)(*(int *)(*(int *)(param_1 + 100) + 0x84) + 0x24))(local_60,0x5d);
      local_8._0_1_ = 6;
      FUN_00448aa0();
      if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8 = (uint)local_8._1_3_ << 8;
      local_4c = 0xf;
      local_50 = 0;
      local_60[0] = local_60[0] & 0xffffff00;
    }
    FUN_00448740();
    ExceptionList = local_10;
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

