// FUN_005b70c0 @ 005b70c0 body=[[005b70c0, 005b743f] [005b7443, 005b7472] [005b7476, 005b74a0] [005b74a4, 005b74ce] [005b74d2, 005b74fc] [005b7500, 005b752a] [005b752e, 005b7558] [005b755c, 005b7586] [005b758a, 005b75b4] [005b75b8, 005b75e2] [005b75e6, 005b7610] [005b7614, 005b763e] [005b7642, 005b766c] [005b7670, 005b769a] [005b769e, 005b76c2] [005b76c6, 005b76e4] [005b76e8, 005b7706] [005b770a, 005b7725] [005b7729, 005b774a] [005b774e, 005b7767]]


undefined4 FUN_005b70c0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint *local_250;
  uint *puStack_24c;
  uint local_230 [4];
  undefined4 local_220;
  uint local_21c;
  uint local_214 [4];
  undefined4 local_204;
  uint local_200;
  uint local_1f8 [4];
  undefined4 local_1e8;
  uint local_1e4;
  uint local_1dc [4];
  undefined4 local_1cc;
  uint local_1c8;
  undefined1 *local_1c0;
  uint local_1bc [4];
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
  uint local_130 [4];
  undefined4 local_120;
  uint local_11c;
  uint local_114;
  undefined4 local_104;
  uint local_100;
  uint local_f8 [4];
  undefined4 local_e8;
  uint local_e4;
  uint local_dc [4];
  undefined4 local_cc;
  uint local_c8;
  uint local_c0;
  undefined4 local_b0;
  uint local_ac;
  uint local_a4;
  undefined4 local_94;
  uint local_90;
  uint local_88 [4];
  undefined4 local_78;
  uint local_74;
  uint local_6c;
  undefined4 local_5c;
  uint local_58;
  uint local_50;
  undefined4 local_40;
  uint local_3c;
  uint local_34;
  undefined4 local_24;
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b71f25;
  local_14 = ExceptionList;
  puStack_24c = (uint *)0x3;
  local_250 = (uint *)&DAT_00e025cc;
  local_1a8 = 0xf;
  local_1ac = 0;
  local_1bc[0] = local_1bc[0] & 0xffffff00;
  ExceptionList = &local_14;
  FUN_00409350();
  local_c = 0;
  puStack_24c = (uint *)0x1;
  local_250 = (uint *)&DAT_00dee2cc;
  local_1e4 = 0xf;
  local_1e8 = 0;
  local_1f8[0] = local_1f8[0] & 0xffffff00;
  FUN_00409350();
  local_c._0_1_ = 1;
  puStack_24c = (uint *)0x3;
  local_250 = (uint *)&DAT_00e025cc;
  local_200 = 0xf;
  local_204 = 0;
  local_214[0] = local_214[0] & 0xffffff00;
  FUN_00409350();
  local_c._0_1_ = 2;
  puStack_24c = (uint *)0x1;
  local_250 = (uint *)&DAT_00dee2cc;
  local_1c8 = 0xf;
  local_1cc = 0;
  local_1dc[0] = local_1dc[0] & 0xffffff00;
  FUN_00409350();
  local_c._0_1_ = 3;
  puStack_24c = (uint *)0x1;
  local_250 = (uint *)&DAT_00df9644;
  local_21c = 0xf;
  local_220 = 0;
  local_230[0] = local_230[0] & 0xffffff00;
  FUN_00409350();
  local_c._0_1_ = 4;
  puStack_24c = (uint *)0x0;
  local_250 = (uint *)0x3e8;
  iVar1 = __alldiv((longlong)*(int *)(param_1 + 0xd8) *
                   (longlong)*(int *)(*(int *)(DAT_012586dc + 0x20) + 0x4c));
  puStack_24c = (uint *)0x2;
  FUN_00401000();
  iVar2 = FUN_00b31c00();
  local_250 = (uint *)__alldiv((longlong)iVar2 * (longlong)iVar1,1000,0);
  puStack_24c = (uint *)FUN_00988a50();
  local_c._0_1_ = 5;
  local_250 = (uint *)0x5b723d;
  FUN_00988fa0();
  puStack_24c = local_1bc;
  local_c._0_1_ = 6;
  local_250 = (uint *)0x5b725e;
  puStack_24c = (uint *)FUN_00988f20();
  local_250 = local_dc;
  local_c._0_1_ = 7;
  uVar3 = FUN_0042c180();
  local_c._0_1_ = 8;
  puStack_24c = (uint *)0x0;
  local_250 = (uint *)0x3e8;
  local_250 = (uint *)__alldiv((longlong)*(int *)(param_1 + 0xd8) *
                               (longlong)*(int *)(*(int *)(DAT_012586dc + 0x20) + 0x48));
  puStack_24c = (uint *)0x2;
  local_1c0 = (undefined1 *)&local_250;
  local_250 = (uint *)__alldiv((longlong)iVar2 * (longlong)(int)local_250,1000,0);
  puStack_24c = (uint *)FUN_00988a50();
  local_c._0_1_ = 9;
  local_250 = (uint *)0x5b72f8;
  FUN_00988fa0();
  puStack_24c = local_214;
  local_c._0_1_ = 10;
  local_250 = (uint *)0x5b7316;
  puStack_24c = (uint *)FUN_00988f20();
  local_250 = local_88;
  local_c._0_1_ = 0xb;
  uVar4 = FUN_0042c180();
  local_c._0_1_ = 0xc;
  puStack_24c = (uint *)0x2;
  local_250 = local_f8;
  FUN_00988d00();
  puStack_24c = local_230;
  local_c._0_1_ = 0xd;
  local_250 = (uint *)0x5b739a;
  puStack_24c = (uint *)FUN_00988f20();
  local_250 = local_130;
  local_c._0_1_ = 0xe;
  FUN_0042c180();
  puStack_24c = local_1dc;
  local_c._0_1_ = 0xf;
  local_250 = (uint *)0x5b73d8;
  FUN_00988f20();
  local_c._0_1_ = 0x10;
  local_250 = (uint *)0x5b73f3;
  puStack_24c = (uint *)uVar4;
  FUN_00988f20();
  puStack_24c = local_1f8;
  local_c._0_1_ = 0x11;
  local_250 = (uint *)0x5b740e;
  FUN_00988f20();
  local_c = CONCAT31(local_c._1_3_,0x12);
  local_250 = (uint *)0x5b7425;
  puStack_24c = (uint *)uVar3;
  FUN_00988f20();
  if (0xf < local_ac) {
    puStack_24c = (uint *)local_c0;
                    /* WARNING: Subroutine does not return */
    local_250 = (uint *)&UNK_005b7440;
    FUN_00aae91b();
  }
  local_ac = 0xf;
  local_b0 = 0;
  local_c0 = local_c0 & 0xffffff00;
  if (0xf < local_154) {
    puStack_24c = (uint *)local_168;
                    /* WARNING: Subroutine does not return */
    local_250 = (uint *)&UNK_005b7473;
    FUN_00aae91b();
  }
  local_154 = 0xf;
  local_158 = 0;
  local_168 = local_168 & 0xffffff00;
  if (0xf < local_18c) {
    puStack_24c = (uint *)local_1a0;
                    /* WARNING: Subroutine does not return */
    local_250 = (uint *)&UNK_005b74a1;
    FUN_00aae91b();
  }
  local_18c = 0xf;
  local_190 = 0;
  local_1a0 = local_1a0 & 0xffffff00;
  if (0xf < local_11c) {
    puStack_24c = (uint *)local_130[0];
                    /* WARNING: Subroutine does not return */
    local_250 = (uint *)&UNK_005b74cf;
    FUN_00aae91b();
  }
  local_11c = 0xf;
  local_120 = 0;
  local_130[0] = local_130[0] & 0xffffff00;
  if (0xf < local_3c) {
    puStack_24c = (uint *)local_50;
                    /* WARNING: Subroutine does not return */
    local_250 = (uint *)&UNK_005b74fd;
    FUN_00aae91b();
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50 = local_50 & 0xffffff00;
  if (0xf < local_e4) {
    puStack_24c = (uint *)local_f8[0];
                    /* WARNING: Subroutine does not return */
    local_250 = (uint *)&UNK_005b752b;
    FUN_00aae91b();
  }
  local_e4 = 0xf;
  local_e8 = 0;
  local_f8[0] = local_f8[0] & 0xffffff00;
  if (0xf < local_74) {
    puStack_24c = (uint *)local_88[0];
                    /* WARNING: Subroutine does not return */
    local_250 = (uint *)&UNK_005b7559;
    FUN_00aae91b();
  }
  local_74 = 0xf;
  local_78 = 0;
  local_88[0] = local_88[0] & 0xffffff00;
  if (0xf < local_170) {
    puStack_24c = (uint *)local_184;
                    /* WARNING: Subroutine does not return */
    local_250 = (uint *)&UNK_005b7587;
    FUN_00aae91b();
  }
  local_170 = 0xf;
  local_174 = 0;
  local_184 = local_184 & 0xffffff00;
  if (0xf < local_138) {
    puStack_24c = (uint *)local_14c;
                    /* WARNING: Subroutine does not return */
    local_250 = (uint *)&UNK_005b75b5;
    FUN_00aae91b();
  }
  local_138 = 0xf;
  local_13c = 0;
  local_14c = local_14c & 0xffffff00;
  if (0xf < local_100) {
    puStack_24c = (uint *)local_114;
                    /* WARNING: Subroutine does not return */
    local_250 = (uint *)&UNK_005b75e3;
    FUN_00aae91b();
  }
  local_100 = 0xf;
  local_104 = 0;
  local_114 = local_114 & 0xffffff00;
  if (0xf < local_c8) {
    puStack_24c = (uint *)local_dc[0];
                    /* WARNING: Subroutine does not return */
    local_250 = (uint *)&UNK_005b7611;
    FUN_00aae91b();
  }
  local_c8 = 0xf;
  local_cc = 0;
  local_dc[0] = local_dc[0] & 0xffffff00;
  if (0xf < local_90) {
    puStack_24c = (uint *)local_a4;
                    /* WARNING: Subroutine does not return */
    local_250 = (uint *)&UNK_005b763f;
    FUN_00aae91b();
  }
  local_90 = 0xf;
  local_94 = 0;
  local_a4 = local_a4 & 0xffffff00;
  if (0xf < local_58) {
    puStack_24c = (uint *)local_6c;
                    /* WARNING: Subroutine does not return */
    local_250 = (uint *)&UNK_005b766d;
    FUN_00aae91b();
  }
  local_58 = 0xf;
  local_5c = 0;
  local_6c = local_6c & 0xffffff00;
  if (0xf < local_20) {
    puStack_24c = (uint *)local_34;
                    /* WARNING: Subroutine does not return */
    local_250 = (uint *)&UNK_005b769b;
    FUN_00aae91b();
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34 = local_34 & 0xffffff00;
  if (0xf < local_21c) {
    puStack_24c = (uint *)local_230[0];
                    /* WARNING: Subroutine does not return */
    local_250 = (uint *)&UNK_005b76c3;
    FUN_00aae91b();
  }
  local_21c = 0xf;
  local_220 = 0;
  local_230[0] = local_230[0] & 0xffffff00;
  if (0xf < local_1c8) {
    puStack_24c = (uint *)local_1dc[0];
                    /* WARNING: Subroutine does not return */
    local_250 = (uint *)&UNK_005b76e5;
    FUN_00aae91b();
  }
  local_1c8 = 0xf;
  local_1cc = 0;
  local_1dc[0] = local_1dc[0] & 0xffffff00;
  if (0xf < local_200) {
    puStack_24c = (uint *)local_214[0];
                    /* WARNING: Subroutine does not return */
    local_250 = (uint *)&UNK_005b7707;
    FUN_00aae91b();
  }
  local_200 = 0xf;
  local_204 = 0;
  local_214[0] = local_214[0] & 0xffffff00;
  if (0xf < local_1e4) {
    puStack_24c = (uint *)local_1f8[0];
                    /* WARNING: Subroutine does not return */
    local_250 = (uint *)&UNK_005b7726;
    FUN_00aae91b();
  }
  local_1e4 = 0xf;
  local_1e8 = 0;
  local_1f8[0] = local_1f8[0] & 0xffffff00;
  if (0xf < local_1a8) {
    puStack_24c = (uint *)local_1bc[0];
                    /* WARNING: Subroutine does not return */
    local_250 = (uint *)&UNK_005b774b;
    FUN_00aae91b();
  }
  ExceptionList = local_14;
  return param_2;
}

