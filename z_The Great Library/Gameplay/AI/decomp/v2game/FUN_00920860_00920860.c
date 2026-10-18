// FUN_00920860 @ 00920860 body=[[00920860, 009208d0] [009208d4, 0092097e] [00920982, 00920a37] [00920a3b, 00920a57] [00920a5b, 00920c17] [00920c1b, 00920c5e] [00920c62, 00920c84] [00920c88, 00920ccd] [00920cd1, 00920cf1] [00920cf5, 00920d19] [00920d36, 00920fd6] [00920fda, 00921007] [0092100b, 00921036] [0092103a, 00921068] [0092106c, 009210ac] [009210b0, 009210de] [009210e2, 0092111c] [00921120, 00921143] [00921160, 0092119a]]


undefined1 * FUN_00920860(undefined1 *param_1)

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
  int iVar10;
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
  uint local_e8 [4];
  undefined4 local_d8;
  uint local_d4;
  uint local_cc;
  undefined4 local_bc;
  uint local_b8;
  uint local_b0 [4];
  undefined4 local_a0;
  uint local_9c;
  uint local_94 [4];
  undefined4 local_84;
  uint local_80;
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
  puStack_10 = &LAB_00b84d39;
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
  pcVar4 = __itoa(*(int *)(*(int *)(DAT_012586dc + 0x30) + 0x2e8) / 1000,(char *)local_94,10);
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
       (*(int *)(iVar3 + 0x40) < 1)) {
      local_d8 = 0;
      local_d4 = 0xf;
      local_e8[0] = local_e8[0] & 0xffffff00;
      pcVar9 = PTR_s_REL_OPPOSED_00f0915c;
      do {
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      FUN_00409350(PTR_s_REL_OPPOSED_00f0915c,(int)pcVar9 - (int)(PTR_s_REL_OPPOSED_00f0915c + 1));
      local_c = 6;
      pcVar4 = (char *)FUN_00931230();
      local_104 = 0xf;
      local_108 = 0;
      local_118[0] = local_118[0] & 0xffffff00;
      pcVar9 = pcVar4;
      do {
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      FUN_00409350(pcVar4,(int)pcVar9 - (int)(pcVar4 + 1));
      local_c._0_1_ = 7;
      FUN_009a8ee0(&local_134,local_e8);
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
      if (0xf < local_b8) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_b8 = 0xf;
      local_bc = 0;
      local_cc = local_cc & 0xffffff00;
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
      if (0xf < local_9c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_9c = 0xf;
      local_a0 = 0;
      local_b0[0] = local_b0[0] & 0xffffff00;
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
      if (0xf < local_d4) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    else {
      iVar3 = *(int *)(*(int *)(*(int *)(iVar5 + *(int *)(in_ECX + 0x2c) * 4) + 0xbe8) + iVar2 * 4);
      iVar10 = 1;
      if (*(char *)(*(int *)(iVar5 + *(int *)(iVar3 + 0xc) * 4) + 0x31) == '\0') {
        iVar10 = *(int *)(iVar3 + 0x40);
      }
      iVar2 = *(int *)(*(int *)(*(int *)(iVar5 + *(int *)(in_ECX + 0xc) * 4) + 0xbe8) + iVar2 * 4);
      if (*(char *)(*(int *)(iVar5 + *(int *)(iVar2 + 0xc) * 4) + 0x31) == '\0') {
        iVar5 = *(int *)(iVar2 + 0x40);
      }
      else {
        iVar5 = 1;
      }
      if (iVar10 <= iVar5) {
        *(undefined4 *)(param_1 + 0x14) = 0xf;
        *(undefined4 *)(param_1 + 0x10) = 0;
        *param_1 = 0;
        FUN_00409350(&DAT_00ded94d,0);
        ExceptionList = local_14;
        return param_1;
      }
      iVar5 = FUN_009311f0();
      pcVar9 = (&PTR_s_REL_HOSTILE_00f09158)[iVar5];
      local_d4 = 0xf;
      local_d8 = 0;
      local_e8[0] = local_e8[0] & 0xffffff00;
      pcVar4 = pcVar9;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      FUN_00409350(pcVar9,(int)pcVar4 - (int)(pcVar9 + 1));
      local_c = 0xe;
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
      FUN_009a8ee0(local_fc,local_e8);
      local_c._0_1_ = 0x10;
      iVar5 = FUN_00475500();
      uVar6 = FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
      local_c._0_1_ = 0x11;
      FUN_0042c180(local_58,uVar6);
      local_c._0_1_ = 0x12;
      FUN_009a8ee0(&local_134,local_118);
      local_c._0_1_ = 0x13;
      iVar5 = FUN_00475500();
      uVar6 = FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
      local_c._0_1_ = 0x14;
      uVar7 = FUN_004f97a0();
      local_c._0_1_ = 0x15;
      local_20 = *(undefined4 *)(in_ECX + 0x28);
      uVar8 = FUN_004f97a0();
      local_c._0_1_ = 0x16;
      FUN_0043e9a0(local_b0,"TARGET",uVar8,"RECIPIENT",uVar7,"OPINION",uVar6);
      local_c._0_1_ = 0x17;
      FUN_00988f20();
      if (0xf < local_9c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_9c = 0xf;
      local_a0 = 0;
      local_b0[0] = local_b0[0] & 0xffffff00;
      if (0xf < local_b8) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_b8 = 0xf;
      local_bc = 0;
      local_cc = local_cc & 0xffffff00;
      if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_60 = 0xf;
      local_64 = 0;
      local_74 = local_74 & 0xffffff00;
      if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_28 = 0xf;
      local_2c = 0;
      local_3c = local_3c & 0xffffff00;
      local_c._0_1_ = 0x12;
      FUN_009a9740();
      if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_44 = 0xf;
      local_48 = 0;
      local_58[0] = local_58[0] & 0xffffff00;
      if (0xf < local_80) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_80 = 0xf;
      local_84 = 0;
      local_94[0] = local_94[0] & 0xffffff00;
      local_c = CONCAT31(local_c._1_3_,0xf);
      FUN_009a9740();
      if (0xf < local_104) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_104 = 0xf;
      local_108 = 0;
      local_118[0] = local_118[0] & 0xffffff00;
      if (0xf < local_d4) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
  }
  ExceptionList = local_14;
  return param_1;
}

