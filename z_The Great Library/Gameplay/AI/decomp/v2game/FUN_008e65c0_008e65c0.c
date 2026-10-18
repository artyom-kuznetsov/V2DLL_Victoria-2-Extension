// FUN_008e65c0 @ 008e65c0 body=[[008e65c0, 008e6641] [008e6645, 008e66f7] [008e66fb, 008e671a] [008e671e, 008e67ef] [008e67f3, 008e682c] [008e6830, 008e6846] [008e684a, 008e6868] [008e686c, 008e6905] [008e6909, 008e69cd] [008e69d1, 008e69fc] [008e6a00, 008e6ada] [008e6ade, 008e6b17] [008e6b1b, 008e6b31] [008e6b35, 008e6b56] [008e6b5a, 008e6bb2] [008e6bb6, 008e6bca]]


undefined4 FUN_008e65c0(undefined4 param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  undefined8 local_c0;
  uint local_ac [4];
  undefined4 local_9c;
  uint local_98;
  undefined4 local_90;
  uint local_8c [4];
  undefined4 local_7c;
  uint local_78;
  uint local_70 [4];
  undefined4 local_60;
  uint local_5c;
  undefined1 local_54 [4];
  int local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 local_40 [4];
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b65fb5;
  local_10 = ExceptionList;
  local_90 = 0;
  if ((char)param_3 == '\0') {
    local_c0 = 0xf00e2e5a4;
    local_5c = 0xf;
    local_60 = 0;
    local_70[0] = local_70[0] & 0xffffff00;
    ExceptionList = &local_10;
    FUN_00409350();
    local_c0 = CONCAT44(local_70,local_40);
    local_8 = 0xe;
    FUN_009a8ee0();
    local_8._0_1_ = 0x10;
    if (0xf < local_5c) {
      local_c0 = CONCAT44(local_70[0],&UNK_008e6906);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_c0._4_4_ = 3;
    local_c0._0_4_ = &DAT_00df7e90;
    local_5c = 0xf;
    local_60 = 0;
    local_70[0] = local_70[0] & 0xffffff00;
    local_78 = 0xf;
    local_7c = 0;
    local_8c[0] = local_8c[0] & 0xffffff00;
    FUN_00409350();
    param_3 = &local_c0;
    local_8._0_1_ = 0x11;
    local_c0 = CONCAT44(local_c0._4_4_,*(undefined4 *)(in_ECX + 0x20));
    local_c0 = __allmul(*(undefined4 *)(in_ECX + 0x20),*(undefined4 *)(in_ECX + 0x24),0x320000,0);
    local_c0 = local_c0 >> 0xf;
    uVar1 = FUN_00988bb0(local_ac,1);
    local_8._0_1_ = 0x12;
    local_c0 = 0x40008e6978;
    param_3 = (undefined8 *)FUN_00aae9af();
    local_8._0_1_ = 0x13;
    if (param_3 == (undefined8 *)0x0) {
      param_3 = (undefined8 *)0x0;
    }
    else {
      local_c0 = CONCAT44(uVar1,local_40);
      param_3 = (undefined8 *)FUN_009a9ce0();
    }
    local_8._0_1_ = 0x12;
    local_c0 = CONCAT44(&param_3,local_8c);
    FUN_009e6810();
    if (0xf < local_98) {
      local_c0 = CONCAT44(local_ac[0],&UNK_008e69ce);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 0x10;
    local_98 = 0xf;
    local_9c = 0;
    local_ac[0] = local_ac[0] & 0xffffff00;
    if (0xf < local_78) {
      local_c0 = CONCAT44(local_8c[0],&UNK_008e69fd);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_c0 = 0xe00dfedb8;
    local_78 = 0xf;
    local_7c = 0;
    local_8c[0] = local_8c[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0x14;
    local_c0 = 0x400df7e80;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350();
    local_c0 = CONCAT44(local_8c,local_54);
    local_8._0_1_ = 0x15;
    FUN_009a8ee0();
    local_8._0_1_ = 0x16;
    local_c0 = CONCAT44(0x8e6a59,(undefined *)local_c0);
    iVar2 = FUN_00475500();
    local_c0 = *(undefined8 *)(iVar2 + 0x74);
    uVar1 = FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c));
    local_8._0_1_ = 0x17;
    local_c0 = 0x40008e6a8b;
    param_3 = (undefined8 *)FUN_00aae9af();
    local_8._0_1_ = 0x18;
    if (param_3 == (undefined8 *)0x0) {
      param_3 = (undefined8 *)0x0;
    }
    else {
      local_c0 = CONCAT44(uVar1,local_40);
      param_3 = (undefined8 *)FUN_009a9ce0();
    }
    local_8._0_1_ = 0x17;
    local_c0 = CONCAT44(&param_3,local_2c);
    FUN_009e6810();
    if (0xf < local_98) {
      local_c0 = CONCAT44(local_ac[0],&UNK_008e6adb);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_98 = 0xf;
    local_9c = 0;
    local_ac[0] = local_ac[0] & 0xffffff00;
    local_8._0_1_ = 0x19;
    local_c0 = CONCAT44(0x8e6b00,(undefined *)local_c0);
    FUN_009adb70();
    if (local_50 != 0) {
      local_c0 = CONCAT44(0x8e6b0f,(undefined *)local_c0);
      FUN_009e6a80();
      local_c0 = CONCAT44(local_50,&UNK_008e6b18);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_50 = 0;
    local_4c = 0;
    local_48 = 0;
    if (0xf < local_18) {
      local_c0 = CONCAT44(local_2c[0],&UNK_008e6b32);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = CONCAT31(local_8._1_3_,0x10);
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    if (0xf < local_78) {
      local_c0 = CONCAT44(local_8c[0],&UNK_008e6b57);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_c0 = CONCAT44(0x8e6b5f,(undefined *)local_c0);
    iVar2 = FUN_00475500();
    local_c0 = *(undefined8 *)(iVar2 + 0x74);
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c));
    local_90 = 1;
    local_8 = 0x1a;
    local_c0 = CONCAT44(0x8e6b9b,(undefined *)local_c0);
    FUN_009adb70();
    if (local_3c == 0) {
      ExceptionList = local_10;
      return param_1;
    }
    local_c0 = CONCAT44(0x8e6baa,(undefined *)local_c0);
    FUN_009e6a80();
    iVar2 = local_3c;
  }
  else {
    local_c0 = 0x1300e2e590;
    local_78 = 0xf;
    local_7c = 0;
    local_8c[0] = local_8c[0] & 0xffffff00;
    ExceptionList = &local_10;
    FUN_00409350();
    local_c0 = CONCAT44(local_8c,local_54);
    local_8 = 1;
    FUN_009a8ee0();
    local_8._0_1_ = 3;
    if (0xf < local_78) {
      local_c0 = CONCAT44(local_8c[0],&UNK_008e6642);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_c0._4_4_ = 3;
    local_c0._0_4_ = &DAT_00df7e90;
    local_78 = 0xf;
    local_7c = 0;
    local_8c[0] = local_8c[0] & 0xffffff00;
    local_5c = 0xf;
    local_60 = 0;
    local_70[0] = local_70[0] & 0xffffff00;
    FUN_00409350();
    param_3 = &local_c0;
    local_8._0_1_ = 4;
    local_c0 = CONCAT44(local_c0._4_4_,*(undefined4 *)(in_ECX + 0x20));
    local_c0 = __allmul(*(undefined4 *)(in_ECX + 0x20),*(undefined4 *)(in_ECX + 0x24),0x320000,0);
    local_c0 = local_c0 >> 0xf;
    uVar1 = FUN_00988bb0(local_2c,1);
    local_8._0_1_ = 5;
    local_c0 = 0x40008e66ae;
    param_3 = (undefined8 *)FUN_00aae9af();
    local_8._0_1_ = 6;
    if (param_3 == (undefined8 *)0x0) {
      param_3 = (undefined8 *)0x0;
    }
    else {
      local_c0 = CONCAT44(uVar1,local_54);
      param_3 = (undefined8 *)FUN_009a9ce0();
    }
    local_8._0_1_ = 5;
    local_c0 = CONCAT44(&param_3,local_70);
    FUN_009e6810();
    if (0xf < local_18) {
      local_c0 = CONCAT44(local_2c[0],&UNK_008e66f8);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 3;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    if (0xf < local_5c) {
      local_c0 = CONCAT44(local_70[0],&UNK_008e671b);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_c0 = 0xe00dfedb8;
    local_5c = 0xf;
    local_60 = 0;
    local_70[0] = local_70[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 7;
    local_c0 = 0x400df7e80;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350();
    local_c0 = CONCAT44(local_70,local_40);
    local_8._0_1_ = 8;
    FUN_009a8ee0();
    local_8._0_1_ = 9;
    local_c0 = CONCAT44(0x8e676e,(undefined *)local_c0);
    iVar2 = FUN_00475500();
    local_c0 = *(undefined8 *)(iVar2 + 0x74);
    uVar1 = FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c));
    local_8._0_1_ = 10;
    local_c0 = 0x40008e67a0;
    param_3 = (undefined8 *)FUN_00aae9af();
    local_8._0_1_ = 0xb;
    if (param_3 == (undefined8 *)0x0) {
      param_3 = (undefined8 *)0x0;
    }
    else {
      local_c0 = CONCAT44(uVar1,local_54);
      param_3 = (undefined8 *)FUN_009a9ce0();
    }
    local_8._0_1_ = 10;
    local_c0 = CONCAT44(&param_3,local_2c);
    FUN_009e6810();
    if (0xf < local_98) {
      local_c0 = CONCAT44(local_ac[0],&UNK_008e67f0);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_98 = 0xf;
    local_9c = 0;
    local_ac[0] = local_ac[0] & 0xffffff00;
    local_8._0_1_ = 0xc;
    local_c0 = CONCAT44(0x8e6815,(undefined *)local_c0);
    FUN_009adb70();
    if (local_3c != 0) {
      local_c0 = CONCAT44(0x8e6824,(undefined *)local_c0);
      FUN_009e6a80();
      local_c0 = CONCAT44(local_3c,&UNK_008e682d);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    if (0xf < local_18) {
      local_c0 = CONCAT44(local_2c[0],&UNK_008e6847);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = CONCAT31(local_8._1_3_,3);
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    if (0xf < local_5c) {
      local_c0 = CONCAT44(local_70[0],&UNK_008e6869);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_c0 = CONCAT44(0x8e6871,(undefined *)local_c0);
    iVar2 = FUN_00475500();
    local_c0 = *(undefined8 *)(iVar2 + 0x74);
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c));
    local_90 = 1;
    local_8 = 0xd;
    local_c0 = CONCAT44(0x8e68ad,(undefined *)local_c0);
    FUN_009adb70();
    if (local_50 == 0) {
      ExceptionList = local_10;
      return param_1;
    }
    local_c0 = CONCAT44(0x8e68c0,(undefined *)local_c0);
    FUN_009e6a80();
    iVar2 = local_50;
  }
  local_c0 = CONCAT44(iVar2,&UNK_008e6bb3);
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

