// FUN_00923ad0 @ 00923ad0 body=[[00923ad0, 00923c4b] [00923c4f, 00923c74] [00923c78, 00923cb6] [00923cbc, 00923cdd] [00923ce1, 00923d0e] [00923d17, 00923fe4] [00923fe8, 0092401a] [0092401e, 00924049] [0092404d, 00924078] [0092407c, 009240bc] [009240c0, 009240e1] [009240e5, 00924115] [00924119, 0092415a] [0092415e, 00924179] [0092417d, 0092419d] [009241a1, 009241f5]]


undefined1 * FUN_00923ad0(undefined1 *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char *pcVar8;
  int in_ECX;
  int iVar9;
  int iVar10;
  undefined1 local_130 [4];
  int local_12c;
  undefined4 local_128;
  undefined4 local_124;
  uint local_11c [4];
  undefined4 local_10c;
  uint local_108;
  uint local_100;
  int local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  uint local_ec;
  uint local_e4 [4];
  undefined4 local_d4;
  uint local_d0;
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
  puStack_10 = &LAB_00b84953;
  local_14 = ExceptionList;
  iVar5 = *(int *)(DAT_012587e4 + 4);
  iVar2 = *(int *)(in_ECX + 0x14);
  iVar10 = *(int *)(*(int *)(*(int *)(iVar5 + *(int *)(in_ECX + 0x2c) * 4) + 0xbe8) + iVar2 * 4);
  if ((*(char *)(*(int *)(iVar5 + *(int *)(iVar10 + 0xc) * 4) + 0x31) == '\0') &&
     (*(int *)(iVar10 + 0x40) < 1)) {
    local_108 = 0xf;
    local_10c = 0;
    local_11c[0] = local_11c[0] & 0xffffff00;
    pcVar3 = PTR_s_REL_HOSTILE_00f09158;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    ExceptionList = &local_14;
    FUN_00409350(PTR_s_REL_HOSTILE_00f09158,(int)pcVar3 - (int)(PTR_s_REL_HOSTILE_00f09158 + 1));
    local_c = 0;
    uVar4 = FUN_004f97a0();
    local_c._0_1_ = 1;
    FUN_009a8ee0(local_130,local_11c);
    local_c._0_1_ = 2;
    iVar5 = FUN_00475500();
    uVar6 = FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
    local_c._0_1_ = 3;
    uVar7 = FUN_004f97a0();
    local_c._0_1_ = 4;
    FUN_0043e9a0(param_1,"RECIPIENT",uVar7,"OPINION",uVar6,"TARGET",uVar4);
    if (0xf < local_d0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_d0 = 0xf;
    local_d4 = 0;
    local_e4[0] = local_e4[0] & 0xffffff00;
    if (0xf < local_ec) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_ec = 0xf;
    local_f0 = 0;
    local_100 = local_100 & 0xffffff00;
    local_c = CONCAT31(local_c._1_3_,5);
    FUN_009adb70();
    if (local_12c != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_12c = 0;
    local_128 = 0;
    local_124 = 0;
    if (0xf < local_b4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_b4 = 0xf;
    local_b8 = 0;
    local_c8[0] = local_c8[0] & 0xffffff00;
    if (0xf < local_108) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  else {
    iVar10 = *(int *)(*(int *)(*(int *)(iVar5 + *(int *)(in_ECX + 0x2c) * 4) + 0xbe8) + iVar2 * 4);
    if (*(char *)(*(int *)(iVar5 + *(int *)(iVar10 + 0xc) * 4) + 0x31) == '\0') {
      iVar10 = *(int *)(iVar10 + 0x40);
    }
    else {
      iVar10 = 1;
    }
    iVar9 = *(int *)(*(int *)(*(int *)(iVar5 + *(int *)(in_ECX + 0xc) * 4) + 0xbe8) + iVar2 * 4);
    if (*(char *)(*(int *)(iVar5 + *(int *)(iVar9 + 0xc) * 4) + 0x31) == '\0') {
      iVar9 = *(int *)(iVar9 + 0x40);
    }
    else {
      iVar9 = 1;
    }
    if (iVar9 < iVar10) {
      iVar2 = *(int *)(*(int *)(*(int *)(iVar5 + *(int *)(in_ECX + 0xc) * 4) + 0xbe8) + iVar2 * 4);
      if (*(char *)(*(int *)(iVar5 + *(int *)(iVar2 + 0xc) * 4) + 0x31) == '\0') {
        iVar5 = *(int *)(iVar2 + 0x40);
      }
      else {
        iVar5 = 1;
      }
      pcVar3 = (&PTR_s_REL_HOSTILE_00f09158)[iVar5];
      local_d0 = 0xf;
      local_d4 = 0;
      local_e4[0] = local_e4[0] & 0xffffff00;
      pcVar8 = pcVar3;
      do {
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      ExceptionList = &local_14;
      FUN_00409350(pcVar3,(int)pcVar8 - (int)(pcVar3 + 1));
      local_c = 6;
      iVar5 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x2c) * 4) +
                               0xbe8) + *(int *)(in_ECX + 0x14) * 4);
      if (*(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar5 + 0xc) * 4) + 0x31) == '\0'
         ) {
        iVar5 = *(int *)(iVar5 + 0x40);
      }
      else {
        iVar5 = 1;
      }
      pcVar3 = (&PTR_s_REL_HOSTILE_00f09158)[iVar5];
      local_108 = 0xf;
      local_10c = 0;
      local_11c[0] = local_11c[0] & 0xffffff00;
      pcVar8 = pcVar3;
      do {
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      FUN_00409350(pcVar3,(int)pcVar8 - (int)(pcVar3 + 1));
      local_c._0_1_ = 7;
      FUN_009a8ee0(&local_100,local_e4);
      local_c._0_1_ = 8;
      iVar5 = FUN_00475500();
      uVar4 = FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
      local_c._0_1_ = 9;
      FUN_0042c180(local_58,uVar4);
      local_c._0_1_ = 10;
      FUN_009a8ee0(local_130,local_11c);
      local_c._0_1_ = 0xb;
      iVar5 = FUN_00475500();
      uVar4 = FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
      local_c._0_1_ = 0xc;
      uVar6 = FUN_004f97a0();
      local_c._0_1_ = 0xd;
      local_20 = *(undefined4 *)(in_ECX + 0x28);
      uVar7 = FUN_004f97a0();
      local_c._0_1_ = 0xe;
      FUN_0043e9a0(local_c8,"TARGET",uVar7,"RECIPIENT",uVar6,"OPINION",uVar4);
      local_c._0_1_ = 0xf;
      FUN_00988f20();
      if (0xf < local_b4) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_b4 = 0xf;
      local_b8 = 0;
      local_c8[0] = local_c8[0] & 0xffffff00;
      if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_60 = 0xf;
      local_64 = 0;
      local_74 = local_74 & 0xffffff00;
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
      local_c._0_1_ = 0x10;
      FUN_009adb70();
      if (local_12c != 0) {
        FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_12c = 0;
      local_128 = 0;
      local_124 = 0;
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
      local_c = CONCAT31(local_c._1_3_,0x11);
      FUN_009adb70();
      if (local_fc != 0) {
        FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_fc = 0;
      local_f8 = 0;
      local_f4 = 0;
      if (0xf < local_108) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_108 = 0xf;
      local_10c = 0;
      local_11c[0] = local_11c[0] & 0xffffff00;
      if (0xf < local_d0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      ExceptionList = local_14;
      return param_1;
    }
    ExceptionList = &local_14;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    FUN_00409350(&DAT_00ded94d,0);
  }
  ExceptionList = local_14;
  return param_1;
}

