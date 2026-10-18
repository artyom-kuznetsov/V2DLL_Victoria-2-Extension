// FUN_008bc840 @ 008bc840 body=[[008bc840, 008bc9b3] [008bc9b7, 008bc9e1] [008bc9e5, 008bca0a] [008bca0e, 008bca43] [008bca47, 008bca63] [008bca67, 008bca8b] [008bca8f, 008bcaa8] [008bcaac, 008bcc0e] [008bcc12, 008bcc3c] [008bcc40, 008bcc65] [008bcc69, 008bcc9e] [008bcca2, 008bccbe] [008bccc2, 008bcce6] [008bccea, 008bcd06] [008bcd0a, 008bcd2f] [008bcd33, 008bcd48]]


/* WARNING: Removing unreachable block (ram,0x008bca9d) */
/* WARNING: Removing unreachable block (ram,0x008bcd24) */
/* WARNING: Removing unreachable block (ram,0x008bccfb) */
/* WARNING: Removing unreachable block (ram,0x008bca83) */
/* WARNING: Removing unreachable block (ram,0x008bcac4) */
/* WARNING: Removing unreachable block (ram,0x008bcd2b) */
/* WARNING: Removing unreachable block (ram,0x008bccde) */

undefined4 FUN_008bc840(undefined4 param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  int in_ECX;
  undefined8 uVar2;
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
    uVar2 = __allmul(*(int *)(in_ECX + 0x1c),*(int *)(in_ECX + 0x1c) >> 0x1f,100000,0);
    __alldiv(uVar2,1000,0);
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
    uVar2 = __allmul(*(int *)(in_ECX + 0x1c),*(int *)(in_ECX + 0x1c) >> 0x1f,100000,0);
    __alldiv(uVar2,1000,0);
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

