// FUN_008fc3d0 @ 008fc3d0 body=[[008fc3d0, 008fc43f] [008fc443, 008fc4c7] [008fc4cb, 008fc4eb] [008fc4ef, 008fc57f] [008fc583, 008fc5a1] [008fc5a5, 008fc63c] [008fc640, 008fc6c4] [008fc6c8, 008fc6e8] [008fc6ec, 008fc77c] [008fc780, 008fc79e] [008fc7a2, 008fc7f7] [008fc7fb, 008fc80f]]


undefined4 FUN_008fc3d0(undefined4 param_1,undefined4 param_2,undefined8 *param_3)

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
  puStack_c = &LAB_00b656f9;
  local_10 = ExceptionList;
  local_14 = 0;
  if ((char)param_3 == '\0') {
    local_98 = 0xc00e2f1d0;
    local_70 = 0xf;
    local_74 = 0;
    local_84[0] = local_84[0] & 0xffffff00;
    ExceptionList = &local_10;
    FUN_00409350();
    local_98 = CONCAT44(local_84,local_44);
    local_8 = 0xb;
    FUN_009a8ee0();
    local_8._0_1_ = 0xd;
    if (0xf < local_70) {
      local_98 = CONCAT44(local_84[0],&UNK_008fc63d);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_98 = 0x400dfbf14;
    local_70 = 0xf;
    local_74 = 0;
    local_84[0] = local_84[0] & 0xffffff00;
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = local_68[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0xe;
    local_98 = CONCAT44(local_30,*(undefined4 *)(in_ECX + 0x28));
    uVar1 = FUN_005659c0();
    local_8._0_1_ = 0xf;
    local_98 = 0x40008fc67f;
    param_3 = (undefined8 *)FUN_00aae9af();
    local_8._0_1_ = 0x10;
    if (param_3 == (undefined8 *)0x0) {
      param_3 = (undefined8 *)0x0;
    }
    else {
      local_98 = CONCAT44(uVar1,local_44);
      param_3 = (undefined8 *)FUN_009a9ce0();
    }
    local_8._0_1_ = 0xf;
    local_98 = CONCAT44(&param_3,local_68);
    FUN_009e6810();
    if (0xf < local_1c) {
      local_98 = CONCAT44(local_30[0],&UNK_008fc6c5);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 0xd;
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    if (0xf < local_54) {
      local_98 = CONCAT44(local_68[0],&UNK_008fc6e9);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_98 = 0x300df7e90;
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = local_68[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0x11;
    param_3 = &local_98;
    local_98 = *(undefined8 *)(in_ECX + 0x20);
    uVar1 = FUN_00988bb0(local_30,1);
    local_8._0_1_ = 0x12;
    local_98 = 0x40008fc733;
    param_3 = (undefined8 *)FUN_00aae9af();
    local_8._0_1_ = 0x13;
    if (param_3 == (undefined8 *)0x0) {
      param_3 = (undefined8 *)0x0;
    }
    else {
      local_98 = CONCAT44(uVar1,local_44);
      param_3 = (undefined8 *)FUN_009a9ce0();
    }
    local_8._0_1_ = 0x12;
    local_98 = CONCAT44(&param_3,local_68);
    FUN_009e6810();
    if (0xf < local_1c) {
      local_98 = CONCAT44(local_30[0],&UNK_008fc77d);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = CONCAT31(local_8._1_3_,0xd);
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    if (0xf < local_54) {
      local_98 = CONCAT44(local_68[0],&UNK_008fc79f);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_98 = CONCAT44(0x8fc7a7,(undefined4)local_98);
    iVar2 = FUN_00475500();
    local_98 = *(undefined8 *)(iVar2 + 0x74);
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c));
    local_14 = 1;
    local_8 = 0x14;
    local_98 = CONCAT44(0x8fc7e0,(undefined4)local_98);
    FUN_009adb70();
    if (local_40 == 0) {
      ExceptionList = local_10;
      return param_1;
    }
    local_98 = CONCAT44(0x8fc7ef,(undefined4)local_98);
    FUN_009e6a80();
    local_24 = local_40;
  }
  else {
    local_98 = 0x1000e2f1bc;
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
      local_98 = CONCAT44(local_68[0],&UNK_008fc440);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_98 = 0x400dfbf14;
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = local_68[0] & 0xffffff00;
    local_70 = 0xf;
    local_74 = 0;
    local_84[0] = local_84[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 4;
    local_98 = CONCAT44(local_4c,*(undefined4 *)(in_ECX + 0x28));
    uVar1 = FUN_005659c0();
    local_8._0_1_ = 5;
    local_98 = 0x40008fc482;
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
      local_98 = CONCAT44(local_4c[0],&UNK_008fc4c8);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 3;
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = local_4c[0] & 0xffffff00;
    if (0xf < local_70) {
      local_98 = CONCAT44(local_84[0],&UNK_008fc4ec);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_98 = 0x300df7e90;
    local_70 = 0xf;
    local_74 = 0;
    local_84[0] = local_84[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 7;
    param_3 = &local_98;
    local_98 = *(undefined8 *)(in_ECX + 0x20);
    uVar1 = FUN_00988bb0(local_4c,1);
    local_8._0_1_ = 8;
    local_98 = 0x40008fc536;
    param_3 = (undefined8 *)FUN_00aae9af();
    local_8._0_1_ = 9;
    if (param_3 == (undefined8 *)0x0) {
      param_3 = (undefined8 *)0x0;
    }
    else {
      local_98 = CONCAT44(uVar1,local_28);
      param_3 = (undefined8 *)FUN_009a9ce0();
    }
    local_8._0_1_ = 8;
    local_98 = CONCAT44(&param_3,local_84);
    FUN_009e6810();
    if (0xf < local_38) {
      local_98 = CONCAT44(local_4c[0],&UNK_008fc580);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = CONCAT31(local_8._1_3_,3);
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = local_4c[0] & 0xffffff00;
    if (0xf < local_70) {
      local_98 = CONCAT44(local_84[0],&UNK_008fc5a2);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_98 = CONCAT44(0x8fc5aa,(undefined4)local_98);
    iVar2 = FUN_00475500();
    local_98 = *(undefined8 *)(iVar2 + 0x74);
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c));
    local_14 = 1;
    local_8 = 10;
    local_98 = CONCAT44(0x8fc5e3,(undefined4)local_98);
    FUN_009adb70();
    if (local_24 == 0) {
      ExceptionList = local_10;
      return param_1;
    }
    local_98 = CONCAT44(0x8fc5f6,(undefined4)local_98);
    FUN_009e6a80();
  }
  local_98 = CONCAT44(local_24,&UNK_008fc7f8);
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

