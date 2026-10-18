// FUN_008d9890 @ 008d9890 body=[[008d9890, 008d9a26] [008d9a2a, 008d9a4f] [008d9a53, 008d9a78] [008d9a7c, 008d9a9b] [008d9a9f, 008d9abb] [008d9abf, 008d9ae4] [008d9ae8, 008d9b1d] [008d9b21, 008d9b3a] [008d9b3e, 008d9b62] [008d9b66, 008d9cf0] [008d9cf4, 008d9d19] [008d9d1d, 008d9d42] [008d9d46, 008d9d65] [008d9d69, 008d9d85] [008d9d89, 008d9dae] [008d9db2, 008d9de7] [008d9deb, 008d9e07] [008d9e0b, 008d9e35] [008d9e39, 008d9e5e] [008d9e62, 008d9e77]]


/* WARNING: Removing unreachable block (ram,0x008d9b84) */
/* WARNING: Removing unreachable block (ram,0x008d9e53) */
/* WARNING: Removing unreachable block (ram,0x008d9e5a) */

undefined4 FUN_008d9890(undefined4 param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  uint local_224;
  uint local_208;
  uint local_1ec;
  uint local_1d0;
  uint local_1b4;
  uint local_198;
  uint local_17c;
  uint local_160;
  uint local_144;
  uint local_128;
  uint local_e8 [4];
  undefined4 local_d8;
  uint local_d4;
  uint local_cc [4];
  undefined4 local_bc;
  uint local_b8;
  uint local_b0;
  undefined4 local_a0;
  uint local_9c;
  uint local_94;
  undefined4 local_84;
  uint local_80;
  uint local_78;
  undefined4 local_68;
  uint local_64;
  uint local_5c;
  undefined4 local_4c;
  uint local_48;
  undefined1 local_40 [4];
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b85f6d;
  local_10 = ExceptionList;
  local_14 = 0;
  if (param_3 == '\0') {
    ExceptionList = &local_10;
    FUN_00409350(&DAT_00dee2cc,1);
    local_8 = 0xc;
    local_d4 = 0xf;
    local_d8 = 0;
    local_e8[0] = local_e8[0] & 0xffffff00;
    FUN_00409350("IS_OUR_VASSAL",0xd);
    local_8._0_1_ = 0xd;
    local_9c = 0xf;
    local_a0 = 0;
    local_b0 = local_b0 & 0xffffff00;
    FUN_00409350(&DAT_00df8514,2);
    local_8._0_1_ = 0xe;
    FUN_009a8ee0(local_40,local_e8);
    local_8._0_1_ = 0xf;
    iVar1 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
    local_8._0_1_ = 0x10;
    FUN_0055dd40();
    local_8._0_1_ = 0x11;
    local_64 = 0xf;
    local_68 = 0;
    local_78 = local_78 & 0xffffff00;
    FUN_00409350(&DAT_00df963c,2);
    local_8._0_1_ = 0x12;
    FUN_00988f20();
    local_8._0_1_ = 0x13;
    FUN_00988f20();
    local_8._0_1_ = 0x14;
    FUN_00988f20();
    local_8._0_1_ = 0x15;
    FUN_00988f20();
    local_14 = 1;
    if (0xf < local_144) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_17c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_1b4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_64) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_64 = 0xf;
    local_68 = 0;
    local_78 = local_78 & 0xffffff00;
    if (0xf < local_1ec) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_224) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = CONCAT31(local_8._1_3_,0x16);
    FUN_009adb70();
    if (local_3c != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    if (0xf < local_9c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_9c = 0xf;
    local_a0 = 0;
    local_b0 = local_b0 & 0xffffff00;
    if (0xf < local_d4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  else {
    ExceptionList = &local_10;
    FUN_00409350(&DAT_00dee2cc,1);
    local_8 = 1;
    local_b8 = 0xf;
    local_bc = 0;
    local_cc[0] = local_cc[0] & 0xffffff00;
    FUN_00409350("IS_NOT_OUR_VASSAL",0x11);
    local_8._0_1_ = 2;
    local_80 = 0xf;
    local_84 = 0;
    local_94 = local_94 & 0xffffff00;
    FUN_00409350(&DAT_00df8514,2);
    local_8._0_1_ = 3;
    FUN_009a8ee0(local_2c,local_cc);
    local_8._0_1_ = 4;
    iVar1 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
    local_8._0_1_ = 5;
    FUN_0055dd40();
    local_8._0_1_ = 6;
    local_48 = 0xf;
    local_4c = 0;
    local_5c = local_5c & 0xffffff00;
    FUN_00409350(&DAT_00df963c,2);
    local_8._0_1_ = 7;
    FUN_00988f20();
    local_8._0_1_ = 8;
    FUN_00988f20();
    local_8._0_1_ = 9;
    FUN_00988f20();
    local_8._0_1_ = 10;
    FUN_00988f20();
    local_14 = 1;
    if (0xf < local_208) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_160) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_1d0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_48 = 0xf;
    local_4c = 0;
    local_5c = local_5c & 0xffffff00;
    if (0xf < local_198) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_128) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = CONCAT31(local_8._1_3_,0xb);
    FUN_009adb70();
    if (local_28 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    if (0xf < local_80) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_80 = 0xf;
    local_84 = 0;
    local_94 = local_94 & 0xffffff00;
    if (0xf < local_b8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  ExceptionList = local_10;
  return param_1;
}

