// FUN_008edd10 @ 008edd10 body=[[008edd10, 008ede69] [008ede6d, 008ede97] [008ede9b, 008edec0] [008edec4, 008edef9] [008edefd, 008edf19] [008edf1d, 008edf41] [008edf45, 008edf5e] [008edf62, 008ee0a9] [008ee0ad, 008ee0d7] [008ee0db, 008ee100] [008ee104, 008ee139] [008ee13d, 008ee159] [008ee15d, 008ee181] [008ee185, 008ee1a1] [008ee1a5, 008ee1ca] [008ee1ce, 008ee1e3]]


/* WARNING: Removing unreachable block (ram,0x008edf53) */
/* WARNING: Removing unreachable block (ram,0x008ee1bf) */
/* WARNING: Removing unreachable block (ram,0x008ee196) */
/* WARNING: Removing unreachable block (ram,0x008edf39) */
/* WARNING: Removing unreachable block (ram,0x008edf7a) */
/* WARNING: Removing unreachable block (ram,0x008ee1c5) */
/* WARNING: Removing unreachable block (ram,0x008ee179) */

undefined4 FUN_008edd10(undefined4 param_1,undefined4 param_2,char param_3)

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

