// FUN_008caa20 @ 008caa20 body=[[008caa20, 008caba1] [008caba5, 008cabcf] [008cabd3, 008cabf8] [008cabfc, 008cac21] [008cac25, 008cac4a] [008cac4e, 008cac83] [008cac87, 008caca0] [008caca4, 008cacc2] [008cacc6, 008cae32] [008cae36, 008cae60] [008cae64, 008cae89] [008cae8d, 008caeb2] [008caeb6, 008caedb] [008caedf, 008caf14] [008caf18, 008caf39] [008caf3d, 008caf61] [008caf65, 008caf81] [008caf85, 008caf9a]]


undefined4 FUN_008caa20(undefined4 param_1,int param_2,char param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int in_ECX;
  undefined4 local_1fc;
  uint local_1e8;
  undefined4 local_1e0;
  uint local_1cc;
  undefined4 local_1c4;
  uint local_1b0;
  undefined4 local_1a8;
  uint local_194;
  undefined4 local_18c;
  uint local_178;
  undefined4 local_170;
  uint local_15c;
  undefined4 local_154;
  uint local_140;
  undefined4 local_138;
  uint local_124;
  undefined4 local_11c;
  uint local_108;
  undefined4 local_100;
  uint local_ec;
  uint local_e4 [4];
  undefined4 local_d4;
  uint local_d0;
  uint local_c8 [4];
  undefined4 local_b8;
  uint local_b4;
  uint local_ac [4];
  undefined4 local_9c;
  uint local_98;
  uint local_90 [4];
  undefined4 local_80;
  uint local_7c;
  uint local_74 [4];
  undefined4 local_64;
  uint local_60;
  uint local_58 [4];
  undefined4 local_48;
  uint local_44;
  undefined1 local_3c [4];
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_28 [4];
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b86127;
  local_10 = ExceptionList;
  local_14 = 0;
  if (param_3 == *(char *)(in_ECX + 0x1c)) {
    local_b4 = 0xf;
    local_b8 = 0;
    local_c8[0] = local_c8[0] & 0xffffff00;
    ExceptionList = &local_10;
    FUN_00409350(&DAT_00dee2cc,1);
    local_8 = 1;
    local_44 = 0xf;
    local_48 = 0;
    local_58[0] = local_58[0] & 0xffffff00;
    FUN_00409350("HAVE_NO_BLOCKADED",0x11);
    local_8._0_1_ = 2;
    local_7c = 0xf;
    local_80 = 0;
    local_90[0] = local_90[0] & 0xffffff00;
    FUN_00409350(&DAT_00dfc964,3);
    local_8._0_1_ = 3;
    piVar1 = *(int **)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_2 + 0x10) * 4);
    FUN_009a8ee0(local_28,local_58);
    local_8._0_1_ = 4;
    iVar4 = FUN_00475500();
    uVar5 = FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
    local_8._0_1_ = 5;
    uVar6 = (**(code **)(*piVar1 + 0x1c))();
    local_8._0_1_ = 6;
    FUN_00988fa0(uVar6);
    local_8._0_1_ = 7;
    FUN_00988f20(local_90);
    local_8._0_1_ = 8;
    FUN_00988f20(uVar5);
    local_8._0_1_ = 9;
    FUN_00988f20(local_c8);
    local_14 = 1;
    if (0xf < local_ec) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_100);
    }
    if (0xf < local_124) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_138);
    }
    if (0xf < local_194) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_1a8);
    }
    if (0xf < local_15c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_170);
    }
    if (0xf < local_1cc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_1e0);
    }
    local_8 = CONCAT31(local_8._1_3_,10);
    FUN_009adb70();
    if (local_24 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_24);
    }
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_90[0]);
    }
    local_7c = 0xf;
    local_80 = 0;
    local_90[0] = local_90[0] & 0xffffff00;
    if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_58[0]);
    }
    local_44 = 0xf;
    local_48 = 0;
    local_58[0] = local_58[0] & 0xffffff00;
    uVar2 = local_c8[0];
    uVar3 = local_b4;
  }
  else {
    local_d0 = 0xf;
    local_d4 = 0;
    local_e4[0] = local_e4[0] & 0xffffff00;
    ExceptionList = &local_10;
    FUN_00409350(&DAT_00dee2cc,1);
    local_8 = 0xb;
    local_60 = 0xf;
    local_64 = 0;
    local_74[0] = local_74[0] & 0xffffff00;
    FUN_00409350("HAVE_BLOCKADE_IN",0x10);
    local_8._0_1_ = 0xc;
    local_98 = 0xf;
    local_9c = 0;
    local_ac[0] = local_ac[0] & 0xffffff00;
    FUN_00409350(&DAT_00dfc964,3);
    local_8._0_1_ = 0xd;
    piVar1 = *(int **)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_2 + 0x10) * 4);
    FUN_009a8ee0(local_3c,local_74);
    local_8._0_1_ = 0xe;
    iVar4 = FUN_00475500();
    uVar5 = FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
    local_8._0_1_ = 0xf;
    uVar6 = (**(code **)(*piVar1 + 0x1c))();
    local_8._0_1_ = 0x10;
    FUN_00988fa0(uVar6);
    local_8._0_1_ = 0x11;
    FUN_00988f20(local_ac);
    local_8._0_1_ = 0x12;
    FUN_00988f20(uVar5);
    local_8._0_1_ = 0x13;
    FUN_00988f20(local_e4);
    local_14 = 1;
    if (0xf < local_108) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_11c);
    }
    if (0xf < local_140) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_154);
    }
    if (0xf < local_178) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_18c);
    }
    if (0xf < local_1b0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_1c4);
    }
    if (0xf < local_1e8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_1fc);
    }
    local_8 = CONCAT31(local_8._1_3_,0x14);
    FUN_009adb70();
    if (local_38 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_38);
    }
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    if (0xf < local_98) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_ac[0]);
    }
    local_98 = 0xf;
    local_9c = 0;
    local_ac[0] = local_ac[0] & 0xffffff00;
    if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_74[0]);
    }
    local_60 = 0xf;
    local_64 = 0;
    local_74[0] = local_74[0] & 0xffffff00;
    uVar2 = local_e4[0];
    uVar3 = local_d0;
  }
  if (0xf < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uVar2);
  }
  ExceptionList = local_10;
  return param_1;
}

