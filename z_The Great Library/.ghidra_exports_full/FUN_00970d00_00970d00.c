// FUN_00970d00 @ 00970d00 body=[[00970d00, 00970d8f] [00970d93, 00970dad] [00970db1, 00970e13] [00970e17, 00970e83] [00970e87, 00970f0d] [00970f11, 00970f2c] [00970f30, 00970f4d] [00970f51, 00970f65]]


/* WARNING: Removing unreachable block (ram,0x00970e08) */

undefined1 * FUN_00970d00(undefined1 *param_1,char param_2)

{
  char cVar1;
  undefined1 local_88 [20];
  uint local_74;
  uint local_6c;
  undefined4 local_5c;
  uint local_58;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  undefined4 local_30;
  uint local_2c;
  int local_20;
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b78a29;
  local_10 = ExceptionList;
  local_30 = 0;
  local_58 = 0xf;
  local_5c = 0;
  local_6c = local_6c & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350();
  local_8 = 1;
  local_18 = 0xf;
  local_1c = 0;
  local_2c = local_2c & 0xffffff00;
  FUN_00408ed0();
  local_8._0_1_ = 2;
  FUN_00988f20();
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c = local_2c & 0xffffff00;
  local_8._0_1_ = 5;
  if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_58 = 0xf;
  local_5c = 0;
  local_6c = local_6c & 0xffffff00;
  if (param_2 != '\0') {
    FUN_00409350();
    local_8._0_1_ = 6;
    FUN_00448aa0();
  }
  local_8._0_1_ = 5;
  FUN_00408ed0(local_88,0,0xffffffff);
  FUN_00970880(local_50);
  local_8._0_1_ = 7;
  cVar1 = FUN_00416db0();
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    FUN_00408ed0();
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  else {
    FUN_009a8ee0();
    local_8._0_1_ = 8;
    FUN_00475500();
    FUN_009a9880();
    local_30 = 1;
    local_8._0_1_ = 9;
    FUN_009adb70();
    if (local_20 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  if (local_74 < 0x10) {
    ExceptionList = local_10;
    return param_1;
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

