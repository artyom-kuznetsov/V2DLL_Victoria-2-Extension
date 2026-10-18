// FUN_00923460 @ 00923460 body=[[00923460, 00923683] [00923687, 009236b7] [009236bb, 009236e6] [009236ea, 00923720] [00923724, 00923911] [00923915, 00923935] [00923939, 0092395a] [0092395e, 0092399e] [009239a2, 009239c2] [009239c6, 009239eb] [009239ef, 00923a05]]


void FUN_00923460(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  undefined1 *puVar5;
  char *pcVar6;
  int in_ECX;
  int iVar7;
  undefined1 local_128 [4];
  int local_124;
  undefined4 local_120;
  undefined4 local_11c;
  uint local_114;
  undefined4 local_104;
  uint local_100;
  uint local_f8;
  undefined4 local_e8;
  uint local_e4;
  uint local_dc;
  undefined4 local_cc;
  uint local_c8;
  uint local_c0;
  undefined4 local_b0;
  uint local_ac;
  uint local_a4;
  undefined4 local_94;
  uint local_90;
  uint local_88;
  undefined4 local_78;
  uint local_74;
  uint local_6c;
  undefined4 local_5c;
  uint local_58;
  uint local_50;
  undefined4 local_40;
  uint local_3c;
  uint local_34;
  undefined4 local_24;
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  iVar3 = DAT_012587e4;
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b84a01;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_005179e0();
  iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(iVar3 + 4) + *(int *)(in_ECX + 0x2c) * 4) + 0xbe8) +
                  *(int *)(in_ECX + 0x14) * 4);
  iVar7 = 1;
  if (*(char *)(*(int *)(*(int *)(iVar3 + 4) + *(int *)(iVar2 + 0xc) * 4) + 0x31) == '\0') {
    iVar7 = *(int *)(iVar2 + 0x40);
  }
  if (iVar7 + -1 != *(int *)(iVar2 + 0x40)) {
    *(undefined4 *)(iVar2 + 0x44) = *(undefined4 *)(DAT_012588e8 + 0xb0c);
  }
  *(int *)(iVar2 + 0x40) = iVar7 + -1;
  local_74 = 0xf;
  local_78 = 0;
  local_88 = local_88 & 0xffffff00;
  FUN_00409350("TARGET");
  local_c = 0;
  FUN_004f97a0();
  local_c._0_1_ = 1;
  local_ac = 0xf;
  local_b0 = 0;
  local_c0 = local_c0 & 0xffffff00;
  FUN_00408ed0();
  local_c._0_1_ = 2;
  local_90 = 0xf;
  local_94 = 0;
  local_a4 = local_a4 & 0xffffff00;
  FUN_00408ed0();
  local_c._0_1_ = 3;
  iVar7 = param_1[1];
  puVar5 = (undefined1 *)FUN_00aae9af();
  local_c._0_1_ = 4;
  uVar4 = (undefined1)local_c;
  local_c._0_1_ = 4;
  if (puVar5 == (undefined1 *)0x0) {
    puVar5 = (undefined1 *)0x0;
    local_c._0_1_ = uVar4;
  }
  else {
    *(undefined4 *)(puVar5 + 0x14) = 0xf;
    *(undefined4 *)(puVar5 + 0x10) = 0;
    *puVar5 = 0;
    FUN_00408ed0();
    local_c._0_1_ = 5;
    *(undefined4 *)(puVar5 + 0x30) = 0xf;
    *(undefined4 *)(puVar5 + 0x2c) = 0;
    puVar5[0x1c] = 0;
    FUN_00408ed0();
    *(int *)(puVar5 + 0x38) = iVar7;
    *(undefined4 *)(puVar5 + 0x3c) = 0;
    puVar5[0x40] = 0;
  }
  iVar3 = param_1[2];
  param_1[1] = puVar5;
  param_1[2] = iVar3 + 1;
  if (iVar3 == 0) {
    *param_1 = puVar5;
  }
  else {
    *(undefined1 **)(iVar7 + 0x3c) = puVar5;
  }
  if (0xf < local_90) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_90 = 0xf;
  local_94 = 0;
  local_a4 = local_a4 & 0xffffff00;
  if (0xf < local_ac) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_ac = 0xf;
  local_b0 = 0;
  local_c0 = local_c0 & 0xffffff00;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_c = 0xffffffff;
  local_3c = 0xf;
  local_40 = 0;
  local_50 = local_50 & 0xffffff00;
  if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_74 = 0xf;
  local_78 = 0;
  local_88 = local_88 & 0xffffff00;
  if (*(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar2 + 0xc) * 4) + 0x31) == '\0') {
    iVar7 = *(int *)(iVar2 + 0x40);
  }
  else {
    iVar7 = 1;
  }
  local_58 = 0xf;
  local_5c = 0;
  local_6c = local_6c & 0xffffff00;
  pcVar6 = (&PTR_s_REL_HOSTILE_00f09158)[iVar7];
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00409350((&PTR_s_REL_HOSTILE_00f09158)[iVar7]);
  local_c = 6;
  local_100 = 0xf;
  local_104 = 0;
  local_114 = local_114 & 0xffffff00;
  FUN_00409350("OPINION");
  local_c._0_1_ = 7;
  FUN_009a8ee0(local_128);
  local_c._0_1_ = 8;
  iVar7 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar7 + 0x6c),*(undefined8 *)(iVar7 + 0x74));
  local_c._0_1_ = 9;
  local_e4 = 0xf;
  local_e8 = 0;
  local_f8 = local_f8 & 0xffffff00;
  FUN_00408ed0();
  local_c._0_1_ = 10;
  local_c8 = 0xf;
  local_cc = 0;
  local_dc = local_dc & 0xffffff00;
  FUN_00408ed0();
  local_c._0_1_ = 0xb;
  iVar7 = param_1[1];
  puVar5 = (undefined1 *)FUN_00aae9af();
  local_c._0_1_ = 0xc;
  uVar4 = (undefined1)local_c;
  local_c._0_1_ = 0xc;
  if (puVar5 == (undefined1 *)0x0) {
    puVar5 = (undefined1 *)0x0;
    local_c._0_1_ = uVar4;
  }
  else {
    *(undefined4 *)(puVar5 + 0x14) = 0xf;
    *(undefined4 *)(puVar5 + 0x10) = 0;
    *puVar5 = 0;
    FUN_00408ed0();
    local_c._0_1_ = 0xd;
    *(undefined4 *)(puVar5 + 0x30) = 0xf;
    *(undefined4 *)(puVar5 + 0x2c) = 0;
    puVar5[0x1c] = 0;
    FUN_00408ed0();
    *(int *)(puVar5 + 0x38) = iVar7;
    *(undefined4 *)(puVar5 + 0x3c) = 0;
    puVar5[0x40] = 0;
  }
  iVar2 = param_1[2];
  param_1[1] = puVar5;
  param_1[2] = iVar2 + 1;
  if (iVar2 == 0) {
    *param_1 = puVar5;
  }
  else {
    *(undefined1 **)(iVar7 + 0x3c) = puVar5;
  }
  if (0xf < local_c8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_c8 = 0xf;
  local_cc = 0;
  local_dc = local_dc & 0xffffff00;
  if (0xf < local_e4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_e4 = 0xf;
  local_e8 = 0;
  local_f8 = local_f8 & 0xffffff00;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34 = local_34 & 0xffffff00;
  local_c = CONCAT31(local_c._1_3_,0xe);
  FUN_009adb70();
  if (local_124 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_124 = 0;
  local_120 = 0;
  local_11c = 0;
  if (0xf < local_100) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_100 = 0xf;
  local_104 = 0;
  local_114 = local_114 & 0xffffff00;
  if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_14;
  return;
}

