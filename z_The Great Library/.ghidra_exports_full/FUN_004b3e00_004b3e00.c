// FUN_004b3e00 @ 004b3e00 body=[[004b3e00, 004b3ed4] [004b3ed8, 004b3f11] [004b3f15, 004b3f2f] [004b3f33, 004b4018] [004b401c, 004b4042] [004b4046, 004b4065] [004b4069, 004b407f] [004b4083, 004b4099] [004b409d, 004b40bc] [004b40c0, 004b4181] [004b4185, 004b41a0] [004b41a4, 004b41d4] [004b41d8, 004b41f2] [004b41f6, 004b42b4] [004b42b8, 004b42d3] [004b42d7, 004b42f3] [004b42f7, 004b431c] [004b4320, 004b433f] [004b4343, 004b435c] [004b4360, 004b440e] [004b4412, 004b442c] [004b4430, 004b4461] [004b4465, 004b447f] [004b4483, 004b4567] [004b456b, 004b4581] [004b4585, 004b45a1] [004b45a5, 004b45ca] [004b45ce, 004b45ed] [004b45f1, 004b460a] [004b460e, 004b4e2d] [004b4e31, 004b4e4c] [004b4e50, 004b4e76] [004b4e7a, 004b4fb1] [004b4fb5, 004b4fd5] [004b4fd9, 004b4ff5] [004b4ff9, 004b5018] [004b501c, 004b5032] [004b5036, 004b5055] [004b5059, 004b507c] [004b5080, 004b5094]]


