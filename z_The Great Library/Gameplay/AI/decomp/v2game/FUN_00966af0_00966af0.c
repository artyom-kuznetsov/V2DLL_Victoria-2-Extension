// FUN_00966af0 @ 00966af0 body=[[00966af0, 00966d80] [00966d84, 00966dab] [00966daf, 00966dce] [00966dd2, 00966df7] [00966dfb, 00966e20] [00966e24, 00966e49] [00966e4d, 00966e72] [00966e76, 00966e95] [00966e99, 00966eb5] [00966eb9, 00966ede] [00966ee2, 00966f0b] [00966f0f, 00966f38] [00966f3c, 0096706c] [00967070, 00967091] [00967095, 009670ba] [009670be, 009670e3] [009670e7, 00967109] [0096710d, 00967126] [0096712a, 00967146] [0096714a, 0096716f] [00967173, 0096719b] [0096719f, 009672f2] [009672f6, 00967317] [0096731b, 00967340] [00967344, 00967369] [0096736d, 0096738f] [00967393, 009673af] [009673b3, 009673f4] [009673f8, 0096745d] [00967461, 00967481] [00967485, 009674d8] [009674dc, 0096753d] [00967541, 0096755b] [0096755f, 0096769c] [009676a0, 009676c1] [009676c5, 009676ea] [009676ee, 00967713] [00967717, 00967739] [0096773d, 0096775c] [00967760, 0096777f] [00967783, 00967798]]


/* WARNING: Removing unreachable block (ram,0x009671c6) */

