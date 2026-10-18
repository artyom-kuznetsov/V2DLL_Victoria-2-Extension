// FUN_0095e0a0 @ 0095e0a0 body=[[0095e0a0, 0095e1ee] [0095e1f2, 0095e22d] [0095e231, 0095e24c] [0095e250, 0095e26e] [0095e272, 0095e2c9] [0095e2cd, 0095e2ea] [0095e2ee, 0095e3d2] [0095e3d6, 0095e412] [0095e416, 0095e502] [0095e506, 0095e53d] [0095e541, 0095e55c] [0095e560, 0095e57e] [0095e587, 0095e65b] [0095e65f, 0095e68f] [0095e693, 0095e6b1] [0095e6ba, 0095e73e] [0095e742, 0095e772] [0095e776, 0095e794] [0095e79d, 0095e825] [0095e829, 0095e857] [0095e860, 0095ea83] [0095ea87, 0095eace]]


undefined4 FUN_0095e0a0(undefined4 param_1,int param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int local_64;
  uint local_60 [4];
  undefined4 local_50;
  uint local_4c;
  uint local_44 [4];
  undefined4 local_34;
  uint local_30;
  undefined1 *local_28;
  undefined1 *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b64f9b;
  local_10 = ExceptionList;
  local_8 = 0;
  local_4c = 0xf;
  local_50 = 0;
  local_60[0] = local_60[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350();
  local_8._0_1_ = 1;
  FUN_009a8ee0();
  local_8._0_1_ = 2;
  puVar2 = DAT_0125b5e0;
  if (DAT_0125b5e0 == (undefined4 *)0x0) {
    local_28 = (undefined1 *)FUN_00aae9af();
    local_8._0_1_ = 3;
    if (local_28 == (undefined1 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = (undefined4 *)FUN_00475150();
    }
    local_8._0_1_ = 4;
    local_28 = (undefined1 *)0x0;
    if ((puVar2 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
      (**(code **)*DAT_0125b5e0)();
    }
  }
  DAT_0125b5e0 = puVar2;
  local_8._0_1_ = 2;
  FUN_009a9880(*(undefined8 *)(DAT_0125b5e0 + 0x1b));
  local_8._0_1_ = 5;
  FUN_00448aa0();
  if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = local_44[0] & 0xffffff00;
  local_8._0_1_ = 6;
  FUN_009adb70();
  if (local_20 != (undefined1 *)0x0) {
    while( true ) {
      if (local_20 == local_1c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      if (0xf < *(uint *)(local_20 + 0x14)) break;
      *(undefined4 *)(local_20 + 0x14) = 0xf;
      *(undefined4 *)(local_20 + 0x10) = 0;
      *local_20 = 0;
      local_20 = local_20 + 0x20;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 0;
  local_20 = (undefined1 *)0x0;
  local_1c = (undefined1 *)0x0;
  local_18 = 0;
  if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_28 = &stack0xffffff20;
  uVar3 = FUN_009c83c0(local_60);
  local_8._0_1_ = 7;
  FUN_00988fa0(uVar3);
  local_8._0_1_ = 8;
  FUN_00448aa0();
  if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 0;
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = local_44[0] & 0xffffff00;
  if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_64 = 0;
LAB_0095e2f6:
  if (*(int *)(param_2 + local_64 * 4) != 0) {
    if (local_64 == 0) {
      local_4c = 0xf;
      local_50 = 0;
      local_60[0] = local_60[0] & 0xffffff00;
      FUN_00409350();
      local_8._0_1_ = 9;
      FUN_009a8ee0();
      local_8._0_1_ = 10;
      puVar2 = DAT_0125b5e0;
      if (DAT_0125b5e0 == (undefined4 *)0x0) {
        local_28 = (undefined1 *)FUN_00aae9af();
        local_8._0_1_ = 0xb;
        if (local_28 == (undefined1 *)0x0) {
          puVar2 = (undefined4 *)0x0;
        }
        else {
          puVar2 = (undefined4 *)FUN_00475150();
        }
        local_8._0_1_ = 0xc;
        local_28 = (undefined1 *)0x0;
        if ((puVar2 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
          (**(code **)*DAT_0125b5e0)();
        }
      }
      DAT_0125b5e0 = puVar2;
      local_8._0_1_ = 10;
      FUN_009a9880(*(undefined8 *)(DAT_0125b5e0 + 0x1b));
      local_8._0_1_ = 0xd;
      FUN_00448aa0();
      if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_30 = 0xf;
      local_34 = 0;
      local_44[0] = local_44[0] & 0xffffff00;
      local_8 = CONCAT31(local_8._1_3_,0xe);
      FUN_009adb70();
      puVar1 = local_20;
      if (local_20 != (undefined1 *)0x0) goto joined_r0x0095e3ff;
LAB_0095e560:
      local_8._0_1_ = 0;
      local_20 = (undefined1 *)0x0;
      local_1c = (undefined1 *)0x0;
      local_18 = 0;
      if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    else {
      if (local_64 == 6) {
        local_4c = 0xf;
        local_50 = 0;
        local_60[0] = (uint)local_60[0]._1_3_ << 8;
        FUN_00409350();
        local_8._0_1_ = 0xf;
        FUN_009a8ee0();
        local_8._0_1_ = 0x10;
        puVar2 = DAT_0125b5e0;
        if (DAT_0125b5e0 == (undefined4 *)0x0) {
          local_28 = (undefined1 *)FUN_00aae9af();
          local_8._0_1_ = 0x11;
          if (local_28 == (undefined1 *)0x0) {
            puVar2 = (undefined4 *)0x0;
          }
          else {
            puVar2 = (undefined4 *)FUN_00475150();
          }
          local_8._0_1_ = 0x12;
          local_28 = (undefined1 *)0x0;
          if ((puVar2 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
            (**(code **)*DAT_0125b5e0)();
          }
        }
        DAT_0125b5e0 = puVar2;
        local_8._0_1_ = 0x10;
        FUN_009a9880(*(undefined8 *)(DAT_0125b5e0 + 0x1b));
        local_8._0_1_ = 0x13;
        FUN_00448aa0();
        if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_30 = 0xf;
        local_34 = 0;
        local_44[0] = local_44[0] & 0xffffff00;
        local_8 = CONCAT31(local_8._1_3_,0x14);
        FUN_009adb70();
        puVar1 = local_20;
        if (local_20 == (undefined1 *)0x0) goto LAB_0095e560;
        for (; puVar1 != local_1c; puVar1 = puVar1 + 0x20) {
          if (0xf < *(uint *)(puVar1 + 0x14)) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          *(undefined4 *)(puVar1 + 0x14) = 0xf;
          *(undefined4 *)(puVar1 + 0x10) = 0;
          *puVar1 = 0;
        }
        goto LAB_0095e557;
      }
      if (local_64 == 7) {
        local_4c = 0xf;
        local_50 = 0;
        local_60[0] = (uint)local_60[0]._1_3_ << 8;
        FUN_00409350();
        local_8._0_1_ = 0x15;
        FUN_009a8ee0();
        local_8._0_1_ = 0x16;
        puVar2 = DAT_0125b5e0;
        if (DAT_0125b5e0 == (undefined4 *)0x0) {
          local_28 = (undefined1 *)FUN_00aae9af();
          local_8._0_1_ = 0x17;
          if (local_28 == (undefined1 *)0x0) {
            puVar2 = (undefined4 *)0x0;
          }
          else {
            puVar2 = (undefined4 *)FUN_00475150();
          }
          local_8._0_1_ = 0x18;
          local_28 = (undefined1 *)0x0;
          if ((puVar2 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
            (**(code **)*DAT_0125b5e0)();
          }
        }
        DAT_0125b5e0 = puVar2;
        local_8._0_1_ = 0x16;
        FUN_009a9880(*(undefined8 *)(DAT_0125b5e0 + 0x1b));
        local_8._0_1_ = 0x19;
        FUN_00448aa0();
        if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_30 = 0xf;
        local_34 = 0;
        local_44[0] = local_44[0] & 0xffffff00;
        local_8._0_1_ = 0x1a;
        FUN_009adb70();
        if (local_20 != (undefined1 *)0x0) {
          FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_8._0_1_ = 0;
        local_20 = (undefined1 *)0x0;
        local_1c = (undefined1 *)0x0;
        local_18 = 0;
        if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      }
      else if (local_64 == 8) {
        local_4c = 0xf;
        local_50 = 0;
        local_60[0] = (uint)local_60[0]._1_3_ << 8;
        FUN_00409350();
        local_8._0_1_ = 0x1b;
        FUN_009a8ee0();
        local_8._0_1_ = 0x1c;
        iVar4 = FUN_00475500();
        FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c));
        local_8._0_1_ = 0x1d;
        FUN_00448aa0();
        if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_30 = 0xf;
        local_34 = 0;
        local_44[0] = local_44[0] & 0xffffff00;
        local_8._0_1_ = 0x1e;
        FUN_009adb70();
        if (local_20 != (undefined1 *)0x0) {
          FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_8._0_1_ = 0;
        local_20 = (undefined1 *)0x0;
        local_1c = (undefined1 *)0x0;
        local_18 = 0;
        if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      }
      else if (local_64 == 2) {
        local_4c = 0xf;
        local_50 = 0;
        local_60[0] = (uint)local_60[0]._1_3_ << 8;
        FUN_00409350();
        local_8._0_1_ = 0x1f;
        FUN_009a8ee0();
        local_8._0_1_ = 0x20;
        iVar4 = FUN_00475500();
        FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c));
        local_8._0_1_ = 0x21;
        FUN_00448aa0();
        if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_30 = 0xf;
        local_34 = 0;
        local_44[0] = local_44[0] & 0xffffff00;
        local_8._0_1_ = 0x1f;
        FUN_009a9740();
        local_8._0_1_ = 0;
        if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      }
      else {
        if (local_64 == 1) {
          FUN_009885d0();
          local_8._0_1_ = 0x22;
          FUN_009a8ee0();
          local_8._0_1_ = 0x23;
          iVar4 = FUN_00475500();
          FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c));
          local_8._0_1_ = 0x24;
          FUN_00448aa0();
          FUN_00408ad0();
          local_8._0_1_ = 0x22;
        }
        else if (local_64 == 3) {
          FUN_009885d0();
          local_8._0_1_ = 0x25;
          FUN_009a8ee0();
          local_8._0_1_ = 0x26;
          iVar4 = FUN_00475500();
          FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c));
          local_8._0_1_ = 0x27;
          FUN_00448aa0();
          FUN_00408ad0();
          local_8._0_1_ = 0x25;
        }
        else if (local_64 == 4) {
          FUN_009885d0();
          local_8._0_1_ = 0x28;
          FUN_009a8ee0();
          local_8._0_1_ = 0x29;
          iVar4 = FUN_00475500();
          FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c));
          local_8._0_1_ = 0x2a;
          FUN_00448aa0();
          FUN_00408ad0();
          local_8._0_1_ = 0x28;
        }
        else {
          if (local_64 != 5) goto LAB_0095ea34;
          FUN_009885d0();
          local_8._0_1_ = 0x2b;
          FUN_009a8ee0();
          local_8._0_1_ = 0x2c;
          iVar4 = FUN_00475500();
          FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c));
          local_8._0_1_ = 0x2d;
          FUN_00448aa0();
          FUN_00408ad0();
          local_8._0_1_ = 0x2b;
        }
        FUN_009a9740();
        local_8._0_1_ = 0;
        FUN_00408ad0();
      }
    }
LAB_0095ea34:
    local_28 = &stack0xffffff20;
    FUN_009c83c0(local_44);
    local_8._0_1_ = 0x2e;
    FUN_00448aa0();
    local_8._0_1_ = 0;
    if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    FUN_00448740();
  }
  local_64 = local_64 + 1;
  if (8 < local_64) {
    FUN_0040c830();
    FUN_00459820();
    ExceptionList = local_10;
    return param_1;
  }
  goto LAB_0095e2f6;
joined_r0x0095e3ff:
  for (; puVar1 != local_1c; puVar1 = puVar1 + 0x20) {
    if (0xf < *(uint *)(puVar1 + 0x14)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    *(undefined4 *)(puVar1 + 0x14) = 0xf;
    *(undefined4 *)(puVar1 + 0x10) = 0;
    *puVar1 = 0;
  }
LAB_0095e557:
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

