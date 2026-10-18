// FUN_008ca3f0 @ 008ca3f0 body=[[008ca3f0, 008ca497] [008ca49d, 008ca4e7] [008ca4eb, 008ca5f3] [008ca5f7, 008ca61c] [008ca620, 008ca63f] [008ca643, 008ca66f] [008ca673, 008ca691] [008ca695, 008ca6b6] [008ca6ba, 008ca6d0] [008ca6d4, 008ca79b] [008ca79f, 008ca7ca] [008ca7d3, 008ca8c0] [008ca8c4, 008ca8e0] [008ca8e4, 008ca909] [008ca90d, 008ca942] [008ca946, 008ca961] [008ca965, 008ca980] [008ca984, 008ca99d] [008ca9a1, 008ca9c3] [008ca9c7, 008ca9dc]]


undefined4 FUN_008ca3f0(undefined4 param_1,int param_2,char param_3)

{
  undefined1 uVar1;
  int iVar2;
  int in_ECX;
  undefined8 local_10c;
  undefined4 local_f8 [5];
  uint local_e4;
  uint local_dc;
  undefined4 local_cc;
  uint local_c8;
  uint local_c0;
  undefined4 local_b0;
  uint local_ac;
  int local_a4;
  undefined4 local_a0;
  undefined1 *local_9c;
  uint local_98 [4];
  undefined4 local_88;
  uint local_84;
  uint local_7c;
  undefined4 local_6c;
  uint local_68;
  undefined4 local_60;
  undefined1 local_5c [4];
  int local_58;
  undefined4 local_54;
  undefined4 local_50;
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
  puStack_c = &LAB_00b8656c;
  local_10 = ExceptionList;
  local_60 = 0;
  local_10c = CONCAT44(0x8ca42c,(undefined4)local_10c);
  ExceptionList = &local_10;
  local_a4 = in_ECX;
  FUN_0055dd40();
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  if (((*(char *)(in_ECX + 0x1c) == 'R') && (*(char *)(in_ECX + 0x1d) == 'E')) &&
     (*(char *)(in_ECX + 0x1e) == 'B')) {
    local_9c = (undefined1 *)&local_10c;
    local_10c = *(undefined8 *)(param_2 + 0x38);
    iVar2 = FUN_009c16d0();
    if (iVar2 != 0) {
      local_10c = CONCAT44(iVar2,0x8ca472);
      FUN_0041a080();
      local_10c = 0xffffffff00000000;
      local_8._0_1_ = 2;
      FUN_00408ed0();
      local_8._0_1_ = 1;
      if (0xf < local_68) {
        local_10c = CONCAT44(local_7c,&UNK_008ca498);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
  }
  if (*(char *)(local_a4 + 0x18) == '\0') {
    if (*(char *)(local_a4 + 0x19) == '\0') {
      uVar1 = (undefined1)local_8;
      if (*(char *)(local_a4 + 0x24) != '\0') {
        local_10c = 0x900e2d81c;
        local_18 = 0xf;
        local_1c = 0;
        local_2c[0] = local_2c[0] & 0xffffff00;
        FUN_00409350();
        local_10c = CONCAT44(local_2c,local_5c);
        local_8._0_1_ = 5;
        FUN_009a8ee0();
        local_8._0_1_ = 6;
        local_10c = CONCAT44(0x8ca753,(undefined4)local_10c);
        iVar2 = FUN_00475500();
        local_10c = *(undefined8 *)(iVar2 + 0x74);
        FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c));
        local_10c = 0xffffffff00000000;
        local_8._0_1_ = 7;
        FUN_00408ed0();
        if (0xf < local_34) {
          local_10c = CONCAT44(local_48[0],&UNK_008ca79c);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_34 = 0xf;
        local_38 = 0;
        local_48[0] = local_48[0] & 0xffffff00;
        local_8._0_1_ = 5;
        local_10c = CONCAT44(local_5c,0x8ca7b5);
        FUN_009a9740();
        local_8._0_1_ = 1;
        uVar1 = (undefined1)local_8;
        local_8._0_1_ = 1;
        if (0xf < local_18) {
          local_10c = CONCAT44(local_2c[0],&UNK_008ca7cb);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      }
      goto LAB_008ca4f0;
    }
    local_9c = *(undefined1 **)(param_2 + 0x30);
    local_a0 = *(undefined4 *)(param_2 + 0x2c);
    local_10c = CONCAT44(0x8ca707,(undefined4)local_10c);
    FUN_0055dd40();
    local_8._0_1_ = 4;
  }
  else {
    local_10c = CONCAT44(0x8ca4ba,(undefined4)local_10c);
    FUN_008a8dc0();
    local_10c = CONCAT44(0x8ca4c2,(undefined4)local_10c);
    FUN_0055dd40();
    local_8._0_1_ = 3;
  }
  local_10c = 0xffffffff00000000;
  FUN_00408ed0();
  local_8._0_1_ = 1;
  uVar1 = (undefined1)local_8;
  if (0xf < local_68) {
    local_10c = CONCAT44(local_7c,&UNK_008ca4e8);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
LAB_008ca4f0:
  local_8._0_1_ = uVar1;
  local_10c = 0x300dfc7b4;
  if (param_3 == '\0') {
    local_84 = 0xf;
    local_88 = 0;
    local_98[0] = local_98[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0x10;
    local_10c = 0x200df963c;
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0x11;
    local_10c = 0xd00e2d80c;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350();
    local_10c = CONCAT44(local_2c,local_5c);
    local_8._0_1_ = 0x12;
    FUN_009a8ee0();
    local_8._0_1_ = 0x13;
    local_10c = CONCAT44(0x8ca842,(undefined4)local_10c);
    iVar2 = FUN_00475500();
    local_10c = *(undefined8 *)(iVar2 + 0x74);
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c));
    local_8._0_1_ = 0x14;
    local_10c = CONCAT44(local_48,0x8ca87d);
    FUN_00988f20();
    local_8._0_1_ = 0x15;
    local_10c = CONCAT44(local_f8,0x8ca892);
    FUN_00988f20();
    local_8._0_1_ = 0x16;
    local_10c = CONCAT44(local_98,0x8ca8a7);
    FUN_00988f20();
    local_60 = 1;
    if (0xf < local_68) {
      local_10c = CONCAT44(local_7c,&UNK_008ca8c1);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_68 = 0xf;
    local_6c = 0;
    local_7c = local_7c & 0xffffff00;
    if (0xf < local_c8) {
      local_10c = CONCAT44(local_dc,&UNK_008ca8e1);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_c8 = 0xf;
    local_cc = 0;
    local_dc = local_dc & 0xffffff00;
    if (0xf < local_ac) {
      local_10c = CONCAT44(local_c0,&UNK_008ca90a);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_ac = 0xf;
    local_b0 = 0;
    local_c0 = local_c0 & 0xffffff00;
    local_8 = CONCAT31(local_8._1_3_,0x17);
    local_10c = CONCAT44(0x8ca92b,(undefined4)local_10c);
    FUN_009adb70();
    if (local_58 != 0) {
      local_10c = CONCAT44(0x8ca93a,(undefined4)local_10c);
      FUN_009e6a80();
      local_10c = CONCAT44(local_58,&UNK_008ca943);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_58 = 0;
    local_54 = 0;
    local_50 = 0;
    if (0xf < local_18) {
      local_10c = CONCAT44(local_2c[0],&UNK_008ca962);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    if (0xf < local_34) {
      local_10c = CONCAT44(local_48[0],&UNK_008ca981);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    if (0xf < local_84) {
      local_10c = CONCAT44(local_98[0],&UNK_008ca99e);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_98[0] = local_98[0] & 0xffffff00;
  }
  else {
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 8;
    local_10c = 0x200df963c;
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 9;
    local_10c = 0x1100e2d7f8;
    local_84 = 0xf;
    local_88 = 0;
    local_98[0] = local_98[0] & 0xffffff00;
    FUN_00409350();
    local_10c = CONCAT44(local_98,local_5c);
    local_8._0_1_ = 10;
    FUN_009a8ee0();
    local_8._0_1_ = 0xb;
    local_10c = CONCAT44(0x8ca572,(undefined4)local_10c);
    iVar2 = FUN_00475500();
    local_10c = *(undefined8 *)(iVar2 + 0x74);
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c));
    local_8._0_1_ = 0xc;
    local_10c = CONCAT44(local_48,0x8ca5aa);
    FUN_00988f20();
    local_8._0_1_ = 0xd;
    local_10c = CONCAT44(local_f8,0x8ca5c2);
    FUN_00988f20();
    local_8._0_1_ = 0xe;
    local_10c = CONCAT44(local_2c,0x8ca5d4);
    FUN_00988f20();
    local_60 = 1;
    if (0xf < local_ac) {
      local_10c = CONCAT44(local_c0,&UNK_008ca5f4);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_ac = 0xf;
    local_b0 = 0;
    local_c0 = local_c0 & 0xffffff00;
    if (0xf < local_c8) {
      local_10c = CONCAT44(local_dc,&UNK_008ca61d);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_c8 = 0xf;
    local_cc = 0;
    local_dc = local_dc & 0xffffff00;
    if (0xf < local_68) {
      local_10c = CONCAT44(local_7c,&UNK_008ca640);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_68 = 0xf;
    local_6c = 0;
    local_7c = local_7c & 0xffffff00;
    local_8 = CONCAT31(local_8._1_3_,0xf);
    local_10c = CONCAT44(0x8ca658,(undefined4)local_10c);
    FUN_009adb70();
    if (local_58 != 0) {
      local_10c = CONCAT44(0x8ca667,(undefined4)local_10c);
      FUN_009e6a80();
      local_10c = CONCAT44(local_58,&UNK_008ca670);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_58 = 0;
    local_54 = 0;
    local_50 = 0;
    if (0xf < local_84) {
      local_10c = CONCAT44(local_98[0],&UNK_008ca692);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_84 = 0xf;
    local_88 = 0;
    local_98[0] = local_98[0] & 0xffffff00;
    if (0xf < local_34) {
      local_10c = CONCAT44(local_48[0],&UNK_008ca6b7);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    if (0xf < local_18) {
      local_10c = CONCAT44(local_2c[0],&UNK_008ca6d1);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_2c[0] = local_2c[0] & 0xffffff00;
  }
  local_18 = 0xf;
  local_1c = 0;
  local_34 = 0xf;
  local_38 = 0;
  local_50 = 0;
  local_54 = 0;
  local_58 = 0;
  local_84 = 0xf;
  local_88 = 0;
  if (local_e4 < 0x10) {
    ExceptionList = local_10;
    return param_1;
  }
  local_10c = CONCAT44(local_f8[0],&UNK_008ca9c4);
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

