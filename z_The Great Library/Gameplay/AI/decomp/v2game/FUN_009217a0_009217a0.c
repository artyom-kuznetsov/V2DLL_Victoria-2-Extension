// FUN_009217a0 @ 009217a0 body=[[009217a0, 0092186a] [0092186e, 0092188e] [00921897, 00921a3d] [00921a41, 00921a85] [00921a89, 00921aab] [00921aaf, 00921af3] [00921af7, 00921b17] [00921b1b, 00921b3e] [00921b47, 00921df3] [00921df7, 00921e25] [00921e29, 00921e57] [00921e5b, 00921e89] [00921e8d, 00921ecd] [00921ed1, 00921eff] [00921f03, 00921f3d] [00921f41, 00921f60] [00921f66, 00921f9a]]


undefined1 * FUN_009217a0(undefined1 *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int in_ECX;
  int local_130;
  uint local_128 [4];
  undefined4 local_118;
  uint local_114;
  undefined1 local_10c [4];
  int local_108;
  undefined4 local_104;
  undefined4 local_100;
  uint local_f8 [4];
  undefined4 local_e8;
  uint local_e4;
  undefined1 local_dc [4];
  int local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  uint local_c8 [4];
  undefined4 local_b8;
  uint local_b4;
  uint local_ac;
  undefined4 local_9c;
  uint local_98;
  uint local_90;
  undefined4 local_80;
  uint local_7c;
  uint local_74;
  undefined4 local_64;
  uint local_60;
  uint local_58 [4];
  undefined4 local_48;
  uint local_44;
  uint local_3c;
  undefined4 local_2c;
  uint local_28;
  undefined4 local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b84c18;
  local_14 = ExceptionList;
  if (*(int *)(in_ECX + 0x2c) == *(int *)(in_ECX + 0xc)) {
    local_114 = 0xf;
    local_118 = 0;
    local_128[0] = local_128[0] & 0xffffff00;
    ExceptionList = &local_14;
    FUN_00409350("NO_GP_ACTION_ON_SELF",0x14);
    local_c = 0;
    FUN_009a8ee0(local_10c,local_128);
    local_c._0_1_ = 1;
    iVar4 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
    local_c = CONCAT31(local_c._1_3_,2);
    FUN_009adb70();
    if (local_108 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_108 = 0;
    local_104 = 0;
    local_100 = 0;
    if (0xf < local_114) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  else {
    iVar4 = *(int *)(in_ECX + 0x14);
    iVar2 = *(int *)(DAT_012587e4 + 4);
    iVar3 = *(int *)(*(int *)(*(int *)(iVar2 + *(int *)(in_ECX + 0xc) * 4) + 0xbe8) + iVar4 * 4);
    if ((*(char *)(*(int *)(iVar2 + *(int *)(iVar3 + 0xc) * 4) + 0x31) == '\0') &&
       (2 < *(int *)(iVar3 + 0x40))) {
      iVar3 = *(int *)(*(int *)(*(int *)(iVar2 + *(int *)(in_ECX + 0x2c) * 4) + 0xbe8) + iVar4 * 4);
      if (*(char *)(*(int *)(iVar2 + *(int *)(iVar3 + 0xc) * 4) + 0x31) == '\0') {
        local_130 = *(int *)(iVar3 + 0x40);
      }
      else {
        local_130 = 1;
      }
      iVar4 = *(int *)(*(int *)(*(int *)(iVar2 + *(int *)(in_ECX + 0xc) * 4) + 0xbe8) + iVar4 * 4);
      if (*(char *)(*(int *)(iVar2 + *(int *)(iVar4 + 0xc) * 4) + 0x31) == '\0') {
        iVar4 = *(int *)(iVar4 + 0x40);
      }
      else {
        iVar4 = 1;
      }
      if (iVar4 < local_130) {
        ExceptionList = &local_14;
        iVar4 = FUN_009311f0();
        pcVar5 = (&PTR_s_REL_HOSTILE_00f09158)[iVar4];
        local_e4 = 0xf;
        local_e8 = 0;
        local_f8[0] = local_f8[0] & 0xffffff00;
        pcVar6 = pcVar5;
        do {
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        FUN_00409350(pcVar5,(int)pcVar6 - (int)(pcVar5 + 1));
        local_c = 0xb;
        iVar4 = FUN_009311f0();
        pcVar5 = (&PTR_s_REL_HOSTILE_00f09158)[iVar4];
        local_114 = 0xf;
        local_118 = 0;
        local_128[0] = local_128[0] & 0xffffff00;
        pcVar6 = pcVar5;
        do {
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        FUN_00409350(pcVar5,(int)pcVar6 - (int)(pcVar5 + 1));
        local_c._0_1_ = 0xc;
        FUN_009a8ee0(local_10c,local_f8);
        local_c._0_1_ = 0xd;
        iVar4 = FUN_00475500();
        uVar7 = FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
        local_c._0_1_ = 0xe;
        FUN_0042c180(local_58,uVar7);
        local_c._0_1_ = 0xf;
        FUN_009a8ee0(local_dc,local_128);
        local_c._0_1_ = 0x10;
        iVar4 = FUN_00475500();
        uVar7 = FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
        local_c._0_1_ = 0x11;
        uVar8 = FUN_004f97a0();
        local_c._0_1_ = 0x12;
        local_20 = *(undefined4 *)(in_ECX + 0x28);
        uVar9 = FUN_004f97a0();
        local_c._0_1_ = 0x13;
        FUN_0043e9a0(local_c8,"TARGET",uVar9,"RECIPIENT",uVar8,"OPINION",uVar7);
        local_c._0_1_ = 0x14;
        FUN_00988f20();
        if (0xf < local_b4) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_b4 = 0xf;
        local_b8 = 0;
        local_c8[0] = local_c8[0] & 0xffffff00;
        if (0xf < local_98) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_98 = 0xf;
        local_9c = 0;
        local_ac = local_ac & 0xffffff00;
        if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_7c = 0xf;
        local_80 = 0;
        local_90 = local_90 & 0xffffff00;
        if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_60 = 0xf;
        local_64 = 0;
        local_74 = local_74 & 0xffffff00;
        local_c._0_1_ = 0xf;
        FUN_009a9740();
        if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_44 = 0xf;
        local_48 = 0;
        local_58[0] = local_58[0] & 0xffffff00;
        if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_28 = 0xf;
        local_2c = 0;
        local_3c = local_3c & 0xffffff00;
        local_c = CONCAT31(local_c._1_3_,0xc);
        FUN_009a9740();
        if (0xf < local_114) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_114 = 0xf;
        local_118 = 0;
        local_128[0] = local_128[0] & 0xffffff00;
        if (0xf < local_e4) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      }
      else {
        ExceptionList = &local_14;
        *(undefined4 *)(param_1 + 0x14) = 0xf;
        *(undefined4 *)(param_1 + 0x10) = 0;
        *param_1 = 0;
        FUN_00409350(&DAT_00ded94d,0);
      }
    }
    else {
      local_e4 = 0xf;
      local_e8 = 0;
      local_f8[0] = local_f8[0] & 0xffffff00;
      pcVar5 = PTR_s_REL_CORDIAL_00f09164;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      ExceptionList = &local_14;
      FUN_00409350(PTR_s_REL_CORDIAL_00f09164,(int)pcVar5 - (int)(PTR_s_REL_CORDIAL_00f09164 + 1));
      local_c = 3;
      pcVar6 = (char *)FUN_00931230();
      local_114 = 0xf;
      local_118 = 0;
      local_128[0] = local_128[0] & 0xffffff00;
      pcVar5 = pcVar6;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      FUN_00409350(pcVar6,(int)pcVar5 - (int)(pcVar6 + 1));
      local_c._0_1_ = 4;
      FUN_009a8ee0(local_dc,local_f8);
      local_c._0_1_ = 5;
      iVar4 = FUN_00475500();
      uVar7 = FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
      local_c._0_1_ = 6;
      FUN_009a8ee0(local_10c,local_128);
      local_c._0_1_ = 7;
      iVar4 = FUN_00475500();
      uVar8 = FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
      local_c._0_1_ = 8;
      FUN_0043ec10(param_1,"CURRENT",uVar8,"NEEDED",uVar7);
      if (0xf < local_98) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_98 = 0xf;
      local_9c = 0;
      local_ac = local_ac & 0xffffff00;
      local_c._0_1_ = 9;
      FUN_009adb70();
      if (local_108 != 0) {
        FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_108 = 0;
      local_104 = 0;
      local_100 = 0;
      if (0xf < local_b4) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_b4 = 0xf;
      local_b8 = 0;
      local_c8[0] = local_c8[0] & 0xffffff00;
      local_c = CONCAT31(local_c._1_3_,10);
      FUN_009adb70();
      if (local_d8 != 0) {
        FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_d8 = 0;
      local_d4 = 0;
      local_d0 = 0;
      if (0xf < local_114) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_114 = 0xf;
      local_118 = 0;
      local_128[0] = local_128[0] & 0xffffff00;
      if (0xf < local_e4) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
  }
  ExceptionList = local_14;
  return param_1;
}

