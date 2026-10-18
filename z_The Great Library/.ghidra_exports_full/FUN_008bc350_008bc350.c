// FUN_008bc350 @ 008bc350 body=[[008bc350, 008bc4c1] [008bc4c5, 008bc4ec] [008bc4f0, 008bc512] [008bc516, 008bc54b] [008bc54f, 008bc56b] [008bc56f, 008bc593] [008bc597, 008bc5ad] [008bc5b1, 008bc6b9] [008bc6bd, 008bc6e7] [008bc6eb, 008bc70d] [008bc711, 008bc743] [008bc747, 008bc763] [008bc767, 008bc78b] [008bc78f, 008bc7a5] [008bc7a9, 008bc7bf] [008bc7c3, 008bc7d8]]


undefined1 * FUN_008bc350(undefined1 *param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  int in_ECX;
  uint local_ec [4];
  undefined4 local_dc;
  uint local_d8;
  uint local_d0 [4];
  undefined4 local_c0;
  uint local_bc;
  uint local_b4;
  undefined4 local_a4;
  uint local_a0;
  uint local_98;
  undefined4 local_88;
  uint local_84;
  uint local_7c;
  undefined4 local_6c;
  uint local_68;
  uint local_60 [4];
  undefined4 local_50;
  uint local_4c;
  uint local_44 [4];
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
  puStack_c = &LAB_00b661e5;
  local_10 = ExceptionList;
  local_28 = 0;
  if (*(int *)(in_ECX + 0x1c) == 0) {
    ExceptionList = &local_10;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    FUN_00409350();
    ExceptionList = local_10;
    return param_1;
  }
  local_6c = 0;
  local_7c = local_7c & 0xffffff00;
  local_68 = 0xf;
  ExceptionList = &local_10;
  FUN_00409350();
  if (param_3 == '\0') {
    local_8 = 10;
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = local_44[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0xb;
    local_4c = 0xf;
    local_50 = 0;
    local_60[0] = local_60[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0xc;
    (**(code **)(**(int **)(in_ECX + 0x1c) + 0x18))(local_d0);
    local_8._0_1_ = 0xd;
    FUN_009a8ee0(local_24,local_60);
    local_8._0_1_ = 0xe;
    iVar1 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
    local_8._0_1_ = 0xf;
    FUN_00988f20();
    local_8._0_1_ = 0x10;
    FUN_00988f20();
    local_8._0_1_ = 0x11;
    FUN_00988f20();
    local_28 = 1;
    if (0xf < local_d8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_d8 = 0xf;
    local_dc = 0;
    local_ec[0] = local_ec[0] & 0xffffff00;
    if (0xf < local_a0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_a0 = 0xf;
    local_a4 = 0;
    local_b4 = local_b4 & 0xffffff00;
    if (0xf < local_84) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_84 = 0xf;
    local_88 = 0;
    local_98 = local_98 & 0xffffff00;
    local_8 = CONCAT31(local_8._1_3_,0x12);
    FUN_009adb70();
    if (local_20 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    if (0xf < local_bc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_bc = 0xf;
    local_c0 = 0;
    local_d0[0] = local_d0[0] & 0xffffff00;
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
    local_44[0] = local_44[0] & 0xffffff00;
  }
  else {
    local_8 = 1;
    local_4c = 0xf;
    local_50 = 0;
    local_60[0] = local_60[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 2;
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = local_44[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 3;
    (**(code **)(**(int **)(in_ECX + 0x1c) + 0x18))(local_ec);
    local_8._0_1_ = 4;
    FUN_009a8ee0(local_24,local_44);
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
    if (0xf < local_bc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_bc = 0xf;
    local_c0 = 0;
    local_d0[0] = local_d0[0] & 0xffffff00;
    if (0xf < local_84) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_84 = 0xf;
    local_88 = 0;
    local_98 = local_98 & 0xffffff00;
    if (0xf < local_a0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_a0 = 0xf;
    local_a4 = 0;
    local_b4 = local_b4 & 0xffffff00;
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
    if (0xf < local_d8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_d8 = 0xf;
    local_dc = 0;
    local_ec[0] = local_ec[0] & 0xffffff00;
    if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = local_44[0] & 0xffffff00;
    if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_60[0] = local_60[0] & 0xffffff00;
  }
  if (0xf < local_68) {
    local_18 = 0;
    local_1c = 0;
    local_20 = 0;
    local_30 = 0xf;
    local_34 = 0;
    local_4c = 0xf;
    local_50 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

