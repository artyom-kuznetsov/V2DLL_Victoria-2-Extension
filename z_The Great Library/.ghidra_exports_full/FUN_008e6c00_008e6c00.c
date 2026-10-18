// FUN_008e6c00 @ 008e6c00 body=[[008e6c00, 008e6c81] [008e6c85, 008e6d37] [008e6d3b, 008e6d5a] [008e6d5e, 008e6e2f] [008e6e33, 008e6e6c] [008e6e70, 008e6e86] [008e6e8a, 008e6ea8] [008e6eac, 008e6f45] [008e6f49, 008e700d] [008e7011, 008e703c] [008e7040, 008e711a] [008e711e, 008e7157] [008e715b, 008e7171] [008e7175, 008e7196] [008e719a, 008e71f2] [008e71f6, 008e720a]]


undefined4 FUN_008e6c00(undefined4 param_1,undefined4 param_2,undefined8 *param_3)

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
      local_c0 = CONCAT44(local_70[0],&UNK_008e6f46);
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
    local_c0 = 0x40008e6fb8;
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
      local_c0 = CONCAT44(local_ac[0],&UNK_008e700e);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 0x10;
    local_98 = 0xf;
    local_9c = 0;
    local_ac[0] = local_ac[0] & 0xffffff00;
    if (0xf < local_78) {
      local_c0 = CONCAT44(local_8c[0],&UNK_008e703d);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_c0 = 0xc00dfedc8;
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
    local_c0 = CONCAT44(0x8e7099,(undefined *)local_c0);
    iVar2 = FUN_00475500();
    local_c0 = *(undefined8 *)(iVar2 + 0x74);
    uVar1 = FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c));
    local_8._0_1_ = 0x17;
    local_c0 = 0x40008e70cb;
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
      local_c0 = CONCAT44(local_ac[0],&UNK_008e711b);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_98 = 0xf;
    local_9c = 0;
    local_ac[0] = local_ac[0] & 0xffffff00;
    local_8._0_1_ = 0x19;
    local_c0 = CONCAT44(0x8e7140,(undefined *)local_c0);
    FUN_009adb70();
    if (local_50 != 0) {
      local_c0 = CONCAT44(0x8e714f,(undefined *)local_c0);
      FUN_009e6a80();
      local_c0 = CONCAT44(local_50,&UNK_008e7158);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_50 = 0;
    local_4c = 0;
    local_48 = 0;
    if (0xf < local_18) {
      local_c0 = CONCAT44(local_2c[0],&UNK_008e7172);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = CONCAT31(local_8._1_3_,0x10);
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    if (0xf < local_78) {
      local_c0 = CONCAT44(local_8c[0],&UNK_008e7197);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_c0 = CONCAT44(0x8e719f,(undefined *)local_c0);
    iVar2 = FUN_00475500();
    local_c0 = *(undefined8 *)(iVar2 + 0x74);
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c));
    local_90 = 1;
    local_8 = 0x1a;
    local_c0 = CONCAT44(0x8e71db,(undefined *)local_c0);
    FUN_009adb70();
    if (local_3c == 0) {
      ExceptionList = local_10;
      return param_1;
    }
    local_c0 = CONCAT44(0x8e71ea,(undefined *)local_c0);
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
      local_c0 = CONCAT44(local_8c[0],&UNK_008e6c82);
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
    local_c0 = 0x40008e6cee;
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
      local_c0 = CONCAT44(local_2c[0],&UNK_008e6d38);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 3;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    if (0xf < local_5c) {
      local_c0 = CONCAT44(local_70[0],&UNK_008e6d5b);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_c0 = 0xc00dfedc8;
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
    local_c0 = CONCAT44(0x8e6dae,(undefined *)local_c0);
    iVar2 = FUN_00475500();
    local_c0 = *(undefined8 *)(iVar2 + 0x74);
    uVar1 = FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c));
    local_8._0_1_ = 10;
    local_c0 = 0x40008e6de0;
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
      local_c0 = CONCAT44(local_ac[0],&UNK_008e6e30);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_98 = 0xf;
    local_9c = 0;
    local_ac[0] = local_ac[0] & 0xffffff00;
    local_8._0_1_ = 0xc;
    local_c0 = CONCAT44(0x8e6e55,(undefined *)local_c0);
    FUN_009adb70();
    if (local_3c != 0) {
      local_c0 = CONCAT44(0x8e6e64,(undefined *)local_c0);
      FUN_009e6a80();
      local_c0 = CONCAT44(local_3c,&UNK_008e6e6d);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    if (0xf < local_18) {
      local_c0 = CONCAT44(local_2c[0],&UNK_008e6e87);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = CONCAT31(local_8._1_3_,3);
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    if (0xf < local_5c) {
      local_c0 = CONCAT44(local_70[0],&UNK_008e6ea9);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_c0 = CONCAT44(0x8e6eb1,(undefined *)local_c0);
    iVar2 = FUN_00475500();
    local_c0 = *(undefined8 *)(iVar2 + 0x74);
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c));
    local_90 = 1;
    local_8 = 0xd;
    local_c0 = CONCAT44(0x8e6eed,(undefined *)local_c0);
    FUN_009adb70();
    if (local_50 == 0) {
      ExceptionList = local_10;
      return param_1;
    }
    local_c0 = CONCAT44(0x8e6f00,(undefined *)local_c0);
    FUN_009e6a80();
    iVar2 = local_50;
  }
  local_c0 = CONCAT44(iVar2,&UNK_008e71f3);
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

