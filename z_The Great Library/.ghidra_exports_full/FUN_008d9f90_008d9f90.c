// FUN_008d9f90 @ 008d9f90 body=[[008d9f90, 008da118] [008da11c, 008da146] [008da14a, 008da16f] [008da173, 008da1a8] [008da1ac, 008da1c8] [008da1cc, 008da1f3] [008da1f7, 008da213] [008da217, 008da387] [008da38b, 008da3b5] [008da3b9, 008da3de] [008da3e2, 008da417] [008da41b, 008da437] [008da43b, 008da45f] [008da463, 008da47f] [008da483, 008da4a8] [008da4ac, 008da4c1]]


/* WARNING: Removing unreachable block (ram,0x008da49d) */
/* WARNING: Removing unreachable block (ram,0x008da22c) */
/* WARNING: Removing unreachable block (ram,0x008da4a3) */
/* WARNING: Removing unreachable block (ram,0x008da474) */

undefined4 FUN_008d9f90(undefined4 param_1,int param_2,char param_3)

{
  int iVar1;
  int in_ECX;
  uint local_1b8;
  uint local_19c;
  uint local_180;
  uint local_164;
  uint local_148;
  uint local_12c;
  uint local_110;
  uint local_f4;
  uint local_98 [4];
  undefined4 local_88;
  uint local_84;
  uint local_7c [4];
  undefined4 local_6c;
  uint local_68;
  uint local_60;
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
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b86471;
  local_10 = ExceptionList;
  local_1c = 0;
  if (param_3 == '\0') {
    ExceptionList = &local_10;
    FUN_00409350(&DAT_00dfc7b4,3);
    local_8 = 10;
    FUN_00409350(&DAT_00df963c,2);
    local_8._0_1_ = 0xb;
    local_68 = 0xf;
    local_6c = 0;
    local_7c[0] = local_7c[0] & 0xffffff00;
    FUN_00409350("HAVE_ALLIANCE_WITH",0x12);
    local_8._0_1_ = 0xc;
    if (*(char *)(in_ECX + 0x18) == '\0') {
      if (*(char *)(in_ECX + 0x19) == '\0') {
        local_18 = *(undefined4 *)(in_ECX + 0x1c);
        local_14 = *(undefined4 *)(in_ECX + 0x20);
      }
      else {
        local_18 = *(undefined4 *)(*(int *)(param_2 + 0x24) + 0x2c);
        local_14 = *(undefined4 *)(*(int *)(param_2 + 0x24) + 0x30);
      }
    }
    else {
      FUN_008a8dc0();
    }
    FUN_0055dd40();
    local_8._0_1_ = 0xd;
    FUN_009a8ee0(local_30,local_7c);
    local_8._0_1_ = 0xe;
    iVar1 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
    local_8._0_1_ = 0xf;
    FUN_00988f20();
    local_8._0_1_ = 0x10;
    FUN_00988f20();
    local_8._0_1_ = 0x11;
    FUN_00988f20();
    local_1c = 1;
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
    local_8 = CONCAT31(local_8._1_3_,0x12);
    FUN_009adb70();
    if (local_2c != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    if (0xf < local_1b8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  else {
    ExceptionList = &local_10;
    FUN_00409350(&DAT_00dfc7b4,3);
    local_8 = 1;
    local_4c = 0xf;
    local_50 = 0;
    local_60 = local_60 & 0xffffff00;
    FUN_00409350(&DAT_00df963c,2);
    local_8._0_1_ = 2;
    local_84 = 0xf;
    local_88 = 0;
    local_98[0] = local_98[0] & 0xffffff00;
    FUN_00409350("HAVE_N0T_ALLIANCE_WITH",0x16);
    local_8._0_1_ = 3;
    if (*(char *)(in_ECX + 0x18) == '\0') {
      if (*(char *)(in_ECX + 0x19) == '\0') {
        local_18 = *(undefined4 *)(in_ECX + 0x1c);
        local_14 = *(undefined4 *)(in_ECX + 0x20);
      }
      else {
        local_18 = *(undefined4 *)(*(int *)(param_2 + 0x24) + 0x2c);
        local_14 = *(undefined4 *)(*(int *)(param_2 + 0x24) + 0x30);
      }
    }
    else {
      FUN_008a8dc0();
    }
    FUN_0055dd40();
    local_8._0_1_ = 4;
    FUN_009a8ee0(local_44,local_98);
    local_8._0_1_ = 5;
    iVar1 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
    local_8._0_1_ = 6;
    FUN_00988f20();
    local_8._0_1_ = 7;
    FUN_00988f20();
    local_8._0_1_ = 8;
    FUN_00988f20();
    local_1c = 1;
    if (0xf < local_164) {
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
    local_8 = CONCAT31(local_8._1_3_,9);
    FUN_009adb70();
    if (local_40 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_40 = 0;
    local_3c = 0;
    local_38 = 0;
    if (0xf < local_f4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_84) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_84 = 0xf;
    local_88 = 0;
    local_98[0] = local_98[0] & 0xffffff00;
    if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  ExceptionList = local_10;
  return param_1;
}

