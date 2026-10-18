// FUN_008f3cd0 @ 008f3cd0 body=[[008f3cd0, 008f3dbd] [008f3dc1, 008f3dfa] [008f3dfe, 008f3e14] [008f3e18, 008f3ee8] [008f3eec, 008f3f25] [008f3f29, 008f3f3f] [008f3f43, 008f3f60] [008f3f64, 008f3f79]]


/* WARNING: Removing unreachable block (ram,0x008f3e31) */
/* WARNING: Removing unreachable block (ram,0x008f3f55) */
/* WARNING: Removing unreachable block (ram,0x008f3f5c) */

undefined4 FUN_008f3cd0(undefined4 param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  int in_ECX;
  uint local_d0;
  uint local_b4;
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
  puStack_c = &LAB_00b659e9;
  local_10 = ExceptionList;
  local_14 = 0;
  if (param_3 == *(char *)(in_ECX + 0x1c)) {
    ExceptionList = &local_10;
    FUN_00409350(&DAT_00dee2cc,1);
    local_8 = 1;
    local_60 = 0xf;
    local_64 = 0;
    local_74[0] = local_74[0] & 0xffffff00;
    FUN_00409350("RICH_TAX_ABOVE_POOR",0x13);
    local_8._0_1_ = 2;
    FUN_009a8ee0(local_28,local_74);
    local_8._0_1_ = 3;
    iVar1 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
    local_8._0_1_ = 4;
    FUN_00988f20();
    local_14 = 1;
    if (0xf < local_b4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = CONCAT31(local_8._1_3_,5);
    FUN_009adb70();
    if (local_24 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  else {
    ExceptionList = &local_10;
    FUN_00409350(&DAT_00dee2cc,1);
    local_8 = 6;
    local_44 = 0xf;
    local_48 = 0;
    local_58[0] = local_58[0] & 0xffffff00;
    FUN_00409350("RICH_TAX_NOT_ABOVE_POOR",0x17);
    local_8._0_1_ = 7;
    FUN_009a8ee0(local_3c,local_58);
    local_8._0_1_ = 8;
    iVar1 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
    local_8._0_1_ = 9;
    FUN_00988f20();
    local_14 = 1;
    if (0xf < local_d0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = CONCAT31(local_8._1_3_,10);
    FUN_009adb70();
    if (local_38 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  ExceptionList = local_10;
  return param_1;
}

