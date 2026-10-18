// FUN_008fd300 @ 008fd300 body=[[008fd300, 008fd36f] [008fd373, 008fd3f8] [008fd3fc, 008fd41c] [008fd420, 008fd4cd] [008fd4d1, 008fd4ef] [008fd4f3, 008fd58a] [008fd58e, 008fd613] [008fd617, 008fd637] [008fd63b, 008fd6e8] [008fd6ec, 008fd70a] [008fd70e, 008fd763] [008fd767, 008fd77b]]


undefined4 FUN_008fd300(undefined4 param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  undefined8 uStack_9c;
  uint *puStack_94;
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
    puStack_94 = (uint *)0xe;
    local_70 = 0xf;
    local_74 = 0;
    local_84[0] = local_84[0] & 0xffffff00;
    uStack_9c = 0xe2f22c008fd564;
    ExceptionList = &local_10;
    FUN_00409350();
    puStack_94 = local_84;
    local_8 = 0xb;
    uStack_9c = CONCAT44(local_44,0x8fd578);
    FUN_009a8ee0();
    local_8._0_1_ = 0xd;
    if (0xf < local_70) {
      puStack_94 = (uint *)local_84[0];
      uStack_9c = CONCAT44(&UNK_008fd58b,(undefined4)uStack_9c);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    puStack_94 = (uint *)0x4;
    local_70 = 0xf;
    local_74 = 0;
    local_84[0] = local_84[0] & 0xffffff00;
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = local_68[0] & 0xffffff00;
    uStack_9c = 0xdfbf14008fd5af;
    FUN_00409350();
    local_8._0_1_ = 0xe;
    puStack_94 = local_30;
    uStack_9c = CONCAT44(0x8fd5c1,(undefined4)uStack_9c);
    uVar1 = (**(code **)(**(int **)(in_ECX + 0x28) + 0x18))();
    local_8._0_1_ = 0xf;
    uStack_9c = 0x40008fd5ce;
    param_3 = (undefined8 *)FUN_00aae9af();
    local_8._0_1_ = 0x10;
    if (param_3 == (undefined8 *)0x0) {
      param_3 = (undefined8 *)0x0;
    }
    else {
      uStack_9c = CONCAT44(uVar1,local_44);
      param_3 = (undefined8 *)FUN_009a9ce0();
    }
    local_8._0_1_ = 0xf;
    uStack_9c = CONCAT44(&param_3,local_68);
    FUN_009e6810();
    if (0xf < local_1c) {
      uStack_9c = CONCAT44(local_30[0],&UNK_008fd614);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 0xd;
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    if (0xf < local_54) {
      uStack_9c = CONCAT44(local_68[0],&UNK_008fd638);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_9c = 0x300df7e90;
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = local_68[0] & 0xffffff00;
    FUN_00409350();
    param_3 = &uStack_9c;
    local_8._0_1_ = 0x11;
    uStack_9c = 0x320000;
    uStack_9c = __allmul(*(undefined4 *)(in_ECX + 0x20),*(undefined4 *)(in_ECX + 0x24),0x320000,0);
    uStack_9c = uStack_9c >> 0xf;
    uVar1 = FUN_00988bb0(local_30,2);
    local_8._0_1_ = 0x12;
    uStack_9c = 0x40008fd69f;
    param_3 = (undefined8 *)FUN_00aae9af();
    local_8._0_1_ = 0x13;
    if (param_3 == (undefined8 *)0x0) {
      param_3 = (undefined8 *)0x0;
    }
    else {
      uStack_9c = CONCAT44(uVar1,local_44);
      param_3 = (undefined8 *)FUN_009a9ce0();
    }
    local_8._0_1_ = 0x12;
    uStack_9c = CONCAT44(&param_3,local_68);
    FUN_009e6810();
    if (0xf < local_1c) {
      uStack_9c = CONCAT44(local_30[0],&UNK_008fd6e9);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = CONCAT31(local_8._1_3_,0xd);
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    if (0xf < local_54) {
      uStack_9c = CONCAT44(local_68[0],&UNK_008fd70b);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_9c = CONCAT44(0x8fd713,(undefined4)uStack_9c);
    iVar2 = FUN_00475500();
    uStack_9c = *(undefined8 *)(iVar2 + 0x74);
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c));
    local_14 = 1;
    local_8 = 0x14;
    uStack_9c = CONCAT44(0x8fd74c,(undefined4)uStack_9c);
    FUN_009adb70();
    if (local_40 == 0) {
      ExceptionList = local_10;
      return param_1;
    }
    uStack_9c = CONCAT44(0x8fd75b,(undefined4)uStack_9c);
    FUN_009e6a80();
    local_24 = local_40;
  }
  else {
    puStack_94 = (uint *)0x12;
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = local_68[0] & 0xffffff00;
    uStack_9c = 0xe2f218008fd349;
    ExceptionList = &local_10;
    FUN_00409350();
    puStack_94 = local_68;
    local_8 = 1;
    uStack_9c = CONCAT44(local_28,0x8fd35d);
    FUN_009a8ee0();
    local_8._0_1_ = 3;
    if (0xf < local_54) {
      puStack_94 = (uint *)local_68[0];
      uStack_9c = CONCAT44(&UNK_008fd370,(undefined4)uStack_9c);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    puStack_94 = (uint *)0x4;
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = local_68[0] & 0xffffff00;
    local_70 = 0xf;
    local_74 = 0;
    local_84[0] = local_84[0] & 0xffffff00;
    uStack_9c = 0xdfbf14008fd394;
    FUN_00409350();
    local_8._0_1_ = 4;
    puStack_94 = local_4c;
    uStack_9c = CONCAT44(0x8fd3a6,(undefined4)uStack_9c);
    uVar1 = (**(code **)(**(int **)(in_ECX + 0x28) + 0x18))();
    local_8._0_1_ = 5;
    uStack_9c = 0x40008fd3b3;
    param_3 = (undefined8 *)FUN_00aae9af();
    local_8._0_1_ = 6;
    if (param_3 == (undefined8 *)0x0) {
      param_3 = (undefined8 *)0x0;
    }
    else {
      uStack_9c = CONCAT44(uVar1,local_28);
      param_3 = (undefined8 *)FUN_009a9ce0();
    }
    local_8._0_1_ = 5;
    uStack_9c = CONCAT44(&param_3,local_84);
    FUN_009e6810();
    if (0xf < local_38) {
      uStack_9c = CONCAT44(local_4c[0],&UNK_008fd3f9);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 3;
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = local_4c[0] & 0xffffff00;
    if (0xf < local_70) {
      uStack_9c = CONCAT44(local_84[0],&UNK_008fd41d);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_9c = 0x300df7e90;
    local_70 = 0xf;
    local_74 = 0;
    local_84[0] = local_84[0] & 0xffffff00;
    FUN_00409350();
    param_3 = &uStack_9c;
    local_8._0_1_ = 7;
    uStack_9c = 0x320000;
    uStack_9c = __allmul(*(undefined4 *)(in_ECX + 0x20),*(undefined4 *)(in_ECX + 0x24),0x320000,0);
    uStack_9c = uStack_9c >> 0xf;
    uVar1 = FUN_00988bb0(local_4c,2);
    local_8._0_1_ = 8;
    uStack_9c = 0x40008fd484;
    param_3 = (undefined8 *)FUN_00aae9af();
    local_8._0_1_ = 9;
    if (param_3 == (undefined8 *)0x0) {
      param_3 = (undefined8 *)0x0;
    }
    else {
      uStack_9c = CONCAT44(uVar1,local_28);
      param_3 = (undefined8 *)FUN_009a9ce0();
    }
    local_8._0_1_ = 8;
    uStack_9c = CONCAT44(&param_3,local_84);
    FUN_009e6810();
    if (0xf < local_38) {
      uStack_9c = CONCAT44(local_4c[0],&UNK_008fd4ce);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = CONCAT31(local_8._1_3_,3);
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = local_4c[0] & 0xffffff00;
    if (0xf < local_70) {
      uStack_9c = CONCAT44(local_84[0],&UNK_008fd4f0);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_9c = CONCAT44(0x8fd4f8,(undefined4)uStack_9c);
    iVar2 = FUN_00475500();
    uStack_9c = *(undefined8 *)(iVar2 + 0x74);
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c));
    local_14 = 1;
    local_8 = 10;
    uStack_9c = CONCAT44(0x8fd531,(undefined4)uStack_9c);
    FUN_009adb70();
    if (local_24 == 0) {
      ExceptionList = local_10;
      return param_1;
    }
    uStack_9c = CONCAT44(0x8fd544,(undefined4)uStack_9c);
    FUN_009e6a80();
  }
  uStack_9c = CONCAT44(local_24,&UNK_008fd764);
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

