// FUN_0083b3d0 @ 0083b3d0 body=[[0083b3d0, 0083c798] [0083c79c, 0083c7ac] [0083c7b0, 0083c7c6]]


void FUN_0083b3d0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  bool bVar3;
  ulonglong *puVar4;
  undefined1 **ppuVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  uint *puVar13;
  undefined4 *puVar14;
  int *piVar15;
  int iVar16;
  uint uVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  bool bVar20;
  float10 fVar21;
  undefined ***pppuStack_1f8;
  undefined4 uVar22;
  int iStack_1cc;
  int iStack_1c8;
  ulonglong *local_1c4;
  char cStack_1bd;
  undefined8 *local_1bc;
  char cStack_1b5;
  int local_1b4;
  undefined1 *apuStack_1b0 [3];
  int iStack_1a4;
  undefined4 uStack_1a0;
  int iStack_19c;
  undefined1 *puStack_198;
  int iStack_194;
  undefined **appuStack_190 [7];
  int iStack_174;
  undefined1 uStack_160;
  undefined1 **ppuStack_15c;
  undefined1 **ppuStack_158;
  undefined1 **ppuStack_154;
  undefined1 **ppuStack_14c;
  undefined1 **ppuStack_148;
  undefined1 **ppuStack_144;
  uint uStack_13c;
  uint uStack_138;
  uint uStack_134;
  uint uStack_12c;
  uint uStack_128;
  uint uStack_124;
  int iStack_11c;
  int iStack_10c;
  undefined1 uStack_fc;
  int local_ec;
  undefined4 *puStack_e8;
  undefined4 *puStack_e4;
  undefined4 uStack_e0;
  undefined4 *puStack_d8;
  undefined4 *puStack_d4;
  undefined4 uStack_d0;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [24];
  undefined1 *puStack_a8;
  int iStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00bafea5;
  local_14 = ExceptionList;
  local_1c4 = (ulonglong *)(param_1 + 0x34);
  iVar11 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4);
  if (*(char *)(iVar11 + 0x31) == '\0') {
    return;
  }
  ExceptionList = &local_14;
  local_ec = iVar11;
  cVar6 = FUN_0042b220();
  if (cVar6 == '\0') {
    ExceptionList = local_14;
    return;
  }
  iVar9 = *(int *)(param_2 + 0x50);
  iVar7 = *(int *)(param_2 + 0x4c);
  if (iVar7 != iVar9) {
    do {
      if (*(int *)(iVar7 + 4) == *(int *)(param_1 + 0x38)) break;
      iVar7 = iVar7 + 8;
    } while (iVar7 != iVar9);
    if (iVar7 != iVar9) {
      pppuStack_1f8 = *(undefined ****)(param_1 + 0x38);
      uVar22 = 0;
      local_1bc = (undefined8 *)0x0;
      local_1b4 = 0;
      uVar8 = FUN_0094bd40();
      _pppuStack_1f8 = CONCAT44(uVar22,uVar8);
      FUN_00838eb0(param_2,&local_1bc,&local_1b4,0,0);
      iStack_1c8 = DAT_012588e8 + 0xb4;
      iVar9 = FUN_009b7610();
      iVar7 = FUN_009b7610();
      local_1bc = (undefined8 *)((int)local_1bc + iVar9 % 0x32);
      local_1b4 = local_1b4 + iVar7 % 0x32;
      uVar17 = (int)local_1bc - local_1b4;
      if (uVar17 != 0) {
        FUN_00427ee0();
        iVar9 = *(int *)(*(int *)(iVar11 + 0xbcc) + 0x28c);
        iVar7 = *(int *)(iVar11 + 0xea0);
        fVar21 = (float10)FUN_0040b340();
        iVar11 = *(int *)(iVar11 + 0x680);
        iVar16 = 0x514;
        FUN_00401000();
        iVar10 = FUN_00b31c00();
        if (iVar10 < *(int *)(param_2 + 0x10)) {
          iVar16 = (0xb4 - *(int *)(param_2 + 0x10) / 1000) * 10;
        }
        iVar10 = FUN_009b7610();
        if ((iVar10 % iVar16 <
             (int)(((uVar17 ^ (int)uVar17 >> 0x1f) - ((int)uVar17 >> 0x1f)) +
                  ((iVar11 / 1000) * -2 -
                  (int)((float)(fVar21 * (float10)((float)(iVar7 + iVar9) / 1000.0)) / -5.0)))) ||
           ((0x31 < (int)uVar17 && (74999 < *(int *)(param_2 + 0x10))))) {
          iVar11 = FUN_00aae9af();
          uStack_c = 0;
          if (iVar11 != 0) {
            _pppuStack_1f8 = CONCAT44(0x83b61e,pppuStack_1f8);
            FUN_005894d0();
          }
          uStack_c = 0xffffffff;
          iVar11 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
          (**(code **)(**(int **)(iVar11 + 0x38) + 0x18))();
        }
      }
    }
  }
  iVar9 = FUN_00425a40();
  iVar11 = *(int *)(param_1 + 0x38);
  if ((*(int *)(iVar9 + 4) != iVar11) && (iVar9 = FUN_00425ac0(), *(int *)(iVar9 + 4) != iVar11)) {
    ExceptionList = local_14;
    return;
  }
  iVar9 = FUN_00425a40();
  cStack_1b5 = *(int *)(iVar9 + 4) == iVar11;
  if ((bool)cStack_1b5) {
    local_1bc = (undefined8 *)FUN_00425ac0();
  }
  else {
    local_1bc = (undefined8 *)FUN_00425a40();
  }
  puStack_e8 = (undefined4 *)0x0;
  puStack_e4 = (undefined4 *)0x0;
  uStack_e0 = 0;
  puStack_d8 = (undefined4 *)0x0;
  puStack_d4 = (undefined4 *)0x0;
  uStack_d0 = 0;
  uStack_c = 2;
  FUN_0043a750();
  FUN_0043a750();
  if (puStack_e8 != puStack_e4) {
    puVar14 = puStack_e8;
    do {
      if (puVar14[1] == *(int *)(param_2 + 0x18)) {
        if (puVar14 != puStack_e4) goto LAB_0083b74f;
        break;
      }
      puVar14 = puVar14 + 2;
    } while (puVar14 != puStack_e4);
  }
  FUN_004d61d0();
