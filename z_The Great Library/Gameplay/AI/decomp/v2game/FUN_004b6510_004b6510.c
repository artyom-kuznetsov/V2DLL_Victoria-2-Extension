// FUN_004b6510 @ 004b6510 body=[[004b6510, 004b65d6] [004b65da, 004b65f1] [004b65f5, 004b66b2] [004b66b6, 004b66e7] [004b66eb, 004b670a] [004b670e, 004b676f] [004b6773, 004b69e6] [004b69ea, 004b6a2f] [004b6a33, 004b6b04] [004b6b08, 004b6b40] [004b6b44, 004b6b60] [004b6b69, 004b6b84] [004b6b88, 004b6c66] [004b6c6a, 004b6c90] [004b6c94, 004b6cb7] [004b6cbb, 004b6cd5] [004b6cd9, 004b6cf4] [004b6cf8, 004b6d38] [004b6d3c, 004b6d88] [004b6d8c, 004b6daf] [004b6db3, 004b6dc6] [004b6dca, 004b6dde]]


undefined4 FUN_004b6510(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  char *pcVar9;
  uint uVar10;
  uint *puVar11;
  char local_120 [32];
  uint local_100;
  undefined4 local_f0;
  uint local_ec;
  uint local_e4;
  undefined4 local_d4;
  uint local_d0;
  uint local_c8 [4];
  undefined4 local_b8;
  uint local_b4;
  uint local_ac;
  undefined4 local_9c;
  uint local_98;
  uint local_90 [5];
  undefined1 *local_7c;
  undefined1 *local_78;
  uint local_74;
  uint local_6c;
  undefined4 local_5c;
  uint local_58;
  int local_50;
  uint local_4c;
  undefined4 local_3c;
  uint local_38;
  int local_30;
  int local_2c;
  undefined1 *local_28;
  uint *local_20;
  uint *local_1c;
  uint *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b762f9;
  local_10 = ExceptionList;
  local_28 = (undefined1 *)0x0;
  if ((DAT_00f092fb != '\0') && (*(int *)(*(int *)(param_1 + 0x5c) + 0x360) < 1)) {
    local_38 = 0xf;
    local_3c = 0;
    local_4c = local_4c & 0xffffff00;
    ExceptionList = &local_10;
    FUN_00409350();
    local_8 = 0;
    FUN_009a8ee0();
    local_8._0_1_ = 1;
    iVar4 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c));
    local_8 = CONCAT31(local_8._1_3_,2);
    FUN_009adb70();
    if (local_20 != (uint *)0x0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_20 = (uint *)0x0;
    local_1c = (uint *)0x0;
    local_18 = (uint *)0x0;
    if (local_38 < 0x10) {
      ExceptionList = local_10;
      return param_2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_d0 = 0xf;
  local_d4 = 0;
  local_e4 = local_e4 & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350();
  local_8 = 3;
  local_38 = 0xf;
  local_3c = 0;
  local_4c = local_4c & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 4;
  FUN_009a8ee0();
  local_8._0_1_ = 5;
  iVar4 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c));
  local_8._0_1_ = 6;
  FUN_00448aa0();
  if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_58 = 0xf;
  local_5c = 0;
  local_6c = local_6c & 0xffffff00;
  local_8._0_1_ = 7;
  FUN_009adb70();
  if (local_20 != (uint *)0x0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 3;
  local_20 = (uint *)0x0;
  local_1c = (uint *)0x0;
  local_18 = (uint *)0x0;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  FUN_00448740();
  local_28 = &stack0xfffffecc;
  FUN_00969f90();
  FUN_00988bb0(local_c8,1);
  local_8._0_1_ = 8;
  FUN_00448aa0();
  local_8._0_1_ = 3;
  if (0xf < local_b4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  FUN_00448740();
  puVar11 = (uint *)0x0;
  local_20 = (uint *)0x0;
  local_1c = (uint *)0x0;
  local_18 = (uint *)0x0;
  local_8._0_1_ = 9;
  uVar3 = (undefined1)local_8;
  local_8._0_1_ = 9;
  local_30 = 0;
  if (DAT_0131bb34 == 0) {
    local_28 = (undefined1 *)FUN_00aae9af();
    local_8._0_1_ = 10;
    if (local_28 != (undefined1 *)0x0) {
      FUN_0041a160();
    }
    local_8._0_1_ = 9;
    FUN_00423700();
    uVar3 = (undefined1)local_8;
  }
  local_8._0_1_ = uVar3;
  local_28 = (undefined1 *)(*(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2);
  if (0 < (int)local_28) {
    local_50 = 0;
    do {
      puVar11 = local_1c;
      for (iVar4 = *(int *)(*(int *)(param_1 + 0x194) + local_50); local_1c = puVar11, iVar4 != 0;
          iVar4 = *(int *)(iVar4 + 0x27c)) {
        local_2c = iVar4;
        iVar5 = FUN_00967f50();
        if (iVar5 != 0) {
          iVar4 = 0;
          uVar10 = (int)local_1c - (int)local_20 >> 3;
          if (0 < (int)uVar10) {
            do {
              uVar6 = FUN_00967f50();
              if (local_20[iVar4 * 2] == uVar6) {
                local_20[iVar4 * 2 + 1] = local_20[iVar4 * 2 + 1] + *(int *)(local_2c + 0x58);
                iVar4 = local_2c;
                goto LAB_004b6930;
              }
              iVar4 = iVar4 + 1;
            } while (iVar4 < (int)uVar10);
          }
          uVar7 = FUN_00967f50();
          uVar6 = *(uint *)(local_2c + 0x58);
          local_90[0] = uVar7;
          local_90[1] = uVar6;
          if ((local_90 < local_1c) && (local_20 <= local_90)) {
            iVar4 = (int)local_90 - (int)local_20 >> 3;
            if (local_1c == local_18) {
              if (0x1ffffffe < uVar10) {
LAB_004b6a8d:
                    /* WARNING: Subroutine does not return */
                FUN_00aad3ad();
              }
              if ((uint)((int)local_18 - (int)local_20 >> 3) < uVar10 + 1) {
                FUN_004237e0();
              }
            }
            if (local_1c != (uint *)0x0) {
              *local_1c = local_20[iVar4 * 2];
              local_1c[1] = local_20[iVar4 * 2 + 1];
            }
          }
          else {
            if (local_1c == local_18) {
              if (0x1ffffffe < uVar10) goto LAB_004b6a8d;
              if ((uint)((int)local_18 - (int)local_20 >> 3) < uVar10 + 1) {
                FUN_004237e0();
              }
            }
            if (local_1c != (uint *)0x0) {
              *local_1c = uVar7;
              local_1c[1] = uVar6;
            }
          }
          local_1c = local_1c + 2;
          iVar4 = local_2c;
        }
LAB_004b6930:
        puVar11 = local_1c;
      }
      local_50 = local_50 + 0x10;
      local_30 = local_30 + 1;
    } while (local_30 < (int)local_28);
    local_2c = 0;
  }
  local_98 = 0xf;
  local_9c = 0;
  local_ac = local_ac & 0xffffff00;
  FUN_00409350();
  local_30 = (int)puVar11 - (int)local_20 >> 3;
  if ((local_30 != 0) && (param_1 = 0, 0 < local_30)) {
    do {
      local_8._0_1_ = 0xb;
      FUN_0041a080();
      local_8._0_1_ = 0xc;
      FUN_00448aa0();
      local_8._0_1_ = 0xb;
      if (0xf < local_b4) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_38 = 0xf;
      local_3c = 0;
      local_4c = local_4c & 0xffffff00;
      FUN_00409350();
      local_8._0_1_ = 0xd;
      FUN_00448aa0();
      local_8._0_1_ = 0xb;
      if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_38 = 0xf;
      local_3c = 0;
      local_4c = local_4c & 0xffffff00;
      FUN_00409350();
      local_8._0_1_ = 0xe;
      FUN_009a8ee0();
      local_8._0_1_ = 0xf;
      puVar8 = DAT_0125b5e0;
      if (DAT_0125b5e0 == (undefined4 *)0x0) {
        local_28 = (undefined1 *)FUN_00aae9af();
        local_8._0_1_ = 0x10;
        if (local_28 == (undefined1 *)0x0) {
          puVar8 = (undefined4 *)0x0;
        }
        else {
          puVar8 = (undefined4 *)FUN_00475150();
        }
        local_8._0_1_ = 0x11;
        local_28 = (undefined1 *)0x0;
        if ((puVar8 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
          (**(code **)*DAT_0125b5e0)();
        }
      }
      DAT_0125b5e0 = puVar8;
      local_8._0_1_ = 0xf;
      FUN_009a9880(*(undefined8 *)(DAT_0125b5e0 + 0x1b));
      local_8._0_1_ = 0x12;
      FUN_00448aa0();
      if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_58 = 0xf;
      local_5c = 0;
      local_6c = local_6c & 0xffffff00;
      local_8._0_1_ = 0x13;
      FUN_009adb70();
      puVar2 = local_7c;
      if (local_7c != (undefined1 *)0x0) {
        while( true ) {
          if (puVar2 == local_78) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          if (0xf < *(uint *)(puVar2 + 0x14)) break;
          *(undefined4 *)(puVar2 + 0x14) = 0xf;
          *(undefined4 *)(puVar2 + 0x10) = 0;
          *puVar2 = 0;
          puVar2 = puVar2 + 0x20;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8._0_1_ = 0xb;
      local_7c = (undefined1 *)0x0;
      local_78 = (undefined1 *)0x0;
      local_74 = 0;
      if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_58 = 0xf;
      local_5c = 0;
      local_6c = local_6c & 0xffffff00;
      FUN_00409350();
      local_38 = 0xf;
      local_3c = 0;
      local_4c = local_4c & 0xffffff00;
      local_8._0_1_ = 0x15;
      pcVar9 = __itoa(local_20[param_1 * 2 + 1],local_120,10);
      do {
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      FUN_00409350();
      local_8._0_1_ = 0x16;
      local_74 = 0xf;
      local_78 = (undefined1 *)0x0;
      local_90[2] = local_90[2] & 0xffffff00;
      FUN_00409350();
      local_8._0_1_ = 0x17;
      FUN_00988f20();
      local_8._0_1_ = 0x18;
      FUN_00988f20();
      local_8._0_1_ = 0x19;
      FUN_00448aa0();
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
      local_c8[0] = local_c8[0] & 0xffffff00;
      if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_74 = 0xf;
      local_78 = (undefined1 *)0x0;
      local_90[2] = local_90[2] & 0xffffff00;
      if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8._0_1_ = 0xb;
      local_38 = 0xf;
      local_3c = 0;
      local_4c = local_4c & 0xffffff00;
      if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_58 = 0xf;
      local_5c = 0;
      local_6c = local_6c & 0xffffff00;
      FUN_00409350();
      local_8._0_1_ = 0x1a;
      FUN_00448aa0();
      local_8._0_1_ = 0xb;
      if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      param_1 = param_1 + 1;
    } while (param_1 < local_30);
  }
  local_8._0_1_ = 0xb;
  FUN_00448aa0();
  FUN_00989330();
  if (0xf < local_98) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_98 = 0xf;
  local_9c = 0;
  local_ac = local_ac & 0xffffff00;
  if (local_20 == (uint *)0x0) {
    if (local_d0 < 0x10) {
      ExceptionList = local_10;
      return param_2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

