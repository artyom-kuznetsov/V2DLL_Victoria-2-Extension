// FUN_0075d8d0 @ 0075d8d0 body=[[0075d8d0, 0075da0c] [0075da10, 0075dcff] [0075dd03, 0075dd28] [0075dd2c, 0075dd56] [0075dd5a, 0075dee3] [0075dee7, 0075df32] [0075df36, 0075df52] [0075df5b, 0075df81] [0075df85, 0075dfa0] [0075dfa4, 0075dfca] [0075dfce, 0075e15b] [0075e15f, 0075e1ad] [0075e1b1, 0075e1cd] [0075e1d6, 0075e1fc] [0075e200, 0075e21b] [0075e21f, 0075e245] [0075e249, 0075e3d6] [0075e3da, 0075e425] [0075e429, 0075e445] [0075e44e, 0075e474] [0075e478, 0075e493] [0075e497, 0075e4bd] [0075e4c1, 0075e55a] [0075e55e, 0075e585] [0075e589, 0075e610] [0075e614, 0075e63b] [0075e63f, 0075e7a4] [0075e7a8, 0075e7d8] [0075e7dc, 0075e807] [0075e80b, 0075e833] [0075e837, 0075e85c] [0075e860, 0075e888] [0075e88c, 0075e8b6] [0075e8ba, 0075ea0e] [0075ea12, 0075ea42] [0075ea46, 0075ea71] [0075ea75, 0075eaa0] [0075eaa4, 0075eada] [0075eade, 0075f056]]