undefined4 FUN_004b3e00(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined1 uVar4;
  char cVar5;
  int iVar6;
  char *pcVar7;
  char local_100 [32];
  undefined4 local_e0;
  undefined4 local_dc;
  uint local_d8;
  undefined4 local_c8;
  uint local_c4;
  uint local_bc;
  undefined4 local_ac;
  uint local_a8;
  uint local_a0;
  undefined4 local_90;
  uint local_8c;
  uint local_84;
  undefined4 local_74;
  uint local_70;
  uint local_68;
  undefined4 local_58;
  uint local_54;
  uint local_4c;
  undefined4 local_3c;
  uint local_38;
  uint local_30;
  int local_24;
  undefined4 local_20;
  uint local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b76663;
  local_10 = ExceptionList;
  local_dc = 0;
  local_c4 = 0xf;
  local_c8 = 0;
  local_d8 = local_d8 & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350();
  local_8 = 0;
  local_38 = 0xf;
  local_3c = 0;
  local_4c = local_4c & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 1;
  FUN_009a8ee0();
  local_8._0_1_ = 2;
  iVar6 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar6 + 0x6c));
  local_8._0_1_ = 3;
  FUN_00408ed0();
  if (0xf < local_8c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8c = 0xf;
  local_90 = 0;
  local_a0 = local_a0 & 0xffffff00;
  local_8._0_1_ = 4;
  FUN_009adb70();
  if (local_24 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8c = 0xf;
  local_90 = 0;
  local_a0 = local_a0 & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 5;
  FUN_00988d00();
  local_8._0_1_ = 6;
  local_1c = 0xf;
  local_20 = 0;
  local_30 = local_30 & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 7;
  FUN_00988f20();
  local_8._0_1_ = 8;
  FUN_00988f20();
  local_8._0_1_ = 9;
  FUN_00988f20();
  local_8._0_1_ = 10;
  FUN_00408ed0();
  uVar2 = local_4c;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c = local_4c & 0xffffff00;
  uVar3 = local_4c;
  if (0xf < local_a8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_a8 = 0xf;
  local_ac = 0;
  local_bc = local_bc & 0xffffff00;
  if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_70 = 0xf;
  local_74 = 0;
  local_84 = local_84 & 0xffffff00;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30 = local_30 & 0xffffff00;
  if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 0;
  uVar4 = (undefined1)local_8;
  local_8._0_1_ = 0;
  local_54 = 0xf;
  local_58 = 0;
  local_68 = local_68 & 0xffffff00;
  if (0xf < local_8c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8c = 0xf;
  iVar6 = param_3[1];
  local_90 = 0;
  local_a0 = local_a0 & 0xffffff00;
  local_4c._1_3_ = SUB43(uVar2,1);
  if ((iVar6 == *(int *)(param_1 + 300)) && (iVar6 == *(int *)(param_1 + 0x134))) {
    local_38 = 0xf;
    local_3c = 0;
    local_4c = (uint)local_4c._1_3_ << 8;
    FUN_00409350();
    local_8._0_1_ = 0xb;
    FUN_009a8ee0();
    local_8._0_1_ = 0xc;
    iVar6 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar6 + 0x6c));
    local_8._0_1_ = 0xd;
    FUN_00988f20();
    local_8._0_1_ = 0xe;
    FUN_00408ed0();
    if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_54 = 0xf;
    local_58 = 0;
    local_68 = local_68 & 0xffffff00;
    if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_70 = 0xf;
    local_74 = 0;
    local_84 = local_84 & 0xffffff00;
    local_8._0_1_ = 0xf;
    FUN_009adb70();
    if (local_24 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 0;
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30 = local_30 & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0x10;
    FUN_00988c70();
    local_8._0_1_ = 0x11;
    local_8c = 0xf;
    local_90 = 0;
    local_a0 = local_a0 & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0x12;
    FUN_00988f20();
    local_8._0_1_ = 0x13;
    FUN_00988f20();
    local_8._0_1_ = 0x14;
    FUN_00988f20();
    local_8._0_1_ = 0x15;
    FUN_00408ed0();
    if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_54 = 0xf;
    local_58 = 0;
    local_68 = local_68 & 0xffffff00;
    if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_70 = 0xf;
    local_74 = 0;
    local_84 = local_84 & 0xffffff00;
    if (0xf < local_a8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_a8 = 0xf;
    local_ac = 0;
    local_bc = local_bc & 0xffffff00;
    if (0xf < local_8c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8c = 0xf;
    local_90 = 0;
    local_a0 = local_a0 & 0xffffff00;
    if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 0;
    local_38 = 0xf;
    local_3c = 0;
    local_4c = local_4c & 0xffffff00;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30 = local_30 & 0xffffff00;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x134);
    local_8._0_1_ = uVar4;
    if (iVar1 == iVar6) {
      local_38 = 0xf;
      local_3c = 0;
      local_4c = (uint)local_4c._1_3_ << 8;
      FUN_00409350();
      local_8._0_1_ = 0x16;
      FUN_009a8ee0();
      local_8._0_1_ = 0x17;
      iVar6 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar6 + 0x6c));
      local_8._0_1_ = 0x18;
      FUN_00988f20();
      local_8._0_1_ = 0x19;
      FUN_00408ed0();
      if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_54 = 0xf;
      local_58 = 0;
      local_68 = local_68 & 0xffffff00;
      if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_70 = 0xf;
      local_74 = 0;
      local_84 = local_84 & 0xffffff00;
      local_8._0_1_ = 0x1a;
      FUN_009adb70();
      if (local_24 != 0) {
        FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8._0_1_ = 0;
      local_24 = 0;
      local_20 = 0;
      local_1c = 0;
      if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_38 = 0xf;
      local_3c = 0;
      local_4c = local_4c & 0xffffff00;
      FUN_00409350();
      local_1c = 0xf;
      local_20 = 0;
      local_30 = local_30 & 0xffffff00;
      local_8._0_1_ = 0x1c;
      pcVar7 = __itoa(2,local_100,10);
      do {
        cVar5 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar5 != '\0');
      FUN_00409350();
      local_8._0_1_ = 0x1d;
      local_8c = 0xf;
      local_90 = 0;
      local_a0 = local_a0 & 0xffffff00;
      FUN_00409350();
      local_8._0_1_ = 0x1e;
      FUN_00988f20();
      local_8._0_1_ = 0x1f;
      FUN_00988f20();
      local_8._0_1_ = 0x20;
      FUN_00988f20();
      local_8._0_1_ = 0x21;
      FUN_00408ed0();
      if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_54 = 0xf;
      local_58 = 0;
      local_68 = local_68 & 0xffffff00;
      if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_70 = 0xf;
      local_74 = 0;
      local_84 = local_84 & 0xffffff00;
      if (0xf < local_a8) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_a8 = 0xf;
      local_ac = 0;
      local_bc = local_bc & 0xffffff00;
      if (0xf < local_8c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8c = 0xf;
      local_90 = 0;
      local_a0 = local_a0 & 0xffffff00;
      if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8._0_1_ = 0;
      local_1c = 0xf;
      local_20 = 0;
      local_30 = local_30 & 0xffffff00;
      if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_38 = 0xf;
      local_3c = 0;
      local_4c = local_4c & 0xffffff00;
    }
    else {
      local_e0 = *param_3;
      local_4c = uVar3;
      if (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + iVar6 * 4) + 0xbe8) +
                           iVar1 * 4) + 0x20) == 0) {
        local_e0 = *param_3;
        if (*(char *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + param_3[1] * 4) +
                                       0xbe8) + iVar1 * 4) + 0x60) == '\0') {
          cVar5 = FUN_0042bb00();
          if ((cVar5 == '\0') && (cVar5 = FUN_00416e40(), cVar5 == '\0')) {
            local_e0 = *(undefined4 *)(param_1 + 0x130);
            if (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                                   *(int *)(param_1 + 0x134) * 4) + 0xbe8) +
                                 param_3[1] * 4) + 0x20) == 0) {
              if (*(int *)(param_1 + 0x110) == 0) goto LAB_004b4d76;
              FUN_009885d0();
              local_8._0_1_ = 0x4a;
              FUN_009a8ee0();
              local_8._0_1_ = 0x4b;
              iVar6 = FUN_00475500();
              FUN_009a9880(*(undefined8 *)(iVar6 + 0x6c));
              local_8._0_1_ = 0x4c;
              FUN_00988f20();
              local_8._0_1_ = 0x4d;
              FUN_00408ed0();
              FUN_00408ad0();
              FUN_00408ad0();
              local_8._0_1_ = 0x4a;
              FUN_009a9740();
              local_8._0_1_ = 0;
              FUN_00408ad0();
              FUN_009885d0();
              local_8._0_1_ = 0x4e;
              FUN_009888f0();
              local_8._0_1_ = 0x4f;
              FUN_009885d0();
              local_8._0_1_ = 0x50;
              FUN_00988f20();
              local_8._0_1_ = 0x51;
              FUN_00988f20();
              local_8._0_1_ = 0x52;
              FUN_00988f20();
              local_8 = CONCAT31(local_8._1_3_,0x53);
              FUN_00408ed0();
              FUN_00408ad0();
              FUN_00408ad0();
              FUN_00408ad0();
              FUN_00408ad0();
              FUN_00408ad0();
            }
            else {
              FUN_009885d0();
              local_8._0_1_ = 0x40;
              FUN_009a8ee0();
              local_8._0_1_ = 0x41;
              iVar6 = FUN_00475500();
              FUN_009a9880(*(undefined8 *)(iVar6 + 0x6c));
              local_8._0_1_ = 0x42;
              FUN_00988f20();
              local_8._0_1_ = 0x43;
              FUN_00408ed0();
              FUN_00408ad0();
              FUN_00408ad0();
              local_8._0_1_ = 0x40;
              FUN_009a9740();
              local_8._0_1_ = 0;
              FUN_00408ad0();
              FUN_009885d0();
              local_8._0_1_ = 0x44;
              FUN_009888f0();
              local_8._0_1_ = 0x45;
              FUN_009885d0();
              local_8._0_1_ = 0x46;
              FUN_00988f20();
              local_8._0_1_ = 0x47;
              FUN_00988f20();
              local_8._0_1_ = 0x48;
              FUN_00988f20();
              local_8 = CONCAT31(local_8._1_3_,0x49);
              FUN_00408ed0();
              FUN_00408ad0();
              FUN_00408ad0();
              FUN_00408ad0();
              FUN_00408ad0();
              FUN_00408ad0();
            }
          }
          else {
            FUN_009885d0();
            local_8._0_1_ = 0x36;
            FUN_009a8ee0();
            local_8._0_1_ = 0x37;
            iVar6 = FUN_00475500();
            FUN_009a9880(*(undefined8 *)(iVar6 + 0x6c));
            local_8._0_1_ = 0x38;
            FUN_00988f20();
            local_8._0_1_ = 0x39;
            FUN_00408ed0();
            FUN_00408ad0();
            FUN_00408ad0();
            local_8._0_1_ = 0x36;
            FUN_009a9740();
            local_8._0_1_ = 0;
            FUN_00408ad0();
            FUN_009885d0();
            local_8._0_1_ = 0x3a;
            FUN_009888f0();
            local_8._0_1_ = 0x3b;
            FUN_009885d0();
            local_8._0_1_ = 0x3c;
            FUN_00988f20();
            local_8._0_1_ = 0x3d;
            FUN_00988f20();
            local_8._0_1_ = 0x3e;
            FUN_00988f20();
            local_8 = CONCAT31(local_8._1_3_,0x3f);
            FUN_00408ed0();
            FUN_00408ad0();
            FUN_00408ad0();
            FUN_00408ad0();
            FUN_00408ad0();
            FUN_00408ad0();
          }
        }
        else {
          FUN_009885d0();
          local_8._0_1_ = 0x2c;
          FUN_009a8ee0();
          local_8._0_1_ = 0x2d;
          iVar6 = FUN_00475500();
          FUN_009a9880(*(undefined8 *)(iVar6 + 0x6c));
          local_8._0_1_ = 0x2e;
          FUN_00988f20();
          local_8._0_1_ = 0x2f;
          FUN_00408ed0();
          FUN_00408ad0();
          FUN_00408ad0();
          local_8._0_1_ = 0x2c;
          FUN_009a9740();
          local_8._0_1_ = 0;
          FUN_00408ad0();
          FUN_009885d0();
          local_8._0_1_ = 0x30;
          FUN_009888f0();
          local_8._0_1_ = 0x31;
          FUN_009885d0();
          local_8._0_1_ = 0x32;
          FUN_00988f20();
          local_8._0_1_ = 0x33;
          FUN_00988f20();
          local_8._0_1_ = 0x34;
          FUN_00988f20();
          local_8 = CONCAT31(local_8._1_3_,0x35);
          FUN_00408ed0();
          FUN_00408ad0();
          FUN_00408ad0();
          FUN_00408ad0();
          FUN_00408ad0();
          FUN_00408ad0();
        }
      }
      else {
        FUN_009885d0();
        local_8._0_1_ = 0x22;
        FUN_009a8ee0();
        local_8._0_1_ = 0x23;
        iVar6 = FUN_00475500();
        FUN_009a9880(*(undefined8 *)(iVar6 + 0x6c));
        local_8._0_1_ = 0x24;
        FUN_00988f20();
        local_8._0_1_ = 0x25;
        FUN_00408ed0();
        FUN_00408ad0();
        FUN_00408ad0();
        local_8._0_1_ = 0x22;
        FUN_009a9740();
        local_8._0_1_ = 0;
        FUN_00408ad0();
        FUN_009885d0();
        local_8._0_1_ = 0x26;
        FUN_009888f0();
        local_8._0_1_ = 0x27;
        FUN_009885d0();
        local_8._0_1_ = 0x28;
        FUN_00988f20();
        local_8._0_1_ = 0x29;
        FUN_00988f20();
        local_8._0_1_ = 0x2a;
        FUN_00988f20();
        local_8 = CONCAT31(local_8._1_3_,0x2b);
        FUN_00408ed0();
        FUN_00408ad0();
        FUN_00408ad0();
        FUN_00408ad0();
        FUN_00408ad0();
        FUN_00408ad0();
      }
      local_8._0_1_ = 0;
      FUN_00408ad0();
    }
  }
