// FUN_0073b0c0 @ 0073b0c0 body=[[0073b0c0, 0073b13a] [0073b13e, 0073b1d1] [0073b1d5, 0073b206] [0073b20a, 0073b225] [0073b229, 0073b358] [0073b35c, 0073b386] [0073b38a, 0073b3af] [0073b3b3, 0073b3e8] [0073b3ec, 0073b408] [0073b40c, 0073b445] [0073b449, 0073b462] [0073b466, 0073b484] [0073b488, 0073b49e] [0073b4a2, 0073b4b7]]


undefined4 * FUN_0073b0c0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint local_104;
  uint local_e8;
  uint local_cc;
  uint local_b0;
  uint local_a8 [4];
  undefined4 local_98;
  uint local_94;
  uint local_8c [4];
  undefined4 local_7c;
  uint local_78;
  undefined1 local_70 [4];
  int local_6c;
  undefined4 local_68;
  undefined4 local_64;
  uint local_5c [4];
  undefined4 local_4c;
  uint local_48;
  uint local_40 [4];
  undefined4 local_30;
  uint local_2c;
  undefined1 local_24 [4];
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b97e20;
  local_10 = ExceptionList;
  local_94 = 0xf;
  local_98 = 0;
  local_a8[0] = local_a8[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("DefaultConfirm",0xe);
  local_8 = 0;
  FUN_00640680(param_1,local_a8);
  local_8._0_1_ = 2;
  if (0xf < local_94) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_94 = 0xf;
  local_98 = 0;
  local_a8[0] = local_a8[0] & 0xffffff00;
  *param_1 = _anon_2433CAEC::CConfirmState::vftable;
  param_1[0x1b] = param_3;
  local_2c = 0xf;
  local_30 = 0;
  local_40[0] = local_40[0] & 0xffffff00;
  FUN_00409350("CONFIRM_CREATE_STATE_TITLE",0x1a);
  local_8._0_1_ = 3;
  FUN_009a8ee0(local_24,local_40);
  local_8._0_1_ = 4;
  iVar1 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
  local_8._0_1_ = 5;
  FUN_00641710();
  if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_48 = 0xf;
  local_4c = 0;
  local_5c[0] = local_5c[0] & 0xffffff00;
  local_8._0_1_ = 6;
  FUN_009adb70();
  if (local_20 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 2;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_48 = 0xf;
  local_4c = 0;
  local_5c[0] = local_5c[0] & 0xffffff00;
  FUN_00409350("CONFIRM_CREATE_STATE_DESC2",0x1a);
  local_8._0_1_ = 7;
  local_2c = 0xf;
  local_30 = 0;
  local_40[0] = local_40[0] & 0xffffff00;
  FUN_00409350(&DAT_00dee2cc,1);
  local_8._0_1_ = 8;
  local_78 = 0xf;
  local_7c = 0;
  local_8c[0] = local_8c[0] & 0xffffff00;
  FUN_00409350("CONFIRM_CREATE_STATE_DESC",0x19);
  local_8._0_1_ = 9;
  FUN_009a8ee0(local_70,local_5c);
  local_8._0_1_ = 10;
  iVar1 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
  local_8._0_1_ = 0xb;
  FUN_009a8ee0(local_24,local_8c);
  local_8._0_1_ = 0xc;
  iVar1 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
  local_8._0_1_ = 0xd;
  FUN_00988f20();
  local_8._0_1_ = 0xe;
  FUN_00988f20();
  local_8._0_1_ = 0xf;
  FUN_006417b0();
  if (0xf < local_b0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (0xf < local_e8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (0xf < local_cc) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 0x10;
  FUN_009adb70();
  if (local_20 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  if (0xf < local_104) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = CONCAT31(local_8._1_3_,0x11);
  FUN_009adb70();
  if (local_6c != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_6c = 0;
  local_68 = 0;
  local_64 = 0;
  if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_78 = 0xf;
  local_7c = 0;
  local_8c[0] = local_8c[0] & 0xffffff00;
  if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_2c = 0xf;
  local_30 = 0;
  local_40[0] = local_40[0] & 0xffffff00;
  if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