void FUN_0075d8d0(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint *puVar9;
  undefined4 unaff_ESI;
  int iVar10;
  undefined4 uStack_208;
  undefined4 uStack_204;
  float fStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  float fStack_1f4;
  undefined4 uStack_1f0;
  undefined4 *puStack_1ec;
  float fStack_1e8;
  undefined4 uStack_1e4;
  undefined4 *puStack_1e0;
  float fStack_1dc;
  undefined4 uStack_1d8;
  undefined4 *puStack_1d4;
  float fStack_1d0;
  undefined4 *puStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  undefined4 *puStack_1c0;
  undefined4 uStack_1bc;
  float fStack_1b8;
  undefined4 *puStack_1b4;
  undefined4 *puStack_1b0;
  undefined8 uStack_1ac;
  int **ppiStack_1a4;
  undefined1 *puVar11;
  undefined4 **ppuVar12;
  int *piStack_184;
  undefined4 local_180;
  uint local_17c;
  undefined4 uStack_178;
  uint uStack_174;
  uint uStack_170;
  undefined4 uStack_16c;
  float fStack_168;
  undefined4 uStack_164;
  uint uStack_160;
  uint uStack_158;
  uint uStack_154;
  undefined4 uStack_150;
  uint uStack_14c;
  undefined4 uStack_148;
  int *piStack_144;
  undefined1 auStack_140 [4];
  uint local_13c;
  int local_138;
  undefined4 uStack_134;
  uint uStack_130;
  undefined4 uStack_12c;
  uint uStack_128;
  undefined1 auStack_124 [4];
  uint uStack_120;
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  uint uStack_114;
  undefined4 uStack_110;
  uint uStack_10c;
  undefined4 uStack_108;
  uint uStack_104;
  undefined4 uStack_fc;
  uint uStack_f8;
  uint uStack_f4;
  uint uStack_f0;
  undefined4 uStack_e8;
  uint uStack_e4;
  undefined4 uStack_e0;
  uint uStack_dc;
  undefined1 auStack_d8 [4];
  undefined1 uStack_d4;
  undefined4 uStack_cc;
  uint uStack_c8;
  undefined4 uStack_c4;
  uint uStack_c0;
  undefined1 auStack_b8 [8];
  undefined4 uStack_b0;
  uint uStack_ac;
  undefined4 uStack_a8;
  uint uStack_a4;
  undefined1 auStack_a0 [12];
  undefined4 uStack_94;
  uint uStack_90;
  void *pvStack_8c;
  uint uStack_7c;
  undefined1 auStack_78 [12];
  undefined4 uStack_6c;
  uint uStack_68;
  undefined4 uStack_58;
  uint uStack_54;
  uint uStack_44;
  undefined1 auStack_40 [12];
  undefined4 uStack_34;
  uint uStack_30;
  undefined4 uStack_24;
  undefined1 uStack_20;
  undefined4 uStack_1c;
  undefined1 uStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b6d86e;
  pvStack_14 = ExceptionList;
  local_180 = *(uint *)(*(int *)(param_1 + 0x180) + 0x6b9bc);
  local_17c = *(uint *)(*(int *)(param_1 + 0x180) + 0x6b9c0);
  ExceptionList = &pvStack_14;
  local_13c = FUN_00475500();
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x16c) = 0;
  *(undefined4 *)(param_1 + 0x170) = 0;
  iVar6 = (*(int *)(local_13c + 0x18) - *(int *)(local_13c + 0x14)) / 0x18;
  iVar10 = 0;
  if (0 < iVar6) {
    puVar9 = *(uint **)(local_13c + 0x14);
    do {
      if ((*puVar9 == local_180) && (puVar9[1] == local_17c)) {
        *(int *)(param_1 + 0x168) = iVar10;
        break;
      }
      iVar10 = iVar10 + 1;
      puVar9 = puVar9 + 6;
    } while (iVar10 < iVar6);
  }
  if (DAT_0125b5e0 == (undefined4 *)0x0) {
    local_180 = FUN_00aae9af();
    local_c = 0;
    if (local_180 == 0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = (undefined4 *)FUN_00475150();
    }
    local_c = 1;
    local_180 = 0;
    if ((puVar2 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
      (**(code **)*DAT_0125b5e0)();
    }
    local_c = 0xffffffff;
    DAT_0125b5e0 = puVar2;
  }
  local_138 = DAT_0125b5e0[0x12];
  iVar6 = *(int *)(local_13c + 0x14);
  iVar10 = 0;
  if (0 < (int)(*(int *)(iVar6 + 0xc + *(int *)(param_1 + 0x168) * 0x18) -
                *(int *)(iVar6 + 8 + *(int *)(param_1 + 0x168) * 0x18) & 0xfffffffcU)) {
    piVar5 = *(int **)(iVar6 + 8);
    do {
      if (*piVar5 == local_138) {
        *(int *)(param_1 + 0x170) = iVar10;
        break;
      }
      piVar5 = piVar5 + 1;
      iVar10 = iVar10 + 1;
      piStack_184 = piVar5;
    } while (iVar10 < *(int *)(iVar6 + 0xc + *(int *)(param_1 + 0x168) * 0x18) -
                      *(int *)(iVar6 + 8 + *(int *)(param_1 + 0x168) * 0x18) >> 2);
  }
  if (DAT_0125b5e0 == (undefined4 *)0x0) {
    local_180 = FUN_00aae9af();
    local_c = 2;
    if (local_180 == 0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = (undefined4 *)FUN_00475150();
    }
    local_c = 3;
    local_180 = 0;
    if ((puVar2 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
      (**(code **)*DAT_0125b5e0)();
    }
    local_c = 0xffffffff;
    DAT_0125b5e0 = puVar2;
  }
  if (*(char *)((int)DAT_0125b5e0 + 0x4d) == '\0') {
    if (*(char *)(DAT_0125b5e0 + 0x13) != '\0') {
      *(undefined4 *)(param_1 + 0x16c) = 1;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x16c) = 2;
  }
  if (DAT_0125b5e0 == (undefined4 *)0x0) {
    local_180 = FUN_00aae9af();
    local_c = 6;
    if (local_180 == 0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = (undefined4 *)FUN_00475150();
    }
    local_c = 7;
    local_180 = 0;
    if ((puVar2 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
      (**(code **)*DAT_0125b5e0)();
    }
    local_c = 0xffffffff;
    DAT_0125b5e0 = puVar2;
  }
  uVar3 = DAT_0125b5e0[0x15];
  if ((int)uVar3 < 2) {
    uVar3 = 0;
  }
  else {
    uVar3 = -(uint)((&DAT_00f086c4)[(uVar3 * 3 + -6) * 4] != '\0') & uVar3;
  }
  *(uint *)(param_1 + 0x174) = uVar3;
  if (DAT_0125b5e0 == (undefined4 *)0x0) {
    local_180 = FUN_00aae9af();
    local_c = 8;
    if (local_180 == 0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = (undefined4 *)FUN_00475150();
    }
    local_c = 9;
    local_180 = 0;
    if ((puVar2 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
      (**(code **)*DAT_0125b5e0)();
    }
    local_c = 0xffffffff;
    DAT_0125b5e0 = puVar2;
  }
  uVar3 = (uint)uStack_178;
  uStack_178 = (float)((uint)uStack_178 & 0xffffff);
  pcVar4 = &DAT_00f086c4;
  do {
    if (*pcVar4 != '\0') {
      uStack_178 = (float)CONCAT13(1,(int3)uVar3);
      break;
    }
    pcVar4 = pcVar4 + 0xc;
  } while ((int)pcVar4 < 0xf08778);
  uStack_160 = 0xf;
  uStack_164 = 0;
  uStack_174 = uStack_174 & 0xffffff00;
  FUN_00409350();
  local_c = 10;
  piStack_144 = (int *)0xf;
  uStack_148 = 0;
  uStack_158 = uStack_158 & 0xffffff00;
  FUN_00409350();
  local_c = CONCAT31(local_c._1_3_,0xb);
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x34c) + 0x6c))();
  uStack_108 = 0xf;
  uStack_10c = 0;
  puStack_11c = (undefined1 *)((uint)puStack_11c & 0xffffff00);
  puStack_10._0_1_ = 0xc;
  _ppiStack_1a4 = CONCAT44(*(int *)(param_1 + 0x174),0x75dc82);
  pcVar4 = __itoa(*(int *)(param_1 + 0x174),(char *)&uStack_90,10);
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  _ppiStack_1a4 = CONCAT44(0x75dca7,ppiStack_1a4);
  FUN_00409350();
  puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,0xd);
  (**(code **)(*piVar5 + 0x3c))();
  _ppiStack_1a4 = ZEXT48(&uStack_120);
  uStack_1ac = CONCAT44(0x75dcd7,(undefined4)uStack_1ac);
  FUN_00408ed0();
  _ppiStack_1a4 = CONCAT44(&uStack_120,0x75dce8);
  FUN_00a5ecc0();
  if (0xf < uStack_10c) {
    _ppiStack_1a4 = CONCAT44(&UNK_0075dd00,ppiStack_1a4);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_10c = 0xf;
  uStack_110 = 0;
  uStack_120 = uStack_120 & 0xffffff00;
  if (0xf < uStack_14c) {
    _ppiStack_1a4 = CONCAT44(&UNK_0075dd29,ppiStack_1a4);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  pvStack_14 = (void *)0xffffffff;
  uStack_14c = 0xf;
  uStack_150 = 0;
  uStack_160 = uStack_160 & 0xffffff00;
  if (0xf < (uint)fStack_168) {
    _ppiStack_1a4 = CONCAT44(&UNK_0075dd57,ppiStack_1a4);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (*(int *)(param_1 + 0x16c) == 0) {
    uStack_128 = 0xf;
    uStack_12c = 0;
    local_13c = local_13c & 0xffffff00;
    _ppiStack_1a4 = 0xe143180075dd87;
    FUN_00409350();
    pvStack_14 = (void *)0xe;
    fStack_168 = 2.10195e-44;
    uStack_16c = 0;
    local_17c = local_17c & 0xffffff00;
    _ppiStack_1a4 = 0xe143080075ddae;
    FUN_00409350();
    pvStack_14._0_1_ = 0xf;
    uStack_14c = 0xf;
    uStack_150 = 0;
    uStack_160 = uStack_160 & 0xffffff00;
    _ppiStack_1a4 = 0xe140400075ddd2;
    FUN_00409350();
    pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,0x10);
    _ppiStack_1a4 = CONCAT44(0x75ddef,ppiStack_1a4);
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x34c) + 0x6c))();
    _ppiStack_1a4 = CONCAT44(auStack_140,auStack_124);
    uStack_1ac = CONCAT44(0x75de00,(undefined4)uStack_1ac);
    FUN_009a8ee0();
    uStack_18 = 0x11;
    puVar2 = DAT_0125b5e0;
    if (DAT_0125b5e0 == (undefined4 *)0x0) {
      _ppiStack_1a4 = 0x1800075de1f;
      iVar6 = FUN_00aae9af();
      uStack_18 = 0x12;
      if (iVar6 == 0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        _ppiStack_1a4 = CONCAT44(iVar6,0x75de38);
        puVar2 = (undefined4 *)FUN_00475150();
      }
      uStack_18 = 0x13;
      unaff_ESI = 0;
      if ((puVar2 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
        _ppiStack_1a4 = 0x10075de60;
        (**(code **)*DAT_0125b5e0)();
      }
    }
    DAT_0125b5e0 = puVar2;
    uStack_18 = 0x11;
    uStack_1ac = *(ulonglong *)(DAT_0125b5e0 + 0x1b);
    _ppiStack_1a4 = *(ulonglong *)(DAT_0125b5e0 + 0x1d);
    puStack_1b0 = (undefined4 *)0x75de97;
    uVar3 = FUN_009a9880();
    uStack_18 = 0x14;
    _ppiStack_1a4 = CONCAT44(&local_180,0x75deaf);
    (**(code **)(*piVar5 + 0x3c))();
    _ppiStack_1a4 = (ulonglong)uVar3;
    uStack_1ac = CONCAT44(0x75dec0,(undefined4)uStack_1ac);
    FUN_00408ed0();
    _ppiStack_1a4 = CONCAT44(uVar3,0x75decd);
    FUN_00a5ecc0();
    if (0xf < uStack_f0) {
      _ppiStack_1a4 = CONCAT44(&UNK_0075dee4,ppiStack_1a4);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_f0 = 0xf;
    uStack_f4 = 0;
    uStack_104 = uStack_104 & 0xffffff00;
    pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,0x15);
    FUN_009adb70();
    puVar11 = puStack_11c;
    if (puStack_11c != (undefined1 *)0x0) {
      while( true ) {
        if (puVar11 == puStack_118) {
          _ppiStack_1a4 = CONCAT44(&UNK_0075df53,ppiStack_1a4);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        if (0xf < *(uint *)(puVar11 + 0x14)) break;
        *(undefined4 *)(puVar11 + 0x14) = 0xf;
        *(undefined4 *)(puVar11 + 0x10) = 0;
        *puVar11 = 0;
        puVar11 = puVar11 + 0x20;
      }
      _ppiStack_1a4 = CONCAT44(&UNK_0075df33,ppiStack_1a4);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    puStack_11c = (undefined1 *)0x0;
    puStack_118 = (undefined1 *)0x0;
    uStack_114 = 0;
    if (0xf < uStack_14c) {
      _ppiStack_1a4 = CONCAT44(&UNK_0075df82,ppiStack_1a4);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_14c = 0xf;
    uStack_150 = 0;
    uStack_160 = uStack_160 & 0xffffff00;
    if (0xf < (uint)fStack_168) {
      _ppiStack_1a4 = CONCAT44(&UNK_0075dfa1,ppiStack_1a4);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    pvStack_14 = (void *)0xffffffff;
    fStack_168 = 2.10195e-44;
    uStack_16c = 0;
    local_17c = local_17c & 0xffffff00;
    if (0xf < uStack_128) {
      _ppiStack_1a4 = CONCAT44(&UNK_0075dfcb,ppiStack_1a4);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  pvStack_14 = (void *)0xffffffff;
  uStack_14c = 0xf;
  uStack_150 = 0;
  if (*(int *)(param_1 + 0x16c) == 1) {
    uStack_128 = 0xf;
    uStack_12c = 0;
    local_13c = local_13c & 0xffffff00;
    _ppiStack_1a4 = 0xe143240075dfff;
    FUN_00409350();
    pvStack_14 = (void *)0x16;
    uStack_14c = 0xf;
    uStack_150 = 0;
    uStack_160 = uStack_160 & 0xffffff00;
    _ppiStack_1a4 = 0xe143080075e026;
    FUN_00409350();
    pvStack_14._0_1_ = 0x17;
    fStack_168 = 2.10195e-44;
    uStack_16c = 0;
    local_17c = local_17c & 0xffffff00;
    _ppiStack_1a4 = 0xe140400075e04a;
    FUN_00409350();
    pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,0x18);
    _ppiStack_1a4 = CONCAT44(0x75e067,ppiStack_1a4);
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x34c) + 0x6c))();
    _ppiStack_1a4 = CONCAT44(auStack_140,auStack_124);
    uStack_1ac = CONCAT44(0x75e078,(undefined4)uStack_1ac);
    FUN_009a8ee0();
    uStack_18 = 0x19;
    puVar2 = DAT_0125b5e0;
    if (DAT_0125b5e0 == (undefined4 *)0x0) {
      _ppiStack_1a4 = 0x1800075e097;
      iVar6 = FUN_00aae9af();
      uStack_18 = 0x1a;
      if (iVar6 == 0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        _ppiStack_1a4 = CONCAT44(iVar6,0x75e0b0);
        puVar2 = (undefined4 *)FUN_00475150();
      }
      uStack_18 = 0x1b;
      unaff_ESI = 0;
      if ((puVar2 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
        _ppiStack_1a4 = 0x10075e0d8;
        (**(code **)*DAT_0125b5e0)();
      }
    }
    DAT_0125b5e0 = puVar2;
    uStack_18 = 0x19;
    uStack_1ac = *(ulonglong *)(DAT_0125b5e0 + 0x1b);
    _ppiStack_1a4 = *(ulonglong *)(DAT_0125b5e0 + 0x1d);
    puStack_1b0 = (undefined4 *)0x75e10f;
    uVar3 = FUN_009a9880();
    uStack_18 = 0x1c;
    _ppiStack_1a4 = CONCAT44(&uStack_164,0x75e127);
    (**(code **)(*piVar5 + 0x3c))();
    _ppiStack_1a4 = (ulonglong)uVar3;
    uStack_1ac = CONCAT44(0x75e138,(undefined4)uStack_1ac);
    FUN_00408ed0();
    _ppiStack_1a4 = CONCAT44(uVar3,0x75e145);
    FUN_00a5ecc0();
    if (0xf < uStack_f0) {
      _ppiStack_1a4 = CONCAT44(&UNK_0075e15c,ppiStack_1a4);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_f0 = 0xf;
    uStack_f4 = 0;
    uStack_104 = uStack_104 & 0xffffff00;
    pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,0x1d);
    FUN_009adb70();
    puVar11 = puStack_11c;
    if (puStack_11c != (undefined1 *)0x0) {
      while( true ) {
        if (puVar11 == puStack_118) {
          _ppiStack_1a4 = CONCAT44(&UNK_0075e1ce,ppiStack_1a4);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        if (0xf < *(uint *)(puVar11 + 0x14)) break;
        *(undefined4 *)(puVar11 + 0x14) = 0xf;
        *(undefined4 *)(puVar11 + 0x10) = 0;
        *puVar11 = 0;
        puVar11 = puVar11 + 0x20;
      }
      _ppiStack_1a4 = CONCAT44(&UNK_0075e1ae,ppiStack_1a4);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    puStack_11c = (undefined1 *)0x0;
    puStack_118 = (undefined1 *)0x0;
    uStack_114 = 0;
    if (0xf < (uint)fStack_168) {
      _ppiStack_1a4 = CONCAT44(&UNK_0075e1fd,ppiStack_1a4);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    fStack_168 = 2.10195e-44;
    uStack_16c = 0;
    local_17c = local_17c & 0xffffff00;
    if (0xf < uStack_14c) {
      _ppiStack_1a4 = CONCAT44(&UNK_0075e21c,ppiStack_1a4);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    pvStack_14 = (void *)0xffffffff;
    uStack_14c = 0xf;
    uStack_150 = 0;
    uStack_160 = uStack_160 & 0xffffff00;
    if (0xf < uStack_128) {
      _ppiStack_1a4 = CONCAT44(&UNK_0075e246,ppiStack_1a4);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  pvStack_14 = (void *)0xffffffff;
  uStack_14c = 0xf;
  uStack_150 = 0;
  if (*(int *)(param_1 + 0x16c) == 2) {
    uStack_128 = 0xf;
    uStack_12c = 0;
    local_13c = local_13c & 0xffffff00;
    _ppiStack_1a4 = 0xe143340075e27a;
    FUN_00409350();
    pvStack_14 = (void *)0x1e;
    uStack_14c = 0xf;
    uStack_150 = 0;
    uStack_160 = uStack_160 & 0xffffff00;
    _ppiStack_1a4 = 0xe143080075e2a1;
    FUN_00409350();
    pvStack_14._0_1_ = 0x1f;
    fStack_168 = 2.10195e-44;
    uStack_16c = 0;
    local_17c = local_17c & 0xffffff00;
    _ppiStack_1a4 = 0xe140400075e2c5;
    FUN_00409350();
    pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,0x20);
    _ppiStack_1a4 = CONCAT44(0x75e2e2,ppiStack_1a4);
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x34c) + 0x6c))();
    _ppiStack_1a4 = CONCAT44(auStack_140,auStack_124);
    uStack_1ac = CONCAT44(0x75e2f3,(undefined4)uStack_1ac);
    FUN_009a8ee0();
    uStack_18 = 0x21;
    puVar2 = DAT_0125b5e0;
    if (DAT_0125b5e0 == (undefined4 *)0x0) {
      _ppiStack_1a4 = 0x1800075e312;
      iVar6 = FUN_00aae9af();
      uStack_18 = 0x22;
      if (iVar6 == 0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        _ppiStack_1a4 = CONCAT44(iVar6,0x75e32b);
        puVar2 = (undefined4 *)FUN_00475150();
      }
      uStack_18 = 0x23;
      unaff_ESI = 0;
      if ((puVar2 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
        _ppiStack_1a4 = 0x10075e353;
        (**(code **)*DAT_0125b5e0)();
      }
    }
    DAT_0125b5e0 = puVar2;
    uStack_18 = 0x21;
    uStack_1ac = *(ulonglong *)(DAT_0125b5e0 + 0x1b);
    _ppiStack_1a4 = *(ulonglong *)(DAT_0125b5e0 + 0x1d);
    puStack_1b0 = (undefined4 *)0x75e38a;
    uVar3 = FUN_009a9880();
    uStack_18 = 0x24;
    _ppiStack_1a4 = CONCAT44(&uStack_164,0x75e3a2);
    (**(code **)(*piVar5 + 0x3c))();
    _ppiStack_1a4 = (ulonglong)uVar3;
    uStack_1ac = CONCAT44(0x75e3b3,(undefined4)uStack_1ac);
    FUN_00408ed0();
    _ppiStack_1a4 = CONCAT44(uVar3,0x75e3c0);
    FUN_00a5ecc0();
    if (0xf < uStack_f0) {
      _ppiStack_1a4 = CONCAT44(&UNK_0075e3d7,ppiStack_1a4);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_f0 = 0xf;
    uStack_f4 = 0;
    uStack_104 = uStack_104 & 0xffffff00;
    pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,0x25);
    FUN_009adb70();
    puVar11 = puStack_11c;
    if (puStack_11c != (undefined1 *)0x0) {
      while( true ) {
        if (puVar11 == puStack_118) {
          _ppiStack_1a4 = CONCAT44(&UNK_0075e446,ppiStack_1a4);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        if (0xf < *(uint *)(puVar11 + 0x14)) break;
        *(undefined4 *)(puVar11 + 0x14) = 0xf;
        *(undefined4 *)(puVar11 + 0x10) = 0;
        *puVar11 = 0;
        puVar11 = puVar11 + 0x20;
      }
      _ppiStack_1a4 = CONCAT44(&UNK_0075e426,ppiStack_1a4);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    puStack_11c = (undefined1 *)0x0;
    puStack_118 = (undefined1 *)0x0;
    uStack_114 = 0;
    if (0xf < (uint)fStack_168) {
      _ppiStack_1a4 = CONCAT44(&UNK_0075e475,ppiStack_1a4);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    fStack_168 = 2.10195e-44;
    uStack_16c = 0;
    local_17c = local_17c & 0xffffff00;
    if (0xf < uStack_14c) {
      _ppiStack_1a4 = CONCAT44(&UNK_0075e494,ppiStack_1a4);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    pvStack_14 = (void *)0xffffffff;
    uStack_14c = 0xf;
    uStack_150 = 0;
    uStack_160 = uStack_160 & 0xffffff00;
    if (0xf < uStack_128) {
      _ppiStack_1a4 = CONCAT44(&UNK_0075e4be,ppiStack_1a4);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  pvStack_14 = (void *)0xffffffff;
  uStack_14c = 0xf;
  uStack_150 = 0;
  if (local_180._3_1_ == '\0') {
    uStack_128 = 0xf;
    uStack_12c = 0;
    local_13c = local_13c & 0xffffff00;
    _ppiStack_1a4 = 0xe141780075e4ec;
    FUN_00409350();
    pvStack_14 = (void *)0x26;
    fStack_168 = 2.10195e-44;
    uStack_16c = 0;
    local_17c = local_17c & 0xffffff00;
    _ppiStack_1a4 = 0xe140400075e513;
    FUN_00409350();
    pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,0x27);
    _ppiStack_1a4 = CONCAT44(0x75e530,ppiStack_1a4);
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x34c) + 0x6c))();
    puVar11 = auStack_140;
    ppiStack_1a4 = (int **)0x75e53e;
    piVar5 = (int *)(**(code **)(*piVar5 + 0x34))();
    ppiStack_1a4 = (int **)0x75e54a;
    (**(code **)(*piVar5 + 0xbc))();
    if (0xf < uStack_170) {
      _ppiStack_1a4 = CONCAT44(puVar11,piStack_184);
      uStack_1ac = CONCAT44(&UNK_0075e55b,(undefined4)uStack_1ac);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_1c = 0xffffffff;
    uStack_170 = 0xf;
    uStack_174 = 0;
    piStack_184 = (int *)((uint)piStack_184 & 0xffffff00);
    if (0xf < uStack_130) {
      _ppiStack_1a4 = CONCAT44(puVar11,piStack_144);
      uStack_1ac = CONCAT44(&UNK_0075e586,(undefined4)uStack_1ac);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    ppiStack_1a4 = (int **)0x1b;
    uStack_130 = 0xf;
    uStack_134 = 0;
    piStack_144 = (int *)((uint)piStack_144 & 0xffffff00);
    uStack_1ac = 0xe141940075e5a5;
    FUN_00409350();
    uStack_1c = 0x28;
    ppiStack_1a4 = (int **)0x13;
    uStack_170 = 0xf;
    uStack_174 = 0;
    piStack_184 = (int *)((uint)piStack_184 & 0xffffff00);
    uStack_1ac = 0xe140400075e5cc;
    FUN_00409350();
    uStack_1c = CONCAT31(uStack_1c._1_3_,0x29);
    _ppiStack_1a4 = CONCAT44(puVar11,&piStack_184);
    uStack_1ac = CONCAT44(0x75e5e6,(undefined4)uStack_1ac);
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x34c) + 0x6c))();
    uStack_1ac._4_4_ = (undefined4 **)&uStack_148;
    uStack_1ac._0_4_ = 0x75e5f4;
    piVar5 = (int *)(**(code **)(*piVar5 + 0x34))();
    uStack_1ac = CONCAT44(uStack_1ac._4_4_,0x75e600);
    (**(code **)(*piVar5 + 0xbc))();
    if (0xf < (uint)fStack_168) {
      _ppiStack_1a4 = CONCAT44(&UNK_0075e611,ppiStack_1a4);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    pvStack_14 = (void *)0xffffffff;
    fStack_168 = 2.10195e-44;
    uStack_16c = 0;
    local_17c = local_17c & 0xffffff00;
    if (0xf < uStack_128) {
      _ppiStack_1a4 = CONCAT44(&UNK_0075e63c,ppiStack_1a4);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  pvStack_14 = (void *)0xffffffff;
  uStack_128 = 0xf;
  uStack_12c = 0;
  local_13c = local_13c & 0xffffff00;
  _ppiStack_1a4 = 0xe143440075e660;
  FUN_00409350();
  pvStack_14 = (void *)0x2a;
  uStack_14c = 0xf;
  uStack_150 = 0;
  uStack_160 = uStack_160 & 0xffffff00;
  _ppiStack_1a4 = 0xe140400075e687;
  FUN_00409350();
  pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,0x2b);
  _ppiStack_1a4 = CONCAT44(0x75e6a4,ppiStack_1a4);
  piStack_144 = (int *)(**(code **)(**(int **)(param_1 + 0x34c) + 0x6c))();
  _ppiStack_1a4 = CONCAT44(auStack_40,0x75e6cb);
  uVar7 = FUN_009888f0();
  uStack_18 = 0x2c;
  _ppiStack_1a4 = 0x100dfd420;
  uStack_16c = 0xf;
  uStack_170 = 0;
  local_180 = local_180 & 0xffffff00;
  uStack_1ac = CONCAT44(0x75e6f7,(undefined4)uStack_1ac);
  FUN_00409350();
  uStack_18 = 0x2d;
  _ppiStack_1a4 = CONCAT44(auStack_78,0x75e71d);
  FUN_009888f0();
  uStack_18 = 0x2e;
  _ppiStack_1a4 = CONCAT44(&local_180,0x75e735);
  FUN_00988f20();
  uStack_18 = 0x2f;
  _ppiStack_1a4 = CONCAT44(uVar7,0x75e750);
  uVar3 = FUN_00988f20();
  uStack_18 = 0x30;
  puVar11 = auStack_140;
  ppiStack_1a4 = (int **)0x75e76a;
  (**(code **)(*piStack_144 + 0x3c))();
  ppiStack_1a4 = (int **)0xffffffff;
  uStack_1ac = (ulonglong)uVar3;
  puStack_1b0 = (undefined4 *)0x75e77d;
  FUN_00408ed0();
  _ppiStack_1a4 = ZEXT48(puVar11) << 0x20;
  uStack_1ac = CONCAT44(uVar3,0x75e78e);
  FUN_00a5ecc0();
  puVar11 = (undefined1 *)(_ppiStack_1a4 >> 0x20);
  if (0xf < uStack_f8) {
    _ppiStack_1a4 = CONCAT44(puVar11,uStack_10c);
    uStack_1ac = CONCAT44(&UNK_0075e7a5,(undefined4)uStack_1ac);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_f8 = 0xf;
  uStack_fc = 0;
  uStack_10c = uStack_10c & 0xffffff00;
  if (0xf < uStack_114) {
    _ppiStack_1a4 = CONCAT44(puVar11,uStack_128);
    uStack_1ac = CONCAT44(&UNK_0075e7d9,(undefined4)uStack_1ac);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_114 = 0xf;
  puStack_118 = (undefined1 *)0x0;
  uStack_128 = uStack_128 & 0xffffff00;
  if (0xf < uStack_68) {
    _ppiStack_1a4 = CONCAT44(puVar11,uStack_7c);
    uStack_1ac = CONCAT44(&UNK_0075e808,(undefined4)uStack_1ac);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_68 = 0xf;
  uStack_6c = 0;
  uStack_7c = uStack_7c & 0xffffff00;
  if (0xf < uStack_170) {
    _ppiStack_1a4 = CONCAT44(puVar11,piStack_184);
    uStack_1ac = CONCAT44(&UNK_0075e834,(undefined4)uStack_1ac);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_170 = 0xf;
  uStack_174 = 0;
  piStack_184 = (int *)((uint)piStack_184 & 0xffffff00);
  if (0xf < uStack_30) {
    _ppiStack_1a4 = CONCAT44(puVar11,uStack_44);
    uStack_1ac = CONCAT44(&UNK_0075e85d,(undefined4)uStack_1ac);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_30 = 0xf;
  uStack_34 = 0;
  uStack_44 = uStack_44 & 0xffffff00;
  if (0xf < uStack_154) {
    _ppiStack_1a4 = CONCAT44(puVar11,fStack_168);
    uStack_1ac = CONCAT44(&UNK_0075e889,(undefined4)uStack_1ac);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_1c = 0xffffffff;
  uStack_154 = 0xf;
  uStack_158 = 0;
  fStack_168 = (float)((uint)fStack_168 & 0xffffff00);
  if (0xf < uStack_130) {
    _ppiStack_1a4 = CONCAT44(puVar11,piStack_144);
    uStack_1ac = CONCAT44(&UNK_0075e8b7,(undefined4)uStack_1ac);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ppiStack_1a4 = (int **)0x11;
  uStack_c0 = 0xf;
  uStack_c4 = 0;
  uStack_d4 = 0;
  uStack_1ac = 0xe143580075e8e7;
  FUN_00409350();
  uStack_1c = 0x31;
  ppiStack_1a4 = (int **)0x13;
  uStack_a4 = 0xf;
  uStack_a8 = 0;
  auStack_b8[0] = 0;
  uStack_1ac = 0xe140400075e91a;
  FUN_00409350();
  uStack_1c = CONCAT31(uStack_1c._1_3_,0x32);
  _ppiStack_1a4 = CONCAT44(puVar11,auStack_b8);
  uStack_1ac = CONCAT44(0x75e937,(undefined4)uStack_1ac);
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x34c) + 0x6c))();
  uStack_1ac = 0x300e1436c;
  uStack_e0 = 0xf;
  uStack_e4 = 0;
  uStack_f4 = uStack_f4 & 0xffffff00;
  puStack_1b0 = (undefined4 *)0x75e963;
  FUN_00409350();
  uStack_20 = 0x33;
  uStack_1ac = CONCAT44(auStack_a0,0x75e999);
  FUN_009888f0();
  uStack_20 = 0x34;
  uStack_1ac = CONCAT44(&uStack_f4,0x75e9b7);
  puVar2 = (undefined4 *)FUN_00988f20();
  uStack_20 = 0x35;
  uStack_1ac._4_4_ = (undefined4 **)auStack_d8;
  uStack_1ac._0_4_ = 0x75e9d4;
  (**(code **)(*piVar5 + 0x3c))();
  uStack_1ac._0_4_ = 0xffffffff;
  puStack_1b0 = (undefined4 *)0x0;
  fStack_1b8 = 1.0828661e-38;
  puStack_1b4 = puVar2;
  FUN_00408ed0();
  uStack_1ac = ZEXT48(uStack_1ac._4_4_) << 0x20;
  puStack_1b4 = (undefined4 *)0x75e9f8;
  puStack_1b0 = puVar2;
  FUN_00a5ecc0();
  if (0xf < uStack_54) {
    uStack_1ac = CONCAT44(uStack_1ac._4_4_,uStack_68);
                    /* WARNING: Subroutine does not return */
    puStack_1b0 = (undefined4 *)&UNK_0075ea0f;
    FUN_00aae91b();
  }
  uStack_54 = 0xf;
  uStack_58 = 0;
  uStack_68 = uStack_68 & 0xffffff00;
  if (0xf < uStack_90) {
    uStack_1ac = CONCAT44(uStack_1ac._4_4_,uStack_a4);
                    /* WARNING: Subroutine does not return */
    puStack_1b0 = (undefined4 *)&UNK_0075ea43;
    FUN_00aae91b();
  }
  uStack_90 = 0xf;
  uStack_94 = 0;
  uStack_a4 = uStack_a4 & 0xffffff00;
  if (0xf < uStack_e4) {
    uStack_1ac = CONCAT44(uStack_1ac._4_4_,uStack_f8);
                    /* WARNING: Subroutine does not return */
    puStack_1b0 = (undefined4 *)&UNK_0075ea72;
    FUN_00aae91b();
  }
  uStack_e4 = 0xf;
  uStack_e8 = 0;
  uStack_f8 = uStack_f8 & 0xffffff00;
  if (0xf < uStack_ac) {
    uStack_1ac = CONCAT44(uStack_1ac._4_4_,uStack_c0);
                    /* WARNING: Subroutine does not return */
    puStack_1b0 = (undefined4 *)&UNK_0075eaa1;
    FUN_00aae91b();
  }
  uStack_24 = 0xffffffff;
  uStack_ac = 0xf;
  uStack_b0 = 0;
  uStack_c0 = uStack_c0 & 0xffffff00;
  if (0xf < uStack_c8) {
    uStack_1ac = CONCAT44(uStack_1ac._4_4_,uStack_dc);
                    /* WARNING: Subroutine does not return */
    puStack_1b0 = (undefined4 *)&UNK_0075eadb;
    FUN_00aae91b();
  }
  uStack_c8 = 0xf;
  uStack_cc = 0;
  uStack_dc = uStack_dc & 0xffffff00;
  uStack_1ac._0_4_ = 0x75eaf8;
  iVar10 = FUN_00475500();
  iVar6 = *(int *)(param_1 + 0x31c);
  uStack_1ac = CONCAT44(uStack_1ac._4_4_,1);
  puStack_1b0 = (undefined4 *)0x1;
  ppuVar12 = &puStack_1b4;
  fStack_1b8 = (*(float *)(iVar10 + 0x5c) + 0.0005) * 1000.0;
  uStack_1bc = 0x75eb36;
  FUN_00401000();
  fStack_1b8 = 1.0829142e-38;
  uVar8 = FUN_00b31c00();
  *ppuVar12 = (undefined4 *)uVar8;
  fStack_1b8 = 1.0829166e-38;
  (**(code **)(*(int *)(iVar6 + 0x54) + 0x1c))();
  for (puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x31c) + 0x58); puVar2 != (undefined4 *)0x0;
      puVar2 = (undefined4 *)puVar2[2]) {
    fStack_1b8 = 1.0829202e-38;
    (**(code **)(*(int *)*puVar2 + 4))();
  }
  fStack_1b8 = 1.0829219e-38;
  iVar10 = FUN_00475500();
  iVar6 = *(int *)(param_1 + 800);
  fStack_1b8 = 1.4013e-45;
  uStack_1bc = 1;
  fStack_1c4 = (((float)*(int *)(iVar10 + 0x104) / 1000.0) * 100.0 + 0.0005) * 1000.0;
  fStack_1c8 = 1.082936e-38;
  uStack_1ac._4_4_ = &puStack_1c0;
  FUN_00401000();
  fStack_1c4 = 1.0829372e-38;
  uVar8 = FUN_00b31c00();
  *uStack_1ac._4_4_ = (undefined4 *)uVar8;
  fStack_1c4 = 1.0829396e-38;
  (**(code **)(*(int *)(iVar6 + 0x54) + 0x1c))();
  for (puVar2 = *(undefined4 **)(*(int *)(param_1 + 800) + 0x58); puVar2 != (undefined4 *)0x0;
      puVar2 = (undefined4 *)puVar2[2]) {
    fStack_1c4 = 1.0829427e-38;
    (**(code **)(*(int *)*puVar2 + 4))();
  }
  fStack_1c4 = 1.0829443e-38;
  iVar6 = FUN_00475500();
  cVar1 = *(char *)(iVar6 + 0xe5);
  *(char *)(param_1 + 0x324) = cVar1;
  iVar6 = *(int *)(param_1 + 0x318);
  if (cVar1 == '\0') {
    *(undefined4 *)(iVar6 + 0x6c) = 1;
    *(undefined4 *)(iVar6 + 0x10c) = 1;
  }
  else if ((*(char *)(iVar6 + 0xe4) == '\0') || (*(char *)(iVar6 + 0x142) != '\0')) {
    *(undefined4 *)(iVar6 + 0x6c) = 0;
    *(undefined4 *)(iVar6 + 0x10c) = 0;
  }
  fStack_1c4 = 1.0829523e-38;
  iVar6 = FUN_00475500();
  cVar1 = *(char *)(iVar6 + 0x17c);
  iVar6 = *(int *)(param_1 + 0x2dc);
  *(char *)(param_1 + 0x325) = cVar1;
  if (cVar1 == '\0') {
    if ((*(char *)(iVar6 + 0xe4) == '\0') || (*(char *)(iVar6 + 0x142) != '\0')) {
      *(undefined4 *)(iVar6 + 0x6c) = 0;
      *(undefined4 *)(iVar6 + 0x10c) = 0;
    }
  }
  else {
    *(undefined4 *)(iVar6 + 0x6c) = 1;
    *(undefined4 *)(iVar6 + 0x10c) = 1;
  }
  fStack_1c4 = 1.0829634e-38;
  iVar6 = FUN_00475500();
  fStack_168 = *(float *)(iVar6 + 0x80);
  iVar6 = *(int *)(param_1 + 0x328);
  fStack_1c4 = 1.4013e-45;
  fStack_1c8 = 1.4013e-45;
  puStack_1b4 = &puStack_1cc;
  fStack_1d0 = (fStack_168 + 0.0005) * 1000.0;
  puStack_1d4 = (undefined4 *)0x75ece4;
  FUN_00401000();
  fStack_1d0 = 1.0829745e-38;
  uVar8 = FUN_00b31c00();
  *puStack_1b4 = uVar8;
  fStack_1d0 = 1.0829768e-38;
  (**(code **)(*(int *)(iVar6 + 0x54) + 0x1c))();
  for (puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x328) + 0x58); puVar2 != (undefined4 *)0x0;
      puVar2 = (undefined4 *)puVar2[2]) {
    fStack_1d0 = 1.0829808e-38;
    (**(code **)(*(int *)*puVar2 + 4))();
  }
  fStack_1d0 = 1.0829824e-38;
  iVar6 = FUN_00475500();
  uStack_178 = *(float *)(iVar6 + 0x84);
  iVar6 = *(int *)(param_1 + 0x32c);
  fStack_1d0 = 1.4013e-45;
  puStack_1d4 = (undefined4 *)0x1;
  puStack_1c0 = &uStack_1d8;
  fStack_1dc = (uStack_178 + 0.0005) * 1000.0;
  puStack_1e0 = (undefined4 *)0x75ed6c;
  FUN_00401000();
  fStack_1dc = 1.0829935e-38;
  uVar8 = FUN_00b31c00();
  *puStack_1c0 = uVar8;
  fStack_1dc = 1.0829959e-38;
  (**(code **)(*(int *)(iVar6 + 0x54) + 0x1c))();
  for (puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x32c) + 0x58); puVar2 != (undefined4 *)0x0;
      puVar2 = (undefined4 *)puVar2[2]) {
    fStack_1dc = 1.082999e-38;
    (**(code **)(*(int *)*puVar2 + 4))();
  }
  fStack_1dc = 1.0830007e-38;
  iVar6 = FUN_00475500();
  fStack_1c8 = *(float *)(iVar6 + 0x88);
  iVar6 = *(int *)(param_1 + 0x330);
  fStack_1dc = 1.4013e-45;
  puStack_1e0 = (undefined4 *)0x1;
  puStack_1cc = &uStack_1e4;
  fStack_1e8 = (fStack_1c8 + 0.0005) * 1000.0;
  puStack_1ec = (undefined4 *)0x75edee;
  FUN_00401000();
  fStack_1e8 = 1.0830117e-38;
  uVar8 = FUN_00b31c00();
  *puStack_1cc = uVar8;
  fStack_1e8 = 1.0830141e-38;
  (**(code **)(*(int *)(iVar6 + 0x54) + 0x1c))();
  for (puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x330) + 0x58); puVar2 != (undefined4 *)0x0;
      puVar2 = (undefined4 *)puVar2[2]) {
    fStack_1e8 = 1.0830172e-38;
    (**(code **)(*(int *)*puVar2 + 4))();
  }
  *(undefined4 *)(param_1 + 0x408) = unaff_ESI;
  *(undefined4 *)(param_1 + 0x40c) = uVar7;
  *(undefined4 **)(param_1 + 0x410) = puStack_1d4;
  fStack_1e8 = 1.0830248e-38;
  iVar6 = FUN_00475500();
  if (*(float *)(iVar6 + 0x80) < -0.01) {
    iVar6 = *(int *)(param_1 + 0x328);
    *(undefined1 *)(iVar6 + 0x25b) = 1;
    fStack_1e8 = 1.083032e-38;
    (**(code **)(**(int **)(iVar6 + 0xac) + 0xbc))();
    iVar6 = *(int *)(param_1 + 0x32c);
    *(undefined1 *)(iVar6 + 0x25b) = 1;
    fStack_1e8 = 1.0830364e-38;
    (**(code **)(**(int **)(iVar6 + 0xac) + 0xbc))();
    iVar6 = *(int *)(param_1 + 0x330);
    *(undefined1 *)(iVar6 + 0x25b) = 1;
    fStack_1e8 = 1.0830407e-38;
    (**(code **)(**(int **)(iVar6 + 0xac) + 0xbc))();
  }
  fStack_1e8 = 1.0830414e-38;
  iVar10 = FUN_00475500();
  iVar6 = *(int *)(param_1 + 0x33c);
  fStack_1e8 = 1.4013e-45;
  puStack_1ec = (undefined4 *)0x1;
  puStack_1d4 = &uStack_1f0;
  fStack_1f4 = (*(float *)(iVar10 + 0x90) + 0.0005) * 1000.0;
  uStack_1f8 = 0x75ef0b;
  FUN_00401000();
  fStack_1f4 = 1.0830517e-38;
  uVar7 = FUN_00b31c00();
  *puStack_1d4 = uVar7;
  fStack_1f4 = 1.083054e-38;
  (**(code **)(*(int *)(iVar6 + 0x54) + 0x1c))();
  for (puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x33c) + 0x58); puVar2 != (undefined4 *)0x0;
      puVar2 = (undefined4 *)puVar2[2]) {
    fStack_1f4 = 1.0830571e-38;
    (**(code **)(*(int *)*puVar2 + 4))();
  }
  fStack_1f4 = 1.0830588e-38;
  iVar10 = FUN_00475500();
  iVar6 = *(int *)(param_1 + 0x344);
  fStack_1f4 = 1.4013e-45;
  uStack_1f8 = 1;
  puStack_1e0 = &uStack_1fc;
  fStack_200 = (*(float *)(iVar10 + 0x98) + 0.0005) * 1000.0;
  uStack_204 = 0x75ef87;
  FUN_00401000();
  fStack_200 = 1.083069e-38;
  uVar7 = FUN_00b31c00();
  *puStack_1e0 = uVar7;
  fStack_200 = 1.0830714e-38;
  (**(code **)(*(int *)(iVar6 + 0x54) + 0x1c))();
  for (puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x344) + 0x58); puVar2 != (undefined4 *)0x0;
      puVar2 = (undefined4 *)puVar2[2]) {
    fStack_200 = 1.083075e-38;
    (**(code **)(*(int *)*puVar2 + 4))();
  }
  fStack_200 = 1.0830766e-38;
  iVar10 = FUN_00475500();
  iVar6 = *(int *)(param_1 + 0x348);
  fStack_200 = 1.4013e-45;
  uStack_204 = 1;
  puStack_1ec = &uStack_208;
  FUN_00401000((*(float *)(iVar10 + 0xf8) + 0.0005) * 1000.0);
  uVar7 = FUN_00b31c00();
  *puStack_1ec = uVar7;
  (**(code **)(*(int *)(iVar6 + 0x54) + 0x1c))();
  for (puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x348) + 0x58); puVar2 != (undefined4 *)0x0;
      puVar2 = (undefined4 *)puVar2[2]) {
    (**(code **)(*(int *)*puVar2 + 4))();
  }
  ExceptionList = pvStack_8c;
  return;
}