undefined1 * FUN_00966af0(int param_1,undefined1 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uStack_1ac;
  uint *puStack_1a4;
  uint *puStack_1a0;
  undefined4 local_18c [5];
  uint local_178;
  uint local_170 [4];
  undefined4 local_160;
  uint local_15c;
  uint local_154;
  undefined4 local_144;
  uint local_140;
  uint local_138 [4];
  undefined4 local_128;
  uint local_124;
  uint local_11c [4];
  undefined4 local_10c;
  uint local_108;
  uint local_100 [4];
  undefined4 local_f0;
  uint local_ec;
  uint local_e4 [4];
  undefined4 local_d4;
  uint local_d0;
  uint local_c8;
  undefined4 local_b8;
  uint local_b4;
  uint local_ac [4];
  undefined4 local_9c;
  uint local_98;
  uint local_90 [4];
  undefined4 local_80;
  uint local_7c;
  undefined8 local_74;
  undefined1 *local_68;
  int local_64;
  uint local_60 [4];
  undefined4 local_50;
  uint local_4c;
  uint *local_44;
  uint uStack_40;
  uint local_3c [4];
  undefined4 local_2c;
  uint local_28;
  undefined *local_20;
  uint *local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00b6455c;
  local_10 = ExceptionList;
  local_64 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(*(int *)(param_1 + 100) + 300) * 4);
  ExceptionList = &local_10;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *param_2 = 0;
  local_8 = 0;
  puVar3 = *(uint **)(DAT_012586dc + 0x50);
  local_1c = (uint *)*puVar3;
  local_18 = puVar3[1];
  local_44 = (uint *)puVar3[2];
  uStack_40 = puVar3[3];
  uVar1 = *(uint *)(*(int *)(param_1 + 100) + 0x1bc);
  uVar2 = *(uint *)(*(int *)(param_1 + 100) + 0x1a8);
  local_74._4_4_ = uVar1 >> 0x11;
  puStack_1a0 = (uint *)(uVar2 >> 0x11);
  local_74._0_4_ = uVar1 << 0xf;
  puStack_1a4 = (uint *)(uVar2 << 0xf);
  local_14 = 1;
  if ((puStack_1a0 != (uint *)0x0) || (puStack_1a4 != (uint *)0x0)) {
    uStack_1ac._4_4_ = (uint *)(local_74._4_4_ << 0xf | (uVar1 & 0x1ffff) >> 2);
    uStack_1ac._0_4_ = (char *)(uVar1 << 0x1e);
    local_74 = __alldiv();
  }
  if (*(int **)(param_1 + 100) == (int *)0x0) {
    puStack_1a0 = (uint *)0x1;
    puStack_1a4 = (uint *)&DAT_00ded974;
    local_28 = 0xf;
    local_2c = 0;
    local_3c[0] = local_3c[0] & 0xffffff00;
    uStack_1ac._4_4_ = (uint *)0x966bfd;
    FUN_00409350();
    local_8 = 2;
    puVar3 = local_3c;
    local_14 = 5;
  }
  else {
    puStack_1a0 = local_18c;
    puStack_1a4 = (uint *)0x966bd3;
    puVar3 = (uint *)(**(code **)(**(int **)(param_1 + 100) + 0x1c))();
    local_8 = 1;
    local_14 = 3;
  }
  puStack_1a0 = (uint *)0x2;
  puStack_1a4 = (uint *)&DAT_00dedc20;
  local_108 = 0xf;
  local_10c = 0;
  local_11c[0] = local_11c[0] & 0xffffff00;
  uStack_1ac._4_4_ = (uint *)0x966c32;
  FUN_00409350();
  local_8 = 3;
  puStack_1a0 = (uint *)0x2;
  puStack_1a4 = (uint *)&DAT_00df8518;
  local_ec = 0xf;
  local_f0 = 0;
  local_100[0] = local_100[0] & 0xffffff00;
  uStack_1ac._4_4_ = (uint *)0x966c5d;
  FUN_00409350();
  local_8._0_1_ = 4;
  puStack_1a4 = (uint *)0x966c70;
  puStack_1a0 = puVar3;
  FUN_00988f20();
  puStack_1a0 = local_11c;
  local_8._0_1_ = 5;
  puStack_1a4 = (uint *)0x966c88;
  local_20 = (undefined *)FUN_00988f20();
  local_8._0_1_ = 6;
  puStack_1a0 = (uint *)0x2;
  puStack_1a4 = (uint *)&DAT_00df8514;
  local_15c = 0xf;
  local_160 = 0;
  local_170[0] = local_170[0] & 0xffffff00;
  uStack_1ac._4_4_ = (uint *)0x966cb3;
  FUN_00409350();
  puStack_1a0 = (uint *)0x1;
  puStack_1a4 = (uint *)0x2;
  local_68 = (undefined1 *)&uStack_1ac;
  local_8._0_1_ = 7;
  uStack_1ac = local_74;
  uVar4 = FUN_009c80d0(local_ac);
  local_8._0_1_ = 8;
  puStack_1a0 = (uint *)0x2;
  puStack_1a4 = (uint *)&DAT_00df8518;
  local_140 = 0xf;
  local_144 = 0;
  local_154 = local_154 & 0xffffff00;
  uStack_1ac._4_4_ = (uint *)0x966d07;
  FUN_00409350();
  local_8._0_1_ = 9;
  puStack_1a4 = (uint *)0x966d1d;
  puStack_1a0 = (uint *)uVar4;
  FUN_00988f20();
  puStack_1a0 = local_170;
  local_8._0_1_ = 10;
  puStack_1a4 = (uint *)0x966d35;
  uStack_1ac._4_4_ = (uint *)FUN_00988f20();
  local_8._0_1_ = 0xb;
  puStack_1a0 = (uint *)local_20;
  puStack_1a4 = (uint *)&DAT_00df8310;
  uStack_1ac._0_4_ = &DAT_00df7e7c;
  uStack_1ac._4_4_ = (uint *)FUN_0043ec10(local_138);
  puStack_1a0 = (uint *)0xffffffff;
  puStack_1a4 = (uint *)0x0;
  local_8 = CONCAT31(local_8._1_3_,0xc);
  uStack_1ac._0_4_ = (char *)0x966d6c;
  FUN_00448aa0();
  if (0xf < local_124) {
    puStack_1a0 = (uint *)local_138[0];
                    /* WARNING: Subroutine does not return */
    puStack_1a4 = (uint *)&UNK_00966d81;
    FUN_00aae91b();
  }
  local_124 = 0xf;
  local_128 = 0;
  local_138[0] = local_138[0] & 0xffffff00;
  if (0xf < local_7c) {
    puStack_1a0 = (uint *)local_90[0];
                    /* WARNING: Subroutine does not return */
    puStack_1a4 = (uint *)&UNK_00966dac;
    FUN_00aae91b();
  }
  local_7c = 0xf;
  local_80 = 0;
  local_90[0] = local_90[0] & 0xffffff00;
  if (0xf < local_b4) {
    puStack_1a0 = (uint *)local_c8;
                    /* WARNING: Subroutine does not return */
    puStack_1a4 = (uint *)&UNK_00966dcf;
    FUN_00aae91b();
  }
  local_b4 = 0xf;
  local_b8 = 0;
  local_c8 = local_c8 & 0xffffff00;
  if (0xf < local_140) {
    puStack_1a0 = (uint *)local_154;
                    /* WARNING: Subroutine does not return */
    puStack_1a4 = (uint *)&UNK_00966df8;
    FUN_00aae91b();
  }
  local_140 = 0xf;
  local_144 = 0;
  local_154 = local_154 & 0xffffff00;
  if (0xf < local_98) {
    puStack_1a0 = (uint *)local_ac[0];
                    /* WARNING: Subroutine does not return */
    puStack_1a4 = (uint *)&UNK_00966e21;
    FUN_00aae91b();
  }
  local_98 = 0xf;
  local_9c = 0;
  local_ac[0] = local_ac[0] & 0xffffff00;
  if (0xf < local_15c) {
    puStack_1a0 = (uint *)local_170[0];
                    /* WARNING: Subroutine does not return */
    puStack_1a4 = (uint *)&UNK_00966e4a;
    FUN_00aae91b();
  }
  local_15c = 0xf;
  local_160 = 0;
  local_170[0] = local_170[0] & 0xffffff00;
  if (0xf < local_d0) {
    puStack_1a0 = (uint *)local_e4[0];
                    /* WARNING: Subroutine does not return */
    puStack_1a4 = (uint *)&UNK_00966e73;
    FUN_00aae91b();
  }
  local_d0 = 0xf;
  local_d4 = 0;
  local_e4[0] = local_e4[0] & 0xffffff00;
  if (0xf < local_4c) {
    puStack_1a0 = (uint *)local_60[0];
                    /* WARNING: Subroutine does not return */
    puStack_1a4 = (uint *)&UNK_00966e96;
    FUN_00aae91b();
  }
  local_4c = 0xf;
  local_50 = 0;
  local_60[0] = local_60[0] & 0xffffff00;
  if (0xf < local_ec) {
    puStack_1a0 = (uint *)local_100[0];
                    /* WARNING: Subroutine does not return */
    puStack_1a4 = (uint *)&UNK_00966eb6;
    FUN_00aae91b();
  }
  local_ec = 0xf;
  local_f0 = 0;
  uVar1 = local_100[0] >> 8;
  local_100[0] = uVar1 << 8;
  if (0xf < local_108) {
    puStack_1a0 = (uint *)local_11c[0];
                    /* WARNING: Subroutine does not return */
    puStack_1a4 = (uint *)&UNK_00966edf;
    FUN_00aae91b();
  }
  local_108 = 0xf;
  local_10c = 0;
  local_11c[0] = local_11c[0] & 0xffffff00;
  if ((local_14 & 4) != 0) {
    local_14 = local_14 & 0xfffffffb;
    if (0xf < local_28) {
      puStack_1a0 = (uint *)local_3c[0];
                    /* WARNING: Subroutine does not return */
      puStack_1a4 = (uint *)&UNK_00966f0c;
      FUN_00aae91b();
    }
    local_28 = 0xf;
    local_2c = 0;
    local_3c[0] = local_3c[0] & 0xffffff00;
  }
  local_8 = 0;
  if (((local_14 & 2) != 0) && (local_14 = local_14 & 0xfffffffd, 0xf < local_178)) {
    puStack_1a0 = (uint *)local_18c[0];
                    /* WARNING: Subroutine does not return */
    puStack_1a4 = (uint *)&UNK_00966f39;
    FUN_00aae91b();
  }
  puStack_1a0 = (uint *)0x1;
  puStack_1a4 = (uint *)&DAT_00dee2cc;
  local_ec = 0xf;
  local_f0 = 0;
  local_100[0] = uVar1 << 8;
  uStack_1ac._4_4_ = (uint *)0x966f60;
  FUN_00409350();
  local_8 = 0xd;
  puStack_1a0 = (uint *)0x3;
  puStack_1a4 = (uint *)&DAT_00df8544;
  local_108 = 0xf;
  local_10c = 0;
  local_11c[0] = local_11c[0] & 0xffffff00;
  uStack_1ac._4_4_ = (uint *)0x966f8b;
  FUN_00409350();
  local_8._0_1_ = 0xe;
  puStack_1a0 = (uint *)0x2;
  puStack_1a4 = local_138;
  local_20 = (undefined *)(float)((float10)CONCAT44(uStack_40,local_44) * (float10)3.0517578125e-05)
  ;
  uStack_1ac._4_4_ = (uint *)0x966fbd;
  uVar4 = FUN_00988d00();
  local_8._0_1_ = 0xf;
  puStack_1a0 = (uint *)0x2;
  puStack_1a4 = (uint *)&DAT_00df963c;
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  uStack_1ac._4_4_ = (uint *)0x966fdb;
  FUN_00409350();
  local_8._0_1_ = 0x10;
  puStack_1a4 = (uint *)0x966fee;
  puStack_1a0 = (uint *)uVar4;
  FUN_00988f20();
  puStack_1a0 = local_11c;
  local_8._0_1_ = 0x11;
  puStack_1a4 = (uint *)0x967006;
  puStack_1a0 = (uint *)FUN_00988f20();
  puStack_1a4 = local_ac;
  local_8._0_1_ = 0x12;
  uStack_1ac._4_4_ = (uint *)0x967021;
  uStack_1ac._4_4_ = (uint *)FUN_0042c180();
  local_8._0_1_ = 0x13;
  uStack_1ac._0_4_ = (char *)0x967036;
  FUN_00988fa0();
  puStack_1a0 = local_100;
  local_8._0_1_ = 0x14;
  puStack_1a4 = (uint *)0x96704e;
  uStack_1ac._4_4_ = (uint *)FUN_00988f20();
  puStack_1a0 = (uint *)0xffffffff;
  puStack_1a4 = (uint *)0x0;
  local_8._0_1_ = 0x15;
  uStack_1ac._0_4_ = (char *)0x96705e;
  FUN_00448aa0();
  if (0xf < local_4c) {
    puStack_1a0 = (uint *)local_60[0];
                    /* WARNING: Subroutine does not return */
    puStack_1a4 = (uint *)&UNK_0096706d;
    FUN_00aae91b();
  }
  local_4c = 0xf;
  local_50 = 0;
  local_60[0] = local_60[0] & 0xffffff00;
  if (0xf < local_d0) {
    puStack_1a0 = (uint *)local_e4[0];
                    /* WARNING: Subroutine does not return */
    puStack_1a4 = (uint *)&UNK_00967092;
    FUN_00aae91b();
  }
  local_d0 = 0xf;
  local_d4 = 0;
  local_e4[0] = local_e4[0] & 0xffffff00;
  if (0xf < local_98) {
    puStack_1a0 = (uint *)local_ac[0];
                    /* WARNING: Subroutine does not return */
    puStack_1a4 = (uint *)&UNK_009670bb;
    FUN_00aae91b();
  }
  local_98 = 0xf;
  local_9c = 0;
  local_ac[0] = local_ac[0] & 0xffffff00;
  if (0xf < local_b4) {
    puStack_1a0 = (uint *)local_c8;
                    /* WARNING: Subroutine does not return */
    puStack_1a4 = (uint *)&UNK_009670e4;
    FUN_00aae91b();
  }
  local_b4 = 0xf;
  local_b8 = 0;
  local_c8 = local_c8 & 0xffffff00;
  if (0xf < local_7c) {
    puStack_1a0 = (uint *)local_90[0];
                    /* WARNING: Subroutine does not return */
    puStack_1a4 = (uint *)&UNK_0096710a;
    FUN_00aae91b();
  }
  local_7c = 0xf;
  local_80 = 0;
  local_90[0] = local_90[0] & 0xffffff00;
  if (0xf < local_28) {
    puStack_1a0 = (uint *)local_3c[0];
                    /* WARNING: Subroutine does not return */
    puStack_1a4 = (uint *)&UNK_00967127;
    FUN_00aae91b();
  }
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  if (0xf < local_124) {
    puStack_1a0 = (uint *)local_138[0];
                    /* WARNING: Subroutine does not return */
    puStack_1a4 = (uint *)&UNK_00967147;
    FUN_00aae91b();
  }
  local_124 = 0xf;
  local_128 = 0;
  local_138[0] = local_138[0] & 0xffffff00;
  if (0xf < local_108) {
    puStack_1a0 = (uint *)local_11c[0];
                    /* WARNING: Subroutine does not return */
    puStack_1a4 = (uint *)&UNK_00967170;
    FUN_00aae91b();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  local_108 = 0xf;
  local_10c = 0;
  local_11c[0] = local_11c[0] & 0xffffff00;
  if (0xf < local_ec) {
    puStack_1a0 = (uint *)local_100[0];
                    /* WARNING: Subroutine does not return */
    puStack_1a4 = (uint *)&UNK_0096719c;
    FUN_00aae91b();
  }
  uStack_1ac = local_74 - CONCAT44(local_18,local_1c);
  local_ec = 0xf;
  local_f0 = 0;
  local_100[0] = local_100[0] & 0xffffff00;
  if (CONCAT44(uStack_40,local_44) < uStack_1ac) {
    uStack_1ac = CONCAT44(uStack_40,local_44);
  }
  puStack_1a4 = (uint *)((int)local_44 - (int)local_1c);
  puStack_1a0 = (uint *)((uStack_40 - local_18) - (uint)(local_44 < local_1c));
  puVar3 = *(uint **)(*(int *)(DAT_012586dc + 0x50) + 0x10);
  uStack_40 = *(undefined4 *)(*(int *)(DAT_012586dc + 0x50) + 0x14);
  uStack_1ac = uStack_1ac << 0xf;
  local_44 = puStack_1a4;
  local_1c = puStack_1a4;
  local_18 = (uint)puStack_1a0;
  uVar5 = __alldiv();
  puStack_1a0 = (uint *)uStack_40;
  puStack_1a4 = puVar3;
  uStack_1ac = uVar5;
  lVar6 = __allmul();
  lVar6 = lVar6 >> 0xf;
  local_1c = (uint *)lVar6;
  puStack_1a0 = (uint *)0x3;
  puStack_1a4 = (uint *)&DAT_00e025cc;
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  uStack_1ac._4_4_ = (uint *)0x967239;
  FUN_00409350();
  local_8 = 0x16;
  if ((lVar6 < 0) || ((lVar6 < 0x100000000 && (local_1c == (uint *)0x0)))) {
    local_20 = &DAT_00dfc938;
  }
  else {
    local_20 = &DAT_00e00658;
  }
  puStack_1a4 = local_1c;
  uStack_1ac._4_4_ = (uint *)0x4;
  uStack_1ac._0_4_ = (char *)local_90;
  puStack_1a0 = (uint *)(int)((ulonglong)lVar6 >> 0x20);
  local_68 = (undefined1 *)&puStack_1a4;
  puStack_1a0 = (uint *)FUN_00988bb0();
  local_8._0_1_ = 0x17;
  puStack_1a4 = (uint *)0x96728c;
  FUN_00988fa0();
  puStack_1a0 = local_3c;
  local_8._0_1_ = 0x18;
  puStack_1a4 = (uint *)0x9672a4;
  puStack_1a0 = (uint *)FUN_00988f20();
  puStack_1a4 = local_e4;
  local_8._0_1_ = 0x19;
  uStack_1ac._4_4_ = (uint *)0x9672bf;
  uStack_1ac._4_4_ = (uint *)FUN_0042c180();
  local_8._0_1_ = 0x1a;
  uStack_1ac._0_4_ = (char *)0x9672d1;
  uStack_1ac._4_4_ = (uint *)FUN_00988fa0();
  puStack_1a0 = (uint *)0xffffffff;
  puStack_1a4 = (uint *)0x0;
  local_8._0_1_ = 0x1b;
  uStack_1ac._0_4_ = (char *)0x9672e4;
  FUN_00448aa0();
  if (0xf < local_4c) {
    puStack_1a0 = (uint *)local_60[0];
                    /* WARNING: Subroutine does not return */
    puStack_1a4 = (uint *)&UNK_009672f3;
    FUN_00aae91b();
  }
  local_4c = 0xf;
  local_50 = 0;
  local_60[0] = local_60[0] & 0xffffff00;
  if (0xf < local_d0) {
    puStack_1a0 = (uint *)local_e4[0];
                    /* WARNING: Subroutine does not return */
    puStack_1a4 = (uint *)&UNK_00967318;
    FUN_00aae91b();
  }
  local_d0 = 0xf;
  local_d4 = 0;
  local_e4[0] = local_e4[0] & 0xffffff00;
  if (0xf < local_98) {
    puStack_1a0 = (uint *)local_ac[0];
                    /* WARNING: Subroutine does not return */
    puStack_1a4 = (uint *)&UNK_00967341;
    FUN_00aae91b();
  }
  local_98 = 0xf;
  local_9c = 0;
  local_ac[0] = local_ac[0] & 0xffffff00;
  if (0xf < local_b4) {
    puStack_1a0 = (uint *)local_c8;
                    /* WARNING: Subroutine does not return */
    puStack_1a4 = (uint *)&UNK_0096736a;
    FUN_00aae91b();
  }
  local_b4 = 0xf;
  local_b8 = 0;
  local_c8 = local_c8 & 0xffffff00;
  if (0xf < local_7c) {
    puStack_1a0 = (uint *)local_90[0];
                    /* WARNING: Subroutine does not return */
    puStack_1a4 = (uint *)&UNK_00967390;
    FUN_00aae91b();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  local_7c = 0xf;
  local_80 = 0;
  local_90[0] = local_90[0] & 0xffffff00;
  if (0xf < local_28) {
    puStack_1a0 = (uint *)local_3c[0];
                    /* WARNING: Subroutine does not return */
    puStack_1a4 = (uint *)&UNK_009673b0;
    FUN_00aae91b();
  }
  puStack_1a0 = (uint *)0x1;
  puStack_1a4 = (uint *)&DAT_00dee2cc;
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  uStack_1ac._4_4_ = (uint *)0x9673cb;
  FUN_00409350();
  puStack_1a0 = (uint *)0xffffffff;
  local_8 = 0x1c;
  puStack_1a4 = (uint *)0x0;
  uStack_1ac._4_4_ = local_3c;
  uStack_1ac._0_4_ = (char *)0x9673e3;
  FUN_00448aa0();
  local_8 = local_8 & 0xffffff00;
  if (0xf < local_28) {
    puStack_1a0 = (uint *)local_3c[0];
                    /* WARNING: Subroutine does not return */
    puStack_1a4 = (uint *)&UNK_009673f5;
    FUN_00aae91b();
  }
  puStack_1a4 = *(uint **)(*(int *)(local_64 + 0xbcc) + 100);
  puStack_1a0 = (uint *)0x1;
  uStack_1ac._4_4_ = local_18c;
  uStack_1ac._0_4_ = (char *)0x96741f;
  local_68 = (undefined1 *)&puStack_1a4;
  puStack_1a0 = (uint *)FUN_009c8c30();
  puStack_1a4 = local_60;
  local_8 = 0x1d;
  uStack_1ac._4_4_ = (uint *)0x96743d;
  uStack_1ac._4_4_ = (uint *)FUN_0042c180();
  puStack_1a0 = (uint *)0xffffffff;
  puStack_1a4 = (uint *)0x0;
  local_8._0_1_ = 0x1e;
  uStack_1ac._0_4_ = (char *)0x96744f;
  FUN_00448aa0();
  if (0xf < local_4c) {
    puStack_1a0 = (uint *)local_60[0];
                    /* WARNING: Subroutine does not return */
    puStack_1a4 = (uint *)&UNK_0096745e;
    FUN_00aae91b();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  local_4c = 0xf;
  local_50 = 0;
  local_60[0] = local_60[0] & 0xffffff00;
  if (0xf < local_178) {
    puStack_1a0 = (uint *)local_18c[0];
                    /* WARNING: Subroutine does not return */
    puStack_1a4 = (uint *)&UNK_00967482;
    FUN_00aae91b();
  }
  if (*(int *)(*(int *)(local_64 + 0xa60) + 0x370) != 0) {
    puStack_1a0 = (uint *)0x1;
    puStack_1a4 = (uint *)&DAT_00dee2cc;
    local_28 = 0xf;
    local_2c = 0;
    local_3c[0] = local_3c[0] & 0xffffff00;
    uStack_1ac._4_4_ = (uint *)0x9674b2;
    FUN_00409350();
    puStack_1a0 = (uint *)0xffffffff;
    puStack_1a4 = (uint *)0x0;
    uStack_1ac._4_4_ = local_3c;
    local_8 = 0x1f;
    uStack_1ac._0_4_ = (char *)0x9674c7;
    FUN_00448aa0();
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_28) {
      puStack_1a0 = (uint *)local_3c[0];
                    /* WARNING: Subroutine does not return */
      puStack_1a4 = (uint *)&UNK_009674d9;
      FUN_00aae91b();
    }
    puStack_1a0 = (uint *)0x0;
    puStack_1a4 = (uint *)&DAT_00ded94d;
    local_28 = 0xf;
    local_2c = 0;
    local_3c[0] = local_3c[0] & 0xffffff00;
    uStack_1ac._4_4_ = (uint *)0x9674f3;
    FUN_00409350();
    puStack_1a0 = local_3c;
    local_8 = 0x20;
    puStack_1a4 = (uint *)0x3e8;
    uStack_1ac._4_4_ = (uint *)0x6e;
    uStack_1ac._0_4_ = (char *)local_60;
    local_68 = (undefined1 *)&puStack_1a4;
    uStack_1ac._4_4_ = (uint *)(**(code **)(*(int *)(local_64 + 0xa48) + 0x24))();
    puStack_1a0 = (uint *)0xffffffff;
    puStack_1a4 = (uint *)0x0;
    local_8._0_1_ = 0x21;
    uStack_1ac._0_4_ = (char *)0x96752f;
    FUN_00448aa0();
    if (0xf < local_4c) {
      puStack_1a0 = (uint *)local_60[0];
                    /* WARNING: Subroutine does not return */
      puStack_1a4 = (uint *)&UNK_0096753e;
      FUN_00aae91b();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_4c = 0xf;
    local_50 = 0;
    local_60[0] = local_60[0] & 0xffffff00;
    if (0xf < local_28) {
      puStack_1a0 = (uint *)local_3c[0];
                    /* WARNING: Subroutine does not return */
      puStack_1a4 = (uint *)&UNK_0096755c;
      FUN_00aae91b();
    }
  }
  local_4c = 0xf;
  local_50 = 0;
  puStack_1a0 = (uint *)param_1;
  puStack_1a4 = (uint *)0x96756b;
  FUN_009659f0();
  uVar4 = *(undefined4 *)(**(int **)(local_64 + 0x1234) + 0x10);
  uStack_40 = *(undefined4 *)(**(int **)(local_64 + 0x1234) + 0x14);
  puStack_1a0 = (uint *)0x4;
  puStack_1a4 = (uint *)&DAT_00e36400;
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  uStack_1ac._4_4_ = (uint *)0x96759a;
  local_44 = (uint *)uVar4;
  FUN_00409350();
  local_8 = 0x22;
  puStack_1a0 = (uint *)local_18;
  puStack_1a4 = local_1c;
  uStack_1ac._4_4_ = (uint *)uStack_40;
  uStack_1ac._0_4_ = (char *)uVar4;
  lVar6 = __allmul();
  puStack_1a0 = (uint *)0x1;
  puStack_1a4 = (uint *)0x2;
  uStack_1ac = (lVar6 >> 0xf) - CONCAT44(local_18,local_1c);
  local_20 = (undefined *)FUN_009c80d0(local_138);
  local_8._0_1_ = 0x23;
  puStack_1a0 = (uint *)0x1;
  puStack_1a4 = local_90;
  uStack_1ac._4_4_ = (uint *)0x967615;
  puStack_1a0 = (uint *)FUN_00988d00();
  local_8._0_1_ = 0x24;
  puStack_1a4 = (uint *)0x96762a;
  FUN_00988fa0();
  puStack_1a0 = local_3c;
  local_8._0_1_ = 0x25;
  puStack_1a4 = (uint *)0x967642;
  uStack_1ac._4_4_ = (uint *)FUN_00988f20();
  puStack_1a0 = (uint *)local_20;
  puStack_1a4 = (uint *)&DAT_00df7e90;
  uStack_1ac._0_4_ = "SETTING";
  local_8._0_1_ = 0x26;
  puStack_1a0 = (uint *)FUN_0043ec10(local_e4);
  local_8._0_1_ = 0x27;
  puStack_1a4 = (uint *)0x96767b;
  uStack_1ac._4_4_ = (uint *)FUN_00988fa0();
  puStack_1a0 = (uint *)0xffffffff;
  puStack_1a4 = (uint *)0x0;
  local_8 = CONCAT31(local_8._1_3_,0x28);
  uStack_1ac._0_4_ = (char *)0x96768e;
  FUN_00448aa0();
  if (0xf < local_4c) {
    puStack_1a0 = (uint *)local_60[0];
                    /* WARNING: Subroutine does not return */
    puStack_1a4 = (uint *)&UNK_0096769d;
    FUN_00aae91b();
  }
  local_4c = 0xf;
  local_50 = 0;
  local_60[0] = local_60[0] & 0xffffff00;
  if (0xf < local_d0) {
    puStack_1a0 = (uint *)local_e4[0];
                    /* WARNING: Subroutine does not return */
    puStack_1a4 = (uint *)&UNK_009676c2;
    FUN_00aae91b();
  }
  local_d0 = 0xf;
  local_d4 = 0;
  local_e4[0] = local_e4[0] & 0xffffff00;
  if (0xf < local_98) {
    puStack_1a0 = (uint *)local_ac[0];
                    /* WARNING: Subroutine does not return */
    puStack_1a4 = (uint *)&UNK_009676eb;
    FUN_00aae91b();
  }
  local_98 = 0xf;
  local_9c = 0;
  local_ac[0] = local_ac[0] & 0xffffff00;
  if (0xf < local_b4) {
    puStack_1a0 = (uint *)local_c8;
                    /* WARNING: Subroutine does not return */
    puStack_1a4 = (uint *)&UNK_00967714;
    FUN_00aae91b();
  }
  local_b4 = 0xf;
  local_b8 = 0;
  local_c8 = local_c8 & 0xffffff00;
  if (0xf < local_7c) {
    puStack_1a0 = (uint *)local_90[0];
                    /* WARNING: Subroutine does not return */
    puStack_1a4 = (uint *)&UNK_0096773a;
    FUN_00aae91b();
  }
  local_7c = 0xf;
  local_80 = 0;
  local_90[0] = local_90[0] & 0xffffff00;
  if (0xf < local_124) {
    puStack_1a0 = (uint *)local_138[0];
                    /* WARNING: Subroutine does not return */
    puStack_1a4 = (uint *)&UNK_0096775d;
    FUN_00aae91b();
  }
  local_124 = 0xf;
  local_128 = 0;
  local_138[0] = local_138[0] & 0xffffff00;
  if (0xf < local_28) {
    puStack_1a0 = (uint *)local_3c[0];
                    /* WARNING: Subroutine does not return */
    puStack_1a4 = (uint *)&UNK_00967780;
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_2;
}

