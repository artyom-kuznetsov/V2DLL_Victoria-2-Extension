// FUN_008fe710 @ 008fe710 body=[[008fe710, 008fe780] [008fe784, 008fe83f] [008fe843, 008fe860] [008fe864, 008fe908] [008fe90c, 008fe9be] [008fe9c2, 008fe9dc] [008fe9e0, 008fea35] [008fea39, 008fea4d]]


undefined4 FUN_008fe710(undefined4 param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_9c;
  uint local_88 [4];
  undefined4 local_78;
  uint local_74;
  uint local_6c [4];
  undefined4 local_5c;
  uint local_58;
  uint local_50;
  undefined1 local_48 [4];
  int local_44;
  undefined4 local_40;
  uint local_3c;
  uint local_34;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  uint local_20;
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b65629;
  local_10 = ExceptionList;
  local_18 = 0;
  if ((char)param_3 == '\0') {
    local_9c = 0x1e00e2f310;
    local_74 = 0xf;
    local_78 = 0;
    local_88[0] = local_88[0] & 0xffffff00;
    ExceptionList = &local_10;
    FUN_00409350();
    local_9c = CONCAT44(local_88,local_48);
    local_8 = 8;
    FUN_009a8ee0();
    local_8._0_1_ = 10;
    if (0xf < local_74) {
      local_9c = CONCAT44(local_88[0],&UNK_008fe909);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_9c = 0x300df7e90;
    local_74 = 0xf;
    local_78 = 0;
    local_88[0] = local_88[0] & 0xffffff00;
    local_58 = 0xf;
    local_5c = 0;
    local_6c[0] = local_6c[0] & 0xffffff00;
    FUN_00409350();
    param_3 = &local_9c;
    local_9c._4_4_ = 2;
    local_8._0_1_ = 0xb;
    uVar3 = __allmul(*(int *)(local_14 + 0x1c),*(int *)(local_14 + 0x1c) >> 0x1f,100000,0);
    uVar1 = __alldiv(uVar3,1000,0);
    local_9c = CONCAT44(local_9c._4_4_,uVar1);
    uVar1 = FUN_00988a50();
    local_8._0_1_ = 0xc;
    local_9c = 0x40008fe975;
    param_3 = (undefined8 *)FUN_00aae9af();
    local_8._0_1_ = 0xd;
    if (param_3 == (undefined8 *)0x0) {
      param_3 = (undefined8 *)0x0;
    }
    else {
      local_9c = CONCAT44(uVar1,local_48);
      param_3 = (undefined8 *)FUN_009a9ce0();
    }
    local_8._0_1_ = 0xc;
    local_9c = CONCAT44(&param_3,local_6c);
    FUN_009e6810();
    if (0xf < local_20) {
      local_9c = CONCAT44(local_34,&UNK_008fe9bf);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = CONCAT31(local_8._1_3_,10);
    local_20 = 0xf;
    local_24 = 0;
    local_34 = local_34 & 0xffffff00;
    if (0xf < local_58) {
      local_9c = CONCAT44(local_6c[0],&UNK_008fe9dd);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_9c = CONCAT44(0x8fe9e5,(undefined4)local_9c);
    iVar2 = FUN_00475500();
    local_9c = *(undefined8 *)(iVar2 + 0x74);
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c));
    local_18 = 1;
    local_8 = 0xe;
    local_9c = CONCAT44(0x8fea1e,(undefined4)local_9c);
    FUN_009adb70();
    if (local_44 == 0) {
      ExceptionList = local_10;
      return param_1;
    }
    local_9c = CONCAT44(0x8fea2d,(undefined4)local_9c);
    FUN_009e6a80();
    local_9c._4_4_ = local_44;
  }
  else {
    local_9c = 0x2200e2f2ec;
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
      local_9c = CONCAT44(local_6c[0],&UNK_008fe781);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_9c = 0x300df7e90;
    local_58 = 0xf;
    local_5c = 0;
    local_6c[0] = local_6c[0] & 0xffffff00;
    local_74 = 0xf;
    local_78 = 0;
    local_88[0] = local_88[0] & 0xffffff00;
    FUN_00409350();
    param_3 = &local_9c;
    local_9c._4_4_ = 2;
    local_8._0_1_ = 4;
    uVar3 = __allmul(*(int *)(local_14 + 0x1c),*(int *)(local_14 + 0x1c) >> 0x1f,100000,0);
    uVar1 = __alldiv(uVar3,1000,0);
    local_9c = CONCAT44(local_9c._4_4_,uVar1);
    uVar1 = FUN_00988a50();
    local_8._0_1_ = 5;
    local_9c = 0x40008fe7f0;
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
      local_9c = CONCAT44(local_50,&UNK_008fe840);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = CONCAT31(local_8._1_3_,3);
    local_3c = 0xf;
    local_40 = 0;
    local_50 = local_50 & 0xffffff00;
    if (0xf < local_74) {
      local_9c = CONCAT44(local_88[0],&UNK_008fe861);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_9c = CONCAT44(0x8fe869,(undefined4)local_9c);
    iVar2 = FUN_00475500();
    local_9c = *(undefined8 *)(iVar2 + 0x74);
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c));
    local_18 = 1;
    local_8 = 7;
    local_9c = CONCAT44(0x8fe8a2,(undefined4)local_9c);
    FUN_009adb70();
    if (local_28 == 0) {
      ExceptionList = local_10;
      return param_1;
    }
    local_9c = CONCAT44(0x8fe8b5,(undefined4)local_9c);
    FUN_009e6a80();
    local_9c._4_4_ = local_28;
  }
  local_9c = CONCAT44(local_9c._4_4_,&UNK_008fea36);
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

