// FUN_008e7ac0 @ 008e7ac0 body=[[008e7ac0, 008e7b4b] [008e7b4f, 008e7c0a] [008e7c0e, 008e7c30] [008e7c34, 008e7cbf] [008e7cc3, 008e7ce0] [008e7ce4, 008e7d87] [008e7d8b, 008e7e3d] [008e7e41, 008e7e60] [008e7e64, 008e7ee3] [008e7ee7, 008e7f01] [008e7f05, 008e7f5a] [008e7f5e, 008e7f72]]


undefined4 FUN_008e7ac0(undefined4 param_1,int param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  undefined8 local_9c;
  uint local_88 [4];
  undefined4 local_78;
  uint local_74;
  uint local_6c [4];
  undefined4 local_5c;
  uint local_58;
  uint local_50 [2];
  undefined1 local_48 [4];
  int local_44;
  undefined4 local_40;
  uint local_3c;
  uint local_34 [2];
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  uint local_20;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b65df2;
  local_10 = ExceptionList;
  local_18 = 0;
  local_14 = *(undefined4 *)(in_ECX + 0x28);
  if (*(char *)(in_ECX + 0x18) != '\0') {
    local_14 = *(undefined4 *)(*(int *)(*(int *)(param_2 + 0x24) + 0x14) + 0x68);
  }
  if ((char)param_3 == '\0') {
    local_9c = 0x1c00e2e614;
    local_74 = 0xf;
    local_78 = 0;
    local_88[0] = local_88[0] & 0xffffff00;
    ExceptionList = &local_10;
    FUN_00409350();
    local_9c = CONCAT44(local_88,local_48);
    local_8 = 0xb;
    FUN_009a8ee0();
    local_8._0_1_ = 0xd;
    if (0xf < local_74) {
      local_9c = CONCAT44(local_88[0],&UNK_008e7d88);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_9c._4_4_ = 3;
    local_9c._0_4_ = &DAT_00df7e90;
    local_74 = 0xf;
    local_78 = 0;
    local_88[0] = local_88[0] & 0xffffff00;
    local_58 = 0xf;
    local_5c = 0;
    local_6c[0] = local_6c[0] & 0xffffff00;
    FUN_00409350();
    param_3 = &local_9c;
    local_8._0_1_ = 0xe;
    local_9c = CONCAT44(local_9c._4_4_,*(undefined4 *)(in_ECX + 0x20));
    local_9c = __allmul(*(undefined4 *)(in_ECX + 0x20),*(undefined4 *)(in_ECX + 0x24),0x320000,0);
    local_9c = local_9c >> 0xf;
    uVar1 = FUN_00988bb0(local_34,1);
    local_8._0_1_ = 0xf;
    local_9c = 0x40008e7df4;
    param_3 = (undefined8 *)FUN_00aae9af();
    local_8._0_1_ = 0x10;
    if (param_3 == (undefined8 *)0x0) {
      param_3 = (undefined8 *)0x0;
    }
    else {
      local_9c = CONCAT44(uVar1,local_48);
      param_3 = (undefined8 *)FUN_009a9ce0();
    }
    local_8._0_1_ = 0xf;
    local_9c = CONCAT44(&param_3,local_6c);
    FUN_009e6810();
    if (0xf < local_20) {
      local_9c = CONCAT44(local_34[0],&UNK_008e7e3e);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 0xd;
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    if (0xf < local_58) {
      local_9c = CONCAT44(local_6c[0],&UNK_008e7e61);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_9c = 0x400df7e80;
    local_58 = 0xf;
    local_5c = 0;
    local_6c[0] = local_6c[0] & 0xffffff00;
    FUN_00409350();
    local_9c = CONCAT44(local_34,local_14);
    local_8._0_1_ = 0x11;
    uVar1 = FUN_0096d650();
    local_8._0_1_ = 0x12;
    local_9c = 0x40008e7e9a;
    param_3 = (undefined8 *)FUN_00aae9af();
    local_8._0_1_ = 0x13;
    if (param_3 == (undefined8 *)0x0) {
      param_3 = (undefined8 *)0x0;
    }
    else {
      local_9c = CONCAT44(uVar1,local_48);
      param_3 = (undefined8 *)FUN_009a9ce0();
    }
    local_8._0_1_ = 0x12;
    local_9c = CONCAT44(&param_3,local_6c);
    FUN_009e6810();
    if (0xf < local_20) {
      local_9c = CONCAT44(local_34[0],&UNK_008e7ee4);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = CONCAT31(local_8._1_3_,0xd);
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    if (0xf < local_58) {
      local_9c = CONCAT44(local_6c[0],&UNK_008e7f02);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_9c = CONCAT44(0x8e7f0a,(undefined *)local_9c);
    iVar2 = FUN_00475500();
    local_9c = *(undefined8 *)(iVar2 + 0x74);
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c));
    local_18 = 1;
    local_8 = 0x14;
    local_9c = CONCAT44(0x8e7f43,(undefined *)local_9c);
    FUN_009adb70();
    if (local_44 == 0) {
      ExceptionList = local_10;
      return param_1;
    }
    local_9c = CONCAT44(0x8e7f52,(undefined *)local_9c);
    FUN_009e6a80();
    local_28 = local_44;
  }
  else {
    local_9c = 0x2000e2e5f0;
    local_58 = 0xf;
    local_5c = 0;
    local_6c[0] = local_6c[0] & 0xffffff00;
    ExceptionList = &local_10;
    FUN_00409350();
    local_9c = CONCAT44(local_6c,local_2c);
    local_8 = 1;
    FUN_009a8ee0();
    local_8._0_1_ = 3;
    if (0xf < local_58) {
      local_9c = CONCAT44(local_6c[0],&UNK_008e7b4c);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_9c._4_4_ = 3;
    local_9c._0_4_ = &DAT_00df7e90;
    local_58 = 0xf;
    local_5c = 0;
    local_6c[0] = local_6c[0] & 0xffffff00;
    local_74 = 0xf;
    local_78 = 0;
    local_88[0] = local_88[0] & 0xffffff00;
    FUN_00409350();
    param_3 = &local_9c;
    local_8._0_1_ = 4;
    local_9c = CONCAT44(local_9c._4_4_,*(undefined4 *)(in_ECX + 0x20));
    local_9c = __allmul(*(undefined4 *)(in_ECX + 0x20),*(undefined4 *)(in_ECX + 0x24),0x320000,0);
    local_9c = local_9c >> 0xf;
    uVar1 = FUN_00988bb0(local_50,1);
    local_8._0_1_ = 5;
    local_9c = 0x40008e7bbb;
    param_3 = (undefined8 *)FUN_00aae9af();
    local_8._0_1_ = 6;
    if (param_3 == (undefined8 *)0x0) {
      param_3 = (undefined8 *)0x0;
    }
    else {
      local_9c = CONCAT44(uVar1,local_2c);
      param_3 = (undefined8 *)FUN_009a9ce0();
    }
    local_8._0_1_ = 5;
    local_9c = CONCAT44(&param_3,local_88);
    FUN_009e6810();
    if (0xf < local_3c) {
      local_9c = CONCAT44(local_50[0],&UNK_008e7c0b);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 3;
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    if (0xf < local_74) {
      local_9c = CONCAT44(local_88[0],&UNK_008e7c31);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_9c = 0x400df7e80;
    local_74 = 0xf;
    local_78 = 0;
    local_88[0] = local_88[0] & 0xffffff00;
    FUN_00409350();
    local_9c = CONCAT44(local_50,local_14);
    local_8._0_1_ = 7;
    uVar1 = FUN_0096d650();
    local_8._0_1_ = 8;
    local_9c = 0x40008e7c70;
    param_3 = (undefined8 *)FUN_00aae9af();
    local_8._0_1_ = 9;
    if (param_3 == (undefined8 *)0x0) {
      param_3 = (undefined8 *)0x0;
    }
    else {
      local_9c = CONCAT44(uVar1,local_2c);
      param_3 = (undefined8 *)FUN_009a9ce0();
    }
    local_8._0_1_ = 8;
    local_9c = CONCAT44(&param_3,local_88);
    FUN_009e6810();
    if (0xf < local_3c) {
      local_9c = CONCAT44(local_50[0],&UNK_008e7cc0);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = CONCAT31(local_8._1_3_,3);
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    if (0xf < local_74) {
      local_9c = CONCAT44(local_88[0],&UNK_008e7ce1);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_9c = CONCAT44(0x8e7ce9,(undefined *)local_9c);
    iVar2 = FUN_00475500();
    local_9c = *(undefined8 *)(iVar2 + 0x74);
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c));
    local_18 = 1;
    local_8 = 10;
    local_9c = CONCAT44(0x8e7d22,(undefined *)local_9c);
    FUN_009adb70();
    if (local_28 == 0) {
      ExceptionList = local_10;
      return param_1;
    }
    local_9c = CONCAT44(0x8e7d35,(undefined *)local_9c);
    FUN_009e6a80();
  }
  local_9c = CONCAT44(local_28,&UNK_008e7f5b);
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

