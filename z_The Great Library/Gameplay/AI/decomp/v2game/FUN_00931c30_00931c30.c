// FUN_00931c30 @ 00931c30 body=[[00931c30, 00931d78] [00931d7c, 00931dfd] [00931e01, 00931e1b] [00931e1f, 00931f35] [00931f39, 00931f63] [00931f67, 00931f86] [00931f8a, 00931fa6] [00931faa, 00931fcf] [00931fd3, 00931ff2] [00931ff6, 0093200c] [00932010, 009321f1] [009321f5, 00932216] [0093221a, 00932239] [0093223d, 00932257] [0093225b, 00932304] [00932308, 0093232a] [0093232e, 009323d4] [009323d8, 009323fc] [00932400, 00932498] [0093249c, 009324c0] [009324c4, 0093255c] [00932560, 00932584] [00932588, 00932615] [00932619, 009326a1] [009326a5, 0093272d] [00932731, 009327b9] [009327bd, 00932845] [00932849, 009328d1] [009328d5, 00932957] [0093295b, 0093296c] [00932970, 00932a40] [00932a44, 00932a68] [00932a6c, 00932a8b] [00932a8f, 00932b44] [00932b48, 00932b6c] [00932b70, 00932b8a] [00932b8e, 00932c43] [00932c47, 00932c6b] [00932c6f, 00932c89] [00932c8d, 00932d4e] [00932d52, 00932d76] [00932d7a, 00932d94] [00932d98, 00932e25] [00932e29, 00932e4d] [00932e51, 00932e6f] [00932e73, 00932f58] [00932f5c, 00932fcd] [00932fd1, 00933038] [0093303c, 0093305a] [0093305e, 009330aa] [009330ae, 009330ce] [009330d2, 0093311e] [00933122, 00933140] [00933144, 00933231] [00933235, 00933256] [0093325a, 0093327f] [00933283, 009332c8] [009332cc, 009332f0] [009332f4, 00933373] [00933377, 0093339b] [0093339f, 0093343e] [00933442, 00933461] [00933465, 009334c6] [009334ca, 0093350d] [00933513, 00933559]]


void FUN_00931c30(int param_1,int param_2)

