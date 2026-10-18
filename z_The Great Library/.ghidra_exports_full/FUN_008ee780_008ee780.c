// FUN_008ee780 @ 008ee780 body=[[008ee780, 008ee8e8] [008ee8ec, 008ee916] [008ee91a, 008ee93f] [008ee943, 008ee968] [008ee96c, 008ee991] [008ee995, 008ee9ca] [008ee9ce, 008ee9e4] [008ee9e8, 008eea06] [008eea0a, 008eeb27] [008eeb2b, 008eeb55] [008eeb59, 008eeb7e] [008eeb82, 008eeba7] [008eebab, 008eebe0] [008eebe4, 008eebff] [008eec03, 008eec23] [008eec27, 008eec3c]]


undefined4 FUN_008ee780(undefined4 param_1,undefined4 param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  uint local_1b0;
  uint local_194;
  uint local_178;
  uint local_15c;
  uint local_140;
  uint local_124;
  uint local_108;
  uint local_ec;
  uint local_d0;
  uint local_c8 [4];
  undefined4 local_b8;
  uint local_b4;
  uint local_ac;
  undefined4 local_9c;
  uint local_98;
  uint local_90 [4];
  undefined4 local_80;
  uint local_7c;
  uint local_74;
  undefined4 local_64;
  uint local_60;
  uint local_58;
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
  puStack_c = &LAB_00b85701;
  local_10 = ExceptionList;
  local_14 = 0;
  if (param_3 == *(char *)(in_ECX + 0x1c)) {
    local_b4 = 0xf;
    local_b8 = 0;
    local_c8[0] = local_c8[0] & 0xffffff00;
    ExceptionList = &local_10;
    FUN_00409350("IS_NOT_IN_CRISIS",0x10);
    local_8 = 0xb;
    local_60 = 0xf;
    local_64 = 0;
    local_74 = local_74 & 0xffffff00;
    FUN_00409350(&DAT_00dfc964,3);
    local_8._0_1_ = 0xc;
    FUN_009a8ee0(local_3c,local_c8);
    local_8._0_1_ = 0xd;
    iVar2 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
    local_8._0_1_ = 0xe;
    FUN_0055dd40();
    local_8._0_1_ = 0xf;
    FUN_00988fa0();
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
    if (0xf < local_1b0) {
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
    if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_60 = 0xf;
    local_64 = 0;
    local_74 = local_74 & 0xffffff00;
    uVar1 = local_b4;
  }
  else {
    local_98 = 0xf;
    local_9c = 0;
    local_ac = local_ac & 0xffffff00;
    ExceptionList = &local_10;
    FUN_00409350(&DAT_00dee2cc,1);
    local_8 = 1;
    local_7c = 0xf;
    local_80 = 0;
    local_90[0] = local_90[0] & 0xffffff00;
    FUN_00409350("IS_IN_CRISIS",0xc);
    local_8._0_1_ = 2;
    local_44 = 0xf;
    local_48 = 0;
    local_58 = local_58 & 0xffffff00;
    FUN_00409350(&DAT_00dfc964,3);
    local_8._0_1_ = 3;
    FUN_009a8ee0(local_28,local_90);
    local_8._0_1_ = 4;
    iVar2 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
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
    if (0xf < local_d0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
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
    if (0xf < local_ec) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = CONCAT31(local_8._1_3_,10);
    FUN_009adb70();
    if (local_24 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_44 = 0xf;
    local_48 = 0;
    local_58 = local_58 & 0xffffff00;
    if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_7c = 0xf;
    local_80 = 0;
    local_90[0] = local_90[0] & 0xffffff00;
    uVar1 = local_98;
  }
  if (0xf < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

