// FUN_008ded40 @ 008ded40 body=[[008ded40, 008dedce] [008dedd2, 008dee95] [008dee99, 008deeb8] [008deebc, 008def43] [008def47, 008def61] [008def65, 008defc6] [008defca, 008df010] [008df014, 008df0d1] [008df0d5, 008df0f4] [008df0f8, 008df179] [008df17d, 008df197] [008df19b, 008df1ed] [008df1f1, 008df21d]]


undefined4 FUN_008ded40(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int in_ECX;
  undefined1 local_430 [920];
  undefined1 local_98 [4];
  int local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 local_84 [4];
  int local_80;
  undefined4 local_7c;
  undefined4 local_78;
  uint local_70 [4];
  undefined4 local_60;
  uint local_5c;
  undefined4 local_54;
  uint local_50;
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00bb771c;
  local_10 = ExceptionList;
  local_54 = 0;
  ExceptionList = &local_10;
  FUN_004a84c0(local_430,*(undefined4 *)(param_2 + 0x10));
  local_8 = 1;
  local_60 = 0;
  local_70[0] = local_70[0] & 0xffffff00;
  local_5c = 0xf;
  if ((char)param_3 == '\0') {
    FUN_00409350("COUNTRY_HAS_UNITS_IN_PROVINCE_TRIGGER",0x25);
    local_8._0_1_ = 0xc;
    FUN_009a8ee0(local_84,local_70);
    local_8._0_1_ = 0xe;
    if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_5c = 0xf;
    local_60 = 0;
    local_70[0] = local_70[0] & 0xffffff00;
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    FUN_00409350("COUNTRY",7);
    local_8._0_1_ = 0xf;
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
    local_8._0_1_ = 0x10;
    param_3 = FUN_00aae9af();
    local_8._0_1_ = 0x11;
    if (param_3 == 0) {
      param_3 = 0;
    }
    else {
      param_3 = FUN_009a9ce0();
    }
    local_8._0_1_ = 0x10;
    FUN_009e6810(local_34,&param_3);
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 0xe;
    local_3c = 0xf;
    local_40 = 0;
    local_50 = local_50 & 0xffffff00;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    FUN_00409350("PROVINCE",8);
    local_8._0_1_ = 0x12;
    FUN_004aaf90();
    local_8._0_1_ = 0x13;
    param_3 = FUN_00aae9af();
    local_8._0_1_ = 0x14;
    if (param_3 == 0) {
      param_3 = 0;
    }
    else {
      param_3 = FUN_009a9ce0();
    }
    local_8._0_1_ = 0x13;
    FUN_009e6810(local_34,&param_3);
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 0xe;
    local_3c = 0xf;
    local_40 = 0;
    local_50 = local_50 & 0xffffff00;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    iVar1 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
    local_54 = 1;
    local_8 = CONCAT31(local_8._1_3_,0x15);
    FUN_009adb70();
    if (local_80 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_80 = 0;
    local_7c = 0;
    local_78 = 0;
  }
  else {
    FUN_00409350("COUNTRY_HAS_NO_UNITS_IN_PROVINCE_TRIGGER",0x28);
    local_8._0_1_ = 2;
    FUN_009a8ee0(local_98,local_70);
    local_8._0_1_ = 4;
    if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_5c = 0xf;
    local_60 = 0;
    local_70[0] = local_70[0] & 0xffffff00;
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    FUN_00409350("COUNTRY",7);
    local_8._0_1_ = 5;
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
    local_8._0_1_ = 6;
    param_3 = FUN_00aae9af();
    local_8._0_1_ = 7;
    if (param_3 == 0) {
      param_3 = 0;
    }
    else {
      param_3 = FUN_009a9ce0();
    }
    local_8._0_1_ = 6;
    FUN_009e6810(local_34,&param_3);
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 4;
    local_3c = 0xf;
    local_40 = 0;
    local_50 = local_50 & 0xffffff00;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    FUN_00409350("PROVINCE",8);
    local_8._0_1_ = 8;
    FUN_004aaf90();
    local_8._0_1_ = 9;
    param_3 = FUN_00aae9af();
    local_8._0_1_ = 10;
    if (param_3 == 0) {
      param_3 = 0;
    }
    else {
      param_3 = FUN_009a9ce0();
    }
    local_8._0_1_ = 9;
    FUN_009e6810(local_34,&param_3);
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 4;
    local_3c = 0xf;
    local_40 = 0;
    local_50 = local_50 & 0xffffff00;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    iVar1 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
    local_54 = 1;
    local_8 = CONCAT31(local_8._1_3_,0xb);
    FUN_009adb70();
    if (local_94 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_94 = 0;
    local_90 = 0;
    local_8c = 0;
  }
  local_8 = local_8 & 0xffffff00;
  FUN_004a8840();
  ExceptionList = local_10;
  return param_1;
}

