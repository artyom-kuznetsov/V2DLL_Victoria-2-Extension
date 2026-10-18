// FUN_006b3320 @ 006b3320 body=[[006b3320, 006b3458] [006b345c, 006b3487] [006b348b, 006b34ae] [006b34b2, 006b34cc] [006b34d0, 006b34e7] [006b34eb, 006b3509] [006b350d, 006b35f5] [006b35f9, 006b3618] [006b361c, 006b3636] [006b363a, 006b3658] [006b365c, 006b3730] [006b3734, 006b3753] [006b3757, 006b3771] [006b3775, 006b3793] [006b3797, 006b3861] [006b3865, 006b3884] [006b3888, 006b38a2] [006b38a6, 006b38c4] [006b38c8, 006b3996] [006b399a, 006b39b7] [006b39bb, 006b39d8] [006b39dc, 006b39fd] [006b3a01, 006b3b10] [006b3b14, 006b3b33] [006b3b37, 006b3b57] [006b3b5b, 006b3b81] [006b3b85, 006b3ba5] [006b3ba9, 006b3bc7] [006b3bcb, 006b3c9c] [006b3ca0, 006b3cbd] [006b3cc1, 006b3cde] [006b3ce2, 006b3d03] [006b3d07, 006b3d8f] [006b3d93, 006b3db6] [006b3dba, 006b3e9f] [006b3ea3, 006b3ec0] [006b3ec4, 006b3ee1] [006b3ee5, 006b3f06] [006b3f0a, 006b3fca] [006b3fce, 006b3ff7] [006b3ffb, 006b400d]]


void FUN_006b3320(int param_1)

