// FUN_008dde10 @ 008dde10 body=[[008dde10, 008ddedf] [008ddee3, 008ddf6e] [008ddf72, 008ddf91] [008ddf95, 008de018] [008de01c, 008de036] [008de03a, 008de0e0] [008de0e4, 008de169] [008de16d, 008de18c] [008de190, 008de20d] [008de211, 008de22b] [008de22f, 008de284] [008de288, 008de29c]]


undefined4 FUN_008dde10(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int in_ECX;
  undefined1 local_98 [4];
  int local_94;
  undefined1 local_84 [4];
  int local_80;
  undefined4 local_70;
  undefined4 local_68;
  uint local_64;
  undefined4 local_54;
  uint local_50;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b85bdf;
  local_10 = ExceptionList;
  local_68 = 0;
  local_70 = *(undefined4 *)(param_2 + 8);
  if (*(char *)(in_ECX + 0x18) == '\0') {
    if (*(char *)(in_ECX + 0x19) == '\0') {
      local_70 = *(undefined4 *)(in_ECX + 0x1c);
      ExceptionList = &local_10;
    }
    else {
      local_70 = *(undefined4 *)(*(int *)(param_2 + 0x24) + 0x2c);
      ExceptionList = &local_10;
    }
  }
  else {
    ExceptionList = &local_10;
    FUN_008a8dc0();
  }
  if ((char)param_3 == '\0') {
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    FUN_00409350("MILITARY_ACCESS_WITH_TRIGGER",0x1c);
    local_8 = 0xb;
    FUN_009a8ee0(local_84,local_48);
    local_8._0_1_ = 0xd;
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350("COUNTRY",7);
    local_8._0_1_ = 0xe;
    FUN_004f97a0();
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
    FUN_009e6810(local_2c,&param_3);
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 0xd;
    local_50 = 0xf;
    local_54 = 0;
    local_64 = local_64 & 0xffffff00;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350("TARGET_COUNTRY",0xe);
    local_8._0_1_ = 0x11;
    FUN_004f97a0();
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
    FUN_009e6810(local_2c,&param_3);
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = CONCAT31(local_8._1_3_,0xd);
    local_50 = 0xf;
    local_54 = 0;
    local_64 = local_64 & 0xffffff00;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    iVar1 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
    local_68 = 1;
    local_8 = 0x14;
    FUN_009adb70();
    if (local_80 == 0) {
      ExceptionList = local_10;
      return param_1;
    }
    FUN_009e6a80();
  }
  else {
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350("NO_MILITARY_ACCESS_WITH_TRIGGER",0x1f);
    local_8 = 1;
    FUN_009a8ee0(local_98,local_2c);
    local_8._0_1_ = 3;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    FUN_00409350("COUNTRY",7);
    local_8._0_1_ = 4;
    FUN_004f97a0();
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
    FUN_009e6810(local_48,&param_3);
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 3;
    local_50 = 0xf;
    local_54 = 0;
    local_64 = local_64 & 0xffffff00;
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    FUN_00409350("TARGET_COUNTRY",0xe);
    local_8._0_1_ = 7;
    FUN_004f97a0();
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
    FUN_009e6810(local_48,&param_3);
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = CONCAT31(local_8._1_3_,3);
    local_50 = 0xf;
    local_54 = 0;
    local_64 = local_64 & 0xffffff00;
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    iVar1 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
    local_68 = 1;
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

