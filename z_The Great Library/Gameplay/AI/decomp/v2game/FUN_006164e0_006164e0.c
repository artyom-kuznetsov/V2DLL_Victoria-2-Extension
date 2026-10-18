// FUN_006164e0 @ 006164e0  (requested 006164E0, first bytes: 55 8B EC 6A FF 68 1D 3D)


undefined1 * FUN_006164e0(undefined1 *param_1,int *param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  bool bVar6;
  uint local_12c [4];
  undefined4 local_11c;
  uint local_118;
  undefined4 local_110;
  uint local_10c;
  undefined4 local_fc;
  uint local_f8;
  uint local_f0;
  undefined4 local_e0;
  uint local_dc;
  uint local_d4;
  undefined4 local_c4;
  uint local_c0;
  uint local_b8;
  undefined4 local_a8;
  uint local_a4;
  uint local_9c;
  undefined4 local_8c;
  uint local_88;
  undefined1 *local_80;
  uint local_7c;
  undefined4 local_6c;
  uint local_68;
  uint local_60 [4];
  undefined4 local_50;
  uint local_4c;
  uint local_44 [4];
  undefined4 local_34;
  uint local_30;
  undefined1 local_28 [4];
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00bb3d1d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x10) = 0;
  local_80 = param_1 + 0x1c;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xf;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *local_80 = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0xf;
  *(undefined4 *)(param_1 + 0x48) = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  param_1[0x58] = 1;
  local_8 = 0;
  local_110 = 1;
  pbVar2 = (byte *)(**(code **)(*param_2 + 0x44))();
  if (0xf < *(uint *)(pbVar2 + 0x14)) {
    pbVar2 = *(byte **)pbVar2;
  }
  pcVar5 = "chance_info_icon";
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_00616580:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00616585;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_00616580;
    pbVar2 = pbVar2 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00616585:
  if (iVar3 != 0) {
    ExceptionList = local_10;
    return param_1;
  }
  local_118 = 0xf;
  local_11c = 0;
  local_12c[0] = local_12c[0] & 0xffffff00;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  iVar3 = *(int *)(local_14 + 0x6c);
  iVar3 = FUN_0083db20(iVar3,*(undefined4 *)(iVar3 + 0x10),*(undefined4 *)(iVar3 + 0x14),1,1,
                       local_12c,1);
  FUN_00408ed0();
  if (iVar3 != -1000) {
    iVar3 = iVar3 + -0x32;
    local_68 = 0xf;
    local_6c = 0;
    local_7c = local_7c & 0xffffff00;
    FUN_00409350(&DAT_00dfc7b4,3);
    local_8._0_1_ = 2;
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = local_44[0] & 0xffffff00;
    FUN_00409350(&DAT_00dfc938,4);
    local_8._0_1_ = 3;
    local_4c = 0xf;
    local_50 = 0;
    local_60[0] = local_60[0] & 0xffffff00;
    FUN_00409350("AIREASON_BASE_RELUCTANCE",0x18);
    local_8._0_1_ = 4;
    FUN_009888f0();
    local_8._0_1_ = 5;
    local_14 = FUN_009a8ee0(local_28,local_60);
    local_8._0_1_ = 6;
    iVar4 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
    local_8._0_1_ = 7;
    FUN_00988f20();
    local_8._0_1_ = 8;
    FUN_00988f20();
    local_8._0_1_ = 9;
    FUN_00988f20();
    local_8._0_1_ = 10;
    FUN_00448aa0();
    if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_88 = 0xf;
    local_8c = 0;
    local_9c = local_9c & 0xffffff00;
    if (0xf < local_a4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_a4 = 0xf;
    local_a8 = 0;
    local_b8 = local_b8 & 0xffffff00;
    if (0xf < local_c0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_c0 = 0xf;
    local_c4 = 0;
    local_d4 = local_d4 & 0xffffff00;
    if (0xf < local_f8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_f8 = 0xf;
    local_fc = 0;
    local_10c = local_10c & 0xffffff00;
    local_8._0_1_ = 0xb;
    FUN_009adb70();
    if (local_24 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    if (0xf < local_dc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_dc = 0xf;
    local_e0 = 0;
    local_f0 = local_f0 & 0xffffff00;
    if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_4c = 0xf;
    local_50 = 0;
    local_60[0] = local_60[0] & 0xffffff00;
    if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 1;
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = local_44[0] & 0xffffff00;
    if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  local_68 = 0xf;
  local_6c = 0;
  local_7c = local_7c & 0xffffff00;
  FUN_00409350(&DAT_00dfc7b4,3);
  if (iVar3 < 0) {
    local_8._0_1_ = 0xc;
    local_4c = 0xf;
    local_50 = 0;
    local_60[0] = (uint)local_60[0]._1_3_ << 8;
    FUN_00409350(&DAT_00dfc938,4);
    local_8._0_1_ = 0xd;
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = local_44[0] & 0xffffff00;
    FUN_00409350("AI_DIPLOMATIC_VALUE",0x13);
    local_8._0_1_ = 0xe;
    local_14 = FUN_009888f0();
    local_8._0_1_ = 0xf;
    FUN_009a8ee0(local_28,local_44);
    local_8._0_1_ = 0x10;
    iVar3 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c),*(undefined8 *)(iVar3 + 0x74));
    local_8._0_1_ = 0x11;
    FUN_00988f20();
    local_8._0_1_ = 0x12;
    FUN_00988f20();
    local_8._0_1_ = 0x13;
    FUN_00988f20();
    local_8._0_1_ = 0x14;
    FUN_00408ed0();
    if (0xf < local_dc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_dc = 0xf;
    local_e0 = 0;
    local_f0 = local_f0 & 0xffffff00;
    if (0xf < local_f8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_f8 = 0xf;
    local_fc = 0;
    local_10c = local_10c & 0xffffff00;
    if (0xf < local_c0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_c0 = 0xf;
    local_c4 = 0;
    local_d4 = local_d4 & 0xffffff00;
    if (0xf < local_a4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_a4 = 0xf;
    local_a8 = 0;
    local_b8 = local_b8 & 0xffffff00;
    local_8 = CONCAT31(local_8._1_3_,0x15);
    FUN_009adb70();
    if (local_24 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_88 = 0xf;
    local_8c = 0;
    local_9c = local_9c & 0xffffff00;
    if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = local_44[0] & 0xffffff00;
    if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  else {
    local_8._0_1_ = 0x16;
    local_4c = 0xf;
    local_50 = 0;
    local_60[0] = (uint)local_60[0]._1_3_ << 8;
    FUN_00409350(&DAT_00dfd73c,4);
    local_8._0_1_ = 0x17;
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = local_44[0] & 0xffffff00;
    FUN_00409350("AI_DIPLOMATIC_VALUE",0x13);
    local_8._0_1_ = 0x18;
    local_14 = FUN_009888f0();
    local_8._0_1_ = 0x19;
    FUN_009a8ee0(local_28,local_44);
    local_8._0_1_ = 0x1a;
    iVar3 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c),*(undefined8 *)(iVar3 + 0x74));
    local_8._0_1_ = 0x1b;
    FUN_00988f20();
    local_8._0_1_ = 0x1c;
    FUN_00988f20();
    local_8._0_1_ = 0x1d;
    FUN_00988f20();
    local_8._0_1_ = 0x1e;
    FUN_00408ed0();
    if (0xf < local_dc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_dc = 0xf;
    local_e0 = 0;
    local_f0 = local_f0 & 0xffffff00;
    if (0xf < local_f8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_f8 = 0xf;
    local_fc = 0;
    local_10c = local_10c & 0xffffff00;
    if (0xf < local_c0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_c0 = 0xf;
    local_c4 = 0;
    local_d4 = local_d4 & 0xffffff00;
    if (0xf < local_a4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_a4 = 0xf;
    local_a8 = 0;
    local_b8 = local_b8 & 0xffffff00;
    local_8 = CONCAT31(local_8._1_3_,0x1f);
    FUN_009adb70();
    if (local_24 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_88 = 0xf;
    local_8c = 0;
    local_9c = local_9c & 0xffffff00;
    if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = local_44[0] & 0xffffff00;
    if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  local_60[0] = local_60[0] & 0xffffff00;
  if (0xf < local_68) {
    local_1c = 0;
    local_20 = 0;
    local_24 = 0;
    local_30 = 0xf;
    local_34 = 0;
    local_4c = 0xf;
    local_50 = 0;
    local_88 = 0xf;
    local_8c = 0;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_30 = 0xf;
  local_34 = 0;
  local_4c = 0xf;
  local_50 = 0;
  local_88 = 0xf;
  local_8c = 0;
  if (local_118 < 0x10) {
    ExceptionList = local_10;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

