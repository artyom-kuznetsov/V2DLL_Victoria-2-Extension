// FUN_005b7770 @ 005b7770 body=[[005b7770, 005b785e] [005b7862, 005b7892] [005b7896, 005b7922] [005b7926, 005b7956] [005b795a, 005b7973] [005b7977, 005b79e8] [005b79ec, 005b7a07] [005b7a0b, 005b7a24] [005b7a28, 005b7ae2] [005b7ae6, 005b7b01] [005b7b05, 005b7b21] [005b7b25, 005b7b47] [005b7b4b, 005b7b67] [005b7b6b, 005b7bd5] [005b7bd9, 005b7bfc] [005b7c00, 005b7c26] [005b7c2a, 005b7cc2] [005b7cc6, 005b7ce9] [005b7ced, 005b7d10] [005b7d14, 005b7d2e] [005b7d32, 005b7d4f] [005b7d53, 005b7d8a] [005b7d8e, 005b7da2]]


undefined1 * FUN_005b7770(undefined1 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  uint *puVar4;
  undefined8 uVar3;
  uint local_a4 [4];
  undefined4 local_94;
  uint local_90;
  uint local_88 [4];
  undefined4 local_78;
  uint local_74;
  undefined4 local_6c;
  uint local_68 [4];
  undefined4 local_58;
  uint local_54;
  uint local_4c [2];
  undefined1 local_44 [4];
  int local_40;
  undefined4 local_3c;
  uint local_38;
  int local_30;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b71e50;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xf;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0xf;
  *(undefined4 *)(param_1 + 0x48) = 0;
  param_1[0x38] = 0;
  *(undefined2 *)(param_1 + 0x54) = 0;
  *(undefined2 *)(param_1 + 0x56) = 0;
  param_1[0x58] = 1;
  local_8 = 0;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  local_30 = in_ECX;
  if (*(int *)(in_ECX + 0xb0) == 0) {
    FUN_00409350("MILITARY_GENERAL_TOOLTIP",0x18);
    local_8 = 1;
    local_6c = FUN_009a8ee0(local_44,local_2c);
    local_8._0_1_ = 2;
    iVar1 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
    local_8._0_1_ = 3;
    FUN_00448aa0();
    if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = local_68[0] & 0xffffff00;
    local_8._0_1_ = 4;
    FUN_009adb70();
    if (local_40 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  else {
    FUN_00409350("MILITARY_ADMIRAL_TOOLTIP",0x18);
    local_8 = 5;
    local_6c = FUN_009a8ee0(local_44,local_2c);
    local_8._0_1_ = 6;
    iVar1 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
    local_8._0_1_ = 7;
    FUN_00448aa0();
    if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = local_68[0] & 0xffffff00;
    local_8._0_1_ = 8;
    FUN_009adb70();
    if (local_40 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  local_8 = (uint)local_8._1_3_ << 8;
  if (0xf < local_18) {
    local_38 = 0;
    local_3c = 0;
    local_40 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_38 = 0;
  local_3c = 0;
  local_40 = 0;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350(&DAT_00df8514,2);
  local_8 = 9;
  FUN_00988fa0();
  local_8._0_1_ = 10;
  FUN_00988f20();
  local_8._0_1_ = 0xb;
  FUN_00448aa0();
  if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_54 = 0xf;
  local_58 = 0;
  local_68[0] = local_68[0] & 0xffffff00;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350(&DAT_00df9644,1);
  local_8 = 0xc;
  FUN_00988d00(local_88,2);
  local_8._0_1_ = 0xd;
  uVar2 = FUN_00988f20();
  local_8._0_1_ = 0xe;
  FUN_0042c180(local_4c,uVar2);
  local_8._0_1_ = 0xf;
  FUN_00988fa0();
  local_8._0_1_ = 0x10;
  FUN_00448aa0();
  iVar1 = local_30;
  if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_54 = 0xf;
  local_58 = 0;
  local_68[0] = local_68[0] & 0xffffff00;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  if (0xf < local_90) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_90 = 0xf;
  local_94 = 0;
  local_a4[0] = local_a4[0] & 0xffffff00;
  if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  local_74 = 0xf;
  local_78 = 0;
  local_88[0] = local_88[0] & 0xffffff00;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  puVar4 = local_68;
  uVar2 = (**(code **)(**(int **)(local_30 + 0x80) + 0x18))();
  uVar3 = CONCAT44(puVar4,uVar2);
  puVar4 = local_a4;
  local_8 = 0x11;
  uVar2 = FUN_0042c180();
  local_8._0_1_ = 0x12;
  uVar2 = FUN_00988fa0(uVar2,puVar4,uVar3);
  local_8._0_1_ = 0x13;
  FUN_00448aa0(uVar2,0,0xffffffff);
  if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_88[0]);
  }
  local_74 = 0xf;
  local_78 = 0;
  local_88[0] = local_88[0] & 0xffffff00;
  if (0xf < local_90) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_a4[0]);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  local_90 = 0xf;
  local_94 = 0;
  local_a4[0] = local_a4[0] & 0xffffff00;
  if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_68[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350();
  local_8 = 0x14;
  uVar2 = (**(code **)(**(int **)(iVar1 + 0x7c) + 0x18))(local_4c);
  local_8._0_1_ = 0x15;
  uVar2 = FUN_0042c180(local_68,uVar2);
  local_8._0_1_ = 0x16;
  FUN_00988fa0(uVar2);
  local_8._0_1_ = 0x17;
  uVar2 = FUN_00988f20();
  local_8._0_1_ = 0x18;
  FUN_00448aa0(uVar2,0,0xffffffff);
  if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_74 = 0xf;
  local_78 = 0;
  local_88[0] = local_88[0] & 0xffffff00;
  if (0xf < local_90) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_90 = 0xf;
  local_94 = 0;
  local_a4[0] = local_a4[0] & 0xffffff00;
  if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_54 = 0xf;
  local_58 = 0;
  local_68[0] = local_68[0] & 0xffffff00;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uVar2 = (**(code **)(*(int *)(local_30 + 0x30) + 0x1c))();
  local_8 = 0x19;
  FUN_00448aa0(uVar2,0,0xffffffff);
  if (local_74 < 0x10) {
    ExceptionList = local_10;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_88[0]);
}