{
  uint uVar1;
  undefined1 uVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined1 local_16c [20];
  uint local_158;
  undefined4 local_150;
  undefined4 local_14c;
  uint local_148;
  undefined4 local_138;
  uint local_134;
  undefined1 local_12c [16];
  undefined4 local_11c;
  undefined4 local_118;
  uint local_110;
  undefined4 local_100;
  uint local_fc;
  undefined4 local_f4;
  undefined4 local_ec;
  int local_e8;
  uint local_e4;
  undefined1 local_dc [4];
  int local_d8;
  int local_d4;
  uint local_d0;
  undefined4 local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  uint local_b8;
  undefined1 local_b0 [4];
  int local_ac;
  undefined4 local_a8;
  uint local_a4;
  uint local_9c;
  undefined1 local_94 [4];
  int local_90;
  undefined4 local_8c;
  uint local_88;
  uint local_80 [4];
  undefined4 local_70;
  uint local_6c;
  uint local_64;
  undefined4 local_54;
  uint local_50;
  uint local_48 [4];
  int local_38;
  uint local_34;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b84101;
  local_10 = ExceptionList;
  local_c0 = 1;
  local_118 = 0xf;
  local_11c = 0;
  local_12c[0] = 0;
  ExceptionList = &local_10;
  FUN_00409350("WAR_NAME",8);
  local_8._0_1_ = 0;
  local_8._1_3_ = 0;
  local_c8 = **(undefined4 **)(param_1 + 0x2c);
  iVar5 = (*(undefined4 **)(param_1 + 0x2c))[1];
  local_ec = **(undefined4 **)(param_1 + 0x3c);
  local_e8 = (*(undefined4 **)(param_1 + 0x3c))[1];
  local_f4 = 0x2d2d2d;
  local_150 = 0x2d2d2d;
  local_14c = 0;
  local_c4 = iVar5;
  if (*(char *)(param_1 + 0xfc) != '\0') {
    FUN_00409350("GREAT_WAR_NAME",0xe);
    goto LAB_0093232e;
  }
  local_bc = iVar5;
  piVar7 = (int *)FUN_0093d080();
  if (0 < (int)(*(int *)(*piVar7 + 0x14) - *(int *)(*piVar7 + 0x10) & 0xffffffc0U)) {
    local_bc = iVar5;
    FUN_0093d080();
    FUN_009315f0();
    local_8._0_1_ = 1;
    FUN_00408ed0();
    local_8._0_1_ = 0;
    if (0xf < local_158) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  local_18 = 0xf;
  if ((char)param_2 == '\0') {
    FUN_00409350("AGRESSION_",10);
    local_8._0_1_ = 4;
    FUN_00988f20();
    local_8._0_1_ = 5;
  }
  else {
    FUN_00409350("NORMAL_",7);
    local_8._0_1_ = 2;
    FUN_00988f20();
    local_8._0_1_ = 3;
  }
  FUN_00408ed0();
  if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 0;
  local_80[0] = local_80[0] & 0xffffff00;
  local_70 = 0;
  local_6c = 0xf;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  pcVar4 = (char *)&local_ec;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  do {
    cVar3 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar3 != '\0');
  FUN_00409350(&local_ec,(int)pcVar4 - ((int)&local_ec + 1));
  local_8._0_1_ = 6;
  local_6c = 0xf;
  local_70 = 0;
  local_80[0] = local_80[0] & 0xffffff00;
  FUN_00409350(&DAT_00defd44,1);
  local_8._0_1_ = 7;
  pcVar4 = (char *)&local_c8;
  local_a4 = 0xf;
  local_a8 = 0;
  local_b8 = local_b8 & 0xffffff00;
  do {
    cVar3 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar3 != '\0');
  FUN_00409350(&local_c8,(int)pcVar4 - ((int)&local_c8 + 1));
  local_8._0_1_ = 8;
  local_88 = 0xf;
  local_8c = 0;
  local_9c = local_9c & 0xffffff00;
  FUN_00409350(&DAT_00defd44,1);
  local_8._0_1_ = 9;
  FUN_00988f20();
  local_8._0_1_ = 10;
  FUN_00988f20();
  local_8._0_1_ = 0xb;
  FUN_00988f20();
  local_8._0_1_ = 0xc;
  FUN_00988f20();
  if (0xf < local_134) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_134 = 0xf;
  local_138 = 0;
  local_148 = local_148 & 0xffffff00;
  if (0xf < local_fc) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_fc = 0xf;
  local_100 = 0;
  local_110 = local_110 & 0xffffff00;
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_50 = 0xf;
  local_54 = 0;
  local_64 = local_64 & 0xffffff00;
  if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_88 = 0xf;
  local_8c = 0;
  local_9c = local_9c & 0xffffff00;
  if (0xf < local_a4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_a4 = 0xf;
  local_a8 = 0;
  local_b8 = local_b8 & 0xffffff00;
  if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_6c = 0xf;
  local_70 = 0;
  local_80[0] = local_80[0] & 0xffffff00;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  local_f4 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
  local_d0 = 0xf;
  local_d4 = 0;
  local_e4 = local_e4 & 0xffffff00;
  local_8 = CONCAT31(local_8._1_3_,0x15);
  iVar5 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4) + 0xbe8
                  );
  param_2 = *(int *)(iVar5 + local_c4 * 4);
  local_bc = *(int *)(iVar5 + local_e8 * 4);
  cVar3 = FUN_0051af10();
  if (((cVar3 == '\0') && (*(int *)(param_2 + 0x20) == 0)) &&
     (cVar3 = FUN_009315a0(), cVar3 == '\0')) {
    cVar3 = FUN_0051af10();
    if (((cVar3 != '\0') || (*(int *)(local_bc + 0x20) != 0)) ||
       (cVar3 = FUN_009315a0(), cVar3 != '\0')) {
      param_2 = FUN_009885d0();
      local_8._0_1_ = 0x1a;
      FUN_009885d0();
      local_8._0_1_ = 0x1b;
      FUN_00988f20();
      local_8._0_1_ = 0x1c;
      FUN_00988f20();
      local_8._0_1_ = 0x1d;
      FUN_00408ed0();
      FUN_00408ad0();
      FUN_00408ad0();
      FUN_00408ad0();
      local_8 = CONCAT31(local_8._1_3_,0x15);
      FUN_00408ad0();
      goto LAB_0093225b;
    }
LAB_00932294:
    if (DAT_0131c99c == 0) {
      param_2 = FUN_00aae9af();
      local_8._0_1_ = 0x1e;
      if (param_2 != 0) {
        FUN_009acd20();
      }
      local_8 = CONCAT31(local_8._1_3_,0x15);
      FUN_009ada90();
    }
    if ((local_38 != 0) && (iVar5 = FUN_00a727a0(), iVar5 != 0)) goto LAB_009322e6;
  }
  else {
    pcVar4 = (char *)&local_c8;
    local_6c = 0xf;
    local_70 = 0;
    local_80[0] = local_80[0] & 0xffffff00;
    do {
      cVar3 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar3 != '\0');
    FUN_00409350(&local_c8,(int)pcVar4 - ((int)&local_c8 + 1));
    local_8._0_1_ = 0x16;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350(&DAT_00defd44,1);
    local_8._0_1_ = 0x17;
    FUN_00988f20();
    local_8._0_1_ = 0x18;
    FUN_00988f20();
    local_8._0_1_ = 0x19;
    FUN_00408ed0();
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_50 = 0xf;
    local_54 = 0;
    local_64 = local_64 & 0xffffff00;
    if (0xf < local_fc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_fc = 0xf;
    local_100 = 0;
    local_110 = local_110 & 0xffffff00;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = CONCAT31(local_8._1_3_,0x15);
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
LAB_0093225b:
    if (((local_d4 == 0) || (FUN_009ad510(), local_d4 == 0)) || (iVar5 = FUN_00a727a0(), iVar5 == 0)
       ) goto LAB_00932294;
LAB_009322e6:
    FUN_00408ed0();
  }
  if (0xf < local_d0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 0;
  local_d0 = 0xf;
  local_d4 = 0;
  local_e4 = local_e4 & 0xffffff00;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
LAB_0093232e:
  uVar2 = (undefined1)local_8;
  if ((DAT_013f3030 & 1) == 0) {
    DAT_013f3030 = DAT_013f3030 | 1;
    local_8._0_1_ = 0x1f;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350(&DAT_00dfdcbc,2);
    local_8._0_1_ = 0x20;
    FUN_009a8ee0(local_b0,local_2c);
    local_8._0_1_ = 0x21;
    iVar5 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
    local_8._0_1_ = 0x24;
    FUN_009adb70();
    if (local_ac != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_ac = 0;
    local_a8 = 0;
    local_a4 = 0;
    local_8._0_1_ = 0x25;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    local_6c = 0xf;
    local_70 = 0;
    local_80[0] = local_80[0] & 0xffffff00;
    FUN_00409350(&DAT_00dfdcb8,2);
    local_8._0_1_ = 0x26;
    FUN_009a8ee0(local_94,local_80);
    local_8._0_1_ = 0x27;
    iVar5 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
    local_8._0_1_ = 0x2a;
    FUN_009adb70();
    if (local_90 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_90 = 0;
    local_8c = 0;
    local_88 = 0;
    local_8._0_1_ = 0x2b;
    if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_6c = 0xf;
    local_70 = 0;
    local_80[0] = local_80[0] & 0xffffff00;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350(&DAT_00dfdcb4,2);
    local_8._0_1_ = 0x2c;
    FUN_009a8ee0(local_b0,local_2c);
    local_8._0_1_ = 0x2d;
    iVar5 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
    local_8._0_1_ = 0x30;
    FUN_009adb70();
    if (local_ac != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_ac = 0;
    local_a8 = 0;
    local_a4 = 0;
    local_8._0_1_ = 0x31;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    local_6c = 0xf;
    local_70 = 0;
    local_80[0] = local_80[0] & 0xffffff00;
    FUN_00409350(&DAT_00dfdcb0,2);
    local_8._0_1_ = 0x32;
    param_2 = FUN_009a8ee0(local_dc,local_80);
    local_8._0_1_ = 0x33;
    iVar5 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
    local_8._0_1_ = 0x35;
    FUN_009a9740();
    local_8._0_1_ = 0x36;
    if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_6c = 0xf;
    local_70 = 0;
    local_80[0] = local_80[0] & 0xffffff00;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350(&DAT_00dfdcbc,2);
    local_8._0_1_ = 0x37;
    param_2 = FUN_009a8ee0(local_94,local_2c);
    local_8._0_1_ = 0x38;
    iVar5 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
    local_8._0_1_ = 0x3a;
    FUN_009a9740();
    local_8._0_1_ = 0x3b;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    local_6c = 0xf;
    local_70 = 0;
    local_80[0] = local_80[0] & 0xffffff00;
    FUN_00409350(&DAT_00dfdcbc,2);
    local_8._0_1_ = 0x3c;
    param_2 = FUN_009a8ee0(local_dc,local_80);
    local_8._0_1_ = 0x3d;
    iVar5 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
    local_8._0_1_ = 0x3f;
    FUN_009a9740();
    local_8._0_1_ = 0x40;
    if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_6c = 0xf;
    local_70 = 0;
    local_80[0] = local_80[0] & 0xffffff00;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350(&DAT_00dfdcbc,2);
    local_8._0_1_ = 0x41;
    param_2 = FUN_009a8ee0(local_94,local_2c);
    local_8._0_1_ = 0x42;
    iVar5 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
    local_8._0_1_ = 0x44;
    FUN_009a9740();
    local_8._0_1_ = 0x45;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    local_6c = 0xf;
    local_70 = 0;
    local_80[0] = local_80[0] & 0xffffff00;
    FUN_00409350(&DAT_00dfdcbc,2);
    local_8._0_1_ = 0x46;
    param_2 = FUN_009a8ee0(local_dc,local_80);
    local_8._0_1_ = 0x47;
    iVar5 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
    local_8._0_1_ = 0x49;
    FUN_009a9740();
    local_8._0_1_ = 0x4a;
    if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_6c = 0xf;
    local_70 = 0;
    local_80[0] = local_80[0] & 0xffffff00;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350(&DAT_00dfdcbc,2);
    local_8._0_1_ = 0x4b;
    param_2 = FUN_009a8ee0(local_94,local_2c);
    local_8._0_1_ = 0x4c;
    iVar5 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
    local_8._0_1_ = 0x4e;
    FUN_009a9740();
    local_8._0_1_ = 0x4f;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    FUN_00409350(&DAT_00dfdcbc,2);
    local_8._0_1_ = 0x50;
    FUN_009a8ee0(local_dc,local_48);
    local_8._0_1_ = 0x51;
    iVar5 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
    local_8._0_1_ = 0x53;
    FUN_009a9740();
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    _atexit((_func_4879 *)&LAB_00c858a0);
    local_8._0_1_ = 0;
    uVar2 = (undefined1)local_8;
  }
  do {
    local_8._0_1_ = uVar2;
    FUN_009a8ee0(local_b0,local_12c);
    local_8._0_1_ = 0x55;
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    FUN_00409350("FIRST",5);
    local_8._0_1_ = 0x56;
    uVar6 = FUN_0055dd70();
    local_8._0_1_ = 0x57;
    FUN_009a8ee0(local_94,uVar6);
    local_8._0_1_ = 0x58;
    param_2 = FUN_00aae9af();
    local_8._0_1_ = 0x59;
    if (param_2 == 0) {
      param_2 = 0;
    }
    else {
      param_2 = FUN_009a9f20(param_2,local_b0);
    }
    local_8._0_1_ = 0x58;
    FUN_009e6810(local_48,&param_2);
    local_8._0_1_ = 0x5a;
    FUN_009adb70();
    if (local_90 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_90 = 0;
    local_8c = 0;
    local_88 = 0;
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 0x55;
    local_50 = 0xf;
    local_54 = 0;
    local_64 = local_64 & 0xffffff00;
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    FUN_00409350("SECOND",6);
    local_8._0_1_ = 0x5b;
    uVar6 = FUN_0055dd70();
    local_8._0_1_ = 0x5c;
    FUN_009a8ee0(local_94,uVar6);
    local_8._0_1_ = 0x5d;
    param_2 = FUN_00aae9af();
    local_8._0_1_ = 0x5e;
    if (param_2 == 0) {
      param_2 = 0;
    }
    else {
      param_2 = FUN_009a9f20(param_2,local_b0);
    }
    local_8._0_1_ = 0x5d;
    FUN_009e6810(local_48,&param_2);
    local_8._0_1_ = 0x5f;
    FUN_009adb70();
    if (local_90 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_90 = 0;
    local_8c = 0;
    local_88 = 0;
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 0x55;
    local_50 = 0xf;
    local_54 = 0;
    local_64 = local_64 & 0xffffff00;
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    FUN_00409350("TARGET",6);
    local_8._0_1_ = 0x60;
    uVar6 = FUN_0055dd70();
    local_8._0_1_ = 0x61;
    FUN_009a8ee0(local_94,uVar6);
    local_8._0_1_ = 0x62;
    param_2 = FUN_00aae9af();
    local_8._0_1_ = 99;
    if (param_2 == 0) {
      param_2 = 0;
    }
    else {
      param_2 = FUN_009a9f20(param_2,local_b0);
    }
    local_8._0_1_ = 0x62;
    FUN_009e6810(local_48,&param_2);
    local_8._0_1_ = 100;
    FUN_009adb70();
    if (local_90 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_90 = 0;
    local_8c = 0;
    local_88 = 0;
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 0x55;
    local_50 = 0xf;
    local_54 = 0;
    local_64 = local_64 & 0xffffff00;
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    FUN_00409350("FIRST_COUNTRY",0xd);
    local_8._0_1_ = 0x65;
    uVar6 = FUN_004f97a0();
    local_8._0_1_ = 0x66;
    FUN_009a8ee0(local_94,uVar6);
    local_8._0_1_ = 0x67;
    param_2 = FUN_00aae9af();
    local_8._0_1_ = 0x68;
    if (param_2 == 0) {
      param_2 = 0;
    }
    else {
      param_2 = FUN_009a9f20(param_2,local_b0);
    }
    local_8._0_1_ = 0x67;
    FUN_009e6810(local_48,&param_2);
    local_8._0_1_ = 0x69;
    FUN_009adb70();
    if (local_90 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_90 = 0;
    local_8c = 0;
    local_88 = 0;
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 0x55;
    local_50 = 0xf;
    local_54 = 0;
    local_64 = local_64 & 0xffffff00;
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    FUN_00409350("SECOND_COUNTRY",0xe);
    local_8._0_1_ = 0x6a;
    uVar6 = FUN_004f97a0();
    local_8._0_1_ = 0x6b;
    FUN_009a8ee0(local_94,uVar6);
    local_8._0_1_ = 0x6c;
    FUN_009a9a90();
    local_8._0_1_ = 0x6d;
    FUN_009adb70();
    iVar5 = local_c4;
    if (local_90 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_90 = 0;
    local_8c = 0;
    local_88 = 0;
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 0x55;
    local_50 = 0xf;
    local_54 = 0;
    local_64 = local_64 & 0xffffff00;
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    param_2 = local_c4;
    piVar7 = (int *)FUN_0093d080();
    if (0 < (int)(*(int *)(*piVar7 + 0x14) - *(int *)(*piVar7 + 0x10) & 0xffffffc0U)) {
      param_2 = iVar5;
      piVar7 = (int *)FUN_0093d080();
      iVar5 = *(int *)(*piVar7 + 0x10);
      cVar3 = (**(code **)(**(int **)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                                              *(int *)(iVar5 + 0x28) * 4) + 0x188) + 0x24))();
      if (cVar3 == '\0') {
        if (*(int *)(iVar5 + 0x3c) == 0) {
          FUN_004471e0();
          local_8._0_1_ = 0x72;
          FUN_004471e0();
          local_8._0_1_ = 0x73;
          FUN_009a9980();
          if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_34 = 0xf;
          local_38 = 0;
          local_48[0] = local_48[0] & 0xffffff00;
          uVar1 = local_50;
        }
        else {
          FUN_004471e0();
          local_8._0_1_ = 0x70;
          (**(code **)(**(int **)(iVar5 + 0x3c) + 0x18))();
          local_8._0_1_ = 0x71;
          FUN_009a9980();
          if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_50 = 0xf;
          local_54 = 0;
          local_64 = local_64 & 0xffffff00;
          uVar1 = local_fc;
        }
      }
      else {
        local_34 = 0xf;
        local_38 = 0;
        local_48[0] = local_48[0] & 0xffffff00;
        FUN_00409350("STATE",5);
        local_8._0_1_ = 0x6e;
        (**(code **)(**(int **)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(iVar5 + 0x28) * 4
                                        ) + 0x188) + 0x20))();
        local_8._0_1_ = 0x6f;
        FUN_009a9980();
        if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_50 = 0xf;
        local_54 = 0;
        local_64 = local_64 & 0xffffff00;
        uVar1 = local_34;
      }
      if (0xf < uVar1) {
        local_8._0_1_ = 0x55;
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8._0_1_ = 0x55;
      local_34 = 0xf;
      local_38 = 0;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00409350("COUNTRY",7);
      local_8._0_1_ = 0x74;
      FUN_0055dd40();
      local_8._0_1_ = 0x75;
      FUN_009a9980();
      if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8._0_1_ = 0x55;
      local_50 = 0xf;
      local_54 = 0;
      local_64 = local_64 & 0xffffff00;
      if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_34 = 0xf;
      local_38 = 0;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00409350("COUNTRY_ADJ",0xb);
      local_8._0_1_ = 0x76;
      FUN_0055dd70();
      local_8._0_1_ = 0x77;
      FUN_009a9980();
      if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8._0_1_ = 0x55;
      local_50 = 0xf;
      local_54 = 0;
      local_64 = local_64 & 0xffffff00;
      if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    if (local_c0 < 2) {
      local_34 = 0xf;
      local_38 = 0;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00409350(&DAT_00ded94d,0);
      local_8._0_1_ = 0x87;
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      FUN_00409350("ORDER",5);
      local_8._0_1_ = 0x88;
      FUN_009a8ee0(local_dc,local_48);
      local_8._0_1_ = 0x89;
      FUN_009a9a90();
      local_8._0_1_ = 0x8a;
      FUN_009adb70();
      FUN_004d8540();
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      uVar1 = local_34;
    }
    else {
      iVar5 = local_c0 % 10;
      if (local_c0 - 0xbU < 3) {
        iVar5 = 0;
      }
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      FUN_00409350(&DAT_00ded950,1);
      local_8._0_1_ = 0x78;
      FUN_009a8ee0(local_94,&DAT_013f2f18 + iVar5 * 0x1c);
      local_8._0_1_ = 0x79;
      iVar5 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
      local_8._0_1_ = 0x7a;
      FUN_009888f0();
      local_8._0_1_ = 0x7b;
      FUN_00988f20();
      local_8._0_1_ = 0x7c;
      FUN_00988f20();
      if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_50 = 0xf;
      local_54 = 0;
      local_64 = local_64 & 0xffffff00;
      if (0xf < local_fc) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_fc = 0xf;
      local_100 = 0;
      local_110 = local_110 & 0xffffff00;
      if (0xf < local_134) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_134 = 0xf;
      local_138 = 0;
      local_148 = local_148 & 0xffffff00;
      local_8._0_1_ = 0x82;
      FUN_009adb70();
      if (local_90 != 0) {
        FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_90 = 0;
      local_8c = 0;
      local_88 = 0;
      local_8._0_1_ = 0x83;
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      local_34 = 0xf;
      local_38 = 0;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00409350("ORDER",5);
      local_8._0_1_ = 0x84;
      FUN_009a8ee0(local_dc,local_16c);
      local_8._0_1_ = 0x85;
      FUN_009a9a90();
      local_8._0_1_ = 0x86;
      FUN_009adb70();
      if (local_d8 != 0) {
        FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_d8 = 0;
      local_d4 = 0;
      local_d0 = 0;
      uVar1 = local_158;
      if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    if (0xf < uVar1) {
      local_8._0_1_ = 0x55;
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 0x55;
    iVar5 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
    local_8._0_1_ = 0x8b;
    cVar3 = FUN_006880e0(DAT_012588e8,local_80);
    if ((cVar3 == '\0') || (1000 < local_c0)) {
      FUN_00408ed0();
      FUN_00408ad0();
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_009a9740();
      FUN_00408ad0();
      ExceptionList = local_10;
      return;
    }
    local_c0 = local_c0 + 1;
    if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_6c = 0xf;
    local_70 = 0;
    local_80[0] = local_80[0] & 0xffffff00;
    local_8._0_1_ = 0x8c;
    FUN_009adb70();
    local_8._0_1_ = 0;
    uVar2 = (undefined1)local_8;
    local_8._0_1_ = 0;
    if (local_ac != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  } while( true );
}

