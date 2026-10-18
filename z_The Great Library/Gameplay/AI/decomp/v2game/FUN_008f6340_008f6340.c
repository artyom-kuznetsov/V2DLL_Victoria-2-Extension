// FUN_008f6340 @ 008f6340 body=[[008f6340, 008f6498] [008f649c, 008f64c6] [008f64ca, 008f64ef] [008f64f3, 008f6528] [008f652c, 008f6548] [008f654c, 008f6570] [008f6574, 008f658d] [008f6591, 008f66d7] [008f66db, 008f6705] [008f6709, 008f672e] [008f6732, 008f6767] [008f676b, 008f6787] [008f678b, 008f67af] [008f67b3, 008f67cf] [008f67d3, 008f67f8] [008f67fc, 008f6811]]


/* WARNING: Removing unreachable block (ram,0x008f6582) */
/* WARNING: Removing unreachable block (ram,0x008f67ed) */
/* WARNING: Removing unreachable block (ram,0x008f67c4) */
/* WARNING: Removing unreachable block (ram,0x008f6568) */
/* WARNING: Removing unreachable block (ram,0x008f65a9) */
/* WARNING: Removing unreachable block (ram,0x008f67f3) */
/* WARNING: Removing unreachable block (ram,0x008f67a7) */

undefined4 FUN_008f6340(undefined4 param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  uint local_1b0;
  uint local_194;
  uint local_178;
  uint local_15c;
  uint local_140;
  uint local_124;
  uint local_108;
  uint local_ec;
  int local_38;
  int local_24;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b66ee1;
  local_10 = ExceptionList;
  if (param_3 == '\0') {
    ExceptionList = &local_10;
    FUN_00409350();
    local_8 = 10;
    FUN_00409350();
    local_8._0_1_ = 0xb;
    FUN_00409350();
    local_8._0_1_ = 0xc;
    FUN_00988a50();
    local_8._0_1_ = 0xd;
    FUN_009a8ee0();
    local_8._0_1_ = 0xe;
    iVar1 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c));
    local_8._0_1_ = 0xf;
    FUN_00988f20();
    local_8._0_1_ = 0x10;
    FUN_00988f20();
    local_8._0_1_ = 0x11;
    FUN_00988f20();
    if (0xf < local_108) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_140) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_178) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = CONCAT31(local_8._1_3_,0x12);
    FUN_009adb70();
    if (local_38 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_1b0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  else {
    ExceptionList = &local_10;
    FUN_00409350();
    local_8 = 1;
    FUN_00409350();
    local_8._0_1_ = 2;
    FUN_00409350();
    local_8._0_1_ = 3;
    FUN_00988a50();
    local_8._0_1_ = 4;
    FUN_009a8ee0();
    local_8._0_1_ = 5;
    iVar1 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c));
    local_8._0_1_ = 6;
    FUN_00988f20();
    local_8._0_1_ = 7;
    FUN_00988f20();
    local_8._0_1_ = 8;
    FUN_00988f20();
    if (0xf < local_15c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_124) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_194) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = CONCAT31(local_8._1_3_,9);
    FUN_009adb70();
    if (local_24 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_ec) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  ExceptionList = local_10;
  return param_1;
}

