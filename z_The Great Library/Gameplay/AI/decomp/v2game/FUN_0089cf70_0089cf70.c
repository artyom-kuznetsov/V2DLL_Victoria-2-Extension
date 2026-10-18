// FUN_0089cf70 @ 0089cf70 body=[[0089cf70, 0089d00d] [0089d011, 0089d0eb] [0089d0ef, 0089d10e] [0089d112, 0089d1fa] [0089d1fe, 0089d219] [0089d21d, 0089d23c] [0089d240, 0089d3d6] [0089d3da, 0089d3fb] [0089d3ff, 0089d429] [0089d42d, 0089d452] [0089d456, 0089d47b] [0089d47f, 0089d4a4] [0089d4a8, 0089d4cd] [0089d4d1, 0089d4f3] [0089d4f7, 0089d513] [0089d517, 0089d531] [0089d535, 0089d580] [0089d584, 0089d59b] [0089d59f, 0089d5b3]]


undefined4 FUN_0089cf70(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint in_stack_00000020;
  uint local_15c [4];
  undefined4 local_14c;
  uint local_148;
  uint local_140;
  undefined4 local_130;
  uint local_12c;
  uint local_124;
  undefined4 local_114;
  uint local_110;
  uint local_108 [4];
  undefined4 local_f8;
  uint local_f4;
  uint local_ec;
  undefined4 local_dc;
  uint local_d8;
  uint local_d0;
  undefined4 local_c0;
  uint local_bc;
  uint local_b4 [4];
  undefined4 local_a4;
  uint local_a0;
  uint local_98 [4];
  undefined4 local_88;
  uint local_84;
  uint local_7c [4];
  undefined4 local_6c;
  uint local_68;
  undefined4 local_60;
  undefined1 local_5c [4];
  int local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 local_48 [4];
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined4 *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b87488;
  local_10 = ExceptionList;
  local_14 = (undefined4 *)0x0;
  local_8 = 0;
  local_60 = *(undefined4 *)(DAT_012588e8 + 0xb0c);
  ExceptionList = &local_10;
  FUN_00424810();
  local_a0 = 0xf;
  local_a4 = 0;
  local_b4[0] = local_b4[0] & 0xffffff00;
  FUN_00409350("REV_GAIN_CB",0xb);
  local_8._0_1_ = 1;
  FUN_009a8ee0(local_5c,local_b4);
  local_8._0_1_ = 3;
  if (0xf < local_a0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_a0 = 0xf;
  local_a4 = 0;
  local_b4[0] = local_b4[0] & 0xffffff00;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350(&DAT_00df7e80,4);
  local_8._0_1_ = 4;
  uVar3 = (undefined1)local_8;
  local_8._0_1_ = 4;
  if (DAT_0131acac == 0) {
    local_14 = (undefined4 *)FUN_00aae9af();
    local_8._0_1_ = 5;
    if (local_14 != (undefined4 *)0x0) {
      FUN_0090cca0();
    }
    local_8._0_1_ = 4;
    FUN_0090d9d0();
    uVar3 = (undefined1)local_8;
  }
  local_8._0_1_ = uVar3;
  iVar2 = DAT_0131acac;
  iVar4 = FUN_0090da40();
  if (iVar4 == 0) {
    iVar4 = **(int **)(iVar2 + 0xc);
  }
  FUN_0090a830(iVar4,local_7c);
  local_8._0_1_ = 6;
  local_14 = (undefined4 *)FUN_00aae9af();
  local_8._0_1_ = 7;
  if (local_14 == (undefined4 *)0x0) {
    local_14 = (undefined4 *)0x0;
  }
  else {
    local_14 = (undefined4 *)FUN_009a9ce0();
  }
  local_8._0_1_ = 6;
  FUN_009e6810(local_34,&local_14);
  if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 3;
  local_68 = 0xf;
  local_6c = 0;
  local_7c[0] = local_7c[0] & 0xffffff00;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350("ACTIVE",6);
  local_8._0_1_ = 8;
  FUN_0089cb20();
  uVar5 = FUN_0055dd40();
  local_8._0_1_ = 9;
  puVar6 = (undefined4 *)FUN_009a8ee0(local_48,uVar5);
  local_8._0_1_ = 10;
  puVar7 = (undefined4 *)FUN_00aae9af();
  local_8._0_1_ = 0xb;
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    *puVar7 = &PTR_FUN_00e38ecc;
    puVar7[1] = local_5c;
    puVar7[7] = 0xf;
    puVar7[6] = 0;
    *(undefined1 *)(puVar7 + 2) = 0;
    local_18 = puVar7;
    FUN_00408ed0();
    *puVar7 = &PTR_FUN_00e38f08;
    local_14 = puVar7 + 9;
    *local_14 = *puVar6;
    puVar7[10] = 0;
    puVar7[0xb] = 0;
    puVar7[0xc] = 0;
    local_8._0_1_ = 0xd;
    FUN_009a97b0();
  }
  local_8._0_1_ = 10;
  local_18 = puVar7;
  FUN_009e6810(local_34,&local_18);
  local_8._0_1_ = 0xe;
  FUN_009adb70();
  if (local_44 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 3;
  local_68 = 0xf;
  local_6c = 0;
  uVar1 = local_7c[0] >> 8;
  local_7c[0] = uVar1 << 8;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_68 = 0xf;
  local_6c = 0;
  local_7c[0] = uVar1 << 8;
  FUN_00409350(&DAT_00defdfc,1);
  local_8._0_1_ = 0xf;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350(&DAT_00e2a55c,3);
  local_8._0_1_ = 0x10;
  local_84 = 0xf;
  local_88 = 0;
  local_98[0] = local_98[0] & 0xffffff00;
  FUN_00409350("PASSIVE",7);
  local_8._0_1_ = 0x11;
  uVar5 = FUN_0043b700(&local_60,local_108);
  local_8._0_1_ = 0x12;
  FUN_0042c180(local_15c,uVar5);
  local_8._0_1_ = 0x13;
  FUN_0055dd40();
  local_8._0_1_ = 0x14;
  FUN_00988f20();
  local_8._0_1_ = 0x15;
  FUN_00988f20();
  local_8._0_1_ = 0x16;
  uVar5 = FUN_00988f20();
  local_8._0_1_ = 0x17;
  puVar6 = (undefined4 *)FUN_009a8ee0(local_48,uVar5);
  local_8._0_1_ = 0x18;
  puVar7 = (undefined4 *)FUN_00aae9af();
  local_8._0_1_ = 0x19;
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar7[1] = local_5c;
    *puVar7 = &PTR_FUN_00e38ecc;
    puVar7[7] = 0xf;
    puVar7[6] = 0;
    *(undefined1 *)(puVar7 + 2) = 0;
    param_2 = puVar7;
    FUN_00408ed0();
    *puVar7 = &PTR_FUN_00e38f08;
    local_18 = puVar7 + 9;
    *local_18 = *puVar6;
    puVar7[10] = 0;
    puVar7[0xb] = 0;
    puVar7[0xc] = 0;
    local_8._0_1_ = 0x1b;
    FUN_009a97b0();
  }
  local_8._0_1_ = 0x18;
  param_2 = puVar7;
  FUN_009e6810(local_98,&param_2);
  local_8._0_1_ = 0x1c;
  FUN_009adb70();
  if (local_44 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  if (0xf < local_d8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_d8 = 0xf;
  local_dc = 0;
  local_ec = local_ec & 0xffffff00;
  if (0xf < local_12c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_12c = 0xf;
  local_130 = 0;
  local_140 = local_140 & 0xffffff00;
  if (0xf < local_bc) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_bc = 0xf;
  local_c0 = 0;
  local_d0 = local_d0 & 0xffffff00;
  if (0xf < local_110) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_110 = 0xf;
  local_114 = 0;
  local_124 = local_124 & 0xffffff00;
  if (0xf < local_148) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_148 = 0xf;
  local_14c = 0;
  local_15c[0] = local_15c[0] & 0xffffff00;
  if (0xf < local_f4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_f4 = 0xf;
  local_f8 = 0;
  local_108[0] = local_108[0] & 0xffffff00;
  if (0xf < local_84) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_84 = 0xf;
  local_88 = 0;
  local_98[0] = local_98[0] & 0xffffff00;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 3;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  iVar4 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
  local_8 = CONCAT31(local_8._1_3_,0x1d);
  FUN_009adb70();
  if (local_58 == 0) {
    local_58 = 0;
    local_54 = 0;
    local_50 = 0;
    if (in_stack_00000020 < 0x10) {
      ExceptionList = local_10;
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

