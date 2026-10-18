// FUN_00512230 @ 00512230 body=[[00512230, 005122ef] [005122f3, 00512383] [00512387, 005123a3] [005123a7, 005123c4] [005123c8, 005123f1] [005123f5, 0051252a] [0051252e, 00512557] [0051255b, 00512577] [0051257b, 005125bc] [005125c0, 005125e3] [005125e7, 0051270e] [00512712, 0051273c] [00512740, 00512762] [00512766, 0051277f] [00512783, 005127bd] [005127c1, 005127e5] [005127e9, 00512802] [00512806, 00512878] [0051287c, 0051289b] [0051289f, 005128bc] [005128c0, 0051292c] [00512930, 005129e1] [005129e5, 00512a03] [00512a07, 00512a47] [00512a4b, 00512a6f] [00512a73, 00512aea] [00512aee, 00512b9f] [00512ba3, 00512bc6] [00512bca, 00512bf3] [00512bf7, 00512c10] [00512c14, 00512cd5] [00512cd9, 00512d26] [00512d2f, 00512d74] [00512d78, 00512dc4] [00512dc8, 00512e14] [00512e18, 00512e71] [00512e75, 00512e94] [00512e98, 00512eda] [00512ede, 00512f26] [00512f2a, 00513019] [0051301d, 0051303f] [00513043, 00513060] [00513064, 00513084] [00513088, 005130be] [005130c2, 0051314d] [00513151, 005131ec] [005131f0, 00513212] [00513216, 00513243] [00513247, 0051326a] [0051326e, 005132d4] [005132d8, 00513373] [00513377, 00513399] [0051339d, 005133ca] [005133ce, 005133f1] [005133f5, 005134ad] [005134b1, 005134d0] [005134d4, 005134f4] [005134f8, 0051351e] [00513522, 00513545] [00513549, 005135f7] [005135fb, 00513673] [00513677, 00513699] [0051369d, 005136c0] [005136c4, 005136f0] [005136f4, 00513790] [00513794, 00513815] [00513819, 0051383b] [0051383f, 00513862] [00513866, 0051388c] [00513890, 005138d5] [005138d9, 005138ed]]