{
  int iVar1;
  int iVar2;
  uint **ppuVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [8];
  uint **ppuStack_128;
  uint **ppuStack_124;
  uint **ppuStack_120;
  uint **ppuStack_11c;
  uint **local_118;
  uint **ppuStack_114;
  uint local_100 [4];
  undefined4 local_f0;
  uint local_ec;
  uint local_e4 [4];
  undefined4 local_d4;
  uint local_d0;
  char **local_c8 [4];
  undefined4 local_b8;
  uint local_b4;
  char **local_ac [4];
  undefined4 local_9c;
  uint local_98;
  undefined4 local_90;
  undefined1 *local_8c;
  char **local_88 [4];
  undefined4 local_78;
  uint local_74;
  char **local_6c [4];
  undefined4 local_5c;
  uint local_58;
  char **local_50 [4];
  undefined4 local_40;
  uint local_3c;
  undefined1 *local_34;
  char **local_30 [4];
  undefined4 local_20;
  uint local_1c;
  char **local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b44bfa;
  local_10 = ExceptionList;
  local_90 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
  iVar5 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4);
  ppuStack_114 = (uint **)0x1;
  local_118 = (uint **)&DAT_00dedc68;
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = (char **)((uint)local_50[0] & 0xffffff00);
  ppuStack_11c = (uint **)0x6b3383;
  ExceptionList = &local_10;
  FUN_00409350();
  local_8 = 0;
  ppuStack_114 = (uint **)0xe;
  local_118 = (uint **)0xdf9698;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = (char **)((uint)local_30[0] & 0xffffff00);
  ppuStack_11c = (uint **)0x6b339e;
  FUN_00409350();
  local_8._0_1_ = 1;
  local_118 = *(uint ***)(*(int *)(iVar5 + 0xa60) + 0x28);
  ppuStack_114 = (uint **)0x2;
  local_14 = (char **)&local_118;
  ppuStack_11c = (uint **)local_6c;
  ppuStack_120 = (uint **)0x6b33be;
  local_34 = (undefined1 *)FUN_00988a50();
  ppuStack_114 = (uint **)0x2;
  local_14 = (char **)&local_118;
  local_8._0_1_ = 2;
  local_118 = *(uint ***)(iVar5 + 0x680);
  ppuStack_11c = (uint **)local_88;
  ppuStack_120 = (uint **)0x6b33e1;
  FUN_00988a50();
  ppuStack_114 = (uint **)local_50;
  local_8._0_1_ = 3;
  local_118 = (uint **)0x6b33f6;
  FUN_00988f20();
  ppuStack_114 = (uint **)local_34;
  local_8._0_1_ = 4;
  local_118 = (uint **)0x6b340b;
  ppuVar3 = (uint **)FUN_00988f20();
  local_8 = CONCAT31(local_8._1_3_,5);
  ppuStack_114 = (uint **)local_30;
  local_118 = (uint **)0x6b3422;
  local_34 = (undefined1 *)(**(code **)(**(int **)(param_1 + 0x68) + 0x3c))();
  local_118 = (uint **)0xffffffff;
  ppuStack_11c = (uint **)0x0;
  ppuStack_124 = (uint **)0x6b3434;
  ppuStack_120 = ppuVar3;
  FUN_00408ed0();
  local_118 = (uint **)0x0;
  ppuStack_120 = (uint **)0x6b3444;
  ppuStack_11c = ppuVar3;
  FUN_00a5ecc0();
  if (0xf < local_98) {
    local_118 = (uint **)local_ac[0];
                    /* WARNING: Subroutine does not return */
    ppuStack_11c = (uint **)&UNK_006b3459;
    FUN_00aae91b();
  }
  local_98 = 0xf;
  local_9c = 0;
  local_ac[0] = (char **)((uint)local_ac[0] & 0xffffff00);
  if (0xf < local_b4) {
    local_118 = (uint **)local_c8[0];
                    /* WARNING: Subroutine does not return */
    ppuStack_11c = (uint **)&UNK_006b3488;
    FUN_00aae91b();
  }
  local_b4 = 0xf;
  local_b8 = 0;
  local_c8[0] = (char **)((uint)local_c8[0] & 0xffffff00);
  if (0xf < local_74) {
    local_118 = (uint **)local_88[0];
                    /* WARNING: Subroutine does not return */
    ppuStack_11c = (uint **)&UNK_006b34af;
    FUN_00aae91b();
  }
  local_74 = 0xf;
  local_78 = 0;
  local_88[0] = (char **)((uint)local_88[0] & 0xffffff00);
  if (0xf < local_58) {
    local_118 = (uint **)local_6c[0];
                    /* WARNING: Subroutine does not return */
    ppuStack_11c = (uint **)&UNK_006b34cd;
    FUN_00aae91b();
  }
  local_58 = 0xf;
  local_5c = 0;
  local_6c[0] = (char **)((uint)local_6c[0] & 0xffffff00);
  if (0xf < local_1c) {
    local_118 = (uint **)local_30[0];
                    /* WARNING: Subroutine does not return */
    ppuStack_11c = (uint **)&UNK_006b34e8;
    FUN_00aae91b();
  }
  local_8 = 0xffffffff;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = (char **)((uint)local_30[0] & 0xffffff00);
  if (0xf < local_3c) {
    local_118 = (uint **)local_50[0];
                    /* WARNING: Subroutine does not return */
    ppuStack_11c = (uint **)&UNK_006b350a;
    FUN_00aae91b();
  }
  local_118 = (uint **)0x1;
  ppuStack_11c = (uint **)&DAT_00df9644;
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = (char **)((uint)local_50[0] & 0xffffff00);
  ppuStack_120 = (uint **)0x6b3525;
  FUN_00409350();
  local_8 = 6;
  local_118 = (uint **)0x12;
  ppuStack_11c = (uint **)0xe0c0d0;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = (char **)((uint)local_30[0] & 0xffffff00);
  ppuStack_120 = (uint **)0x6b3544;
  FUN_00409350();
  local_8._0_1_ = 7;
  local_118 = (uint **)0x0;
  local_34 = (undefined1 *)&ppuStack_11c;
  local_14 = (char **)(*(int *)(*(int *)(iVar5 + 0xa60) + 0x48) + 1000);
  ppuStack_120 = (uint **)0x47c35040;
  ppuStack_124 = (uint **)0x6b3573;
  FUN_00401000();
  ppuStack_120 = (uint **)0x6b357b;
  local_34 = (undefined1 *)FUN_00b31c00();
  unique0x00078400 = (longlong)(int)local_34 * (longlong)(int)local_14;
  ppuStack_120 = (uint **)0x0;
  ppuStack_124 = (uint **)0x3e8;
  auStack_130._0_4_ = 0x6b358e;
  ppuStack_11c = (uint **)__alldiv();
  ppuStack_120 = (uint **)local_88;
  ppuStack_124 = (uint **)0x6b359c;
  FUN_00988a50();
  local_118 = (uint **)local_50;
  local_8._0_1_ = 8;
  ppuStack_11c = (uint **)0x6b35ae;
  ppuVar3 = (uint **)FUN_00988f20();
  local_8 = CONCAT31(local_8._1_3_,9);
  local_118 = (uint **)local_30;
  ppuStack_11c = (uint **)0x6b35c5;
  local_14 = (char **)(**(code **)(**(int **)(param_1 + 0x68) + 0x3c))();
  ppuStack_11c = (uint **)0xffffffff;
  ppuStack_120 = (uint **)0x0;
  ppuStack_128 = (uint **)0x6b35d7;
  ppuStack_124 = ppuVar3;
  FUN_00408ed0();
  ppuStack_11c = (uint **)0x0;
  ppuStack_124 = (uint **)0x6b35e7;
  ppuStack_120 = ppuVar3;
  FUN_00a5ecc0();
  if (0xf < local_58) {
    ppuStack_11c = (uint **)local_6c[0];
                    /* WARNING: Subroutine does not return */
    ppuStack_120 = (uint **)&UNK_006b35f6;
    FUN_00aae91b();
  }
  local_58 = 0xf;
  local_5c = 0;
  local_6c[0] = (char **)((uint)local_6c[0] & 0xffffff00);
  if (0xf < local_74) {
    ppuStack_11c = (uint **)local_88[0];
                    /* WARNING: Subroutine does not return */
    ppuStack_120 = (uint **)&UNK_006b3619;
    FUN_00aae91b();
  }
  local_74 = 0xf;
  local_78 = 0;
  local_88[0] = (char **)((uint)local_88[0] & 0xffffff00);
  if (0xf < local_1c) {
    ppuStack_11c = (uint **)local_30[0];
                    /* WARNING: Subroutine does not return */
    ppuStack_120 = (uint **)&UNK_006b3637;
    FUN_00aae91b();
  }
  local_8 = 0xffffffff;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = (char **)((uint)local_30[0] & 0xffffff00);
  if (0xf < local_3c) {
    ppuStack_11c = (uint **)local_50[0];
                    /* WARNING: Subroutine does not return */
    ppuStack_120 = (uint **)&UNK_006b3659;
    FUN_00aae91b();
  }
  ppuStack_11c = (uint **)0x1;
  ppuStack_120 = (uint **)&DAT_00df9644;
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = (char **)((uint)local_50[0] & 0xffffff00);
  ppuStack_124 = (uint **)0x6b3674;
  FUN_00409350();
  local_8 = 10;
  ppuStack_11c = (uint **)0xa;
  ppuStack_120 = (uint **)0xe0c100;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = (char **)((uint)local_30[0] & 0xffffff00);
  ppuStack_124 = (uint **)0x6b3693;
  FUN_00409350();
  local_8._0_1_ = 0xb;
  ppuStack_120 = (uint **)(*(int *)(*(int *)(iVar5 + 0xa60) + 0x58) + 1000 +
                          *(int *)(*(int *)(iVar5 + 0xbcc) + 0x3c));
  ppuStack_11c = (uint **)0x0;
  auStack_130 = (undefined1  [8])((longlong)(int)local_34 * (longlong)(int)ppuStack_120);
  local_14 = (char **)&ppuStack_120;
  ppuStack_124 = (uint **)0x0;
  ppuStack_128 = (uint **)0x3e8;
  auStack_138._4_4_ = 0x6b36c9;
  ppuStack_120 = (uint **)__alldiv();
  ppuStack_124 = (uint **)local_88;
  ppuStack_128 = (uint **)0x6b36d7;
  FUN_00988a50();
  ppuStack_11c = (uint **)local_50;
  local_8._0_1_ = 0xc;
  ppuStack_120 = (uint **)0x6b36e9;
  ppuVar3 = (uint **)FUN_00988f20();
  local_8 = CONCAT31(local_8._1_3_,0xd);
  ppuStack_11c = (uint **)local_30;
  ppuStack_120 = (uint **)0x6b3700;
  local_14 = (char **)(**(code **)(**(int **)(param_1 + 0x68) + 0x3c))();
  ppuStack_120 = (uint **)0xffffffff;
  ppuStack_124 = (uint **)0x0;
  auStack_130._4_4_ = 0x6b3712;
  ppuStack_128 = ppuVar3;
  FUN_00408ed0();
  ppuStack_120 = (uint **)0x0;
  ppuStack_128 = (uint **)0x6b3722;
  ppuStack_124 = ppuVar3;
  FUN_00a5ecc0();
  if (0xf < local_58) {
    ppuStack_120 = (uint **)local_6c[0];
                    /* WARNING: Subroutine does not return */
    ppuStack_124 = (uint **)&UNK_006b3731;
    FUN_00aae91b();
  }
  local_58 = 0xf;
  local_5c = 0;
  local_6c[0] = (char **)((uint)local_6c[0] & 0xffffff00);
  if (0xf < local_74) {
    ppuStack_120 = (uint **)local_88[0];
                    /* WARNING: Subroutine does not return */
    ppuStack_124 = (uint **)&UNK_006b3754;
    FUN_00aae91b();
  }
  local_74 = 0xf;
  local_78 = 0;
  local_88[0] = (char **)((uint)local_88[0] & 0xffffff00);
  if (0xf < local_1c) {
    ppuStack_120 = (uint **)local_30[0];
                    /* WARNING: Subroutine does not return */
    ppuStack_124 = (uint **)&UNK_006b3772;
    FUN_00aae91b();
  }
  local_8 = 0xffffffff;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = (char **)((uint)local_30[0] & 0xffffff00);
  if (0xf < local_3c) {
    ppuStack_120 = (uint **)local_50[0];
                    /* WARNING: Subroutine does not return */
    ppuStack_124 = (uint **)&UNK_006b3794;
    FUN_00aae91b();
  }
  ppuStack_120 = (uint **)0x1;
  ppuStack_124 = (uint **)&DAT_00df9644;
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = (char **)((uint)local_50[0] & 0xffffff00);
  ppuStack_128 = (uint **)0x6b37af;
  FUN_00409350();
  local_8 = 0xe;
  ppuStack_120 = (uint **)0x8;
  ppuStack_124 = (uint **)0xe0c10c;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = (char **)((uint)local_30[0] & 0xffffff00);
  ppuStack_128 = (uint **)0x6b37ce;
  FUN_00409350();
  local_8._0_1_ = 0xf;
  ppuStack_124 = (uint **)(*(int *)(*(int *)(iVar5 + 0xa60) + 0x68) + 1000);
  ppuStack_120 = (uint **)0x0;
  unique0x00078400 = (longlong)(int)local_34 * (longlong)(int)ppuStack_124;
  local_14 = (char **)&ppuStack_124;
  ppuStack_128 = (uint **)0x0;
  auStack_130._4_4_ = 1000;
  auStack_138._0_4_ = 0x6b37fa;
  ppuStack_124 = (uint **)__alldiv();
  ppuStack_128 = (uint **)local_88;
  auStack_130._4_4_ = 0x6b3808;
  FUN_00988a50();
  ppuStack_120 = (uint **)local_50;
  local_8._0_1_ = 0x10;
  ppuStack_124 = (uint **)0x6b381a;
  ppuVar3 = (uint **)FUN_00988f20();
  local_8 = CONCAT31(local_8._1_3_,0x11);
  ppuStack_120 = (uint **)local_30;
  ppuStack_124 = (uint **)0x6b3831;
  local_14 = (char **)(**(code **)(**(int **)(param_1 + 0x68) + 0x3c))();
  ppuStack_124 = (uint **)0xffffffff;
  ppuStack_128 = (uint **)0x0;
  auStack_130._0_4_ = 0x6b3843;
  auStack_130._4_4_ = ppuVar3;
  FUN_00408ed0();
  ppuStack_124 = (uint **)0x0;
  auStack_130._4_4_ = 0x6b3853;
  ppuStack_128 = ppuVar3;
  FUN_00a5ecc0();
  if (0xf < local_58) {
    ppuStack_124 = (uint **)local_6c[0];
                    /* WARNING: Subroutine does not return */
    ppuStack_128 = (uint **)&UNK_006b3862;
    FUN_00aae91b();
  }
  local_58 = 0xf;
  local_5c = 0;
  local_6c[0] = (char **)((uint)local_6c[0] & 0xffffff00);
  if (0xf < local_74) {
    ppuStack_124 = (uint **)local_88[0];
                    /* WARNING: Subroutine does not return */
    ppuStack_128 = (uint **)&UNK_006b3885;
    FUN_00aae91b();
  }
  local_74 = 0xf;
  local_78 = 0;
  local_88[0] = (char **)((uint)local_88[0] & 0xffffff00);
  if (0xf < local_1c) {
    ppuStack_124 = (uint **)local_30[0];
                    /* WARNING: Subroutine does not return */
    ppuStack_128 = (uint **)&UNK_006b38a3;
    FUN_00aae91b();
  }
  local_8 = 0xffffffff;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = (char **)((uint)local_30[0] & 0xffffff00);
  if (0xf < local_3c) {
    ppuStack_124 = (uint **)local_50[0];
                    /* WARNING: Subroutine does not return */
    ppuStack_128 = (uint **)&UNK_006b38c5;
    FUN_00aae91b();
  }
  ppuStack_124 = (uint **)0x1;
  ppuStack_128 = (uint **)&DAT_00df9644;
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = (char **)((uint)local_50[0] & 0xffffff00);
  auStack_130._4_4_ = 0x6b38e0;
  FUN_00409350();
  local_8 = 0x12;
  ppuStack_124 = (uint **)0x8;
  ppuStack_128 = (uint **)0xe0c118;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = (char **)((uint)local_30[0] & 0xffffff00);
  auStack_130._4_4_ = 0x6b38ff;
  FUN_00409350();
  local_8._0_1_ = 0x13;
  ppuStack_128 = (uint **)(*(int *)(*(int *)(iVar5 + 0xa60) + 0x70) + 1000);
  ppuStack_124 = (uint **)0x0;
  auStack_138 = (undefined1  [8])((longlong)(int)local_34 * (longlong)(int)ppuStack_128);
  local_14 = (char **)&ppuStack_128;
  auStack_130._4_4_ = 0;
  auStack_130._0_4_ = 1000;
  ppuStack_128 = (uint **)__alldiv();
  auStack_130._4_4_ = local_88;
  auStack_130._0_4_ = 0x6b3939;
  FUN_00988a50();
  ppuStack_124 = (uint **)local_50;
  local_8._0_1_ = 0x14;
  ppuStack_128 = (uint **)0x6b394b;
  uVar4 = FUN_00988f20();
  local_8 = CONCAT31(local_8._1_3_,0x15);
  ppuStack_124 = (uint **)local_30;
  ppuStack_128 = (uint **)0x6b3962;
  local_14 = (char **)(**(code **)(**(int **)(param_1 + 0x68) + 0x3c))();
  ppuStack_128 = (uint **)0xffffffff;
  auStack_130._4_4_ = 0;
  auStack_138._4_4_ = 0x6b3974;
  auStack_130._0_4_ = uVar4;
  FUN_00408ed0();
  ppuStack_128 = (uint **)0x0;
  auStack_130._0_4_ = 0x6b3984;
  auStack_130._4_4_ = uVar4;
  FUN_00a5ecc0();
  if (0xf < local_58) {
    ppuStack_128 = (uint **)local_6c[0];
                    /* WARNING: Subroutine does not return */
    auStack_130._4_4_ = &UNK_006b3997;
    FUN_00aae91b();
  }
  local_58 = 0xf;
  local_5c = 0;
  local_6c[0] = (char **)((uint)local_6c[0] & 0xffffff00);
  if (0xf < local_74) {
    ppuStack_128 = (uint **)local_88[0];
                    /* WARNING: Subroutine does not return */
    auStack_130._4_4_ = &UNK_006b39b8;
    FUN_00aae91b();
  }
  local_74 = 0xf;
  local_78 = 0;
  local_88[0] = (char **)((uint)local_88[0] & 0xffffff00);
  if (0xf < local_1c) {
    ppuStack_128 = (uint **)local_30[0];
                    /* WARNING: Subroutine does not return */
    auStack_130._4_4_ = &UNK_006b39d9;
    FUN_00aae91b();
  }
  local_8 = 0xffffffff;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = (char **)((uint)local_30[0] & 0xffffff00);
  if (0xf < local_3c) {
    ppuStack_128 = (uint **)local_50[0];
                    /* WARNING: Subroutine does not return */
    auStack_130._4_4_ = &UNK_006b39fe;
    FUN_00aae91b();
  }
  iVar1 = *(int *)(*(int *)(iVar5 + 0xa60) + 0x388);
  iVar2 = *(int *)(*(int *)(iVar5 + 0xbcc) + 0x48);
  local_14 = (char **)(*(int *)(*(int *)(iVar5 + 0xa60) + 0x388) + iVar2);
  ppuStack_128 = (uint **)0x1;
  auStack_130._4_4_ = &DAT_00dedc68;
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = (char **)((uint)local_50[0] & 0xffffff00);
  auStack_130._0_4_ = 0x6b3a3f;
  FUN_00409350();
  local_8 = 0x16;
  ppuStack_128 = (uint **)0xf;
  auStack_130._4_4_ = "unit_experience";
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = (char **)((uint)local_30[0] & 0xffffff00);
  auStack_130._0_4_ = 0x6b3a62;
  FUN_00409350();
  ppuStack_128 = (uint **)0x2;
  local_8c = auStack_130 + 4;
  local_8._0_1_ = 0x17;
  auStack_130._0_4_ = local_ac;
  auStack_130._4_4_ = local_14;
  auStack_138._4_4_ = 0x6b3a82;
  local_14 = (char **)FUN_00988a50();
  ppuStack_128 = (uint **)0x2;
  local_8c = auStack_130 + 4;
  local_8._0_1_ = 0x18;
  auStack_130._0_4_ = local_c8;
  auStack_138._4_4_ = 0x6b3aa2;
  auStack_130._4_4_ = iVar1 + iVar2;
  FUN_00988a50();
  ppuStack_128 = (uint **)local_50;
  local_8._0_1_ = 0x19;
  auStack_130._4_4_ = 0x6b3ab7;
  FUN_00988f20();
  local_8._0_1_ = 0x1a;
  ppuStack_128 = (uint **)local_14;
  auStack_130._4_4_ = 0x6b3ac9;
  uVar4 = FUN_00988f20();
  local_8 = CONCAT31(local_8._1_3_,0x1b);
  ppuStack_128 = (uint **)local_30;
  auStack_130._4_4_ = 0x6b3ae0;
  local_14 = (char **)(**(code **)(**(int **)(param_1 + 0x68) + 0x3c))();
  auStack_130._4_4_ = 0xffffffff;
  auStack_130._0_4_ = 0;
  auStack_138._0_4_ = 0x6b3af2;
  auStack_138._4_4_ = uVar4;
  FUN_00408ed0();
  auStack_130._4_4_ = 0;
  auStack_138._4_4_ = 0x6b3b02;
  auStack_130._0_4_ = uVar4;
  FUN_00a5ecc0();
  if (0xf < local_58) {
    auStack_130._4_4_ = local_6c[0];
                    /* WARNING: Subroutine does not return */
    auStack_130._0_4_ = &UNK_006b3b11;
    FUN_00aae91b();
  }
  local_58 = 0xf;
  local_5c = 0;
  local_6c[0] = (char **)((uint)local_6c[0] & 0xffffff00);
  if (0xf < local_74) {
    auStack_130._4_4_ = local_88[0];
                    /* WARNING: Subroutine does not return */
    auStack_130._0_4_ = &UNK_006b3b34;
    FUN_00aae91b();
  }
  local_74 = 0xf;
  local_78 = 0;
  local_88[0] = (char **)((uint)local_88[0] & 0xffffff00);
  if (0xf < local_b4) {
    auStack_130._4_4_ = local_c8[0];
                    /* WARNING: Subroutine does not return */
    auStack_130._0_4_ = &UNK_006b3b58;
    FUN_00aae91b();
  }
  local_b4 = 0xf;
  local_b8 = 0;
  local_c8[0] = (char **)((uint)local_c8[0] & 0xffffff00);
  if (0xf < local_98) {
    auStack_130._4_4_ = local_ac[0];
                    /* WARNING: Subroutine does not return */
    auStack_130._0_4_ = &UNK_006b3b82;
    FUN_00aae91b();
  }
  local_98 = 0xf;
  local_9c = 0;
  local_ac[0] = (char **)((uint)local_ac[0] & 0xffffff00);
  if (0xf < local_1c) {
    auStack_130._4_4_ = local_30[0];
                    /* WARNING: Subroutine does not return */
    auStack_130._0_4_ = &UNK_006b3ba6;
    FUN_00aae91b();
  }
  local_8 = 0xffffffff;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = (char **)((uint)local_30[0] & 0xffffff00);
  if (0xf < local_3c) {
    auStack_130._4_4_ = local_50[0];
                    /* WARNING: Subroutine does not return */
    auStack_130._0_4_ = &UNK_006b3bc8;
    FUN_00aae91b();
  }
  auStack_130._4_4_ = 1;
  auStack_130._0_4_ = &DAT_00df9644;
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = (char **)((uint)local_50[0] & 0xffffff00);
  auStack_138._4_4_ = 0x6b3be3;
  FUN_00409350();
  local_8 = 0x1c;
  auStack_130._4_4_ = 0xc;
  auStack_130._0_4_ = "recruit_time";
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = (char **)((uint)local_30[0] & 0xffffff00);
  auStack_138._4_4_ = 0x6b3c02;
  FUN_00409350();
  local_8._0_1_ = 0x1d;
  auStack_130._0_4_ = *(int *)(*(int *)(iVar5 + 0xa60) + 0x50) + 1000;
  auStack_130._4_4_ = 0;
  local_8c = auStack_130;
  auStack_138._4_4_ = 0;
  auStack_138._0_4_ = 1000;
  auStack_130._0_4_ = __alldiv((longlong)(int)local_34 * (longlong)(int)auStack_130._0_4_);
  auStack_138._4_4_ = local_88;
  auStack_138._0_4_ = 0x6b3c3f;
  FUN_00988a50();
  auStack_130._4_4_ = local_50;
  local_8._0_1_ = 0x1e;
  auStack_130._0_4_ = 0x6b3c51;
  uVar4 = FUN_00988f20();
  local_8 = CONCAT31(local_8._1_3_,0x1f);
  auStack_130._4_4_ = local_30;
  auStack_130._0_4_ = 0x6b3c68;
  local_14 = (char **)(**(code **)(**(int **)(param_1 + 0x68) + 0x3c))();
  auStack_130._0_4_ = 0xffffffff;
  auStack_138._4_4_ = 0;
  auStack_138._0_4_ = uVar4;
  FUN_00408ed0();
  auStack_130._0_4_ = 0;
  auStack_138._0_4_ = 0x6b3c8a;
  auStack_138._4_4_ = uVar4;
  FUN_00a5ecc0();
  if (0xf < local_58) {
    auStack_130._0_4_ = local_6c[0];
                    /* WARNING: Subroutine does not return */
    auStack_138._4_4_ = &UNK_006b3c9d;
    FUN_00aae91b();
  }
  local_58 = 0xf;
  local_5c = 0;
  local_6c[0] = (char **)((uint)local_6c[0] & 0xffffff00);
  if (0xf < local_74) {
    auStack_130._0_4_ = local_88[0];
                    /* WARNING: Subroutine does not return */
    auStack_138._4_4_ = &UNK_006b3cbe;
    FUN_00aae91b();
  }
  local_74 = 0xf;
  local_78 = 0;
  local_88[0] = (char **)((uint)local_88[0] & 0xffffff00);
  if (0xf < local_1c) {
    auStack_130._0_4_ = local_30[0];
                    /* WARNING: Subroutine does not return */
    auStack_138._4_4_ = &UNK_006b3cdf;
    FUN_00aae91b();
  }
  local_8 = 0xffffffff;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = (char **)((uint)local_30[0] & 0xffffff00);
  if (0xf < local_3c) {
    auStack_130._0_4_ = local_50[0];
                    /* WARNING: Subroutine does not return */
    auStack_138._4_4_ = &UNK_006b3d04;
    FUN_00aae91b();
  }
  auStack_130._0_4_ = 9;
  auStack_138._4_4_ = "digin_cap";
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = (char **)((uint)local_50[0] & 0xffffff00);
  auStack_138._0_4_ = 0x6b3d23;
  FUN_00409350();
  local_8 = 0x20;
  auStack_138._4_4_ = *(undefined4 *)(*(int *)(iVar5 + 0xbcc) + 0x1c);
  auStack_130._0_4_ = 0;
  local_8c = auStack_138 + 4;
  auStack_138._0_4_ = local_6c;
  uVar4 = FUN_00988a50();
  local_8 = CONCAT31(local_8._1_3_,0x21);
  auStack_130._0_4_ = local_50;
  auStack_138._4_4_ = 0x6b3d5f;
  local_14 = (char **)(**(code **)(**(int **)(param_1 + 0x68) + 0x3c))();
  auStack_138._4_4_ = 0xffffffff;
  auStack_138._0_4_ = 0;
  FUN_00408ed0();
  auStack_138._4_4_ = 0;
  auStack_138._0_4_ = uVar4;
  FUN_00a5ecc0();
  if (0xf < local_58) {
    auStack_138._4_4_ = local_6c[0];
                    /* WARNING: Subroutine does not return */
    auStack_138._0_4_ = &UNK_006b3d90;
    FUN_00aae91b();
  }
  local_8 = 0xffffffff;
  local_58 = 0xf;
  local_5c = 0;
  local_6c[0] = (char **)((uint)local_6c[0] & 0xffffff00);
  if (0xf < local_3c) {
    auStack_138._4_4_ = local_50[0];
                    /* WARNING: Subroutine does not return */
    auStack_138._0_4_ = &UNK_006b3db7;
    FUN_00aae91b();
  }
  auStack_138._4_4_ = 1;
  auStack_138._0_4_ = &DAT_00df9644;
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = (char **)((uint)local_50[0] & 0xffffff00);
  FUN_00409350();
  local_8 = 0x22;
  auStack_138._4_4_ = 0xd;
  auStack_138._0_4_ = "tactics_level";
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = (char **)((uint)local_30[0] & 0xffffff00);
  FUN_00409350();
  local_8._0_1_ = 0x23;
  auStack_138._0_4_ = *(int *)(*(int *)(iVar5 + 0xbcc) + 0x70);
  auStack_138._4_4_ = 2;
  local_8c = auStack_138;
  iVar5 = *(int *)(*(int *)(DAT_012586dc + 0x20) + 0xe0) + auStack_138._0_4_;
  uVar6 = __allmul(iVar5,iVar5 >> 0x1f,100000,0);
  auStack_138._0_4_ = __alldiv(uVar6,1000,0);
  FUN_00988a50();
  auStack_138._4_4_ = local_50;
  local_8._0_1_ = 0x24;
  auStack_138._0_4_ = 0x6b3e54;
  uVar4 = FUN_00988f20();
  local_8 = CONCAT31(local_8._1_3_,0x25);
  auStack_138._4_4_ = local_30;
  auStack_138._0_4_ = 0x6b3e6b;
  local_14 = (char **)(**(code **)(**(int **)(param_1 + 0x68) + 0x3c))();
  auStack_138._0_4_ = 0xffffffff;
  FUN_00408ed0(uVar4,0);
  auStack_138._0_4_ = 0;
  FUN_00a5ecc0();
  if (0xf < local_58) {
    auStack_138._0_4_ = local_6c[0];
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_58 = 0xf;
  local_5c = 0;
  local_6c[0] = (char **)((uint)local_6c[0] & 0xffffff00);
  if (0xf < local_74) {
    auStack_138._0_4_ = local_88[0];
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_74 = 0xf;
  local_78 = 0;
  local_88[0] = (char **)((uint)local_88[0] & 0xffffff00);
  if (0xf < local_1c) {
    auStack_138._0_4_ = local_30[0];
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = 0xffffffff;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = (char **)((uint)local_30[0] & 0xffffff00);
  if (0xf < local_3c) {
    auStack_138._0_4_ = local_50[0];
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  auStack_138._0_4_ = 0xc;
  local_d0 = 0xf;
  local_d4 = 0;
  local_e4[0] = local_e4[0] & 0xffffff00;
  FUN_00409350();
  local_8 = 0x26;
  auStack_138._0_4_ = local_100;
  uVar4 = FUN_009888f0();
  local_8 = CONCAT31(local_8._1_3_,0x27);
  auStack_138._0_4_ = local_e4;
  (**(code **)(**(int **)(param_1 + 0x68) + 0x3c))();
  FUN_00408ed0(uVar4,0,0xffffffff);
  FUN_00a5ecc0(uVar4,0);
  if (0xf < local_ec) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_ec = 0xf;
  local_f0 = 0;
  local_100[0] = local_100[0] & 0xffffff00;
  if (0xf < local_d0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return;
}

