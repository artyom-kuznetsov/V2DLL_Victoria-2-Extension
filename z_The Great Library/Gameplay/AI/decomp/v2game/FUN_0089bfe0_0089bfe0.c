// FUN_0089bfe0 @ 0089bfe0 body=[[0089bfe0, 0089c04f] [0089c053, 0089c1a4] [0089c1a8, 0089c1cc] [0089c1d0, 0089c1ec] [0089c1f0, 0089c20f] [0089c213, 0089c22d] [0089c231, 0089c374] [0089c378, 0089c3c2] [0089c3c6, 0089c3f0] [0089c3f4, 0089c42d] [0089c431, 0089c45f] [0089c463, 0089c5e0] [0089c5e4, 0089c5ff] [0089c603, 0089c61f] [0089c623, 0089c648] [0089c64c, 0089c66b] [0089c66f, 0089c68f] [0089c693, 0089c6d1] [0089c6d5, 0089c6fe] [0089c702, 0089c73b] [0089c73f, 0089c756] [0089c75a, 0089c76e]]


undefined4 FUN_0089bfe0(undefined4 param_1)

{
  char cVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  char *pcVar6;
  int iVar7;
  int in_ECX;
  char *pcVar8;
  float10 fVar9;
  uint in_stack_00000020;
  undefined8 uVar10;
  uint local_114 [4];
  undefined4 local_104;
  uint local_100;
  uint local_f8;
  undefined4 local_e8;
  uint local_e4;
  uint local_dc;
  undefined4 local_cc;
  uint local_c8;
  undefined4 *local_c0;
  uint local_bc [2];
  undefined1 local_b4 [4];
  int local_b0;
  undefined4 local_ac;
  uint local_a8;
  uint local_a0 [4];
  undefined4 local_90;
  uint local_8c;
  uint local_84;
  undefined1 local_7c [4];
  int local_78;
  undefined4 local_74;
  uint local_70;
  int *local_68;
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
  
  puStack_c = &LAB_00b68659;
  local_10 = ExceptionList;
  local_14 = 0;
  local_8 = 1;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("BADBOY_EFFECT",0xd);
  local_8._0_1_ = 2;
  FUN_009a8ee0(local_64,local_34);
  local_8._0_1_ = 4;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  local_c8 = 0xf;
  local_cc = 0;
  local_dc = local_dc & 0xffffff00;
  FUN_00409350(&DAT_00df963c,2);
  local_68 = (int *)(in_ECX + 0x20);
  local_8._0_1_ = 5;
  if (*local_68 < 0) {
    uVar10 = 0x200df8518;
  }
  else {
    if (*local_68 < 1) goto LAB_0089c0ad;
    uVar10 = 0x200df8510;
  }
  FUN_00409350(uVar10);
LAB_0089c0ad:
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("VALUE",5);
  local_8._0_1_ = 6;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350(&DAT_00df8514,2);
  local_8._0_1_ = 7;
  fVar9 = (float10)FUN_0040b340();
  local_18 = (undefined4 *)(float)fVar9;
  FUN_00988d00(local_bc,2);
  local_8._0_1_ = 8;
  FUN_00988f20();
  local_8._0_1_ = 9;
  FUN_00988f20();
  local_8._0_1_ = 10;
  local_18 = (undefined4 *)FUN_00aae9af();
  local_8._0_1_ = 0xb;
  if (local_18 == (undefined4 *)0x0) {
    local_18 = (undefined4 *)0x0;
  }
  else {
    local_18 = (undefined4 *)FUN_009a9ce0();
  }
  local_8._0_1_ = 10;
  FUN_009e6810(local_50,&local_18);
  if (0xf < local_8c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8c = 0xf;
  local_90 = 0;
  uVar2 = local_a0[0] >> 8;
  local_a0[0] = uVar2 << 8;
  if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_70 = 0xf;
  local_74 = 0;
  local_84 = local_84 & 0xffffff00;
  if (0xf < local_a8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_a8 = 0xf;
  local_ac = 0;
  local_bc[0] = local_bc[0] & 0xffffff00;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 5;
  uVar3 = (undefined1)local_8;
  local_8._0_1_ = 5;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (*local_68 < 0) {
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    local_8._0_1_ = uVar3;
    FUN_00409350(&DAT_00e29bb4,4);
    local_8 = 0xe;
    local_14 = 4;
    puVar4 = (undefined4 *)FUN_009a8ee0(local_b4,local_50);
    local_8 = 0xf;
    local_14 = 0xc;
  }
  else {
    local_8c = 0xf;
    local_90 = 0;
    local_a0[0] = uVar2 << 8;
    FUN_00409350(&DAT_00e29bac,4);
    local_8 = CONCAT31(local_8._1_3_,0xc);
    local_14 = 1;
    puVar4 = (undefined4 *)FUN_009a8ee0(local_7c,local_a0);
    local_8 = 0xd;
    local_14 = 3;
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350("DIRECTION",9);
  local_8 = 0x10;
  puVar5 = (undefined4 *)FUN_00aae9af();
  local_8._0_1_ = 0x11;
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = &PTR_FUN_00e38ecc;
    puVar5[1] = local_64;
    puVar5[7] = 0xf;
    puVar5[6] = 0;
    *(undefined1 *)(puVar5 + 2) = 0;
    local_18 = puVar5;
    FUN_00408ed0();
    *puVar5 = &PTR_FUN_00e38f08;
    local_c0 = puVar5 + 9;
    *local_c0 = *puVar4;
    puVar5[10] = 0;
    puVar5[0xb] = 0;
    puVar5[0xc] = 0;
    local_8._0_1_ = 0x13;
    FUN_009a97b0();
  }
  local_8 = CONCAT31(local_8._1_3_,0x10);
  local_18 = puVar5;
  FUN_009e6810(local_34,&local_18);
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  if ((local_14 & 8) != 0) {
    local_14 = local_14 & 0xfffffff7;
    local_8 = 0x14;
    FUN_009adb70();
    if (local_b0 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_b0 = 0;
    local_ac = 0;
    local_a8 = 0;
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
    local_8 = 0x15;
    FUN_009adb70();
    if (local_78 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_78 = 0;
    local_74 = 0;
    local_70 = 0;
  }
  local_8 = 5;
  if (((local_14 & 1) != 0) && (local_14 = local_14 & 0xfffffffe, 0xf < local_8c)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_18 = (undefined4 *)((float)*local_68 / 1000.0 - 1.0);
  pcVar8 = "+";
  if ((float)local_18 <= 0.0) {
    pcVar8 = "";
  }
  local_e4 = 0xf;
  local_e8 = 0;
  local_f8 = local_f8 & 0xffffff00;
  pcVar6 = pcVar8;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(pcVar8,(int)pcVar6 - (int)(pcVar8 + 1));
  local_8._0_1_ = 0x16;
  local_8c = 0xf;
  local_90 = 0;
  local_a0[0] = local_a0[0] & 0xffffff00;
  FUN_00409350(&DAT_00df8544,3);
  local_8._0_1_ = 0x17;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350(&DAT_00dfb974,4);
  local_8._0_1_ = 0x18;
  FUN_00988d00(local_114,1);
  local_8._0_1_ = 0x19;
  FUN_00988f20();
  local_8._0_1_ = 0x1a;
  FUN_00988f20();
  local_8._0_1_ = 0x1b;
  FUN_00988f20();
  local_8._0_1_ = 0x1c;
  local_c0 = (undefined4 *)FUN_00aae9af();
  local_8._0_1_ = 0x1d;
  if (local_c0 == (undefined4 *)0x0) {
    local_18 = (undefined4 *)0x0;
  }
  else {
    local_18 = (undefined4 *)FUN_009a9ce0();
  }
  local_8._0_1_ = 0x1c;
  FUN_009e6810(local_34,&local_18);
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_70 = 0xf;
  local_74 = 0;
  local_84 = local_84 & 0xffffff00;
  if (0xf < local_a8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_a8 = 0xf;
  local_ac = 0;
  local_bc[0] = local_bc[0] & 0xffffff00;
  if (0xf < local_100) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_100 = 0xf;
  local_104 = 0;
  local_114[0] = local_114[0] & 0xffffff00;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 0x16;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  if (0xf < local_8c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  iVar7 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar7 + 0x6c),*(undefined8 *)(iVar7 + 0x74));
  local_14 = local_14 | 0x10;
  if (0xf < local_e4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_e4 = 0xf;
  local_e8 = 0;
  local_f8 = local_f8 & 0xffffff00;
  if (0xf < local_c8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_c8 = 0xf;
  local_cc = 0;
  local_dc = local_dc & 0xffffff00;
  local_8 = CONCAT31(local_8._1_3_,0x1e);
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

