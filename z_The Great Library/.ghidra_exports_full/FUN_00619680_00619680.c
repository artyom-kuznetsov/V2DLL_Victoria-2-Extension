// FUN_00619680 @ 00619680 body=[[00619680, 00619719] [0061971d, 006197b7] [006197bb, 006197d8] [006197dc, 006197f9] [006197fd, 00619909] [0061990d, 00619937] [0061993b, 0061995a] [0061995e, 0061998a] [0061998e, 006199a9] [006199ad, 006199cd] [006199d1, 00619ae8] [00619aec, 00619b0d] [00619b11, 00619b36] [00619b3a, 00619b6f] [00619b73, 00619b8e] [00619b92, 00619bb2] [00619bb6, 00619c73] [00619c77, 00619c97] [00619c9b, 00619caf]]


undefined1 * FUN_00619680(int param_1,undefined1 *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_19c [8];
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_14c;
  undefined4 local_148;
  undefined1 local_10c [8];
  undefined4 local_104;
  undefined4 local_100;
  undefined1 *local_e8;
  uint local_c4;
  undefined4 local_b4;
  uint local_b0;
  undefined4 local_a8;
  uint local_a4 [4];
  undefined4 local_94;
  uint local_90;
  uint local_88;
  undefined4 local_78;
  uint local_74;
  uint local_6c [4];
  undefined4 local_5c;
  uint local_58;
  uint local_50;
  undefined1 local_48 [4];
  int local_44;
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00ba669b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *param_2 = 0;
  local_14 = param_2 + 0x1c;
  *(undefined4 *)(param_2 + 0x30) = 0xf;
  *(undefined4 *)(param_2 + 0x2c) = 0;
  *local_14 = 0;
  *(undefined4 *)(param_2 + 0x4c) = 0xf;
  *(undefined4 *)(param_2 + 0x48) = 0;
  param_2[0x38] = 0;
  *(undefined4 *)(param_2 + 0x54) = 0;
  param_2[0x58] = 1;
  local_8 = 0;
  local_a8 = 1;
  FUN_0090a830(*(undefined4 *)(param_1 + 0x28),local_6c);
  local_8 = 1;
  FUN_00408ed0();
  local_8 = local_8 & 0xffffff00;
  if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  FUN_008a8650();
  local_14c = *(undefined4 *)(DAT_012588e8 + 0xb5c);
  local_148 = *(undefined4 *)(DAT_012588e8 + 0xb60);
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350(&DAT_00dee2cc,1);
  local_8 = 2;
  FUN_0090a8e0();
  local_8._0_1_ = 3;
  FUN_00988f20();
  local_8._0_1_ = 4;
  FUN_00408ed0();
  if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_74 = 0xf;
  local_78 = 0;
  local_88 = local_88 & 0xffffff00;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  local_3c = 0xf;
  local_40 = 0;
  local_50 = local_50 & 0xffffff00;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if ((0 < (int)(*(int *)(*(int *)(param_1 + 0x28) + 0xe4) -
                 *(int *)(*(int *)(param_1 + 0x28) + 0xe0) & 0xfffffffcU)) &&
     (cVar1 = FUN_0090c9e0(), cVar1 == '\0')) {
    local_74 = 0xf;
    local_78 = 0;
    local_88 = local_88 & 0xffffff00;
    FUN_00409350(&DAT_00dee2cc,1);
    local_8 = 5;
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    FUN_00409350("NO_ALLOWED_COUNTRIES",0x14);
    local_8._0_1_ = 6;
    FUN_009a8ee0(local_48,local_34);
    local_8._0_1_ = 7;
    iVar2 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
    local_8._0_1_ = 8;
    FUN_00988fa0();
    local_8._0_1_ = 9;
    FUN_00988f20();
    local_8._0_1_ = 10;
    FUN_00448aa0();
    if (0xf < local_b0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_b0 = 0xf;
    local_b4 = 0;
    local_c4 = local_c4 & 0xffffff00;
    if (0xf < local_90) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_90 = 0xf;
    local_94 = 0;
    local_a4[0] = local_a4[0] & 0xffffff00;
    if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_58 = 0xf;
    local_5c = 0;
    local_6c[0] = local_6c[0] & 0xffffff00;
    local_8._0_1_ = 0xb;
    FUN_009adb70();
    if (local_44 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_44 = 0;
    local_40 = 0;
    local_3c = 0;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  iVar2 = *(int *)(param_1 + 0x28);
  if (0 < (int)(*(int *)(iVar2 + 0xac) - *(int *)(iVar2 + 0xa8) & 0xfffffffcU)) {
    local_18 = 0x2d2d2d;
    local_14 = (undefined1 *)0x0;
    cVar1 = FUN_0090cb00(iVar2,param_1 + 0x30);
    if (cVar1 == '\0') {
      local_74 = 0xf;
      local_78 = 0;
      local_88 = local_88 & 0xffffff00;
      FUN_00409350(&DAT_00dee2cc,1);
      local_8 = 0xc;
      local_20 = 0xf;
      local_24 = 0;
      local_34[0] = local_34[0] & 0xffffff00;
      FUN_00409350("NO_ALLOWED_STATES",0x11);
      local_8._0_1_ = 0xd;
      local_14 = (undefined1 *)FUN_009a8ee0(local_48,local_34);
      local_8._0_1_ = 0xe;
      iVar2 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
      local_8._0_1_ = 0xf;
      FUN_00988fa0();
      local_8._0_1_ = 0x10;
      FUN_00988f20();
      local_8._0_1_ = 0x11;
      FUN_00448aa0();
      if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_58 = 0xf;
      local_5c = 0;
      local_6c[0] = local_6c[0] & 0xffffff00;
      if (0xf < local_90) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_90 = 0xf;
      local_94 = 0;
      local_a4[0] = local_a4[0] & 0xffffff00;
      if (0xf < local_b0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_b0 = 0xf;
      local_b4 = 0;
      local_c4 = local_c4 & 0xffffff00;
      local_8._0_1_ = 0x12;
      FUN_009adb70();
      if (local_44 != 0) {
        FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_44 = 0;
      local_40 = 0;
      local_3c = 0;
      if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8 = (uint)local_8._1_3_ << 8;
      local_20 = 0xf;
      local_24 = 0;
      local_34[0] = local_34[0] & 0xffffff00;
      if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
  }
  if (0 < (int)(*(int *)(*(int *)(param_1 + 0x28) + 0x58) -
                *(int *)(*(int *)(param_1 + 0x28) + 0x54) & 0xfffffffcU)) {
    FUN_008a8650();
    FUN_008a8650();
    local_190 = *(undefined4 *)(param_1 + 0x34);
    local_194 = *(undefined4 *)(param_1 + 0x30);
    local_100 = *(undefined4 *)(param_1 + 0x3c);
    local_e8 = local_19c;
    local_104 = *(undefined4 *)(param_1 + 0x38);
    uVar3 = (**(code **)(*(int *)(*(int *)(param_1 + 0x28) + 0x4c) + 0x2c))
                      (local_a4,local_10c,0,0,1);
    local_8 = 0x13;
    uVar3 = FUN_00988fa0(uVar3);
    local_8 = CONCAT31(local_8._1_3_,0x14);
    FUN_00448aa0(uVar3,0,0xffffffff);
    if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_6c[0]);
    }
    local_58 = 0xf;
    local_5c = 0;
    local_6c[0] = local_6c[0] & 0xffffff00;
    if (0xf < local_90) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_a4[0]);
    }
  }
  ExceptionList = local_10;
  return param_2;
}

