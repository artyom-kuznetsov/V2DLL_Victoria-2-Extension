// FUN_008d9160 @ 008d9160 body=[[008d9160, 008d9311] [008d9315, 008d9343] [008d9347, 008d9375] [008d9379, 008d93bd] [008d93c1, 008d93e7] [008d93eb, 008d9413] [008d9417, 008d9436] [008d943a, 008d945d] [008d9466, 008d957e] [008d9582, 008d95b1] [008d95b5, 008d95df] [008d95e3, 008d9623] [008d9627, 008d9648] [008d964c, 008d9675] [008d9679, 008d9694] [008d9698, 008d96b3] [008d96b7, 008d9705]]


undefined1 * FUN_008d9160(undefined1 *param_1,int param_2,char param_3)

{
  int iVar1;
  int in_ECX;
  int local_f4;
  undefined1 local_f0 [4];
  int local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  uint local_dc [4];
  undefined4 local_cc;
  uint local_c8;
  uint local_c0 [4];
  undefined4 local_b0;
  uint local_ac;
  uint local_a4;
  undefined4 local_94;
  uint local_90;
  uint local_88;
  undefined4 local_78;
  uint local_74;
  uint local_6c;
  undefined4 local_5c;
  uint local_58;
  uint local_50;
  undefined4 local_40;
  uint local_3c;
  uint local_34;
  undefined4 local_24;
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b86032;
  local_14 = ExceptionList;
  if (*(char *)(in_ECX + 0x18) == '\0') {
    if (*(char *)(in_ECX + 0x19) == '\0') {
      local_f4 = *(int *)(in_ECX + 0x20);
      ExceptionList = &local_14;
    }
    else {
      local_f4 = *(int *)(*(int *)(param_2 + 0x24) + 0x30);
      ExceptionList = &local_14;
    }
  }
  else {
    ExceptionList = &local_14;
    FUN_008a8dc0();
  }
  if (local_f4 == 0) {
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    FUN_00409350(&DAT_00ded94d,0);
  }
  else {
    local_94 = 0;
    local_a4 = local_a4 & 0xffffff00;
    local_90 = 0xf;
    FUN_00409350(&DAT_00dfc7b4,3);
    if (param_3 == '\0') {
      local_c = 9;
      local_c8 = 0xf;
      local_cc = 0;
      local_dc[0] = local_dc[0] & 0xffffff00;
      FUN_00409350(&DAT_00df963c,2);
      local_c._0_1_ = 10;
      local_ac = 0xf;
      local_b0 = 0;
      local_c0[0] = local_c0[0] & 0xffffff00;
      FUN_00409350("IS_VASSAL_OF",0xc);
      local_c._0_1_ = 0xb;
      FUN_0055dd40();
      local_c._0_1_ = 0xc;
      FUN_009a8ee0(local_f0,local_c0);
      local_c._0_1_ = 0xd;
      iVar1 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
      local_c._0_1_ = 0xe;
      FUN_00988f20();
      local_c._0_1_ = 0xf;
      FUN_00988f20();
      local_c._0_1_ = 0x10;
      FUN_00988f20();
      if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_20 = 0xf;
      local_24 = 0;
      local_34 = local_34 & 0xffffff00;
      if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_58 = 0xf;
      local_5c = 0;
      local_6c = local_6c & 0xffffff00;
      if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_74 = 0xf;
      local_78 = 0;
      local_88 = local_88 & 0xffffff00;
      local_c = CONCAT31(local_c._1_3_,0x11);
      FUN_009adb70();
      if (local_ec != 0) {
        FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_ec = 0;
      local_e8 = 0;
      local_e4 = 0;
      if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_3c = 0xf;
      local_40 = 0;
      local_50 = local_50 & 0xffffff00;
      if (0xf < local_ac) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_ac = 0xf;
      local_b0 = 0;
      local_c0[0] = local_c0[0] & 0xffffff00;
      if (0xf < local_c8) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_c8 = 0xf;
      local_cc = 0;
      local_dc[0] = local_dc[0] & 0xffffff00;
      if (0xf < local_90) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      ExceptionList = local_14;
      return param_1;
    }
    local_c = 0;
    local_ac = 0xf;
    local_b0 = 0;
    local_c0[0] = local_c0[0] & 0xffffff00;
    FUN_00409350(&DAT_00df963c,2);
    local_c._0_1_ = 1;
    local_c8 = 0xf;
    local_cc = 0;
    local_dc[0] = local_dc[0] & 0xffffff00;
    FUN_00409350("IS_NOT_VASSAL_OF",0x10);
    local_c._0_1_ = 2;
    FUN_0055dd40();
    local_c._0_1_ = 3;
    FUN_009a8ee0(local_f0,local_dc);
    local_c._0_1_ = 4;
    iVar1 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
    local_c._0_1_ = 5;
    FUN_00988f20();
    local_c._0_1_ = 6;
    FUN_00988f20();
    local_c._0_1_ = 7;
    FUN_00988f20();
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_3c = 0xf;
    local_40 = 0;
    local_50 = local_50 & 0xffffff00;
    if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_74 = 0xf;
    local_78 = 0;
    local_88 = local_88 & 0xffffff00;
    if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_58 = 0xf;
    local_5c = 0;
    local_6c = local_6c & 0xffffff00;
    local_c = CONCAT31(local_c._1_3_,8);
    FUN_009adb70();
    if (local_ec != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_ec = 0;
    local_e8 = 0;
    local_e4 = 0;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_20 = 0xf;
    local_24 = 0;
    local_34 = local_34 & 0xffffff00;
    if (0xf < local_c8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_c8 = 0xf;
    local_cc = 0;
    local_dc[0] = local_dc[0] & 0xffffff00;
    if (0xf < local_ac) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_ac = 0xf;
    local_b0 = 0;
    local_c0[0] = local_c0[0] & 0xffffff00;
    if (0xf < local_90) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  ExceptionList = local_14;
  return param_1;
}

