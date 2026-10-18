// FUN_009652f0 @ 009652f0 body=[[009652f0, 0096541b] [0096541f, 00965441] [00965445, 00965464] [00965468, 00965487] [0096548b, 009654b4] [009654b8, 00965707] [0096570b, 0096572b] [0096572f, 009657e1] [009657e5, 00965800] [00965804, 00965837] [0096583b, 00965855] [00965859, 0096586d]]


undefined1 * FUN_009652f0(undefined1 *param_1,char param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint in_ECX;
  undefined8 uVar4;
  undefined8 local_c4;
  undefined4 local_b0 [5];
  uint local_9c;
  undefined4 local_94;
  undefined4 local_90;
  uint local_8c [4];
  undefined4 local_7c;
  uint local_78;
  int local_70;
  uint local_6c [4];
  undefined4 local_5c;
  uint local_58;
  uint local_50;
  undefined4 local_40;
  uint local_3c;
  uint local_34 [2];
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  uint local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b64707;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  local_8 = 0;
  local_94 = 1;
  if (*(char *)(*(int *)(in_ECX + 0x68) + 0x42) == '\0') {
    local_78 = 0xf;
    local_c4 = 0x1000e362fc;
    local_7c = 0;
    local_8c[0] = local_8c[0] & 0xffffff00;
    FUN_00409350();
    local_c4 = CONCAT44(local_8c,local_2c);
    local_8 = 0x12;
    FUN_009a8ee0();
    local_8._0_1_ = 0x13;
    local_c4 = CONCAT44(0x965787,(undefined4)local_c4);
    iVar2 = FUN_00475500();
    local_c4 = *(undefined8 *)(iVar2 + 0x74);
    uVar3 = FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c));
    local_8._0_1_ = 0x14;
    local_c4 = CONCAT44(uVar3,0x9657bb);
    FUN_00988fa0();
    local_c4 = 0xffffffff00000000;
    local_8._0_1_ = 0x15;
    FUN_00448aa0();
    if (0xf < local_58) {
      local_c4 = CONCAT44(local_6c[0],&UNK_009657e2);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_58 = 0xf;
    local_5c = 0;
    local_6c[0] = local_6c[0] & 0xffffff00;
    if (0xf < local_3c) {
      local_c4 = CONCAT44(local_50,&UNK_00965801);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = CONCAT31(local_8._1_3_,0x16);
  }
  else {
    local_c4 = (ulonglong)in_ECX;
    local_70 = FUN_00965870();
    local_70 = local_70 * 1000;
    local_c4 = 0x96535e;
    iVar2 = FUN_00965930();
    iVar2 = iVar2 * 1000;
    local_14 = (undefined1 *)((int)&local_c4 + 4);
    local_c4 = CONCAT44(local_70,local_b0);
    local_90 = FUN_00988970();
    local_14 = (undefined1 *)((int)&local_c4 + 4);
    local_8 = 1;
    local_c4 = CONCAT44(iVar2,local_6c);
    local_14 = (undefined1 *)FUN_00988970();
    local_8._0_1_ = 2;
    local_c4 = CONCAT44(2,*(undefined4 *)(in_ECX + 0x58));
    uVar3 = FUN_009c9e20();
    local_8._0_1_ = 3;
    uVar3 = FUN_0043e9a0(local_34,&DAT_00df7e90,uVar3,"CURRENT",local_14,"ALLOWED",local_90);
    local_8._0_1_ = 4;
    FUN_00988fa0(uVar3);
    local_c4 = 0xffffffff00000000;
    local_8._0_1_ = 5;
    FUN_00448aa0();
    if (0xf < local_78) {
      local_c4 = CONCAT44(local_8c[0],&UNK_0096541c);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_78 = 0xf;
    local_7c = 0;
    uVar1 = local_8c[0] >> 8;
    local_8c[0] = uVar1 << 8;
    if (0xf < local_20) {
      local_c4 = CONCAT44(local_34[0],&UNK_00965442);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    if (0xf < local_3c) {
      local_c4 = CONCAT44(local_50,&UNK_00965465);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_3c = 0xf;
    local_40 = 0;
    local_50 = local_50 & 0xffffff00;
    if (0xf < local_58) {
      local_c4 = CONCAT44(local_6c[0],&UNK_00965488);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_58 = 0xf;
    local_5c = 0;
    local_6c[0] = local_6c[0] & 0xffffff00;
    if (0xf < local_9c) {
      local_c4 = CONCAT44(local_b0[0],&UNK_009654b5);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (param_2 == '\0') {
      ExceptionList = local_10;
      return param_1;
    }
    if ((0 < local_70) && (0 < iVar2)) {
      if (iVar2 == 0) {
        iVar2 = -1;
      }
      else if (local_70 + 0x189373U < 0x39580e) {
        iVar2 = (local_70 * 1000) / iVar2;
      }
      else {
        local_c4 = 1000;
        local_14 = (undefined1 *)(iVar2 >> 0x1f);
        uVar4 = __allmul(local_70,local_70 >> 0x1f);
        local_c4 = CONCAT44(local_14,iVar2);
        iVar2 = __alldiv(uVar4);
        local_14 = (undefined1 *)(iVar2 >> 0x1f);
      }
      if (999 < iVar2) {
        local_c4 = CONCAT44(0x96553b,(undefined4)local_c4);
        FUN_009885d0();
        local_c4 = CONCAT44(local_b0,local_2c);
        local_8 = 6;
        FUN_009a8ee0();
        local_8._0_1_ = 7;
        local_c4 = CONCAT44(0x965559,(undefined4)local_c4);
        iVar2 = FUN_00475500();
        local_c4 = *(undefined8 *)(iVar2 + 0x74);
        uVar3 = FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c));
        local_8._0_1_ = 8;
        local_c4 = CONCAT44(uVar3,0x96558d);
        FUN_00988fa0();
        local_c4 = 0xffffffff00000000;
        local_8._0_1_ = 9;
        FUN_00448aa0();
        local_c4 = CONCAT44(0x9655a8,(undefined4)local_c4);
        FUN_00408ad0();
        local_c4 = CONCAT44(0x9655af,(undefined4)local_c4);
        FUN_00408ad0();
        local_8 = CONCAT31(local_8._1_3_,6);
        local_c4 = CONCAT44(local_2c,0x9655bc);
        FUN_009a9740();
        local_c4 = CONCAT44(0x9655c7,(undefined4)local_c4);
        FUN_00408ad0();
        ExceptionList = local_10;
        return param_1;
      }
      local_c4._4_4_ = 0;
      uVar4 = __allmul(iVar2,iVar2 >> 0x1f,100000,0);
      uVar3 = __alldiv(uVar4,1000,0);
      local_c4 = CONCAT44(local_c4._4_4_,uVar3);
      uVar3 = FUN_00988a50();
      local_c4 = CONCAT44(uVar3,local_6c);
      local_8 = 10;
      FUN_0042c180();
      local_8._0_1_ = 0xb;
      FUN_00988fa0();
      local_c4 = 0xffffffff00000000;
      local_8 = CONCAT31(local_8._1_3_,0xc);
      FUN_00448aa0();
      local_c4 = CONCAT44(0x965650,(undefined4)local_c4);
      FUN_00408ad0();
      local_c4 = CONCAT44(0x965658,(undefined4)local_c4);
      FUN_00408ad0();
      local_c4 = CONCAT44(0x965660,(undefined4)local_c4);
      FUN_00408ad0();
      ExceptionList = local_10;
      return param_1;
    }
    local_c4 = 0x1500e362e4;
    local_78 = 0xf;
    local_7c = 0;
    local_8c[0] = uVar1 << 8;
    FUN_00409350();
    local_c4 = CONCAT44(local_8c,local_2c);
    local_8 = 0xd;
    FUN_009a8ee0();
    local_8._0_1_ = 0xe;
    local_c4 = CONCAT44(0x9656ae,(undefined4)local_c4);
    iVar2 = FUN_00475500();
    local_c4 = *(undefined8 *)(iVar2 + 0x74);
    uVar3 = FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c));
    local_8._0_1_ = 0xf;
    local_c4 = CONCAT44(uVar3,0x9656e2);
    FUN_00988fa0();
    local_c4 = 0xffffffff00000000;
    local_8._0_1_ = 0x10;
    FUN_00448aa0();
    if (0xf < local_58) {
      local_c4 = CONCAT44(local_6c[0],&UNK_00965708);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_58 = 0xf;
    local_5c = 0;
    local_6c[0] = local_6c[0] & 0xffffff00;
    if (0xf < local_3c) {
      local_c4 = CONCAT44(local_50,&UNK_0096572c);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = CONCAT31(local_8._1_3_,0x11);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50 = local_50 & 0xffffff00;
  local_58 = 0xf;
  local_5c = 0;
  local_c4 = CONCAT44(0x96581e,(undefined4)local_c4);
  FUN_009adb70();
  if (local_28 != 0) {
    local_c4 = CONCAT44(0x96582f,(undefined4)local_c4);
    FUN_009e6a80();
    local_c4 = CONCAT44(local_28,&UNK_00965838);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  if (local_78 < 0x10) {
    ExceptionList = local_10;
    return param_1;
  }
  local_c4 = CONCAT44(local_8c[0],&UNK_00965856);
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

