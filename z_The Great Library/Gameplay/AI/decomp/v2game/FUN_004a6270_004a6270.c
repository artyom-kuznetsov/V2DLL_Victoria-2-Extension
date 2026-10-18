// FUN_004a6270 @ 004a6270 body=[[004a6270, 004a63bb] [004a63bf, 004a63e2] [004a63e6, 004a6416] [004a641a, 004a6434] [004a6438, 004a64c1] [004a64c5, 004a64e7] [004a64eb, 004a650b] [004a650f, 004a6529] [004a652d, 004a65a9] [004a65ad, 004a6637] [004a663b, 004a6663] [004a666c, 004a66e7] [004a66eb, 004a670f] [004a6715, 004a6795] [004a6799, 004a6876] [004a687a, 004a68a0] [004a68a4, 004a68c9] [004a68cd, 004a68f2] [004a68f6, 004a691b] [004a691f, 004a693e] [004a6942, 004a695b] [004a695f, 004a6aa6] [004a6aaa, 004a6c23] [004a6c27, 004a6c55] [004a6c59, 004a6c82] [004a6c86, 004a6ca9] [004a6cad, 004a6ccd] [004a6cd1, 004a6cfa] [004a6cfe, 004a6d27] [004a6d2b, 004a6d54] [004a6d58, 004a6d7b] [004a6d7f, 004a6d99] [004a6d9d, 004a6dc0] [004a6dc4, 004a6e6a] [004a6e6e, 004a6e8d] [004a6e91, 004a6ead] [004a6eb1, 004a6ed9] [004a6edd, 004a6f07]]


