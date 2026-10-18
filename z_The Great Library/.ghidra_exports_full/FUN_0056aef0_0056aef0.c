// FUN_0056aef0 @ 0056aef0 body=[[0056aef0, 0056b072] [0056b076, 0056b0a0] [0056b0a4, 0056b0c9] [0056b0cd, 0056b0f2] [0056b0f6, 0056b12d] [0056b131, 0056b14c] [0056b150, 0056b166] [0056b16a, 0056b180] [0056b184, 0056b1a0] [0056b1a4, 0056b2d7] [0056b2db, 0056b301] [0056b305, 0056b32a] [0056b32e, 0056b353] [0056b357, 0056b38c] [0056b390, 0056b3b1] [0056b3b5, 0056b3d4] [0056b3d8, 0056b3ee] [0056b3f2, 0056b40e] [0056b412, 0056b549] [0056b54d, 0056b56e] [0056b572, 0056b597] [0056b59b, 0056b5c0] [0056b5c4, 0056b5fb] [0056b5ff, 0056b620] [0056b624, 0056b643] [0056b647, 0056b65d] [0056b661, 0056b67d] [0056b681, 0056b7b8] [0056b7bc, 0056b7dd] [0056b7e1, 0056b806] [0056b80a, 0056b82f] [0056b833, 0056b865] [0056b869, 0056b888] [0056b88c, 0056b8a2] [0056b8a6, 0056b8c2] [0056b8c6, 0056b961] [0056b965, 0056b9a2] [0056b9a6, 0056b9e8] [0056b9f0, 0056bab4] [0056bab8, 0056bade] [0056bae2, 0056bb07] [0056bb0b, 0056bb30] [0056bb34, 0056bb53] [0056bb57, 0056bb74] [0056bb78, 0056bbbf] [0056bbc3, 0056bbe0] [0056bbe4, 0056bc37] [0056bc3b, 0056bc4f]]


