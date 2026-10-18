// FUN_0087bd20 @ 0087bd20 body=[[0087bd20, 0087bec7] [0087becb, 0087bef2] [0087bef6, 0087bf0f] [0087bf13, 0087bf29] [0087bf2d, 0087bf47] [0087bf4b, 0087c093] [0087c097, 0087c0d5] [0087c0d9, 0087c0fa] [0087c0fe, 0087c137] [0087c13b, 0087c169] [0087c16d, 0087c2b9] [0087c2bd, 0087c2d8] [0087c2dc, 0087c2fa] [0087c2fe, 0087c31d] [0087c321, 0087c340] [0087c344, 0087c364] [0087c368, 0087c3a9] [0087c3ad, 0087c3f5] [0087c3f9, 0087c40d]]


undefined4 FUN_0087bd20(undefined4 param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  undefined1 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *in_ECX;
  uint uVar8;
  char local_f4 [4];
  uint local_f0 [4];
  undefined4 local_e0;
  uint local_dc;
  uint local_d4;
  undefined4 local_c4;
  uint local_c0;
  undefined1 local_b8 [4];
  int local_b4;
  uint local_a4;
  undefined4 local_94;
  uint local_90;
  uint local_88;
  int local_7c;
  undefined4 local_78;
  uint local_74;
  undefined4 *local_6c;
  uint local_68;
  undefined4 local_58;
  uint local_54;
  uint local_4c [2];
  undefined1 local_44 [4];
  int local_40;
  undefined4 local_3c;
  uint local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b69f3d;
  local_10 = ExceptionList;
  local_14 = 0;
  ExceptionList = &local_10;
  local_6c = in_ECX;
  FUN_009a8ee0();
  local_8 = 1;
  local_c0 = 0xf;
  local_c4 = 0;
  local_d4 = local_d4 & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 2;
  if ((0 < (int)in_ECX[8]) || ((int)in_ECX[8] < 0)) {
    FUN_00409350();
  }
  local_54 = 0xf;
  local_58 = 0;
  local_68 = local_68 & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 3;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  FUN_00409350();
  uVar8 = (int)in_ECX[8] / 1000 >> 0x1f;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  local_8._0_1_ = 5;
  pcVar3 = __itoa(((int)in_ECX[8] / 1000 ^ uVar8) - uVar8,local_f4,10);
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00409350();
  local_8._0_1_ = 6;
  FUN_00988f20(local_30);
  local_8._0_1_ = 7;
  uVar4 = FUN_00988f20(local_4c);
  local_8._0_1_ = 8;
  param_3 = (undefined4 *)FUN_00aae9af(0x40);
  local_8._0_1_ = 9;
  if (param_3 == (undefined4 *)0x0) {
    param_3 = (undefined4 *)0x0;
  }
  else {
    param_3 = (undefined4 *)FUN_009a9ce0(param_3,local_b8,uVar4);
  }
  local_8._0_1_ = 8;
  FUN_009e6810();
  if (0xf < local_90) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_a4);
  }
  local_90 = 0xf;
  local_94 = 0;
  uVar8 = local_a4 >> 8;
  local_a4 = uVar8 << 8;
  if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_88);
  }
  local_74 = 0xf;
  local_78 = 0;
  local_88 = local_88 & 0xffffff00;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  local_8._0_1_ = 2;
  uVar2 = (undefined1)local_8;
  local_8._0_1_ = 2;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_68);
  }
  if ((int)local_6c[8] < 0) {
    local_54 = 0xf;
    local_58 = 0;
    local_68 = local_68 & 0xffffff00;
    local_8._0_1_ = uVar2;
    FUN_00409350();
    local_8 = 0xc;
    local_14 = 4;
    puVar5 = (undefined4 *)FUN_009a8ee0();
    local_8 = 0xd;
    local_14 = 0xc;
  }
  else {
    local_90 = 0xf;
    local_94 = 0;
    local_a4 = uVar8 << 8;
    FUN_00409350();
    local_8 = CONCAT31(local_8._1_3_,10);
    local_14 = 1;
    puVar5 = (undefined4 *)FUN_009a8ee0();
    local_8 = 0xb;
    local_14 = 3;
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350();
  local_8 = 0xe;
  puVar6 = (undefined4 *)FUN_00aae9af(0x38);
  local_8._0_1_ = 0xf;
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    *puVar6 = &PTR_FUN_00e38ecc;
    puVar6[1] = local_b8;
    puVar6[7] = 0xf;
    puVar6[6] = 0;
    *(undefined1 *)(puVar6 + 2) = 0;
    param_3 = puVar6;
    FUN_00408ed0(local_30,0,0xffffffff);
    *puVar6 = &PTR_FUN_00e38f08;
    local_6c = puVar6 + 9;
    *local_6c = *puVar5;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    local_8._0_1_ = 0x11;
    FUN_009a97b0();
  }
  local_8 = CONCAT31(local_8._1_3_,0xe);
  param_3 = puVar6;
  FUN_009e6810();
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  if ((local_14 & 8) != 0) {
    local_14 = local_14 & 0xfffffff7;
    local_8 = 0x12;
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
  if ((local_14 & 4) != 0) {
    local_14 = local_14 & 0xfffffffb;
    if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_68);
    }
    local_54 = 0xf;
    local_58 = 0;
    local_68 = local_68 & 0xffffff00;
  }
  if ((local_14 & 2) != 0) {
    local_14 = local_14 & 0xfffffffd;
    local_8 = 0x13;
    FUN_009adb70();
    if (local_40 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_40);
    }
    local_40 = 0;
    local_3c = 0;
    local_38 = 0;
  }
  local_8 = 2;
  if (((local_14 & 1) != 0) && (local_14 = local_14 & 0xfffffffe, 0xf < local_90)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_a4);
  }
  local_90 = 0xf;
  local_94 = 0;
  local_a4 = local_a4 & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 0x14;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 0x15;
  (**(code **)(**(int **)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_2 + 0x10) * 4) + 0x1c))
            (local_f0);
  local_8._0_1_ = 0x16;
  FUN_00988fa0();
  local_8._0_1_ = 0x17;
  uVar4 = FUN_00988f20();
  local_8._0_1_ = 0x18;
  puVar5 = (undefined4 *)FUN_009a8ee0(local_44,uVar4);
  local_8._0_1_ = 0x19;
  puVar6 = (undefined4 *)FUN_00aae9af();
  local_8._0_1_ = 0x1a;
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    *puVar6 = &PTR_FUN_00e38ecc;
    puVar6[1] = local_b8;
    puVar6[7] = 0xf;
    puVar6[6] = 0;
    *(undefined1 *)(puVar6 + 2) = 0;
    param_3 = puVar6;
    FUN_00408ed0();
    *puVar6 = &PTR_FUN_00e38f08;
    puVar6[9] = *puVar5;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    local_8._0_1_ = 0x1c;
    FUN_009a97b0();
  }
  local_8._0_1_ = 0x19;
  param_3 = puVar6;
  FUN_009e6810(local_30,&param_3);
  local_8._0_1_ = 0x1d;
  FUN_009adb70();
  if (local_40 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_54 = 0xf;
  local_58 = 0;
  local_68 = local_68 & 0xffffff00;
  if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_74 = 0xf;
  local_78 = 0;
  local_88 = local_88 & 0xffffff00;
  if (0xf < local_dc) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_dc = 0xf;
  local_e0 = 0;
  local_f0[0] = local_f0[0] & 0xffffff00;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = CONCAT31(local_8._1_3_,2);
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  if (0xf < local_90) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  iVar7 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar7 + 0x6c),*(undefined8 *)(iVar7 + 0x74));
  local_14 = local_14 | 0x10;
  if (local_c0 < 0x10) {
    local_c0 = 0xf;
    local_c4 = 0;
    local_d4 = local_d4 & 0xffffff00;
    local_8 = 0x1e;
    FUN_009adb70();
    if (local_b4 == 0) {
      ExceptionList = local_10;
      return param_1;
    }
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

