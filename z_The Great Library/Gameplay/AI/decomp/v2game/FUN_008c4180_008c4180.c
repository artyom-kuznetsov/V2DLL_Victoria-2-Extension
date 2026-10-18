// FUN_008c4180 @ 008c4180 body=[[008c4180, 008c428c] [008c4290, 008c4325] [008c4329, 008c4359] [008c435d, 008c43e4] [008c43e8, 008c4418] [008c441c, 008c4437] [008c443b, 008c45d4] [008c45d8, 008c45fd] [008c4601, 008c4626] [008c462a, 008c464f] [008c4653, 008c4678] [008c467c, 008c46a1] [008c46a5, 008c46ca] [008c46ce, 008c46f0] [008c46f4, 008c4723] [008c4727, 008c4748] [008c474c, 008c4776] [008c477a, 008c4799] [008c479d, 008c47b3] [008c47b7, 008c47ca] [008c47ce, 008c47e3]]


undefined1 * FUN_008c4180(undefined1 *param_1,int param_2,char param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int in_ECX;
  char *pcVar6;
  char local_1c0 [32];
  uint local_1a0;
  undefined4 local_190;
  uint local_18c;
  uint local_184;
  undefined4 local_174;
  uint local_170;
  uint local_168;
  undefined4 local_158;
  uint local_154;
  uint local_14c;
  undefined4 local_13c;
  uint local_138;
  uint local_130;
  undefined4 local_120;
  uint local_11c;
  uint local_114;
  undefined4 local_104;
  uint local_100;
  uint local_f8;
  undefined4 local_e8;
  uint local_e4;
  uint local_dc [4];
  undefined4 local_cc;
  uint local_c8;
  uint local_c0 [4];
  undefined4 local_b0;
  uint local_ac;
  uint local_a4 [4];
  undefined4 local_94;
  uint local_90;
  uint local_88;
  undefined4 local_78;
  uint local_74;
  undefined4 local_6c;
  int local_68;
  undefined4 local_64;
  undefined4 local_60;
  uint local_5c [4];
  undefined4 local_4c;
  uint local_48;
  uint local_40 [4];
  undefined4 local_30;
  uint local_2c;
  undefined1 local_24 [4];
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b86ba9;
  local_10 = ExceptionList;
  local_6c = 0;
  local_c8 = 0xf;
  local_cc = 0;
  local_dc[0] = local_dc[0] & 0xffffff00;
  local_8 = 1;
  ExceptionList = &local_10;
  local_68 = in_ECX;
  pcVar2 = __itoa(*(int *)(in_ECX + 0x1c),local_1c0,10);
  pcVar6 = pcVar2;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(pcVar2,(int)pcVar6 - (int)(pcVar2 + 1));
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  if (*(char *)(in_ECX + 0x18) == '\0') {
    if (*(char *)(in_ECX + 0x19) == '\0') goto LAB_008c4290;
    local_64 = *(undefined4 *)(param_2 + 0x2c);
    local_60 = *(undefined4 *)(param_2 + 0x30);
    FUN_0055dd40();
    local_8._0_1_ = 4;
    FUN_00408ed0();
  }
  else {
    FUN_008a8dc0();
    FUN_0055dd40();
    local_8._0_1_ = 3;
    FUN_00408ed0();
  }
  if (0xf < local_74) {
    local_8._0_1_ = 2;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
LAB_008c4290:
  local_8._0_1_ = 2;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  local_6c = 1;
  local_2c = 0xf;
  local_30 = 0;
  local_40[0] = local_40[0] & 0xffffff00;
  if (param_3 == '\0') {
    FUN_00409350("HAVE_MORE",9);
    local_8._0_1_ = 9;
    FUN_009a8ee0(local_24,local_40);
    local_8._0_1_ = 10;
    iVar3 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c),*(undefined8 *)(iVar3 + 0x74));
    local_8._0_1_ = 0xb;
    FUN_00408ed0();
    if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_48 = 0xf;
    local_4c = 0;
    local_5c[0] = local_5c[0] & 0xffffff00;
    local_8._0_1_ = 0xc;
    FUN_009adb70();
    if (local_20 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  else {
    FUN_00409350("HAVE_LESS",9);
    local_8._0_1_ = 5;
    FUN_009a8ee0(local_24,local_40);
    local_8._0_1_ = 6;
    iVar3 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c),*(undefined8 *)(iVar3 + 0x74));
    local_8._0_1_ = 7;
    FUN_00408ed0();
    if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_48 = 0xf;
    local_4c = 0;
    local_5c[0] = local_5c[0] & 0xffffff00;
    local_8._0_1_ = 8;
    FUN_009adb70();
    if (local_20 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  if (0xf < local_2c) {
    local_8._0_1_ = 2;
    local_18 = 0;
    local_1c = 0;
    local_20 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 2;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  local_48 = 0xf;
  local_4c = 0;
  local_5c[0] = local_5c[0] & 0xffffff00;
  FUN_00409350(&DAT_00dfc7b4,3);
  local_8._0_1_ = 0xd;
  local_2c = 0xf;
  local_30 = 0;
  local_40[0] = local_40[0] & 0xffffff00;
  FUN_00409350(&DAT_00df963c,2);
  local_8._0_1_ = 0xe;
  local_90 = 0xf;
  local_94 = 0;
  local_a4[0] = local_a4[0] & 0xffffff00;
  FUN_00409350(&DAT_00e2d680,4);
  local_8._0_1_ = 0xf;
  local_ac = 0xf;
  local_b0 = 0;
  local_c0[0] = local_c0[0] & 0xffffff00;
  FUN_00409350(&DAT_00dfc964,3);
  local_8._0_1_ = 0x10;
  FUN_009a8ee0(local_24,local_a4);
  local_8._0_1_ = 0x11;
  iVar3 = FUN_00475500();
  uVar4 = FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c),*(undefined8 *)(iVar3 + 0x74));
  local_8._0_1_ = 0x12;
  uVar5 = (**(code **)(**(int **)(local_68 + 0x20) + 0x18))();
  local_8._0_1_ = 0x13;
  FUN_00988fa0(uVar5);
  local_8._0_1_ = 0x14;
  FUN_00988f20(local_c0);
  local_8._0_1_ = 0x15;
  FUN_00988f20(uVar4);
  local_8._0_1_ = 0x16;
  FUN_00988f20(local_40);
  local_8._0_1_ = 0x17;
  FUN_00988f20(local_dc);
  local_8._0_1_ = 0x18;
  uVar4 = FUN_00988f20(local_5c);
  local_8._0_1_ = 0x19;
  FUN_00448aa0(uVar4,0,0xffffffff);
  if (0xf < local_170) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_184);
  }
  local_170 = 0xf;
  local_174 = 0;
  local_184 = local_184 & 0xffffff00;
  if (0xf < local_e4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_f8);
  }
  local_e4 = 0xf;
  local_e8 = 0;
  local_f8 = local_f8 & 0xffffff00;
  if (0xf < local_11c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_130);
  }
  local_11c = 0xf;
  local_120 = 0;
  local_130 = local_130 & 0xffffff00;
  if (0xf < local_18c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_1a0);
  }
  local_18c = 0xf;
  local_190 = 0;
  local_1a0 = local_1a0 & 0xffffff00;
  if (0xf < local_154) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_168);
  }
  local_154 = 0xf;
  local_158 = 0;
  local_168 = local_168 & 0xffffff00;
  if (0xf < local_100) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_114);
  }
  local_100 = 0xf;
  local_104 = 0;
  local_114 = local_114 & 0xffffff00;
  if (0xf < local_138) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_14c);
  }
  local_138 = 0xf;
  local_13c = 0;
  local_14c = local_14c & 0xffffff00;
  if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_88);
  }
  local_74 = 0xf;
  local_78 = 0;
  local_88 = local_88 & 0xffffff00;
  local_8 = CONCAT31(local_8._1_3_,0x1a);
  FUN_009adb70();
  if (local_20 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_20);
  }
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  if (0xf < local_ac) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_c0[0]);
  }
  local_ac = 0xf;
  local_b0 = 0;
  local_c0[0] = local_c0[0] & 0xffffff00;
  if (0xf < local_90) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_a4[0]);
  }
  local_90 = 0xf;
  local_94 = 0;
  local_a4[0] = local_a4[0] & 0xffffff00;
  if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_40[0]);
  }
  local_2c = 0xf;
  local_30 = 0;
  local_40[0] = local_40[0] & 0xffffff00;
  if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_5c[0]);
  }
  if (local_c8 < 0x10) {
    ExceptionList = local_10;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_dc[0]);
}

