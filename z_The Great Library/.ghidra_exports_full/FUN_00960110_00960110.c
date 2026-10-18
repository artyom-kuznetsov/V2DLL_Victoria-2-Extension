// FUN_00960110 @ 00960110 body=[[00960110, 0096018c] [00960190, 009602ec] [009602f0, 00960403] [00960407, 00960431] [00960435, 0096045a] [0096045e, 00960483] [00960487, 009604ca] [009604ce, 009604f2] [009604f6, 00960512] [00960516, 00960535] [00960539, 00960553] [00960557, 009607a3] [009607a7, 009607cd] [009607d1, 009607f6] [009607fa, 0096081f] [00960823, 00960866] [0096086a, 00960894] [00960898, 009608b7] [009608bb, 009608d1] [009608d5, 009608f5] [009608f9, 00960a8e] [00960a92, 00960ab3] [00960ab7, 00960adc] [00960ae0, 00960b05] [00960b09, 00960b4c] [00960b50, 00960b7a] [00960b7e, 00960b9d] [00960ba1, 00960bb7] [00960bbb, 00960bdb] [00960bdf, 00960dbe] [00960dc2, 00960de3] [00960de7, 00960e0c] [00960e10, 00960e35] [00960e39, 00960e6e] [00960e72, 00960e91] [00960e95, 00960eab] [00960eaf, 00960ecf] [00960ed3, 00960f3d] [00960f41, 00960f5c] [00960f60, 00960fdd] [00960fe1, 00960ffc] [00961000, 00961152] [00961156, 0096116a]]


