// FUN_008ccbf0 @ 008ccbf0 body=[[008ccbf0, 008ccd73] [008ccd77, 008ccda1] [008ccda5, 008ccdca] [008ccdce, 008cce03] [008cce07, 008cce23] [008cce27, 008cce60] [008cce64, 008cce7a] [008cce7e, 008cce9f] [008ccea3, 008cd023] [008cd027, 008cd051] [008cd055, 008cd07a] [008cd07e, 008cd0b3] [008cd0b7, 008cd0d3] [008cd0d7, 008cd110] [008cd114, 008cd130] [008cd134, 008cd15e] [008cd162, 008cd187] [008cd18b, 008cd1a0]]


/* WARNING: Removing unreachable block (ram,0x008cce94) */
/* WARNING: Removing unreachable block (ram,0x008cd17c) */
/* WARNING: Removing unreachable block (ram,0x008ccec1) */
/* WARNING: Removing unreachable block (ram,0x008cd182) */
/* WARNING: Removing unreachable block (ram,0x008cd153) */

undefined4 FUN_008ccbf0(undefined4 param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  int in_ECX;
  uint local_1d8;
  uint local_1bc;
  uint local_1a0;
  uint local_184;
  uint local_168;
  uint local_14c;
  uint local_130;
  uint local_114;
  uint local_9c [4];
  undefined4 local_8c;
  uint local_88;
  uint local_80 [4];
  undefined4 local_70;
  uint local_6c;
  undefined1 local_64 [4];
  int local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_50 [4];
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
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
  puStack_c = &LAB_00b670b8;
  local_10 = ExceptionList;
  local_14 = 0;
  if (param_3 == '\0') {
    ExceptionList = &local_10;
    FUN_00409350(&DAT_00e2d91c,4);
    local_8 = 0xc;
    FUN_00409350(&DAT_00e2d918,3);
    local_8._0_1_ = 0xd;
    local_88 = 0xf;
    local_8c = 0;
    local_9c[0] = local_9c[0] & 0xffffff00;
    FUN_00409350("HAVE_COUNTRY_FLAG",0x11);
    local_8._0_1_ = 0xe;
    FUN_009a8ee0(local_28,in_ECX + 0x1c);
    local_8._0_1_ = 0xf;
    iVar1 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
    local_8._0_1_ = 0x10;
    FUN_009a8ee0(local_3c,local_9c);
    local_8._0_1_ = 0x11;
    iVar1 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
    local_8._0_1_ = 0x12;
    FUN_00988f20();
    local_8._0_1_ = 0x13;
    FUN_00988f20();
    local_8._0_1_ = 0x14;
    FUN_00988f20();
    local_14 = 1;
    if (0xf < local_130) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_168) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_1a0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 0x15;
    FUN_009adb70();
    if (local_38 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    if (0xf < local_1d8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = CONCAT31(local_8._1_3_,0x16);
    FUN_009adb70();
    if (local_24 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  else {
    ExceptionList = &local_10;
    FUN_00409350(&DAT_00e2d91c,4);
    local_8 = 1;
    FUN_00409350(&DAT_00e2d918,3);
    local_8._0_1_ = 2;
    local_6c = 0xf;
    local_70 = 0;
    local_80[0] = local_80[0] & 0xffffff00;
    FUN_00409350("HAVE_NOT_COUNTRY_FLAG",0x15);
    local_8._0_1_ = 3;
    FUN_009a8ee0(local_50,in_ECX + 0x1c);
    local_8._0_1_ = 4;
    iVar1 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
    local_8._0_1_ = 5;
    FUN_009a8ee0(local_64,local_80);
    local_8._0_1_ = 6;
    iVar1 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
    local_8._0_1_ = 7;
    FUN_00988f20();
    local_8._0_1_ = 8;
    FUN_00988f20();
    local_8._0_1_ = 9;
    FUN_00988f20();
    local_14 = 1;
    if (0xf < local_184) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_14c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_1bc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 10;
    FUN_009adb70();
    if (local_60 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_60 = 0;
    local_5c = 0;
    local_58 = 0;
    if (0xf < local_114) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = CONCAT31(local_8._1_3_,0xb);
    FUN_009adb70();
    if (local_4c != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_4c = 0;
    local_48 = 0;
    local_44 = 0;
    if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  ExceptionList = local_10;
  return param_1;
}

