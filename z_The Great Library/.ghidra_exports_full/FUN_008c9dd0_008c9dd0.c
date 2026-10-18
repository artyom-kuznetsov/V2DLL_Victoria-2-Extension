// FUN_008c9dd0 @ 008c9dd0 body=[[008c9dd0, 008c9f26] [008c9f2a, 008c9f54] [008c9f58, 008c9f7a] [008c9f7e, 008c9fb0] [008c9fb4, 008c9fca] [008c9fce, 008c9fe9] [008c9fed, 008ca003] [008ca007, 008ca10d] [008ca111, 008ca138] [008ca13c, 008ca161] [008ca165, 008ca19a] [008ca19e, 008ca1b4] [008ca1b8, 008ca1d3] [008ca1d7, 008ca1ed] [008ca1f1, 008ca20d] [008ca211, 008ca226]]


undefined4 FUN_008c9dd0(undefined4 param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  int in_ECX;
  uint local_d8;
  uint local_bc;
  uint local_a0;
  uint local_84;
  uint local_7c [4];
  undefined4 local_6c;
  uint local_68;
  uint local_60 [4];
  undefined4 local_50;
  uint local_4c;
  uint local_44;
  undefined4 local_34;
  uint local_30;
  undefined4 local_28;
  undefined1 local_24 [4];
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b8663a;
  local_10 = ExceptionList;
  local_28 = 0;
  ExceptionList = &local_10;
  FUN_0055c6c0();
  FUN_0055dd40();
  local_8 = 1;
  if (param_3 == *(char *)(in_ECX + 0x1c)) {
    local_68 = 0xf;
    local_6c = 0;
    local_7c[0] = local_7c[0] & 0xffffff00;
    FUN_00409350(&DAT_00dfc7b4,3);
    local_8._0_1_ = 2;
    local_30 = 0xf;
    local_34 = 0;
    local_44 = local_44 & 0xffffff00;
    FUN_00409350(&DAT_00df963c,2);
    local_8._0_1_ = 3;
    local_4c = 0xf;
    local_50 = 0;
    local_60[0] = local_60[0] & 0xffffff00;
    FUN_00409350("NOT_CONTROLLED_BY",0x11);
    local_8._0_1_ = 4;
    FUN_009a8ee0(local_24,local_60);
    local_8._0_1_ = 5;
    iVar1 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
    local_8._0_1_ = 6;
    FUN_00988f20();
    local_8._0_1_ = 7;
    FUN_00988f20();
    local_8._0_1_ = 8;
    FUN_00988f20();
    local_28 = 1;
    if (0xf < local_a0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_bc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_84) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = CONCAT31(local_8._1_3_,9);
    FUN_009adb70();
    if (local_20 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_4c = 0xf;
    local_50 = 0;
    local_60[0] = local_60[0] & 0xffffff00;
    if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_30 = 0xf;
    local_34 = 0;
    local_44 = local_44 & 0xffffff00;
    if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_7c[0] = local_7c[0] & 0xffffff00;
  }
  else {
    local_4c = 0xf;
    local_50 = 0;
    local_60[0] = local_60[0] & 0xffffff00;
    FUN_00409350(&DAT_00dfc7b4,3);
    local_8._0_1_ = 10;
    local_30 = 0xf;
    local_34 = 0;
    local_44 = local_44 & 0xffffff00;
    FUN_00409350(&DAT_00df963c,2);
    local_8._0_1_ = 0xb;
    local_68 = 0xf;
    local_6c = 0;
    local_7c[0] = local_7c[0] & 0xffffff00;
    FUN_00409350("CONTROLLED_BY",0xd);
    local_8._0_1_ = 0xc;
    FUN_009a8ee0(local_24,local_7c);
    local_8._0_1_ = 0xd;
    iVar1 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
    local_8._0_1_ = 0xe;
    FUN_00988f20();
    local_8._0_1_ = 0xf;
    FUN_00988f20();
    local_8._0_1_ = 0x10;
    FUN_00988f20();
    local_28 = 1;
    if (0xf < local_84) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_bc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_a0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = CONCAT31(local_8._1_3_,0x11);
    FUN_009adb70();
    if (local_20 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_68 = 0xf;
    local_6c = 0;
    local_7c[0] = local_7c[0] & 0xffffff00;
    if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_30 = 0xf;
    local_34 = 0;
    local_44 = local_44 & 0xffffff00;
    if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_60[0] = local_60[0] & 0xffffff00;
  }
  if (0xf < local_d8) {
    local_18 = 0;
    local_1c = 0;
    local_20 = 0;
    local_30 = 0xf;
    local_34 = 0;
    local_4c = 0xf;
    local_50 = 0;
    local_68 = 0xf;
    local_6c = 0;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

