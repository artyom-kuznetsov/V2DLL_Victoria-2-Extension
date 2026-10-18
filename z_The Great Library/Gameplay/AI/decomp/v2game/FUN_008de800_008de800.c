// FUN_008de800 @ 008de800 body=[[008de800, 008de876] [008de87a, 008de909] [008de90d, 008de92c] [008de930, 008de9e7] [008de9eb, 008dea09] [008dea0d, 008deab3] [008deab7, 008deb40] [008deb44, 008deb63] [008deb67, 008dec18] [008dec1c, 008dec3a] [008dec3e, 008dec93] [008dec97, 008decab]]


undefined4 FUN_008de800(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined1 local_98 [4];
  int local_94;
  undefined1 local_84 [4];
  int local_80;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_5c;
  uint local_58;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b85a3f;
  local_10 = ExceptionList;
  local_70 = 0;
  if ((char)param_3 == '\0') {
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    ExceptionList = &local_10;
    FUN_00409350("IS_GUARANTEEING_TRIGGER",0x17);
    local_8 = 0xb;
    FUN_009a8ee0(local_84,local_34);
    local_8._0_1_ = 0xd;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    FUN_00409350("COUNTRY",7);
    local_8._0_1_ = 0xe;
    FUN_0055dd40();
    local_8._0_1_ = 0xf;
    param_3 = FUN_00aae9af();
    local_8._0_1_ = 0x10;
    if (param_3 == 0) {
      param_3 = 0;
    }
    else {
      param_3 = FUN_009a9ce0();
    }
    local_8._0_1_ = 0xf;
    FUN_009e6810(local_50,&param_3);
    if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 0xd;
    local_58 = 0xf;
    local_5c = 0;
    local_6c = local_6c & 0xffffff00;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    FUN_00409350("TARGET_COUNTRY",0xe);
    local_8._0_1_ = 0x11;
    if (*(char *)(local_14 + 0x18) == '\0') {
      if (*(char *)(local_14 + 0x19) == '\0') {
        local_18 = *(undefined4 *)(local_14 + 0x1c);
        local_14 = *(int *)(local_14 + 0x20);
      }
      else {
        local_18 = *(undefined4 *)(*(int *)(param_2 + 0x24) + 0x2c);
        local_14 = *(int *)(*(int *)(param_2 + 0x24) + 0x30);
      }
    }
    else {
      FUN_008a8dc0();
    }
    FUN_0055dd40();
    local_8._0_1_ = 0x12;
    param_3 = FUN_00aae9af();
    local_8._0_1_ = 0x13;
    if (param_3 == 0) {
      param_3 = 0;
    }
    else {
      param_3 = FUN_009a9ce0();
    }
    local_8._0_1_ = 0x12;
    FUN_009e6810(local_50,&param_3);
    if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = CONCAT31(local_8._1_3_,0xd);
    local_58 = 0xf;
    local_5c = 0;
    local_6c = local_6c & 0xffffff00;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    iVar1 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
    local_70 = 1;
    local_8 = 0x14;
    FUN_009adb70();
    if (local_80 == 0) {
      ExceptionList = local_10;
      return param_1;
    }
    FUN_009e6a80();
  }
  else {
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    ExceptionList = &local_10;
    FUN_00409350("IS_NOT_GUARANTEEING_TRIGGER",0x1b);
    local_8 = 1;
    FUN_009a8ee0(local_98,local_50);
    local_8._0_1_ = 3;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    FUN_00409350("COUNTRY",7);
    local_8._0_1_ = 4;
    FUN_0055dd40();
    local_8._0_1_ = 5;
    param_3 = FUN_00aae9af();
    local_8._0_1_ = 6;
    if (param_3 == 0) {
      param_3 = 0;
    }
    else {
      param_3 = FUN_009a9ce0();
    }
    local_8._0_1_ = 5;
    FUN_009e6810(local_34,&param_3);
    if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 3;
    local_58 = 0xf;
    local_5c = 0;
    local_6c = local_6c & 0xffffff00;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    FUN_00409350("TARGET_COUNTRY",0xe);
    local_8._0_1_ = 7;
    if (*(char *)(local_14 + 0x18) == '\0') {
      if (*(char *)(local_14 + 0x19) == '\0') {
        local_18 = *(undefined4 *)(local_14 + 0x1c);
        local_14 = *(int *)(local_14 + 0x20);
      }
      else {
        local_18 = *(undefined4 *)(*(int *)(param_2 + 0x24) + 0x2c);
        local_14 = *(int *)(*(int *)(param_2 + 0x24) + 0x30);
      }
    }
    else {
      FUN_008a8dc0();
    }
    FUN_0055dd40();
    local_8._0_1_ = 8;
    param_3 = FUN_00aae9af();
    local_8._0_1_ = 9;
    if (param_3 == 0) {
      param_3 = 0;
    }
    else {
      param_3 = FUN_009a9ce0();
    }
    local_8._0_1_ = 8;
    FUN_009e6810(local_34,&param_3);
    if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = CONCAT31(local_8._1_3_,3);
    local_58 = 0xf;
    local_5c = 0;
    local_6c = local_6c & 0xffffff00;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    iVar1 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
    local_70 = 1;
    local_8 = 10;
    FUN_009adb70();
    if (local_94 == 0) {
      ExceptionList = local_10;
      return param_1;
    }
    FUN_009e6a80();
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

