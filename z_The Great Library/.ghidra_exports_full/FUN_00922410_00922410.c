// FUN_00922410 @ 00922410 body=[[00922410, 00922480] [00922484, 0092252e] [00922532, 009225e5] [009225e9, 00922605] [00922609, 0092267c] [00922680, 009227c9] [009227cd, 00922813] [00922817, 00922839] [0092283d, 00922882] [00922886, 009228a6] [009228aa, 009228ce] [009228eb, 00922b96] [00922b9a, 00922bca] [00922bce, 00922bfc] [00922c00, 00922c2e] [00922c32, 00922c72] [00922c76, 00922ca4] [00922ca8, 00922ce2] [00922ce6, 00922d09] [00922d26, 00922d5b]]


undefined1 * FUN_00922410(undefined1 *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int in_ECX;
  char *pcVar9;
  int local_13c;
  uint local_134;
  int local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  uint local_120;
  uint local_118 [4];
  undefined4 local_108;
  uint local_104;
  undefined1 local_fc [4];
  int local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_e8;
  uint local_e0 [4];
  undefined4 local_d0;
  uint local_cc;
  uint local_c4 [4];
  undefined4 local_b4;
  uint local_b0;
  uint local_a8;
  undefined4 local_98;
  uint local_94;
  uint local_8c [4];
  undefined4 local_7c;
  uint local_78;
  uint local_6c;
  undefined4 local_5c;
  uint local_58;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34;
  undefined4 local_24;
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b84b19;
  local_14 = ExceptionList;
  local_120 = 0xf;
  local_124 = 0;
  local_134 = local_134 & 0xffffff00;
  ExceptionList = &local_14;
  FUN_00409350(&DAT_00dff69c,4);
  local_c = 0;
  FUN_00a840b0();
  if (0xf < local_120) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_120 = 0xf;
  local_124 = 0;
  local_134 = local_134 & 0xffffff00;
  local_c = 1;
  pcVar4 = __itoa(*(int *)(*(int *)(DAT_012586dc + 0x30) + 0x2f4) / 1000,(char *)local_8c,10);
  pcVar9 = pcVar4;
  do {
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(pcVar4,(int)pcVar9 - (int)(pcVar4 + 1));
  local_c = 2;
  FUN_00a840b0();
  local_c = 0xffffffff;
  if (0xf < local_120) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_120 = 0xf;
  local_124 = 0;
  local_134 = local_134 & 0xffffff00;
  if (*(int *)(in_ECX + 0x2c) == *(int *)(in_ECX + 0xc)) {
    local_104 = 0xf;
    local_108 = 0;
    local_118[0] = local_118[0] & 0xffffff00;
    FUN_00409350("NO_GP_ACTION_ON_SELF",0x14);
    local_c = 3;
    FUN_009a8ee0(local_fc,local_118);
    local_c._0_1_ = 4;
    iVar5 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
    local_c = CONCAT31(local_c._1_3_,5);
    FUN_009adb70();
    if (local_f8 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_f8 = 0;
    local_f4 = 0;
    local_f0 = 0;
    if (0xf < local_104) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  else {
    iVar5 = *(int *)(DAT_012587e4 + 4);
    iVar2 = *(int *)(in_ECX + 0x14);
    iVar3 = *(int *)(*(int *)(*(int *)(iVar5 + *(int *)(in_ECX + 0xc) * 4) + 0xbe8) + iVar2 * 4);
    if ((*(char *)(*(int *)(iVar5 + *(int *)(iVar3 + 0xc) * 4) + 0x31) == '\0') &&
       (3 < *(int *)(iVar3 + 0x40))) {
      iVar3 = *(int *)(*(int *)(*(int *)(iVar5 + *(int *)(in_ECX + 0x2c) * 4) + 0xbe8) + iVar2 * 4);
      if (*(char *)(*(int *)(iVar5 + *(int *)(iVar3 + 0xc) * 4) + 0x31) == '\0') {
        local_13c = *(int *)(iVar3 + 0x40);
      }
      else {
        local_13c = 1;
      }
      iVar2 = *(int *)(*(int *)(*(int *)(iVar5 + *(int *)(in_ECX + 0xc) * 4) + 0xbe8) + iVar2 * 4);
      local_e8 = *(undefined4 *)(iVar2 + 8);
      if (*(char *)(*(int *)(iVar5 + *(int *)(iVar2 + 0xc) * 4) + 0x31) == '\0') {
        iVar5 = *(int *)(iVar2 + 0x40);
      }
      else {
        iVar5 = 1;
      }
      if (local_13c <= iVar5) {
        *(undefined4 *)(param_1 + 0x14) = 0xf;
        *(undefined4 *)(param_1 + 0x10) = 0;
        *param_1 = 0;
        FUN_00409350(&DAT_00ded94d,0);
        ExceptionList = local_14;
        return param_1;
      }
      local_e8 = *(undefined4 *)(in_ECX + 8);
      iVar5 = FUN_009311f0();
      pcVar9 = (&PTR_s_REL_HOSTILE_00f09158)[iVar5];
      local_d0 = 0;
      local_cc = 0xf;
      local_e0[0] = local_e0[0] & 0xffffff00;
      pcVar4 = pcVar9;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      FUN_00409350(pcVar9,(int)pcVar4 - (int)(pcVar9 + 1));
      local_c = 0xe;
      local_e8 = *(undefined4 *)(in_ECX + 0x28);
      iVar5 = FUN_009311f0();
      pcVar9 = (&PTR_s_REL_HOSTILE_00f09158)[iVar5];
      local_104 = 0xf;
      local_108 = 0;
      local_118[0] = local_118[0] & 0xffffff00;
      pcVar4 = pcVar9;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      FUN_00409350(pcVar9,(int)pcVar4 - (int)(pcVar9 + 1));
      local_c._0_1_ = 0xf;
      FUN_009a8ee0(local_fc,local_e0);
      local_c._0_1_ = 0x10;
      iVar5 = FUN_00475500();
      uVar6 = FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
      local_c._0_1_ = 0x11;
      FUN_0042c180(local_50,uVar6);
      local_c._0_1_ = 0x12;
      FUN_009a8ee0(&local_134,local_118);
      local_c._0_1_ = 0x13;
      iVar5 = FUN_00475500();
      uVar6 = FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
      local_c._0_1_ = 0x14;
      local_e8 = *(undefined4 *)(in_ECX + 0x10);
      uVar7 = FUN_004f97a0();
      local_c._0_1_ = 0x15;
      local_e8 = *(undefined4 *)(in_ECX + 0x28);
      uVar8 = FUN_004f97a0();
      local_c._0_1_ = 0x16;
      FUN_0043e9a0(local_c4,"TARGET",uVar8,"RECIPIENT",uVar7,"OPINION",uVar6);
      local_c._0_1_ = 0x17;
      FUN_00988f20();
      if (0xf < local_b0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_b0 = 0xf;
      local_b4 = 0;
      local_c4[0] = local_c4[0] & 0xffffff00;
      if (0xf < local_94) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_94 = 0xf;
      local_98 = 0;
      local_a8 = local_a8 & 0xffffff00;
      if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_58 = 0xf;
      local_5c = 0;
      local_6c = local_6c & 0xffffff00;
      if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_20 = 0xf;
      local_24 = 0;
      local_34 = local_34 & 0xffffff00;
      local_c._0_1_ = 0x12;
      FUN_009a9740();
      if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_3c = 0xf;
      local_40 = 0;
      local_50[0] = local_50[0] & 0xffffff00;
      if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_78 = 0xf;
      local_7c = 0;
      local_8c[0] = local_8c[0] & 0xffffff00;
      local_c = CONCAT31(local_c._1_3_,0xf);
      FUN_009a9740();
      if (0xf < local_104) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_104 = 0xf;
      local_108 = 0;
      local_118[0] = local_118[0] & 0xffffff00;
      if (0xf < local_cc) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    else {
      local_cc = 0xf;
      local_d0 = 0;
      local_e0[0] = local_e0[0] & 0xffffff00;
      pcVar9 = PTR_s_REL_FRIENDLY_00f09168;
      do {
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      FUN_00409350(PTR_s_REL_FRIENDLY_00f09168,(int)pcVar9 - (int)(PTR_s_REL_FRIENDLY_00f09168 + 1))
      ;
      local_c = 6;
      pcVar4 = (char *)FUN_00931230();
      local_108 = 0;
      local_104 = 0xf;
      local_118[0] = local_118[0] & 0xffffff00;
      pcVar9 = pcVar4;
      do {
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      FUN_00409350(pcVar4,(int)pcVar9 - (int)(pcVar4 + 1));
      local_c._0_1_ = 7;
      FUN_009a8ee0(&local_134,local_e0);
      local_c._0_1_ = 8;
      iVar5 = FUN_00475500();
      uVar6 = FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
      local_c._0_1_ = 9;
      FUN_009a8ee0(local_fc,local_118);
      local_c._0_1_ = 10;
      iVar5 = FUN_00475500();
      uVar7 = FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
      local_c._0_1_ = 0xb;
      FUN_0043ec10(param_1,"CURRENT",uVar7,"NEEDED",uVar6);
      if (0xf < local_94) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_94 = 0xf;
      local_98 = 0;
      local_a8 = local_a8 & 0xffffff00;
      local_c._0_1_ = 0xc;
      FUN_009adb70();
      if (local_f8 != 0) {
        FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_f8 = 0;
      local_f4 = 0;
      local_f0 = 0;
      if (0xf < local_b0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_b0 = 0xf;
      local_b4 = 0;
      local_c4[0] = local_c4[0] & 0xffffff00;
      local_c = CONCAT31(local_c._1_3_,0xd);
      FUN_009adb70();
      if (local_130 != 0) {
        FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_130 = 0;
      local_12c = 0;
      local_128 = 0;
      if (0xf < local_104) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_104 = 0xf;
      local_108 = 0;
      local_118[0] = local_118[0] & 0xffffff00;
      if (0xf < local_cc) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
  }
  ExceptionList = local_14;
  return param_1;
}

