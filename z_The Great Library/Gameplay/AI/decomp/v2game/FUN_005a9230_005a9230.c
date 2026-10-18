// FUN_005a9230 @ 005a9230 body=[[005a9230, 005a934d] [005a9351, 005a937b] [005a937f, 005a93b4] [005a93b8, 005a93ce] [005a93d2, 005a93f3] [005a93f7, 005a9509] [005a950d, 005a9537] [005a953b, 005a9570] [005a9574, 005a958a] [005a958e, 005a95af] [005a95b3, 005a95d8] [005a95dc, 005a95f1]]


undefined4 FUN_005a9230(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int *in_ECX;
  uint local_158 [4];
  undefined4 local_148;
  uint local_144;
  uint local_13c;
  undefined4 local_12c;
  uint local_128;
  uint local_120;
  undefined4 local_110;
  uint local_10c;
  uint local_104;
  undefined4 local_f4;
  uint local_f0;
  uint local_e8;
  undefined4 local_d8;
  uint local_d4;
  uint local_cc [4];
  undefined4 local_bc;
  uint local_b8;
  uint local_b0 [4];
  undefined4 local_a0;
  uint local_9c;
  uint local_94 [4];
  undefined4 local_84;
  uint local_80;
  uint local_78;
  undefined4 local_68;
  uint local_64;
  uint local_5c;
  undefined4 local_4c;
  uint local_48;
  undefined1 local_40 [4];
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b72015;
  local_10 = ExceptionList;
  local_18 = 0;
  ExceptionList = &local_10;
  iVar2 = (**(code **)(*in_ECX + 0x24))();
  if (iVar2 == 3) {
    local_80 = 0xf;
    local_84 = 0;
    local_94[0] = local_94[0] & 0xffffff00;
    FUN_00409350();
    local_8 = 1;
    (**(code **)(*(int *)in_ECX[6] + 0x1c))(local_cc);
    local_8._0_1_ = 2;
    local_48 = 0xf;
    local_4c = 0;
    local_5c = local_5c & 0xffffff00;
    FUN_00409350(&DAT_00ded950,1);
    local_8._0_1_ = 3;
    local_14 = FUN_009a8ee0(local_2c,local_94);
    local_8._0_1_ = 4;
    iVar2 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
    local_8._0_1_ = 5;
    FUN_00988f20();
    local_8._0_1_ = 6;
    FUN_00988f20();
    local_18 = 1;
    if (0xf < local_128) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_128 = 0xf;
    local_12c = 0;
    local_13c = local_13c & 0xffffff00;
    if (0xf < local_f0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_f0 = 0xf;
    local_f4 = 0;
    local_104 = local_104 & 0xffffff00;
    local_8 = CONCAT31(local_8._1_3_,7);
    FUN_009adb70();
    if (local_28 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_48 = 0xf;
    local_4c = 0;
    local_5c = local_5c & 0xffffff00;
    if (0xf < local_b8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_b8 = 0xf;
    local_bc = 0;
    local_cc[0] = local_cc[0] & 0xffffff00;
    uVar1 = local_80;
  }
  else {
    local_9c = 0xf;
    local_a0 = 0;
    local_b0[0] = local_b0[0] & 0xffffff00;
    FUN_00409350();
    local_8 = 8;
    (**(code **)(*(int *)in_ECX[6] + 0x1c))(local_158);
    local_8._0_1_ = 9;
    local_64 = 0xf;
    local_68 = 0;
    local_78 = local_78 & 0xffffff00;
    FUN_00409350(&DAT_00ded950,1);
    local_8._0_1_ = 10;
    local_14 = FUN_009a8ee0(local_40,local_b0);
    local_8._0_1_ = 0xb;
    iVar2 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
    local_8._0_1_ = 0xc;
    FUN_00988f20();
    local_8._0_1_ = 0xd;
    FUN_00988f20();
    local_18 = 1;
    if (0xf < local_d4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_d4 = 0xf;
    local_d8 = 0;
    local_e8 = local_e8 & 0xffffff00;
    if (0xf < local_10c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_10c = 0xf;
    local_110 = 0;
    local_120 = local_120 & 0xffffff00;
    local_8 = CONCAT31(local_8._1_3_,0xe);
    FUN_009adb70();
    if (local_3c != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    if (0xf < local_64) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_64 = 0xf;
    local_68 = 0;
    local_78 = local_78 & 0xffffff00;
    if (0xf < local_144) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_144 = 0xf;
    local_148 = 0;
    local_158[0] = local_158[0] & 0xffffff00;
    uVar1 = local_9c;
  }
  if (0xf < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

