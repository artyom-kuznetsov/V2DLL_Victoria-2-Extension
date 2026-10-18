// FUN_007129a0 @ 007129a0 body=[[007129a0, 00712a68] [00712a6c, 00712ad1] [00712ad5, 00712b37] [00712b3b, 00712b9d] [00712ba1, 00712c06] [00712c0a, 00712c6f] [00712c73, 00712cd8] [00712cdc, 00712d41] [00712d45, 00712daa] [00712dae, 00712e14] [00712e18, 00712e7e] [00712e82, 00712ee7] [00712eeb, 00712f50] [00712f54, 00712fb9] [00712fbd, 00713022] [00713026, 00713084] [00713088, 007130e2] [007130e6, 00713144] [00713148, 007131a6] [007131aa, 00713210] [00713214, 0071327a] [0071327e, 007132f6] [007132fa, 00713397] [0071339b, 007133fa] [007133fe, 0071341c] [00713420, 007134c3] [007134c7, 00713517] [0071351b, 00713580] [00713584, 007135dc] [007135e0, 00713668] [0071366c, 0071373f] [00713743, 007137a8] [007137ac, 0071387f] [00713883, 007138bc] [007138c0, 007138ea] [007138ee, 00713a3e] [00713a42, 00713a8b]]


undefined4 FUN_007129a0(void)

