// FUN_0052d1e0 @ 0052d1e0 body=[[0052d1e0, 0052d2cf] [0052d2d3, 0052d303] [0052d307, 0052d394] [0052d398, 0052d3c8] [0052d3cc, 0052d3e5] [0052d3e9, 0052d4a1] [0052d4a5, 0052d535] [0052d539, 0052d554] [0052d558, 0052d574] [0052d578, 0052d59a] [0052d59e, 0052d60f] [0052d613, 0052d670] [0052d674, 0052d927] [0052d92b, 0052d955] [0052d959, 0052d97e] [0052d982, 0052d9a7] [0052d9ab, 0052d9d0] [0052d9d4, 0052d9f9] [0052d9fd, 0052da22] [0052da26, 0052da4b] [0052da4f, 0052da6e] [0052da72, 0052da88] [0052da8c, 0052daa6] [0052daaa, 0052daff] [0052db03, 0052db12] [0052db16, 0052db2a]]


undefined1 * FUN_0052d1e0(uint param_1,undefined1 *param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int in_ECX;
  longlong lVar8;
  uint local_1ec;
  undefined8 uStack_1e8;
  uint *local_1e0;
  undefined **local_1c0;
  undefined4 local_1bc;
  byte local_1b8 [64];
  int local_178;
  undefined4 local_174;
  undefined4 local_170;
  uint local_164;
  undefined4 local_154;
  uint local_150;
  uint local_148;
  undefined4 local_138;
  uint local_134;
  uint local_12c;
  undefined4 local_11c;
  uint local_118;
  uint local_110 [4];
  undefined4 local_100;
  uint local_fc;
  uint local_f4;
  undefined4 local_e4;
  uint local_e0;
  uint local_d8 [4];
  undefined4 local_c8;
  uint local_c4;
  uint local_bc [4];
  undefined4 local_ac;
  uint local_a8;
  undefined4 local_a0;
  uint local_9c [4];
  undefined4 local_8c;
  uint local_88;
  uint local_80;
  int local_7c;
  uint local_78;
  undefined1 *local_74;
  uint local_6c;
  undefined4 local_5c;
  uint local_58;
  uint local_50;
  undefined4 local_40;
  uint local_3c;
  uint local_34;
  int local_28;
  undefined4 local_24;
  uint local_20;
  undefined1 *local_18;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00b818a8;
  local_10 = ExceptionList;
  iVar7 = *(int *)(param_3 + 0x60);
  for (; in_ECX != 0; in_ECX = in_ECX + -1) {
    iVar7 = *(int *)(iVar7 + 0x224);
  }
  ExceptionList = &local_10;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *param_2 = 0;
  local_8 = 0;
  local_a0 = 1;
  cVar4 = FUN_0052d150();
  local_3c = 0xf;
  local_40 = 0;
  local_50 = local_50 & 0xffffff00;
  if (cVar4 == '\0') {
    _local_1e0 = CONCAT44(0x52d331,local_1e0);
    FUN_00409350();
    local_8 = 5;
    _local_1e0 = CONCAT44(0x52d345,local_1e0);
    FUN_009a8ee0();
    local_8._0_1_ = 6;
    iVar5 = FUN_00475500();
    _local_1e0 = *(undefined8 *)(iVar5 + 0x6c);
    uStack_1e8._4_4_ = (uint *)0x52d372;
    uVar6 = FUN_009a9880();
    local_8._0_1_ = 7;
    _local_1e0 = CONCAT44(uVar6,0x52d382);
    FUN_00448aa0();
    if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_58 = 0xf;
    local_5c = 0;
    local_6c = local_6c & 0xffffff00;
    local_8._0_1_ = 8;
    FUN_009adb70();
    if (local_28 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  else {
    _local_1e0 = CONCAT44(0x52d26c,local_1e0);
    FUN_00409350();
    local_8 = 1;
    _local_1e0 = CONCAT44(0x52d280,local_1e0);
    FUN_009a8ee0();
    local_8._0_1_ = 2;
    iVar5 = FUN_00475500();
    _local_1e0 = *(undefined8 *)(iVar5 + 0x6c);
    uStack_1e8._4_4_ = (uint *)0x52d2ad;
    uVar6 = FUN_009a9880();
    local_8._0_1_ = 3;
    _local_1e0 = CONCAT44(uVar6,0x52d2bd);
    FUN_00448aa0();
    if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_58 = 0xf;
    local_5c = 0;
    local_6c = local_6c & 0xffffff00;
    local_8._0_1_ = 4;
    FUN_009adb70();
    if (local_28 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  local_8 = (uint)local_8._1_3_ << 8;
  if (0xf < local_3c) {
    local_20 = 0;
    local_24 = 0;
    local_28 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  uStack_1e8._0_4_ = *(undefined4 *)(iVar7 + 0x18);
  _local_1e0 = (ulonglong)param_1;
  uStack_1e8._4_4_ = &local_78;
  local_1ec = 0x52d40a;
  FUN_004da850();
  if (local_78 != 0 || local_74 != (undefined1 *)0x0) {
    local_80 = *(uint *)(param_1 + 0xe78);
    iVar5 = *(int *)(param_1 + 0xe7c);
    local_18 = (undefined1 *)&local_1ec;
    _local_1e0 = _local_1e0 & 0xffffffff;
    local_1ec = local_1ec & 0xffffff00;
    FUN_00409350(&DAT_00dedc20,2);
    if (((int)local_74 < iVar5) || (((int)local_74 <= iVar5 && (local_78 <= local_80)))) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    uVar6 = FUN_009c98f0(local_9c,!bVar3);
    local_8 = 9;
    _local_1e0 = CONCAT44(uVar6,0x52d48a);
    FUN_00448aa0();
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_3c = 0xf;
    local_40 = 0;
    local_50 = local_50 & 0xffffff00;
    _local_1e0 = CONCAT44(0x52d4c1,local_1e0);
    FUN_00409350();
    local_18 = &stack0xfffffe28;
    local_8 = 10;
    _local_1e0 = CONCAT44(2,local_bc);
    uStack_1e8._4_4_ = (uint *)0x52d4e6;
    FUN_00988bb0();
    local_8._0_1_ = 0xb;
    FUN_00988f20();
    local_8._0_1_ = 0xc;
    _local_1e0 = CONCAT44(0x52d510,local_1e0);
    uVar6 = FUN_0042c180();
    local_8._0_1_ = 0xd;
    _local_1e0 = CONCAT44(uVar6,0x52d523);
    FUN_00448aa0();
    if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_58 = 0xf;
    local_5c = 0;
    local_6c = local_6c & 0xffffff00;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_20 = 0xf;
    local_24 = 0;
    local_34 = local_34 & 0xffffff00;
    if (0xf < local_a8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_a8 = 0xf;
    local_ac = 0;
    local_bc[0] = local_bc[0] & 0xffffff00;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  _local_1e0 = _local_1e0 & 0xffffffff;
  local_1ec = local_1ec & 0xffffff00;
  FUN_00409350(&DAT_00dedc20,2);
  uVar6 = FUN_009c98f0(local_9c,*(int *)(iVar7 + 0x20) < *(int *)(*(int *)(iVar7 + 0x18) + 0xc4));
  local_8 = 0xe;
  _local_1e0 = CONCAT44(uVar6,0x52d5f8);
  FUN_00448aa0();
  local_8 = local_8 & 0xffffff00;
  if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_7c = *(undefined4 *)(iVar7 + 0x20);
  _local_1e0 = CONCAT44("LEVEL",local_9c);
  uStack_1e8._4_4_ = (uint *)0x52d643;
  uVar6 = FUN_004d6040();
  local_8 = 0xf;
  _local_1e0 = CONCAT44(uVar6,0x52d658);
  FUN_00448aa0();
  if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_1bc = 0x18d;
  local_1c0 = CGoodsPool::vftable;
  local_178 = 0;
  local_174 = 0;
  local_170 = 0;
  local_8 = 0x10;
  _local_1e0 = CONCAT44(local_1b8,0x52d6ac);
  _memset(local_1b8,0,0x40);
  FUN_00423920();
  local_8 = 0x11;
  iVar7 = *(int *)(iVar7 + 0x18);
  _local_1e0 = CONCAT44(0x52d6d9,local_1e0);
  FUN_0047dbb0();
  iVar7 = *(int *)(iVar7 + 300);
  uStack_1e8 = 0x8000;
  if ((((iVar7 != 0) && (uStack_1e8 = 0x8000, DAT_01258734 != 0)) &&
      (uStack_1e8 = 0x8000, iVar7 != DAT_01258734 + 0x10)) && (uStack_1e8 = 0x8000, iVar7 != 0)) {
    uVar2 = *(uint *)(*(int *)(param_1 + 0xbcc) + 0x18);
    uStack_1e8._4_4_ =
         (uint *)((((int)uVar2 >> 0x1f) << 0xf | uVar2 >> 0x11) << 0xf | (uVar2 & 0x1ffff) >> 2);
    _local_1e0 = 0x1f40000;
    uStack_1e8._0_4_ = uVar2 << 0x1e;
    local_1ec = 0x52d72d;
    lVar8 = __alldiv();
    uStack_1e8 = lVar8 + 0x8000;
  }
  _local_1e0 = CONCAT44(-(uint)(0x10000 < *(uint *)(param_1 + 0xe70)) - *(int *)(param_1 + 0xe74),
                        0x10000 - *(uint *)(param_1 + 0xe70));
  local_1ec = 0x52d762;
  __allmul();
  _local_1e0 = CONCAT44(&local_1c0,0x52d77a);
  FUN_0047de60();
  iVar7 = *(int *)(DAT_012587f0 + 0x10) - *(int *)(DAT_012587f0 + 0xc) >> 2;
  param_3 = 0;
  local_7c = iVar7;
  if (0 < iVar7) {
    do {
      piVar1 = (int *)(local_178 + (uint)local_1b8[param_3] * 8);
      if (*piVar1 != 0 || piVar1[1] != 0) {
        local_58 = 0xf;
        local_5c = 0;
        local_6c = local_6c & 0xffffff00;
        _local_1e0 = CONCAT44(0x52d7d8,local_1e0);
        FUN_00409350();
        local_8._0_1_ = 0x12;
        local_3c = 0xf;
        local_40 = 0;
        local_50 = local_50 & 0xffffff00;
        _local_1e0 = CONCAT44(0x52d7f8,local_1e0);
        FUN_00409350();
        local_8._0_1_ = 0x13;
        local_20 = 0xf;
        local_24 = 0;
        local_34 = local_34 & 0xffffff00;
        _local_1e0 = CONCAT44(0x52d818,local_1e0);
        FUN_00409350();
        local_8._0_1_ = 0x14;
        _local_1e0 = CONCAT44(0x52d835,local_1e0);
        FUN_005659c0();
        local_18 = &stack0xfffffe28;
        local_8._0_1_ = 0x15;
        _local_1e0 = CONCAT44(2,local_110);
        uStack_1e8._4_4_ = (uint *)0x52d85b;
        local_18 = (undefined1 *)FUN_00988bb0();
        local_8._0_1_ = 0x16;
        local_74 = &stack0xfffffe28;
        _local_1e0 = CONCAT44(2,local_d8);
        uStack_1e8._4_4_ = (uint *)0x52d899;
        FUN_00988bb0();
        local_8._0_1_ = 0x17;
        FUN_00988f20();
        local_8._0_1_ = 0x18;
        FUN_00988f20();
        local_8._0_1_ = 0x19;
        FUN_00988f20();
        local_8._0_1_ = 0x1a;
        FUN_00988f20();
        local_8._0_1_ = 0x1b;
        uVar6 = FUN_00988f20();
        local_8._0_1_ = 0x1c;
        _local_1e0 = CONCAT44(uVar6,0x52d90f);
        FUN_00448aa0();
        if (0xf < local_a8) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_a8 = 0xf;
        local_ac = 0;
        local_bc[0] = local_bc[0] & 0xffffff00;
        if (0xf < local_134) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_134 = 0xf;
        local_138 = 0;
        local_148 = local_148 & 0xffffff00;
        if (0xf < local_e0) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_e0 = 0xf;
        local_e4 = 0;
        local_f4 = local_f4 & 0xffffff00;
        if (0xf < local_150) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_150 = 0xf;
        local_154 = 0;
        local_164 = local_164 & 0xffffff00;
        if (0xf < local_118) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_118 = 0xf;
        local_11c = 0;
        local_12c = local_12c & 0xffffff00;
        if (0xf < local_c4) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_c4 = 0xf;
        local_c8 = 0;
        local_d8[0] = local_d8[0] & 0xffffff00;
        if (0xf < local_fc) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_fc = 0xf;
        local_100 = 0;
        local_110[0] = local_110[0] & 0xffffff00;
        if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_88 = 0xf;
        local_8c = 0;
        local_9c[0] = local_9c[0] & 0xffffff00;
        if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_20 = 0xf;
        local_24 = 0;
        local_34 = local_34 & 0xffffff00;
        if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_8 = CONCAT31(local_8._1_3_,0x11);
        local_3c = 0xf;
        local_40 = 0;
        local_50 = local_50 & 0xffffff00;
        iVar7 = local_7c;
        if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      }
      param_3 = param_3 + 1;
    } while (param_3 < iVar7);
  }
  _local_1e0 = CONCAT44(0x52dad9,local_1e0);
  uVar6 = (**(code **)(*(int *)(param_1 + 0xaa8) + 0x20))();
  local_8 = CONCAT31(local_8._1_3_,0x1d);
  _local_1e0 = 0xffffffff00000000;
  uStack_1e8._0_4_ = 0x52daeb;
  uStack_1e8._4_4_ = (uint *)uVar6;
  FUN_00448aa0();
  if (0xf < local_88) {
    _local_1e0 = CONCAT44(local_9c[0],&UNK_0052db00);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (local_178 != 0) {
    _local_1e0 = CONCAT44(local_178,&UNK_0052db13);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_2;
}

