// FUN_008d2f00 @ 008d2f00 body=[[008d2f00, 008d3088] [008d308c, 008d30b6] [008d30ba, 008d30df] [008d30e3, 008d3118] [008d311c, 008d3138] [008d313c, 008d3163] [008d3167, 008d3183] [008d3187, 008d32c0] [008d32c4, 008d32ee] [008d32f2, 008d3317] [008d331b, 008d3350] [008d3354, 008d3370] [008d3374, 008d3398] [008d339c, 008d33b8] [008d33bc, 008d33e1] [008d33e5, 008d33fa]]


/* WARNING: Removing unreachable block (ram,0x008d33d6) */
/* WARNING: Removing unreachable block (ram,0x008d319c) */
/* WARNING: Removing unreachable block (ram,0x008d33dc) */
/* WARNING: Removing unreachable block (ram,0x008d33ad) */

undefined4 FUN_008d2f00(undefined4 param_1,int param_2,char param_3)

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
  if (*(char *)(in_ECX + 0x18) == '\0') {
    if (*(char *)(in_ECX + 0x19) == '\0') {
      local_18 = *(undefined4 *)(in_ECX + 0x1c);
      local_14 = *(undefined4 *)(in_ECX + 0x20);
      ExceptionList = &local_10;
    }
    else {
      local_18 = *(undefined4 *)(*(int *)(param_2 + 0x24) + 0x2c);
      local_14 = *(undefined4 *)(*(int *)(param_2 + 0x24) + 0x30);
      ExceptionList = &local_10;
    }
  }
  else {
    ExceptionList = &local_10;
    FUN_008a8dc0();
  }
  if (param_3 == '\0') {
    FUN_00409350(&DAT_00dfc7b4,3);
    local_8 = 10;
    FUN_00409350(&DAT_00df963c,2);
    local_8._0_1_ = 0xb;
    local_68 = 0xf;
    local_6c = 0;
    local_7c[0] = local_7c[0] & 0xffffff00;
    FUN_00409350("CONSTRUCTING_CASUS_BELLI_AGAINST",0x20);
    local_8._0_1_ = 0xc;
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
    FUN_00409350("NOT_CONSTRUCTING_CASUS_BELLI_AGAINST",0x24);
    local_8._0_1_ = 3;
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

