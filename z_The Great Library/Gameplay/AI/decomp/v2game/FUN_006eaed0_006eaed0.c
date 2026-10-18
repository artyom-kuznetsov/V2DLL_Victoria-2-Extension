// FUN_006eaed0 @ 006eaed0 body=[[006eaed0, 006eaf9e] [006eafa2, 006eafd2] [006eafd6, 006eaff0] [006eaff4, 006eb228] [006eb22c, 006eb256] [006eb25a, 006eb27f] [006eb283, 006eb2a8] [006eb2ac, 006eb2d1] [006eb2d5, 006eb2f4] [006eb2f8, 006eb314] [006eb318, 006eb33a] [006eb33e, 006eb35d] [006eb361, 006eb386] [006eb38a, 006eb3af] [006eb3b3, 006eb3d8] [006eb3dc, 006eb401] [006eb405, 006eb424] [006eb428, 006eb43e] [006eb442, 006eb457]]


undefined1 * FUN_006eaed0(undefined1 *param_1,int param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 local_1d4;
  uint local_1c0 [4];
  undefined4 local_1b0;
  uint local_1ac;
  uint local_1a4;
  undefined4 local_194;
  uint local_190;
  uint local_188;
  undefined4 local_178;
  uint local_174;
  uint local_16c [4];
  undefined4 local_15c;
  uint local_158;
  uint local_150;
  undefined4 local_140;
  uint local_13c;
  uint local_134;
  undefined4 local_124;
  uint local_120;
  uint local_118 [4];
  undefined4 local_108;
  uint local_104;
  uint local_fc;
  undefined4 local_ec;
  uint local_e8;
  uint local_e0 [4];
  undefined4 local_d0;
  uint local_cc;
  uint local_c4;
  undefined4 local_b4;
  uint local_b0;
  uint local_a8;
  undefined4 local_98;
  uint local_94;
  uint local_8c [4];
  undefined4 local_7c;
  uint local_78;
  uint local_70 [4];
  undefined4 local_60;
  uint local_5c;
  undefined1 *local_54;
  undefined4 local_50;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  uint local_30;
  undefined1 local_28 [4];
  int local_24;
  undefined4 local_20;
  uint local_1c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b6e047;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  local_8 = 0;
  local_50 = 1;
  if (*(char *)(param_2 + 0x3c) == '\0') {
    local_14 = *(int *)(DAT_012588e8 + 0xbcc);
    local_38 = 0xf;
    local_1d4 = 0x1000e0eca0;
    local_3c = 0;
    local_4c[0] = local_4c[0] & 0xffffff00;
    FUN_00409350();
    local_1d4 = CONCAT44(local_4c,local_28);
    local_8 = 1;
    FUN_009a8ee0();
    local_8._0_1_ = 2;
    local_1d4 = CONCAT44(0x6eaf5e,(undefined4)local_1d4);
    iVar5 = FUN_00475500();
    local_1d4 = *(undefined8 *)(iVar5 + 0x74);
    FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c));
    local_1d4 = 0xffffffff00000000;
    local_8._0_1_ = 3;
    FUN_00448aa0();
    if (0xf < local_5c) {
      local_1d4 = CONCAT44(local_70[0],&UNK_006eaf9f);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_5c = 0xf;
    local_60 = 0;
    local_70[0] = local_70[0] & 0xffffff00;
    local_8._0_1_ = 4;
    local_1d4 = CONCAT44(0x6eafbb,(undefined4)local_1d4);
    FUN_009adb70();
    if (local_24 != 0) {
      local_1d4 = CONCAT44(0x6eafca,(undefined4)local_1d4);
      FUN_009e6a80();
      local_1d4 = CONCAT44(local_24,&UNK_006eafd3);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    if (0xf < local_38) {
      local_1d4 = CONCAT44(local_4c[0],&UNK_006eaff1);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_1d4 = 0x200e0ecb4;
    FUN_00448740();
    local_1d4 = 0x100dee2cc;
    local_5c = 0xf;
    local_60 = 0;
    local_70[0] = local_70[0] & 0xffffff00;
    FUN_00409350();
    local_8 = 5;
    local_1d4 = 0x200df8514;
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = local_4c[0] & 0xffffff00;
    FUN_00409350();
    iVar5 = local_14;
    local_8._0_1_ = 6;
    local_54 = (undefined1 *)&local_1d4;
    local_1d4 = *(undefined8 *)
                 (*(int *)(local_14 + 0x50) +
                 (uint)*(byte *)(*(int *)(param_2 + 8) + 0x10 + local_14) * 8);
    uVar6 = FUN_00988bb0(local_1c0,0);
    local_8._0_1_ = 7;
    local_1d4 = 0x200df963c;
    local_94 = 0xf;
    local_98 = 0;
    local_a8 = local_a8 & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 8;
    local_1d4 = CONCAT44(uVar6,0x6eb0ba);
    FUN_00988f20();
    local_8._0_1_ = 9;
    local_1d4 = CONCAT44(local_4c,0x6eb0cf);
    uVar6 = FUN_00988f20();
    local_1d4 = CONCAT44(uVar6,local_118);
    local_8._0_1_ = 10;
    local_14 = FUN_0042c180();
    local_8._0_1_ = 0xb;
    local_78 = 0xf;
    local_7c = 0;
    local_8c[0] = local_8c[0] & 0xffffff00;
    local_1d4 = 0x200df8514;
    FUN_00409350();
    local_8._0_1_ = 0xc;
    local_54 = (undefined1 *)&local_1d4;
    puVar1 = (uint *)(*(int *)(iVar5 + 0x594) +
                     (uint)*(byte *)(*(int *)(param_2 + 8) + 0x554 + iVar5) * 8);
    uVar3 = *puVar1;
    puVar2 = (uint *)(*(int *)(iVar5 + 0x4d4) +
                     (uint)*(byte *)(*(int *)(param_2 + 8) + 0x494 + iVar5) * 8);
    uVar4 = *puVar2;
    local_1d4 = CONCAT44(puVar2[1] + puVar1[1] + (uint)CARRY4(uVar4,uVar3),uVar4 + uVar3);
    uVar6 = FUN_00988bb0(local_e0,0);
    local_8._0_1_ = 0xd;
    local_1d4 = 0x200df963c;
    local_1c = 0xf;
    local_20 = 0;
    local_30 = local_30 & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0xe;
    local_1d4 = CONCAT44(uVar6,0x6eb1a0);
    FUN_00988f20();
    local_8._0_1_ = 0xf;
    local_1d4 = CONCAT44(local_8c,0x6eb1b8);
    uVar6 = FUN_00988f20();
    local_1d4 = CONCAT44(uVar6,local_16c);
    local_8._0_1_ = 0x10;
    FUN_0042c180();
    local_8._0_1_ = 0x11;
    local_1d4 = CONCAT44(local_70,0x6eb1eb);
    FUN_00988f20();
    local_8._0_1_ = 0x12;
    local_1d4 = CONCAT44(local_14,0x6eb200);
    FUN_00988f20();
    local_1d4 = 0xffffffff00000000;
    local_8 = CONCAT31(local_8._1_3_,0x13);
    FUN_00448aa0();
    if (0xf < local_b0) {
      local_1d4 = CONCAT44(local_c4,&UNK_006eb229);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_b0 = 0xf;
    local_b4 = 0;
    local_c4 = local_c4 & 0xffffff00;
    if (0xf < local_e8) {
      local_1d4 = CONCAT44(local_fc,&UNK_006eb257);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_e8 = 0xf;
    local_ec = 0;
    local_fc = local_fc & 0xffffff00;
    if (0xf < local_158) {
      local_1d4 = CONCAT44(local_16c[0],&UNK_006eb280);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_158 = 0xf;
    local_15c = 0;
    local_16c[0] = local_16c[0] & 0xffffff00;
    if (0xf < local_120) {
      local_1d4 = CONCAT44(local_134,&UNK_006eb2a9);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_120 = 0xf;
    local_124 = 0;
    local_134 = local_134 & 0xffffff00;
    if (0xf < local_190) {
      local_1d4 = CONCAT44(local_1a4,&UNK_006eb2d2);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_190 = 0xf;
    local_194 = 0;
    local_1a4 = local_1a4 & 0xffffff00;
    if (0xf < local_1c) {
      local_1d4 = CONCAT44(local_30,&UNK_006eb2f5);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30 = local_30 & 0xffffff00;
    if (0xf < local_cc) {
      local_1d4 = CONCAT44(local_e0[0],&UNK_006eb315);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_cc = 0xf;
    local_d0 = 0;
    local_e0[0] = local_e0[0] & 0xffffff00;
    if (0xf < local_78) {
      local_1d4 = CONCAT44(local_8c[0],&UNK_006eb33b);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_78 = 0xf;
    local_7c = 0;
    local_8c[0] = local_8c[0] & 0xffffff00;
    if (0xf < local_104) {
      local_1d4 = CONCAT44(local_118[0],&UNK_006eb35e);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_104 = 0xf;
    local_108 = 0;
    local_118[0] = local_118[0] & 0xffffff00;
    if (0xf < local_13c) {
      local_1d4 = CONCAT44(local_150,&UNK_006eb387);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_13c = 0xf;
    local_140 = 0;
    local_150 = local_150 & 0xffffff00;
    if (0xf < local_174) {
      local_1d4 = CONCAT44(local_188,&UNK_006eb3b0);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_174 = 0xf;
    local_178 = 0;
    local_188 = local_188 & 0xffffff00;
    if (0xf < local_94) {
      local_1d4 = CONCAT44(local_a8,&UNK_006eb3d9);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_94 = 0xf;
    local_98 = 0;
    local_a8 = local_a8 & 0xffffff00;
    if (0xf < local_1ac) {
      local_1d4 = CONCAT44(local_1c0[0],&UNK_006eb402);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_1ac = 0xf;
    local_1b0 = 0;
    local_1c0[0] = local_1c0[0] & 0xffffff00;
    if (0xf < local_38) {
      local_1d4 = CONCAT44(local_4c[0],&UNK_006eb425);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = local_4c[0] & 0xffffff00;
    if (0xf < local_5c) {
      local_1d4 = CONCAT44(local_70[0],&UNK_006eb43f);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  ExceptionList = local_10;
  return param_1;
}

