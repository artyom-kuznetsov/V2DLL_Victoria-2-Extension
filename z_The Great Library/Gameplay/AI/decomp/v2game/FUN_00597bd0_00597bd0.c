// FUN_00597bd0 @ 00597bd0 body=[[00597bd0, 00597ed2] [00597ed6, 00597ef9] [00597efd, 00597f89] [00597f8d, 00597fb0] [00597fb4, 00597fde] [00597fe2, 0059800a] [0059800e, 00598099] [0059809d, 005980c7] [005980cb, 005980ef] [005980f3, 00598112] [00598116, 005981ca] [005981ce, 005981fa] [005981fe, 00598226] [0059822a, 00598306] [0059830a, 00598336] [0059833a, 00598364] [00598368, 00598392] [00598396, 005983c4] [005983c8, 005984ab] [005984af, 005984de] [005984e2, 0059850c] [00598510, 00598534] [00598538, 00598557] [0059855b, 005985fb] [005985ff, 0059861a] [0059861e, 00598643] [00598647, 005986b8] [005986bc, 005986d7] [005986db, 00598700] [00598704, 005987e5] [005987e9, 00598806] [0059880a, 0059882f] [00598833, 005988be]]


undefined1 * FUN_00597bd0(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  undefined8 uVar10;
  uint *local_1c8;
  uint *local_1c4;
  uint local_19c;
  undefined4 *local_194 [4];
  undefined4 local_184;
  uint local_180;
  undefined4 *local_178;
  undefined4 local_168;
  uint local_164;
  undefined4 *local_15c;
  undefined4 local_14c;
  uint local_148;
  undefined4 *local_140;
  undefined4 local_130;
  uint local_12c;
  undefined4 *local_124;
  undefined4 local_114;
  uint local_110;
  undefined4 *local_108;
  undefined4 local_f8;
  uint local_f4;
  undefined4 local_ec;
  undefined4 *local_e8;
  undefined4 *local_e4;
  int local_e0;
  undefined4 *local_d8;
  undefined4 *local_d4 [4];
  undefined4 local_c4;
  uint local_c0;
  undefined4 *local_b8 [4];
  undefined4 local_a8;
  uint local_a4;
  undefined4 *local_9c;
  undefined4 local_8c;
  uint local_88;
  int local_80;
  undefined4 *local_7c [4];
  undefined4 local_6c;
  uint local_68;
  undefined4 *local_60;
  undefined4 local_50;
  uint local_4c;
  int local_40;
  undefined4 *local_38 [4];
  undefined4 local_28;
  uint local_24;
  int local_1c;
  undefined4 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b722cd;
  local_10 = ExceptionList;
  local_8 = 0;
  local_ec = 0;
  local_1c4 = (uint *)0x0;
  ExceptionList = &local_10;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *(undefined4 *)(param_2 + 0x10) = 0;
  local_1c8 = (uint *)&DAT_00ded94d;
  *param_2 = 0;
  FUN_00409350();
  local_8 = 0;
  local_ec = 1;
  local_1c4 = (uint *)0x597c34;
  local_14 = (undefined1 *)FUN_00967f50();
  local_1c4 = (uint *)0x597c42;
  iVar3 = FUN_00967f50();
  if ((local_14 != (undefined1 *)0x0) && (iVar3 != 0)) {
    puVar9 = *(uint **)(*(int *)((int)local_14 + 0x38) + 0x248);
    local_1c4 = (uint *)&local_80;
    local_1c8 = param_1;
    local_18 = puVar9;
    FUN_00596fd0();
    local_1c4 = (uint *)0x597c7d;
    FUN_005946a0();
    local_1c4 = (uint *)0x597c87;
    FUN_00594230();
    local_1c4 = (uint *)((int)param_1 >> 0x1f);
    local_1c8 = param_1;
    local_e4 = param_1;
    local_e0 = (int)local_1c4;
    uVar4 = __allmul(local_80 + (int)puVar9);
    local_1c4 = (uint *)0x0;
    local_1c8 = (uint *)0x3e8;
    puVar5 = (uint *)__alldiv(uVar4);
    puVar9 = *(uint **)(*(int *)(iVar3 + 0x38) + 0x244);
    puVar6 = puVar5;
    local_d8 = puVar9;
    if (0 < (int)puVar9) {
      local_1c4 = (uint *)0x0;
      local_1c8 = (uint *)0x3e8;
      uVar4 = __allmul(puVar5);
      local_1c4 = (uint *)((int)puVar9 >> 0x1f);
      local_1c8 = puVar9;
      puVar6 = (uint *)__alldiv(uVar4);
    }
    param_1 = (uint *)0x0;
    if (0 < (int)puVar5) {
      if (puVar5 == (uint *)0x0) {
        param_1 = (uint *)0xffffffff;
      }
      else if ((int)puVar6 + 0x189373U < 0x39580e) {
        param_1 = (uint *)(((int)puVar6 * 1000) / (int)puVar5);
      }
      else {
        local_1c4 = (uint *)0x0;
        local_1c8 = (uint *)0x3e8;
        local_40 = (int)puVar5 >> 0x1f;
        uVar4 = __allmul(puVar6);
        local_1c4 = (uint *)local_40;
        local_1c8 = puVar5;
        param_1 = (uint *)__alldiv(uVar4);
        local_40 = (int)param_1 >> 0x1f;
      }
    }
    puVar9 = *(uint **)(iVar3 + 0x34);
    local_1c4 = (uint *)0x41280000;
    local_1c8 = (uint *)0x597d71;
    local_e8 = puVar9;
    FUN_00401000();
    local_1c4 = (uint *)0x597d79;
    iVar7 = FUN_00b31c00();
    local_1c4 = (uint *)0x0;
    local_1c8 = (uint *)0x3e8;
    iVar7 = __alldiv((longlong)iVar7 * (longlong)(int)puVar9);
    puVar9 = (uint *)(iVar7 + 1000);
    if ((int)puVar9 < 1000) {
      puVar9 = (uint *)0x3e8;
    }
    else if (2000 < (int)puVar9) {
      puVar9 = (uint *)0x7d0;
    }
    local_1c4 = (uint *)0x0;
    local_1c8 = (uint *)0x3e8;
    local_40 = (int)puVar6 >> 0x1f;
    uVar10 = __allmul(puVar6);
    local_1c = (int)((ulonglong)uVar10 >> 0x20);
    local_1c4 = (uint *)((int)puVar9 >> 0x1f);
    local_1c8 = puVar9;
    iVar8 = __alldiv((int)uVar10);
    iVar7 = local_40;
    local_1c = 0;
    if (0 < (int)puVar6) {
      if (puVar6 == (uint *)0x0) {
        local_1c = -1;
      }
      else if (iVar8 + 0x189373U < 0x39580e) {
        local_1c = (iVar8 * 1000) / (int)puVar6;
      }
      else {
        local_1c4 = (uint *)0x0;
        local_1c8 = (uint *)0x3e8;
        uVar4 = __allmul(iVar8);
        local_1c4 = (uint *)iVar7;
        local_1c8 = puVar6;
        local_1c = __alldiv(uVar4);
        local_40 = local_1c >> 0x1f;
      }
    }
    if ((*(int *)(iVar3 + 0x74) == 0) || (*(char *)(*(int *)(iVar3 + 0x74) + 0x164) == '\0')) {
      iVar7 = *(int *)(iVar3 + 0x40);
    }
    else {
      iVar7 = 0;
    }
    if (iVar7 < 1) {
      local_1c4 = (uint *)0x0;
      local_1c8 = (uint *)0x3e8;
      iVar8 = __alldiv((longlong)*(int *)(*(int *)(DAT_012586dc + 0x20) + 0x78) * (longlong)iVar8);
    }
    puVar2 = local_14;
    local_40 = *(int *)((int)local_14 + 0x3c);
    local_1c4 = (uint *)0x0;
    local_1c8 = (uint *)0x3e8;
    local_1c8 = (uint *)__alldiv((longlong)local_40 * (longlong)iVar8);
    local_1c4 = (uint *)0x1;
    local_14 = (undefined1 *)&local_1c8;
    local_1c4 = (uint *)FUN_00988a50();
    local_1c8 = (uint *)local_7c;
    local_8 = 1;
    FUN_0042c180();
    local_1c4 = (uint *)0xffffffff;
    local_8._0_1_ = 2;
    local_1c8 = (uint *)0x0;
    FUN_00408ed0();
    if (0xf < local_68) {
      local_1c4 = local_7c[0];
                    /* WARNING: Subroutine does not return */
      local_1c8 = (uint *)&UNK_00597ed3;
      FUN_00aae91b();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_68 = 0xf;
    local_6c = 0;
    local_7c[0] = (undefined4 *)((uint)local_7c[0] & 0xffffff00);
    if (0xf < local_24) {
      local_1c4 = local_38[0];
                    /* WARNING: Subroutine does not return */
      local_1c8 = (uint *)&UNK_00597efa;
      FUN_00aae91b();
    }
    piVar1 = *(int **)((int)puVar2 + 0x38);
    local_1c4 = (uint *)0x1;
    local_14 = (undefined1 *)&local_1c8;
    local_1c8 = local_18;
    local_18 = (undefined4 *)FUN_00988a50();
    local_8 = 3;
    local_1c4 = (uint *)local_b8;
    local_1c8 = (uint *)0x597f30;
    (**(code **)(*piVar1 + 0x18))();
    local_1c8 = local_18;
    local_8._0_1_ = 4;
    local_1c8 = (uint *)FUN_0043ec10();
    local_8._0_1_ = 5;
    uVar4 = FUN_00988fa0();
    local_1c8 = (uint *)0xffffffff;
    local_8._0_1_ = 6;
    FUN_00448aa0(uVar4);
    if (0xf < local_68) {
      local_1c8 = local_7c[0];
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_68 = 0xf;
    local_6c = 0;
    local_7c[0] = (undefined4 *)((uint)local_7c[0] & 0xffffff00);
    if (0xf < local_88) {
      local_1c8 = local_9c;
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_88 = 0xf;
    local_8c = 0;
    local_9c = (undefined4 *)((uint)local_9c & 0xffffff00);
    if (0xf < local_a4) {
      local_1c8 = local_b8[0];
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_a4 = 0xf;
    local_a8 = 0;
    local_b8[0] = (undefined4 *)((uint)local_b8[0] & 0xffffff00);
    if (0xf < local_24) {
      local_1c8 = local_38[0];
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0 < local_80) {
      local_1c8 = (uint *)0x2;
      local_18 = (undefined4 *)&stack0xfffffe34;
      local_1c8 = (uint *)FUN_00988a50(local_38);
      local_8 = 7;
      local_1c8 = (uint *)FUN_00988fa0();
      local_8._0_1_ = 8;
      uVar4 = FUN_0042c180();
      local_8._0_1_ = 9;
      uVar4 = FUN_00988fa0(uVar4);
      local_1c8 = (uint *)0xffffffff;
      local_8._0_1_ = 10;
      FUN_00448aa0(uVar4);
      if (0xf < local_a4) {
        local_1c8 = local_b8[0];
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_a4 = 0xf;
      local_a8 = 0;
      local_b8[0] = (undefined4 *)((uint)local_b8[0] & 0xffffff00);
      if (0xf < local_88) {
        local_1c8 = local_9c;
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_88 = 0xf;
      local_8c = 0;
      local_9c = (undefined4 *)((uint)local_9c & 0xffffff00);
      if (0xf < local_68) {
        local_1c8 = local_7c[0];
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8 = (uint)local_8._1_3_ << 8;
      local_68 = 0xf;
      local_6c = 0;
      local_7c[0] = (undefined4 *)((uint)local_7c[0] & 0xffffff00);
      if (0xf < local_24) {
        local_1c8 = local_38[0];
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    local_68 = 0xf;
    local_6c = 0;
    local_88 = 0xf;
    local_8c = 0;
    local_a4 = 0xf;
    local_a8 = 0;
    local_1c8 = (uint *)0x1;
    local_18 = (undefined4 *)&stack0xfffffe34;
    FUN_00401000(0x47c35040);
    local_14 = (undefined1 *)FUN_00b31c00();
    uVar10 = __allmul(local_14,(int)local_14 >> 0x1f,local_e4,local_e0);
    __alldiv(uVar10,1000,0);
    local_1c8 = (uint *)FUN_00988a50(local_7c);
    local_8 = 0xb;
    uVar4 = FUN_0042c180();
    local_8._0_1_ = 0xc;
    uVar4 = FUN_00988fa0(uVar4);
    local_1c8 = (uint *)0xffffffff;
    local_8._0_1_ = 0xd;
    FUN_00448aa0(uVar4);
    if (0xf < local_a4) {
      local_1c8 = local_b8[0];
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_a4 = 0xf;
    local_a8 = 0;
    local_b8[0] = (undefined4 *)((uint)local_b8[0] & 0xffffff00);
    if (0xf < local_88) {
      local_1c8 = local_9c;
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_88 = 0xf;
    local_8c = 0;
    local_9c = (undefined4 *)((uint)local_9c & 0xffffff00);
    if (0xf < local_68) {
      local_1c8 = local_7c[0];
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_68 = 0xf;
    local_6c = 0;
    local_7c[0] = (undefined4 *)((uint)local_7c[0] & 0xffffff00);
    if (0 < (int)param_1) {
      local_1c8 = (uint *)0x1;
      local_18 = (undefined4 *)&stack0xfffffe34;
      __alldiv((longlong)(int)local_14 * (longlong)(int)param_1,1000,0);
      local_1c8 = (uint *)FUN_00988a50(local_194);
      local_8 = 0xe;
      puVar9 = (uint *)FUN_00988fa0();
      local_8._0_1_ = 0xf;
      local_1c8 = local_d8;
      FUN_00988970();
      local_8._0_1_ = 0x10;
      local_1c8 = puVar9;
      local_1c8 = (uint *)FUN_0043ec10();
      local_8._0_1_ = 0x11;
      uVar4 = FUN_00988fa0();
      local_1c8 = (uint *)0xffffffff;
      local_8._0_1_ = 0x12;
      FUN_00448aa0(uVar4);
      if (0xf < local_19c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      if (0xf < local_12c) {
        local_1c8 = local_140;
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_12c = 0xf;
      local_130 = 0;
      local_140 = (undefined4 *)((uint)local_140 & 0xffffff00);
      if (0xf < local_164) {
        local_1c8 = local_178;
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_164 = 0xf;
      local_168 = 0;
      local_178 = (undefined4 *)((uint)local_178 & 0xffffff00);
      if (0xf < local_f4) {
        local_1c8 = local_108;
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8 = (uint)local_8._1_3_ << 8;
      local_f4 = 0xf;
      local_f8 = 0;
      local_108 = (undefined4 *)((uint)local_108 & 0xffffff00);
      if (0xf < local_180) {
        local_1c8 = local_194[0];
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_184 = 0;
      local_180 = 0xf;
      local_194[0] = (undefined4 *)((uint)local_194[0] & 0xffffff00);
    }
    if (0 < local_1c) {
      local_1c8 = (uint *)0x1;
      __alldiv((longlong)(int)local_14 * (longlong)local_1c,1000,0);
      local_1c8 = (uint *)FUN_00988a50(local_38);
      local_8 = 0x13;
      puVar9 = (uint *)FUN_00988fa0();
      local_8._0_1_ = 0x14;
      local_1c8 = local_e8;
      FUN_00988970();
      local_8._0_1_ = 0x15;
      local_1c8 = puVar9;
      local_1c8 = (uint *)FUN_0043ec10();
      local_8._0_1_ = 0x16;
      uVar4 = FUN_00988fa0();
      local_1c8 = (uint *)0xffffffff;
      local_8._0_1_ = 0x17;
      FUN_00448aa0(uVar4);
      if (0xf < local_148) {
        local_1c8 = local_15c;
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_148 = 0xf;
      local_14c = 0;
      local_15c = (undefined4 *)((uint)local_15c & 0xffffff00);
      if (0xf < local_110) {
        local_1c8 = local_124;
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_110 = 0xf;
      local_114 = 0;
      local_124 = (undefined4 *)((uint)local_124 & 0xffffff00);
      if (0xf < local_c0) {
        local_1c8 = local_d4[0];
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_c0 = 0xf;
      local_c4 = 0;
      local_d4[0] = (undefined4 *)((uint)local_d4[0] & 0xffffff00);
      if (0xf < local_4c) {
        local_1c8 = local_60;
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8 = (uint)local_8._1_3_ << 8;
      local_4c = 0xf;
      local_50 = 0;
      local_60 = (undefined4 *)((uint)local_60 & 0xffffff00);
      if (0xf < local_24) {
        local_1c8 = local_38[0];
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_24 = 0xf;
      local_28 = 0;
      local_38[0] = (undefined4 *)((uint)local_38[0] & 0xffffff00);
    }
    if ((*(int *)(iVar3 + 0x74) == 0) || (*(char *)(*(int *)(iVar3 + 0x74) + 0x164) == '\0')) {
      iVar7 = *(int *)(iVar3 + 0x40);
    }
    else {
      iVar7 = 0;
    }
    if (iVar7 < 1) {
      local_1c8 = (uint *)0x2;
      local_1c8 = (uint *)FUN_00988a50(local_d4);
      local_8 = 0x18;
      uVar4 = FUN_0042c180();
      local_8._0_1_ = 0x19;
      uVar4 = FUN_00988fa0(uVar4);
      local_1c8 = (uint *)0xffffffff;
      local_8._0_1_ = 0x1a;
      FUN_00448aa0(uVar4);
      if (0xf < local_24) {
        local_1c8 = local_38[0];
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_24 = 0xf;
      local_28 = 0;
      local_38[0] = (undefined4 *)((uint)local_38[0] & 0xffffff00);
      if (0xf < local_4c) {
        local_1c8 = local_60;
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8 = (uint)local_8._1_3_ << 8;
      local_4c = 0xf;
      local_50 = 0;
      local_60 = (undefined4 *)((uint)local_60 & 0xffffff00);
      if (0xf < local_c0) {
        local_1c8 = local_d4[0];
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    if (local_40 < 100000) {
      local_1c8 = (uint *)0x2;
      local_1c8 = (uint *)FUN_00988a50(local_d4);
      local_8 = 0x1b;
      uVar4 = FUN_0042c180();
      local_8._0_1_ = 0x1c;
      uVar4 = FUN_00988fa0(uVar4);
      local_1c8 = (uint *)0xffffffff;
      local_8._0_1_ = 0x1d;
      FUN_00448aa0(uVar4);
      if (0xf < local_24) {
        local_1c8 = local_38[0];
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_24 = 0xf;
      local_28 = 0;
      local_38[0] = (undefined4 *)((uint)local_38[0] & 0xffffff00);
      if (0xf < local_4c) {
        local_1c8 = local_60;
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8 = (uint)local_8._1_3_ << 8;
      local_4c = 0xf;
      local_50 = 0;
      local_60 = (undefined4 *)((uint)local_60 & 0xffffff00);
      if (0xf < local_c0) {
        local_1c8 = local_d4[0];
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    param_1 = *(uint **)(*(int *)(iVar3 + 0x38) + 0x250);
    local_1c8 = (uint *)0x4477a001;
    FUN_00401000();
    local_1c8 = (uint *)0x59872e;
    iVar3 = FUN_00b31c00();
    if ((int)param_1 < 0) {
      param_1 = (uint *)0x0;
    }
    else if (iVar3 < (int)param_1) {
      param_1 = (uint *)iVar3;
    }
    local_1c8 = (uint *)0x0;
    uVar10 = __allmul(1000 - (int)param_1,1000 - (int)param_1 >> 0x1f);
    local_1c8 = (uint *)0x0;
    iVar3 = __alldiv(uVar10);
    local_1c8 = (uint *)0x2;
    __alldiv((longlong)(int)local_14 * (longlong)iVar3,1000,0);
    local_1c8 = (uint *)FUN_00988a50(local_d4);
    local_8 = 0x1e;
    uVar4 = FUN_0042c180();
    local_8._0_1_ = 0x1f;
    uVar4 = FUN_00988fa0(uVar4);
    local_1c8 = (uint *)0xffffffff;
    local_8._0_1_ = 0x20;
    FUN_00448aa0(uVar4);
    if (0xf < local_24) {
      local_1c8 = local_38[0];
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_24 = 0xf;
    local_28 = 0;
    local_38[0] = (undefined4 *)((uint)local_38[0] & 0xffffff00);
    if (0xf < local_4c) {
      local_1c8 = local_60;
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_4c = 0xf;
    local_50 = 0;
    local_60 = (undefined4 *)((uint)local_60 & 0xffffff00);
    if (0xf < local_c0) {
      local_1c8 = local_d4[0];
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0 < (int)param_1) {
      local_1c8 = (uint *)0x2;
      local_1c8 = (uint *)FUN_00988a50(local_d4);
      local_8 = 0x21;
      uVar4 = FUN_0042c180();
      local_8._0_1_ = 0x22;
      uVar4 = FUN_00988fa0(uVar4);
      local_1c8 = (uint *)0xffffffff;
      local_8 = CONCAT31(local_8._1_3_,0x23);
      FUN_00448aa0(uVar4);
      local_1c8 = (uint *)0x598897;
      FUN_00408ad0();
      local_1c8 = (uint *)0x59889f;
      FUN_00408ad0();
      local_1c8 = (uint *)0x5988aa;
      FUN_00408ad0();
    }
  }
  ExceptionList = local_10;
  return param_2;
}