LAB_004b4d76:
  local_e0 = *param_3;
  if (*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + param_3[1] * 4) + 0xbcc) + 0x2c) != 0)
  {
    local_38 = 0xf;
    local_3c = 0;
    local_4c = local_4c & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0x54;
    FUN_009a8ee0();
    local_8._0_1_ = 0x55;
    iVar6 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar6 + 0x6c));
    local_8._0_1_ = 0x56;
    FUN_00988f20();
    local_8._0_1_ = 0x57;
    FUN_00408ed0();
    if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_54 = 0xf;
    local_58 = 0;
    local_68 = local_68 & 0xffffff00;
    if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_70 = 0xf;
    local_74 = 0;
    local_84 = local_84 & 0xffffff00;
    local_8._0_1_ = 0x54;
    FUN_009a9740();
    local_8._0_1_ = 0;
    if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_e0 = *param_3;
    local_38 = 0xf;
    local_3c = 0;
    local_4c = local_4c & 0xffffff00;
    FUN_00401000();
    FUN_00b31c00();
    local_8c = 0xf;
    local_90 = 0;
    local_a0 = local_a0 & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0x58;
    FUN_00988a50();
    local_8._0_1_ = 0x59;
    local_38 = 0xf;
    local_3c = 0;
    local_4c = local_4c & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0x5a;
    FUN_00988f20();
    local_8._0_1_ = 0x5b;
    FUN_00988f20();
    local_8._0_1_ = 0x5c;
    FUN_00988f20();
    local_8._0_1_ = 0x5d;
    FUN_00408ed0();
    if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_54 = 0xf;
    local_58 = 0;
    local_68 = local_68 & 0xffffff00;
    if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_70 = 0xf;
    local_74 = 0;
    local_84 = local_84 & 0xffffff00;
    if (0xf < local_a8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_a8 = 0xf;
    local_ac = 0;
    local_bc = local_bc & 0xffffff00;
    if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_38 = 0xf;
    local_3c = 0;
    local_4c = local_4c & 0xffffff00;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 0;
    local_1c = 0xf;
    local_20 = 0;
    local_30 = local_30 & 0xffffff00;
    if (0xf < local_8c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  FUN_00989330();
  if (local_c4 < 0x10) {
    ExceptionList = local_10;
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

