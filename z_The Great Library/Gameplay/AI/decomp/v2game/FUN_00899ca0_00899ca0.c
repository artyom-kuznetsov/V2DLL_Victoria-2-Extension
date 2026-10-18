// FUN_00899ca0 @ 00899ca0 body=[[00899ca0, 00899f61] [00899f65, 00899f8a] [00899f8e, 00899fb3] [00899fb7, 00899fdc] [00899fe0, 0089a005] [0089a009, 0089a02e] [0089a032, 0089a057] [0089a05b, 0089a080] [0089a084, 0089a0a9] [0089a0ad, 0089a0e2] [0089a0e6, 0089a102] [0089a106, 0089a12a] [0089a12e, 0089a147] [0089a14b, 0089a16a] [0089a16e, 0089a18d] [0089a191, 0089a1b1] [0089a1b5, 0089a22c] [0089a230, 0089a255] [0089a259, 0089a278] [0089a27c, 0089a2bc] [0089a2c0, 0089a2d4]]


undefined1 * FUN_00899ca0(undefined1 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int in_ECX;
  uint in_stack_00000024;
  undefined4 in_stack_0000002c;
  undefined1 local_258 [8];
  undefined4 local_250;
  undefined4 local_24c;
  undefined4 local_248;
  int local_244;
  undefined4 local_240;
  uint local_210;
  undefined4 local_200;
  uint local_1fc;
  uint local_1f4 [4];
  undefined4 local_1e4;
  uint local_1e0;
  uint local_1d8;
  undefined4 local_1c8;
  uint local_1c4;
  uint local_1bc;
  undefined4 local_1ac;
  uint local_1a8;
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
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b6886f;
  local_10 = ExceptionList;
  local_14 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_0089a2e0();
  if ((int)(*(int *)(in_ECX + 0x40) - *(int *)(in_ECX + 0x3c) & 0xfffffffcU) < 1) {
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    FUN_00409350();
    if (0xf < in_stack_00000024) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    ExceptionList = local_10;
    return param_1;
  }
  uVar3 = *(int *)(param_2 + 0x40) * 0x343fd + 0x269ec3;
  uVar4 = uVar3 * 0x343fd + 0x269ec3;
  *(uint *)(param_2 + 0x40) = uVar4;
  iVar1 = *(int *)(in_ECX + 0x40);
  iVar2 = *(int *)(in_ECX + 0x3c);
  FUN_008a88d0();
  local_18 = 0x2d2d2d;
  local_240 = 0;
  local_250 = 0x2d2d2d;
  local_24c = 0;
  local_248 = 0;
  local_244 = *(int *)(*(int *)(in_ECX + 0x3c) +
                      (int)((longlong)
                            (ulonglong)((uVar4 >> 0x10 & 0x7fff) * (uVar3 >> 0x10 & 0x7fff)) %
                           (longlong)(iVar1 - iVar2 >> 2)) * 4);
  local_90 = 0xf;
  local_94 = 0;
  local_a4 = local_a4 & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 1;
  local_58 = 0xf;
  local_5c = 0;
  local_6c = local_6c & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 2;
  local_ac = 0xf;
  local_b0 = 0;
  local_c0 = local_c0 & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 3;
  local_74 = 0xf;
  local_78 = 0;
  local_88 = local_88 & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 4;
  local_3c = 0xf;
  local_40 = 0;
  local_50 = local_50 & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 5;
  local_14 = (**(code **)(**(int **)(local_244 + 100) + 0x1c))();
  local_8._0_1_ = 6;
  FUN_009a8ee0();
  local_8._0_1_ = 7;
  FUN_00475500();
  local_20 = FUN_009a9880();
  local_8._0_1_ = 8;
  FUN_0096d650();
  local_8._0_1_ = 9;
  FUN_00974c50();
  local_8._0_1_ = 10;
  FUN_00988f20();
  local_8._0_1_ = 0xb;
  FUN_00988f20();
  local_8._0_1_ = 0xc;
  FUN_00988f20();
  local_8._0_1_ = 0xd;
  FUN_00988f20();
  local_8._0_1_ = 0xe;
  FUN_00988f20();
  local_8._0_1_ = 0xf;
  FUN_00988f20();
  local_8._0_1_ = 0x10;
  FUN_00988f20();
  if (0xf < local_e4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_e4 = 0xf;
  local_e8 = 0;
  local_f8 = local_f8 & 0xffffff00;
  if (0xf < local_11c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_11c = 0xf;
  local_120 = 0;
  local_130 = local_130 & 0xffffff00;
  if (0xf < local_1fc) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_1fc = 0xf;
  local_200 = 0;
  local_210 = local_210 & 0xffffff00;
  if (0xf < local_154) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_154 = 0xf;
  local_158 = 0;
  local_168 = local_168 & 0xffffff00;
  if (0xf < local_1c4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_1c4 = 0xf;
  local_1c8 = 0;
  local_1d8 = local_1d8 & 0xffffff00;
  if (0xf < local_18c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_18c = 0xf;
  local_190 = 0;
  local_1a0 = local_1a0 & 0xffffff00;
  if (0xf < local_100) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_100 = 0xf;
  local_104 = 0;
  local_114 = local_114 & 0xffffff00;
  if (0xf < local_138) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_138 = 0xf;
  local_13c = 0;
  local_14c = local_14c & 0xffffff00;
  if (0xf < local_170) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_170 = 0xf;
  local_174 = 0;
  local_184 = local_184 & 0xffffff00;
  local_8._0_1_ = 0x1c;
  FUN_009adb70();
  if (local_30 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  if (0xf < local_1a8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_1a8 = 0xf;
  local_1ac = 0;
  local_1bc = local_1bc & 0xffffff00;
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
  local_88 = local_88 & 0xffffff00;
  if (0xf < local_ac) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_ac = 0xf;
  local_b0 = 0;
  local_c0 = local_c0 & 0xffffff00;
  if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_58 = 0xf;
  local_5c = 0;
  local_6c = local_6c & 0xffffff00;
  local_8._0_1_ = 0x22;
  if (0xf < local_90) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_90 = 0xf;
  local_94 = 0;
  local_a4 = local_a4 & 0xffffff00;
  FUN_00408ed0(&param_4,0,0xffffffff);
  FUN_0087a6c0(local_1f4,local_258,param_3);
  local_8 = CONCAT31(local_8._1_3_,0x23);
  FUN_00988f20();
  if (0xf < local_1e0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_1e0 = 0xf;
  local_1e4 = 0;
  local_1f4[0] = local_1f4[0] & 0xffffff00;
  if (0xf < local_c8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_c8 = 0xf;
  local_cc = 0;
  local_dc = local_dc & 0xffffff00;
  if (0xf < in_stack_00000024) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

