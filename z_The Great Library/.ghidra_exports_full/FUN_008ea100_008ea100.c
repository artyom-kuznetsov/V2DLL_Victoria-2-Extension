// FUN_008ea100 @ 008ea100 body=[[008ea100, 008ea28d] [008ea291, 008ea2bb] [008ea2bf, 008ea2e1] [008ea2e5, 008ea307] [008ea30b, 008ea330] [008ea334, 008ea369] [008ea36d, 008ea383] [008ea387, 008ea3a2] [008ea3a6, 008ea4bd] [008ea4c1, 008ea4eb] [008ea4ef, 008ea511] [008ea515, 008ea537] [008ea53b, 008ea560] [008ea564, 008ea599] [008ea59d, 008ea5b3] [008ea5b7, 008ea5d2] [008ea5d6, 008ea5ec] [008ea5f0, 008ea605]]


undefined1 * FUN_008ea100(undefined1 *param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined4 local_108;
  uint local_f4;
  undefined4 local_ec;
  uint local_d8;
  undefined4 local_d0;
  uint local_bc;
  undefined4 local_b4;
  uint local_a0;
  undefined4 local_98;
  uint local_84;
  uint local_7c [4];
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
  puStack_c = &LAB_00b65c8b;
  local_10 = ExceptionList;
  local_28 = 0;
  if (*(int *)(in_ECX + 0x1c) == 0) {
    ExceptionList = &local_10;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    FUN_00409350(&DAT_00ded94d,0);
    ExceptionList = local_10;
    return param_1;
  }
  local_6c = 0;
  local_7c[0] = local_7c[0] & 0xffffff00;
  local_68 = 0xf;
  ExceptionList = &local_10;
  FUN_00409350(&DAT_00dfc7b4,3);
  if (param_3 == '\0') {
    local_8 = 0xb;
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = local_44[0] & 0xffffff00;
    FUN_00409350("IS_ENABLED",10);
    local_8._0_1_ = 0xc;
    local_4c = 0xf;
    local_50 = 0;
    local_60[0] = local_60[0] & 0xffffff00;
    FUN_00409350(&DAT_00df8514,2);
    local_8._0_1_ = 0xd;
    FUN_009a8ee0(local_24,local_44);
    local_8._0_1_ = 0xe;
    iVar1 = FUN_00475500();
    uVar2 = FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
    local_8._0_1_ = 0xf;
    uVar3 = (**(code **)(**(int **)(in_ECX + 0x1c) + 0x18))();
    local_8._0_1_ = 0x10;
    FUN_00988fa0(uVar3);
    local_8._0_1_ = 0x11;
    FUN_00988f20(local_60);
    local_8._0_1_ = 0x12;
    FUN_00988f20(uVar2);
    local_8._0_1_ = 0x13;
    FUN_00988f20(local_7c);
    local_28 = 1;
    if (0xf < local_f4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_108);
    }
    if (0xf < local_bc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_d0);
    }
    if (0xf < local_84) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_98);
    }
    if (0xf < local_d8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_ec);
    }
    if (0xf < local_a0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_b4);
    }
    local_8 = CONCAT31(local_8._1_3_,0x14);
    FUN_009adb70();
    if (local_20 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_20);
    }
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_60[0]);
    }
    local_4c = 0xf;
    local_50 = 0;
    local_60[0] = local_60[0] & 0xffffff00;
    if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_44[0]);
    }
    local_44[0] = local_44[0] & 0xffffff00;
  }
  else {
    local_8 = 1;
    local_4c = 0xf;
    local_50 = 0;
    local_60[0] = local_60[0] & 0xffffff00;
    FUN_00409350("IS_DISABLED",0xb);
    local_8._0_1_ = 2;
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = local_44[0] & 0xffffff00;
    FUN_00409350(&DAT_00df8514,2);
    local_8._0_1_ = 3;
    FUN_009a8ee0(local_24,local_60);
    local_8._0_1_ = 4;
    iVar1 = FUN_00475500();
    uVar2 = FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
    local_8._0_1_ = 5;
    uVar3 = (**(code **)(**(int **)(in_ECX + 0x1c) + 0x18))();
    local_8._0_1_ = 6;
    FUN_00988fa0(uVar3);
    local_8._0_1_ = 7;
    FUN_00988f20(local_44);
    local_8._0_1_ = 8;
    FUN_00988f20(uVar2);
    local_8._0_1_ = 9;
    FUN_00988f20(local_7c);
    local_28 = 1;
    if (0xf < local_a0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_b4);
    }
    if (0xf < local_d8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_ec);
    }
    if (0xf < local_84) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_98);
    }
    if (0xf < local_bc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_d0);
    }
    if (0xf < local_f4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_108);
    }
    local_8 = CONCAT31(local_8._1_3_,10);
    FUN_009adb70();
    if (local_20 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_20);
    }
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_44[0]);
    }
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = local_44[0] & 0xffffff00;
    if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_60[0]);
    }
    local_60[0] = local_60[0] & 0xffffff00;
  }
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  local_30 = 0xf;
  local_34 = 0;
  local_4c = 0xf;
  local_50 = 0;
  if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_7c[0]);
  }
  ExceptionList = local_10;
  return param_1;
}

