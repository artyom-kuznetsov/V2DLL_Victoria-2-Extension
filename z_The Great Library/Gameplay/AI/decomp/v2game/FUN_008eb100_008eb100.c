// FUN_008eb100 @ 008eb100 body=[[008eb100, 008eb1c2] [008eb1c6, 008eb2c3] [008eb2c7, 008eb2f0] [008eb2f4, 008eb31a] [008eb31e, 008eb354] [008eb358, 008eb373] [008eb377, 008eb391] [008eb395, 008eb3af] [008eb3b3, 008eb4aa] [008eb4ae, 008eb4d4] [008eb4d8, 008eb501] [008eb505, 008eb53e] [008eb542, 008eb55d] [008eb561, 008eb57b] [008eb57f, 008eb599] [008eb59d, 008eb5bd] [008eb5c1, 008eb5d5]]


undefined4 FUN_008eb100(undefined4 param_1,int param_2,char param_3)

{
  int iVar1;
  int in_ECX;
  undefined8 local_108;
  undefined4 local_f4 [5];
  uint local_e0;
  uint local_d8;
  undefined4 local_c8;
  uint local_c4;
  uint local_bc;
  undefined4 local_ac;
  uint local_a8;
  undefined4 local_a0;
  undefined1 *local_9c;
  uint local_98;
  undefined4 local_88;
  uint local_84;
  uint local_7c [4];
  undefined4 local_6c;
  uint local_68;
  uint local_60 [4];
  undefined4 local_50;
  uint local_4c;
  uint local_44 [4];
  undefined4 local_34;
  uint local_30;
  undefined4 local_28;
  undefined1 local_24 [4];
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b858a0;
  local_10 = ExceptionList;
  local_9c = (undefined1 *)&local_108;
  local_28 = 0;
  local_108 = CONCAT44(1,*(undefined4 *)(in_ECX + 0x1c));
  ExceptionList = &local_10;
  FUN_00988a50();
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  if (*(char *)(in_ECX + 0x18) == '\0') {
    if (*(char *)(in_ECX + 0x19) == '\0') goto LAB_008eb1c6;
    local_a0 = *(undefined4 *)(param_2 + 0x2c);
    local_9c = *(undefined1 **)(param_2 + 0x30);
    local_108 = CONCAT44(0x8eb19a,(undefined4)local_108);
    FUN_0055dd40();
    local_8._0_1_ = 3;
  }
  else {
    local_108 = CONCAT44(0x8eb15e,(undefined4)local_108);
    FUN_008a8dc0();
    local_108 = CONCAT44(0x8eb169,(undefined4)local_108);
    FUN_0055dd40();
    local_8._0_1_ = 2;
  }
  local_108 = 0xffffffff00000000;
  FUN_00408ed0();
  local_8._0_1_ = 1;
  if (0xf < local_84) {
    local_108 = CONCAT44(local_98,&UNK_008eb1c3);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
LAB_008eb1c6:
  local_8._0_1_ = 1;
  local_108 = 0x300dfc7b4;
  if (param_3 == '\0') {
    local_68 = 0xf;
    local_6c = 0;
    local_7c[0] = local_7c[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0xc;
    local_108 = 0x200df963c;
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = local_44[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0xd;
    local_108 = 0x1d00e2e8a4;
    local_4c = 0xf;
    local_50 = 0;
    local_60[0] = local_60[0] & 0xffffff00;
    FUN_00409350();
    local_108 = CONCAT44(local_60,local_24);
    local_8._0_1_ = 0xe;
    FUN_009a8ee0();
    local_8._0_1_ = 0xf;
    local_108 = CONCAT44(0x8eb42a,(undefined4)local_108);
    iVar1 = FUN_00475500();
    local_108 = *(undefined8 *)(iVar1 + 0x74);
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c));
    local_8._0_1_ = 0x10;
    local_108 = CONCAT44(local_44,0x8eb464);
    FUN_00988f20();
    local_8._0_1_ = 0x11;
    local_108 = CONCAT44(local_f4,0x8eb47c);
    FUN_00988f20();
    local_8._0_1_ = 0x12;
    local_108 = CONCAT44(local_7c,0x8eb48e);
    FUN_00988f20();
    local_28 = 1;
    if (0xf < local_84) {
      local_108 = CONCAT44(local_98,&UNK_008eb4ab);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_84 = 0xf;
    local_88 = 0;
    local_98 = local_98 & 0xffffff00;
    if (0xf < local_c4) {
      local_108 = CONCAT44(local_d8,&UNK_008eb4d5);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_c4 = 0xf;
    local_c8 = 0;
    local_d8 = local_d8 & 0xffffff00;
    if (0xf < local_a8) {
      local_108 = CONCAT44(local_bc,&UNK_008eb502);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_a8 = 0xf;
    local_ac = 0;
    local_bc = local_bc & 0xffffff00;
    local_8 = CONCAT31(local_8._1_3_,0x13);
    local_108 = CONCAT44(0x8eb527,(undefined4)local_108);
    FUN_009adb70();
    if (local_20 != 0) {
      local_108 = CONCAT44(0x8eb536,(undefined4)local_108);
      FUN_009e6a80();
      local_108 = CONCAT44(local_20,&UNK_008eb53f);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    if (0xf < local_4c) {
      local_108 = CONCAT44(local_60[0],&UNK_008eb55e);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_4c = 0xf;
    local_50 = 0;
    local_60[0] = local_60[0] & 0xffffff00;
    if (0xf < local_30) {
      local_108 = CONCAT44(local_44[0],&UNK_008eb57c);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = local_44[0] & 0xffffff00;
    if (0xf < local_68) {
      local_108 = CONCAT44(local_7c[0],&UNK_008eb59a);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_7c[0] = local_7c[0] & 0xffffff00;
  }
  else {
    local_4c = 0xf;
    local_50 = 0;
    local_60[0] = local_60[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 4;
    local_108 = 0x200df963c;
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = local_44[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 5;
    local_108 = 0x1d00e2e884;
    local_68 = 0xf;
    local_6c = 0;
    local_7c[0] = local_7c[0] & 0xffffff00;
    FUN_00409350();
    local_108 = CONCAT44(local_7c,local_24);
    local_8._0_1_ = 6;
    FUN_009a8ee0();
    local_8._0_1_ = 7;
    local_108 = CONCAT44(0x8eb240,(undefined4)local_108);
    iVar1 = FUN_00475500();
    local_108 = *(undefined8 *)(iVar1 + 0x74);
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c));
    local_8._0_1_ = 8;
    local_108 = CONCAT44(local_44,0x8eb27a);
    FUN_00988f20();
    local_8._0_1_ = 9;
    local_108 = CONCAT44(local_f4,0x8eb292);
    FUN_00988f20();
    local_8._0_1_ = 10;
    local_108 = CONCAT44(local_60,0x8eb2a4);
    FUN_00988f20();
    local_28 = 1;
    if (0xf < local_a8) {
      local_108 = CONCAT44(local_bc,&UNK_008eb2c4);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_a8 = 0xf;
    local_ac = 0;
    local_bc = local_bc & 0xffffff00;
    if (0xf < local_c4) {
      local_108 = CONCAT44(local_d8,&UNK_008eb2f1);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_c4 = 0xf;
    local_c8 = 0;
    local_d8 = local_d8 & 0xffffff00;
    if (0xf < local_84) {
      local_108 = CONCAT44(local_98,&UNK_008eb31b);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_84 = 0xf;
    local_88 = 0;
    local_98 = local_98 & 0xffffff00;
    local_8 = CONCAT31(local_8._1_3_,0xb);
    local_108 = CONCAT44(0x8eb33d,(undefined4)local_108);
    FUN_009adb70();
    if (local_20 != 0) {
      local_108 = CONCAT44(0x8eb34c,(undefined4)local_108);
      FUN_009e6a80();
      local_108 = CONCAT44(local_20,&UNK_008eb355);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    if (0xf < local_68) {
      local_108 = CONCAT44(local_7c[0],&UNK_008eb374);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_68 = 0xf;
    local_6c = 0;
    local_7c[0] = local_7c[0] & 0xffffff00;
    if (0xf < local_30) {
      local_108 = CONCAT44(local_44[0],&UNK_008eb392);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = local_44[0] & 0xffffff00;
    if (0xf < local_4c) {
      local_108 = CONCAT44(local_60[0],&UNK_008eb3b0);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_60[0] = local_60[0] & 0xffffff00;
  }
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  local_30 = 0xf;
  local_34 = 0;
  local_4c = 0xf;
  local_50 = 0;
  local_68 = 0xf;
  local_6c = 0;
  if (0xf < local_e0) {
    local_108 = CONCAT44(local_f4[0],&UNK_008eb5be);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

