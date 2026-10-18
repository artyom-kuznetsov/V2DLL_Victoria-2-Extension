// FUN_006b9240 @ 006b9240 body=[[006b9240, 006b92cf] [006b92d3, 006b9349] [006b934d, 006b93b2] [006b93b6, 006b941b] [006b941f, 006b9484] [006b9488, 006b94ed] [006b94f1, 006b9556] [006b955a, 006b95bf] [006b95c3, 006b9628] [006b962c, 006b9691] [006b9695, 006b96fa] [006b96fe, 006b9763] [006b9767, 006b97cc] [006b97d0, 006b982a] [006b982e, 006b9901] [006b9905, 006b99ac] [006b99b0, 006b9a57] [006b9a5b, 006b9b02] [006b9b06, 006b9bad] [006b9bb1, 006b9c58] [006b9c5c, 006b9d03] [006b9d07, 006b9dad] [006b9db1, 006b9e09] [006b9e0d, 006b9f3b] [006b9f3f, 006b9fac] [006b9fb0, 006ba048] [006ba04c, 006ba083] [006ba087, 006ba117]]


void FUN_006b9240(int param_1)

{
  int *piVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  uint *puVar5;
  uint unaff_EBX;
  uint unaff_EDI;
  undefined1 auStack_28c [16];
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined *puStack_270;
  uint uStack_26c;
  char **ppcStack_268;
  uint *puStack_264;
  uint *puStack_260;
  char **ppcStack_25c;
  char *pcStack_258;
  uint *puStack_254;
  undefined1 auStack_250 [4];
  undefined4 uStack_24c;
  undefined1 *puStack_248;
  undefined4 uStack_244;
  uint uStack_240;
  char *pcStack_23c;
  uint uStack_238;
  char *pcStack_234;
  uint *puStack_230;
  int *piStack_22c;
  uint uStack_228;
  int iStack_224;
  undefined4 uStack_220;
  uint uStack_21c;
  char *pcStack_218;
  uint uStack_214;
  char *pcStack_210;
  uint *puStack_20c;
  undefined1 *puStack_208;
  uint uStack_204;
  uint auStack_200 [2];
  undefined4 uStack_1f8;
  char *pcStack_1f4;
  uint uStack_1f0;
  char *pcStack_1ec;
  uint *puStack_1e8;
  undefined1 *puStack_1e4;
  uint uStack_1e0;
  uint uStack_1dc;
  undefined4 uStack_1d8;
  uint uStack_1d4;
  char *pcStack_1d0;
  uint uStack_1cc;
  char *pcStack_1c8;
  uint *puStack_1c4;
  undefined1 *puStack_1c0;
  uint auStack_1bc [3];
  undefined4 uStack_1b0;
  char *pcStack_1ac;
  void *pvStack_1a8;
  char *pcStack_1a4;
  uint *puStack_1a0;
  undefined1 *puStack_19c;
  uint auStack_198 [3];
  undefined4 uStack_18c;
  char *pcStack_188;
  uint uStack_184;
  char *pcStack_180;
  uint *puStack_17c;
  undefined1 *puStack_178;
  uint auStack_174 [3];
  undefined4 uStack_168;
  char *pcStack_164;
  uint uStack_160;
  char *pcStack_15c;
  undefined4 ***pppuStack_158;
  undefined4 *puStack_154;
  uint auStack_150 [3];
  undefined4 uStack_144;
  char *pcStack_140;
  undefined *puStack_13c;
  char *pcStack_138;
  undefined4 ***pppuStack_134;
  char *pcStack_130;
  undefined4 ***pppuStack_12c;
  char *pcStack_128;
  undefined4 ***pppuStack_124;
  char *pcStack_120;
  undefined4 ***pppuStack_11c;
  char *pcStack_118;
  undefined4 ***pppuStack_114;
  int *piStack_110;
  undefined4 ***pppuStack_10c;
  char *pcStack_108;
  undefined4 ***pppuStack_104;
  char *pcStack_100;
  undefined4 ***pppuStack_fc;
  char *pcStack_f8;
  undefined1 ***pppuStack_f4;
  char *pcStack_f0;
  uint **ppuStack_ec;
  char *pcStack_e8;
  undefined4 **ppuStack_e4;
  char *pcStack_e0;
  undefined4 **ppuStack_dc;
  char *pcStack_d8;
  undefined1 **ppuStack_d4;
  uint *puStack_d0;
  uint *puStack_cc;
  uint local_bc;
  uint uStack_b8;
  undefined4 uStack_b4;
  uint uStack_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined1 uStack_a4;
  undefined4 uStack_a0;
  undefined4 local_98;
  undefined1 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_6c;
  undefined4 uStack_64;
  undefined4 uStack_5c;
  undefined4 uStack_54;
  undefined4 uStack_4c;
  undefined4 uStack_44;
  undefined4 uStack_3c;
  undefined4 uStack_34;
  undefined4 uStack_2c;
  undefined4 uStack_24;
  undefined4 uStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b44a78;
  pvStack_14 = ExceptionList;
  local_98 = 0;
  puStack_cc = (uint *)0xc;
  puStack_d0 = (uint *)0xe0c9a0;
  local_a8 = 0xf;
  local_ac = 0;
  local_bc = local_bc & 0xffffff00;
  ppuStack_d4 = (undefined1 **)0x6b928b;
  ExceptionList = &pvStack_14;
  FUN_00409350();
  local_c = 0;
  puStack_cc = (uint *)(param_1 + 0x430);
  puStack_d0 = &local_bc;
  ppuStack_d4 = (undefined1 **)0x6b92ae;
  uVar3 = (**(code **)(**(int **)(param_1 + 0xb0) + 0x2c))();
  pvStack_14 = (void *)0xffffffff;
  *(undefined4 *)(param_1 + 0x5d0) = uVar3;
  if (0xf < uStack_b0) {
                    /* WARNING: Subroutine does not return */
    pcStack_d8 = &UNK_006b92d0;
    FUN_00aae91b();
  }
  ppuStack_d4 = (undefined1 **)0x6b92e4;
  (**(code **)(*(int *)(*(int *)(param_1 + 0x5d0) + 0x18) + 0x38))();
  ppuStack_d4 = (undefined1 **)0x8;
  pcStack_d8 = "nudge_up";
  uStack_b0 = 0xf;
  uStack_b4 = 0;
  ppuStack_dc = (undefined4 **)0x6b9300;
  FUN_00409350();
  pvStack_14 = (void *)0x1;
  ppuStack_d4 = (undefined1 **)&stack0xffffff3c;
  pcStack_d8 = (char *)0x6b931d;
  iVar4 = (**(code **)(**(int **)(param_1 + 0x5d0) + 0x34))();
  pcStack_d8 = (char *)(param_1 + 0x5d8);
  ppuStack_dc = (undefined4 **)0x6b932e;
  (**(code **)(*(int *)(iVar4 + 0x54) + 4))();
  uStack_1c = 0xffffffff;
  if (0xf < uStack_b8) {
    ppuStack_dc = (undefined4 **)puStack_cc;
                    /* WARNING: Subroutine does not return */
    pcStack_e0 = &UNK_006b934a;
    FUN_00aae91b();
  }
  ppuStack_dc = (undefined4 **)0xa;
  pcStack_e0 = "nudge_zero";
  uStack_b8 = 0xf;
  local_bc = 0;
  puStack_cc = (uint *)((uint)puStack_cc & 0xffffff00);
  ppuStack_e4 = (undefined4 **)0x6b9369;
  FUN_00409350();
  uStack_1c = 2;
  ppuStack_dc = &puStack_cc;
  pcStack_e0 = (char *)0x6b9386;
  iVar4 = (**(code **)(**(int **)(param_1 + 0x5d0) + 0x34))();
  pcStack_e0 = (char *)(param_1 + 0x628);
  ppuStack_e4 = (undefined4 **)0x6b9397;
  (**(code **)(*(int *)(iVar4 + 0x54) + 4))();
  uStack_24 = 0xffffffff;
  if (0xf < unaff_EBX) {
    ppuStack_e4 = (undefined4 **)ppuStack_d4;
                    /* WARNING: Subroutine does not return */
    pcStack_e8 = &UNK_006b93b3;
    FUN_00aae91b();
  }
  ppuStack_e4 = (undefined4 **)0xa;
  pcStack_e8 = "nudge_down";
  ppuStack_d4 = (undefined1 **)((uint)ppuStack_d4 & 0xffffff00);
  ppuStack_ec = (uint **)0x6b93d2;
  FUN_00409350();
  uStack_24 = 3;
  ppuStack_e4 = &ppuStack_d4;
  pcStack_e8 = (char *)0x6b93ef;
  iVar4 = (**(code **)(**(int **)(param_1 + 0x5d0) + 0x34))();
  pcStack_e8 = (char *)(param_1 + 0x678);
  ppuStack_ec = (uint **)0x6b9400;
  (**(code **)(*(int *)(iVar4 + 0x54) + 4))();
  uStack_2c = 0xffffffff;
  if (0xf < unaff_EDI) {
    ppuStack_ec = ppuStack_dc;
                    /* WARNING: Subroutine does not return */
    pcStack_f0 = &UNK_006b941c;
    FUN_00aae91b();
  }
  ppuStack_ec = (uint **)0xc;
  pcStack_f0 = "nudge_x_plus";
  puStack_cc = (uint *)0x0;
  ppuStack_dc = (undefined4 **)((uint)ppuStack_dc & 0xffffff00);
  pppuStack_f4 = (undefined1 ***)0x6b943b;
  FUN_00409350();
  uStack_2c = 4;
  ppuStack_ec = (uint **)&ppuStack_dc;
  pcStack_f0 = (char *)0x6b9458;
  iVar4 = (**(code **)(**(int **)(param_1 + 0x5d0) + 0x34))();
  pcStack_f0 = (char *)(param_1 + 0x6c8);
  pppuStack_f4 = (undefined1 ***)0x6b9469;
  (**(code **)(*(int *)(iVar4 + 0x54) + 4))();
  uStack_34 = 0xffffffff;
  if ((uint *)0xf < puStack_d0) {
    pppuStack_f4 = (undefined1 ***)ppuStack_e4;
                    /* WARNING: Subroutine does not return */
    pcStack_f8 = &UNK_006b9485;
    FUN_00aae91b();
  }
  pppuStack_f4 = (undefined1 ***)0xd;
  pcStack_f8 = "nudge_x_minus";
  puStack_d0 = (uint *)0xf;
  ppuStack_d4 = (undefined1 **)0x0;
  ppuStack_e4 = (undefined4 **)((uint)ppuStack_e4 & 0xffffff00);
  pppuStack_fc = (undefined4 ***)0x6b94a4;
  FUN_00409350();
  uStack_34 = 5;
  pppuStack_f4 = (undefined1 ***)&ppuStack_e4;
  pcStack_f8 = (char *)0x6b94c1;
  iVar4 = (**(code **)(**(int **)(param_1 + 0x5d0) + 0x34))();
  pcStack_f8 = (char *)(param_1 + 0x718);
  pppuStack_fc = (undefined4 ***)0x6b94d2;
  (**(code **)(*(int *)(iVar4 + 0x54) + 4))();
  uStack_3c = 0xffffffff;
  if (0xf < pcStack_d8) {
    pppuStack_fc = (undefined4 ***)ppuStack_ec;
                    /* WARNING: Subroutine does not return */
    pcStack_100 = &UNK_006b94ee;
    FUN_00aae91b();
  }
  pppuStack_fc = (undefined4 ***)0xc;
  pcStack_100 = "nudge_z_plus";
  pcStack_d8 = (char *)0xf;
  ppuStack_dc = (undefined4 **)0x0;
  ppuStack_ec = (uint **)((uint)ppuStack_ec & 0xffffff00);
  pppuStack_104 = (undefined4 ***)0x6b950d;
  FUN_00409350();
  uStack_3c = 6;
  pppuStack_fc = &ppuStack_ec;
  pcStack_100 = (char *)0x6b952a;
  iVar4 = (**(code **)(**(int **)(param_1 + 0x5d0) + 0x34))();
  pcStack_100 = (char *)(param_1 + 0x768);
  pppuStack_104 = (undefined4 ***)0x6b953b;
  (**(code **)(*(int *)(iVar4 + 0x54) + 4))();
  uStack_44 = 0xffffffff;
  if (0xf < pcStack_e0) {
    pppuStack_104 = (undefined4 ***)pppuStack_f4;
                    /* WARNING: Subroutine does not return */
    pcStack_108 = &UNK_006b9557;
    FUN_00aae91b();
  }
  pppuStack_104 = (undefined4 ***)0xd;
  pcStack_108 = "nudge_z_minus";
  pcStack_e0 = (char *)0xf;
  ppuStack_e4 = (undefined4 **)0x0;
  pppuStack_f4 = (undefined1 ***)((uint)pppuStack_f4 & 0xffffff00);
  pppuStack_10c = (undefined4 ***)0x6b9576;
  FUN_00409350();
  uStack_44 = 7;
  pppuStack_104 = &pppuStack_f4;
  pcStack_108 = (char *)0x6b9593;
  iVar4 = (**(code **)(**(int **)(param_1 + 0x5d0) + 0x34))();
  pcStack_108 = (char *)(param_1 + 0x7b8);
  pppuStack_10c = (undefined4 ***)0x6b95a4;
  (**(code **)(*(int *)(iVar4 + 0x54) + 4))();
  uStack_4c = 0xffffffff;
  if (0xf < pcStack_e8) {
    pppuStack_10c = pppuStack_fc;
                    /* WARNING: Subroutine does not return */
    piStack_110 = (int *)&UNK_006b95c0;
    FUN_00aae91b();
  }
  pppuStack_10c = (undefined4 ***)0xa;
  piStack_110 = (int *)0xe0cb90;
  pcStack_e8 = (char *)0xf;
  ppuStack_ec = (uint **)0x0;
  pppuStack_fc = (undefined4 ***)((uint)pppuStack_fc & 0xffffff00);
  pppuStack_114 = (undefined4 ***)0x6b95df;
  FUN_00409350();
  uStack_4c = 8;
  pppuStack_10c = &pppuStack_fc;
  piStack_110 = (int *)0x6b95fc;
  iVar4 = (**(code **)(**(int **)(param_1 + 0x5d0) + 0x34))();
  piStack_110 = (int *)(param_1 + 0x808);
  pppuStack_114 = (undefined4 ***)0x6b960d;
  (**(code **)(*(int *)(iVar4 + 0x54) + 4))();
  uStack_54 = 0xffffffff;
  if (0xf < pcStack_f0) {
    pppuStack_114 = pppuStack_104;
                    /* WARNING: Subroutine does not return */
    pcStack_118 = &UNK_006b9629;
    FUN_00aae91b();
  }
  pppuStack_114 = (undefined4 ***)0x13;
  pcStack_118 = "nudge_rotation_plus";
  pcStack_f0 = (char *)0xf;
  pppuStack_f4 = (undefined1 ***)0x0;
  pppuStack_104 = (undefined4 ***)((uint)pppuStack_104 & 0xffffff00);
  pppuStack_11c = (undefined4 ***)0x6b9648;
  FUN_00409350();
  uStack_54 = 9;
  pppuStack_114 = &pppuStack_104;
  pcStack_118 = (char *)0x6b9665;
  iVar4 = (**(code **)(**(int **)(param_1 + 0x5d0) + 0x34))();
  pcStack_118 = (char *)(param_1 + 0x858);
  pppuStack_11c = (undefined4 ***)0x6b9676;
  (**(code **)(*(int *)(iVar4 + 0x54) + 4))();
  uStack_5c = 0xffffffff;
  if (0xf < pcStack_f8) {
    pppuStack_11c = pppuStack_10c;
                    /* WARNING: Subroutine does not return */
    pcStack_120 = &UNK_006b9692;
    FUN_00aae91b();
  }
  pppuStack_11c = (undefined4 ***)0x18;
  pcStack_120 = "nudge_rotation_plus_plus";
  pcStack_f8 = (char *)0xf;
  pppuStack_fc = (undefined4 ***)0x0;
  pppuStack_10c = (undefined4 ***)((uint)pppuStack_10c & 0xffffff00);
  pppuStack_124 = (undefined4 ***)0x6b96b1;
  FUN_00409350();
  uStack_5c = 10;
  pppuStack_11c = &pppuStack_10c;
  pcStack_120 = (char *)0x6b96ce;
  iVar4 = (**(code **)(**(int **)(param_1 + 0x5d0) + 0x34))();
  pcStack_120 = (char *)(param_1 + 0x8a8);
  pppuStack_124 = (undefined4 ***)0x6b96df;
  (**(code **)(*(int *)(iVar4 + 0x54) + 4))();
  uStack_64 = 0xffffffff;
  if (0xf < pcStack_100) {
    pppuStack_124 = pppuStack_114;
                    /* WARNING: Subroutine does not return */
    pcStack_128 = &UNK_006b96fb;
    FUN_00aae91b();
  }
  pppuStack_124 = (undefined4 ***)0x14;
  pcStack_128 = "nudge_rotation_minus";
  pcStack_100 = (char *)0xf;
  pppuStack_104 = (undefined4 ***)0x0;
  pppuStack_114 = (undefined4 ***)((uint)pppuStack_114 & 0xffffff00);
  pppuStack_12c = (undefined4 ***)0x6b971a;
  FUN_00409350();
  uStack_64 = 0xb;
  pppuStack_124 = &pppuStack_114;
  pcStack_128 = (char *)0x6b9737;
  iVar4 = (**(code **)(**(int **)(param_1 + 0x5d0) + 0x34))();
  pcStack_128 = (char *)(param_1 + 0x8f8);
  pppuStack_12c = (undefined4 ***)0x6b9748;
  (**(code **)(*(int *)(iVar4 + 0x54) + 4))();
  uStack_6c = 0xffffffff;
  if (0xf < pcStack_108) {
    pppuStack_12c = pppuStack_11c;
                    /* WARNING: Subroutine does not return */
    pcStack_130 = &UNK_006b9764;
    FUN_00aae91b();
  }
  pppuStack_12c = (undefined4 ***)0x1a;
  pcStack_130 = "nudge_rotation_minus_minus";
  pcStack_108 = (char *)0xf;
  pppuStack_10c = (undefined4 ***)0x0;
  pppuStack_11c = (undefined4 ***)((uint)pppuStack_11c & 0xffffff00);
  pppuStack_134 = (undefined4 ***)0x6b9783;
  FUN_00409350();
  uStack_6c = 0xc;
  pppuStack_12c = &pppuStack_11c;
  pcStack_130 = (char *)0x6b97a0;
  iVar4 = (**(code **)(**(int **)(param_1 + 0x5d0) + 0x34))();
  pcStack_130 = (char *)(param_1 + 0x948);
  pppuStack_134 = (undefined4 ***)0x6b97b1;
  (**(code **)(*(int *)(iVar4 + 0x54) + 4))();
  uStack_74 = 0xffffffff;
  if (0xf < piStack_110) {
    pppuStack_134 = pppuStack_124;
                    /* WARNING: Subroutine does not return */
    pcStack_138 = &UNK_006b97cd;
    FUN_00aae91b();
  }
  pppuStack_134 = (undefined4 ***)0x23;
  pcStack_138 = "nudge_selection_railroad_visibility";
  piStack_110 = (int *)0xf;
  pppuStack_114 = (undefined4 ***)0x0;
  pppuStack_124 = (undefined4 ***)((uint)pppuStack_124 & 0xffffff00);
  puStack_13c = (undefined *)0x6b97ec;
  FUN_00409350();
  uStack_74 = 0xd;
  pppuStack_134 = &pppuStack_124;
  pcStack_138 = (char *)0x6b9809;
  uVar3 = (**(code **)(**(int **)(param_1 + 0x5d0) + 0x48))();
  uStack_78 = 0xffffffff;
  *(undefined4 *)(param_1 + 0xa98) = uVar3;
  if ((undefined4 ***)0xf < pppuStack_114) {
    pcStack_138 = pcStack_128;
                    /* WARNING: Subroutine does not return */
    puStack_13c = &UNK_006b982b;
    FUN_00aae91b();
  }
  pcStack_138 = (char *)(param_1 + 0xa60);
  puStack_13c = (undefined *)0x6b9846;
  (**(code **)(*(int *)(*(int *)(param_1 + 0xa98) + 0x54) + 4))();
  piStack_110 = *(int **)(param_1 + 0xa98);
  puStack_13c = (undefined *)0x6b9857;
  (**(code **)(*piStack_110 + 0x38))();
  puStack_13c = (undefined *)0x14;
  pcStack_140 = "nudge_selection_city";
  *(undefined1 *)((int)piStack_110 + 0x143) = 1;
  pcStack_118 = (char *)0xf;
  pppuStack_11c = (undefined4 ***)0x0;
  pppuStack_12c = (undefined4 ***)((uint)pppuStack_12c & 0xffffff00);
  uStack_144 = 0x6b987e;
  FUN_00409350();
  pppuStack_10c = (undefined4 ***)&puStack_154;
  uStack_7c = 0xe;
  pppuStack_158 = (undefined4 ***)0x14;
  pcStack_140 = (char *)0xf;
  uStack_144 = 0;
  pcStack_15c = "nudge_selection_city";
  puStack_154 = (undefined4 *)((uint)puStack_154 & 0xffffff00);
  uStack_160 = 0x6b98a6;
  FUN_00409350();
  uStack_7c = CONCAT31(uStack_7c._1_3_,0xf);
  piStack_110 = (int *)(*(int *)(param_1 + 0x99c) + 0xb0);
  pppuStack_158 = &pppuStack_12c;
  pcStack_15c = (char *)0x6b98cf;
  pcStack_15c = (char *)(**(code **)(**(int **)(param_1 + 0x5d0) + 0x48))();
  uStack_80 = 0xe;
  uStack_160 = 0x6b98e6;
  (*(code *)*pppuStack_114)();
  uStack_a0 = 0xffffffff;
  if (0xf < puStack_13c) {
    uStack_160 = auStack_150[0];
                    /* WARNING: Subroutine does not return */
    pcStack_164 = &UNK_006b9902;
    FUN_00aae91b();
  }
  uStack_160 = 0x14;
  pcStack_164 = "nudge_selection_town";
  puStack_13c = (undefined *)0xf;
  pcStack_140 = (char *)0x0;
  auStack_150[0] = auStack_150[0] & 0xffffff00;
  uStack_168 = 0x6b9925;
  FUN_00409350();
  pcStack_130 = (char *)&puStack_178;
  uStack_a0 = 0x10;
  puStack_17c = (uint *)0x14;
  pcStack_164 = (char *)0xf;
  uStack_168 = 0;
  pcStack_180 = "nudge_selection_town";
  puStack_178 = (undefined1 *)((uint)puStack_178 & 0xffffff00);
  uStack_184 = 0x6b9951;
  FUN_00409350();
  uStack_a0 = CONCAT31(uStack_a0._1_3_,0x11);
  pppuStack_134 = (undefined4 ***)(*(int *)(param_1 + 0x99c) + 0xb0);
  puStack_17c = auStack_150;
  pcStack_180 = (char *)0x6b997a;
  pcStack_180 = (char *)(**(code **)(**(int **)(param_1 + 0x5d0) + 0x48))();
  uStack_a4 = 0x10;
  uStack_184 = 0x6b9991;
  (**(code **)pcStack_138)();
  if (uStack_160 < 0x10) {
    uStack_184 = 0x14;
    pcStack_188 = "nudge_selection_unit";
    uStack_160 = 0xf;
    pcStack_164 = (char *)0x0;
    auStack_174[0] = auStack_174[0] & 0xffffff00;
    uStack_18c = 0x6b99d0;
    FUN_00409350();
    puStack_154 = &puStack_19c;
    puStack_1a0 = (uint *)0x14;
    pcStack_188 = (char *)0xf;
    uStack_18c = 0;
    pcStack_1a4 = "nudge_selection_unit";
    puStack_19c = (undefined1 *)((uint)puStack_19c & 0xffffff00);
    pvStack_1a8 = (void *)0x6b99fc;
    FUN_00409350();
    pppuStack_158 = (undefined4 ***)(*(int *)(param_1 + 0x99c) + 0xb0);
    puStack_1a0 = auStack_174;
    pcStack_1a4 = (char *)0x6b9a25;
    pcStack_1a4 = (char *)(**(code **)(**(int **)(param_1 + 0x5d0) + 0x48))();
    pvStack_1a8 = (void *)0x6b9a3c;
    (**(code **)pcStack_15c)();
    pcStack_e8 = (char *)0xffffffff;
    if (0xf < uStack_184) {
      pvStack_1a8 = (void *)auStack_198[0];
                    /* WARNING: Subroutine does not return */
      pcStack_1ac = &UNK_006b9a58;
      FUN_00aae91b();
    }
    pvStack_1a8 = (void *)0x17;
    pcStack_1ac = "nudge_selection_factory";
    uStack_184 = 0xf;
    pcStack_188 = (char *)0x0;
    auStack_198[0] = auStack_198[0] & 0xffffff00;
    uStack_1b0 = 0x6b9a7b;
    FUN_00409350();
    puStack_178 = (undefined1 *)&puStack_1c0;
    pcStack_e8 = (char *)0x14;
    puStack_1c4 = (uint *)0x17;
    pcStack_1ac = (char *)0xf;
    uStack_1b0 = 0;
    pcStack_1c8 = "nudge_selection_factory";
    puStack_1c0 = (undefined1 *)((uint)puStack_1c0 & 0xffffff00);
    uStack_1cc = 0x6b9aa7;
    FUN_00409350();
    pcStack_e8 = (char *)CONCAT31(pcStack_e8._1_3_,0x15);
    puStack_17c = (uint *)(*(int *)(param_1 + 0x99c) + 0xb0);
    puStack_1c4 = auStack_198;
    pcStack_1c8 = (char *)0x6b9ad0;
    pcStack_1c8 = (char *)(**(code **)(**(int **)(param_1 + 0x5d0) + 0x48))();
    ppuStack_ec = (uint **)CONCAT31(ppuStack_ec._1_3_,0x14);
    uStack_1cc = 0x6b9ae7;
    (**(code **)pcStack_180)();
    pppuStack_10c = (undefined4 ***)0xffffffff;
    if (0xf < pvStack_1a8) {
      uStack_1cc = auStack_1bc[0];
                    /* WARNING: Subroutine does not return */
      pcStack_1d0 = &UNK_006b9b03;
      FUN_00aae91b();
    }
    uStack_1cc = 0x1c;
    pcStack_1d0 = "nudge_selection_construction";
    pvStack_1a8 = (void *)0xf;
    pcStack_1ac = (char *)0x0;
    auStack_1bc[0] = auStack_1bc[0] & 0xffffff00;
    uStack_1d4 = 0x6b9b26;
    FUN_00409350();
    puStack_19c = (undefined1 *)&puStack_1e4;
    pppuStack_10c = (undefined4 ***)0x16;
    puStack_1e8 = (uint *)0x1c;
    pcStack_1d0 = (char *)0xf;
    uStack_1d4 = 0;
    pcStack_1ec = "nudge_selection_construction";
    puStack_1e4 = (undefined1 *)((uint)puStack_1e4 & 0xffffff00);
    uStack_1f0 = 0x6b9b52;
    FUN_00409350();
    pppuStack_10c = (undefined4 ***)CONCAT31(pppuStack_10c._1_3_,0x17);
    puStack_1a0 = (uint *)(*(int *)(param_1 + 0x99c) + 0xb0);
    puStack_1e8 = auStack_1bc;
    pcStack_1ec = (char *)0x6b9b7b;
    pcStack_1ec = (char *)(**(code **)(**(int **)(param_1 + 0x5d0) + 0x48))();
    piStack_110 = (int *)CONCAT31(piStack_110._1_3_,0x16);
    uStack_1f0 = 0x6b9b92;
    (**(code **)pcStack_1a4)();
    pcStack_130 = (char *)0xffffffff;
    if (0xf < uStack_1cc) {
      uStack_1f0 = uStack_1e0;
                    /* WARNING: Subroutine does not return */
      pcStack_1f4 = &UNK_006b9bae;
      FUN_00aae91b();
    }
    uStack_1f0 = 0x20;
    pcStack_1f4 = "nudge_selection_unitconstruction";
    uStack_1cc = 0xf;
    pcStack_1d0 = (char *)0x0;
    uStack_1e0 = uStack_1e0 & 0xffffff00;
    uStack_1f8 = 0x6b9bd1;
    FUN_00409350();
    puStack_1c0 = (undefined1 *)&puStack_208;
    pcStack_130 = (char *)0x18;
    puStack_20c = (uint *)0x20;
    pcStack_1f4 = (char *)0xf;
    uStack_1f8 = 0;
    pcStack_210 = "nudge_selection_unitconstruction";
    puStack_208 = (undefined1 *)((uint)puStack_208 & 0xffffff00);
    uStack_214 = 0x6b9bfd;
    FUN_00409350();
    pcStack_130 = (char *)CONCAT31(pcStack_130._1_3_,0x19);
    puStack_1c4 = (uint *)(*(int *)(param_1 + 0x99c) + 0xb0);
    puStack_20c = &uStack_1e0;
    pcStack_210 = (char *)0x6b9c26;
    pcStack_210 = (char *)(**(code **)(**(int **)(param_1 + 0x5d0) + 0x48))();
    pppuStack_134 = (undefined4 ***)CONCAT31(pppuStack_134._1_3_,0x18);
    uStack_214 = 0x6b9c3d;
    (**(code **)pcStack_1c8)();
    puStack_154 = (undefined4 **)0xffffffff;
    if (0xf < uStack_1f0) {
      uStack_214 = uStack_204;
                    /* WARNING: Subroutine does not return */
      pcStack_218 = &UNK_006b9c59;
      FUN_00aae91b();
    }
    uStack_214 = 0x14;
    pcStack_218 = "nudge_selection_text";
    uStack_1f0 = 0xf;
    pcStack_1f4 = (char *)0x0;
    uStack_204 = uStack_204 & 0xffffff00;
    uStack_21c = 0x6b9c7c;
    FUN_00409350();
    puStack_1e4 = (undefined1 *)&piStack_22c;
    puStack_154 = (undefined4 **)0x1a;
    puStack_230 = (uint *)0x14;
    pcStack_218 = (char *)0xf;
    uStack_21c = 0;
    pcStack_234 = "nudge_selection_text";
    piStack_22c = (int *)((uint)piStack_22c & 0xffffff00);
    uStack_238 = 0x6b9ca8;
    FUN_00409350();
    puStack_154 = (undefined4 *)CONCAT31(puStack_154._1_3_,0x1b);
    puStack_1e8 = (uint *)(*(int *)(param_1 + 0x99c) + 0xb0);
    puStack_230 = &uStack_204;
    pcStack_234 = (char *)0x6b9cd1;
    pcStack_234 = (char *)(**(code **)(**(int **)(param_1 + 0x5d0) + 0x48))();
    pppuStack_158 = (undefined4 ***)CONCAT31(pppuStack_158._1_3_,0x1a);
    uStack_238 = 0x6b9ce8;
    (**(code **)pcStack_1ec)();
    puStack_178 = (undefined1 *)0xffffffff;
    if (0xf < uStack_214) {
      uStack_238 = uStack_228;
                    /* WARNING: Subroutine does not return */
      pcStack_23c = &UNK_006b9d04;
      FUN_00aae91b();
    }
    uStack_238 = 0x1f;
    pcStack_23c = "nudge_selection_railroad_spline";
    uStack_214 = 0xf;
    pcStack_218 = (char *)0x0;
    uStack_228 = uStack_228 & 0xffffff00;
    uStack_240 = 0x6b9d27;
    FUN_00409350();
    puStack_208 = auStack_250;
    puStack_178 = (undefined1 *)0x1c;
    puStack_254 = (uint *)0x1f;
    pcStack_23c = (char *)0xf;
    uStack_240 = 0;
    pcStack_258 = "nudge_selection_railroad_spline";
    auStack_250[0] = 0;
    ppcStack_25c = (char **)0x6b9d53;
    FUN_00409350();
    puStack_178 = (undefined1 *)CONCAT31(puStack_178._1_3_,0x1d);
    puStack_20c = (uint *)(*(int *)(param_1 + 0x99c) + 0xb0);
    puStack_254 = &uStack_228;
    pcStack_258 = (char *)0x6b9d7c;
    pcStack_258 = (char *)(**(code **)(**(int **)(param_1 + 0x5d0) + 0x48))();
    puStack_17c = (uint *)CONCAT31(puStack_17c._1_3_,0x1c);
    ppcStack_25c = (char **)0x6b9d93;
    (**(code **)pcStack_210)();
    puStack_19c = (undefined1 *)0xffffffff;
    if (0xf < uStack_238) {
      ppcStack_25c = (char **)uStack_24c;
                    /* WARNING: Subroutine does not return */
      puStack_260 = (uint *)&UNK_006b9dae;
      FUN_00aae91b();
    }
    ppcStack_25c = (char **)0xe;
    puStack_260 = (uint *)0xe0cbf8;
    uStack_204 = 0xf;
    puStack_208 = (undefined1 *)0x0;
    pcStack_218 = (char *)((uint)pcStack_218 & 0xffffff00);
    puStack_264 = (uint *)0x6b9dd1;
    FUN_00409350();
    puStack_19c = (undefined1 *)0x1e;
    ppcStack_25c = &pcStack_218;
    puStack_260 = (uint *)0x6b9dee;
    uStack_220 = (**(code **)(**(int **)(param_1 + 0x5d0) + 0x7c))();
    puStack_1a0 = (uint *)0xffffffff;
    if ((undefined1 *)0xf < puStack_208) {
      puStack_260 = (uint *)uStack_21c;
                    /* WARNING: Subroutine does not return */
      puStack_264 = (uint *)&UNK_006b9e0a;
      FUN_00aae91b();
    }
    puStack_208 = (undefined1 *)0xf;
    puStack_20c = (uint *)0x0;
    uStack_21c = uStack_21c & 0xffffff00;
    puStack_260 = (uint *)0x6b9e22;
    iVar4 = FUN_004dad40();
    uStack_228 = 1;
    iStack_224 = iVar4;
    if (4 < (int)(*(int *)(iVar4 + 0x10) - *(int *)(iVar4 + 0xc) & 0xfffffffcU)) {
      do {
        if (DAT_0125ce80 == 0) {
          puStack_260 = (uint *)0x3c;
          puStack_264 = (uint *)0x6b9e51;
          puStack_230 = (uint *)FUN_00aae9af();
          puStack_1a0 = (uint *)0x1f;
          if (puStack_230 == (uint *)0x0) {
            puStack_260 = (uint *)0x0;
          }
          else {
            puStack_260 = (uint *)0x6b9e6e;
            puStack_260 = (uint *)FUN_004dada0();
            iVar4 = iStack_224;
          }
          puStack_1a0 = (uint *)0xffffffff;
          puStack_264 = (uint *)0x6b9e87;
          FUN_004dc340();
        }
        if (*(char *)(*(int *)(*(int *)(DAT_0125ce80 + 0xc) + uStack_228 * 4) + 0xe0) != '\0') {
          puStack_260 = (uint *)0x28;
          puStack_264 = (uint *)0x6b9eaa;
          puVar5 = (uint *)FUN_00aae9af();
          puStack_1a0 = (uint *)0x20;
          puStack_230 = puVar5;
          if (puVar5 == (uint *)0x0) {
            pcStack_234 = (char *)0x0;
          }
          else {
            puStack_260 = (uint *)0xd;
            puStack_264 = (uint *)0xe0cc08;
            pcStack_1ec = (char *)0xf;
            uStack_1f0 = 0;
            auStack_200[0] = auStack_200[0] & 0xffffff00;
            ppcStack_268 = (char **)0x6b9ee2;
            FUN_00409350();
            puStack_260 = auStack_200;
            puStack_1a0 = (uint *)CONCAT31(puStack_1a0._1_3_,0x21);
            piStack_22c = (int *)((uint)piStack_22c | 1);
            ppcStack_268 = (char **)0x6b9f06;
            puStack_264 = puVar5;
            pcStack_234 = (char *)FUN_009b1df0();
          }
          pcVar2 = pcStack_234;
          puStack_1a0 = (uint *)0xffffffff;
          if (((uint)piStack_22c & 1) != 0) {
            piStack_22c = (int *)((uint)piStack_22c & 0xfffffffe);
            if ((char *)0xf < pcStack_1ec) {
              puStack_260 = (uint *)auStack_200[0];
                    /* WARNING: Subroutine does not return */
              puStack_264 = (uint *)&UNK_006b9f3c;
              FUN_00aae91b();
            }
            pcStack_1ec = (char *)0xf;
            uStack_1f0 = 0;
            auStack_200[0] = auStack_200[0] & 0xffffff00;
          }
          puStack_260 = (uint *)0x11;
          puStack_264 = (uint *)0xe0cc18;
          pcStack_23c = (char *)0xf;
          uStack_240 = 0;
          auStack_250[0] = 0;
          ppcStack_268 = (char **)0x6b9f73;
          FUN_00409350();
          puStack_1a0 = (uint *)0x23;
          puStack_260 = (uint *)auStack_250;
          puStack_264 = (uint *)0x6b9f8d;
          pcStack_234 = (char *)(**(code **)(**(int **)((int)pcVar2 + 0x20) + 0x48))();
          pcStack_1a4 = (char *)0xffffffff;
          if (0xf < uStack_240) {
            puStack_264 = puStack_254;
                    /* WARNING: Subroutine does not return */
            ppcStack_268 = (char **)&UNK_006b9fad;
            FUN_00aae91b();
          }
          puStack_264 = (uint *)0xe;
          ppcStack_268 = (char **)0xe0cc2c;
          uStack_240 = 0xf;
          uStack_244 = 0;
          puStack_254 = (uint *)((uint)puStack_254 & 0xffffff00);
          uStack_1d4 = 0xf;
          uStack_1d8 = 0;
          puStack_1e8 = (uint *)((uint)puStack_1e8 & 0xffffff00);
          uStack_26c = 0x6b9fe4;
          FUN_00409350();
          pcStack_1a4 = (char *)0x24;
          piVar1 = *(int **)((int)pcVar2 + 0x20);
          puStack_264 = &uStack_1cc;
          ppcStack_268 = (char **)0x6ba00f;
          (**(code **)(**(int **)(*(int *)(uStack_228 + 0xc) + (int)piStack_22c * 4) + 0x18))();
          pvStack_1a8 = (void *)CONCAT31(pvStack_1a8._1_3_,0x25);
          ppcStack_268 = &pcStack_1ec;
          uStack_26c = 0x6ba027;
          (**(code **)(*piVar1 + 0x38))();
          uStack_26c = 0x6ba02e;
          FUN_009e7500();
          if ((undefined1 *)0xf < puStack_1c0) {
            uStack_26c = uStack_1d4;
                    /* WARNING: Subroutine does not return */
            puStack_270 = &UNK_006ba049;
            FUN_00aae91b();
          }
          pcStack_1ac = (char *)0xffffffff;
          puStack_1c0 = (undefined1 *)0xf;
          puStack_1c4 = (uint *)0x0;
          uStack_1d4 = uStack_1d4 & 0xffffff00;
          if (0xf < uStack_1dc) {
            uStack_26c = uStack_1f0;
                    /* WARNING: Subroutine does not return */
            puStack_270 = &UNK_006ba084;
            FUN_00aae91b();
          }
          uStack_26c = 1;
          puStack_270 = (undefined *)uStack_240;
          uStack_274 = 0x6ba099;
          (**(code **)(*piStack_22c + 0x10))();
          puStack_248 = auStack_28c;
          uStack_278 = 0xf;
          uStack_27c = 0;
          auStack_28c[0] = 0;
          FUN_00408ed0(*(int *)(*(int *)(uStack_238 + 0xc) + (int)pcStack_23c * 4) + 0x20,0,
                       0xffffffff);
          (**(code **)(*(int *)(param_1 + 0x99c) + 0xb0))(uStack_244);
          iVar4 = iStack_224;
        }
        uStack_228 = uStack_228 + 1;
      } while ((int)uStack_228 < *(int *)(iVar4 + 0x10) - *(int *)(iVar4 + 0xc) >> 2);
    }
    ExceptionList = pvStack_1a8;
    return;
  }
  uStack_184 = auStack_174[0];
                    /* WARNING: Subroutine does not return */
  pcStack_188 = &UNK_006b99ad;
  FUN_00aae91b();
}