{
  char ***pppcVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  code *pcVar5;
  undefined4 uVar6;
  char ***pppcVar7;
  int *in_ECX;
  uint unaff_EBX;
  uint unaff_EDI;
  int *piStack_1d0;
  undefined4 ****ppppuStack_1cc;
  char *pcStack_1c8;
  undefined4 ****ppppuStack_1c4;
  int *piStack_1c0;
  char ****ppppcStack_1bc;
  int **ppiStack_1b8;
  char ****ppppcStack_1b4;
  int *piStack_1b0;
  undefined4 uStack_1ac;
  int *piStack_1a8;
  char ****ppppcStack_1a4;
  char *pcStack_1a0;
  char ****ppppcStack_19c;
  char *pcStack_198;
  char ****ppppcStack_194;
  char *pcStack_190;
  char ****ppppcStack_18c;
  char *pcStack_188;
  char ****ppppcStack_184;
  int *piStack_180;
  char ****ppppcStack_17c;
  int *piStack_178;
  char ****ppppcStack_174;
  int *piStack_170;
  char ****ppppcStack_16c;
  int *piStack_168;
  char ****ppppcStack_164;
  undefined4 **ppuStack_160;
  char ****ppppcStack_15c;
  int *piStack_158;
  char ****ppppcStack_154;
  int *piStack_150;
  char ****ppppcStack_14c;
  int *piStack_148;
  undefined1 ****ppppuStack_144;
  int *piStack_140;
  uint ***pppuStack_13c;
  int *piStack_138;
  char ***pppcStack_134;
  int *piStack_130;
  char ***pppcStack_12c;
  int *piStack_128;
  undefined1 ***pppuStack_124;
  int *piStack_120;
  uint **ppuStack_11c;
  int *piStack_118;
  char **ppcStack_114;
  uint *puStack_110;
  char **ppcStack_10c;
  uint uStack_fc;
  uint uStack_f8;
  void *pvStack_f4;
  uint uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined1 uStack_e4;
  undefined4 uStack_e0;
  int *piStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_cc;
  undefined4 uStack_c4;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_ac;
  undefined4 uStack_a4;
  undefined4 uStack_9c;
  undefined4 uStack_94;
  undefined4 uStack_8c;
  undefined4 uStack_84;
  undefined4 uStack_7c;
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
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b6dda4;
  pvStack_14 = ExceptionList;
  if ((in_ECX[8] == 0) || (*(char *)(in_ECX[8] + 0x67) == '\0')) {
    uStack_e0 = (uint)(uint3)uStack_e0;
    ExceptionList = &pvStack_14;
  }
  else {
    uStack_e0 = CONCAT13(1,(uint3)uStack_e0);
    ppcStack_10c = (char **)0x7129e8;
    ExceptionList = &pvStack_14;
    (**(code **)(*in_ECX + 0xc))();
  }
  if ((int *)in_ECX[8] != (int *)0x0) {
    ppcStack_10c = (char **)0x7129f6;
    (**(code **)(*(int *)in_ECX[8] + 0x50))();
  }
  ppcStack_10c = (char **)0x6;
  puStack_110 = (uint *)&DAT_00e100e0;
  uStack_e8 = 0xf;
  uStack_ec = 0;
  uStack_fc = uStack_fc & 0xffffff00;
  ppcStack_114 = (char **)0x712a16;
  FUN_00409350();
  uStack_c = 0;
  ppcStack_10c = (char **)0x712a27;
  piStack_d8 = (int *)(**(code **)(*(int *)in_ECX[9] + 0x34))();
  iVar3 = *piStack_d8;
  ppcStack_10c = (char **)0x712a37;
  ppcStack_10c = (char **)(**(code **)(*(int *)in_ECX[9] + 0x3c))();
  puStack_110 = &uStack_fc;
  ppcStack_114 = (char **)0x712a46;
  iVar3 = (**(code **)(iVar3 + 0x2c))();
  pvStack_14 = (void *)0xffffffff;
  in_ECX[8] = iVar3;
  if (0xf < uStack_f0) {
                    /* WARNING: Subroutine does not return */
    piStack_118 = (int *)&UNK_00712a69;
    FUN_00aae91b();
  }
  ppcStack_114 = (char **)0xb;
  piStack_118 = (int *)0xe106d0;
  uStack_f0 = 0xf;
  pvStack_f4 = (void *)0x0;
  ppuStack_11c = (uint **)0x712a8c;
  FUN_00409350();
  pvStack_14 = (void *)0x1;
  ppcStack_114 = (char **)&stack0xfffffefc;
  piStack_118 = (int *)0x712aa6;
  iVar3 = (**(code **)(*(int *)in_ECX[8] + 0x34))();
  piStack_118 = in_ECX + 0x86;
  ppuStack_11c = (uint **)0x712ab7;
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))();
  uStack_1c = 0xffffffff;
  if (0xf < uStack_f8) {
    ppuStack_11c = (uint **)ppcStack_10c;
                    /* WARNING: Subroutine does not return */
    piStack_120 = (int *)&UNK_00712ad2;
    FUN_00aae91b();
  }
  ppuStack_11c = (uint **)0x17;
  piStack_120 = (int *)0xe10b98;
  uStack_f8 = 0xf;
  uStack_fc = 0;
  ppcStack_10c = (char **)((uint)ppcStack_10c & 0xffffff00);
  pppuStack_124 = (undefined1 ***)0x712af5;
  FUN_00409350();
  uStack_1c = 2;
  ppuStack_11c = (uint **)&ppcStack_10c;
  piStack_120 = (int *)0x712b0f;
  iVar3 = (**(code **)(*(int *)in_ECX[8] + 0x34))();
  piStack_120 = in_ECX + 0xd;
  pppuStack_124 = (undefined1 ***)0x712b1d;
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))();
  uStack_24 = 0xffffffff;
  if (0xf < unaff_EBX) {
    pppuStack_124 = (undefined1 ***)ppcStack_114;
                    /* WARNING: Subroutine does not return */
    piStack_128 = (int *)&UNK_00712b38;
    FUN_00aae91b();
  }
  pppuStack_124 = (undefined1 ***)0x13;
  piStack_128 = (int *)0xe10bb0;
  ppcStack_114 = (char **)((uint)ppcStack_114 & 0xffffff00);
  pppcStack_12c = (char ***)0x712b5b;
  FUN_00409350();
  uStack_24 = 3;
  pppuStack_124 = &ppcStack_114;
  piStack_128 = (int *)0x712b75;
  iVar3 = (**(code **)(*(int *)in_ECX[8] + 0x34))();
  piStack_128 = in_ECX + 0x18;
  pppcStack_12c = (char ***)0x712b83;
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))();
  uStack_2c = 0xffffffff;
  if (0xf < unaff_EDI) {
    pppcStack_12c = (char ***)ppuStack_11c;
                    /* WARNING: Subroutine does not return */
    piStack_130 = (int *)&UNK_00712b9e;
    FUN_00aae91b();
  }
  pppcStack_12c = (char ***)0x11;
  piStack_130 = (int *)0xe10bc4;
  ppcStack_10c = (char **)0x0;
  ppuStack_11c = (uint **)((uint)ppuStack_11c & 0xffffff00);
  pppcStack_134 = (char ***)0x712bc1;
  FUN_00409350();
  uStack_2c = 4;
  pppcStack_12c = (char ***)&ppuStack_11c;
  piStack_130 = (int *)0x712bdb;
  iVar3 = (**(code **)(*(int *)in_ECX[8] + 0x34))();
  piStack_130 = in_ECX + 0x23;
  pppcStack_134 = (char ***)0x712bec;
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))();
  uStack_34 = 0xffffffff;
  if ((uint *)0xf < puStack_110) {
    pppcStack_134 = pppuStack_124;
                    /* WARNING: Subroutine does not return */
    piStack_138 = (int *)&UNK_00712c07;
    FUN_00aae91b();
  }
  pppcStack_134 = (char ***)0x15;
  piStack_138 = (int *)0xe10bd8;
  puStack_110 = (uint *)0xf;
  ppcStack_114 = (char **)0x0;
  pppuStack_124 = (undefined1 ***)((uint)pppuStack_124 & 0xffffff00);
  pppuStack_13c = (uint ***)0x712c2a;
  FUN_00409350();
  uStack_34 = 5;
  pppcStack_134 = (char ***)&pppuStack_124;
  piStack_138 = (int *)0x712c44;
  iVar3 = (**(code **)(*(int *)in_ECX[8] + 0x34))();
  piStack_138 = in_ECX + 0x2e;
  pppuStack_13c = (uint ***)0x712c55;
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))();
  uStack_3c = 0xffffffff;
  if ((int *)0xf < piStack_118) {
    pppuStack_13c = (uint ***)pppcStack_12c;
                    /* WARNING: Subroutine does not return */
    piStack_140 = (int *)&UNK_00712c70;
    FUN_00aae91b();
  }
  pppuStack_13c = (uint ***)0x14;
  piStack_140 = (int *)0xe10944;
  piStack_118 = (int *)0xf;
  ppuStack_11c = (uint **)0x0;
  pppcStack_12c = (char ***)((uint)pppcStack_12c & 0xffffff00);
  ppppuStack_144 = (undefined1 ****)0x712c93;
  FUN_00409350();
  uStack_3c = 6;
  pppuStack_13c = (uint ***)&pppcStack_12c;
  piStack_140 = (int *)0x712cad;
  iVar3 = (**(code **)(*(int *)in_ECX[8] + 0x34))();
  piStack_140 = in_ECX + 0x4f;
  ppppuStack_144 = (undefined1 ****)0x712cbe;
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))();
  uStack_44 = 0xffffffff;
  if ((int *)0xf < piStack_120) {
    ppppuStack_144 = (undefined1 ****)pppcStack_134;
                    /* WARNING: Subroutine does not return */
    piStack_148 = (int *)&UNK_00712cd9;
    FUN_00aae91b();
  }
  ppppuStack_144 = (undefined1 ****)0xc;
  piStack_148 = (int *)0xe10b00;
  piStack_120 = (int *)0xf;
  pppuStack_124 = (undefined1 ***)0x0;
  pppcStack_134 = (char ***)((uint)pppcStack_134 & 0xffffff00);
  ppppcStack_14c = (char ****)0x712cfc;
  FUN_00409350();
  uStack_44 = 7;
  ppppuStack_144 = &pppcStack_134;
  piStack_148 = (int *)0x712d16;
  iVar3 = (**(code **)(*(int *)in_ECX[8] + 0x34))();
  piStack_148 = in_ECX + 0x91;
  ppppcStack_14c = (char ****)0x712d27;
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))();
  uStack_4c = 0xffffffff;
  if ((int *)0xf < piStack_128) {
    ppppcStack_14c = (char ****)pppuStack_13c;
                    /* WARNING: Subroutine does not return */
    piStack_150 = (int *)&UNK_00712d42;
    FUN_00aae91b();
  }
  ppppcStack_14c = (char ****)0x16;
  piStack_150 = (int *)0xe1095c;
  piStack_128 = (int *)0xf;
  pppcStack_12c = (char ***)0x0;
  pppuStack_13c = (uint ***)((uint)pppuStack_13c & 0xffffff00);
  ppppcStack_154 = (char ****)0x712d65;
  FUN_00409350();
  uStack_4c = 8;
  ppppcStack_14c = (char ****)&pppuStack_13c;
  piStack_150 = (int *)0x712d7f;
  iVar3 = (**(code **)(*(int *)in_ECX[8] + 0x34))();
  piStack_150 = in_ECX + 0x44;
  ppppcStack_154 = (char ****)0x712d90;
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))();
  uStack_54 = 0xffffffff;
  if ((int *)0xf < piStack_130) {
    ppppcStack_154 = ppppuStack_144;
                    /* WARNING: Subroutine does not return */
    piStack_158 = (int *)&UNK_00712dab;
    FUN_00aae91b();
  }
  ppppcStack_154 = (char ****)0x16;
  piStack_158 = (int *)0xe10bf0;
  piStack_130 = (int *)0xf;
  pppcStack_134 = (char ***)0x0;
  ppppuStack_144 = (undefined1 ****)((uint)ppppuStack_144 & 0xffffff00);
  ppppcStack_15c = (char ****)0x712dce;
  FUN_00409350();
  uStack_54 = 9;
  ppppcStack_154 = (char ****)&ppppuStack_144;
  piStack_158 = (int *)0x712de8;
  iVar3 = (**(code **)(*(int *)in_ECX[8] + 0x34))();
  piStack_158 = in_ECX + 0x39;
  ppppcStack_15c = (char ****)0x712dfa;
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))();
  uStack_5c = 0xffffffff;
  if ((int *)0xf < piStack_138) {
    ppppcStack_15c = ppppcStack_14c;
                    /* WARNING: Subroutine does not return */
    ppuStack_160 = (undefined4 **)&UNK_00712e15;
    FUN_00aae91b();
  }
  ppppcStack_15c = (char ****)0x11;
  ppuStack_160 = (undefined4 **)0xe1098c;
  piStack_138 = (int *)0xf;
  pppuStack_13c = (uint ***)0x0;
  ppppcStack_14c = (char ****)((uint)ppppcStack_14c & 0xffffff00);
  ppppcStack_164 = (char ****)0x712e38;
  FUN_00409350();
  uStack_5c = 10;
  ppppcStack_15c = (char ****)&ppppcStack_14c;
  ppuStack_160 = (char ***)0x712e52;
  iVar3 = (**(code **)(*(int *)in_ECX[8] + 0x34))();
  ppuStack_160 = (undefined4 **)(in_ECX + 0x39);
  ppppcStack_164 = (char ****)0x712e64;
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))();
  uStack_64 = 0xffffffff;
  if ((int *)0xf < piStack_140) {
    ppppcStack_164 = ppppcStack_154;
                    /* WARNING: Subroutine does not return */
    piStack_168 = (int *)&UNK_00712e7f;
    FUN_00aae91b();
  }
  ppppcStack_164 = (char ****)0x11;
  piStack_168 = (int *)0xe10c08;
  piStack_140 = (int *)0xf;
  ppppuStack_144 = (undefined1 ****)0x0;
  ppppcStack_154 = (char ****)((uint)ppppcStack_154 & 0xffffff00);
  ppppcStack_16c = (char ****)0x712ea2;
  FUN_00409350();
  uStack_64 = 0xb;
  ppppcStack_164 = (char ****)&ppppcStack_154;
  piStack_168 = (int *)0x712ebc;
  iVar3 = (**(code **)(*(int *)in_ECX[8] + 0x34))();
  piStack_168 = in_ECX + 0x65;
  ppppcStack_16c = (char ****)0x712ecd;
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))();
  uStack_6c = 0xffffffff;
  if ((int *)0xf < piStack_148) {
    ppppcStack_16c = ppppcStack_15c;
                    /* WARNING: Subroutine does not return */
    piStack_170 = (int *)&UNK_00712ee8;
    FUN_00aae91b();
  }
  ppppcStack_16c = (char ****)0x12;
  piStack_170 = (int *)0xe10c1c;
  piStack_148 = (int *)0xf;
  ppppcStack_14c = (char ****)0x0;
  ppppcStack_15c = (char ****)((uint)ppppcStack_15c & 0xffffff00);
  ppppcStack_174 = (char ****)0x712f0b;
  FUN_00409350();
  uStack_6c = 0xc;
  ppppcStack_16c = (char ****)&ppppcStack_15c;
  piStack_170 = (int *)0x712f25;
  iVar3 = (**(code **)(*(int *)in_ECX[8] + 0x34))();
  piStack_170 = in_ECX + 0x5a;
  ppppcStack_174 = (char ****)0x712f36;
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))();
  uStack_74 = 0xffffffff;
  if ((int *)0xf < piStack_150) {
    ppppcStack_174 = ppppcStack_164;
                    /* WARNING: Subroutine does not return */
    piStack_178 = (int *)&UNK_00712f51;
    FUN_00aae91b();
  }
  ppppcStack_174 = (char ****)0x16;
  piStack_178 = (int *)0xe10c30;
  piStack_150 = (int *)0xf;
  ppppcStack_154 = (char ****)0x0;
  ppppcStack_164 = (char ****)((uint)ppppcStack_164 & 0xffffff00);
  ppppcStack_17c = (char ****)0x712f74;
  FUN_00409350();
  uStack_74 = 0xd;
  ppppcStack_174 = (char ****)&ppppcStack_164;
  piStack_178 = (int *)0x712f8e;
  iVar3 = (**(code **)(*(int *)in_ECX[8] + 0x34))();
  piStack_178 = in_ECX + 0x70;
  ppppcStack_17c = (char ****)0x712f9f;
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))();
  uStack_7c = 0xffffffff;
  if ((int *)0xf < piStack_158) {
    ppppcStack_17c = ppppcStack_16c;
                    /* WARNING: Subroutine does not return */
    piStack_180 = (int *)&UNK_00712fba;
    FUN_00aae91b();
  }
  ppppcStack_17c = (char ****)0x15;
  piStack_180 = (int *)0xe10c48;
  piStack_158 = (int *)0xf;
  ppppcStack_15c = (char ****)0x0;
  ppppcStack_16c = (char ****)((uint)ppppcStack_16c & 0xffffff00);
  ppppcStack_184 = (char ****)0x712fdd;
  FUN_00409350();
  uStack_7c = 0xe;
  ppppcStack_17c = (char ****)&ppppcStack_16c;
  piStack_180 = (int *)0x712ff7;
  iVar3 = (**(code **)(*(int *)in_ECX[8] + 0x34))();
  piStack_180 = in_ECX + 0x7b;
  ppppcStack_184 = (char ****)0x713008;
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))();
  uStack_84 = 0xffffffff;
  if ((char ***)0xf < ppuStack_160) {
    ppppcStack_184 = ppppcStack_174;
                    /* WARNING: Subroutine does not return */
    pcStack_188 = &UNK_00713023;
    FUN_00aae91b();
  }
  ppppcStack_184 = (char ****)0x14;
  pcStack_188 = "alert_can_do_reforms";
  ppuStack_160 = (char ***)0xf;
  ppppcStack_164 = (char ****)0x0;
  ppppcStack_174 = (char ****)((uint)ppppcStack_174 & 0xffffff00);
  ppppcStack_18c = (char ****)0x713046;
  FUN_00409350();
  uStack_84 = 0xf;
  ppppcStack_184 = (char ****)&ppppcStack_174;
  pcStack_188 = (char *)0x713060;
  piVar4 = (int *)(**(code **)(*(int *)in_ECX[8] + 0x34))();
  pcStack_188 = (char *)0x0;
  ppppcStack_18c = (char ****)0x71306a;
  (**(code **)(*piVar4 + 0x10))();
  uStack_8c = 0xffffffff;
  if ((int *)0xf < piStack_168) {
    ppppcStack_18c = ppppcStack_17c;
                    /* WARNING: Subroutine does not return */
    pcStack_190 = &UNK_00713085;
    FUN_00aae91b();
  }
  ppppcStack_18c = (char ****)0x16;
  pcStack_190 = "alert_can_do_decisions";
  piStack_168 = (int *)0xf;
  ppppcStack_16c = (char ****)0x0;
  ppppcStack_17c = (char ****)((uint)ppppcStack_17c & 0xffffff00);
  ppppcStack_194 = (char ****)0x7130a8;
  FUN_00409350();
  uStack_8c = 0x10;
  ppppcStack_18c = (char ****)&ppppcStack_17c;
  pcStack_190 = (char *)0x7130be;
  piVar4 = (int *)(**(code **)(*(int *)in_ECX[8] + 0x34))();
  pcStack_190 = (char *)0x0;
  ppppcStack_194 = (char ****)0x7130c8;
  (**(code **)(*piVar4 + 0x10))();
  uStack_94 = 0xffffffff;
  if ((int *)0xf < piStack_170) {
    ppppcStack_194 = ppppcStack_184;
                    /* WARNING: Subroutine does not return */
    pcStack_198 = &UNK_007130e3;
    FUN_00aae91b();
  }
  ppppcStack_194 = (char ****)0x11;
  pcStack_198 = "alert_have_rebels";
  piStack_170 = (int *)0xf;
  ppppcStack_174 = (char ****)0x0;
  ppppcStack_184 = (char ****)((uint)ppppcStack_184 & 0xffffff00);
  ppppcStack_19c = (char ****)0x713106;
  FUN_00409350();
  uStack_94 = 0x11;
  ppppcStack_194 = (char ****)&ppppcStack_184;
  pcStack_198 = (char *)0x713120;
  piVar4 = (int *)(**(code **)(*(int *)in_ECX[8] + 0x34))();
  pcStack_198 = (char *)0x0;
  ppppcStack_19c = (char ****)0x71312a;
  (**(code **)(*piVar4 + 0x10))();
  uStack_9c = 0xffffffff;
  if ((int *)0xf < piStack_178) {
    ppppcStack_19c = ppppcStack_18c;
                    /* WARNING: Subroutine does not return */
    pcStack_1a0 = &UNK_00713145;
    FUN_00aae91b();
  }
  ppppcStack_19c = (char ****)0xc;
  pcStack_1a0 = "alert_colony";
  piStack_178 = (int *)0xf;
  ppppcStack_17c = (char ****)0x0;
  ppppcStack_18c = (char ****)((uint)ppppcStack_18c & 0xffffff00);
  ppppcStack_1a4 = (char ****)0x713168;
  FUN_00409350();
  uStack_9c = 0x12;
  ppppcStack_19c = (char ****)&ppppcStack_18c;
  pcStack_1a0 = (char *)0x713182;
  piVar4 = (int *)(**(code **)(*(int *)in_ECX[8] + 0x34))();
  pcStack_1a0 = (char *)0x0;
  ppppcStack_1a4 = (char ****)0x71318c;
  (**(code **)(*piVar4 + 0x10))();
  uStack_a4 = 0xffffffff;
  if ((int *)0xf < piStack_180) {
    ppppcStack_1a4 = ppppcStack_194;
                    /* WARNING: Subroutine does not return */
    piStack_1a8 = (int *)&UNK_007131a7;
    FUN_00aae91b();
  }
  ppppcStack_1a4 = (char ****)0xf;
  piStack_1a8 = (int *)0xe106fc;
  piStack_180 = (int *)0xf;
  ppppcStack_184 = (char ****)0x0;
  ppppcStack_194 = (char ****)((uint)ppppcStack_194 & 0xffffff00);
  uStack_1ac = (char *****)0x7131ca;
  FUN_00409350();
  uStack_a4 = 0x13;
  ppppcStack_1a4 = (char ****)&ppppcStack_194;
  piStack_1a8 = (int *)0x7131e4;
  iVar3 = (**(code **)(*(int *)in_ECX[8] + 0x34))();
  piStack_1a8 = in_ECX + 0xa7;
  uStack_1ac = (char *****)0x7131f6;
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))();
  uStack_ac = 0xffffffff;
  if (0xf < pcStack_188) {
    uStack_1ac = (char *****)ppppcStack_19c;
                    /* WARNING: Subroutine does not return */
    piStack_1b0 = (int *)&UNK_00713211;
    FUN_00aae91b();
  }
  uStack_1ac = (char *****)0x8;
  piStack_1b0 = (int *)0xe1070c;
  pcStack_188 = (char *)0xf;
  ppppcStack_18c = (char ****)0x0;
  ppppcStack_19c = (char ****)((uint)ppppcStack_19c & 0xffffff00);
  ppppcStack_1b4 = (char ****)0x713234;
  FUN_00409350();
  uStack_ac = 0x14;
  uStack_1ac = &ppppcStack_19c;
  piStack_1b0 = (int *)0x71324e;
  iVar3 = (**(code **)(*(int *)in_ECX[8] + 0x34))();
  piStack_1b0 = in_ECX + 0xa7;
  ppppcStack_1b4 = (char ****)0x713260;
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))();
  uStack_b4 = 0xffffffff;
  if (0xf < pcStack_190) {
    ppppcStack_1b4 = ppppcStack_1a4;
                    /* WARNING: Subroutine does not return */
    ppiStack_1b8 = (int **)&UNK_0071327b;
    FUN_00aae91b();
  }
  ppppcStack_1b4 = (char ****)0x713288;
  iVar3 = (**(code **)(*(int *)in_ECX[9] + 0x44))();
  ppppcStack_1b4 = (char ****)0xe;
  pcStack_190 = (char *)0xf;
  ppppcStack_194 = (char ****)0x0;
  ppppcStack_1a4 = (char ****)((uint)ppppcStack_1a4 & 0xffffff00);
  ppiStack_1b8 = (int **)0xe10174;
  if (*(char *)(iVar3 + 0x34) == '\0') {
    ppppcStack_1bc = (char ****)0x713357;
    FUN_00409350();
    uStack_b4 = 0x17;
    ppppcStack_1b4 = (char ****)&ppppcStack_1a4;
    ppiStack_1b8 = (int **)0x713371;
    piVar4 = (int *)(**(code **)(*(int *)in_ECX[8] + 0x34))();
    ppiStack_1b8 = (int **)0x71337d;
    (**(code **)(*piVar4 + 0xbc))();
    uStack_b8 = 0xffffffff;
    if ((char ****)0xf < ppppcStack_194) {
      ppiStack_1b8 = (int **)piStack_1a8;
                    /* WARNING: Subroutine does not return */
      ppppcStack_1bc = (char ****)&UNK_00713398;
      FUN_00aae91b();
    }
    ppiStack_1b8 = (int **)0x10;
    ppppcStack_1bc = (char ****)0xe10184;
    ppppcStack_194 = (char ****)0xf;
    pcStack_198 = (char *)0x0;
    piStack_1a8 = (int *)((uint)piStack_1a8 & 0xffffff00);
    piStack_1c0 = (int *)0x7133ba;
    FUN_00409350();
    uStack_b8 = 0x18;
    ppiStack_1b8 = &piStack_1a8;
    ppppcStack_1bc = (char ****)0x7133d4;
    piVar4 = (int *)(**(code **)(*(int *)in_ECX[8] + 0x34))();
    ppppcStack_1bc = (char ****)0x7133e0;
    (**(code **)(*piVar4 + 0xbc))();
  }
  else {
    ppppcStack_1bc = (char ****)0x7132b1;
    FUN_00409350();
    uStack_b4 = 0x15;
    ppppcStack_1b4 = (char ****)&ppppcStack_1a4;
    ppiStack_1b8 = (int **)0x7132cb;
    iVar3 = (**(code **)(*(int *)in_ECX[8] + 0x34))();
    ppiStack_1b8 = (int **)(in_ECX + 0xb2);
    ppppcStack_1bc = (char ****)0x7132dc;
    (**(code **)(*(int *)(iVar3 + 0x54) + 4))();
    uStack_bc = 0xffffffff;
    if (0xf < pcStack_198) {
      ppppcStack_1bc = (char ****)uStack_1ac;
                    /* WARNING: Subroutine does not return */
      piStack_1c0 = (int *)&UNK_007132f7;
      FUN_00aae91b();
    }
    ppppcStack_1bc = (char ****)0x10;
    piStack_1c0 = (int *)0xe10184;
    pcStack_198 = (char *)0xf;
    ppppcStack_19c = (char ****)0x0;
    uStack_1ac = (char *****)((uint)uStack_1ac & 0xffffff00);
    ppppuStack_1c4 = (undefined4 ****)0x713319;
    FUN_00409350();
    uStack_bc = 0x16;
    ppppcStack_1bc = (char ****)&uStack_1ac;
    piStack_1c0 = (int *)0x713333;
    iVar3 = (**(code **)(*(int *)in_ECX[8] + 0x34))();
    piStack_1c0 = in_ECX + 0x9c;
    ppppuStack_1c4 = (undefined4 ****)0x713344;
    (**(code **)(*(int *)(iVar3 + 0x54) + 4))();
  }
  uStack_c4 = 0xffffffff;
  if ((char *)0xf < pcStack_1a0) {
    ppppuStack_1c4 = (undefined4 ****)ppppcStack_1b4;
                    /* WARNING: Subroutine does not return */
    pcStack_1c8 = &UNK_007133fb;
    FUN_00aae91b();
  }
  ppppcStack_194 = (char ****)in_ECX[200];
  if (ppppcStack_194 != (char ****)0x0) {
    ppppuStack_1c4 = (undefined4 ****)0x713413;
    FUN_006c76f0();
    ppppuStack_1c4 = (undefined4 ****)ppppcStack_194;
                    /* WARNING: Subroutine does not return */
    pcStack_1c8 = &UNK_0071341d;
    FUN_00aae91b();
  }
  ppppuStack_1c4 = (undefined4 ****)0x38;
  pcStack_1c8 = (char *)0x713427;
  pcStack_190 = (char *)FUN_00aae9af();
  uStack_c4 = 0x19;
  if (pcStack_190 == (char *)0x0) {
    iVar3 = 0;
  }
  else {
    ppppuStack_1c4 = (undefined4 ****)0x713444;
    iVar3 = FUN_006c72a0();
  }
  uStack_c4 = 0xffffffff;
  in_ECX[200] = iVar3;
  ppppuStack_1c4 = (undefined4 ****)0x713460;
  cVar2 = FUN_006c9d30();
  ppppuStack_1c4 = (undefined4 ****)0x15;
  pcStack_1a0 = (char *)0xf;
  ppppcStack_1a4 = (char ****)0x0;
  ppppcStack_1b4 = (char ****)((uint)ppppcStack_1b4 & 0xffffff00);
  pcStack_1c8 = "topbar_outlinerbutton";
  if (cVar2 == '\0') {
    ppppuStack_1cc = (undefined4 ****)0x7134d8;
    FUN_00409350();
    uStack_c4 = 0x1b;
    ppppuStack_1c4 = &ppppcStack_1b4;
    pcStack_1c8 = (char *)0x7134f2;
    piVar4 = (int *)(**(code **)(*(int *)in_ECX[8] + 0x34))();
    pcStack_1c8 = (char *)0x1;
    ppppuStack_1cc = (undefined4 ****)0x7134fd;
    (**(code **)(*piVar4 + 0x48))();
    uStack_cc = 0xffffffff;
    if ((int *)0xf < piStack_1a8) {
      ppppuStack_1cc = (undefined4 ****)ppppcStack_1bc;
                    /* WARNING: Subroutine does not return */
      piStack_1d0 = (int *)&UNK_00713518;
      FUN_00aae91b();
    }
  }
  else {
    ppppuStack_1cc = (undefined4 ****)0x713484;
    FUN_00409350();
    uStack_c4 = 0x1a;
    ppppuStack_1c4 = &ppppcStack_1b4;
    pcStack_1c8 = (char *)0x71349e;
    piVar4 = (int *)(**(code **)(*(int *)in_ECX[8] + 0x34))();
    pcStack_1c8 = (char *)0x2;
    ppppuStack_1cc = (undefined4 ****)0x7134a9;
    (**(code **)(*piVar4 + 0x48))();
    uStack_cc = 0xffffffff;
    if ((int *)0xf < piStack_1a8) {
      ppppuStack_1cc = (undefined4 ****)ppppcStack_1bc;
                    /* WARNING: Subroutine does not return */
      piStack_1d0 = (int *)&UNK_007134c4;
      FUN_00aae91b();
    }
    ppppuStack_1cc = (undefined4 ****)0x7134d1;
    (**(code **)(*(int *)in_ECX[8] + 0x2c))();
  }
  ppppuStack_1cc = (undefined4 ****)0x15;
  piStack_1d0 = (int *)0xe10734;
  piStack_1a8 = (int *)0xf;
  uStack_1ac = (char *****)0x0;
  ppppcStack_1bc = (char ****)((uint)ppppcStack_1bc & 0xffffff00);
  FUN_00409350();
  uStack_cc = 0x1c;
  ppppuStack_1cc = &ppppcStack_1bc;
  piStack_1d0 = (int *)0x713555;
  iVar3 = (**(code **)(*(int *)in_ECX[8] + 0x34))();
  piStack_1d0 = in_ECX + 0xbd;
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))();
  uStack_d4 = 0xffffffff;
  if ((int *)0xf < piStack_1b0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(ppppuStack_1c4);
  }
  piStack_1b0 = (int *)0xf;
  ppppcStack_1b4 = (char ****)0x0;
  ppppuStack_1c4 = (undefined4 ****)((uint)ppppuStack_1c4 & 0xffffff00);
  FUN_00409350(&DAT_00e100e0,6);
  uStack_d4 = 0x1d;
  (**(code **)(*(int *)(in_ECX[8] + 0x18) + 0x78))(&ppppuStack_1c4);
  piStack_d8 = (int *)0xffffffff;
  if ((char ****)0xf < ppppcStack_1b4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(pcStack_1c8);
  }
  if (uStack_1ac._3_1_ == '\0') {
    pcVar5 = *(code **)(*in_ECX + 0xc);
  }
  else {
    pcVar5 = *(code **)(*in_ECX + 8);
  }
  (*pcVar5)();
  cVar2 = (**(code **)(*(int *)in_ECX[9] + 0x158))();
  if (cVar2 == '\0') {
    ppppcStack_18c = (char ****)0xf;
    pcStack_190 = (char *)0x0;
    pcStack_1a0 = (char *)((uint)pcStack_1a0 & 0xffffff00);
    FUN_00409350("pause_bg",8);
    piStack_d8 = (int *)0x23;
    piVar4 = (int *)(**(code **)(*(int *)in_ECX[8] + 0x34))(&pcStack_1a0);
    (**(code **)(*piVar4 + 0x48))(2);
    uStack_e0 = 0xffffffff;
    if ((char ****)0xf < ppppcStack_194) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(piStack_1a8);
    }
    ppppcStack_194 = (char ****)0xf;
    pcStack_198 = (char *)0x0;
    piStack_1a8 = (int *)((uint)piStack_1a8 & 0xffffff00);
    FUN_00409350();
    uStack_e0 = 0x24;
    ppppcStack_1bc = (char ****)0xf;
    piStack_1c0 = (int *)0x0;
    piStack_1d0 = (int *)((uint)piStack_1d0 & 0xffffff00);
    FUN_00409350();
    uStack_e0 = CONCAT31(uStack_e0._1_3_,0x25);
    ppppcStack_1b4 = (char ****)(**(code **)(*(int *)in_ECX[8] + 0x34))(&piStack_1d0);
    piStack_1b0 = (int *)FUN_009a8ee0(&stack0xfffffefc,&uStack_1ac);
    uStack_e4 = 0x26;
    iVar3 = FUN_00475500();
    uVar6 = FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c),*(undefined8 *)(iVar3 + 0x74));
    uStack_e4 = 0x27;
    (*(code *)(*ppppcStack_1b4)[0x33])(uVar6,0);
    if ((char ****)0xf < ppppcStack_184) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_ec = CONCAT31(uStack_ec._1_3_,0x25);
  }
  else {
    ppppcStack_1b4 = (char ****)0xf;
    ppiStack_1b8 = (int **)0x0;
    pcStack_1c8 = (char *)((uint)pcStack_1c8 & 0xffffff00);
    FUN_00409350("pause_bg",8);
    piStack_d8 = (int *)0x1e;
    piVar4 = (int *)(**(code **)(*(int *)in_ECX[8] + 0x34))(&pcStack_1c8);
    (**(code **)(*piVar4 + 0x48))(1);
    uStack_e0 = 0xffffffff;
    if ((char ****)0xf < ppppcStack_1bc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(piStack_1d0);
    }
    ppppcStack_194 = (char ****)0xf;
    pcStack_198 = (char *)0x0;
    piStack_1a8 = (int *)((uint)piStack_1a8 & 0xffffff00);
    FUN_00409350();
    uStack_e0 = 0x1f;
    ppppcStack_1bc = (char ****)0xf;
    piStack_1c0 = (int *)0x0;
    piStack_1d0 = (int *)((uint)piStack_1d0 & 0xffffff00);
    FUN_00409350();
    uStack_e0 = CONCAT31(uStack_e0._1_3_,0x20);
    ppppcStack_1b4 = (char ****)(**(code **)(*(int *)in_ECX[8] + 0x34))(&piStack_1d0);
    piStack_1b0 = (int *)FUN_009a8ee0(&stack0xfffffefc,&uStack_1ac);
    uStack_e4 = 0x21;
    iVar3 = FUN_00475500();
    uVar6 = FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c),*(undefined8 *)(iVar3 + 0x74));
    uStack_e4 = 0x22;
    (*(code *)(*ppppcStack_1b4)[0x33])(uVar6,0);
    if ((char ****)0xf < ppppcStack_184) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_ec = CONCAT31(uStack_ec._1_3_,0x20);
  }
  ppppcStack_184 = (char ****)0xf;
  pcStack_188 = (char *)0x0;
  pcStack_198 = (char *)((uint)pcStack_198 & 0xffffff00);
  FUN_009a9740();
  if ((char *)0xf < pcStack_1c8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_ec = 0xffffffff;
  ppppuStack_1cc = (undefined4 ****)0x0;
  pcStack_1c8 = (char *)0xf;
  if ((char *)0xf < pcStack_1a0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ppppcStack_1bc = (char ****)&ppuStack_160;
  ppuStack_160 = (undefined4 **)0xe10a04;
  ppppcStack_15c = (char ****)0xe10a14;
  piStack_158 = (int *)0xe10a24;
  ppppcStack_154 = (char ****)0xe10a34;
  piStack_150 = (int *)0xe10a44;
  ppppcStack_14c = (char ****)0xe10a54;
  piStack_148 = (int *)0xe10c80;
  ppppuStack_144 = (undefined1 ****)0xe10c8c;
  piStack_140 = (int *)0xe10c9c;
  pppuStack_13c = (uint ***)0xe10ca8;
  piStack_138 = (int *)0xe10cb8;
  pppcStack_134 = (char ***)0xe10cc4;
  piStack_130 = (int *)0xe10cd0;
  pppcStack_12c = (char ***)0xe10ce0;
  piStack_128 = (int *)0xe10768;
  pppuStack_124 = (undefined1 ***)0xe1077c;
  piStack_120 = (int *)0xe10790;
  ppuStack_11c = (uint **)0xe107a4;
  piStack_118 = (int *)0xe107b8;
  ppiStack_1b8 = (int **)0x13;
  while( true ) {
    pppcVar1 = *ppppcStack_1bc;
    piStack_168 = (int *)0xf;
    ppppcStack_16c = (char ****)0x0;
    ppppcStack_17c = (char ****)((uint)ppppcStack_17c & 0xffffff00);
    pppcVar7 = pppcVar1;
    do {
      cVar2 = *(char *)pppcVar7;
      pppcVar7 = (char ***)((int)pppcVar7 + 1);
    } while (cVar2 != '\0');
    FUN_00409350(pppcVar1,(int)pppcVar7 - (int)((int)pppcVar1 + 1));
    uStack_ec = 0x28;
    piVar4 = (int *)(**(code **)(*(int *)in_ECX[8] + 0x44))();
    uStack_ec = 0xffffffff;
    if (0xf < piStack_168) break;
    piStack_168 = (int *)0xf;
    ppppcStack_16c = (char ****)0x0;
    ppppcStack_17c = (char ****)((uint)ppppcStack_17c & 0xffffff00);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0x98))();
    }
    ppppcStack_1bc = ppppcStack_1bc + 1;
    ppiStack_1b8 = (int **)((int)ppiStack_1b8 + -1);
    if (ppiStack_1b8 == (int **)0x0) {
      ExceptionList = pvStack_f4;
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