undefined1 * FUN_00512230(int param_1,undefined1 *param_2,int *param_3,int param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  char cVar5;
  undefined1 uVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  uint *puStack_120;
  int *piStack_11c;
  undefined1 local_118 [4];
  undefined4 uStack_114;
  undefined4 uStack_110;
  uint *puStack_10c;
  undefined1 *local_108;
  int **local_104;
  uint *puStack_100;
  uint local_e0 [4];
  undefined4 local_d0;
  uint local_cc;
  uint local_c4 [4];
  undefined4 local_b4;
  uint local_b0;
  uint local_a8 [2];
  undefined1 local_a0 [4];
  int local_9c;
  undefined4 local_98;
  uint local_94;
  uint local_8c [4];
  undefined4 local_7c;
  uint local_78;
  uint local_70 [4];
  undefined4 local_60;
  uint local_5c;
  uint local_54;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00b81d8b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *param_2 = 0;
  local_8 = 0;
  if (param_3[5] != 0) {
    local_14 = (int *)local_118;
    piStack_11c = (int *)0x2;
    local_104 = (int **)0xf;
    local_108 = (undefined1 *)0x0;
    puStack_120 = (uint *)&DAT_00dedc20;
    local_118[0] = 0;
    FUN_00409350();
    puStack_120 = local_50;
    piStack_11c = (int *)(uint)(*(int *)(*(int *)(*(int *)(param_1 + 0xbcc) + 0x2b8) +
                                        *(int *)(param_3[5] + 0x2e4) * 4) != 0);
    local_108 = (undefined1 *)FUN_009c98f0();
    puStack_100 = (uint *)0xffffffff;
    local_104 = (int **)0x0;
    local_8 = 1;
    puStack_10c = (uint *)0x5122de;
    FUN_00448aa0();
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_3c) {
      puStack_100 = (uint *)local_50[0];
                    /* WARNING: Subroutine does not return */
      local_104 = (int **)&UNK_005122f0;
      FUN_00aae91b();
    }
    puStack_100 = (uint *)0x1;
    local_104 = (int **)&DAT_00dee2cc;
    local_94 = 0xf;
    local_98 = 0;
    local_a8[0] = local_a8[0] & 0xffffff00;
    local_108 = (undefined1 *)0x51231b;
    FUN_00409350();
    local_8 = 2;
    puStack_100 = local_e0;
    local_104 = (int **)0x512336;
    puStack_100 = (uint *)(**(code **)(*(int *)param_3[5] + 0x18))();
    local_104 = (int **)local_70;
    local_8._0_1_ = 3;
    local_108 = (undefined1 *)0x51234e;
    FUN_0042c180();
    puStack_100 = local_a8;
    local_8._0_1_ = 4;
    local_104 = (int **)0x512366;
    local_108 = (undefined1 *)FUN_00988f20();
    puStack_100 = (uint *)0xffffffff;
    local_104 = (int **)0x0;
    local_8._0_1_ = 5;
    puStack_10c = (uint *)0x512375;
    FUN_00448aa0();
    if (0xf < local_20) {
      puStack_100 = (uint *)local_34[0];
                    /* WARNING: Subroutine does not return */
      local_104 = (int **)&UNK_00512384;
      FUN_00aae91b();
    }
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    if (0xf < local_5c) {
      puStack_100 = (uint *)local_70[0];
                    /* WARNING: Subroutine does not return */
      local_104 = (int **)&UNK_005123a4;
      FUN_00aae91b();
    }
    local_5c = 0xf;
    local_60 = 0;
    local_70[0] = local_70[0] & 0xffffff00;
    if (0xf < local_cc) {
      puStack_100 = (uint *)local_e0[0];
                    /* WARNING: Subroutine does not return */
      local_104 = (int **)&UNK_005123c5;
      FUN_00aae91b();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_cc = 0xf;
    local_d0 = 0;
    local_e0[0] = local_e0[0] & 0xffffff00;
    if (0xf < local_94) {
      puStack_100 = (uint *)local_a8[0];
                    /* WARNING: Subroutine does not return */
      local_104 = (int **)&UNK_005123f2;
      FUN_00aae91b();
    }
    local_94 = 0xf;
    local_98 = 0;
    local_a8[0] = local_a8[0] & 0xffffff00;
  }
  if (*(int *)(param_4 + 300) == *(int *)(param_1 + 0x20)) {
    if ((*(char *)(param_1 + 0xae8) != '\0') ||
       (local_18 = (int *)((uint)local_18 & 0xffffff00), (char)param_3[0x4e] == '\0')) {
      local_18 = (int *)CONCAT31(local_18._1_3_,1);
    }
    local_14 = (int *)local_118;
    piStack_11c = (int *)0x2;
    local_104 = (int **)0xf;
    local_108 = (undefined1 *)0x0;
    puStack_120 = (uint *)&DAT_00dedc20;
    local_118[0] = 0;
    FUN_00409350();
    piStack_11c = local_18;
    puStack_120 = local_50;
    local_108 = (undefined1 *)FUN_009c98f0();
    puStack_100 = (uint *)0xffffffff;
    local_104 = (int **)0x0;
    local_8 = 0x1e;
    puStack_10c = (uint *)0x512ad9;
    FUN_00448aa0();
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_3c) {
      puStack_100 = (uint *)local_50[0];
                    /* WARNING: Subroutine does not return */
      local_104 = (int **)&UNK_00512aeb;
      FUN_00aae91b();
    }
    puStack_100 = (uint *)0x1;
    local_104 = (int **)&DAT_00dee2cc;
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    local_108 = (undefined1 *)0x512b0b;
    FUN_00409350();
    local_8 = 0x1f;
    puStack_100 = (uint *)0x14;
    local_104 = (int **)0xdfe5e0;
    local_5c = 0xf;
    local_60 = 0;
    local_70[0] = local_70[0] & 0xffffff00;
    local_108 = (undefined1 *)0x512b2a;
    FUN_00409350();
    puStack_100 = local_70;
    local_104 = (int **)local_a0;
    local_8._0_1_ = 0x20;
    local_108 = (undefined1 *)0x512b3e;
    local_54 = FUN_009a8ee0();
    local_8._0_1_ = 0x21;
    puStack_100 = (uint *)0x512b4a;
    iVar7 = FUN_00475500();
    puStack_10c = (uint *)*(undefined8 *)(iVar7 + 0x6c);
    local_108 = (undefined1 *)((ulonglong)*(undefined8 *)(iVar7 + 0x6c) >> 0x20);
    local_104 = (int **)*(undefined8 *)(iVar7 + 0x74);
    puStack_100 = (uint *)((ulonglong)*(undefined8 *)(iVar7 + 0x74) >> 0x20);
    uStack_110 = 0x512b70;
    FUN_009a9880();
    puStack_100 = local_34;
    local_8._0_1_ = 0x22;
    local_104 = (int **)0x512b82;
    local_108 = (undefined1 *)FUN_00988f20();
    puStack_100 = (uint *)0xffffffff;
    local_104 = (int **)0x0;
    local_8._0_1_ = 0x23;
    puStack_10c = (uint *)0x512b91;
    FUN_00448aa0();
    if (0xf < local_3c) {
      puStack_100 = (uint *)local_50[0];
                    /* WARNING: Subroutine does not return */
      local_104 = (int **)&UNK_00512ba0;
      FUN_00aae91b();
    }
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    if (0xf < local_78) {
      puStack_100 = (uint *)local_8c[0];
                    /* WARNING: Subroutine does not return */
      local_104 = (int **)&UNK_00512bc7;
      FUN_00aae91b();
    }
    puStack_100 = (uint *)local_a0;
    local_78 = 0xf;
    local_7c = 0;
    local_8c[0] = local_8c[0] & 0xffffff00;
    local_8._0_1_ = 0x20;
    local_104 = (int **)0x512be6;
    FUN_009a9740();
    if (0xf < local_5c) {
      puStack_100 = (uint *)local_70[0];
                    /* WARNING: Subroutine does not return */
      local_104 = (int **)&UNK_00512bf4;
      FUN_00aae91b();
    }
  }
  else {
    if ((char)param_3[0x4e] == '\0') goto LAB_00512c14;
    local_18 = *(int **)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_4 + 300) * 4);
    puStack_100 = (uint *)0x13;
    local_104 = (int **)0xdf26b0;
    local_5c = 0xf;
    local_60 = 0;
    local_70[0] = local_70[0] & 0xffffff00;
    local_108 = (undefined1 *)0x51246f;
    FUN_00409350();
    puStack_100 = local_70;
    local_104 = (int **)local_a0;
    local_8 = 6;
    local_108 = (undefined1 *)0x512486;
    local_54 = FUN_009a8ee0();
    local_8._0_1_ = 7;
    puStack_100 = (uint *)0x512492;
    iVar7 = FUN_00475500();
    puStack_10c = (uint *)*(undefined8 *)(iVar7 + 0x6c);
    local_108 = (undefined1 *)((ulonglong)*(undefined8 *)(iVar7 + 0x6c) >> 0x20);
    local_104 = (int **)*(undefined8 *)(iVar7 + 0x74);
    puStack_100 = (uint *)((ulonglong)*(undefined8 *)(iVar7 + 0x74) >> 0x20);
    uStack_110 = 0x5124b8;
    puStack_100 = (uint *)FUN_009a9880();
    local_14 = (int *)&piStack_11c;
    local_8._0_1_ = 8;
    puStack_120 = (uint *)0x2;
    local_108 = (undefined1 *)0xf;
    puStack_10c = (uint *)0x0;
    piStack_11c = (int *)((uint)piStack_11c & 0xffffff00);
    FUN_00409350(&DAT_00dedc20);
    puStack_120 = (uint *)(uint)(*(char *)((int)local_18 + 0x31) == '\0');
    FUN_009c98f0(local_34);
    local_8._0_1_ = 9;
    local_104 = (int **)0x512507;
    local_108 = (undefined1 *)FUN_00988f20();
    puStack_100 = (uint *)0xffffffff;
    local_104 = (int **)0x0;
    local_8._0_1_ = 10;
    puStack_10c = (uint *)0x512516;
    FUN_00448aa0();
    if (0xf < local_cc) {
      puStack_100 = (uint *)local_e0[0];
                    /* WARNING: Subroutine does not return */
      local_104 = (int **)&UNK_0051252b;
      FUN_00aae91b();
    }
    local_cc = 0xf;
    local_d0 = 0;
    local_e0[0] = local_e0[0] & 0xffffff00;
    if (0xf < local_20) {
      puStack_100 = (uint *)local_34[0];
                    /* WARNING: Subroutine does not return */
      local_104 = (int **)&UNK_00512558;
      FUN_00aae91b();
    }
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    if (0xf < local_b0) {
      puStack_100 = (uint *)local_c4[0];
                    /* WARNING: Subroutine does not return */
      local_104 = (int **)&UNK_00512578;
      FUN_00aae91b();
    }
    local_b0 = 0xf;
    local_b4 = 0;
    local_c4[0] = local_c4[0] & 0xffffff00;
    local_8._0_1_ = 0xb;
    puStack_100 = (uint *)0x51259c;
    FUN_009adb70();
    if (local_9c != 0) {
      puStack_100 = (uint *)0x5125b1;
      FUN_009e6a80();
      puStack_100 = (uint *)local_9c;
                    /* WARNING: Subroutine does not return */
      local_104 = (int **)&UNK_005125bd;
      FUN_00aae91b();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_9c = 0;
    local_98 = 0;
    local_94 = 0;
    if (0xf < local_5c) {
      puStack_100 = (uint *)local_70[0];
                    /* WARNING: Subroutine does not return */
      local_104 = (int **)&UNK_005125e4;
      FUN_00aae91b();
    }
    puStack_100 = (uint *)0x1;
    local_104 = (int **)&DAT_00dee2cc;
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    local_108 = (undefined1 *)0x512604;
    FUN_00409350();
    local_8 = 0xc;
    puStack_100 = (uint *)0x11;
    local_104 = (int **)0xdfe5b4;
    local_5c = 0xf;
    local_60 = 0;
    local_70[0] = local_70[0] & 0xffffff00;
    local_108 = (undefined1 *)0x512623;
    FUN_00409350();
    puStack_100 = local_34;
    local_104 = (int **)local_70;
    local_108 = local_a0;
    local_8._0_1_ = 0xd;
    puStack_10c = (uint *)0x512641;
    local_54 = FUN_009a8ee0();
    local_8._0_1_ = 0xe;
    local_104 = (int **)0x51264d;
    iVar7 = FUN_00475500();
    uStack_110 = (undefined4)*(undefined8 *)(iVar7 + 0x6c);
    puStack_10c = (uint *)((ulonglong)*(undefined8 *)(iVar7 + 0x6c) >> 0x20);
    local_108 = (undefined1 *)*(undefined8 *)(iVar7 + 0x74);
    local_104 = (int **)((ulonglong)*(undefined8 *)(iVar7 + 0x74) >> 0x20);
    uStack_114 = 0x512670;
    local_104 = (int **)FUN_009a9880();
    local_14 = (int *)&puStack_120;
    local_8._0_1_ = 0xf;
    puStack_10c = (uint *)0xf;
    uStack_110 = 0;
    puStack_120 = (uint *)((uint)puStack_120 & 0xffffff00);
    FUN_00409350(&DAT_00dedc20,2);
    FUN_009c98f0(local_8c,*(int *)(*(int *)(*(int *)(param_1 + 0xbe8) + *(int *)(param_4 + 300) * 4)
                                  + 0x34) == 0);
    local_8._0_1_ = 0x10;
    local_108 = (undefined1 *)0x5126d9;
    FUN_00988f20();
    local_8._0_1_ = 0x11;
    local_104 = (int **)0x5126e6;
    local_108 = (undefined1 *)FUN_00988f20();
    puStack_100 = (uint *)0xffffffff;
    local_8._0_1_ = 0x12;
    local_104 = (int **)0x0;
    puStack_10c = (uint *)0x5126f6;
    FUN_00448aa0();
    if (0xf < local_b0) {
      puStack_100 = (uint *)local_c4[0];
                    /* WARNING: Subroutine does not return */
      local_104 = (int **)&UNK_0051270f;
      FUN_00aae91b();
    }
    local_b0 = 0xf;
    local_b4 = 0;
    local_c4[0] = local_c4[0] & 0xffffff00;
    if (0xf < local_cc) {
      puStack_100 = (uint *)local_e0[0];
                    /* WARNING: Subroutine does not return */
      local_104 = (int **)&UNK_0051273d;
      FUN_00aae91b();
    }
    local_cc = 0xf;
    local_d0 = 0;
    local_e0[0] = local_e0[0] & 0xffffff00;
    if (0xf < local_78) {
      puStack_100 = (uint *)local_8c[0];
                    /* WARNING: Subroutine does not return */
      local_104 = (int **)&UNK_00512763;
      FUN_00aae91b();
    }
    local_78 = 0xf;
    local_7c = 0;
    local_8c[0] = local_8c[0] & 0xffffff00;
    if (0xf < local_3c) {
      puStack_100 = (uint *)local_50[0];
                    /* WARNING: Subroutine does not return */
      local_104 = (int **)&UNK_00512780;
      FUN_00aae91b();
    }
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    local_8._0_1_ = 0x13;
    puStack_100 = (uint *)0x51279d;
    FUN_009adb70();
    if (local_9c != 0) {
      puStack_100 = (uint *)0x5127b2;
      FUN_009e6a80();
      puStack_100 = (uint *)local_9c;
                    /* WARNING: Subroutine does not return */
      local_104 = (int **)&UNK_005127be;
      FUN_00aae91b();
    }
    local_9c = 0;
    local_98 = 0;
    local_94 = 0;
    if (0xf < local_5c) {
      puStack_100 = (uint *)local_70[0];
                    /* WARNING: Subroutine does not return */
      local_104 = (int **)&UNK_005127e6;
      FUN_00aae91b();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_5c = 0xf;
    local_60 = 0;
    local_70[0] = local_70[0] & 0xffffff00;
    if (0xf < local_20) {
      puStack_100 = (uint *)local_34[0];
                    /* WARNING: Subroutine does not return */
      local_104 = (int **)&UNK_00512803;
      FUN_00aae91b();
    }
    puStack_100 = (uint *)0x1;
    local_104 = (int **)&DAT_00dee2cc;
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    local_108 = (undefined1 *)0x512822;
    FUN_00409350();
    local_8 = 0x14;
    puStack_100 = (uint *)0x14;
    local_104 = (int **)local_8c;
    local_108 = (undefined1 *)0x512846;
    (**(code **)(local_18[0x2aa] + 0x20))();
    puStack_100 = local_34;
    local_8._0_1_ = 0x15;
    local_104 = (int **)0x512858;
    local_108 = (undefined1 *)FUN_00988f20();
    puStack_100 = (uint *)0xffffffff;
    local_8._0_1_ = 0x16;
    local_104 = (int **)0x0;
    puStack_10c = (uint *)0x51286a;
    FUN_00448aa0();
    piVar2 = local_18;
    if (0xf < local_3c) {
      puStack_100 = (uint *)local_50[0];
                    /* WARNING: Subroutine does not return */
      local_104 = (int **)&UNK_00512879;
      FUN_00aae91b();
    }
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    if (0xf < local_78) {
      puStack_100 = (uint *)local_8c[0];
                    /* WARNING: Subroutine does not return */
      local_104 = (int **)&UNK_0051289c;
      FUN_00aae91b();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_78 = 0xf;
    local_7c = 0;
    local_8c[0] = local_8c[0] & 0xffffff00;
    if (0xf < local_20) {
      puStack_100 = (uint *)local_34[0];
                    /* WARNING: Subroutine does not return */
      local_104 = (int **)&UNK_005128bd;
      FUN_00aae91b();
    }
    if (*(char *)(param_1 + 0xb38) == '\0') {
LAB_005128da:
      local_18 = (int *)((uint)local_18 & 0xffffff00);
    }
    else {
      local_18 = (int *)CONCAT31(local_18._1_3_,1);
      if ((char)piVar2[0x2d8] == '\0') goto LAB_005128da;
    }
    local_14 = (int *)local_118;
    piStack_11c = (int *)0x2;
    local_104 = (int **)0xf;
    local_108 = (undefined1 *)0x0;
    puStack_120 = (uint *)&DAT_00dedc20;
    local_118[0] = 0;
    FUN_00409350();
    piStack_11c = local_18;
    puStack_120 = local_50;
    local_108 = (undefined1 *)FUN_009c98f0();
    puStack_100 = (uint *)0xffffffff;
    local_104 = (int **)0x0;
    local_8 = 0x17;
    puStack_10c = (uint *)0x51291b;
    FUN_00448aa0();
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_3c) {
      puStack_100 = (uint *)local_50[0];
                    /* WARNING: Subroutine does not return */
      local_104 = (int **)&UNK_0051292d;
      FUN_00aae91b();
    }
    puStack_100 = (uint *)0x1;
    local_104 = (int **)&DAT_00dee2cc;
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    local_108 = (undefined1 *)0x51294d;
    FUN_00409350();
    local_8 = 0x18;
    puStack_100 = (uint *)0x17;
    local_104 = (int **)0xdfe5c8;
    local_5c = 0xf;
    local_60 = 0;
    local_70[0] = local_70[0] & 0xffffff00;
    local_108 = (undefined1 *)0x51296c;
    FUN_00409350();
    puStack_100 = local_70;
    local_104 = (int **)local_a0;
    local_8._0_1_ = 0x19;
    local_108 = (undefined1 *)0x512980;
    local_54 = FUN_009a8ee0();
    local_8._0_1_ = 0x1a;
    puStack_100 = (uint *)0x51298c;
    iVar7 = FUN_00475500();
    puStack_10c = (uint *)*(undefined8 *)(iVar7 + 0x6c);
    local_108 = (undefined1 *)((ulonglong)*(undefined8 *)(iVar7 + 0x6c) >> 0x20);
    local_104 = (int **)*(undefined8 *)(iVar7 + 0x74);
    puStack_100 = (uint *)((ulonglong)*(undefined8 *)(iVar7 + 0x74) >> 0x20);
    uStack_110 = 0x5129b2;
    FUN_009a9880();
    puStack_100 = local_34;
    local_8._0_1_ = 0x1b;
    local_104 = (int **)0x5129c4;
    local_108 = (undefined1 *)FUN_00988f20();
    puStack_100 = (uint *)0xffffffff;
    local_104 = (int **)0x0;
    local_8._0_1_ = 0x1c;
    puStack_10c = (uint *)0x5129d3;
    FUN_00448aa0();
    if (0xf < local_3c) {
      puStack_100 = (uint *)local_50[0];
                    /* WARNING: Subroutine does not return */
      local_104 = (int **)&UNK_005129e2;
      FUN_00aae91b();
    }
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    if (0xf < local_78) {
      puStack_100 = (uint *)local_8c[0];
                    /* WARNING: Subroutine does not return */
      local_104 = (int **)&UNK_00512a04;
      FUN_00aae91b();
    }
    local_78 = 0xf;
    local_7c = 0;
    local_8c[0] = local_8c[0] & 0xffffff00;
    local_8._0_1_ = 0x1d;
    puStack_100 = (uint *)0x512a27;
    FUN_009adb70();
    if (local_9c != 0) {
      puStack_100 = (uint *)0x512a3c;
      FUN_009e6a80();
      puStack_100 = (uint *)local_9c;
                    /* WARNING: Subroutine does not return */
      local_104 = (int **)&UNK_00512a48;
      FUN_00aae91b();
    }
    local_9c = 0;
    local_98 = 0;
    local_94 = 0;
    if (0xf < local_5c) {
      puStack_100 = (uint *)local_70[0];
                    /* WARNING: Subroutine does not return */
      local_104 = (int **)&UNK_00512a70;
      FUN_00aae91b();
    }
  }
  local_8 = (uint)local_8._1_3_ << 8;
  local_5c = 0xf;
  local_70[0] = local_70[0] & 0xffffff00;
  local_60 = 0;
  if (0xf < local_20) {
    puStack_100 = (uint *)local_34[0];
                    /* WARNING: Subroutine does not return */
    local_104 = (int **)&UNK_00512c11;
    FUN_00aae91b();
  }
LAB_00512c14:
  if (*(char *)((int)param_3 + 0x131) == '\0') {
    iVar7 = 0;
  }
  else {
    iVar7 = *(int *)(*(int *)(param_4 + 0x118) + param_3[0x4d] * 4);
  }
  piVar2 = (int *)(*(int *)(iVar7 + 0x20) / 1000);
  local_18 = (int *)(uint)*(byte *)(*(int *)(*(int *)(*(int *)(param_4 + 0x5c) + 0x14) + 0x34) +
                                   param_3[0x16]);
  uVar9 = *(int *)(*(int *)(*(int *)(param_1 + 0xbcc) + 8) + param_3[0x16] * 4) - (int)local_18;
  piStack_11c = (int *)0x2;
  local_104 = (int **)0xf;
  local_108 = (undefined1 *)0x0;
  puStack_120 = (uint *)&DAT_00dedc20;
  local_118[0] = 0;
  local_54 = uVar9;
  local_14 = piVar2;
  FUN_00409350();
  piStack_11c = (int *)(uint)((int)piVar2 < (int)uVar9);
  puStack_120 = local_50;
  local_108 = (undefined1 *)FUN_009c98f0();
  puStack_100 = (uint *)0xffffffff;
  local_104 = (int **)0x0;
  local_8 = 0x24;
  puStack_10c = (uint *)0x512cc4;
  FUN_00448aa0();
  local_8 = local_8 & 0xffffff00;
  if (0xf < local_3c) {
    puStack_100 = (uint *)local_50[0];
                    /* WARNING: Subroutine does not return */
    local_104 = (int **)&UNK_00512cd6;
    FUN_00aae91b();
  }
  if (local_18 == (int *)0x0) {
    puStack_100 = &local_54;
    local_104 = &local_14;
    puStack_10c = local_50;
    local_108 = &DAT_00dfd18c;
    uStack_110 = 0x512cf9;
    local_108 = (undefined1 *)FUN_004d6040();
    puStack_100 = (uint *)0xffffffff;
    local_8 = 0x25;
    local_104 = (int **)0x0;
    puStack_10c = (uint *)0x512d11;
    FUN_00448aa0();
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_3c) {
      puStack_100 = (uint *)local_50[0];
                    /* WARNING: Subroutine does not return */
      local_104 = (int **)&UNK_00512d27;
      FUN_00aae91b();
    }
  }
  else {
    puStack_100 = (uint *)0x17;
    local_104 = (int **)0xdfe608;
    local_5c = 0xf;
    local_60 = 0;
    local_70[0] = local_70[0] & 0xffffff00;
    local_108 = (undefined1 *)0x512d4b;
    FUN_00409350();
    puStack_100 = local_70;
    local_104 = (int **)local_a0;
    local_8 = 0x26;
    local_108 = (undefined1 *)0x512d62;
    FUN_009a8ee0();
    local_8._0_1_ = 0x28;
    if (0xf < local_5c) {
      puStack_100 = (uint *)local_70[0];
                    /* WARNING: Subroutine does not return */
      local_104 = (int **)&UNK_00512d75;
      FUN_00aae91b();
    }
    puStack_100 = (uint *)0x4;
    local_104 = (int **)&DAT_00dfd18c;
    local_5c = 0xf;
    local_60 = 0;
    local_70[0] = local_70[0] & 0xffffff00;
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    local_108 = (undefined1 *)0x512d9e;
    FUN_00409350();
    local_104 = (int **)local_a0;
    local_8._0_1_ = 0x29;
    local_108 = (undefined1 *)0x512db2;
    puStack_100 = (uint *)piVar2;
    FUN_009a99f0();
    local_8._0_1_ = 0x28;
    if (0xf < local_20) {
      puStack_100 = (uint *)local_34[0];
                    /* WARNING: Subroutine does not return */
      local_104 = (int **)&UNK_00512dc5;
      FUN_00aae91b();
    }
    puStack_100 = (uint *)0x3;
    local_104 = (int **)&DAT_00dfad2c;
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    local_108 = (undefined1 *)0x512de4;
    FUN_00409350();
    local_104 = (int **)local_a0;
    local_8._0_1_ = 0x2a;
    puStack_100 = (uint *)(((int)uVar9 < 1) - 1 & uVar9);
    local_108 = (undefined1 *)0x512e02;
    FUN_009a99f0();
    local_8._0_1_ = 0x28;
    if (0xf < local_20) {
      puStack_100 = (uint *)local_34[0];
                    /* WARNING: Subroutine does not return */
      local_104 = (int **)&UNK_00512e15;
      FUN_00aae91b();
    }
    puStack_100 = (uint *)0x7;
    local_104 = (int **)0xdfe620;
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    local_108 = (undefined1 *)0x512e34;
    FUN_00409350();
    local_8._0_1_ = 0x2b;
    puStack_100 = local_50;
    local_104 = (int **)0x512e4c;
    puStack_100 = (uint *)(**(code **)(**(int **)(*(int *)(param_4 + 0x5c) + 0x14) + 0x18))();
    local_8._0_1_ = 0x2c;
    local_104 = (int **)0x512e5f;
    FUN_009a9980();
    if (0xf < local_3c) {
      puStack_100 = (uint *)local_50[0];
                    /* WARNING: Subroutine does not return */
      local_104 = (int **)&UNK_00512e72;
      FUN_00aae91b();
    }
    local_8._0_1_ = 0x28;
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    if (0xf < local_20) {
      puStack_100 = (uint *)local_34[0];
                    /* WARNING: Subroutine does not return */
      local_104 = (int **)&UNK_00512e95;
      FUN_00aae91b();
    }
    puStack_100 = (uint *)0xa;
    local_104 = (int **)0xdfe628;
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    local_108 = (undefined1 *)0x512eb0;
    FUN_00409350();
    puStack_100 = (uint *)-(int)local_18;
    local_104 = (int **)local_a0;
    local_8._0_1_ = 0x2d;
    local_108 = (undefined1 *)0x512ec9;
    FUN_009a99f0();
    local_8._0_1_ = 0x28;
    if (0xf < local_20) {
      puStack_100 = (uint *)local_34[0];
                    /* WARNING: Subroutine does not return */
      local_104 = (int **)&UNK_00512edb;
      FUN_00aae91b();
    }
    puStack_100 = (uint *)0x512ee3;
    iVar7 = FUN_00475500();
    puStack_10c = (uint *)*(undefined8 *)(iVar7 + 0x6c);
    local_108 = (undefined1 *)((ulonglong)*(undefined8 *)(iVar7 + 0x6c) >> 0x20);
    local_104 = (int **)*(undefined8 *)(iVar7 + 0x74);
    puStack_100 = (uint *)((ulonglong)*(undefined8 *)(iVar7 + 0x74) >> 0x20);
    uStack_110 = 0x512f09;
    local_108 = (undefined1 *)FUN_009a9880();
    puStack_100 = (uint *)0xffffffff;
    local_104 = (int **)0x0;
    local_8._0_1_ = 0x2e;
    puStack_10c = (uint *)0x512f19;
    FUN_00448aa0();
    if (0xf < local_3c) {
      puStack_100 = (uint *)local_50[0];
                    /* WARNING: Subroutine does not return */
      local_104 = (int **)&UNK_00512f27;
      FUN_00aae91b();
    }
    puStack_100 = (uint *)local_a0;
    local_8 = (uint)local_8._1_3_ << 8;
    local_104 = (int **)0x512f39;
    FUN_009a9740();
  }
  if (param_3[5] != 0) {
    puStack_100 = (uint *)0x3;
    local_104 = (int **)&DAT_00dfc974;
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    local_108 = (undefined1 *)0x512f64;
    FUN_00409350();
    local_8 = 0x2f;
    puStack_100 = (uint *)(param_3[5] + 0x314);
    local_104 = (int **)local_a0;
    local_108 = (undefined1 *)0x512f83;
    local_14 = (int *)FUN_009a8ee0();
    local_8._0_1_ = 0x30;
    puStack_100 = (uint *)0x512f8f;
    iVar7 = FUN_00475500();
    puStack_10c = (uint *)*(undefined8 *)(iVar7 + 0x6c);
    local_108 = (undefined1 *)((ulonglong)*(undefined8 *)(iVar7 + 0x6c) >> 0x20);
    local_104 = (int **)*(undefined8 *)(iVar7 + 0x74);
    puStack_100 = (uint *)((ulonglong)*(undefined8 *)(iVar7 + 0x74) >> 0x20);
    uStack_110 = 0x512fb5;
    uVar8 = FUN_009a9880();
    local_8._0_1_ = 0x31;
    puStack_100 = (uint *)0x4;
    local_104 = (int **)&DAT_00dfe634;
    local_5c = 0xf;
    local_60 = 0;
    local_70[0] = local_70[0] & 0xffffff00;
    local_108 = (undefined1 *)0x512fd7;
    FUN_00409350();
    local_8._0_1_ = 0x32;
    local_104 = (int **)0x512fea;
    puStack_100 = (uint *)uVar8;
    FUN_00988f20();
    puStack_100 = local_34;
    local_8._0_1_ = 0x33;
    local_104 = (int **)0x512ffc;
    local_108 = (undefined1 *)FUN_00988f20();
    puStack_100 = (uint *)0xffffffff;
    local_104 = (int **)0x0;
    local_8._0_1_ = 0x34;
    puStack_10c = (uint *)0x51300b;
    FUN_00448aa0();
    if (0xf < local_3c) {
      puStack_100 = (uint *)local_50[0];
                    /* WARNING: Subroutine does not return */
      local_104 = (int **)&UNK_0051301a;
      FUN_00aae91b();
    }
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    if (0xf < local_78) {
      puStack_100 = (uint *)local_8c[0];
                    /* WARNING: Subroutine does not return */
      local_104 = (int **)&UNK_00513040;
      FUN_00aae91b();
    }
    local_78 = 0xf;
    local_7c = 0;
    local_8c[0] = local_8c[0] & 0xffffff00;
    if (0xf < local_5c) {
      puStack_100 = (uint *)local_70[0];
                    /* WARNING: Subroutine does not return */
      local_104 = (int **)&UNK_00513061;
      FUN_00aae91b();
    }
    local_5c = 0xf;
    local_60 = 0;
    local_70[0] = local_70[0] & 0xffffff00;
    if (0xf < local_b0) {
      puStack_100 = (uint *)local_c4[0];
                    /* WARNING: Subroutine does not return */
      local_104 = (int **)&UNK_00513085;
      FUN_00aae91b();
    }
    puStack_100 = (uint *)local_a0;
    local_b0 = 0xf;
    local_b4 = 0;
    local_c4[0] = local_c4[0] & 0xffffff00;
    local_8._0_1_ = 0x2f;
    local_104 = (int **)0x5130ae;
    FUN_009a9740();
    local_8 = (uint)local_8._1_3_ << 8;
    if (0xf < local_20) {
      puStack_100 = (uint *)local_34[0];
                    /* WARNING: Subroutine does not return */
      local_104 = (int **)&UNK_005130bf;
      FUN_00aae91b();
    }
  }
  puStack_100 = (uint *)0x1;
  local_104 = (int **)&DAT_00dee2cc;
  local_108 = (undefined1 *)0x5130d0;
  FUN_00448740();
  puVar1 = *(undefined4 **)(param_4 + 0xd8);
  do {
    if (puVar1 == (undefined4 *)0x0) goto LAB_0051326e;
    local_14 = (int *)*puVar1;
    puVar1 = (undefined4 *)puVar1[2];
    puStack_100 = (uint *)0x5130f0;
    cVar5 = (**(code **)(*local_14 + 0x30))();
  } while ((cVar5 == '\0') || ((int *)local_14[0x16] != param_3));
  piStack_11c = (int *)0x51311d;
  FUN_009885d0();
  puStack_120 = local_50;
  piStack_11c = (int *)0x0;
  local_108 = (undefined1 *)FUN_009c98f0();
  puStack_100 = (uint *)0xffffffff;
  local_104 = (int **)0x0;
  local_8 = 0x35;
  puStack_10c = (uint *)0x51313c;
  FUN_00448aa0();
  local_8 = local_8 & 0xffffff00;
  if (0xf < local_3c) {
    puStack_100 = (uint *)local_50[0];
                    /* WARNING: Subroutine does not return */
    local_104 = (int **)&UNK_0051314e;
    FUN_00aae91b();
  }
  puStack_100 = (uint *)0x513161;
  FUN_009885d0();
  local_8 = 0x36;
  puStack_100 = (uint *)0x513175;
  FUN_009885d0();
  local_104 = (int **)local_a0;
  local_8._0_1_ = 0x37;
  local_108 = (undefined1 *)0x513188;
  puStack_100 = local_34;
  local_14 = (int *)FUN_009a8ee0();
  local_8._0_1_ = 0x38;
  puStack_100 = (uint *)0x513194;
  iVar7 = FUN_00475500();
  puStack_10c = (uint *)*(undefined8 *)(iVar7 + 0x6c);
  local_108 = (undefined1 *)((ulonglong)*(undefined8 *)(iVar7 + 0x6c) >> 0x20);
  local_104 = (int **)*(undefined8 *)(iVar7 + 0x74);
  puStack_100 = (uint *)((ulonglong)*(undefined8 *)(iVar7 + 0x74) >> 0x20);
  uStack_110 = 0x5131ba;
  FUN_009a9880();
  puStack_100 = local_c4;
  local_8._0_1_ = 0x39;
  local_104 = (int **)0x5131cf;
  local_108 = (undefined1 *)FUN_00988f20();
  puStack_100 = (uint *)0xffffffff;
  local_104 = (int **)0x0;
  local_8._0_1_ = 0x3a;
  puStack_10c = (uint *)0x5131de;
  FUN_00448aa0();
  if (0xf < local_3c) {
    puStack_100 = (uint *)local_50[0];
                    /* WARNING: Subroutine does not return */
    local_104 = (int **)&UNK_005131ed;
    FUN_00aae91b();
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  if (0xf < local_78) {
    puStack_100 = (uint *)local_8c[0];
                    /* WARNING: Subroutine does not return */
    local_104 = (int **)&UNK_00513213;
    FUN_00aae91b();
  }
  puStack_100 = (uint *)local_a0;
  local_78 = 0xf;
  local_7c = 0;
  local_8c[0] = local_8c[0] & 0xffffff00;
  local_8._0_1_ = 0x37;
  local_104 = (int **)0x513236;
  FUN_009a9740();
  if (0xf < local_20) {
    puStack_100 = (uint *)local_34[0];
                    /* WARNING: Subroutine does not return */
    local_104 = (int **)&UNK_00513244;
    FUN_00aae91b();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  if (0xf < local_b0) {
    puStack_100 = (uint *)local_c4[0];
                    /* WARNING: Subroutine does not return */
    local_104 = (int **)&UNK_0051326b;
    FUN_00aae91b();
  }
LAB_0051326e:
  if (*(char *)((int)param_3 + 0xbd) != '\0') {
    piStack_11c = (int *)0x513292;
    FUN_009885d0();
    puStack_120 = local_50;
    local_14 = (int *)CONCAT31(local_14._1_3_,*(int *)(param_4 + 0x158) != 0);
    piStack_11c = local_14;
    local_108 = (undefined1 *)FUN_009c98f0();
    puStack_100 = (uint *)0xffffffff;
    local_104 = (int **)0x0;
    local_8 = 0x3b;
    puStack_10c = (uint *)0x5132c3;
    FUN_00448aa0();
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_3c) {
      puStack_100 = (uint *)local_50[0];
                    /* WARNING: Subroutine does not return */
      local_104 = (int **)&UNK_005132d5;
      FUN_00aae91b();
    }
    puStack_100 = (uint *)0x5132e8;
    FUN_009885d0();
    local_8 = 0x3c;
    puStack_100 = (uint *)0x5132fc;
    FUN_009885d0();
    local_104 = (int **)local_a0;
    local_8._0_1_ = 0x3d;
    local_108 = (undefined1 *)0x51330f;
    puStack_100 = local_34;
    local_14 = (int *)FUN_009a8ee0();
    local_8._0_1_ = 0x3e;
    puStack_100 = (uint *)0x51331b;
    iVar7 = FUN_00475500();
    puStack_10c = (uint *)*(undefined8 *)(iVar7 + 0x6c);
    local_108 = (undefined1 *)((ulonglong)*(undefined8 *)(iVar7 + 0x6c) >> 0x20);
    local_104 = (int **)*(undefined8 *)(iVar7 + 0x74);
    puStack_100 = (uint *)((ulonglong)*(undefined8 *)(iVar7 + 0x74) >> 0x20);
    uStack_110 = 0x513341;
    FUN_009a9880();
    puStack_100 = local_c4;
    local_8._0_1_ = 0x3f;
    local_104 = (int **)0x513356;
    local_108 = (undefined1 *)FUN_00988f20();
    puStack_100 = (uint *)0xffffffff;
    local_104 = (int **)0x0;
    local_8._0_1_ = 0x40;
    puStack_10c = (uint *)0x513365;
    FUN_00448aa0();
    if (0xf < local_3c) {
      puStack_100 = (uint *)local_50[0];
                    /* WARNING: Subroutine does not return */
      local_104 = (int **)&UNK_00513374;
      FUN_00aae91b();
    }
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    if (0xf < local_78) {
      puStack_100 = (uint *)local_8c[0];
                    /* WARNING: Subroutine does not return */
      local_104 = (int **)&UNK_0051339a;
      FUN_00aae91b();
    }
    puStack_100 = (uint *)local_a0;
    local_78 = 0xf;
    local_7c = 0;
    local_8c[0] = local_8c[0] & 0xffffff00;
    local_8._0_1_ = 0x3d;
    local_104 = (int **)0x5133bd;
    FUN_009a9740();
    if (0xf < local_20) {
      puStack_100 = (uint *)local_34[0];
                    /* WARNING: Subroutine does not return */
      local_104 = (int **)&UNK_005133cb;
      FUN_00aae91b();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    if (0xf < local_b0) {
      puStack_100 = (uint *)local_c4[0];
                    /* WARNING: Subroutine does not return */
      local_104 = (int **)&UNK_005133f2;
      FUN_00aae91b();
    }
  }
  if (*(char *)((int)param_3 + 0xbe) != '\0') {
    puStack_100 = (uint *)0x513411;
    FUN_009885d0();
    local_104 = (int **)local_e0;
    local_8 = 0x41;
    local_108 = (undefined1 *)0x51342c;
    puStack_100 = local_34;
    local_104 = (int **)FUN_00475d50();
    local_8._0_1_ = 0x42;
    FUN_009885d0();
    local_8._0_1_ = 0x43;
    uVar6 = FUN_00512150(param_4,param_3);
    local_8._0_1_ = 0x42;
    FUN_009c98f0(local_c4,uVar6);
    local_8._0_1_ = 0x44;
    local_108 = (undefined1 *)0x513482;
    FUN_00988f20();
    local_8._0_1_ = 0x45;
    local_104 = (int **)0x513490;
    local_108 = (undefined1 *)FUN_00988f20();
    puStack_100 = (uint *)0xffffffff;
    local_104 = (int **)0x0;
    local_8._0_1_ = 0x46;
    puStack_10c = (uint *)0x51349f;
    FUN_00448aa0();
    if (0xf < local_3c) {
      puStack_100 = (uint *)local_50[0];
                    /* WARNING: Subroutine does not return */
      local_104 = (int **)&UNK_005134ae;
      FUN_00aae91b();
    }
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    if (0xf < local_78) {
      puStack_100 = (uint *)local_8c[0];
                    /* WARNING: Subroutine does not return */
      local_104 = (int **)&UNK_005134d1;
      FUN_00aae91b();
    }
    local_78 = 0xf;
    local_7c = 0;
    local_8c[0] = local_8c[0] & 0xffffff00;
    if (0xf < local_b0) {
      puStack_100 = (uint *)local_c4[0];
                    /* WARNING: Subroutine does not return */
      local_104 = (int **)&UNK_005134f5;
      FUN_00aae91b();
    }
    local_b0 = 0xf;
    local_b4 = 0;
    local_c4[0] = local_c4[0] & 0xffffff00;
    if (0xf < local_cc) {
      puStack_100 = (uint *)local_e0[0];
                    /* WARNING: Subroutine does not return */
      local_104 = (int **)&UNK_0051351f;
      FUN_00aae91b();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_cc = 0xf;
    local_d0 = 0;
    local_e0[0] = local_e0[0] & 0xffffff00;
    if (0xf < local_20) {
      puStack_100 = (uint *)local_34[0];
                    /* WARNING: Subroutine does not return */
      local_104 = (int **)&UNK_00513546;
      FUN_00aae91b();
    }
  }
  piVar2 = (int *)param_3[0x42];
  piVar4 = piVar2;
  do {
    if (piVar4 == (int *)0x0) {
LAB_005136f4:
      local_18 = (int *)param_3[0x3a];
      do {
        if (local_18 == (int *)0x0) {
          puStack_100 = (uint *)param_3;
          local_104 = (int **)local_50;
          local_108 = (undefined1 *)param_1;
          puStack_10c = (uint *)0x5138b5;
          local_108 = (undefined1 *)FUN_005117b0();
          puStack_100 = (uint *)0xffffffff;
          local_104 = (int **)0x0;
          local_8 = 0x51;
          puStack_10c = (uint *)0x5138c7;
          FUN_00448aa0();
          if (0xf < local_3c) {
            puStack_100 = (uint *)local_50[0];
                    /* WARNING: Subroutine does not return */
            local_104 = (int **)&UNK_005138d6;
            FUN_00aae91b();
          }
          ExceptionList = local_10;
          return param_2;
        }
        if ((*(char *)(*local_18 + 0x131) == '\0') ||
           (*(int *)(*(int *)(*(int *)(param_4 + 0x118) + *(int *)(*local_18 + 0x134) * 4) + 0x20)
            <= DAT_0125ceac)) {
          piStack_11c = (int *)0x2;
          local_104 = (int **)0xf;
          local_108 = (undefined1 *)0x0;
          puStack_120 = (uint *)&DAT_00dedc20;
          local_118[0] = 0;
          FUN_00409350();
          puStack_120 = local_50;
          piStack_11c = (int *)0x0;
          local_108 = (undefined1 *)FUN_009c98f0();
          puStack_100 = (uint *)0xffffffff;
          local_104 = (int **)0x0;
          local_8 = 0x4c;
          puStack_10c = (uint *)0x51377f;
          FUN_00448aa0();
          local_8 = local_8 & 0xffffff00;
          if (0xf < local_3c) {
            puStack_100 = (uint *)local_50[0];
                    /* WARNING: Subroutine does not return */
            local_104 = (int **)&UNK_00513791;
            FUN_00aae91b();
          }
          puStack_100 = (uint *)0x1;
          local_104 = (int **)&DAT_00dee2cc;
          local_20 = 0xf;
          local_24 = 0;
          local_34[0] = local_34[0] & 0xffffff00;
          local_108 = (undefined1 *)0x5137b0;
          FUN_00409350();
          local_8 = 0x4d;
          puStack_100 = local_c4;
          local_104 = (int **)0x5137c8;
          puStack_100 = (uint *)(**(code **)(*param_3 + 0x18))();
          local_104 = (int **)local_8c;
          local_8._0_1_ = 0x4e;
          local_108 = (undefined1 *)0x5137e3;
          FUN_0042c180();
          puStack_100 = local_34;
          local_8._0_1_ = 0x4f;
          local_104 = (int **)0x5137f8;
          local_108 = (undefined1 *)FUN_00988f20();
          puStack_100 = (uint *)0xffffffff;
          local_104 = (int **)0x0;
          local_8._0_1_ = 0x50;
          puStack_10c = (uint *)0x513807;
          FUN_00448aa0();
          if (0xf < local_3c) {
            puStack_100 = (uint *)local_50[0];
                    /* WARNING: Subroutine does not return */
            local_104 = (int **)&UNK_00513816;
            FUN_00aae91b();
          }
          local_3c = 0xf;
          local_40 = 0;
          local_50[0] = local_50[0] & 0xffffff00;
          if (0xf < local_78) {
            puStack_100 = (uint *)local_8c[0];
                    /* WARNING: Subroutine does not return */
            local_104 = (int **)&UNK_0051383c;
            FUN_00aae91b();
          }
          local_78 = 0xf;
          local_7c = 0;
          local_8c[0] = local_8c[0] & 0xffffff00;
          if (0xf < local_b0) {
            puStack_100 = (uint *)local_c4[0];
                    /* WARNING: Subroutine does not return */
            local_104 = (int **)&UNK_00513863;
            FUN_00aae91b();
          }
          local_8 = (uint)local_8._1_3_ << 8;
          local_b0 = 0xf;
          local_b4 = 0;
          local_c4[0] = local_c4[0] & 0xffffff00;
          if (0xf < local_20) {
            puStack_100 = (uint *)local_34[0];
                    /* WARNING: Subroutine does not return */
            local_104 = (int **)&UNK_0051388d;
            FUN_00aae91b();
          }
        }
        local_18 = (int *)local_18[2];
      } while( true );
    }
    iVar7 = *piVar4;
    for (piVar3 = piVar2; local_14 = piVar2, piVar3 != (int *)0x0; piVar3 = (int *)piVar3[2]) {
      if (*piVar3 == iVar7) {
        if ((*(char *)(iVar7 + 0x131) != '\0') &&
           (DAT_0125ceac <
            *(int *)(*(int *)(*(int *)(param_4 + 0x118) + *(int *)(iVar7 + 0x134) * 4) + 0x20))) {
          piStack_11c = (int *)&DAT_00dedc20;
          puStack_120 = (uint *)0x5135c7;
          FUN_004471e0();
          puStack_120 = local_50;
          piStack_11c = (int *)0x0;
          local_108 = (undefined1 *)FUN_009c98f0();
          puStack_100 = (uint *)0xffffffff;
          local_104 = (int **)0x0;
          local_8 = 0x47;
          puStack_10c = (uint *)0x5135e6;
          FUN_00448aa0();
          local_8 = local_8 & 0xffffff00;
          if (0xf < local_3c) {
            puStack_100 = (uint *)local_50[0];
                    /* WARNING: Subroutine does not return */
            local_104 = (int **)&UNK_005135f8;
            FUN_00aae91b();
          }
          puStack_100 = (uint *)&DAT_00dee2cc;
          local_104 = (int **)0x51360b;
          FUN_004471e0();
          local_8 = 0x48;
          puStack_100 = local_c4;
          local_104 = (int **)0x513623;
          puStack_100 = (uint *)(**(code **)(*param_3 + 0x18))();
          local_104 = (int **)local_8c;
          local_8._0_1_ = 0x49;
          local_108 = (undefined1 *)0x51363e;
          FUN_0042c180();
          puStack_100 = local_e0;
          local_8._0_1_ = 0x4a;
          local_104 = (int **)0x513656;
          local_108 = (undefined1 *)FUN_00988f20();
          puStack_100 = (uint *)0xffffffff;
          local_104 = (int **)0x0;
          local_8._0_1_ = 0x4b;
          puStack_10c = (uint *)0x513665;
          FUN_00448aa0();
          if (0xf < local_3c) {
            puStack_100 = (uint *)local_50[0];
                    /* WARNING: Subroutine does not return */
            local_104 = (int **)&UNK_00513674;
            FUN_00aae91b();
          }
          local_3c = 0xf;
          local_40 = 0;
          local_50[0] = local_50[0] & 0xffffff00;
          if (0xf < local_78) {
            puStack_100 = (uint *)local_8c[0];
                    /* WARNING: Subroutine does not return */
            local_104 = (int **)&UNK_0051369a;
            FUN_00aae91b();
          }
          local_78 = 0xf;
          local_7c = 0;
          local_8c[0] = local_8c[0] & 0xffffff00;
          if (0xf < local_b0) {
            puStack_100 = (uint *)local_c4[0];
                    /* WARNING: Subroutine does not return */
            local_104 = (int **)&UNK_005136c1;
            FUN_00aae91b();
          }
          local_8 = (uint)local_8._1_3_ << 8;
          local_b0 = 0xf;
          local_b4 = 0;
          local_c4[0] = local_c4[0] & 0xffffff00;
          if (0xf < local_cc) {
            puStack_100 = (uint *)local_e0[0];
                    /* WARNING: Subroutine does not return */
            local_104 = (int **)&UNK_005136f1;
            FUN_00aae91b();
          }
          goto LAB_005136f4;
        }
        break;
      }
    }
    piVar4 = (int *)piVar4[2];
  } while( true );
}

