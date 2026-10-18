// FUN_008bfb80 @ 008bfb80 body=[[008bfb80, 008bfd15] [008bfd19, 008bfd43] [008bfd47, 008bfd6c] [008bfd70, 008bfda5] [008bfda9, 008bfdc5] [008bfdc9, 008bfdf0] [008bfdf4, 008bfe13] [008bfe17, 008bff85] [008bff89, 008bffb3] [008bffb7, 008bffdc] [008bffe0, 008c0015] [008c0019, 008c002f] [008c0033, 008c0054] [008c0058, 008c0077] [008c007b, 008c0097] [008c009b, 008c00b0]]


undefined4 FUN_008bfb80(undefined4 param_1,undefined4 param_2,char param_3)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  int in_ECX;
  char *pcVar5;
  uint local_1b8;
  uint local_19c;
  uint local_180;
  uint local_164;
  char local_15c [4];
  uint local_158;
  undefined4 local_148;
  uint local_144;
  char local_13c [4];
  uint local_138;
  undefined4 local_128;
  uint local_124;
  uint local_11c;
  undefined4 local_10c;
  uint local_108;
  uint local_100;
  undefined4 local_f0;
  uint local_ec;
  uint local_e4;
  undefined4 local_d4;
  uint local_d0;
  uint local_c8;
  undefined4 local_b8;
  uint local_b4;
  uint local_ac [4];
  undefined4 local_9c;
  uint local_98;
  uint local_90 [4];
  undefined4 local_80;
  uint local_7c;
  uint local_74;
  undefined4 local_64;
  uint local_60;
  uint local_58;
  undefined4 local_48;
  uint local_44;
  undefined1 local_3c [4];
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_28 [4];
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b676c4;
  local_10 = ExceptionList;
  local_14 = 0;
  if (param_3 == '\0') {
    local_ec = 0xf;
    local_f0 = 0;
    local_100 = local_100 & 0xffffff00;
    ExceptionList = &local_10;
    FUN_00409350(&DAT_00dfc7b4,3);
    local_8 = 0xb;
    local_44 = 0xf;
    local_48 = 0;
    local_58 = local_58 & 0xffffff00;
    FUN_00409350(&DAT_00df963c,2);
    local_8._0_1_ = 0xc;
    local_98 = 0xf;
    local_9c = 0;
    local_ac[0] = local_ac[0] & 0xffffff00;
    FUN_00409350("HAVE_MORE_PORTS_THAN",0x14);
    local_60 = 0xf;
    local_64 = 0;
    local_74 = local_74 & 0xffffff00;
    local_8._0_1_ = 0xe;
    pcVar3 = __itoa(*(int *)(in_ECX + 0x1c),local_13c,10);
    pcVar5 = pcVar3;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(pcVar3,(int)pcVar5 - (int)(pcVar3 + 1));
    local_8._0_1_ = 0xf;
    FUN_009a8ee0(local_3c,local_ac);
    local_8._0_1_ = 0x10;
    iVar4 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
    local_8._0_1_ = 0x11;
    FUN_00988f20();
    local_8._0_1_ = 0x12;
    FUN_00988f20();
    local_8._0_1_ = 0x13;
    FUN_00988f20();
    local_14 = 1;
    if (0xf < local_164) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_180) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_144) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_144 = 0xf;
    local_148 = 0;
    local_158 = local_158 & 0xffffff00;
    local_8 = CONCAT31(local_8._1_3_,0x14);
    FUN_009adb70();
    if (local_38 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
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
    local_ac[0] = local_ac[0] & 0xffffff00;
    if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_44 = 0xf;
    local_48 = 0;
    local_58 = local_58 & 0xffffff00;
    uVar2 = local_ec;
  }
  else {
    local_108 = 0xf;
    local_10c = 0;
    local_11c = local_11c & 0xffffff00;
    ExceptionList = &local_10;
    FUN_00409350(&DAT_00dfc7b4,3);
    local_8 = 1;
    local_b4 = 0xf;
    local_b8 = 0;
    local_c8 = local_c8 & 0xffffff00;
    FUN_00409350(&DAT_00df963c,2);
    local_8._0_1_ = 2;
    local_7c = 0xf;
    local_80 = 0;
    local_90[0] = local_90[0] & 0xffffff00;
    FUN_00409350("HAVE_LESS_PORTS_THAN",0x14);
    local_d0 = 0xf;
    local_d4 = 0;
    local_e4 = local_e4 & 0xffffff00;
    local_8._0_1_ = 4;
    pcVar3 = __itoa(*(int *)(in_ECX + 0x1c),local_15c,10);
    pcVar5 = pcVar3;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(pcVar3,(int)pcVar5 - (int)(pcVar3 + 1));
    local_8._0_1_ = 5;
    FUN_009a8ee0(local_28,local_90);
    local_8._0_1_ = 6;
    iVar4 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
    local_8._0_1_ = 7;
    FUN_00988f20();
    local_8._0_1_ = 8;
    FUN_00988f20();
    local_8._0_1_ = 9;
    FUN_00988f20();
    local_14 = 1;
    if (0xf < local_1b8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_19c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_124) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_124 = 0xf;
    local_128 = 0;
    local_138 = local_138 & 0xffffff00;
    local_8 = CONCAT31(local_8._1_3_,10);
    FUN_009adb70();
    if (local_24 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    if (0xf < local_d0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_d0 = 0xf;
    local_d4 = 0;
    local_e4 = local_e4 & 0xffffff00;
    if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_7c = 0xf;
    local_80 = 0;
    local_90[0] = local_90[0] & 0xffffff00;
    if (0xf < local_b4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_b4 = 0xf;
    local_b8 = 0;
    local_c8 = local_c8 & 0xffffff00;
    uVar2 = local_108;
  }
  if (0xf < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

