// FUN_0087d260 @ 0087d260 body=[[0087d260, 0087d2d2] [0087d2d6, 0087d42a] [0087d42e, 0087d44c] [0087d450, 0087d46f] [0087d473, 0087d492] [0087d496, 0087d4b0] [0087d4b4, 0087d5f1] [0087d5f5, 0087d63f] [0087d643, 0087d66d] [0087d671, 0087d6aa] [0087d6ae, 0087d6d6] [0087d6da, 0087d850] [0087d854, 0087d872] [0087d876, 0087d895] [0087d899, 0087d8be] [0087d8c2, 0087d8e1] [0087d8e5, 0087d8ff] [0087d903, 0087d9e9] [0087d9ed, 0087da11] [0087da15, 0087da2e] [0087da32, 0087da4b] [0087da4f, 0087da69] [0087da6d, 0087daae] [0087dab2, 0087dadb] [0087dadf, 0087db24] [0087db28, 0087db48] [0087db4c, 0087db60]]


undefined4 FUN_0087d260(undefined4 param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int in_ECX;
  int *piVar8;
  char *pcVar9;
  float10 fVar10;
  uint in_stack_00000020;
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
  uint local_bc;
  int local_b0;
  undefined4 local_ac;
  uint local_a8;
  int *local_a0;
  undefined1 local_9c [4];
  int local_98;
  undefined4 local_94;
  undefined4 local_90;
  uint local_88 [3];
  int local_7c;
  undefined4 local_78;
  uint local_74;
  uint local_6c [4];
  undefined4 local_5c;
  uint local_58;
  uint local_50;
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
  
  puStack_c = &LAB_00b69c75;
  local_10 = ExceptionList;
  local_14 = 0;
  local_8 = 1;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350();
  local_8._0_1_ = 2;
  FUN_009a8ee0();
  local_8._0_1_ = 4;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  local_c8 = 0xf;
  local_cc = 0;
  local_dc = local_dc & 0xffffff00;
  FUN_00409350();
  piVar8 = (int *)(in_ECX + 0x20);
  local_8._0_1_ = 5;
  local_a0 = piVar8;
  if ((*piVar8 < 0) || (0 < *piVar8)) {
    FUN_00409350();
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50 = local_50 & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 6;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 7;
  fVar10 = (float10)FUN_0040b340((float)*piVar8 / 1000.0);
  local_18 = (undefined4 *)(float)fVar10;
  uVar4 = FUN_00988d00();
  local_8._0_1_ = 8;
  FUN_00988f20(uVar4);
  local_8._0_1_ = 9;
  uVar4 = FUN_00988f20(local_34);
  local_8._0_1_ = 10;
  local_18 = (undefined4 *)FUN_00aae9af(0x40);
  local_8._0_1_ = 0xb;
  if (local_18 == (undefined4 *)0x0) {
    local_18 = (undefined4 *)0x0;
  }
  else {
    local_18 = (undefined4 *)FUN_009a9ce0(local_18,local_9c,uVar4);
  }
  local_8._0_1_ = 10;
  FUN_009e6810();
  if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_6c[0]);
  }
  local_58 = 0xf;
  local_5c = 0;
  uVar2 = local_6c[0] >> 8;
  local_6c[0] = uVar2 << 8;
  if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_88[0]);
  }
  local_74 = 0xf;
  local_78 = 0;
  local_88[0] = local_88[0] & 0xffffff00;
  if (0xf < local_a8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_bc);
  }
  local_a8 = 0xf;
  local_ac = 0;
  local_bc = local_bc & 0xffffff00;
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
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50);
  }
  if (*local_a0 < 0) {
    local_3c = 0xf;
    local_40 = 0;
    local_50 = local_50 & 0xffffff00;
    local_8._0_1_ = uVar3;
    FUN_00409350();
    local_8 = 0xe;
    local_14 = 4;
    puVar5 = (undefined4 *)FUN_009a8ee0();
    local_8 = 0xf;
    local_14 = 0xc;
  }
  else {
    local_58 = 0xf;
    local_5c = 0;
    local_6c[0] = uVar2 << 8;
    FUN_00409350();
    local_8 = CONCAT31(local_8._1_3_,0xc);
    local_14 = 1;
    puVar5 = (undefined4 *)FUN_009a8ee0();
    local_8 = 0xd;
    local_14 = 3;
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350();
  local_8 = 0x10;
  puVar6 = (undefined4 *)FUN_00aae9af(0x38);
  local_8._0_1_ = 0x11;
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    *puVar6 = &PTR_FUN_00e38ecc;
    puVar6[1] = local_9c;
    puVar6[7] = 0xf;
    puVar6[6] = 0;
    *(undefined1 *)(puVar6 + 2) = 0;
    local_18 = puVar6;
    FUN_00408ed0(local_34,0,0xffffffff);
    *puVar6 = &PTR_FUN_00e38f08;
    local_c0 = puVar6 + 9;
    *local_c0 = *puVar5;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    local_8._0_1_ = 0x13;
    FUN_009a97b0();
  }
  local_8 = CONCAT31(local_8._1_3_,0x10);
  local_18 = puVar6;
  FUN_009e6810();
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
    if (local_b0 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_b0);
    }
    local_b0 = 0;
    local_ac = 0;
    local_a8 = 0;
  }
  if ((local_14 & 4) != 0) {
    local_14 = local_14 & 0xfffffffb;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_50);
    }
    local_3c = 0xf;
    local_40 = 0;
    local_50 = local_50 & 0xffffff00;
  }
  if ((local_14 & 2) != 0) {
    local_14 = local_14 & 0xfffffffd;
    local_8 = 0x15;
    FUN_009adb70();
    if (local_7c != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_7c);
    }
    local_7c = 0;
    local_78 = 0;
    local_74 = 0;
  }
  local_8 = 5;
  if (((local_14 & 1) != 0) && (local_14 = local_14 & 0xfffffffe, 0xf < local_58)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_6c[0]);
  }
  local_18 = (undefined4 *)((float)*local_a0 / 1000.0 - 1.0);
  pcVar9 = "+";
  if ((float)local_18 <= 0.0) {
    pcVar9 = "";
  }
  local_100 = 0xf;
  local_104 = 0;
  local_114[0] = local_114[0] & 0xffffff00;
  do {
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_00409350();
  local_8._0_1_ = 0x16;
  local_58 = 0xf;
  local_5c = 0;
  local_6c[0] = local_6c[0] & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 0x17;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 0x18;
  uVar4 = FUN_00988d00();
  local_8._0_1_ = 0x19;
  FUN_00988f20(local_114);
  local_8._0_1_ = 0x1a;
  FUN_00988f20(uVar4);
  local_8._0_1_ = 0x1b;
  uVar4 = FUN_00988f20(local_6c);
  local_8._0_1_ = 0x1c;
  local_c0 = (undefined4 *)FUN_00aae9af(0x40);
  local_8._0_1_ = 0x1d;
  if (local_c0 == (undefined4 *)0x0) {
    local_18 = (undefined4 *)0x0;
  }
  else {
    local_18 = (undefined4 *)FUN_009a9ce0(local_c0,local_9c,uVar4);
  }
  local_8._0_1_ = 0x1c;
  FUN_009e6810();
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50 = local_50 & 0xffffff00;
  if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_88[0]);
  }
  local_74 = 0xf;
  local_78 = 0;
  local_88[0] = local_88[0] & 0xffffff00;
  if (0xf < local_a8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_bc);
  }
  local_a8 = 0xf;
  local_ac = 0;
  local_bc = local_bc & 0xffffff00;
  if (0xf < local_e4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_f8);
  }
  local_e4 = 0xf;
  local_e8 = 0;
  local_f8 = local_f8 & 0xffffff00;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  local_8._0_1_ = 0x16;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_6c[0]);
  }
  local_58 = 0xf;
  local_5c = 0;
  local_6c[0] = local_6c[0] & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 0x1e;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 0x1f;
  (**(code **)(**(int **)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_2 + 0x10) * 4) + 0x1c))
            (local_88);
  local_8._0_1_ = 0x20;
  FUN_00988fa0();
  local_8._0_1_ = 0x21;
  FUN_00988f20();
  local_8._0_1_ = 0x22;
  param_2 = FUN_00aae9af();
  local_8._0_1_ = 0x23;
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    param_2 = FUN_009a9ce0();
  }
  local_8._0_1_ = 0x22;
  FUN_009e6810(local_34,&param_2);
  if (0xf < local_e4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_e4 = 0xf;
  local_e8 = 0;
  local_f8 = local_f8 & 0xffffff00;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50 = local_50 & 0xffffff00;
  if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_74 = 0xf;
  local_78 = 0;
  local_88[0] = local_88[0] & 0xffffff00;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 0x16;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  iVar7 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar7 + 0x6c),*(undefined8 *)(iVar7 + 0x74));
  local_14 = local_14 | 0x10;
  if (0xf < local_100) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_100 = 0xf;
  local_104 = 0;
  local_114[0] = local_114[0] & 0xffffff00;
  if (0xf < local_c8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_c8 = 0xf;
  local_cc = 0;
  local_dc = local_dc & 0xffffff00;
  local_8 = CONCAT31(local_8._1_3_,0x24);
  FUN_009adb70();
  if (local_98 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_98 = 0;
  local_94 = 0;
  local_90 = 0;
  if (in_stack_00000020 < 0x10) {
    ExceptionList = local_10;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

