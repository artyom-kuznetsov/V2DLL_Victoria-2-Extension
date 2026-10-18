// FUN_00939930 @ 00939930 body=[[00939930, 00939a83] [00939a87, 00939ab6] [00939aba, 00939b02] [00939b08, 00939b2d] [00939b31, 00939ed9] [00939ee0, 0093aa88]]


undefined4
FUN_00939930(int param_1,undefined4 param_2,undefined4 *param_3,char param_4,char param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined1 local_224 [112];
  undefined1 local_1b4 [104];
  uint local_14c;
  undefined4 local_13c;
  uint local_138;
  uint local_130;
  undefined4 local_120;
  uint local_11c;
  uint local_114;
  undefined4 local_104;
  uint local_100;
  undefined4 local_dc;
  int local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  char *local_c0 [3];
  undefined **local_b4 [24];
  undefined4 *local_54;
  uint local_4c;
  undefined4 local_3c;
  uint local_38;
  int local_30;
  int local_28;
  undefined4 local_24;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b83b36;
  local_10 = ExceptionList;
  local_14 = 0;
  local_54 = (undefined4 *)*param_3;
  iVar3 = *(int *)(param_1 + 0x30);
  iVar2 = *(int *)(param_1 + 0x2c);
  if (iVar2 != iVar3) {
    do {
      if (*(int *)(iVar2 + 4) == param_3[1]) break;
      iVar2 = iVar2 + 8;
    } while (iVar2 != iVar3);
    if (iVar2 == iVar3) goto LAB_00939983;
LAB_009399a5:
    local_100 = 0xf;
    local_104 = 0;
    local_114 = local_114 & 0xffffff00;
    ExceptionList = &local_10;
    FUN_00409350();
    local_8 = 1;
    FUN_009a8ee0();
    local_8._0_1_ = 2;
    FUN_00475500();
    FUN_009a9880();
    local_8._0_1_ = 3;
    FUN_00409350();
    FUN_009c98f0();
    local_8._0_1_ = 4;
    FUN_00988f20();
    local_14 = 1;
    if (0xf < local_138) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_138 = 0xf;
    local_13c = 0;
    local_14c = local_14c & 0xffffff00;
    if (0xf < local_11c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_11c = 0xf;
    local_120 = 0;
    local_130 = local_130 & 0xffffff00;
    local_8 = CONCAT31(local_8._1_3_,5);
    FUN_009adb70();
    if (local_d0 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_d0 = 0;
    local_cc = 0;
    local_c8 = 0;
    uVar7 = local_100;
joined_r0x00939b20:
    if (uVar7 < 0x10) {
      ExceptionList = local_10;
      return param_2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
LAB_00939983:
  iVar3 = *(int *)(param_1 + 0x40);
  iVar2 = *(int *)(param_1 + 0x3c);
  if (iVar2 != iVar3) {
    do {
      if (*(int *)(iVar2 + 4) == param_3[1]) break;
      iVar2 = iVar2 + 8;
    } while (iVar2 != iVar3);
    if (iVar2 != iVar3) goto LAB_009399a5;
  }
  ExceptionList = &local_10;
  if ((param_5 == '\0') &&
     ((ExceptionList = &local_10, cVar1 = FUN_0093c590(), cVar1 != '\0' ||
      (cVar1 = FUN_0093c590(), cVar1 != '\0')))) {
    local_38 = 0xf;
    local_3c = 0;
    local_4c = local_4c & 0xffffff00;
    FUN_00409350();
    local_8 = 6;
    FUN_009a8ee0();
    local_8._0_1_ = 7;
    FUN_00475500();
    FUN_009a9880();
    local_14 = 1;
    local_8 = CONCAT31(local_8._1_3_,6);
    FUN_009a9740();
    uVar7 = local_38;
    goto joined_r0x00939b20;
  }
  iVar3 = *(int *)(*(int *)(DAT_012587e4 + 4) + param_3[1] * 4);
  local_54 = *(undefined4 **)(iVar3 + 0x1428);
  local_30 = iVar3;
  if ((*(int *)(iVar3 + 0x142c) != 0) &&
     ((*(char *)(iVar3 + 0xcf5) == '\0' && (*(char *)(iVar3 + 0xcf4) == '\0')))) {
    local_1c = local_54;
    if (param_4 == '\0') {
      local_18 = *(int *)(iVar3 + 0x142c);
      cVar1 = FUN_0042bb00();
      if (cVar1 != '\0') {
        FUN_009885d0();
        local_8 = 10;
        FUN_009a8ee0();
        local_8._0_1_ = 0xb;
        FUN_00475500();
        FUN_009a9880();
        local_14 = 1;
        local_8 = CONCAT31(local_8._1_3_,10);
        FUN_009a9740();
        FUN_00408ad0();
        ExceptionList = local_10;
        return param_2;
      }
    }
    else {
      local_18 = *(int *)(iVar3 + 0x142c);
      cVar1 = FUN_0042bb00();
      if (cVar1 != '\0') {
        FUN_009885d0();
        local_8 = 8;
        FUN_009a8ee0();
        local_8._0_1_ = 9;
        FUN_00475500();
        FUN_009a9880();
        local_8 = CONCAT31(local_8._1_3_,8);
        goto LAB_00939cd0;
      }
    }
  }
  if ((*(char *)(param_1 + 0xfd) == '\0') || (*(char *)(DAT_012588e8 + 0xb94) != '\0')) {
    local_54 = *(undefined4 **)(iVar3 + 0xda8);
    local_24 = 0;
    local_28 = FUN_00aae9af();
    if (local_28 == 0) {
      local_c0[0] = (char *)0x0;
      std::exception::exception((exception *)local_b4,local_c0);
      local_b4[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8();
    }
    *(int *)local_28 = local_28;
    *(int *)(local_28 + 4) = local_28;
    *(int *)(local_28 + 8) = local_28;
    *(undefined1 *)(local_28 + 0x14) = 1;
    *(undefined1 *)(local_28 + 0x15) = 1;
    local_8 = 0xe;
    while ((iVar3 = local_30, *(undefined4 **)(local_30 + 0xda8) <= local_54 &&
           (local_54 < *(undefined4 **)(local_30 + 0xdac)))) {
      local_18 = local_54[1];
      puVar6 = local_54 + 2;
      local_1c = *local_54;
      iVar3 = *(int *)(param_1 + 0x2c);
      iVar2 = *(int *)(param_1 + 0x30);
      local_54 = puVar6;
      if (iVar3 != iVar2) {
        do {
          if (*(int *)(iVar3 + 4) == local_18) break;
          iVar3 = iVar3 + 8;
        } while (iVar3 != iVar2);
        if (iVar3 != iVar2) {
          FUN_0055dd40();
          if (param_4 != '\0') {
            local_8._0_1_ = 0xf;
            FUN_0042c180();
            local_8._0_1_ = 0x10;
            FUN_009885d0();
            FUN_009c98f0();
            local_8._0_1_ = 0x11;
            FUN_00988f20();
            local_14 = 1;
            FUN_00408ad0();
            FUN_00408ad0();
            FUN_00408ad0();
            local_8 = (uint)local_8._1_3_ << 8;
            FUN_00929b90();
            ExceptionList = local_10;
            return param_2;
          }
          local_8._0_1_ = 0x12;
          FUN_0042c180();
          local_8._0_1_ = 0x13;
          FUN_009885d0();
          FUN_009c98f0();
          local_8._0_1_ = 0x14;
          FUN_00988f20();
          local_14 = 1;
          FUN_00408ad0();
          FUN_00408ad0();
          FUN_00408ad0();
          local_8 = (uint)local_8._1_3_ << 8;
          FUN_00929b90();
          ExceptionList = local_10;
          return param_2;
        }
      }
      iVar3 = *(int *)(param_1 + 0x40);
      iVar2 = *(int *)(param_1 + 0x3c);
      if (iVar2 != iVar3) {
        do {
          if (*(int *)(iVar2 + 4) == local_18) break;
          iVar2 = iVar2 + 8;
        } while (iVar2 != iVar3);
        if (iVar2 != iVar3) {
          FUN_0055dd40();
          if (param_4 != '\0') {
            local_8._0_1_ = 0x15;
            FUN_0042c180();
            local_8._0_1_ = 0x16;
            FUN_009885d0();
            FUN_009c98f0();
            local_8._0_1_ = 0x17;
            FUN_00988f20();
            local_14 = 1;
            FUN_00408ad0();
            FUN_00408ad0();
            FUN_00408ad0();
            local_8 = (uint)local_8._1_3_ << 8;
            FUN_00929b90();
            ExceptionList = local_10;
            return param_2;
          }
          local_8._0_1_ = 0x18;
          FUN_0042c180();
          local_8._0_1_ = 0x19;
          FUN_009885d0();
          FUN_009c98f0();
          local_8._0_1_ = 0x1a;
          FUN_00988f20();
          local_14 = 1;
          FUN_00408ad0();
          FUN_00408ad0();
          FUN_00408ad0();
          local_8 = (uint)local_8._1_3_ << 8;
          FUN_00929b90();
          ExceptionList = local_10;
          return param_2;
        }
      }
      iVar3 = *(int *)(*(int *)(*(int *)(local_30 + 0xbe8) + local_18 * 4) + 0x34);
      iVar2 = *(int *)(iVar3 + 0x30);
      iVar4 = *(int *)(iVar3 + 0x2c);
      if (iVar4 == iVar2) {
LAB_00939f13:
        for (uVar7 = *(uint *)(iVar3 + 0x3c);
            (*(uint *)(iVar3 + 0x3c) <= uVar7 && (uVar7 < *(uint *)(iVar3 + 0x40)));
            uVar7 = uVar7 + 8) {
          FUN_004ca000();
          FUN_0093de60();
        }
      }
      else {
        do {
          if (*(int *)(iVar4 + 4) == param_3[1]) break;
          iVar4 = iVar4 + 8;
        } while (iVar4 != iVar2);
        if (iVar4 == iVar2) goto LAB_00939f13;
        for (uVar7 = *(uint *)(iVar3 + 0x2c);
            (*(uint *)(iVar3 + 0x2c) <= uVar7 && (uVar7 < *(uint *)(iVar3 + 0x30)));
            uVar7 = uVar7 + 8) {
          FUN_004ca000();
          FUN_0093de60();
        }
      }
    }
    if (param_4 == '\0') {
      puVar6 = *(undefined4 **)(param_1 + 0x2c);
      puVar8 = puVar6;
      do {
        do {
          if ((puVar8 < puVar6) || (*(undefined4 **)(param_1 + 0x30) <= puVar8)) goto LAB_0093a8e8;
          local_1c = *puVar8;
          iVar2 = puVar8[1];
          puVar8 = puVar8 + 2;
          local_18 = iVar2;
          piVar5 = (int *)FUN_0093d0f0();
          if (*piVar5 != local_28) {
            FUN_0055dd40();
            local_8._0_1_ = 0x2c;
            FUN_0042c180();
            local_8._0_1_ = 0x2d;
            FUN_009885d0();
            FUN_009c98f0();
            local_8._0_1_ = 0x2e;
            FUN_00988f20();
            local_14 = 1;
            FUN_00408ad0();
            FUN_00408ad0();
            FUN_00408ad0();
            local_8 = (uint)local_8._1_3_ << 8;
            FUN_00929b90();
            ExceptionList = local_10;
            return param_2;
          }
          iVar2 = *(int *)(*(int *)(iVar3 + 0xbe8) + iVar2 * 4);
        } while ((*(int *)(iVar2 + 0x34) != 0) ||
                (*(int *)(iVar2 + 0x6c) <= *(int *)(DAT_012588e8 + 0xb0c)));
        if ((*(char *)(iVar3 + 0xcf5) == '\0') && (*(char *)(iVar3 + 0xcf4) == '\0')) break;
        iVar2 = *(int *)(param_1 + 0x30);
        local_dc = *(undefined4 *)(iVar3 + 0xcf8);
        iVar4 = *(int *)(param_1 + 0x2c);
        if (iVar4 == iVar2) break;
        do {
          if (*(int *)(iVar4 + 4) == *(int *)(iVar3 + 0xcfc)) break;
          iVar4 = iVar4 + 8;
        } while (iVar4 != iVar2);
      } while (iVar4 != iVar2);
      FUN_009885d0();
      local_8._0_1_ = 0x2f;
      FUN_009885d0();
      local_8._0_1_ = 0x30;
      FUN_009885d0();
      local_8._0_1_ = 0x31;
      FUN_0043b700();
      local_8._0_1_ = 0x32;
      FUN_00988fa0();
      local_8._0_1_ = 0x33;
      FUN_0042c180();
      local_8._0_1_ = 0x34;
      FUN_0055dd40();
      local_8._0_1_ = 0x35;
      FUN_009a8ee0();
      local_8._0_1_ = 0x36;
      FUN_00475500();
      FUN_009a9880();
      local_8._0_1_ = 0x37;
      FUN_009885d0();
      FUN_009c98f0(local_224,0);
      local_8._0_1_ = 0x38;
      FUN_00988f20();
      local_8._0_1_ = 0x39;
      FUN_00988f20();
      local_8._0_1_ = 0x3a;
      FUN_00988f20();
      local_8._0_1_ = 0x3b;
      FUN_00988f20();
      local_8._0_1_ = 0x3c;
      FUN_00988f20();
      local_14 = 1;
      FUN_00408ad0();
      FUN_00408ad0();
      FUN_00408ad0();
      FUN_00408ad0();
      FUN_00408ad0();
      FUN_00408ad0();
      local_8._0_1_ = 0x35;
      FUN_009a9740();
      FUN_00408ad0();
      FUN_00408ad0();
      FUN_00408ad0();
      FUN_00408ad0();
      FUN_00408ad0();
      FUN_00408ad0();
      FUN_00408ad0();
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_00929b90();
      ExceptionList = local_10;
      return param_2;
    }
    puVar6 = *(undefined4 **)(param_1 + 0x3c);
    puVar8 = puVar6;
    do {
      do {
        if ((puVar8 < puVar6) || (*(undefined4 **)(param_1 + 0x40) <= puVar8)) {
LAB_0093a8e8:
          cVar1 = FUN_006875e0();
          if (cVar1 != '\0') {
            FUN_0090e250();
            local_8._0_1_ = 0x3d;
            FUN_00841870();
            FUN_00615690();
            local_14 = 1;
            local_8 = (uint)local_8._1_3_ << 8;
            FUN_00929b90();
            ExceptionList = local_10;
            return param_2;
          }
          FUN_009885d0();
          local_8._0_1_ = 0x3e;
          FUN_009a8ee0();
          local_8._0_1_ = 0x3f;
          FUN_00475500();
          FUN_009a9880();
          local_8._0_1_ = 0x40;
          FUN_009885d0();
          FUN_009c98f0();
          local_8._0_1_ = 0x41;
          FUN_00988f20();
          local_14 = 1;
          FUN_00408ad0();
          FUN_00408ad0();
          local_8._0_1_ = 0x3e;
          FUN_009a9740();
          FUN_00408ad0();
          local_8 = (uint)local_8._1_3_ << 8;
          FUN_00929b90();
          ExceptionList = local_10;
          return param_2;
        }
        local_1c = *puVar8;
        iVar2 = puVar8[1];
        puVar8 = puVar8 + 2;
        local_18 = iVar2;
        piVar5 = (int *)FUN_0093d0f0();
        if (*piVar5 != local_28) {
          FUN_0055dd40();
          local_8._0_1_ = 0x1b;
          FUN_0042c180();
          local_8._0_1_ = 0x1c;
          FUN_009885d0();
          FUN_009c98f0();
          local_8._0_1_ = 0x1d;
          FUN_00988f20();
          local_14 = 1;
          FUN_00408ad0();
          FUN_00408ad0();
          FUN_00408ad0();
          local_8 = (uint)local_8._1_3_ << 8;
          FUN_00929b90();
          ExceptionList = local_10;
          return param_2;
        }
        iVar2 = *(int *)(*(int *)(iVar3 + 0xbe8) + iVar2 * 4);
      } while ((*(int *)(iVar2 + 0x34) != 0) ||
              (*(int *)(iVar2 + 0x6c) <= *(int *)(DAT_012588e8 + 0xb0c)));
      if ((*(char *)(iVar3 + 0xcf5) == '\0') && (*(char *)(iVar3 + 0xcf4) == '\0')) break;
      iVar2 = *(int *)(param_1 + 0x30);
      local_dc = *(undefined4 *)(iVar3 + 0xcf8);
      iVar4 = *(int *)(param_1 + 0x2c);
      if (iVar4 == iVar2) break;
      do {
        if (*(int *)(iVar4 + 4) == *(int *)(iVar3 + 0xcfc)) break;
        iVar4 = iVar4 + 8;
      } while (iVar4 != iVar2);
    } while (iVar4 != iVar2);
    FUN_009885d0();
    local_8._0_1_ = 0x1e;
    FUN_009885d0();
    local_8._0_1_ = 0x1f;
    FUN_009885d0();
    local_8._0_1_ = 0x20;
    FUN_0043b700();
    local_8._0_1_ = 0x21;
    FUN_00988fa0();
    local_8._0_1_ = 0x22;
    FUN_0042c180();
    local_8._0_1_ = 0x23;
    FUN_0055dd40();
    local_8._0_1_ = 0x24;
    FUN_009a8ee0();
    local_8._0_1_ = 0x25;
    FUN_00475500();
    FUN_009a9880();
    local_8._0_1_ = 0x26;
    FUN_009885d0();
    FUN_009c98f0(local_1b4,0);
    local_8._0_1_ = 0x27;
    FUN_00988f20();
    local_8._0_1_ = 0x28;
    FUN_00988f20();
    local_8._0_1_ = 0x29;
    FUN_00988f20();
    local_8._0_1_ = 0x2a;
    FUN_00988f20();
    local_8._0_1_ = 0x2b;
    FUN_00988f20();
    local_14 = 1;
    FUN_00408ad0();
    FUN_00408ad0();
    FUN_00408ad0();
    FUN_00408ad0();
    FUN_00408ad0();
    FUN_00408ad0();
    local_8._0_1_ = 0x24;
    FUN_009a9740();
    FUN_00408ad0();
    FUN_00408ad0();
    FUN_00408ad0();
    FUN_00408ad0();
    FUN_00408ad0();
    FUN_00408ad0();
    FUN_00408ad0();
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_00929b90();
    ExceptionList = local_10;
    return param_2;
  }
  FUN_009885d0();
  local_8 = 0xc;
  FUN_009a8ee0();
  local_8._0_1_ = 0xd;
  FUN_00475500();
  FUN_009a9880();
  local_8 = CONCAT31(local_8._1_3_,0xc);
LAB_00939cd0:
  local_14 = 1;
  FUN_009a9740();
  FUN_00408ad0();
  ExceptionList = local_10;
  return param_2;
}

