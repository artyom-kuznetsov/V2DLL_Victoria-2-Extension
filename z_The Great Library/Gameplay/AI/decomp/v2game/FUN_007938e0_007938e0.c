// FUN_007938e0 @ 007938e0 body=[[007938e0, 007939d3] [007939d7, 007939f6] [007939fa, 00793a6b] [00793a6f, 00793a8e] [00793a92, 00793b04] [00793b08, 00793b25] [00793b29, 00793b9f] [00793ba3, 00793bc0] [00793bc4, 00793c16] [00793c1a, 00793cec] [00793cf0, 00793dbf] [00793dc3, 00793e46] [00793e4a, 00793e75] [00793e79, 00793e9f] [00793ea3, 00793ec7] [00793ecb, 00793f3c] [00793f40, 00793f97] [00793f9b, 00793fe0] [00793fe4, 00794044] [00794048, 0079414d] [00794151, 0079427d] [00794281, 007942c7] [007942cb, 00794311] [00794315, 00794332] [00794336, 00794348]]


void FUN_007938e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  code *pcVar7;
  int in_ECX;
  float fVar8;
  undefined4 uVar9;
  uint in_stack_00000024;
  undefined **ppuStack_160;
  undefined4 uStack_15c;
  undefined8 uStack_158;
  undefined8 uStack_150;
  uint *puStack_148;
  uint *puStack_144;
  uint *puStack_140;
  uint *puStack_13c;
  uint *puStack_138;
  uint *puStack_134;
  uint *puStack_130;
  char *pcStack_12c;
  uint *puStack_128;
  undefined1 **ppuStack_124;
  uint uStack_120;
  char *pcStack_11c;
  uint *puStack_118;
  char *pcStack_114;
  uint *puStack_110;
  uint *puStack_10c;
  uint *puStack_108;
  uint *puStack_104;
  uint *puStack_100;
  uint *puStack_fc;
  uint *puStack_f8;
  uint *puStack_f4;
  uint *puStack_f0;
  uint local_e0 [4];
  undefined4 local_d0;
  uint local_cc;
  uint local_c4;
  undefined4 local_b4;
  uint local_b0;
  uint local_a8 [4];
  undefined4 local_98;
  uint local_94;
  uint local_8c [4];
  undefined4 local_7c;
  uint local_78;
  undefined1 *local_70;
  uint local_6c [2];
  undefined8 local_64;
  undefined8 local_5c;
  undefined1 local_54;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  int *local_34;
  uint local_30 [2];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  uint uStack_1c;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4399c;
  local_10 = ExceptionList;
  local_8 = 0;
  puStack_f0 = (uint *)0x793910;
  ExceptionList = &local_10;
  iVar3 = FUN_00967f50();
  if (iVar3 == 0) goto joined_r0x00793918;
  puStack_f0 = (uint *)0xffffffff;
  *(undefined4 *)(in_ECX + 0x28) = param_1;
  puStack_f4 = (uint *)0x0;
  puStack_f8 = &param_4;
  *(undefined4 *)(in_ECX + 0x2c) = param_2;
  *(undefined4 *)(in_ECX + 0x30) = param_3;
  puStack_fc = (uint *)0x793948;
  FUN_00408ed0();
  puStack_f0 = (uint *)0x793950;
  piVar4 = (int *)FUN_00967f50();
  local_34 = piVar4;
  if (piVar4 == (int *)0x0) goto joined_r0x00793918;
  puStack_f0 = (uint *)0xc;
  puStack_f4 = (uint *)0xe154c0;
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  puStack_f8 = (uint *)0x79397e;
  FUN_00409350();
  local_8._0_1_ = 1;
  puStack_f0 = local_30;
  puStack_f4 = (uint *)0x79398f;
  uVar5 = (**(code **)(*piVar4 + 0x20))();
  local_8._0_1_ = 2;
  puStack_f4 = local_50;
  puStack_f8 = (uint *)0x7939a3;
  local_14 = (float)(**(code **)(**(int **)(in_ECX + 0x20) + 0x3c))();
  puStack_f8 = (uint *)0xffffffff;
  puStack_fc = (uint *)0x0;
  puStack_104 = (uint *)0x7939b5;
  puStack_100 = (uint *)uVar5;
  FUN_00408ed0();
  puStack_f8 = (uint *)0x0;
  puStack_100 = (uint *)0x7939c5;
  puStack_fc = (uint *)uVar5;
  FUN_00a5ecc0();
  if (0xf < uStack_1c) {
    puStack_f8 = (uint *)local_30[0];
                    /* WARNING: Subroutine does not return */
    puStack_fc = (uint *)&UNK_007939d4;
    FUN_00aae91b();
  }
  local_8._0_1_ = 0;
  uStack_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  if (0xf < local_3c) {
    puStack_f8 = (uint *)local_50[0];
                    /* WARNING: Subroutine does not return */
    puStack_fc = (uint *)&UNK_007939f7;
    FUN_00aae91b();
  }
  puStack_f8 = (uint *)0xc;
  puStack_fc = (uint *)0xe15e58;
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  puStack_100 = (uint *)0x793a12;
  FUN_00409350();
  local_8._0_1_ = 3;
  puStack_f8 = local_30;
  puStack_fc = (uint *)0x793a27;
  uVar5 = (**(code **)(*(int *)local_34[0xe] + 0x18))();
  local_8._0_1_ = 4;
  puStack_fc = local_50;
  puStack_100 = (uint *)0x793a3b;
  local_14 = (float)(**(code **)(**(int **)(in_ECX + 0x20) + 0x3c))();
  puStack_100 = (uint *)0xffffffff;
  puStack_104 = (uint *)0x0;
  puStack_10c = (uint *)0x793a4d;
  puStack_108 = (uint *)uVar5;
  FUN_00408ed0();
  puStack_100 = (uint *)0x0;
  puStack_108 = (uint *)0x793a5d;
  puStack_104 = (uint *)uVar5;
  FUN_00a5ecc0();
  if (0xf < uStack_1c) {
    puStack_100 = (uint *)local_30[0];
                    /* WARNING: Subroutine does not return */
    puStack_104 = (uint *)&UNK_00793a6c;
    FUN_00aae91b();
  }
  local_8._0_1_ = 0;
  uStack_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  if (0xf < local_3c) {
    puStack_100 = (uint *)local_50[0];
                    /* WARNING: Subroutine does not return */
    puStack_104 = (uint *)&UNK_00793a8f;
    FUN_00aae91b();
  }
  puStack_100 = (uint *)0x10;
  puStack_104 = (uint *)0xe16340;
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  puStack_108 = (uint *)0x793aaa;
  FUN_00409350();
  local_8._0_1_ = 5;
  puStack_100 = local_30;
  puStack_104 = (uint *)0x793abc;
  uVar5 = (**(code **)(*local_34 + 0x38))();
  local_8._0_1_ = 6;
  puStack_104 = local_50;
  puStack_108 = (uint *)0x793ad0;
  local_14 = (float)(**(code **)(**(int **)(in_ECX + 0x20) + 0x3c))();
  puStack_108 = (uint *)0xffffffff;
  puStack_10c = (uint *)0x0;
  pcStack_114 = (char *)0x793ae2;
  puStack_110 = (uint *)uVar5;
  FUN_00408ed0();
  puStack_108 = (uint *)0x0;
  puStack_110 = (uint *)0x793af2;
  puStack_10c = (uint *)uVar5;
  FUN_00a5ecc0();
  if (0xf < uStack_1c) {
    puStack_108 = (uint *)local_30[0];
                    /* WARNING: Subroutine does not return */
    puStack_10c = (uint *)&UNK_00793b05;
    FUN_00aae91b();
  }
  local_8._0_1_ = 0;
  uStack_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  if (0xf < local_3c) {
    puStack_108 = (uint *)local_50[0];
                    /* WARNING: Subroutine does not return */
    puStack_10c = (uint *)&UNK_00793b26;
    FUN_00aae91b();
  }
  puStack_108 = (uint *)0x16;
  puStack_10c = (uint *)0xe16354;
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  puStack_110 = (uint *)0x793b45;
  FUN_00409350();
  local_8._0_1_ = 7;
  puStack_108 = local_30;
  puStack_10c = (uint *)0x793b57;
  uVar5 = (**(code **)(*local_34 + 0x38))();
  local_8._0_1_ = 8;
  puStack_10c = local_50;
  puStack_110 = (uint *)0x793b6b;
  local_14 = (float)(**(code **)(**(int **)(in_ECX + 0x20) + 0x3c))();
  puStack_110 = (uint *)0xffffffff;
  pcStack_114 = (char *)0x0;
  pcStack_11c = (char *)0x793b7d;
  puStack_118 = (uint *)uVar5;
  FUN_00408ed0();
  puStack_110 = (uint *)0x0;
  puStack_118 = (uint *)0x793b8d;
  pcStack_114 = (char *)uVar5;
  FUN_00a5ecc0();
  if (0xf < uStack_1c) {
    puStack_110 = (uint *)local_30[0];
                    /* WARNING: Subroutine does not return */
    pcStack_114 = &UNK_00793ba0;
    FUN_00aae91b();
  }
  local_8._0_1_ = 0;
  uStack_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  if (0xf < local_3c) {
    puStack_110 = (uint *)local_50[0];
                    /* WARNING: Subroutine does not return */
    pcStack_114 = &UNK_00793bc1;
    FUN_00aae91b();
  }
  puStack_110 = (uint *)0x9;
  pcStack_114 = "unit_icon";
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  puStack_118 = (uint *)0x793be0;
  FUN_00409350();
  local_8._0_1_ = 9;
  puStack_110 = local_50;
  pcStack_114 = (char *)0x793bf2;
  piVar6 = (int *)(**(code **)(**(int **)(in_ECX + 0x20) + 0x44))();
  piVar4 = local_34;
  pcStack_114 = *(char **)(local_34[0xe] + 0x28);
  puStack_118 = (uint *)0x793c05;
  (**(code **)(*piVar6 + 0x48))();
  local_8._0_1_ = 0;
  if (0xf < local_3c) {
    puStack_118 = (uint *)local_50[0];
                    /* WARNING: Subroutine does not return */
    pcStack_11c = &UNK_00793c17;
    FUN_00aae91b();
  }
  if ((piVar4[0x1d] == 0) || (*(char *)(piVar4[0x1d] + 0x164) == '\0')) {
    iVar3 = piVar4[0x10];
  }
  else {
    iVar3 = 0;
  }
  local_14 = (float)*(int *)(piVar4[0xe] + 0xb4) / 1000.0;
  fVar8 = (float)iVar3 / 1000.0;
  if (local_14 < fVar8) {
    local_14 = fVar8;
  }
  puStack_118 = (uint *)0x7;
  local_14 = (fVar8 * 100.0) / local_14;
  pcStack_11c = "org_bar";
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  uStack_120 = 0x793cba;
  FUN_00409350();
  local_8._0_1_ = 10;
  puStack_118 = local_50;
  pcStack_11c = (char *)0x793ccc;
  piVar6 = (int *)(**(code **)(**(int **)(in_ECX + 0x20) + 0x44))();
  pcStack_11c = (char *)(int)local_14;
  uStack_120 = 0x793cdb;
  (**(code **)(*piVar6 + 0x48))();
  local_8._0_1_ = 0;
  if (0xf < local_3c) {
    uStack_120 = local_50[0];
                    /* WARNING: Subroutine does not return */
    ppuStack_124 = (undefined1 **)&UNK_00793ced;
    FUN_00aae91b();
  }
  local_14 = (float)piVar4[0xf] / 1000.0;
  uStack_120 = 0;
  ppuStack_124 = &local_70;
  puStack_128 = (uint *)0x793d1b;
  piVar4 = (int *)(**(code **)(*piVar4 + 0x30))();
  fVar8 = (float)*piVar4 / 1000.0;
  if ((float)*piVar4 / 1000.0 < local_14) {
    fVar8 = local_14;
  }
  local_14 = (local_14 * 100.0) / fVar8;
  puStack_128 = (uint *)0x7;
  pcStack_12c = "str_bar";
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  puStack_130 = (uint *)0x793d8d;
  FUN_00409350();
  local_8._0_1_ = 0xb;
  puStack_128 = local_50;
  pcStack_12c = (char *)0x793d9f;
  piVar4 = (int *)(**(code **)(**(int **)(in_ECX + 0x20) + 0x44))();
  pcStack_12c = (char *)(int)local_14;
  puStack_130 = (uint *)0x793dae;
  (**(code **)(*piVar4 + 0x48))();
  local_8._0_1_ = 0;
  if (0xf < local_3c) {
    puStack_130 = (uint *)local_50[0];
                    /* WARNING: Subroutine does not return */
    puStack_134 = (uint *)&UNK_00793dc0;
    FUN_00aae91b();
  }
  puStack_130 = (uint *)0x1;
  puStack_134 = (uint *)&DAT_00defd44;
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  puStack_138 = (uint *)0x793ddf;
  FUN_00409350();
  puStack_130 = local_e0;
  local_8._0_1_ = 0xc;
  puStack_134 = (uint *)0x793df2;
  local_14 = (float)FUN_009888f0();
  puStack_130 = local_a8;
  local_8._0_1_ = 0xd;
  puStack_134 = (uint *)0x793e08;
  FUN_009888f0();
  puStack_130 = local_50;
  local_8._0_1_ = 0xe;
  puStack_134 = (uint *)0x793e1d;
  FUN_00988f20();
  puStack_130 = (uint *)local_14;
  local_8._0_1_ = 0xf;
  puStack_134 = (uint *)0x793e32;
  FUN_00988f20();
  if (0xf < local_b0) {
    puStack_130 = (uint *)local_c4;
                    /* WARNING: Subroutine does not return */
    puStack_134 = (uint *)&UNK_00793e47;
    FUN_00aae91b();
  }
  local_b0 = 0xf;
  local_b4 = 0;
  local_c4 = local_c4 & 0xffffff00;
  if (0xf < local_94) {
    puStack_130 = (uint *)local_a8[0];
                    /* WARNING: Subroutine does not return */
    puStack_134 = (uint *)&UNK_00793e76;
    FUN_00aae91b();
  }
  local_94 = 0xf;
  local_98 = 0;
  local_a8[0] = local_a8[0] & 0xffffff00;
  if (0xf < local_cc) {
    puStack_130 = (uint *)local_e0[0];
                    /* WARNING: Subroutine does not return */
    puStack_134 = (uint *)&UNK_00793ea0;
    FUN_00aae91b();
  }
  local_cc = 0xf;
  local_d0 = 0;
  local_e0[0] = local_e0[0] & 0xffffff00;
  local_8._0_1_ = 0x14;
  if (0xf < local_3c) {
    puStack_130 = (uint *)local_50[0];
                    /* WARNING: Subroutine does not return */
    puStack_134 = (uint *)&UNK_00793ec8;
    FUN_00aae91b();
  }
  puStack_130 = local_8c;
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  puStack_134 = (uint *)0x793ee9;
  (**(code **)(*(int *)(*(int *)(in_ECX + 0x20) + 0x18) + 0x78))();
  puStack_134 = (uint *)0x793ef3;
  cVar2 = (**(code **)(*local_34 + 0x28))();
  local_5c = 0xf00000000;
  local_6c[0] = local_6c[0] & 0xffffff00;
  if (cVar2 == '\0') {
    puStack_134 = (uint *)0x16;
    puStack_138 = (uint *)0xe16354;
    puStack_13c = (uint *)0x793f6a;
    FUN_00409350();
    local_8._0_1_ = 0x17;
    puStack_134 = local_6c;
    puStack_138 = (uint *)0x793f7c;
    piVar4 = (int *)(**(code **)(**(int **)(in_ECX + 0x20) + 0x3c))();
    puStack_138 = (uint *)0x793f85;
    (**(code **)(*piVar4 + 0x38))();
    local_8._0_1_ = 0x14;
    if (0xf < local_5c._4_4_) {
      puStack_138 = (uint *)local_6c[0];
                    /* WARNING: Subroutine does not return */
      puStack_13c = (uint *)&UNK_00793f98;
      FUN_00aae91b();
    }
    puStack_138 = (uint *)0x10;
    puStack_13c = (uint *)0xe1636c;
    local_5c = 0xf00000000;
    local_6c[0] = local_6c[0] & 0xffffff00;
    puStack_140 = (uint *)0x793fb3;
    FUN_00409350();
    local_8._0_1_ = 0x18;
  }
  else {
    puStack_134 = (uint *)0x10;
    puStack_138 = (uint *)0xe16340;
    puStack_13c = (uint *)0x793f0f;
    FUN_00409350();
    local_8._0_1_ = 0x15;
    puStack_134 = local_6c;
    puStack_138 = (uint *)0x793f21;
    piVar4 = (int *)(**(code **)(**(int **)(in_ECX + 0x20) + 0x3c))();
    puStack_138 = (uint *)0x793f2a;
    (**(code **)(*piVar4 + 0x38))();
    local_8._0_1_ = 0x14;
    if (0xf < local_5c._4_4_) {
      puStack_138 = (uint *)local_6c[0];
                    /* WARNING: Subroutine does not return */
      puStack_13c = (uint *)&UNK_00793f3d;
      FUN_00aae91b();
    }
    puStack_138 = (uint *)0x10;
    puStack_13c = (uint *)0xe1636c;
    local_5c = 0xf00000000;
    local_6c[0] = local_6c[0] & 0xffffff00;
    puStack_140 = (uint *)0x793f58;
    FUN_00409350();
    local_8._0_1_ = 0x16;
  }
  puStack_138 = local_6c;
  puStack_13c = (uint *)0x793fc5;
  piVar4 = (int *)(**(code **)(**(int **)(in_ECX + 0x20) + 0x44))();
  puStack_13c = (uint *)0x793fce;
  (**(code **)(*piVar4 + 0x38))();
  local_8._0_1_ = 0x14;
  uVar1 = (undefined1)local_8;
  local_8._0_1_ = 0x14;
  if (0xf < local_5c._4_4_) {
    puStack_13c = (uint *)local_6c[0];
                    /* WARNING: Subroutine does not return */
    puStack_140 = (uint *)&UNK_00793fe1;
    FUN_00aae91b();
  }
  local_14 = (float)local_34[0xc];
  puStack_13c = (uint *)0xd;
  if (local_14 == 0.0) {
    puStack_140 = (uint *)0xe15e78;
    uStack_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    puStack_144 = (uint *)0x79424d;
    local_8._0_1_ = uVar1;
    FUN_00409350();
    local_8._0_1_ = 0x1f;
    puStack_13c = local_30;
    puStack_140 = (uint *)0x79425f;
    piVar4 = (int *)(**(code **)(**(int **)(in_ECX + 0x20) + 0x44))();
    puStack_140 = (uint *)0x79426b;
    (**(code **)(*piVar4 + 0x104))();
    local_8._0_1_ = 0x14;
    if (0xf < uStack_1c) {
      puStack_140 = (uint *)local_30[0];
                    /* WARNING: Subroutine does not return */
      puStack_144 = (uint *)&UNK_0079427e;
      FUN_00aae91b();
    }
    puStack_140 = (uint *)0xd;
    puStack_144 = (uint *)0xe15e04;
    uStack_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    puStack_148 = (uint *)0x794299;
    FUN_00409350();
    local_8._0_1_ = 0x20;
    puStack_140 = local_30;
    puStack_144 = (uint *)0x7942ab;
    piVar4 = (int *)(**(code **)(**(int **)(in_ECX + 0x20) + 0x34))();
    puStack_144 = (uint *)0x0;
    puStack_148 = (uint *)0x7942b5;
    (**(code **)(*piVar4 + 0x48))();
    local_8._0_1_ = 0x14;
    if (0xf < uStack_1c) {
      puStack_148 = (uint *)local_30[0];
      uStack_150 = CONCAT44(&UNK_007942c8,(undefined4)uStack_150);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    puStack_148 = (uint *)0x7942d8;
    FUN_009885d0();
    local_8 = CONCAT31(local_8._1_3_,0x21);
    uStack_150 = CONCAT44(0x7942eb,(undefined4)uStack_150);
    puStack_148 = local_30;
    piVar4 = (int *)(**(code **)(**(int **)(in_ECX + 0x20) + 0x34))();
    pcVar7 = *(code **)(*piVar4 + 0x38);
LAB_007942f2:
    (*pcVar7)();
  }
  else {
    puStack_140 = (uint *)0xe15e04;
    local_5c = 0xf00000000;
    local_6c[0] = local_6c[0] & 0xffffff00;
    puStack_144 = (uint *)0x79400d;
    FUN_00409350();
    local_8._0_1_ = 0x19;
    puStack_13c = local_6c;
    puStack_140 = (uint *)0x79401f;
    piVar4 = (int *)(**(code **)(**(int **)(in_ECX + 0x20) + 0x34))();
    puStack_140 = *(uint **)(*(int *)((int)local_14 + 0x68) + 0x38);
    puStack_144 = (uint *)0x794032;
    (**(code **)(*piVar4 + 0x48))();
    local_8._0_1_ = 0x14;
    if (0xf < local_5c._4_4_) {
      puStack_144 = (uint *)local_6c[0];
                    /* WARNING: Subroutine does not return */
      puStack_148 = (uint *)&UNK_00794045;
      FUN_00aae91b();
    }
    puStack_144 = (uint *)0x0;
    puStack_148 = (uint *)local_14;
    uStack_150 = CONCAT44(0x794052,(undefined4)uStack_150);
    iVar3 = FUN_00965870();
    local_34 = (int *)(iVar3 * 1000);
    puStack_144 = (uint *)0x0;
    puStack_148 = (uint *)0x794064;
    iVar3 = FUN_00965930();
    local_54 = 1;
    if ((int)local_34 < 1) {
      uStack_24 = DAT_00f17a20;
      uVar9 = DAT_00f17a20;
LAB_007940b1:
      local_28 = DAT_00f092fc;
      local_54 = 0;
      uVar5 = uStack_24;
    }
    else {
      uVar5 = DAT_00f092fc;
      uVar9 = DAT_00f092fc;
      if ((int)local_34 < iVar3 * 1000) {
        uStack_24 = DAT_00f092fc;
        uVar9 = DAT_00f141cc;
        goto LAB_007940b1;
      }
    }
    local_5c = CONCAT44(DAT_00f092fc,uVar9);
    local_64 = CONCAT44(uVar5,DAT_00f092fc);
    puStack_144 = (uint *)0xd;
    puStack_148 = (uint *)0xe15e04;
    uStack_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    uStack_150 = CONCAT44(0x7940ef,(undefined4)uStack_150);
    FUN_00409350();
    local_8._0_1_ = 0x1a;
    puStack_144 = local_30;
    puStack_148 = (uint *)0x794101;
    piVar4 = (int *)(**(code **)(**(int **)(in_ECX + 0x20) + 0x34))();
    local_70 = (undefined1 *)&ppuStack_160;
    uStack_158 = local_64;
    puStack_148 = (uint *)CONCAT31(puStack_148._1_3_,local_54);
    uStack_15c = 0x18d;
    ppuStack_160 = CColor::vftable;
    uStack_150 = local_5c;
    (**(code **)(*piVar4 + 0x68))();
    local_8._0_1_ = 0x14;
    if (0xf < uStack_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    local_14 = (float)((int)local_14 + 0x220);
    iVar3 = FUN_00967f50();
    if (iVar3 == 0) {
      FUN_009885d0();
      local_8 = CONCAT31(local_8._1_3_,0x1e);
      piVar4 = (int *)(**(code **)(**(int **)(in_ECX + 0x20) + 0x44))(local_30);
      pcVar7 = *(code **)(*piVar4 + 0x104);
      goto LAB_007942f2;
    }
    FUN_009885d0();
    local_8._0_1_ = 0x1b;
    piVar4 = (int *)(**(code **)(**(int **)(in_ECX + 0x20) + 0x44))(local_30);
    (**(code **)(*piVar4 + 0x108))();
    local_8._0_1_ = 0x14;
    FUN_00408ad0();
    FUN_009885d0();
    local_8._0_1_ = 0x1c;
    piVar4 = (int *)(**(code **)(**(int **)(in_ECX + 0x20) + 0x44))(local_30);
    (**(code **)(*piVar4 + 0x34))();
    local_8._0_1_ = 0x14;
    FUN_00408ad0();
    FUN_009885d0();
    local_8 = CONCAT31(local_8._1_3_,0x1d);
    piVar4 = (int *)(**(code **)(**(int **)(in_ECX + 0x20) + 0x44))(local_30);
    iVar3 = FUN_00967f50();
    (**(code **)(*piVar4 + 0x48))(*(undefined4 *)(*(int *)(iVar3 + 0x30) + 0x128));
  }
  puStack_f0 = (uint *)0x7942fc;
  FUN_00408ad0();
  if (0xf < local_78) {
    puStack_f0 = (uint *)local_8c[0];
                    /* WARNING: Subroutine does not return */
    puStack_f4 = (uint *)&UNK_00794312;
    FUN_00aae91b();
  }
  local_78 = 0xf;
  local_7c = 0;
  local_8c[0] = local_8c[0] & 0xffffff00;
joined_r0x00793918:
  if (in_stack_00000024 < 0x10) {
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  puStack_f4 = (uint *)&UNK_00794333;
  puStack_f0 = (uint *)param_4;
  FUN_00aae91b();
}

