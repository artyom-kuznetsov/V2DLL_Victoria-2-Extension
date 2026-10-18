// FUN_008954f0 @ 008954f0 body=[[008954f0, 00895561] [00895565, 008956f9] [008956fd, 0089571b] [0089571f, 0089573e] [00895742, 00895761] [00895765, 0089577f] [00895783, 008958bb] [008958bf, 00895909] [0089590d, 00895937] [0089593b, 0089597d] [00895981, 008959ac] [008959b0, 00895b0a] [00895b0e, 00895b2c] [00895b30, 00895b4f] [00895b53, 00895b78] [00895b7c, 00895b9b] [00895b9f, 00895bb9] [00895bbd, 00895ca4] [00895ca8, 00895ccc] [00895cd0, 00895ce9] [00895ced, 00895d06] [00895d0a, 00895d24] [00895d28, 00895d69] [00895d6d, 00895d97] [00895d9b, 00895dd1] [00895dd5, 00895dea]]


undefined4 FUN_008954f0(undefined4 param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  int iVar8;
  int in_ECX;
  char *pcVar9;
  float10 fVar10;
  uint in_stack_00000020;
  undefined1 *puVar11;
  uint local_118 [4];
  undefined4 local_108;
  uint local_104;
  uint local_fc [4];
  undefined4 local_ec;
  uint local_e8;
  uint local_e0;
  undefined4 local_d0;
  uint local_cc;
  undefined1 local_c4 [20];
  uint local_b0 [2];
  undefined1 local_a8 [4];
  int local_a4;
  undefined4 local_a0;
  uint local_9c;
  uint local_94 [2];
  undefined1 local_8c [4];
  int local_88;
  undefined4 local_84;
  uint local_80;
  uint local_78 [4];
  undefined4 local_68;
  uint local_64;
  undefined4 local_5c;
  float local_58;
  uint local_54 [4];
  undefined4 local_44;
  uint local_40;
  undefined4 *local_38;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined4 *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b68e45;
  local_10 = ExceptionList;
  local_14 = 0;
  local_8 = 1;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("PRESTIGE_EFFECT",0xf);
  local_8._0_1_ = 2;
  FUN_009a8ee0(local_c4,local_34);
  local_8._0_1_ = 4;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  local_cc = 0xf;
  local_d0 = 0;
  local_e0 = local_e0 & 0xffffff00;
  FUN_00409350(&DAT_00df963c,2);
  local_8 = CONCAT31(local_8._1_3_,5);
  puVar4 = *(undefined4 **)(in_ECX + 0x20);
  if ((int)puVar4 < 1) {
LAB_008955ea:
    local_38 = puVar4;
    if (-1 < (int)puVar4) goto LAB_008955fe;
    puVar11 = &DAT_00df8510;
  }
  else {
    local_5c = *(undefined4 *)(param_2 + 8);
    local_38 = puVar4;
    puVar4 = (undefined4 *)
             __alldiv((longlong)
                      (*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                                 *(int *)(param_2 + 0xc) * 4) + 0xbcc) + 0x288) +
                      1000) * (longlong)(int)puVar4,1000,0);
    if ((int)puVar4 < 1) goto LAB_008955ea;
    puVar11 = &DAT_00df8518;
    local_38 = puVar4;
  }
  puVar4 = local_38;
  FUN_00409350(puVar11,2);
