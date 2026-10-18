// FUN_0072ff00 @ 0072ff00 body=[[0072ff00, 0072ff62] [0072ff66, 0072fff0] [0072fff4, 00730025] [00730029, 00730044] [00730048, 007300bd] [007300c1, 007300f1] [007300f5, 0073010c] [00730110, 00730124]]


/* WARNING: Removing unreachable block (ram,0x007300b5) */

undefined4 * FUN_0072ff00(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint local_64;
  uint local_5c [4];
  undefined4 local_4c;
  uint local_48;
  uint local_40 [4];
  undefined4 local_30;
  uint local_2c;
  undefined1 local_24 [4];
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b97e84;
  local_10 = ExceptionList;
  local_2c = 0xf;
  local_30 = 0;
  local_40[0] = local_40[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("DefaultDialog",0xd);
  local_8 = 0;
  FUN_00640680(param_1,local_40);
  local_8._0_1_ = 2;
  if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_2c = 0xf;
  local_30 = 0;
  local_40[0] = local_40[0] & 0xffffff00;
  *param_1 = CConfirmCancelAllConstructions::vftable;
  param_1[0x1a] = param_3;
  local_48 = 0xf;
  local_4c = 0;
  local_5c[0] = local_5c[0] & 0xffffff00;
  FUN_00409350("MIL_CONSTRUCTION_CANCEL_ALL_WARNING_TITLE",0x29);
  local_8._0_1_ = 3;
  FUN_009a8ee0(local_24,local_5c);
  local_8._0_1_ = 4;
  iVar1 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
  local_8._0_1_ = 5;
  FUN_00641710();
  if (0xf < local_64) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 6;
  FUN_009adb70();
  if (local_20 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 2;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  if (local_48 < 0x10) {
    local_48 = 0xf;
    local_4c = 0;
    local_5c[0] = local_5c[0] & 0xffffff00;
    FUN_00409350("MIL_CONSTRUCTION_CANCEL_ALL_WARNING_DESC",0x28);
    local_8._0_1_ = 7;
    FUN_009a8ee0(local_24,local_5c);
    local_8._0_1_ = 8;
    iVar1 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
    local_8._0_1_ = 9;
    FUN_006417b0();
    local_8 = CONCAT31(local_8._1_3_,10);
    FUN_009adb70();
    if (local_20 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    if (local_48 < 0x10) {
      ExceptionList = local_10;
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

