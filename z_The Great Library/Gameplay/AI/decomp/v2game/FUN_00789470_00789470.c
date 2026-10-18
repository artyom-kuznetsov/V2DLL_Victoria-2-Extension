// FUN_00789470 @ 00789470 body=[[00789470, 007894d2] [007894d6, 00789587] [0078958b, 007895bc] [007895c0, 007895db] [007895df, 00789654] [00789658, 00789688] [0078968c, 00789711] [00789715, 00789746] [0078974a, 00789769] [0078976d, 007897a7] [007897ab, 0078982c] [00789830, 00789877] [0078987b, 0078989e] [007898a2, 007898b6]]


/* WARNING: Removing unreachable block (ram,0x0078986f) */

undefined4 * FUN_00789470(undefined4 *param_1,int *param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 in_ECX;
  uint local_6c;
  uint local_64 [4];
  undefined4 local_54;
  uint local_50;
  uint local_48;
  undefined1 local_40 [4];
  int local_3c;
  undefined4 local_38;
  uint local_34;
  uint local_2c [2];
  undefined1 local_24 [4];
  int local_20;
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b97596;
  local_10 = ExceptionList;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("DefaultConfirm",0xe);
  local_8 = 0;
  FUN_00640680(param_1,local_2c);
  local_8._0_1_ = 2;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  *param_1 = CConfirmDisband::vftable;
  param_1[0x1a] = in_ECX;
  FUN_0079de40(param_1 + 0x1b,param_2);
  local_8._0_1_ = 3;
  uVar1 = (undefined1)local_8;
  local_8._0_1_ = 3;
  *(char *)(param_1 + 0x25) = (char)param_3;
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  if ((char)param_3 == '\0') {
    local_8._0_1_ = uVar1;
    FUN_00409350("CONFIRM_DISBAND_TITLE",0x15);
    local_8._0_1_ = 0xc;
    FUN_009a8ee0(local_24,local_64);
    local_8._0_1_ = 0xd;
    iVar2 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
    local_8._0_1_ = 0xe;
    FUN_00641710();
    if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 0xf;
    FUN_009adb70();
    if (local_20 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 3;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350("CONFIRM_DISBAND_DESC",0x14);
    local_8._0_1_ = 0x10;
    FUN_009a8ee0(local_40,local_2c);
    local_8._0_1_ = 0x12;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    FUN_00409350(&DAT_00dfbf14,4);
    local_8._0_1_ = 0x13;
    (**(code **)(*param_2 + 0x20))();
    param_3 = FUN_00aae9af();
    local_8._0_1_ = 0x14;
    if (param_3 == 0) {
      param_3 = 0;
    }
    else {
      param_3 = FUN_009a9ce0();
    }
    local_8._0_1_ = 0x13;
    FUN_009e6810(local_64,&param_3);
    local_8._0_1_ = 0x12;
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    iVar2 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
    local_8._0_1_ = 0x15;
    FUN_006417b0();
    local_8 = CONCAT31(local_8._1_3_,0x16);
    FUN_009adb70();
    if (local_3c == 0) {
      ExceptionList = local_10;
      return param_1;
    }
    FUN_009e6a80();
  }
  else {
    FUN_00409350("CONFIRM_DISBAND_TOO_SMALL_TITLE",0x1f);
    local_8._0_1_ = 4;
    FUN_009a8ee0(local_24,local_64);
    local_8._0_1_ = 5;
    iVar2 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
    local_8._0_1_ = 6;
    FUN_00641710();
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_34 = 0xf;
    local_38 = 0;
    local_48 = local_48 & 0xffffff00;
    local_8._0_1_ = 7;
    FUN_009adb70();
    if (local_20 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 3;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    FUN_00409350("CONFIRM_DISBAND_TOO_SMALL_DESC",0x1e);
    local_8._0_1_ = 8;
    FUN_009a8ee0(local_24,local_64);
    local_8._0_1_ = 9;
    iVar2 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
    local_8._0_1_ = 10;
    FUN_006417b0();
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_34 = 0xf;
    local_38 = 0;
    local_48 = local_48 & 0xffffff00;
    local_8 = CONCAT31(local_8._1_3_,0xb);
    FUN_009adb70();
    if (local_20 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    if (local_50 < 0x10) {
      ExceptionList = local_10;
      return param_1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