/* WARNING: Removing unreachable block (ram,0x00960952) */
/* WARNING: Removing unreachable block (ram,0x0096066b) */
/* WARNING: Removing unreachable block (ram,0x00960c9e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_00960110(int param_1,undefined1 *param_2)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 uVar6;
  char *pcVar7;
  undefined4 uVar8;
  int iVar9;
  char *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined8 local_154;
  uint local_140 [4];
  undefined4 local_130;
  uint local_12c;
  uint local_124;
  undefined4 local_114;
  uint local_110;
  uint local_108;
  undefined4 local_f8;
  uint local_f4;
  uint local_ec;
  undefined4 local_dc;
  uint local_d8;
  uint local_d0 [4];
  undefined4 local_c0;
  uint local_bc;
  uint local_b4 [4];
  undefined4 local_a4;
  uint local_a0;
  undefined1 local_98 [4];
  int local_94;
  undefined4 local_90;
  undefined4 local_8c;
  uint local_84 [4];
  undefined4 local_74;
  uint local_70;
  int local_68;
  undefined8 local_64;
  uint local_5c [4];
  undefined4 local_4c;
  uint local_48;
  uint local_40 [4];
  undefined4 local_30;
  uint local_2c;
  uint local_24;
  int local_20;
  undefined8 local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b64dea;
  local_10 = ExceptionList;
  local_1c._4_4_ = (undefined8 *)0x0;
  piVar2 = *(int **)(param_1 + 100);
  if ((((char)piVar2[0x4c] == 'R') && (*(char *)((int)piVar2 + 0x131) == 'E')) &&
     (*(char *)((int)piVar2 + 0x132) == 'B')) {
    local_154._4_4_ = local_5c;
    local_154._0_4_ = 0x960167;
    ExceptionList = &local_10;
    local_154._0_4_ = (**(code **)(*piVar2 + 0x1c))();
    local_8 = 0;
    FUN_0042c180();
    if (0xf < local_48) {
      local_154 = CONCAT44(local_154._4_4_,local_5c[0]);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    ExceptionList = local_10;
    return param_2;
  }
  local_12c = 0xf;
  local_130 = 0;
  local_140[0] = local_140[0] & 0xffffff00;
  local_8 = 1;
  local_64._0_4_ = piVar2[0x4a];
  local_68 = DAT_012586dc;
  local_154 = 0x1f40000;
  ExceptionList = &local_10;
  __alldiv();
  local_154 = 0x320000;
  local_64 = __alldiv();
  uVar11 = CONCAT44(DAT_013f2aac,DAT_013f2aa8);
  if ((_DAT_013f2ab0 & 1) == 0) {
    _DAT_013f2ab0 = _DAT_013f2ab0 | 1;
    local_154 = CONCAT44(0x96023e,(undefined4)local_154);
    uVar11 = FUN_00b31c36();
  }
  uVar12 = CONCAT44(DAT_013f2aa4,DAT_013f2aa0);
  DAT_013f2aac = (undefined4)((ulonglong)uVar11 >> 0x20);
  DAT_013f2aa8 = (undefined4)uVar11;
  if ((_DAT_013f2ab0 & 2) == 0) {
    _DAT_013f2ab0 = _DAT_013f2ab0 | 2;
    local_154 = CONCAT44(0x960264,(undefined4)local_154);
    uVar12 = FUN_00b31c36();
    uVar11 = CONCAT44(DAT_013f2aac,DAT_013f2aa8);
  }
  DAT_013f2aa4 = (undefined4)((ulonglong)uVar12 >> 0x20);
  DAT_013f2aa0 = (undefined4)uVar12;
  DAT_013f2aac = (undefined4)((ulonglong)uVar11 >> 0x20);
  DAT_013f2aa8 = (undefined4)uVar11;
  if ((_DAT_013f2ab0 & 4) == 0) {
    _DAT_013f2ab0 = _DAT_013f2ab0 | 4;
    local_154 = CONCAT44(0x96028a,(undefined4)local_154);
    _DAT_013f2a98 = FUN_00b31c36();
    uVar11 = CONCAT44(DAT_013f2aac,DAT_013f2aa8);
    uVar12 = CONCAT44(DAT_013f2aa4,DAT_013f2aa0);
  }
  DAT_013f2aac = (undefined4)((ulonglong)uVar11 >> 0x20);
  DAT_013f2aa8 = (undefined4)uVar11;
  DAT_013f2aa4 = (undefined4)((ulonglong)uVar12 >> 0x20);
  DAT_013f2aa0 = (undefined4)uVar12;
  local_154 = CONCAT44(&local_24,0x96029e);
  FUN_0095fcb0();
  local_154 = 0x300dfc7b4;
  local_2c = 0xf;
  local_30 = 0;
  local_40[0] = local_40[0] & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 2;
  if ((local_20 < DAT_0131b894) || ((local_20 <= DAT_0131b894 && (local_24 <= DAT_0131b890)))) {
    pcVar10 = &DAT_00df8518;
  }
  else {
    pcVar10 = &DAT_00e00684;
  }
  local_70 = 0xf;
  local_74 = 0;
  local_84[0] = local_84[0] & 0xffffff00;
  pcVar7 = pcVar10;
  do {
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  local_154 = CONCAT44((int)pcVar7 - (int)(pcVar10 + 1),pcVar10);
  FUN_00409350();
  local_8._0_1_ = 3;
  local_154 = 0xd00e360a8;
  local_a0 = 0xf;
  local_a4 = 0;
  local_b4[0] = local_b4[0] & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 4;
  local_1c._4_4_ = &local_154;
  uVar8 = FUN_00988bb0();
  local_154 = CONCAT44(local_b4,local_98);
  local_8._0_1_ = 5;
  local_1c._4_4_ = (undefined8 *)FUN_009a8ee0();
  local_8._0_1_ = 6;
  local_154 = CONCAT44(0x960376,(undefined4)local_154);
  iVar9 = FUN_00475500();
  local_154 = *(undefined8 *)(iVar9 + 0x74);
  FUN_009a9880();
  local_8._0_1_ = 7;
  local_154 = CONCAT44(local_84,0x9603b1);
  FUN_00988f20();
  local_8._0_1_ = 8;
  local_154 = CONCAT44(uVar8,0x9603c3);
  FUN_00988f20();
  local_8._0_1_ = 9;
  local_154 = CONCAT44(local_40,0x9603d8);
  FUN_00988f20();
  local_154 = 0xffffffff00000000;
  local_8._0_1_ = 10;
  FUN_00448aa0();
  if (0xf < local_110) {
    local_154 = CONCAT44(local_124,&UNK_00960404);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_110 = 0xf;
  local_114 = 0;
  local_124 = local_124 & 0xffffff00;
  if (0xf < local_f4) {
    local_154 = CONCAT44(local_108,&UNK_00960432);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_f4 = 0xf;
  local_f8 = 0;
  local_108 = local_108 & 0xffffff00;
  if (0xf < local_d8) {
    local_154 = CONCAT44(local_ec,&UNK_0096045b);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_d8 = 0xf;
  local_dc = 0;
  local_ec = local_ec & 0xffffff00;
  if (0xf < local_bc) {
    local_154 = CONCAT44(local_d0[0],&UNK_00960484);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_bc = 0xf;
  local_c0 = 0;
  local_d0[0] = local_d0[0] & 0xffffff00;
  local_8._0_1_ = 0xb;
  local_154 = CONCAT44(0x9604aa,(undefined4)local_154);
  FUN_009adb70();
  if (local_94 != 0) {
    local_154 = CONCAT44(0x9604bf,(undefined4)local_154);
    FUN_009e6a80();
    local_154 = CONCAT44(local_94,&UNK_009604cb);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_94 = 0;
  local_90 = 0;
  local_8c = 0;
  if (0xf < local_48) {
    local_154 = CONCAT44(local_5c[0],&UNK_009604f3);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_48 = 0xf;
  local_4c = 0;
  local_5c[0] = local_5c[0] & 0xffffff00;
  if (0xf < local_a0) {
    local_154 = CONCAT44(local_b4[0],&UNK_00960513);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_a0 = 0xf;
  local_a4 = 0;
  local_b4[0] = local_b4[0] & 0xffffff00;
  if (0xf < local_70) {
    local_154 = CONCAT44(local_84[0],&UNK_00960536);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 1;
  local_70 = 0xf;
  local_74 = 0;
  local_84[0] = local_84[0] & 0xffffff00;
  if (0xf < local_2c) {
    local_154 = CONCAT44(local_40[0],&UNK_00960554);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_2c = 0xf;
  local_30 = 0;
  local_40[0] = local_40[0] & 0xffffff00;
  local_24 = 0x8000;
  local_20 = 0;
  if (0 < *(int *)(*(int *)(*(int *)(param_1 + 100) + 0x188) + 0x84)) {
    local_24 = *(uint *)(*(int *)(local_68 + 0x50) + 0xe8);
    local_20 = *(undefined4 *)(*(int *)(local_68 + 0x50) + 0xec);
  }
  uVar11 = *(undefined8 *)(*(int *)(local_68 + 0x50) + 0xc0);
  local_1c._0_4_ = *(undefined4 *)(*(int *)(param_1 + 100) + 0x128);
  local_154 = 0x1f40000;
  local_1c = __alldiv();
  local_1c = local_1c + 0x8000;
  local_154 = uVar11;
  __allmul();
  local_154 = local_1c;
  __allmul();
  local_154 = CONCAT44(local_20,local_24);
  __allmul();
  local_154 = local_64;
  lVar13 = __allmul();
  if (CONCAT44(DAT_013f2aac,DAT_013f2aa8) < lVar13 >> 0xf) {
    local_154 = 0x300dfc7b4;
    local_a0 = 0xf;
    local_a4 = 0;
    local_b4[0] = local_b4[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0xc;
    local_154 = 0x500e360cc;
    local_70 = 0xf;
    local_74 = 0;
    local_84[0] = local_84[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0xd;
    local_154 = 0x1000e360b8;
    local_2c = 0xf;
    local_30 = 0;
    local_40[0] = local_40[0] & 0xffffff00;
    FUN_00409350();
    local_1c._4_4_ = &local_154;
    local_8._0_1_ = 0xe;
    local_154 = lVar13 >> 0xf;
    uVar8 = FUN_00988bb0();
    local_154 = CONCAT44(local_40,local_98);
    local_8._0_1_ = 0xf;
    local_1c._4_4_ = (undefined8 *)FUN_009a8ee0();
    local_8._0_1_ = 0x10;
    local_154 = CONCAT44(0x960720,(undefined4)local_154);
    iVar9 = FUN_00475500();
    local_154 = *(undefined8 *)(iVar9 + 0x74);
    FUN_009a9880();
    local_8._0_1_ = 0x11;
    local_154 = CONCAT44(local_84,0x96075b);
    FUN_00988f20();
    local_8._0_1_ = 0x12;
    local_154 = CONCAT44(uVar8,0x96076d);
    FUN_00988f20();
    local_8._0_1_ = 0x13;
    local_154 = CONCAT44(local_b4,0x960782);
    FUN_00988f20();
    local_8._0_1_ = 0x14;
    local_154 = 0xffffffff00000000;
    FUN_00448aa0();
    if (0xf < local_48) {
      local_154 = CONCAT44(local_5c[0],&UNK_009607a4);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_48 = 0xf;
    local_4c = 0;
    local_5c[0] = local_5c[0] & 0xffffff00;
    if (0xf < local_bc) {
      local_154 = CONCAT44(local_d0[0],&UNK_009607ce);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_bc = 0xf;
    local_c0 = 0;
    local_d0[0] = local_d0[0] & 0xffffff00;
    if (0xf < local_d8) {
      local_154 = CONCAT44(local_ec,&UNK_009607f7);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_d8 = 0xf;
    local_dc = 0;
    local_ec = local_ec & 0xffffff00;
    if (0xf < local_f4) {
      local_154 = CONCAT44(local_108,&UNK_00960820);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_f4 = 0xf;
    local_f8 = 0;
    local_108 = local_108 & 0xffffff00;
    local_8._0_1_ = 0x15;
    local_154 = CONCAT44(0x960846,(undefined4)local_154);
    FUN_009adb70();
    if (local_94 != 0) {
      local_154 = CONCAT44(0x96085b,(undefined4)local_154);
      FUN_009e6a80();
      local_154 = CONCAT44(local_94,&UNK_00960867);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_94 = 0;
    local_90 = 0;
    local_8c = 0;
    if (0xf < local_110) {
      local_154 = CONCAT44(local_124,&UNK_00960895);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_110 = 0xf;
    local_114 = 0;
    local_124 = local_124 & 0xffffff00;
    if (0xf < local_2c) {
      local_154 = CONCAT44(local_40[0],&UNK_009608b8);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_2c = 0xf;
    local_30 = 0;
    local_40[0] = local_40[0] & 0xffffff00;
    if (0xf < local_70) {
      local_154 = CONCAT44(local_84[0],&UNK_009608d2);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 1;
    local_70 = 0xf;
    local_74 = 0;
    local_84[0] = local_84[0] & 0xffffff00;
    if (0xf < local_a0) {
      local_154 = CONCAT44(local_b4[0],&UNK_009608f6);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  local_154 = *(undefined8 *)(*(int *)(local_68 + 0x50) + 200);
  __allmul();
  local_154 = CONCAT44(local_20,local_24);
  lVar13 = __allmul();
  if (CONCAT44(DAT_013f2aac,DAT_013f2aa8) < lVar13 >> 0xf) {
    local_154 = 0x300dfc7b4;
    local_a0 = 0xf;
    local_a4 = 0;
    local_b4[0] = local_b4[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0x16;
    local_154 = 0x500e360cc;
    local_70 = 0xf;
    local_74 = 0;
    local_84[0] = local_84[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0x17;
    local_154 = 0x1400e360d4;
    local_2c = 0xf;
    local_30 = 0;
    local_40[0] = local_40[0] & 0xffffff00;
    FUN_00409350();
    local_1c._4_4_ = &local_154;
    local_8._0_1_ = 0x18;
    local_154 = lVar13 >> 0xf;
    uVar8 = FUN_00988bb0();
    local_154 = CONCAT44(local_40,local_98);
    local_8._0_1_ = 0x19;
    local_1c._4_4_ = (undefined8 *)FUN_009a8ee0();
    local_8._0_1_ = 0x1a;
    local_154 = CONCAT44(0x960a07,(undefined4)local_154);
    iVar9 = FUN_00475500();
    local_154 = *(undefined8 *)(iVar9 + 0x74);
    FUN_009a9880();
    local_8._0_1_ = 0x1b;
    local_154 = CONCAT44(local_84,0x960a42);
    FUN_00988f20();
    local_8._0_1_ = 0x1c;
    local_154 = CONCAT44(uVar8,0x960a54);
    FUN_00988f20();
    local_8._0_1_ = 0x1d;
    local_154 = CONCAT44(local_b4,0x960a69);
    FUN_00988f20();
    local_8._0_1_ = 0x1e;
    local_154 = 0xffffffff00000000;
    FUN_00448aa0();
    if (0xf < local_48) {
      local_154 = CONCAT44(local_5c[0],&UNK_00960a8f);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_48 = 0xf;
    local_4c = 0;
    local_5c[0] = local_5c[0] & 0xffffff00;
    if (0xf < local_bc) {
      local_154 = CONCAT44(local_d0[0],&UNK_00960ab4);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_bc = 0xf;
    local_c0 = 0;
    local_d0[0] = local_d0[0] & 0xffffff00;
    if (0xf < local_d8) {
      local_154 = CONCAT44(local_ec,&UNK_00960add);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_d8 = 0xf;
    local_dc = 0;
    local_ec = local_ec & 0xffffff00;
    if (0xf < local_f4) {
      local_154 = CONCAT44(local_108,&UNK_00960b06);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_f4 = 0xf;
    local_f8 = 0;
    local_108 = local_108 & 0xffffff00;
    local_8._0_1_ = 0x1f;
    local_154 = CONCAT44(0x960b2c,(undefined4)local_154);
    FUN_009adb70();
    if (local_94 != 0) {
      local_154 = CONCAT44(0x960b41,(undefined4)local_154);
      FUN_009e6a80();
      local_154 = CONCAT44(local_94,&UNK_00960b4d);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_94 = 0;
    local_90 = 0;
    local_8c = 0;
    if (0xf < local_110) {
      local_154 = CONCAT44(local_124,&UNK_00960b7b);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_110 = 0xf;
    local_114 = 0;
    local_124 = local_124 & 0xffffff00;
    if (0xf < local_2c) {
      local_154 = CONCAT44(local_40[0],&UNK_00960b9e);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_2c = 0xf;
    local_30 = 0;
    local_40[0] = local_40[0] & 0xffffff00;
    if (0xf < local_70) {
      local_154 = CONCAT44(local_84[0],&UNK_00960bb8);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 1;
    local_70 = 0xf;
    local_74 = 0;
    local_84[0] = local_84[0] & 0xffffff00;
    if (0xf < local_a0) {
      local_154 = CONCAT44(local_b4[0],&UNK_00960bdc);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  uVar3 = *(uint *)(*(int *)(param_1 + 100) + 0x1bc);
  local_64._0_4_ = *(uint *)(*(int *)(param_1 + 100) + 0x1a8);
  uVar4 = (uint)local_64 >> 0x11;
  uVar5 = uVar3 >> 0x11;
  local_64._0_4_ = (uint)local_64 << 0xf;
  iVar9 = uVar3 << 0xf;
  local_154 = CONCAT44(uVar5,iVar9);
  if ((DAT_0131b894 <= (int)uVar4) &&
     ((DAT_0131b894 < (int)uVar4 ||
      (local_154 = CONCAT44(uVar5,iVar9), DAT_0131b890 < (uint)local_64)))) {
    uVar3 = *(uint *)(*(int *)(param_1 + 100) + 0x1a8);
    local_154 = CONCAT44(uVar3 >> 0x11,uVar3 << 0xf);
    local_154 = __alldiv();
  }
  __allmul();
  local_154 = CONCAT44(local_20,local_24);
  lVar13 = __allmul();
  lVar13 = lVar13 >> 0xf;
  local_64._0_4_ = (uint)lVar13;
  if (lVar13 < CONCAT44(DAT_013f2aa4,DAT_013f2aa0)) {
    local_154 = 0x300dfc7b4;
    local_a0 = 0xf;
    local_a4 = 0;
    local_b4[0] = local_b4[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0x20;
    local_154 = CONCAT44(0x960ce3,(undefined4)local_154);
    FUN_009885d0();
    local_8._0_1_ = 0x21;
    local_154 = CONCAT44(0x960cf4,(undefined4)local_154);
    FUN_009885d0();
    local_1c._4_4_ = &local_154;
    local_8._0_1_ = 0x22;
    local_154 = CONCAT44((int)((ulonglong)lVar13 >> 0x20),(uint)local_64);
    uVar8 = FUN_00988bb0();
    local_154 = CONCAT44(local_40,local_98);
    local_8._0_1_ = 0x23;
    local_1c._4_4_ = (undefined8 *)FUN_009a8ee0();
    local_8._0_1_ = 0x24;
    local_154 = CONCAT44(0x960d37,(undefined4)local_154);
    iVar9 = FUN_00475500();
    local_154 = *(undefined8 *)(iVar9 + 0x74);
    FUN_009a9880();
    local_8._0_1_ = 0x25;
    local_154 = CONCAT44(local_84,0x960d72);
    FUN_00988f20();
    local_8._0_1_ = 0x26;
    local_154 = CONCAT44(uVar8,0x960d84);
    FUN_00988f20();
    local_8._0_1_ = 0x27;
    local_154 = CONCAT44(local_b4,0x960d99);
    FUN_00988f20();
    local_154 = 0xffffffff00000000;
    local_8._0_1_ = 0x28;
    FUN_00448aa0();
    if (0xf < local_48) {
      local_154 = CONCAT44(local_5c[0],&UNK_00960dbf);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_48 = 0xf;
    local_4c = 0;
    local_5c[0] = local_5c[0] & 0xffffff00;
    if (0xf < local_bc) {
      local_154 = CONCAT44(local_d0[0],&UNK_00960de4);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_bc = 0xf;
    local_c0 = 0;
    local_d0[0] = local_d0[0] & 0xffffff00;
    if (0xf < local_d8) {
      local_154 = CONCAT44(local_ec,&UNK_00960e0d);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_d8 = 0xf;
    local_dc = 0;
    local_ec = local_ec & 0xffffff00;
    if (0xf < local_f4) {
      local_154 = CONCAT44(local_108,&UNK_00960e36);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_f4 = 0xf;
    local_f8 = 0;
    local_108 = local_108 & 0xffffff00;
    local_8._0_1_ = 0x23;
    local_154 = CONCAT44(local_98,0x960e5b);
    FUN_009a9740();
    if (0xf < local_110) {
      local_154 = CONCAT44(local_124,&UNK_00960e6f);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_110 = 0xf;
    local_114 = 0;
    local_124 = local_124 & 0xffffff00;
    if (0xf < local_2c) {
      local_154 = CONCAT44(local_40[0],&UNK_00960e92);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_2c = 0xf;
    local_30 = 0;
    local_40[0] = local_40[0] & 0xffffff00;
    if (0xf < local_70) {
      local_154 = CONCAT44(local_84[0],&UNK_00960eac);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 1;
    local_70 = 0xf;
    local_74 = 0;
    local_84[0] = local_84[0] & 0xffffff00;
    if (0xf < local_a0) {
      local_154 = CONCAT44(local_b4[0],&UNK_00960ed0);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  local_154 = 0xded94d;
  local_2c = 0xf;
  local_30 = 0;
  local_40[0] = local_40[0] & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 0x29;
  local_154 = CONCAT44(local_40,1000);
  (**(code **)(*(int *)(*(int *)(param_1 + 100) + 0x84) + 0x24))();
  local_8._0_1_ = 0x2a;
  FUN_00448aa0();
  if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 1;
  local_48 = 0xf;
  local_4c = 0;
  local_5c[0] = local_5c[0] & 0xffffff00;
  if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_2c = 0xf;
  local_30 = 0;
  local_40[0] = local_40[0] & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 0x2b;
  local_64._0_4_ = *(undefined4 *)(*(int *)(param_1 + 100) + 0x128);
  uVar8 = (**(code **)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                        *(int *)(*(int *)(param_1 + 100) + 300) * 4) + 0xa48) + 0x24
                      ))();
  local_8._0_1_ = 0x2c;
  FUN_00448aa0(uVar8);
  if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 1;
  uVar6 = (undefined1)local_8;
  local_8._0_1_ = 1;
  local_48 = 0xf;
  local_4c = 0;
  local_5c[0] = local_5c[0] & 0xffffff00;
  if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (*(int *)(*(int *)(*(int *)(param_1 + 100) + 0x188) + 0x84) < 1) {
    FUN_009885d0();
    local_8._0_1_ = 0x2d;
    local_64._0_4_ = *(undefined4 *)(*(int *)(param_1 + 100) + 0x128);
    uVar8 = (**(code **)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                          *(int *)(*(int *)(param_1 + 100) + 300) * 4) + 0xa48) +
                        0x24))(local_d0,0x68);
    local_8._0_1_ = 0x2e;
    FUN_00448aa0(uVar8);
    FUN_00408ad0();
    local_8._0_1_ = 1;
    FUN_00408ad0();
    uVar6 = (undefined1)local_8;
  }
  local_8._0_1_ = uVar6;
  if (*(char *)(param_1 + 0x4c) == '\0') {
    FUN_009885d0();
    local_8._0_1_ = 0x2f;
    local_64._0_4_ = *(undefined4 *)(*(int *)(param_1 + 100) + 0x128);
    uVar8 = (**(code **)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                          *(int *)(*(int *)(param_1 + 100) + 300) * 4) + 0xa48) +
                        0x24))(local_d0,0x6a);
    local_8._0_1_ = 0x30;
    FUN_00448aa0(uVar8);
    FUN_00408ad0();
    local_8._0_1_ = 1;
    FUN_00408ad0();
  }
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *param_2 = 0;
  FUN_00408ed0(local_140);
  if (0xf < local_12c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_2;
}