LAB_0083b74f:
  puVar14 = puStack_e8;
  if (puStack_d8 != puStack_d4) {
    puVar12 = puStack_d8;
    do {
      if (puVar12[1] == *(int *)(param_2 + 0x20)) {
        if (puVar12 != puStack_d4) goto LAB_0083b78c;
        break;
      }
      puVar12 = puVar12 + 2;
    } while (puVar12 != puStack_d4);
  }
  FUN_004d61d0();
LAB_0083b78c:
  puVar12 = puStack_e4;
  iStack_1a4 = 1000;
  local_1b4 = 1000;
  apuStack_1b0[0] = (undefined1 *)0x3e8;
  apuStack_1b0[2] = (undefined1 *)0x3e8;
  for (puVar18 = puVar14; (puVar19 = puStack_d8, puVar14 <= puVar18 && (puVar18 < puVar12));
      puVar18 = puVar18 + 2) {
    uStack_1a0 = *puVar18;
    _pppuStack_1f8 =
         CONCAT44(*(int *)(*(int *)(DAT_012587e4 + 4) + puVar18[1] * 4) + 0x7b4,0x83b7da);
    FUN_005dcbd0();
  }
  for (; (puStack_d8 <= puVar19 && (puVar19 < puStack_d4)); puVar19 = puVar19 + 2) {
    uStack_1a0 = *puVar19;
    _pppuStack_1f8 =
         CONCAT44(*(int *)(*(int *)(DAT_012587e4 + 4) + puVar19[1] * 4) + 0x7b4,0x83b825);
    FUN_005dcbd0();
  }
  if (cStack_1b5 == '\0') {
    if (local_1b4 == 0) {
      iVar11 = -1;
    }
    else if (apuStack_1b0[2] + 0x189373 < (undefined1 *)0x39580e) {
      iVar11 = ((int)apuStack_1b0[2] * 1000) / local_1b4;
    }
    else {
      _pppuStack_1f8 = (ulonglong)(int)apuStack_1b0[2];
      _pppuStack_1f8 = __allmul();
      iVar11 = __alldiv();
      iStack_19c = iVar11 >> 0x1f;
    }
    FUN_00401000();
    iVar9 = FUN_00b31c00();
    _pppuStack_1f8 = (longlong)iVar9 * (longlong)iVar11;
    iVar11 = __alldiv();
    if ((undefined1 *)iStack_1a4 == (undefined1 *)0x0) {
      iVar9 = -1;
    }
    else if (apuStack_1b0[0] + 0x189373 < (undefined1 *)0x39580e) {
      iVar9 = ((int)apuStack_1b0[0] * 1000) / iStack_1a4;
    }
    else {
      _pppuStack_1f8 = (ulonglong)(int)apuStack_1b0[0];
      _pppuStack_1f8 = __allmul();
      iVar9 = __alldiv();
      iStack_19c = iVar9 >> 0x1f;
    }
    FUN_00401000();
    iVar7 = FUN_00b31c00();
    _pppuStack_1f8 = (longlong)iVar7 * (longlong)iVar9;
    iVar9 = __alldiv();
    iVar9 = iVar9 + iVar11;
  }
  else {
    if (apuStack_1b0[2] == (undefined1 *)0x0) {
      iVar11 = -1;
    }
    else if (local_1b4 + 0x189373U < 0x39580e) {
      iVar11 = (local_1b4 * 1000) / (int)apuStack_1b0[2];
    }
    else {
      _pppuStack_1f8 = (ulonglong)local_1b4;
      _pppuStack_1f8 = __allmul();
      iVar11 = __alldiv();
      iStack_19c = iVar11 >> 0x1f;
    }
    FUN_00401000();
    iVar9 = FUN_00b31c00();
    _pppuStack_1f8 = (longlong)iVar9 * (longlong)iVar11;
    iVar9 = __alldiv();
    if (apuStack_1b0[0] == (undefined1 *)0x0) {
      iVar11 = -1;
    }
    else if ((undefined1 *)(iStack_1a4 + 0x189373) < (undefined1 *)0x39580e) {
      iVar11 = (iStack_1a4 * 1000) / (int)apuStack_1b0[0];
    }
    else {
      _pppuStack_1f8 = (ulonglong)iStack_1a4;
      _pppuStack_1f8 = __allmul();
      iVar11 = __alldiv();
      iStack_19c = iVar11 >> 0x1f;
    }
    FUN_00401000();
    iVar7 = FUN_00b31c00();
    _pppuStack_1f8 = (longlong)iVar11 * (longlong)iVar7;
    iVar11 = __alldiv();
    iVar9 = iVar9 + iVar11;
  }
  puVar4 = local_1c4;
  _pppuStack_1f8 = *local_1c4;
  FUN_00919e50(appuStack_190);
  uStack_c = CONCAT31(uStack_c._1_3_,3);
  FUN_00401000();
  iVar11 = FUN_00b31c00();
  if (iVar9 < iVar11) {
    if (iVar9 <= iVar7) {
      uStack_160 = 1;
      _pppuStack_1f8 = *local_1bc;
      FUN_0092a7c0();
      if (param_2 == 0) {
LAB_0083c264:
        uStack_fc = 0;
      }
      else {
        _pppuStack_1f8 = CONCAT44(&iStack_1c8,&uStack_12c);
        uStack_fc = 1;
        FUN_0042b980();
        _pppuStack_1f8 = CONCAT44(&iStack_1c8,&uStack_13c);
        FUN_0042b980();
        if (ppuStack_14c != ppuStack_148) {
          _pppuStack_1f8 = CONCAT44(ppuStack_14c,0x83c0bf);
          FID_conflict__memcpy(ppuStack_14c,ppuStack_148,0);
          ppuStack_148 = ppuStack_14c;
        }
        if (ppuStack_15c != ppuStack_158) {
          _pppuStack_1f8 = CONCAT44(ppuStack_15c,0x83c0e6);
          FID_conflict__memcpy(ppuStack_15c,ppuStack_158,0);
          ppuStack_158 = ppuStack_15c;
        }
        bVar20 = false;
        cStack_1bd = '\0';
        iVar11 = FUN_00425a40();
        if ((*(int *)(iStack_10c + 4) == *(int *)(iVar11 + 4)) ||
           (iVar11 = FUN_00425ac0(), *(int *)(iStack_10c + 4) == *(int *)(iVar11 + 4))) {
          bVar20 = true;
        }
        iVar11 = FUN_00425a40();
        if ((*(int *)(iStack_11c + 4) == *(int *)(iVar11 + 4)) ||
           (iVar11 = FUN_00425ac0(), cVar6 = cStack_1bd,
           *(int *)(iStack_11c + 4) == *(int *)(iVar11 + 4))) {
          cVar6 = '\x01';
        }
        if ((!bVar20) && (cVar6 == '\0')) goto LAB_0083c264;
        iVar11 = FUN_00425a40();
        cStack_1bd = *(int *)(iStack_10c + 4) == *(int *)(iVar11 + 4);
        if ((bool)cStack_1bd) {
          uVar17 = *(uint *)(param_2 + 0x88);
          puVar13 = (uint *)(param_2 + 0x88);
        }
        else {
          uVar17 = *(uint *)(param_2 + 0x98);
          puVar13 = (uint *)(param_2 + 0x98);
        }
        for (; (*puVar13 <= uVar17 && (uVar17 < puVar13[1])); uVar17 = uVar17 + 0x40) {
          FUN_0042c2f0();
          iStack_1c8 = 0;
          FUN_004e9b90();
        }
        if (cStack_1bd == '\0') {
          uVar17 = *(uint *)(param_2 + 0x88);
          puVar13 = (uint *)(param_2 + 0x88);
        }
        else {
          uVar17 = *(uint *)(param_2 + 0x98);
          puVar13 = (uint *)(param_2 + 0x98);
        }
        for (; (*puVar13 <= uVar17 && (uVar17 < puVar13[1])); uVar17 = uVar17 + 0x40) {
          FUN_0042c2f0();
          iStack_1c8 = 0;
          FUN_004e9b90();
        }
      }
      iVar7 = (int)(uStack_128 - uStack_12c) >> 6;
      iStack_1c8 = iVar7;
      iVar11 = iVar7;
      if (0 < iVar7) {
        do {
          FUN_00928d40();
          iVar7 = iVar7 + -1;
          iVar11 = iStack_1c8;
        } while (iVar7 != 0);
      }
      while ((iVar11 = iVar11 + -1, -1 < iVar11 &&
             (((iVar11 != 0 ||
               ((int)(*(int *)(param_2 + 0x8c) - *(int *)(param_2 + 0x88) & 0xffffffc0U) < 1)) ||
              ((int)(*(int *)(param_2 + 0x9c) - *(int *)(param_2 + 0x98) & 0xffffffc0U) < 1))))) {
        iVar16 = iVar11 * 0x40 + uStack_12c;
        _pppuStack_1f8 = CONCAT44(1,appuStack_190);
        iVar7 = FUN_00843170();
        if ((iVar7 != 100) && (*(char *)(*(int *)(iVar16 + 0xc) + 0x1d4) == '\0')) {
          FUN_00928d40();
        }
      }
      _pppuStack_1f8 = ZEXT48(appuStack_190);
      uStack_160 = 0;
      iVar11 = FUN_00843170();
      if (iVar11 == 100) {
        _pppuStack_1f8 = CONCAT44(1,appuStack_190);
        iVar7 = FUN_00843170();
        puVar4 = local_1c4;
        cVar6 = cStack_1b5;
        iVar11 = iStack_174;
        goto joined_r0x0083c375;
      }
    }
  }
  else {
    uStack_160 = 1;
    _pppuStack_1f8 = *puVar4;
    FUN_0092a7c0();
    if (param_2 == 0) {
LAB_0083becf:
      uStack_fc = 0;
    }
    else {
      _pppuStack_1f8 = CONCAT44(&iStack_1c8,&uStack_12c);
      uStack_fc = 1;
      FUN_0042b980();
      _pppuStack_1f8 = CONCAT44(&iStack_1c8,&uStack_13c);
      FUN_0042b980();
      ppuVar5 = ppuStack_14c;
      if (ppuStack_14c != ppuStack_148) {
        _pppuStack_1f8 = CONCAT44(ppuStack_14c,0x83bb35);
        FID_conflict__memcpy(ppuStack_14c,ppuStack_148,0);
        ppuStack_148 = ppuVar5;
      }
      ppuVar5 = ppuStack_15c;
      if (ppuStack_15c != ppuStack_158) {
        _pppuStack_1f8 = CONCAT44(ppuStack_15c,0x83bb5c);
        FID_conflict__memcpy(ppuStack_15c,ppuStack_158,0);
        ppuStack_158 = ppuVar5;
      }
      bVar20 = false;
      iVar11 = FUN_00425a40();
      if ((*(int *)(iStack_10c + 4) == *(int *)(iVar11 + 4)) ||
         (iVar11 = FUN_00425ac0(), *(int *)(iStack_10c + 4) == *(int *)(iVar11 + 4))) {
        bVar20 = true;
      }
      iVar11 = FUN_00425a40();
      if ((*(int *)(iStack_11c + 4) == *(int *)(iVar11 + 4)) ||
         (iVar11 = FUN_00425ac0(), *(int *)(iStack_11c + 4) == *(int *)(iVar11 + 4))) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if ((!bVar20) && (!bVar3)) goto LAB_0083becf;
      iVar11 = FUN_00425a40();
      bVar20 = *(int *)(iStack_10c + 4) != *(int *)(iVar11 + 4);
      if (bVar20) {
        uVar17 = *(uint *)(param_2 + 0x98);
        puVar13 = (uint *)(param_2 + 0x98);
      }
      else {
        uVar17 = *(uint *)(param_2 + 0x88);
        puVar13 = (uint *)(param_2 + 0x88);
      }
      while ((*puVar13 <= uVar17 && (uVar17 < puVar13[1]))) {
        if ((uVar17 < uStack_128) && (uStack_12c <= uVar17)) {
          if (uStack_128 == uStack_124) {
            FUN_0042c4b0();
          }
        }
        else if (uStack_128 == uStack_124) {
          FUN_0042c4b0();
        }
        if (uStack_128 != 0) {
          FUN_0094be20();
        }
        uStack_128 = uStack_128 + 0x40;
        apuStack_1b0[0] = (undefined1 *)0x0;
        if ((apuStack_1b0 < ppuStack_148) && (ppuStack_14c <= apuStack_1b0)) {
          iVar11 = (int)apuStack_1b0 - (int)ppuStack_14c;
          if (ppuStack_148 == ppuStack_144) {
            FUN_007b94a0();
          }
          if (ppuStack_148 != (undefined1 **)0x0) {
            *ppuStack_148 = ppuStack_14c[iVar11 >> 2];
          }
          ppuStack_148 = ppuStack_148 + 1;
          uVar17 = uVar17 + 0x40;
        }
        else {
          if (ppuStack_148 == ppuStack_144) {
            FUN_007b94a0();
          }
          if (ppuStack_148 != (undefined1 **)0x0) {
            *ppuStack_148 = (undefined1 *)0x0;
          }
          ppuStack_148 = ppuStack_148 + 1;
          uVar17 = uVar17 + 0x40;
        }
      }
      if (bVar20) {
        uVar17 = *(uint *)(param_2 + 0x88);
        puVar13 = (uint *)(param_2 + 0x88);
      }
      else {
        uVar17 = *(uint *)(param_2 + 0x98);
        puVar13 = (uint *)(param_2 + 0x98);
      }
      while ((*puVar13 <= uVar17 && (uVar17 < puVar13[1]))) {
        if ((uVar17 < uStack_138) && (uStack_13c <= uVar17)) {
          if (uStack_138 == uStack_134) {
            FUN_0042c4b0();
          }
        }
        else if (uStack_138 == uStack_134) {
          FUN_0042c4b0();
        }
        if (uStack_138 != 0) {
          FUN_0094be20();
        }
        uStack_138 = uStack_138 + 0x40;
        apuStack_1b0[0] = (undefined1 *)0x0;
        if ((apuStack_1b0 < ppuStack_158) && (ppuStack_15c <= apuStack_1b0)) {
          iVar11 = (int)apuStack_1b0 - (int)ppuStack_15c;
          if (ppuStack_158 == ppuStack_154) {
            FUN_007b94a0();
          }
          if (ppuStack_158 != (undefined1 **)0x0) {
            *ppuStack_158 = ppuStack_15c[iVar11 >> 2];
          }
          ppuStack_158 = ppuStack_158 + 1;
          uVar17 = uVar17 + 0x40;
        }
        else {
          if (ppuStack_158 == ppuStack_154) {
            FUN_007b94a0();
          }
          if (ppuStack_158 != (undefined1 **)0x0) {
            *ppuStack_158 = (undefined1 *)0x0;
          }
          ppuStack_158 = ppuStack_158 + 1;
          uVar17 = uVar17 + 0x40;
        }
      }
    }
    iVar7 = (int)(uStack_128 - uStack_12c) >> 6;
    iStack_1c8 = iVar7;
    puVar4 = local_1c4;
    iVar11 = iVar7;
    if (0 < iVar7) {
      do {
        FUN_00928d40();
        iVar7 = iVar7 + -1;
        puVar4 = local_1c4;
        iVar11 = iStack_1c8;
      } while (iVar7 != 0);
    }
    while ((iVar11 = iVar11 + -1, local_1c4 = puVar4, -1 < iVar11 &&
           (((iVar11 != 0 ||
             ((int)(*(int *)(param_2 + 0x8c) - *(int *)(param_2 + 0x88) & 0xffffffc0U) < 1)) ||
            ((int)(*(int *)(param_2 + 0x9c) - *(int *)(param_2 + 0x98) & 0xffffffc0U) < 1))))) {
      iVar16 = iVar11 * 0x40 + uStack_12c;
      _pppuStack_1f8 = ZEXT48(appuStack_190);
      iVar7 = FUN_00843170();
      puVar4 = local_1c4;
      if ((iVar7 != 100) && (*(char *)(*(int *)(iVar16 + 0xc) + 0x1d4) == '\0')) {
        FUN_00928d40();
        puVar4 = local_1c4;
      }
    }
    _pppuStack_1f8 = ZEXT48(appuStack_190);
    iVar11 = FUN_00843170();
    if (iVar11 == 100) {
      _pppuStack_1f8 = CONCAT44(1,appuStack_190);
      iVar7 = FUN_00843170();
      cVar6 = cStack_1b5;
      iVar11 = iStack_174;
joined_r0x0083c375:
      cStack_1b5 = cVar6;
      iStack_174 = iVar11;
      if (iVar7 == 100) {
        if (cVar6 == '\0') {
          iStack_1cc = *(int *)(param_2 + 0xac);
        }
        else {
          iStack_1cc = *(int *)(param_2 + 0xa8);
        }
        iStack_174 = *(int *)(DAT_012588e8 + 0xb0c);
        if (iStack_1cc < iStack_174) {
          piVar15 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)((int)puVar4 + 4) * 4) +
                             0xcdc);
          local_ec = FUN_00aae9af();
          uStack_c._0_1_ = 4;
          if (local_ec != 0) {
            (*(code *)appuStack_190[0][0xc])();
            _pppuStack_1f8 = CONCAT44(0x83c40e,pppuStack_1f8);
            FUN_0090f620();
          }
          uStack_c = CONCAT31(uStack_c._1_3_,3);
          iVar11 = (**(code **)(*piVar15 + 0x44))();
          (**(code **)(**(int **)(iVar11 + 0x38) + 0x18))();
          iVar9 = *(int *)(DAT_012588e8 + 0xb0c) + 0x438;
          iVar11 = iStack_174;
          if (cVar6 == '\0') {
            *(int *)(param_2 + 0xac) = iVar9;
          }
          else {
            *(int *)(param_2 + 0xa8) = iVar9;
          }
        }
        goto LAB_0083c76b;
      }
    }
  }
  iVar11 = FUN_00425a40();
  bVar20 = *(int *)(iVar11 + 4) == *(int *)(param_1 + 0x38);
  puStack_198 = *(undefined1 **)local_1c4;
  iStack_194 = *(int *)((int)local_1c4 + 4);
  local_1bc = (undefined8 *)CONCAT31(local_1bc._1_3_,bVar20);
  if (bVar20) {
    puVar14 = (undefined4 *)FUN_00425ac0();
  }
  else {
    puVar14 = (undefined4 *)FUN_00425a40();
  }
  uVar8 = *puVar14;
  uVar1 = puVar14[1];
  FUN_0094bd40();
  puVar14 = *(undefined4 **)(param_2 + 0x4c);
  iStack_1c8 = 100;
  while ((puVar4 = local_1c4, *(undefined4 **)(param_2 + 0x4c) <= puVar14 &&
         (puVar14 < *(undefined4 **)(param_2 + 0x50)))) {
    puVar2 = (undefined1 *)*puVar14;
    iVar11 = puVar14[1];
    local_1b4 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + iVar11 * 4) + 0x1404);
    puVar14 = puVar14 + 2;
    apuStack_1b0[0] = puVar2;
    FUN_0094bd40();
    apuStack_1b0[0] = (undefined1 *)&pppuStack_1f8;
    _pppuStack_1f8 =
         CONCAT44(1,(*(int *)(*(int *)(DAT_012586dc + 0x40) + 0x24) -
                    *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)((int)local_1c4 + 4) * 4)
                            + 0x1430)) + -2000);
    puStack_a8 = puVar2;
    iStack_a4 = iVar11;
    uStack_a0 = uVar8;
    uStack_9c = uVar1;
    FUN_00845ad0(auStack_c8,local_ec,auStack_c0,0);
    iVar7 = *(int *)(*(int *)(DAT_012587e4 + 4) + iVar11 * 4);
    iStack_1a4 = 0;
    apuStack_1b0[0] = (undefined1 *)0x0;
    FUN_00838eb0(param_2,&iStack_1a4,apuStack_1b0,0,1,auStack_c0,local_1bc,
                 *(undefined4 *)(iVar7 + 0x1c),*(undefined4 *)(iVar7 + 0x20));
    if ((char)local_1bc == '\0') {
      apuStack_1b0[2] = apuStack_1b0[0];
      apuStack_1b0[0] = (undefined1 *)iStack_1a4;
    }
    else {
      apuStack_1b0[2] = (undefined1 *)iStack_1a4;
    }
    _pppuStack_1f8 = CONCAT44(auStack_c0,0x83c5e7);
    piVar15 = (int *)FUN_00951920();
    if ((((0 < *piVar15) && (0 < (int)apuStack_1b0[2])) &&
        ((int)apuStack_1b0[0] < (int)apuStack_1b0[2])) && (local_1b4 < iStack_1c8)) {
      iStack_1c8 = local_1b4;
      puStack_198 = puVar2;
      iStack_194 = iVar11;
      FUN_00424b60();
    }
  }
  iVar11 = iStack_174;
  if (iStack_194 != *(int *)(param_1 + 0x38)) {
    _pppuStack_1f8 = *local_1c4;
    FUN_009277f0();
    uStack_c = CONCAT31(uStack_c._1_3_,5);
    FUN_00424b60();
    FUN_00401000();
    iVar11 = FUN_00b31c00();
    _pppuStack_1f8 = (longlong)iVar11 * (longlong)iVar9;
    iVar11 = __alldiv();
    iVar9 = 0x14 - iVar11 / 1000;
    iVar11 = iStack_174;
    if (0 < iVar9) {
      iVar7 = 100;
      FUN_00401000();
      iVar11 = FUN_00b31c00();
      if (iVar11 < *(int *)(param_2 + 0x10)) {
        iVar7 = 0x96 - *(int *)(param_2 + 0x10) / 1000;
      }
      iVar16 = FUN_009b7610();
      iVar11 = iStack_174;
      if (iVar16 % iVar7 < iVar9) {
        piVar15 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)((int)puVar4 + 4) * 4) +
                           0xcdc);
        FUN_009115b0();
        iVar11 = (**(code **)(*piVar15 + 0x44))();
        (**(code **)(**(int **)(iVar11 + 0x38) + 0x18))();
        iVar11 = iStack_174;
      }
    }
  }
LAB_0083c76b:
  iStack_174 = iVar11;
  uStack_c = CONCAT31(uStack_c._1_3_,6);
  FUN_00427800();
  appuStack_190[0] = CDiplomaticAction::vftable;
  if (puStack_d8 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (puStack_e8 == (undefined4 *)0x0) {
    ExceptionList = local_14;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

