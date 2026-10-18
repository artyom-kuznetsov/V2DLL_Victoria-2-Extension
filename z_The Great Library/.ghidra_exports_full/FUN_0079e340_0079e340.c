// FUN_0079e340 @ 0079e340 body=[[0079e340, 0079e3a6] [0079e3aa, 0079e422] [0079e426, 0079e4b1] [0079e4b5, 0079e4cf] [0079e4d3, 0079e528] [0079e52c, 0079e53f]]


/* WARNING: Removing unreachable block (ram,0x0079e4c7) */

undefined4 FUN_0079e340(undefined4 param_1)

{
  int iVar1;
  uint local_64 [4];
  undefined4 local_54;
  uint local_50;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b6bcf1;
  local_10 = ExceptionList;
  local_18 = 0;
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("DIG_IN_TOOLTIP_2",0x10);
  local_8 = 1;
  FUN_009a8ee0(local_2c,local_64);
  local_8._0_1_ = 3;
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  FUN_00409350(&DAT_00dff69c,4);
  local_8._0_1_ = 4;
  local_14 = FUN_00aae9af();
  local_8._0_1_ = 5;
  if (local_14 == 0) {
    local_14 = 0;
  }
  else {
    local_14 = FUN_009a9ce0();
  }
  local_8._0_1_ = 4;
  FUN_009e6810(local_48,&local_14);
  local_8._0_1_ = 3;
  if (local_34 < 0x10) {
    FUN_00409350(&DAT_00e09b18,1);
    local_8._0_1_ = 6;
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    FUN_00409350(&DAT_00df7e90,3);
    local_8._0_1_ = 7;
    local_14 = FUN_00aae9af();
    local_8._0_1_ = 8;
    if (local_14 == 0) {
      local_14 = 0;
    }
    else {
      local_14 = FUN_009a9ce0();
    }
    local_8._0_1_ = 7;
    FUN_009e6810(local_48,&local_14);
    if (local_34 < 0x10) {
      local_8 = CONCAT31(local_8._1_3_,3);
      local_34 = 0xf;
      local_38 = 0;
      local_48[0] = local_48[0] & 0xffffff00;
      iVar1 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
      local_18 = 1;
      local_8 = 9;
      FUN_009adb70();
      if (local_28 == 0) {
        ExceptionList = local_10;
        return param_1;
      }
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