undefined1 * FUN_0056aef0(int param_1,undefined1 *param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int local_110;
  uint local_108 [4];
  undefined4 local_f8;
  uint local_f4;
  uint local_ec;
  undefined4 local_dc;
  uint local_d8;
  uint local_d0;
  undefined4 local_c0;
  uint local_bc;
  uint local_b4;
  undefined4 local_a4;
  uint local_a0;
  uint local_98;
  undefined4 local_88;
  uint local_84;
  uint local_7c [4];
  undefined4 local_6c;
  uint local_68;
  uint local_60;
  undefined4 local_50;
  uint local_4c;
  undefined1 local_44 [4];
  int local_40;
  int local_3c;
  undefined4 local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b8ec5f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *param_2 = 0;
  local_8 = 0;
  cVar1 = (**(code **)(**(int **)(param_1 + 0x348) + 0x24))();
  if (cVar1 != '\0') {
    local_84 = 0xf;
    local_88 = 0;
    local_98 = local_98 & 0xffffff00;
    FUN_00409350(&DAT_00dfc7b4);
    local_8 = 1;
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350(&DAT_00df7f68);
    local_8._0_1_ = 2;
    local_4c = 0xf;
    local_50 = 0;
    local_60 = local_60 & 0xffffff00;
    FUN_00409350("DISABLE_UNIT_TECH");
    local_8._0_1_ = 3;
    (**(code **)(**(int **)(param_1 + 0x34c) + 0x18))();
    local_8._0_1_ = 4;
    local_14 = (undefined1 *)FUN_009a8ee0(local_44);
    local_8._0_1_ = 5;
    iVar2 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
    local_8._0_1_ = 6;
    FUN_00988f20();
    local_8._0_1_ = 7;
    FUN_00988f20();
    local_8._0_1_ = 8;
    FUN_00988f20();
    local_8._0_1_ = 9;
    FUN_00448aa0();
    if (0xf < local_f4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_f4 = 0xf;
    local_f8 = 0;
    local_108[0] = local_108[0] & 0xffffff00;
    if (0xf < local_a0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_a0 = 0xf;
    local_a4 = 0;
    local_b4 = local_b4 & 0xffffff00;
    if (0xf < local_bc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_bc = 0xf;
    local_c0 = 0;
    local_d0 = local_d0 & 0xffffff00;
    if (0xf < local_d8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_d8 = 0xf;
    local_dc = 0;
    local_ec = local_ec & 0xffffff00;
    local_8._0_1_ = 10;
    FUN_009adb70();
    if (local_40 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_40 = 0;
    local_3c = 0;
    local_38 = 0;
    if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_68 = 0xf;
    local_6c = 0;
    local_7c[0] = local_7c[0] & 0xffffff00;
    if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_4c = 0xf;
    local_50 = 0;
    local_60 = local_60 & 0xffffff00;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    if (0xf < local_84) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  cVar1 = (**(code **)(**(int **)(param_1 + 0x34c) + 0x24))();
  if (cVar1 != '\0') {
    local_84 = 0xf;
    local_88 = 0;
    local_98 = local_98 & 0xffffff00;
    FUN_00409350(&DAT_00dfc7b4);
    local_8 = 0xb;
    local_4c = 0xf;
    local_50 = 0;
    local_60 = local_60 & 0xffffff00;
    FUN_00409350(&DAT_00df7f68);
    local_8._0_1_ = 0xc;
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350("ENABLE_UNIT_TECH");
    local_8._0_1_ = 0xd;
    (**(code **)(**(int **)(param_1 + 0x34c) + 0x18))();
    local_8._0_1_ = 0xe;
    local_14 = (undefined1 *)FUN_009a8ee0(local_44);
    local_8._0_1_ = 0xf;
    iVar2 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
    local_8._0_1_ = 0x10;
    FUN_00988f20();
    local_8._0_1_ = 0x11;
    FUN_00988f20();
    local_8._0_1_ = 0x12;
    FUN_00988f20();
    local_8._0_1_ = 0x13;
    FUN_00448aa0();
    if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_68 = 0xf;
    local_6c = 0;
    local_7c[0] = local_7c[0] & 0xffffff00;
    if (0xf < local_d8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_d8 = 0xf;
    local_dc = 0;
    local_ec = local_ec & 0xffffff00;
    if (0xf < local_bc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_bc = 0xf;
    local_c0 = 0;
    local_d0 = local_d0 & 0xffffff00;
    if (0xf < local_a0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_a0 = 0xf;
    local_a4 = 0;
    local_b4 = local_b4 & 0xffffff00;
    local_8._0_1_ = 0x14;
    FUN_009adb70();
    if (local_40 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_40 = 0;
    local_3c = 0;
    local_38 = 0;
    if (0xf < local_f4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_f4 = 0xf;
    local_f8 = 0;
    local_108[0] = local_108[0] & 0xffffff00;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_4c = 0xf;
    local_50 = 0;
    local_60 = local_60 & 0xffffff00;
    if (0xf < local_84) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  cVar1 = (**(code **)(**(int **)(param_1 + 0x354) + 0x24))();
  if (cVar1 != '\0') {
    local_84 = 0xf;
    local_88 = 0;
    local_98 = local_98 & 0xffffff00;
    FUN_00409350(&DAT_00dfc7b4);
    local_8 = 0x15;
    local_4c = 0xf;
    local_50 = 0;
    local_60 = local_60 & 0xffffff00;
    FUN_00409350(&DAT_00df7f68);
    local_8._0_1_ = 0x16;
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350("ENABLE_BUILDING_TECH");
    local_8._0_1_ = 0x17;
    (**(code **)(**(int **)(param_1 + 0x354) + 0x18))();
    local_8._0_1_ = 0x18;
    local_14 = (undefined1 *)FUN_009a8ee0(local_44);
    local_8._0_1_ = 0x19;
    iVar2 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
    local_8._0_1_ = 0x1a;
    FUN_00988f20();
    local_8._0_1_ = 0x1b;
    FUN_00988f20();
    local_8._0_1_ = 0x1c;
    FUN_00988f20();
    local_8._0_1_ = 0x1d;
    FUN_00448aa0();
    if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_68 = 0xf;
    local_6c = 0;
    local_7c[0] = local_7c[0] & 0xffffff00;
    if (0xf < local_d8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_d8 = 0xf;
    local_dc = 0;
    local_ec = local_ec & 0xffffff00;
    if (0xf < local_bc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_bc = 0xf;
    local_c0 = 0;
    local_d0 = local_d0 & 0xffffff00;
    if (0xf < local_a0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_a0 = 0xf;
    local_a4 = 0;
    local_b4 = local_b4 & 0xffffff00;
    local_8._0_1_ = 0x1e;
    FUN_009adb70();
    if (local_40 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_40 = 0;
    local_3c = 0;
    local_38 = 0;
    if (0xf < local_f4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_f4 = 0xf;
    local_f8 = 0;
    local_108[0] = local_108[0] & 0xffffff00;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_4c = 0xf;
    local_50 = 0;
    local_60 = local_60 & 0xffffff00;
    if (0xf < local_84) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  cVar1 = (**(code **)(**(int **)(param_1 + 0x350) + 0x38))();
  if (cVar1 != '\0') {
    local_84 = 0xf;
    local_88 = 0;
    local_98 = local_98 & 0xffffff00;
    FUN_00409350(&DAT_00dfc7b4);
    local_8 = 0x1f;
    local_4c = 0xf;
    local_50 = 0;
    local_60 = local_60 & 0xffffff00;
    FUN_00409350(&DAT_00df7f68);
    local_8._0_1_ = 0x20;
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350("ENABLE_CRIME_TECH");
    local_8._0_1_ = 0x21;
    (**(code **)(**(int **)(param_1 + 0x350) + 0x18))();
    local_8._0_1_ = 0x22;
    local_14 = (undefined1 *)FUN_009a8ee0(local_44);
    local_8._0_1_ = 0x23;
    iVar2 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
    local_8._0_1_ = 0x24;
    FUN_00988f20();
    local_8._0_1_ = 0x25;
    FUN_00988f20();
    local_8._0_1_ = 0x26;
    FUN_00988f20();
    local_8._0_1_ = 0x27;
    FUN_00448aa0();
    if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_68 = 0xf;
    local_6c = 0;
    local_7c[0] = local_7c[0] & 0xffffff00;
    if (0xf < local_d8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_d8 = 0xf;
    local_dc = 0;
    local_ec = local_ec & 0xffffff00;
    if (0xf < local_bc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_bc = 0xf;
    local_c0 = 0;
    local_d0 = local_d0 & 0xffffff00;
    if (0xf < local_a0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_a0 = 0xf;
    local_a4 = 0;
    local_b4 = local_b4 & 0xffffff00;
    local_8._0_1_ = 0x22;
    FUN_009a9740();
    if (0xf < local_f4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_f4 = 0xf;
    local_f8 = 0;
    local_108[0] = local_108[0] & 0xffffff00;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_4c = 0xf;
    local_50 = 0;
    local_60 = local_60 & 0xffffff00;
    if (0xf < local_84) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  iVar2 = *(int *)(param_1 + 0x330);
  do {
    if (iVar2 == 0) {
      uVar3 = FUN_0056f850(param_1,local_7c,param_3);
      local_8 = 0x37;
      FUN_00448aa0(uVar3,0,0xffffffff);
      if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_7c[0]);
      }
      ExceptionList = local_10;
      return param_2;
    }
    iVar2 = *(int *)(iVar2 + 8);
    FUN_005690e0();
    local_14 = &stack0xfffffc78;
    local_8 = 0x28;
    FUN_005bd4f0();
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350(&DAT_00ded94d);
    local_8._0_1_ = 0x2c;
    FUN_005bbaa0(local_108,local_30,1);
    local_8._0_1_ = 0x2e;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00989330();
    local_8._0_1_ = 0x2f;
    FUN_00408ed0();
    local_8._0_1_ = 0x2e;
    if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    FUN_00989510(&local_40);
    local_14 = (undefined1 *)0x0;
    iVar4 = local_40;
    if (0 < (local_3c - local_40) / 0x1c) {
      local_110 = 0;
      do {
        local_8._0_1_ = 0x30;
        if (1 < *(int *)(local_110 + iVar4 + 0x10)) {
          local_84 = 0xf;
          local_88 = 0;
          local_98 = local_98 & 0xffffff00;
          FUN_00409350(&DAT_00dee2cc);
          local_8._0_1_ = 0x31;
          local_1c = 0xf;
          local_20 = 0;
          local_30[0] = local_30[0] & 0xffffff00;
          FUN_00409350(&DAT_00df9638);
          local_8._0_1_ = 0x32;
          FUN_005ba5e0();
          local_8._0_1_ = 0x33;
          FUN_00988f20();
          local_8._0_1_ = 0x34;
          FUN_00988f20();
          local_8._0_1_ = 0x35;
          FUN_00988f20();
          local_8._0_1_ = 0x36;
          FUN_00448aa0();
          if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_68 = 0xf;
          local_6c = 0;
          local_7c[0] = local_7c[0] & 0xffffff00;
          if (0xf < local_d8) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_d8 = 0xf;
          local_dc = 0;
          local_ec = local_ec & 0xffffff00;
          if (0xf < local_bc) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_bc = 0xf;
          local_c0 = 0;
          local_d0 = local_d0 & 0xffffff00;
          if (0xf < local_a0) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_a0 = 0xf;
          local_a4 = 0;
          local_b4 = local_b4 & 0xffffff00;
          if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_8._0_1_ = 0x30;
          local_1c = 0xf;
          local_20 = 0;
          local_30[0] = local_30[0] & 0xffffff00;
          iVar4 = local_40;
          if (0xf < local_84) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
        }
        local_110 = local_110 + 0x1c;
        local_14 = (undefined1 *)((int)local_14 + 1);
      } while ((int)local_14 < (local_3c - iVar4) / 0x1c);
    }
    local_8._0_1_ = 0x30;
    if (iVar4 != 0) {
      FUN_00413860();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_40 = 0;
    local_3c = 0;
    local_38 = 0;
    if (0xf < local_f4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_005694d0();
  } while( true );
}

