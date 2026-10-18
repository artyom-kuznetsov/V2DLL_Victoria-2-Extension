// FUN_008de2d0 @ 008de2d0 body=[[008de2d0, 008de35e] [008de362, 008de3e7] [008de3eb, 008de405] [008de409, 008de4af] [008de4b3, 008de4cd] [008de4d1, 008de56c] [008de570, 008de5fb] [008de5ff, 008de619] [008de61d, 008de6c9] [008de6cd, 008de6e7] [008de6eb, 008de74f] [008de753, 008de767]]


undefined4 FUN_008de2d0(undefined4 param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_b0;
  undefined1 local_94 [4];
  int local_90;
  undefined1 local_80 [4];
  int local_7c;
  undefined4 local_6c;
  int local_68;
  uint local_64;
  undefined4 local_54;
  uint local_50;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b85b0f;
  local_10 = ExceptionList;
  local_6c = 0;
  if ((char)param_3 == '\0') {
    local_b0 = 0x2700e2e24c;
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    ExceptionList = &local_10;
    FUN_00409350();
    local_b0 = CONCAT44(local_48,local_94);
    local_8 = 0xb;
    FUN_009a8ee0();
    local_8._0_1_ = 0xd;
    if (0xf < local_34) {
      local_b0 = CONCAT44(local_48[0],&UNK_008de56d);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_b0 = 0x700df27b4;
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0xe;
    local_b0 = CONCAT44(0x8de59f,(undefined4)local_b0);
    uVar1 = FUN_004f97a0();
    local_8._0_1_ = 0xf;
    local_b0 = 0x40008de5ac;
    param_3 = (undefined8 *)FUN_00aae9af();
    local_8._0_1_ = 0x10;
    if (param_3 == (undefined8 *)0x0) {
      param_3 = (undefined8 *)0x0;
    }
    else {
      local_b0 = CONCAT44(uVar1,local_94);
      param_3 = (undefined8 *)FUN_009a9ce0();
    }
    local_8._0_1_ = 0xf;
    local_b0 = CONCAT44(&param_3,local_2c);
    FUN_009e6810();
    if (0xf < local_50) {
      local_b0 = CONCAT44(local_64,&UNK_008de5fc);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 0xd;
    local_50 = 0xf;
    local_54 = 0;
    local_64 = local_64 & 0xffffff00;
    if (0xf < local_18) {
      local_b0 = CONCAT44(local_2c[0],&UNK_008de61a);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_b0 = 0x500df7f74;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350();
    param_3 = &local_b0;
    local_b0._4_4_ = 1;
    local_8._0_1_ = 0x11;
    uVar3 = __allmul(*(int *)(local_68 + 0x1c),*(int *)(local_68 + 0x1c) >> 0x1f,100000,0);
    uVar1 = __alldiv(uVar3,1000,0);
    local_b0 = CONCAT44(local_b0._4_4_,uVar1);
    uVar1 = FUN_00988a50();
    local_8._0_1_ = 0x12;
    local_b0 = 0x40008de67a;
    param_3 = (undefined8 *)FUN_00aae9af();
    local_8._0_1_ = 0x13;
    if (param_3 == (undefined8 *)0x0) {
      param_3 = (undefined8 *)0x0;
    }
    else {
      local_b0 = CONCAT44(uVar1,local_94);
      param_3 = (undefined8 *)FUN_009a9ce0();
    }
    local_8._0_1_ = 0x12;
    local_b0 = CONCAT44(&param_3,local_2c);
    FUN_009e6810();
    if (0xf < local_50) {
      local_b0 = CONCAT44(local_64,&UNK_008de6ca);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = CONCAT31(local_8._1_3_,0xd);
    local_50 = 0xf;
    local_54 = 0;
    local_64 = local_64 & 0xffffff00;
    if (0xf < local_18) {
      local_b0 = CONCAT44(local_2c[0],&UNK_008de6e8);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_b0 = CONCAT44(0x8de6f0,(undefined4)local_b0);
    iVar2 = FUN_00475500();
    local_b0 = *(undefined8 *)(iVar2 + 0x74);
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c));
    local_6c = 1;
    local_8 = 0x14;
    local_b0 = CONCAT44(0x8de72f,(undefined4)local_b0);
    FUN_009adb70();
    if (local_90 == 0) {
      ExceptionList = local_10;
      return param_1;
    }
    local_b0 = CONCAT44(0x8de744,(undefined4)local_b0);
    FUN_009e6a80();
    local_b0._4_4_ = local_90;
  }
  else {
    local_b0 = 0x2300e2e228;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    ExceptionList = &local_10;
    FUN_00409350();
    local_b0 = CONCAT44(local_2c,local_80);
    local_8 = 1;
    FUN_009a8ee0();
    local_8._0_1_ = 3;
    if (0xf < local_18) {
      local_b0 = CONCAT44(local_2c[0],&UNK_008de35f);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_b0 = 0x700df27b4;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 4;
    local_b0 = CONCAT44(0x8de391,(undefined4)local_b0);
    uVar1 = FUN_004f97a0();
    local_8._0_1_ = 5;
    local_b0 = 0x40008de39e;
    param_3 = (undefined8 *)FUN_00aae9af();
    local_8._0_1_ = 6;
    if (param_3 == (undefined8 *)0x0) {
      param_3 = (undefined8 *)0x0;
    }
    else {
      local_b0 = CONCAT44(uVar1,local_80);
      param_3 = (undefined8 *)FUN_009a9ce0();
    }
    local_8._0_1_ = 5;
    local_b0 = CONCAT44(&param_3,local_48);
    FUN_009e6810();
    if (0xf < local_50) {
      local_b0 = CONCAT44(local_64,&UNK_008de3e8);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 3;
    local_50 = 0xf;
    local_54 = 0;
    local_64 = local_64 & 0xffffff00;
    if (0xf < local_34) {
      local_b0 = CONCAT44(local_48[0],&UNK_008de406);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_b0 = 0x500df7f74;
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    FUN_00409350();
    param_3 = &local_b0;
    local_b0._4_4_ = 1;
    local_8._0_1_ = 7;
    uVar3 = __allmul(*(int *)(local_68 + 0x1c),*(int *)(local_68 + 0x1c) >> 0x1f,100000,0);
    uVar1 = __alldiv(uVar3,1000,0);
    local_b0 = CONCAT44(local_b0._4_4_,uVar1);
    uVar1 = FUN_00988a50();
    local_8._0_1_ = 8;
    local_b0 = 0x40008de466;
    param_3 = (undefined8 *)FUN_00aae9af();
    local_8._0_1_ = 9;
    if (param_3 == (undefined8 *)0x0) {
      param_3 = (undefined8 *)0x0;
    }
    else {
      local_b0 = CONCAT44(uVar1,local_80);
      param_3 = (undefined8 *)FUN_009a9ce0();
    }
    local_8._0_1_ = 8;
    local_b0 = CONCAT44(&param_3,local_48);
    FUN_009e6810();
    if (0xf < local_50) {
      local_b0 = CONCAT44(local_64,&UNK_008de4b0);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = CONCAT31(local_8._1_3_,3);
    local_50 = 0xf;
    local_54 = 0;
    local_64 = local_64 & 0xffffff00;
    if (0xf < local_34) {
      local_b0 = CONCAT44(local_48[0],&UNK_008de4ce);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_b0 = CONCAT44(0x8de4d6,(undefined4)local_b0);
    iVar2 = FUN_00475500();
    local_b0 = *(undefined8 *)(iVar2 + 0x74);
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c));
    local_6c = 1;
    local_8 = 10;
    local_b0 = CONCAT44(0x8de50f,(undefined4)local_b0);
    FUN_009adb70();
    if (local_7c == 0) {
      ExceptionList = local_10;
      return param_1;
    }
    local_b0 = CONCAT44(0x8de522,(undefined4)local_b0);
    FUN_009e6a80();
    local_b0._4_4_ = local_7c;
  }
  local_b0 = CONCAT44(local_b0._4_4_,&UNK_008de750);
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

