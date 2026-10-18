// FUN_00897b70 @ 00897b70 body=[[00897b70, 00897bdb] [00897bdf, 00897d3e] [00897d42, 00897d66] [00897d6a, 00897d86] [00897d8a, 00897da9] [00897dad, 00897dc7] [00897dcb, 00897f09] [00897f0d, 00897f57] [00897f5b, 00897f85] [00897f89, 00897fc2] [00897fc6, 00897ff0] [00897ff4, 0089815d] [00898161, 0089817c] [00898180, 0089819c] [008981a0, 008981c5] [008981c9, 008981e8] [008981ec, 0089820c] [00898210, 0089824b] [0089824f, 00898279] [0089827d, 008982b2] [008982b6, 008982cd] [008982d1, 008982e6]]


undefined4 FUN_00897b70(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  float10 fVar9;
  uint in_stack_00000020;
  undefined8 uVar10;
  uint local_110 [4];
  undefined4 local_100;
  uint local_fc;
  uint local_f4;
  undefined4 local_e4;
  uint local_e0;
  uint local_d8;
  undefined4 local_c8;
  uint local_c4;
  float local_bc;
  uint local_b8 [2];
  undefined1 local_b0 [4];
  int local_ac;
  undefined4 local_a8;
  uint local_a4;
  uint local_9c [4];
  undefined4 local_8c;
  uint local_88;
  uint local_80;
  undefined1 local_78 [4];
  int local_74;
  undefined4 local_70;
  uint local_6c;
  undefined1 local_64 [4];
  int local_60;
  undefined4 local_5c;
  undefined4 local_58;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined4 *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b8789a;
  local_10 = ExceptionList;
  local_14 = 0;
  local_8 = 0;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("YEARS_OF_RESEARCH_EFFECT",0x18);
  local_8._0_1_ = 1;
  FUN_009a8ee0(local_64,local_34);
  local_8._0_1_ = 3;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00897a00();
  local_c4 = 0xf;
  local_c8 = 0;
  local_d8 = local_d8 & 0xffffff00;
  FUN_00409350(&DAT_00df963c,2);
  iVar7 = (int)param_2;
  local_8._0_1_ = 4;
  if ((int)param_2 < 1) {
    if (-1 < (int)param_2) goto LAB_00897c40;
    uVar10 = 0x200df8510;
  }
  else {
    uVar10 = 0x200df8518;
  }
  FUN_00409350(uVar10);
LAB_00897c40:
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("VALUE",5);
  local_8._0_1_ = 5;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350(&DAT_00df8514,2);
  local_8._0_1_ = 6;
  local_bc = (float)iVar7 / 1000.0;
  fVar9 = (float10)FUN_0040b340();
  local_18 = (undefined4 *)(float)fVar9;
  FUN_00988d00(local_b8,2);
  local_8._0_1_ = 7;
  FUN_00988f20();
  local_8._0_1_ = 8;
  FUN_00988f20();
  local_8._0_1_ = 9;
  local_18 = (undefined4 *)FUN_00aae9af();
  local_8._0_1_ = 10;
  if (local_18 == (undefined4 *)0x0) {
    local_18 = (undefined4 *)0x0;
  }
  else {
    local_18 = (undefined4 *)FUN_009a9ce0();
  }
  local_8._0_1_ = 9;
  FUN_009e6810(local_50,&local_18);
  if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_88 = 0xf;
  local_8c = 0;
  uVar2 = local_9c[0] >> 8;
  local_9c[0] = uVar2 << 8;
  if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_6c = 0xf;
  local_70 = 0;
  local_80 = local_80 & 0xffffff00;
  if (0xf < local_a4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_a4 = 0xf;
  local_a8 = 0;
  local_b8[0] = local_b8[0] & 0xffffff00;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 4;
  uVar3 = (undefined1)local_8;
  local_8._0_1_ = 4;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if ((int)param_2 < 0) {
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    local_8._0_1_ = uVar3;
    FUN_00409350(&DAT_00e29bb4,4);
    local_8 = 0xd;
    local_14 = 4;
    puVar4 = (undefined4 *)FUN_009a8ee0(local_b0,local_50);
    local_8 = 0xe;
    local_14 = 0xc;
  }
  else {
    local_88 = 0xf;
    local_8c = 0;
    local_9c[0] = uVar2 << 8;
    FUN_00409350(&DAT_00e29bac,4);
    local_8 = CONCAT31(local_8._1_3_,0xb);
    local_14 = 1;
    puVar4 = (undefined4 *)FUN_009a8ee0(local_78,local_9c);
    local_8 = 0xc;
    local_14 = 3;
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350("DIRECTION",9);
  local_8 = 0xf;
  puVar5 = (undefined4 *)FUN_00aae9af();
  local_8._0_1_ = 0x10;
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = &PTR_FUN_00e38ecc;
    puVar5[1] = local_64;
    puVar5[7] = 0xf;
    puVar5[6] = 0;
    *(undefined1 *)(puVar5 + 2) = 0;
    param_2 = puVar5;
    FUN_00408ed0();
    *puVar5 = &PTR_FUN_00e38f08;
    local_18 = puVar5 + 9;
    *local_18 = *puVar4;
    puVar5[10] = 0;
    puVar5[0xb] = 0;
    puVar5[0xc] = 0;
    local_8._0_1_ = 0x12;
    FUN_009a97b0();
  }
  local_8 = CONCAT31(local_8._1_3_,0xf);
  param_2 = puVar5;
  FUN_009e6810(local_34,&param_2);
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  if ((local_14 & 8) != 0) {
    local_14 = local_14 & 0xfffffff7;
    local_8 = 0x13;
    FUN_009adb70();
    if (local_ac != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_ac = 0;
    local_a8 = 0;
    local_a4 = 0;
  }
  if ((local_14 & 4) != 0) {
    local_14 = local_14 & 0xfffffffb;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
  }
  if ((local_14 & 2) != 0) {
    local_14 = local_14 & 0xfffffffd;
    local_8 = 0x14;
    FUN_009adb70();
    if (local_74 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_74 = 0;
    local_70 = 0;
    local_6c = 0;
  }
  local_8 = 4;
  if (((local_14 & 1) != 0) && (0xf < local_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  param_2 = (undefined4 *)(local_bc - 1.0);
  pcVar8 = "+";
  if ((float)param_2 <= 0.0) {
    pcVar8 = "";
  }
  local_e0 = 0xf;
  local_e4 = 0;
  local_f4 = local_f4 & 0xffffff00;
  pcVar6 = pcVar8;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(pcVar8,(int)pcVar6 - (int)(pcVar8 + 1));
  local_8._0_1_ = 0x15;
  local_88 = 0xf;
  local_8c = 0;
  local_9c[0] = local_9c[0] & 0xffffff00;
  FUN_00409350(&DAT_00df8544,3);
  local_8._0_1_ = 0x16;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350(&DAT_00dfb974,4);
  local_8._0_1_ = 0x17;
  FUN_00988d00(local_110,1);
  local_8._0_1_ = 0x18;
  FUN_00988f20();
  local_8._0_1_ = 0x19;
  FUN_00988f20();
  local_8._0_1_ = 0x1a;
  FUN_00988f20();
  local_8._0_1_ = 0x1b;
  param_2 = (undefined4 *)FUN_00aae9af();
  local_8._0_1_ = 0x1c;
  if (param_2 == (undefined4 *)0x0) {
    param_2 = (undefined4 *)0x0;
  }
  else {
    param_2 = (undefined4 *)FUN_009a9ce0();
  }
  local_8._0_1_ = 0x1b;
  FUN_009e6810(local_34,&param_2);
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_6c = 0xf;
  local_70 = 0;
  local_80 = local_80 & 0xffffff00;
  if (0xf < local_a4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_a4 = 0xf;
  local_a8 = 0;
  local_b8[0] = local_b8[0] & 0xffffff00;
  if (0xf < local_fc) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_fc = 0xf;
  local_100 = 0;
  local_110[0] = local_110[0] & 0xffffff00;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 0x15;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  iVar7 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar7 + 0x6c),*(undefined8 *)(iVar7 + 0x74));
  if (0xf < local_e0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_e0 = 0xf;
  local_e4 = 0;
  local_f4 = local_f4 & 0xffffff00;
  if (0xf < local_c4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_c4 = 0xf;
  local_c8 = 0;
  local_d8 = local_d8 & 0xffffff00;
  local_8 = CONCAT31(local_8._1_3_,0x1d);
  FUN_009adb70();
  if (local_60 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  if (0xf < in_stack_00000020) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

