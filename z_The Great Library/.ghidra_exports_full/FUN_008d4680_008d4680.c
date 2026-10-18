// FUN_008d4680 @ 008d4680 body=[[008d4680, 008d47ce] [008d47d2, 008d47fc] [008d4800, 008d4825] [008d4829, 008d485e] [008d4862, 008d487e] [008d4882, 008d48a6] [008d48aa, 008d48c3] [008d48c7, 008d4a04] [008d4a08, 008d4a32] [008d4a36, 008d4a5b] [008d4a5f, 008d4a94] [008d4a98, 008d4ab4] [008d4ab8, 008d4adc] [008d4ae0, 008d4afc] [008d4b00, 008d4b25] [008d4b29, 008d4b3e]]


/* WARNING: Removing unreachable block (ram,0x008d48b8) */
/* WARNING: Removing unreachable block (ram,0x008d4b1a) */
/* WARNING: Removing unreachable block (ram,0x008d48df) */
/* WARNING: Removing unreachable block (ram,0x008d4b21) */
/* WARNING: Removing unreachable block (ram,0x008d4af1) */

undefined4 FUN_008d4680(undefined4 param_1,undefined4 param_2,char param_3)

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
  puStack_c = &LAB_00b66ee1;
  local_10 = ExceptionList;
  local_14 = 0;
  if (param_3 == '\0') {
    ExceptionList = &local_10;
    FUN_00409350(&DAT_00dfc7b4,3);
    local_8 = 10;
    FUN_00409350(&DAT_00df963c,2);
    local_8._0_1_ = 0xb;
    local_60 = 0xf;
    local_64 = 0;
    local_74[0] = local_74[0] & 0xffffff00;
    FUN_00409350("IS_NEIGHBOUR_WITH",0x11);
    local_8._0_1_ = 0xc;
    FUN_0055dd40();
    local_8._0_1_ = 0xd;
    FUN_009a8ee0(local_3c,local_74);
    local_8._0_1_ = 0xe;
    iVar1 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
    local_8._0_1_ = 0xf;
    FUN_00988f20();
    local_8._0_1_ = 0x10;
    FUN_00988f20();
    local_8._0_1_ = 0x11;
    FUN_00988f20();
    local_14 = 1;
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
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    if (0xf < local_1b0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  else {
    ExceptionList = &local_10;
    FUN_00409350(&DAT_00dfc7b4,3);
    local_8 = 1;
    FUN_00409350(&DAT_00df963c,2);
    local_8._0_1_ = 2;
    local_44 = 0xf;
    local_48 = 0;
    local_58[0] = local_58[0] & 0xffffff00;
    FUN_00409350("IS_NOT_NEIGHBOUR_WITH",0x15);
    local_8._0_1_ = 3;
    FUN_0055dd40();
    local_8._0_1_ = 4;
    FUN_009a8ee0(local_28,local_58);
    local_8._0_1_ = 5;
    iVar1 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
    local_8._0_1_ = 6;
    FUN_00988f20();
    local_8._0_1_ = 7;
    FUN_00988f20();
    local_8._0_1_ = 8;
    FUN_00988f20();
    local_14 = 1;
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
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    if (0xf < local_ec) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  ExceptionList = local_10;
  return param_1;
}

