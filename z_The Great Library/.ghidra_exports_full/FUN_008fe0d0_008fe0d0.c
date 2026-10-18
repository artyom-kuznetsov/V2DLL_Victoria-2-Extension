// FUN_008fe0d0 @ 008fe0d0 body=[[008fe0d0, 008fe13f] [008fe143, 008fe1d4] [008fe1d8, 008fe1f2] [008fe1f6, 008fe28d] [008fe291, 008fe322] [008fe326, 008fe340] [008fe344, 008fe399] [008fe39d, 008fe3b1]]


undefined4 FUN_008fe0d0(undefined4 param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  undefined8 local_98;
  uint local_84 [4];
  undefined4 local_74;
  uint local_70;
  uint local_68 [4];
  undefined4 local_58;
  uint local_54;
  uint local_4c;
  undefined1 local_44 [4];
  int local_40;
  undefined4 local_3c;
  uint local_38;
  uint local_30;
  undefined1 local_28 [4];
  int local_24;
  undefined4 local_20;
  uint local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b65d23;
  local_10 = ExceptionList;
  local_14 = 0;
  if ((char)param_3 == '\0') {
    local_98 = 0xc00e2f2a0;
    local_70 = 0xf;
    local_74 = 0;
    local_84[0] = local_84[0] & 0xffffff00;
    ExceptionList = &local_10;
    FUN_00409350();
    local_98 = CONCAT44(local_84,local_44);
    local_8 = 8;
    FUN_009a8ee0();
    local_8._0_1_ = 10;
    if (0xf < local_70) {
      local_98 = CONCAT44(local_84[0],&UNK_008fe28e);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_98 = 0x300df7e90;
    local_70 = 0xf;
    local_74 = 0;
    local_84[0] = local_84[0] & 0xffffff00;
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = local_68[0] & 0xffffff00;
    FUN_00409350();
    param_3 = &local_98;
    local_8._0_1_ = 0xb;
    local_98 = CONCAT44(2,*(undefined4 *)(in_ECX + 0x1c));
    uVar1 = FUN_00988a50();
    local_8._0_1_ = 0xc;
    local_98 = 0x40008fe2d9;
    param_3 = (undefined8 *)FUN_00aae9af();
    local_8._0_1_ = 0xd;
    if (param_3 == (undefined8 *)0x0) {
      param_3 = (undefined8 *)0x0;
    }
    else {
      local_98 = CONCAT44(uVar1,local_44);
      param_3 = (undefined8 *)FUN_009a9ce0();
    }
    local_8._0_1_ = 0xc;
    local_98 = CONCAT44(&param_3,local_68);
    FUN_009e6810();
    if (0xf < local_1c) {
      local_98 = CONCAT44(local_30,&UNK_008fe323);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = CONCAT31(local_8._1_3_,10);
    local_1c = 0xf;
    local_20 = 0;
    local_30 = local_30 & 0xffffff00;
    if (0xf < local_54) {
      local_98 = CONCAT44(local_68[0],&UNK_008fe341);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_98 = CONCAT44(0x8fe349,(undefined4)local_98);
    iVar2 = FUN_00475500();
    local_98 = *(undefined8 *)(iVar2 + 0x74);
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c));
    local_14 = 1;
    local_8 = 0xe;
    local_98 = CONCAT44(0x8fe382,(undefined4)local_98);
    FUN_009adb70();
    if (local_40 == 0) {
      ExceptionList = local_10;
      return param_1;
    }
    local_98 = CONCAT44(0x8fe391,(undefined4)local_98);
    FUN_009e6a80();
    local_24 = local_40;
  }
  else {
    local_98 = 0x1000e2f28c;
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = local_68[0] & 0xffffff00;
    ExceptionList = &local_10;
    FUN_00409350();
    local_98 = CONCAT44(local_68,local_28);
    local_8 = 1;
    FUN_009a8ee0();
    local_8._0_1_ = 3;
    if (0xf < local_54) {
      local_98 = CONCAT44(local_68[0],&UNK_008fe140);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_98 = 0x300df7e90;
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = local_68[0] & 0xffffff00;
    local_70 = 0xf;
    local_74 = 0;
    local_84[0] = local_84[0] & 0xffffff00;
    FUN_00409350();
    param_3 = &local_98;
    local_8._0_1_ = 4;
    local_98 = CONCAT44(2,*(undefined4 *)(in_ECX + 0x1c));
    uVar1 = FUN_00988a50();
    local_8._0_1_ = 5;
    local_98 = 0x40008fe18b;
    param_3 = (undefined8 *)FUN_00aae9af();
    local_8._0_1_ = 6;
    if (param_3 == (undefined8 *)0x0) {
      param_3 = (undefined8 *)0x0;
    }
    else {
      local_98 = CONCAT44(uVar1,local_28);
      param_3 = (undefined8 *)FUN_009a9ce0();
    }
    local_8._0_1_ = 5;
    local_98 = CONCAT44(&param_3,local_84);
    FUN_009e6810();
    if (0xf < local_38) {
      local_98 = CONCAT44(local_4c,&UNK_008fe1d5);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = CONCAT31(local_8._1_3_,3);
    local_38 = 0xf;
    local_3c = 0;
    local_4c = local_4c & 0xffffff00;
    if (0xf < local_70) {
      local_98 = CONCAT44(local_84[0],&UNK_008fe1f3);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_98 = CONCAT44(0x8fe1fb,(undefined4)local_98);
    iVar2 = FUN_00475500();
    local_98 = *(undefined8 *)(iVar2 + 0x74);
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c));
    local_14 = 1;
    local_8 = 7;
    local_98 = CONCAT44(0x8fe234,(undefined4)local_98);
    FUN_009adb70();
    if (local_24 == 0) {
      ExceptionList = local_10;
      return param_1;
    }
    local_98 = CONCAT44(0x8fe247,(undefined4)local_98);
    FUN_009e6a80();
  }
  local_98 = CONCAT44(local_24,&UNK_008fe39a);
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

