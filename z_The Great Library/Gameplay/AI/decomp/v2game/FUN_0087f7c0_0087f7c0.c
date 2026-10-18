// FUN_0087f7c0 @ 0087f7c0 body=[[0087f7c0, 0087f84f] [0087f853, 0087f8a3] [0087f8a7, 0087f9e4] [0087f9e8, 0087fa09] [0087fa0d, 0087fa37] [0087fa3b, 0087fa60] [0087fa64, 0087fa83] [0087fa87, 0087faa1] [0087faa5, 0087fbd6] [0087fbda, 0087fbfb] [0087fbff, 0087fc29] [0087fc2d, 0087fc52] [0087fc56, 0087fc75] [0087fc79, 0087fc93] [0087fc97, 0087fcf1] [0087fcf5, 0087fd1c] [0087fd20, 0087fd40] [0087fd44, 0087fd8b] [0087fd8f, 0087fecc] [0087fed0, 0087fef1] [0087fef5, 0087ff1f] [0087ff23, 0087ff48] [0087ff4c, 0087ff6b] [0087ff6f, 0087ff89] [0087ff8d, 0087fff6] [0087fffa, 00880017] [0088001b, 0088002f]]


undefined1 * FUN_0087f7c0(undefined1 *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int *in_ECX;
  uint in_stack_00000020;
  undefined1 local_118 [24];
  uint local_100;
  undefined4 local_f0;
  uint local_ec;
  uint local_e4;
  undefined4 local_d4;
  uint local_d0;
  uint local_c8;
  undefined4 local_b8;
  uint local_b4;
  undefined1 local_ac [4];
  int local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  uint local_98 [4];
  undefined4 local_88;
  uint local_84;
  uint local_7c;
  undefined4 local_6c;
  uint local_68;
  uint local_60 [4];
  undefined4 local_50;
  uint local_4c;
  undefined4 *local_44;
  uint local_40 [4];
  undefined4 local_30;
  uint local_2c;
  undefined1 local_24 [4];
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b887a3;
  local_10 = ExceptionList;
  local_44 = (undefined4 *)0x0;
  local_8 = 0;
  ExceptionList = &local_10;
  (**(code **)(*in_ECX + 0x28))(local_98,param_2);
  local_8._0_1_ = 1;
  local_4c = 0xf;
  local_50 = 0;
  local_60[0] = local_60[0] & 0xffffff00;
  FUN_00409350(&DAT_00ded94d,0);
  local_8._0_1_ = 2;
  cVar2 = FUN_00416db0();
  param_2 = (undefined4 *)CONCAT13(cVar2 == '\0',param_2._0_3_);
  local_8._0_1_ = 1;
  uVar1 = (undefined1)local_8;
  local_8._0_1_ = 1;
  if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (cVar2 != '\0') {
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    local_8._0_1_ = uVar1;
    FUN_00409350(&DAT_00ded94d,0);
    if (0xf < local_84) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_84 = 0xf;
    local_88 = 0;
    local_98[0] = local_98[0] & 0xffffff00;
    if (0xf < in_stack_00000020) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    ExceptionList = local_10;
    return param_1;
  }
  local_4c = 0xf;
  local_50 = 0;
  local_60[0] = local_60[0] & 0xffffff00;
  if (in_ECX[10] == 0) {
    local_8._0_1_ = uVar1;
    FUN_00409350("LOSE_CORE_EFFECT",0x10);
    local_8._0_1_ = 0x1b;
    FUN_009a8ee0(local_118,local_60);
    local_8._0_1_ = 0x1d;
    if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_4c = 0xf;
    local_50 = 0;
    local_60[0] = local_60[0] & 0xffffff00;
    local_68 = 0xf;
    local_6c = 0;
    local_7c = local_7c & 0xffffff00;
    FUN_00409350(&DAT_00df8514,2);
    local_8._0_1_ = 0x1e;
    local_2c = 0xf;
    local_30 = 0;
    local_40[0] = local_40[0] & 0xffffff00;
    FUN_00409350(&DAT_00e29bb4,4);
    local_8._0_1_ = 0x1f;
    FUN_00988fa0();
    local_8._0_1_ = 0x20;
    FUN_00988f20();
    local_8._0_1_ = 0x21;
    uVar3 = FUN_00988f20();
    local_8._0_1_ = 0x22;
    puVar4 = (undefined4 *)FUN_009a8ee0(local_24,uVar3);
    local_8._0_1_ = 0x23;
    puVar5 = (undefined4 *)FUN_00aae9af();
    local_8._0_1_ = 0x24;
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5[1] = local_118;
      *puVar5 = &PTR_FUN_00e38ecc;
      puVar5[7] = 0xf;
      puVar5[6] = 0;
      *(undefined1 *)(puVar5 + 2) = 0;
      param_2 = puVar5;
      FUN_00408ed0();
      *puVar5 = &PTR_FUN_00e38f08;
      local_44 = puVar5 + 9;
      *local_44 = *puVar4;
      puVar5[10] = 0;
      puVar5[0xb] = 0;
      puVar5[0xc] = 0;
      local_8._0_1_ = 0x26;
      FUN_009a97b0();
    }
    local_8._0_1_ = 0x23;
    param_2 = puVar5;
    FUN_009e6810(local_40,&param_2);
    local_8._0_1_ = 0x27;
    FUN_009adb70();
    if (local_20 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    if (0xf < local_d0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_d0 = 0xf;
    local_d4 = 0;
    local_e4 = local_e4 & 0xffffff00;
    if (0xf < local_ec) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_ec = 0xf;
    local_f0 = 0;
    local_100 = local_100 & 0xffffff00;
    if (0xf < local_b4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_b4 = 0xf;
    local_b8 = 0;
    local_c8 = local_c8 & 0xffffff00;
    if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 0x1d;
    local_2c = 0xf;
    local_30 = 0;
    local_40[0] = local_40[0] & 0xffffff00;
    if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    iVar6 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar6 + 0x6c),*(undefined8 *)(iVar6 + 0x74));
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_009a9740();
  }
  else {
    FUN_00409350("LOSE_CORE_EFFECT_2",0x12);
    local_8._0_1_ = 3;
    FUN_009a8ee0(local_ac,local_60);
    local_8._0_1_ = 5;
    if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_4c = 0xf;
    local_50 = 0;
    local_60[0] = local_60[0] & 0xffffff00;
    local_68 = 0xf;
    local_6c = 0;
    local_7c = local_7c & 0xffffff00;
    FUN_00409350(&DAT_00df8514,2);
    local_8._0_1_ = 6;
    local_2c = 0xf;
    local_30 = 0;
    local_40[0] = local_40[0] & 0xffffff00;
    FUN_00409350(&DAT_00e29bb4,4);
    local_8._0_1_ = 7;
    FUN_00988fa0();
    local_8._0_1_ = 8;
    FUN_00988f20();
    local_8._0_1_ = 9;
    uVar3 = FUN_00988f20();
    local_8._0_1_ = 10;
    puVar4 = (undefined4 *)FUN_009a8ee0(local_24,uVar3);
    local_8._0_1_ = 0xb;
    puVar5 = (undefined4 *)FUN_00aae9af();
    local_8._0_1_ = 0xc;
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5[1] = local_ac;
      *puVar5 = &PTR_FUN_00e38ecc;
      puVar5[7] = 0xf;
      puVar5[6] = 0;
      *(undefined1 *)(puVar5 + 2) = 0;
      param_2 = puVar5;
      FUN_00408ed0();
      *puVar5 = &PTR_FUN_00e38f08;
      local_44 = puVar5 + 9;
      *local_44 = *puVar4;
      puVar5[10] = 0;
      puVar5[0xb] = 0;
      puVar5[0xc] = 0;
      local_8._0_1_ = 0xe;
      FUN_009a97b0();
    }
    local_8._0_1_ = 0xb;
    param_2 = puVar5;
    FUN_009e6810(local_40,&param_2);
    local_8._0_1_ = 0xf;
    FUN_009adb70();
    if (local_20 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    if (0xf < local_b4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_b4 = 0xf;
    local_b8 = 0;
    local_c8 = local_c8 & 0xffffff00;
    if (0xf < local_ec) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_ec = 0xf;
    local_f0 = 0;
    local_100 = local_100 & 0xffffff00;
    if (0xf < local_d0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_d0 = 0xf;
    local_d4 = 0;
    local_e4 = local_e4 & 0xffffff00;
    if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 5;
    local_2c = 0xf;
    local_30 = 0;
    local_40[0] = local_40[0] & 0xffffff00;
    if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_68 = 0xf;
    local_6c = 0;
    local_7c = local_7c & 0xffffff00;
    FUN_00409350(&DAT_00df8514,2);
    local_8._0_1_ = 0x10;
    local_2c = 0xf;
    local_30 = 0;
    local_40[0] = local_40[0] & 0xffffff00;
    FUN_00409350(&DAT_00e156c4,3);
    local_8._0_1_ = 0x11;
    FUN_0055dd40();
    local_8._0_1_ = 0x12;
    FUN_00988fa0();
    local_8._0_1_ = 0x13;
    uVar3 = FUN_00988f20();
    local_8._0_1_ = 0x14;
    puVar4 = (undefined4 *)FUN_009a8ee0(local_24,uVar3);
    local_8._0_1_ = 0x15;
    puVar5 = (undefined4 *)FUN_00aae9af();
    local_8._0_1_ = 0x16;
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      *puVar5 = &PTR_FUN_00e38ecc;
      puVar5[1] = local_ac;
      puVar5[7] = 0xf;
      puVar5[6] = 0;
      *(undefined1 *)(puVar5 + 2) = 0;
      param_2 = puVar5;
      FUN_00408ed0();
      *puVar5 = &PTR_FUN_00e38f08;
      local_44 = puVar5 + 9;
      *local_44 = *puVar4;
      puVar5[10] = 0;
      puVar5[0xb] = 0;
      puVar5[0xc] = 0;
      local_8._0_1_ = 0x18;
      FUN_009a97b0();
    }
    local_8._0_1_ = 0x15;
    param_2 = puVar5;
    FUN_009e6810(local_40,&param_2);
    local_8._0_1_ = 0x19;
    FUN_009adb70();
    if (local_20 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    if (0xf < local_d0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_d0 = 0xf;
    local_d4 = 0;
    local_e4 = local_e4 & 0xffffff00;
    if (0xf < local_ec) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_ec = 0xf;
    local_f0 = 0;
    local_100 = local_100 & 0xffffff00;
    if (0xf < local_b4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_b4 = 0xf;
    local_b8 = 0;
    local_c8 = local_c8 & 0xffffff00;
    if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 5;
    local_2c = 0xf;
    local_30 = 0;
    local_40[0] = local_40[0] & 0xffffff00;
    if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    iVar6 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar6 + 0x6c),*(undefined8 *)(iVar6 + 0x74));
    local_8 = CONCAT31(local_8._1_3_,0x1a);
    FUN_009adb70();
    if (local_a8 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_a8 = 0;
    local_a4 = 0;
    local_a0 = 0;
  }
  if (0xf < local_84) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_84 = 0xf;
  local_88 = 0;
  local_98[0] = local_98[0] & 0xffffff00;
  if (0xf < in_stack_00000020) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