LAB_008955fe:
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = local_54[0] & 0xffffff00;
  FUN_00409350("VALUE",5);
  local_8._0_1_ = 6;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350(&DAT_00df8514,2);
  local_8._0_1_ = 7;
  local_58 = (float)(int)puVar4 / 1000.0;
  fVar10 = (float10)FUN_0040b340(local_58);
  local_18 = (undefined4 *)(float)fVar10;
  uVar5 = FUN_00988d00(local_b0,3);
  local_8._0_1_ = 8;
  FUN_00988f20(uVar5);
  local_8._0_1_ = 9;
  uVar5 = FUN_00988f20(local_34);
  local_8._0_1_ = 10;
  local_18 = (undefined4 *)FUN_00aae9af(0x40);
  local_8._0_1_ = 0xb;
  if (local_18 == (undefined4 *)0x0) {
    local_18 = (undefined4 *)0x0;
  }
  else {
    local_18 = (undefined4 *)FUN_009a9ce0(local_18,local_c4,uVar5);
  }
  local_8._0_1_ = 10;
  FUN_009e6810(local_54,&local_18);
  if (0xf < local_64) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_78[0]);
  }
  local_64 = 0xf;
  local_68 = 0;
  uVar2 = local_78[0] >> 8;
  local_78[0] = uVar2 << 8;
  if (0xf < local_80) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_94[0]);
  }
  local_80 = 0xf;
  local_84 = 0;
  local_94[0] = local_94[0] & 0xffffff00;
  if (0xf < local_9c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_b0[0]);
  }
  local_9c = 0xf;
  local_a0 = 0;
  local_b0[0] = local_b0[0] & 0xffffff00;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  local_8._0_1_ = 5;
  uVar3 = (undefined1)local_8;
  local_8._0_1_ = 5;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_54[0]);
  }
  if ((int)local_38 < 0) {
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = local_54[0] & 0xffffff00;
    local_8._0_1_ = uVar3;
    FUN_00409350(&DAT_00e29bb4,4);
    local_8 = 0xe;
    local_14 = 4;
    puVar4 = (undefined4 *)FUN_009a8ee0(local_a8,local_54);
    local_8 = 0xf;
    local_14 = 0xc;
  }
  else {
    local_64 = 0xf;
    local_68 = 0;
    local_78[0] = uVar2 << 8;
    FUN_00409350(&DAT_00e29bac,4);
    local_8 = CONCAT31(local_8._1_3_,0xc);
    local_14 = 1;
    puVar4 = (undefined4 *)FUN_009a8ee0(local_8c,local_78);
    local_8 = 0xd;
    local_14 = 3;
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350("DIRECTION",9);
  local_8 = 0x10;
  puVar6 = (undefined4 *)FUN_00aae9af(0x38);
  local_8._0_1_ = 0x11;
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    *puVar6 = &PTR_FUN_00e38ecc;
    puVar6[1] = local_c4;
    puVar6[7] = 0xf;
    puVar6[6] = 0;
    *(undefined1 *)(puVar6 + 2) = 0;
    local_18 = puVar6;
    FUN_00408ed0(local_34,0,0xffffffff);
    *puVar6 = &PTR_FUN_00e38f08;
    local_38 = puVar6 + 9;
    *local_38 = *puVar4;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    local_8._0_1_ = 0x13;
    FUN_009a97b0();
  }
  local_8 = CONCAT31(local_8._1_3_,0x10);
  local_18 = puVar6;
  FUN_009e6810(local_34,&local_18);
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  if ((local_14 & 8) != 0) {
    local_14 = local_14 & 0xfffffff7;
    local_8 = 0x14;
    FUN_009adb70();
    if (local_a4 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_a4);
    }
    local_a4 = 0;
    local_a0 = 0;
    local_9c = 0;
  }
  if ((local_14 & 4) != 0) {
    local_14 = local_14 & 0xfffffffb;
    if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_54[0]);
    }
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = local_54[0] & 0xffffff00;
  }
  if ((local_14 & 2) != 0) {
    local_14 = local_14 & 0xfffffffd;
    local_8 = 0x15;
    FUN_009adb70();
    if (local_88 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_88);
    }
    local_88 = 0;
    local_84 = 0;
    local_80 = 0;
  }
  local_8 = 5;
  if (((local_14 & 1) != 0) && (local_14 = local_14 & 0xfffffffe, 0xf < local_64)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_78[0]);
  }
  local_58 = local_58 - 1.0;
  pcVar9 = "+";
  if (local_58 <= 0.0) {
    pcVar9 = "";
  }
  local_104 = 0xf;
  local_108 = 0;
  local_118[0] = local_118[0] & 0xffffff00;
  pcVar7 = pcVar9;
  do {
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(pcVar9,(int)pcVar7 - (int)(pcVar9 + 1));
  local_8._0_1_ = 0x16;
  local_64 = 0xf;
  local_68 = 0;
  local_78[0] = local_78[0] & 0xffffff00;
  FUN_00409350(&DAT_00df8544,3);
  local_8._0_1_ = 0x17;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350(&DAT_00dfb974,4);
  local_8._0_1_ = 0x18;
  uVar5 = FUN_00988d00(local_fc,1);
  local_8._0_1_ = 0x19;
  FUN_00988f20(local_118);
  local_8._0_1_ = 0x1a;
  FUN_00988f20(uVar5);
  local_8._0_1_ = 0x1b;
  uVar5 = FUN_00988f20(local_78);
  local_8._0_1_ = 0x1c;
  local_58 = (float)FUN_00aae9af(0x40);
  local_8._0_1_ = 0x1d;
  if (local_58 == 0.0) {
    local_58 = 0.0;
  }
  else {
    local_58 = (float)FUN_009a9ce0(local_58,local_c4,uVar5);
  }
  local_8._0_1_ = 0x1c;
  FUN_009e6810(local_34,&local_58);
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_54[0]);
  }
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = local_54[0] & 0xffffff00;
  if (0xf < local_80) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_94[0]);
  }
  local_80 = 0xf;
  local_84 = 0;
  local_94[0] = local_94[0] & 0xffffff00;
  if (0xf < local_9c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_b0[0]);
  }
  local_9c = 0xf;
  local_a0 = 0;
  local_b0[0] = local_b0[0] & 0xffffff00;
  if (0xf < local_e8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_fc[0]);
  }
  local_e8 = 0xf;
  local_ec = 0;
  local_fc[0] = local_fc[0] & 0xffffff00;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  local_8._0_1_ = 0x16;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  if (0xf < local_64) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_78[0]);
  }
  local_64 = 0xf;
  local_68 = 0;
  local_78[0] = local_78[0] & 0xffffff00;
  FUN_00409350(&DAT_00df8514,2);
  local_8._0_1_ = 0x1e;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350("WHERE",5);
  local_8._0_1_ = 0x1f;
  uVar5 = (**(code **)(**(int **)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_2 + 0x10) * 4) +
                      0x1c))(local_94);
  local_8._0_1_ = 0x20;
  FUN_00988fa0(uVar5);
  local_8._0_1_ = 0x21;
  uVar5 = FUN_00988f20(local_78);
  local_8._0_1_ = 0x22;
  param_2 = FUN_00aae9af(0x40);
  local_8._0_1_ = 0x23;
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    param_2 = FUN_009a9ce0(param_2,local_c4,uVar5);
  }
  local_8._0_1_ = 0x22;
  FUN_009e6810(local_34,&param_2);
  if (0xf < local_e8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_fc[0]);
  }
  local_e8 = 0xf;
  local_ec = 0;
  local_fc[0] = local_fc[0] & 0xffffff00;
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_54[0]);
  }
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = local_54[0] & 0xffffff00;
  if (0xf < local_80) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_94[0]);
  }
  local_80 = 0xf;
  local_84 = 0;
  local_94[0] = local_94[0] & 0xffffff00;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  local_8._0_1_ = 0x16;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  if (0xf < local_64) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_78[0]);
  }
  iVar8 = FUN_00475500();
  FUN_009a9880((int)*(undefined8 *)(iVar8 + 0x6c),
               (int)((ulonglong)*(undefined8 *)(iVar8 + 0x6c) >> 0x20),
               (int)*(undefined8 *)(iVar8 + 0x74),
               (int)((ulonglong)*(undefined8 *)(iVar8 + 0x74) >> 0x20));
  local_14 = local_14 | 0x10;
  if (0xf < local_104) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_118[0]);
  }
  local_104 = 0xf;
  local_108 = 0;
  local_118[0] = local_118[0] & 0xffffff00;
  if (0xf < local_cc) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_e0);
  }
  local_cc = 0xf;
  local_d0 = 0;
  local_e0 = local_e0 & 0xffffff00;
  local_8 = CONCAT31(local_8._1_3_,0x24);
  FUN_009adb70();
  FUN_004d8540();
  if (0xf < in_stack_00000020) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_3);
  }
  ExceptionList = local_10;
  return param_1;
}