undefined4 FUN_004a6270(int param_1,undefined4 param_2)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  char cVar5;
  char *pcVar6;
  uint uVar7;
  bool bVar8;
  undefined1 uVar9;
  char *pcVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  undefined1 *puVar14;
  undefined1 auStack_1f0 [8];
  undefined4 uStack_1e8;
  undefined8 local_1e4;
  uint *local_1dc;
  undefined4 uVar15;
  uint local_1c8;
  uint local_1b4;
  uint local_148 [4];
  undefined4 local_138;
  uint local_134;
  uint local_12c [4];
  undefined4 local_11c;
  uint local_118;
  uint local_110 [4];
  undefined4 local_100;
  uint local_fc;
  uint local_f4 [4];
  undefined4 local_e4;
  uint local_e0;
  uint local_d8;
  undefined4 local_c8;
  uint local_c4;
  uint local_bc [4];
  undefined4 local_ac;
  uint local_a8;
  uint local_a0 [4];
  undefined4 local_90;
  uint local_8c;
  undefined8 local_84;
  uint local_78 [2];
  undefined1 local_70 [4];
  int local_6c;
  undefined4 local_68;
  uint local_64;
  undefined4 local_5c;
  undefined1 *local_58;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  undefined4 local_34;
  undefined1 *local_30;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b76985;
  local_10 = ExceptionList;
  local_58 = (undefined1 *)0x0;
  local_8 = 0;
  local_84 = CONCAT44(local_84._4_4_,*(undefined4 *)(*(int *)(param_1 + 0x6c) + 0x58));
  local_34 = *(undefined4 *)
              (*(int *)(DAT_012587e4 + 4) + *(int *)(*(int *)(param_1 + 0x6c) + 0x5c) * 4);
  pcVar6 = (&PTR_s_POP_BUILD_NEW_STATEBUILDING_00f09724)[*(int *)(param_1 + 0x7c)];
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  pcVar10 = pcVar6;
  do {
    cVar5 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar5 != '\0');
  _local_1dc = CONCAT44((int)pcVar10 - (int)(pcVar6 + 1),pcVar6);
  local_1e4 = CONCAT44(0x4a6334,(undefined4)local_1e4);
  ExceptionList = &local_10;
  FUN_00409350();
  _local_1dc = CONCAT44(local_50,local_70);
  local_8._0_1_ = 1;
  local_1e4 = CONCAT44(0x4a6345,(undefined4)local_1e4);
  FUN_009a8ee0();
  local_8._0_1_ = 2;
  _local_1dc = CONCAT44(0x4a6350,local_1dc);
  iVar11 = FUN_00475500();
  local_1e4 = *(undefined8 *)(iVar11 + 0x6c);
  _local_1dc = *(undefined8 *)(iVar11 + 0x74);
  uStack_1e8 = 0x4a6372;
  uVar12 = FUN_009a9880();
  _local_1dc = CONCAT44(uVar12,local_bc);
  local_8._0_1_ = 3;
  local_1e4 = CONCAT44(0x4a638d,(undefined4)local_1e4);
  uVar12 = FUN_0042c180();
  _local_1dc = 0xffffffff00000000;
  local_8._0_1_ = 4;
  local_1e4 = CONCAT44(uVar12,0x4a63a3);
  FUN_00408ed0();
  if (0xf < local_a8) {
    _local_1dc = CONCAT44(local_bc[0],&UNK_004a63bc);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_a8 = 0xf;
  local_ac = 0;
  local_bc[0] = local_bc[0] & 0xffffff00;
  if (0xf < local_18) {
    _local_1dc = CONCAT44(local_2c[0],&UNK_004a63e3);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  local_8._0_1_ = 5;
  _local_1dc = CONCAT44(0x4a63ff,local_1dc);
  FUN_009adb70();
  if (local_6c != 0) {
    _local_1dc = CONCAT44(0x4a640e,local_1dc);
    FUN_009e6a80();
    _local_1dc = CONCAT44(local_6c,&UNK_004a6417);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 0;
  uVar9 = (undefined1)local_8;
  local_8._0_1_ = 0;
  local_6c = 0;
  local_68 = 0;
  local_64 = 0;
  if (0xf < local_3c) {
    _local_1dc = CONCAT44(local_50[0],&UNK_004a6435);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (*(int *)(param_1 + 0x7c) == 4) goto LAB_004a6edd;
  _local_1dc = 0x300dfc7b4;
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  local_1e4 = CONCAT44(0x4a6461,(undefined4)local_1e4);
  FUN_00409350();
  local_8._0_1_ = 6;
  _local_1dc = CONCAT44(local_78,0x4a6476);
  uVar12 = (**(code **)(**(int **)(param_1 + 0x70) + 0x18))();
  local_8._0_1_ = 7;
  _local_1dc = CONCAT44(uVar12,0x4a648b);
  FUN_00988fa0();
  local_8._0_1_ = 8;
  _local_1dc = CONCAT44(local_50,0x4a64a0);
  uVar12 = FUN_00988f20();
  _local_1dc = 0xffffffff00000000;
  local_8._0_1_ = 9;
  local_1e4 = CONCAT44(uVar12,0x4a64b3);
  FUN_00448aa0();
  if (0xf < local_18) {
    _local_1dc = CONCAT44(local_2c[0],&UNK_004a64c2);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  if (0xf < local_a8) {
    _local_1dc = CONCAT44(local_bc[0],&UNK_004a64e8);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_a8 = 0xf;
  local_ac = 0;
  local_bc[0] = local_bc[0] & 0xffffff00;
  if (0xf < local_64) {
    _local_1dc = CONCAT44(local_78[0],&UNK_004a650c);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 0;
  uVar9 = (undefined1)local_8;
  local_8._0_1_ = 0;
  local_64 = 0xf;
  local_68 = 0;
  local_78[0] = local_78[0] & 0xffffff00;
  if (0xf < local_3c) {
    _local_1dc = CONCAT44(local_50[0],&UNK_004a652a);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  iVar11 = *(int *)(param_1 + 0x7c);
  local_84 = 0;
  if (iVar11 == 2) {
    _local_1dc = CONCAT44(0x4a654c,local_1dc);
    FUN_004dab20();
    puVar14 = local_58;
    local_84 = CONCAT44(local_84._4_4_,local_5c);
    _local_1dc = CONCAT44(local_a0,0x4a6569);
    uVar12 = (**(code **)(**(int **)(param_1 + 0x6c) + 0x20))();
    _local_1dc = CONCAT44(uVar12,local_2c);
    local_8._0_1_ = 10;
    local_1e4 = CONCAT44(0x4a6581,(undefined4)local_1e4);
    uVar12 = FUN_0042c180();
    _local_1dc = 0xffffffff00000000;
    local_8._0_1_ = 0xb;
    local_1e4 = CONCAT44(uVar12,0x4a6597);
    FUN_00448aa0();
    if (0xf < local_18) {
      _local_1dc = CONCAT44(local_2c[0],&UNK_004a65aa);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
LAB_004a6645:
    local_8._0_1_ = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    local_1c = 0;
    local_18 = 0xf;
    if (0xf < local_8c) {
      _local_1dc = CONCAT44(local_a0[0],&UNK_004a6664);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  else {
    local_8._0_1_ = uVar9;
    if (iVar11 == 3) {
      _local_1dc = CONCAT44(param_1 + 8,1);
      local_1e4 = CONCAT44(local_34,0x4a65df);
      puVar13 = (undefined4 *)FUN_004da800();
      puVar14 = (undefined1 *)puVar13[1];
      local_84 = CONCAT44(local_84._4_4_,*puVar13);
      _local_1dc = CONCAT44(local_a0,0x4a65fb);
      uVar12 = (**(code **)(**(int **)(param_1 + 0x6c) + 0x20))();
      _local_1dc = CONCAT44(uVar12,local_2c);
      local_8._0_1_ = 0xc;
      local_1e4 = CONCAT44(0x4a6613,(undefined4)local_1e4);
      uVar12 = FUN_0042c180();
      _local_1dc = 0xffffffff00000000;
      local_8._0_1_ = 0xd;
      local_1e4 = CONCAT44(uVar12,0x4a6629);
      FUN_00448aa0();
      if (0xf < local_18) {
        _local_1dc = CONCAT44(local_2c[0],&UNK_004a6638);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      goto LAB_004a6645;
    }
    if ((iVar11 == 0) || (iVar11 == 1)) {
      _local_1dc = CONCAT44(param_1 + 8,1);
      local_1e4 = CONCAT44(local_34,*(undefined4 *)(param_1 + 0x70));
      uStack_1e8 = 0x4a6692;
      puVar13 = (undefined4 *)FUN_004da720();
      puVar14 = (undefined1 *)puVar13[1];
      local_84 = CONCAT44(local_84._4_4_,*puVar13);
      _local_1dc = CONCAT44(local_a0,0x4a66ab);
      uVar12 = (**(code **)(**(int **)(param_1 + 0x6c) + 0x20))();
      _local_1dc = CONCAT44(uVar12,local_2c);
      local_8._0_1_ = 0xe;
      local_1e4 = CONCAT44(0x4a66c3,(undefined4)local_1e4);
      uVar12 = FUN_0042c180();
      _local_1dc = 0xffffffff00000000;
      local_8._0_1_ = 0xf;
      local_1e4 = CONCAT44(uVar12,0x4a66d9);
      FUN_00448aa0();
      if (0xf < local_18) {
        _local_1dc = CONCAT44(local_2c[0],&UNK_004a66e8);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8._0_1_ = 0;
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      if (0xf < local_8c) {
        _local_1dc = CONCAT44(local_a0[0],&UNK_004a6710);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    else {
      local_84._4_4_ = (undefined1 *)0x0;
      puVar14 = local_84._4_4_;
    }
  }
  local_8._0_1_ = 0;
  local_18 = 0xf;
  local_1c = 0;
  local_58 = auStack_1f0;
  uVar15 = (undefined4)((ulonglong)_local_1dc >> 0x20);
  _local_1dc = CONCAT44(uVar15,0xf);
  local_1e4 = local_1e4 & 0xffffffff;
  auStack_1f0[0] = 0;
  FUN_00409350(&DAT_00dedc20,2);
  if (((int)puVar14 < *(int *)(param_1 + 100)) ||
     (((int)puVar14 <= *(int *)(param_1 + 100) && ((uint)local_84 <= *(uint *)(param_1 + 0x60))))) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  uVar12 = FUN_009c98f0(local_a0,!bVar8);
  _local_1dc = 0xffffffff00000000;
  local_8._0_1_ = 0x10;
  local_1e4 = CONCAT44(uVar12,0x4a677e);
  FUN_00448aa0();
  local_8._0_1_ = 0;
  if (0xf < local_8c) {
    _local_1dc = CONCAT44(local_a0[0],&UNK_004a6796);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  _local_1dc = 0x200dfc7c8;
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  local_1e4 = CONCAT44(0x4a67b6,(undefined4)local_1e4);
  FUN_00409350();
  local_8._0_1_ = 0x11;
  _local_1dc = 0x200dfc7c4;
  local_64 = 0xf;
  local_68 = 0;
  local_78[0] = local_78[0] & 0xffffff00;
  local_1e4 = CONCAT44(0x4a67d2,(undefined4)local_1e4);
  FUN_00409350();
  local_58 = (undefined1 *)&local_1dc;
  local_8._0_1_ = 0x12;
  local_1e4 = ZEXT48(local_f4);
  _local_1dc = CONCAT44(puVar14,(int)local_84);
  uStack_1e8 = 0x4a67f3;
  uVar12 = FUN_00988bb0();
  local_8._0_1_ = 0x13;
  local_58 = (undefined1 *)&local_1dc;
  _local_1dc = *(undefined8 *)(param_1 + 0x60);
  local_1e4 = ZEXT48(local_110);
  uStack_1e8 = 0x4a681c;
  FUN_00988bb0();
  local_8._0_1_ = 0x14;
  _local_1dc = CONCAT44(local_78,0x4a6831);
  FUN_00988f20();
  local_8._0_1_ = 0x15;
  _local_1dc = CONCAT44(uVar12,0x4a6843);
  FUN_00988f20();
  local_8._0_1_ = 0x16;
  _local_1dc = CONCAT44(local_50,0x4a6855);
  uVar12 = FUN_00988f20();
  _local_1dc = 0xffffffff00000000;
  local_8._0_1_ = 0x17;
  local_1e4 = CONCAT44(uVar12,0x4a6868);
  FUN_00448aa0();
  if (0xf < local_18) {
    _local_1dc = CONCAT44(local_2c[0],&UNK_004a6877);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  if (0xf < local_a8) {
    _local_1dc = CONCAT44(local_bc[0],&UNK_004a68a1);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_a8 = 0xf;
  local_ac = 0;
  local_bc[0] = local_bc[0] & 0xffffff00;
  if (0xf < local_c4) {
    _local_1dc = CONCAT44(local_d8,&UNK_004a68ca);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_c4 = 0xf;
  local_c8 = 0;
  local_d8 = local_d8 & 0xffffff00;
  if (0xf < local_fc) {
    _local_1dc = CONCAT44(local_110[0],&UNK_004a68f3);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_fc = 0xf;
  local_100 = 0;
  local_110[0] = local_110[0] & 0xffffff00;
  if (0xf < local_e0) {
    _local_1dc = CONCAT44(local_f4[0],&UNK_004a691c);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_e0 = 0xf;
  local_e4 = 0;
  local_f4[0] = local_f4[0] & 0xffffff00;
  if (0xf < local_64) {
    _local_1dc = CONCAT44(local_78[0],&UNK_004a693f);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 0;
  local_64 = 0xf;
  local_68 = 0;
  local_78[0] = local_78[0] & 0xffffff00;
  if (0xf < local_3c) {
    _local_1dc = CONCAT44(local_50[0],&UNK_004a695c);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (*(int *)(param_1 + 0x7c) != 2) {
    if ((DAT_013f2d98 & 1) == 0) {
      DAT_013f2d98 = DAT_013f2d98 | 1;
      local_8._0_1_ = 0x18;
      _local_1dc = 0x13f2d40004a698a;
      FUN_00561bd0();
      _local_1dc = 0xc7f170004a6994;
      _atexit((_func_4879 *)&LAB_00c7f170);
    }
    local_8._0_1_ = 0;
    local_30 = *(undefined1 **)(param_1 + 0x70);
    _local_1dc = CONCAT44((int)local_30 + 0x60,&DAT_013f2d40);
    local_1e4 = CONCAT44(0x4a69b1,(undefined4)local_1e4);
    FUN_0047dbb0();
    local_1e4 = 0x1004a69c3;
    FUN_004daa10();
    local_1e4 = 0x13f2d40004a69cd;
    FUN_0047de60();
    iVar11 = 0;
    local_58 = (undefined1 *)(*(int *)(DAT_012587f0 + 0x10) - *(int *)(DAT_012587f0 + 0xc) >> 2);
    if (0 < (int)local_58) {
      do {
        piVar1 = (int *)(DAT_013f2d88 + (uint)(byte)(&DAT_013f2d48)[iVar11] * 8);
        if (*piVar1 != 0 || piVar1[1] != 0) {
          local_30 = auStack_1f0;
          uVar15 = (undefined4)((ulonglong)_local_1dc >> 0x20);
          _local_1dc = CONCAT44(uVar15,0xf);
          local_1e4 = local_1e4 & 0xffffffff;
          auStack_1f0[0] = 0;
          FUN_00409350(&DAT_00dedc20,2);
          puVar2 = (uint *)(*(int *)(param_1 + 0x50) + (uint)*(byte *)(param_1 + 0x10 + iVar11) * 8)
          ;
          uVar7 = puVar2[1];
          puVar3 = (uint *)(DAT_013f2d88 + (uint)(byte)(&DAT_013f2d48)[iVar11] * 8);
          uVar4 = puVar3[1];
          if (((int)uVar4 < (int)uVar7) || (((int)uVar4 <= (int)uVar7 && (*puVar3 <= *puVar2)))) {
            bVar8 = false;
          }
          else {
            bVar8 = true;
          }
          uVar12 = FUN_009c98f0(local_a0,!bVar8);
          _local_1dc = 0xffffffff00000000;
          local_8._0_1_ = 0x19;
          local_1e4 = CONCAT44(uVar12,0x4a6a8f);
          FUN_00448aa0();
          local_8._0_1_ = 0;
          if (0xf < local_8c) {
            _local_1dc = CONCAT44(local_a0[0],&UNK_004a6aa7);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          _local_1dc = 0x100dee2cc;
          local_a8 = 0xf;
          local_ac = 0;
          local_bc[0] = local_bc[0] & 0xffffff00;
          local_1e4 = CONCAT44(0x4a6ad3,(undefined4)local_1e4);
          FUN_00409350();
          local_8._0_1_ = 0x1a;
          _local_1dc = 0x100ded950;
          local_3c = 0xf;
          local_40 = 0;
          local_50[0] = local_50[0] & 0xffffff00;
          local_1e4 = CONCAT44(0x4a6aef,(undefined4)local_1e4);
          FUN_00409350();
          local_8._0_1_ = 0x1b;
          _local_1dc = 0x100dedc68;
          local_64 = 0xf;
          local_68 = 0;
          local_78[0] = local_78[0] & 0xffffff00;
          local_1e4 = CONCAT44(0x4a6b0b,(undefined4)local_1e4);
          FUN_00409350();
          local_8._0_1_ = 0x1c;
          _local_1dc = CONCAT44(local_a0,*(undefined4 *)(*(int *)(DAT_012587f0 + 0xc) + iVar11 * 4))
          ;
          local_1e4 = CONCAT44(0x4a6b27,(undefined4)local_1e4);
          local_34 = FUN_005659c0();
          local_8._0_1_ = 0x1d;
          local_30 = (undefined1 *)&local_1dc;
          _local_1dc = *(undefined8 *)(DAT_013f2d88 + (uint)(byte)(&DAT_013f2d48)[iVar11] * 8);
          local_1e4 = CONCAT44(2,local_12c);
          uStack_1e8 = 0x4a6b5e;
          local_30 = (undefined1 *)FUN_00988bb0();
          local_8._0_1_ = 0x1e;
          local_84 = CONCAT44(&local_1dc,(uint)local_84);
          _local_1dc = *(undefined8 *)
                        (*(int *)(param_1 + 0x50) + (uint)*(byte *)(param_1 + 0x10 + iVar11) * 8);
          local_1e4 = CONCAT44(2,local_148);
          uStack_1e8 = 0x4a6b93;
          FUN_00988bb0();
          local_8._0_1_ = 0x1f;
          _local_1dc = CONCAT44(local_78,0x4a6ba8);
          FUN_00988f20();
          local_8._0_1_ = 0x20;
          _local_1dc = CONCAT44(local_30,0x4a6bba);
          FUN_00988f20();
          local_8._0_1_ = 0x21;
          _local_1dc = CONCAT44(local_50,0x4a6bcf);
          FUN_00988f20();
          local_8._0_1_ = 0x22;
          _local_1dc = CONCAT44(local_34,0x4a6be4);
          FUN_00988f20();
          local_8._0_1_ = 0x23;
          _local_1dc = CONCAT44(local_bc,0x4a6bfc);
          uVar12 = FUN_00988f20();
          _local_1dc = 0xffffffff00000000;
          local_8._0_1_ = 0x24;
          local_1e4 = CONCAT44(uVar12,0x4a6c0f);
          FUN_00448aa0();
          if (0xf < local_e0) {
            _local_1dc = CONCAT44(local_f4[0],&UNK_004a6c24);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_e0 = 0xf;
          local_e4 = 0;
          local_f4[0] = local_f4[0] & 0xffffff00;
          if (0xf < local_fc) {
            _local_1dc = CONCAT44(local_110[0],&UNK_004a6c56);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_fc = 0xf;
          local_100 = 0;
          local_110[0] = local_110[0] & 0xffffff00;
          if (0xf < local_c4) {
            _local_1dc = CONCAT44(local_d8,&UNK_004a6c83);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_c4 = 0xf;
          local_c8 = 0;
          local_d8 = local_d8 & 0xffffff00;
          if (0xf < local_18) {
            _local_1dc = CONCAT44(local_2c[0],&UNK_004a6caa);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_18 = 0xf;
          local_1c = 0;
          local_2c[0] = local_2c[0] & 0xffffff00;
          if (0xf < local_1b4) {
            _local_1dc = CONCAT44(local_1c8,&UNK_004a6cce);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_1b4 = 0xf;
          local_1c8 = local_1c8 & 0xffffff00;
          if (0xf < local_134) {
            _local_1dc = CONCAT44(local_148[0],&UNK_004a6cfb);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_134 = 0xf;
          local_138 = 0;
          local_148[0] = local_148[0] & 0xffffff00;
          if (0xf < local_118) {
            _local_1dc = CONCAT44(local_12c[0],&UNK_004a6d28);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_118 = 0xf;
          local_11c = 0;
          local_12c[0] = local_12c[0] & 0xffffff00;
          if (0xf < local_8c) {
            _local_1dc = CONCAT44(local_a0[0],&UNK_004a6d55);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_8c = 0xf;
          local_90 = 0;
          local_a0[0] = local_a0[0] & 0xffffff00;
          if (0xf < local_64) {
            _local_1dc = CONCAT44(local_78[0],&UNK_004a6d7c);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_64 = 0xf;
          local_68 = 0;
          local_78[0] = local_78[0] & 0xffffff00;
          if (0xf < local_3c) {
            _local_1dc = CONCAT44(local_50[0],&UNK_004a6d9a);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_8._0_1_ = 0;
          local_3c = 0xf;
          local_40 = 0;
          local_50[0] = local_50[0] & 0xffffff00;
          if (0xf < local_a8) {
            _local_1dc = CONCAT44(local_bc[0],&UNK_004a6dc1);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < (int)local_58);
    }
  }
  uVar9 = (undefined1)local_8;
  if (*(int *)(param_1 + 0x74) != 0) {
    _local_1dc = CONCAT44(local_148,0x4a6deb);
    uVar12 = (**(code **)(**(int **)(param_1 + 0x74) + 0x1c))();
    _local_1dc = CONCAT44(uVar12,local_12c);
    local_8._0_1_ = 0x25;
    local_1e4 = CONCAT44(0x4a6e06,(undefined4)local_1e4);
    uVar12 = FUN_0042c180();
    local_8._0_1_ = 0x26;
    _local_1dc = 0x100dee2cc;
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    local_1e4 = CONCAT44(0x4a6e2c,(undefined4)local_1e4);
    FUN_00409350();
    local_8._0_1_ = 0x27;
    _local_1dc = CONCAT44(uVar12,0x4a6e3f);
    uVar12 = FUN_00988f20();
    _local_1dc = 0xffffffff00000000;
    local_8._0_1_ = 0x28;
    local_1e4 = CONCAT44(uVar12,0x4a6e52);
    FUN_00448aa0();
    if (0xf < local_8c) {
      _local_1dc = CONCAT44(local_a0[0],&UNK_004a6e6b);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8c = 0xf;
    local_90 = 0;
    local_a0[0] = local_a0[0] & 0xffffff00;
    if (0xf < local_3c) {
      _local_1dc = CONCAT44(local_50[0],&UNK_004a6e8e);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    if (0xf < local_118) {
      _local_1dc = CONCAT44(local_12c[0],&UNK_004a6eae);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 0;
    local_118 = 0xf;
    local_11c = 0;
    local_12c[0] = local_12c[0] & 0xffffff00;
    uVar9 = (undefined1)local_8;
    if (0xf < local_134) {
      _local_1dc = CONCAT44(local_148[0],&UNK_004a6eda);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
LAB_004a6edd:
  local_8._0_1_ = uVar9;
  _local_1dc = CONCAT44(param_2,0x4a6eec);
  FUN_0040c830();
  _local_1dc = CONCAT44(0x4a6ef3,local_1dc);
  FUN_00459820();
  ExceptionList = local_10;
  return param_2;
}

