// FUN_008e5b10 @ 008e5b10 body=[[008e5b10, 008e5b82] [008e5b86, 008e5c6f] [008e5c73, 008e5c9d] [008e5ca1, 008e5cc0] [008e5cc4, 008e5cde] [008e5ce2, 008e5d79] [008e5d7d, 008e5e66] [008e5e6a, 008e5e94] [008e5e98, 008e5eb7] [008e5ebb, 008e5ed5] [008e5ed9, 008e5f2e] [008e5f32, 008e5f46]]


undefined4 FUN_008e5b10(undefined4 param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  undefined8 local_d0;
  uint local_bc [4];
  undefined4 local_ac;
  uint local_a8;
  uint local_a0 [4];
  undefined4 local_90;
  uint local_8c;
  uint local_84 [4];
  undefined4 local_74;
  uint local_70;
  uint local_68 [4];
  undefined4 local_58;
  uint local_54;
  uint local_4c [2];
  undefined1 local_44 [4];
  int local_40;
  undefined4 local_3c;
  uint local_38;
  uint local_30 [2];
  undefined1 local_28 [4];
  int local_24;
  undefined4 local_20;
  uint local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b6606f;
  local_10 = ExceptionList;
  local_14 = 0;
  if ((char)param_3 == '\0') {
    local_d0 = 0x1400e2e578;
    local_70 = 0xf;
    local_74 = 0;
    local_84[0] = local_84[0] & 0xffffff00;
    ExceptionList = &local_10;
    FUN_00409350();
    local_d0 = CONCAT44(local_84,local_44);
    local_8 = 10;
    FUN_009a8ee0();
    local_8._0_1_ = 0xc;
    if (0xf < local_70) {
      local_d0 = CONCAT44(local_84[0],&UNK_008e5d7a);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_d0 = 0x100df9644;
    local_70 = 0xf;
    local_74 = 0;
    local_84[0] = local_84[0] & 0xffffff00;
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = local_68[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0xd;
    local_d0._4_4_ = 3;
    local_d0._0_4_ = &DAT_00df7e90;
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350();
    param_3 = &local_d0;
    local_8._0_1_ = 0xe;
    local_d0 = CONCAT44(local_d0._4_4_,*(undefined4 *)(in_ECX + 0x20));
    local_d0 = __allmul(*(undefined4 *)(in_ECX + 0x20),*(undefined4 *)(in_ECX + 0x24),0x320000,0);
    local_d0 = local_d0 >> 0xf;
    FUN_00988bb0(local_a0,1);
    local_8._0_1_ = 0xf;
    local_d0 = CONCAT44(local_68,0x8e5e0a);
    uVar1 = FUN_00988f20();
    local_8._0_1_ = 0x10;
    local_d0 = 0x40008e5e17;
    param_3 = (undefined8 *)FUN_00aae9af();
    local_8._0_1_ = 0x11;
    if (param_3 == (undefined8 *)0x0) {
      param_3 = (undefined8 *)0x0;
    }
    else {
      local_d0 = CONCAT44(uVar1,local_44);
      param_3 = (undefined8 *)FUN_009a9ce0();
    }
    local_8._0_1_ = 0x10;
    local_d0 = CONCAT44(&param_3,local_30);
    FUN_009e6810();
    if (0xf < local_a8) {
      local_d0 = CONCAT44(local_bc[0],&UNK_008e5e67);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_a8 = 0xf;
    local_ac = 0;
    local_bc[0] = local_bc[0] & 0xffffff00;
    if (0xf < local_8c) {
      local_d0 = CONCAT44(local_a0[0],&UNK_008e5e95);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8c = 0xf;
    local_90 = 0;
    local_a0[0] = local_a0[0] & 0xffffff00;
    if (0xf < local_1c) {
      local_d0 = CONCAT44(local_30[0],&UNK_008e5eb8);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = CONCAT31(local_8._1_3_,0xc);
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    if (0xf < local_54) {
      local_d0 = CONCAT44(local_68[0],&UNK_008e5ed6);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_d0 = CONCAT44(0x8e5ede,(undefined *)local_d0);
    iVar2 = FUN_00475500();
    local_d0 = *(undefined8 *)(iVar2 + 0x74);
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c));
    local_14 = 1;
    local_8 = 0x12;
    local_d0 = CONCAT44(0x8e5f17,(undefined *)local_d0);
    FUN_009adb70();
    if (local_40 == 0) {
      ExceptionList = local_10;
      return param_1;
    }
    local_d0 = CONCAT44(0x8e5f26,(undefined *)local_d0);
    FUN_009e6a80();
    local_24 = local_40;
  }
  else {
    local_d0 = 0x1800e2e55c;
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = local_68[0] & 0xffffff00;
    ExceptionList = &local_10;
    FUN_00409350();
    local_d0 = CONCAT44(local_68,local_28);
    local_8 = 1;
    FUN_009a8ee0();
    local_8._0_1_ = 3;
    if (0xf < local_54) {
      local_d0 = CONCAT44(local_68[0],&UNK_008e5b83);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_d0 = 0x100df9644;
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = local_68[0] & 0xffffff00;
    local_70 = 0xf;
    local_74 = 0;
    local_84[0] = local_84[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 4;
    local_d0._4_4_ = 3;
    local_d0._0_4_ = &DAT_00df7e90;
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = local_4c[0] & 0xffffff00;
    FUN_00409350();
    param_3 = &local_d0;
    local_8._0_1_ = 5;
    local_d0 = CONCAT44(local_d0._4_4_,*(undefined4 *)(in_ECX + 0x20));
    local_d0 = __allmul(*(undefined4 *)(in_ECX + 0x20),*(undefined4 *)(in_ECX + 0x24),0x320000,0);
    local_d0 = local_d0 >> 0xf;
    FUN_00988bb0(local_bc,1);
    local_8._0_1_ = 6;
    local_d0 = CONCAT44(local_84,0x8e5c13);
    uVar1 = FUN_00988f20();
    local_8._0_1_ = 7;
    local_d0 = 0x40008e5c20;
    param_3 = (undefined8 *)FUN_00aae9af();
    local_8._0_1_ = 8;
    if (param_3 == (undefined8 *)0x0) {
      param_3 = (undefined8 *)0x0;
    }
    else {
      local_d0 = CONCAT44(uVar1,local_28);
      param_3 = (undefined8 *)FUN_009a9ce0();
    }
    local_8._0_1_ = 7;
    local_d0 = CONCAT44(&param_3,local_4c);
    FUN_009e6810();
    if (0xf < local_8c) {
      local_d0 = CONCAT44(local_a0[0],&UNK_008e5c70);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8c = 0xf;
    local_90 = 0;
    local_a0[0] = local_a0[0] & 0xffffff00;
    if (0xf < local_a8) {
      local_d0 = CONCAT44(local_bc[0],&UNK_008e5c9e);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_a8 = 0xf;
    local_ac = 0;
    local_bc[0] = local_bc[0] & 0xffffff00;
    if (0xf < local_38) {
      local_d0 = CONCAT44(local_4c[0],&UNK_008e5cc1);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = CONCAT31(local_8._1_3_,3);
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = local_4c[0] & 0xffffff00;
    if (0xf < local_70) {
      local_d0 = CONCAT44(local_84[0],&UNK_008e5cdf);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_d0 = CONCAT44(0x8e5ce7,(undefined *)local_d0);
    iVar2 = FUN_00475500();
    local_d0 = *(undefined8 *)(iVar2 + 0x74);
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c));
    local_14 = 1;
    local_8 = 9;
    local_d0 = CONCAT44(0x8e5d20,(undefined *)local_d0);
    FUN_009adb70();
    if (local_24 == 0) {
      ExceptionList = local_10;
      return param_1;
    }
    local_d0 = CONCAT44(0x8e5d33,(undefined *)local_d0);
    FUN_009e6a80();
  }
  local_d0 = CONCAT44(local_24,&UNK_008e5f2f);
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

