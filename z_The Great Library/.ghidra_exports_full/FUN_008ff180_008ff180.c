// FUN_008ff180 @ 008ff180 body=[[008ff180, 008ff1ee] [008ff1f2, 008ff2a1] [008ff2a5, 008ff2c4] [008ff2c8, 008ff337] [008ff33b, 008ff355] [008ff359, 008ff3ce] [008ff3d2, 008ff481] [008ff485, 008ff4a4] [008ff4a8, 008ff517] [008ff51b, 008ff535] [008ff539, 008ff56c] [008ff570, 008ff584]]


undefined4 FUN_008ff180(undefined4 param_1,undefined4 param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
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
  puStack_c = &LAB_00b65ea3;
  local_10 = ExceptionList;
  local_14 = 0;
  if ((char)param_3 == '\0') {
    local_98 = 0xb00e2f368;
    local_70 = 0xf;
    local_74 = 0;
    local_84[0] = local_84[0] & 0xffffff00;
    ExceptionList = &local_10;
    FUN_00409350();
    local_98 = CONCAT44(local_84,local_44);
    local_8 = 10;
    FUN_009a8ee0();
    local_8._0_1_ = 0xc;
    if (0xf < local_70) {
      local_98 = CONCAT44(local_84[0],&UNK_008ff3cf);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_98._4_4_ = 3;
    local_98._0_4_ = &DAT_00df7e90;
    local_70 = 0xf;
    local_74 = 0;
    local_84[0] = local_84[0] & 0xffffff00;
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = local_68[0] & 0xffffff00;
    FUN_00409350();
    param_3 = &local_98;
    local_8._0_1_ = 0xd;
    local_98 = CONCAT44(local_98._4_4_,*(undefined4 *)(in_ECX + 0x20));
    local_98 = __allmul(*(undefined4 *)(in_ECX + 0x20),*(undefined4 *)(in_ECX + 0x24),0x320000,0);
    local_98 = local_98 >> 0xf;
    uVar2 = FUN_00988bb0(local_30,2);
    local_8._0_1_ = 0xe;
    local_98 = 0x40008ff438;
    param_3 = (undefined8 *)FUN_00aae9af();
    local_8._0_1_ = 0xf;
    if (param_3 == (undefined8 *)0x0) {
      param_3 = (undefined8 *)0x0;
    }
    else {
      local_98 = CONCAT44(uVar2,local_44);
      param_3 = (undefined8 *)FUN_009a9ce0();
    }
    local_8._0_1_ = 0xe;
    local_98 = CONCAT44(&param_3,local_68);
    FUN_009e6810();
    if (0xf < local_1c) {
      local_98 = CONCAT44(local_30[0],&UNK_008ff482);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 0xc;
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    if (0xf < local_54) {
      local_98 = CONCAT44(local_68[0],&UNK_008ff4a5);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_98 = 0x100dee2cc;
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = local_68[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0x10;
    local_98 = CONCAT44(0x8ff4c9,(undefined *)local_98);
    iVar3 = FUN_00475500();
    local_98 = *(undefined8 *)(iVar3 + 0x74);
    FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c));
    local_8 = CONCAT31(local_8._1_3_,0x11);
    local_98 = CONCAT44(local_68,0x8ff4fe);
    FUN_00988f20();
    local_14 = 1;
    if (0xf < local_1c) {
      local_98 = CONCAT44(local_30[0],&UNK_008ff518);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    if (0xf < local_54) {
      local_98 = CONCAT44(local_68[0],&UNK_008ff536);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = local_68[0] & 0xffffff00;
    local_8 = 0x12;
    local_98 = CONCAT44(0x8ff555,(undefined *)local_98);
    FUN_009adb70();
    if (local_40 == 0) {
      ExceptionList = local_10;
      return param_1;
    }
    local_98 = CONCAT44(0x8ff564,(undefined *)local_98);
    FUN_009e6a80();
    local_24 = local_40;
  }
  else {
    local_98 = 0xf00e2f358;
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
      local_98 = CONCAT44(local_68[0],&UNK_008ff1ef);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_98._4_4_ = 3;
    local_98._0_4_ = &DAT_00df7e90;
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = local_68[0] & 0xffffff00;
    local_70 = 0xf;
    local_74 = 0;
    local_84[0] = local_84[0] & 0xffffff00;
    FUN_00409350();
    param_3 = &local_98;
    local_8._0_1_ = 4;
    local_98 = CONCAT44(local_98._4_4_,*(undefined4 *)(in_ECX + 0x20));
    local_98 = __allmul(*(undefined4 *)(in_ECX + 0x20),*(undefined4 *)(in_ECX + 0x24),0x320000,0);
    local_98 = local_98 >> 0xf;
    uVar2 = FUN_00988bb0(local_4c,2);
    local_8._0_1_ = 5;
    local_98 = 0x40008ff258;
    param_3 = (undefined8 *)FUN_00aae9af();
    local_8._0_1_ = 6;
    if (param_3 == (undefined8 *)0x0) {
      param_3 = (undefined8 *)0x0;
    }
    else {
      local_98 = CONCAT44(uVar2,local_28);
      param_3 = (undefined8 *)FUN_009a9ce0();
    }
    local_8._0_1_ = 5;
    local_98 = CONCAT44(&param_3,local_84);
    FUN_009e6810();
    if (0xf < local_38) {
      local_98 = CONCAT44(local_4c[0],&UNK_008ff2a2);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 3;
    local_38 = 0xf;
    local_3c = 0;
    uVar1 = local_4c[0] >> 8;
    local_4c[0] = uVar1 << 8;
    if (0xf < local_70) {
      local_98 = CONCAT44(local_84[0],&UNK_008ff2c5);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_98 = 0x100dee2cc;
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = uVar1 << 8;
    FUN_00409350();
    local_8._0_1_ = 7;
    local_98 = CONCAT44(0x8ff2e9,(undefined *)local_98);
    iVar3 = FUN_00475500();
    local_98 = *(undefined8 *)(iVar3 + 0x74);
    FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c));
    local_8 = CONCAT31(local_8._1_3_,8);
    local_98 = CONCAT44(local_4c,0x8ff31e);
    FUN_00988f20();
    local_14 = 1;
    if (0xf < local_70) {
      local_98 = CONCAT44(local_84[0],&UNK_008ff338);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_70 = 0xf;
    local_74 = 0;
    local_84[0] = local_84[0] & 0xffffff00;
    if (0xf < local_38) {
      local_98 = CONCAT44(local_4c[0],&UNK_008ff356);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = local_4c[0] & 0xffffff00;
    local_8 = 9;
    local_98 = CONCAT44(0x8ff375,(undefined *)local_98);
    FUN_009adb70();
    if (local_24 == 0) {
      ExceptionList = local_10;
      return param_1;
    }
    local_98 = CONCAT44(0x8ff388,(undefined *)local_98);
    FUN_009e6a80();
  }
  local_98 = CONCAT44(local_24,&UNK_008ff56d);
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

