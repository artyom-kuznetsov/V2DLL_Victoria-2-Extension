// FUN_008c3b00 @ 008c3b00 body=[[008c3b00, 008c3c89] [008c3c8d, 008c3cb7] [008c3cbb, 008c3ce0] [008c3ce4, 008c3d09] [008c3d0d, 008c3d32] [008c3d36, 008c3d6b] [008c3d6f, 008c3d88] [008c3d8c, 008c3dad] [008c3db1, 008c3f0b] [008c3f0f, 008c3f34] [008c3f38, 008c3f5d] [008c3f61, 008c3f86] [008c3f8a, 008c3faf] [008c3fb3, 008c3fe8] [008c3fec, 008c4002] [008c4006, 008c4027] [008c402b, 008c4050] [008c4054, 008c4069]]


/* WARNING: Removing unreachable block (ram,0x008c3dc6) */
/* WARNING: Removing unreachable block (ram,0x008c4045) */
/* WARNING: Removing unreachable block (ram,0x008c404b) */

undefined4 FUN_008c3b00(undefined4 param_1,int param_2,char param_3)

{
  int iVar1;
  int in_ECX;
  uint local_1f0;
  uint local_1d4;
  uint local_1b8;
  uint local_19c;
  uint local_180;
  uint local_164;
  uint local_148;
  uint local_12c;
  uint local_110;
  uint local_f4;
  uint local_b4 [4];
  undefined4 local_a4;
  uint local_a0;
  uint local_98;
  undefined4 local_88;
  uint local_84;
  uint local_7c;
  undefined4 local_6c;
  uint local_68;
  uint local_60 [4];
  undefined4 local_50;
  uint local_4c;
  undefined1 local_44 [4];
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_30 [4];
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b86ca7;
  local_10 = ExceptionList;
  local_14 = 0;
  local_18 = *(int *)(in_ECX + 0x24);
  local_1c = *(undefined4 *)(in_ECX + 0x20);
  if (local_18 == 0) {
    local_1c = *(undefined4 *)(param_2 + 8);
    local_18 = *(int *)(param_2 + 0xc);
  }
  if (param_3 == *(char *)(in_ECX + 0x1c)) {
    ExceptionList = &local_10;
    FUN_00409350(&DAT_00dee2cc,1);
    local_8 = 1;
    local_4c = 0xf;
    local_50 = 0;
    local_60[0] = local_60[0] & 0xffffff00;
    FUN_00409350("DOSNT_EXISTS",0xc);
    local_8._0_1_ = 2;
    local_84 = 0xf;
    local_88 = 0;
    local_98 = local_98 & 0xffffff00;
    FUN_00409350(&DAT_00df8514,2);
    local_8._0_1_ = 3;
    FUN_009a8ee0(local_44,local_60);
    local_8._0_1_ = 4;
    iVar1 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
    local_8._0_1_ = 5;
    FUN_0055dd40();
    local_8._0_1_ = 6;
    FUN_00988fa0();
    local_8._0_1_ = 7;
    FUN_00988f20();
    local_8._0_1_ = 8;
    FUN_00988f20();
    local_8._0_1_ = 9;
    FUN_00988f20();
    local_14 = 1;
    if (0xf < local_1d4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_12c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_19c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_164) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_f4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = CONCAT31(local_8._1_3_,10);
    FUN_009adb70();
    if (local_40 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_40 = 0;
    local_3c = 0;
    local_38 = 0;
    if (0xf < local_84) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_84 = 0xf;
    local_88 = 0;
    local_98 = local_98 & 0xffffff00;
    if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  else {
    ExceptionList = &local_10;
    FUN_00409350(&DAT_00dee2cc,1);
    local_8 = 0xb;
    local_a0 = 0xf;
    local_a4 = 0;
    local_b4[0] = local_b4[0] & 0xffffff00;
    FUN_00409350("EXISTS",6);
    local_8._0_1_ = 0xc;
    local_68 = 0xf;
    local_6c = 0;
    local_7c = local_7c & 0xffffff00;
    FUN_00409350(&DAT_00df8514,2);
    local_8._0_1_ = 0xd;
    FUN_009a8ee0(local_30,local_b4);
    local_8._0_1_ = 0xe;
    iVar1 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
    local_8._0_1_ = 0xf;
    FUN_0055dd40();
    local_8._0_1_ = 0x10;
    FUN_00988fa0();
    local_8._0_1_ = 0x11;
    FUN_00988f20();
    local_8._0_1_ = 0x12;
    FUN_00988f20();
    local_8._0_1_ = 0x13;
    FUN_00988f20();
    local_14 = 1;
    if (0xf < local_110) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_148) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_180) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_1b8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_1f0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = CONCAT31(local_8._1_3_,0x14);
    FUN_009adb70();
    if (local_2c != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_68 = 0xf;
    local_6c = 0;
    local_7c = local_7c & 0xffffff00;
    if (0xf < local_a0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  ExceptionList = local_10;
  return param_1;
}

