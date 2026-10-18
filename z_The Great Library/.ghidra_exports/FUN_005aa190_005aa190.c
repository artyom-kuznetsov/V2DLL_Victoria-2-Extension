// FUN_005aa190 @ 005aa190  (requested 005AA190, first bytes: 55 8B EC 83 E4 F8 6A FF)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_005aa190(void)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int *in_ECX;
  int iVar11;
  undefined4 *puVar12;
  uint *puVar13;
  uint **ppuVar14;
  undefined1 *puVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uStack_220;
  code *pcStack_21c;
  undefined1 auStack_218 [108];
  undefined4 uStack_1ac;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  uint *local_188;
  uint *puStack_184;
  int iStack_180;
  undefined1 *puStack_178;
  int iStack_174;
  undefined1 local_16d;
  int *piStack_16c;
  int iStack_168;
  int *local_164;
  int iStack_160;
  int iStack_15c;
  int iStack_158;
  int iStack_154;
  undefined1 auStack_150 [28];
  undefined1 auStack_134 [28];
  int iStack_118;
  int iStack_114;
  undefined1 *puStack_10c;
  undefined1 auStack_108 [28];
  undefined1 auStack_ec [56];
  undefined1 auStack_b4 [28];
  undefined1 auStack_98 [64];
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00ba6963;
  local_14 = ExceptionList;
  uStack_1a0 = CONCAT44(in_ECX,0x5aa1c0);
  ExceptionList = &local_14;
  local_164 = in_ECX;
  FUN_0059c3d0();
  in_ECX[0xd] = in_ECX[0xd] + 1;
  local_16d = 0;
  if (*(int *)(in_ECX[6] + 0x10c) != 0) {
    ExceptionList = local_14;
    return 0;
  }
  puVar13 = *(uint **)(in_ECX[4] + 0x20);
joined_r0x005aa1f5:
  if (puVar13 != (uint *)0x0) {
    uVar1 = *puVar13;
    puVar13 = (uint *)puVar13[2];
    if (((*(int *)(uVar1 + 0xec) < 1) && (*(char *)(uVar1 + 0x104) == '\0')) &&
       (*(char *)(uVar1 + 0x164) == '\0')) goto code_r0x005aa220;
    goto LAB_005aa249;
  }
  iVar11 = local_164[4];
  if ((*(int *)(iVar11 + 0x38) - *(int *)(iVar11 + 0x34) & 0xfffffff8U) == 0) {
    ExceptionList = local_14;
    return 1;
  }
  iVar6 = local_164[6];
  puStack_178 = (undefined1 *)**(int **)(iVar11 + 0x34);
  iVar8 = *(int *)(*(int *)(DAT_012587e4 + 4) + (*(int **)(iVar11 + 0x34))[1] * 4);
  if (*(int *)(iVar6 + 0x134) == *(int *)(iVar8 + 0x20)) {
    ExceptionList = local_14;
    return 1;
  }
  puVar13 = (uint *)0x0;
  if ((*(int *)(*(int *)(*(int *)(iVar8 + 0xbe8) + *(int *)(iVar6 + 0x134) * 4) + 0x34) == 0) &&
     (((*(char *)(iVar6 + 0x130) != 'R' || (*(char *)(iVar6 + 0x131) != 'E')) ||
      (*(char *)(iVar6 + 0x132) != 'B')))) {
    if (*(char *)(iVar8 + 0x1c) != 'R') {
      ExceptionList = local_14;
      return 1;
    }
    if (*(char *)(iVar8 + 0x1d) != 'E') {
      ExceptionList = local_14;
      return 1;
    }
    if (*(char *)(iVar8 + 0x1e) != 'B') {
      ExceptionList = local_14;
      return 1;
    }
  }
  local_188 = (uint *)0x0;
  iStack_15c = 0;
  iStack_168 = 0;
  iStack_118 = 0;
  iStack_158 = 0;
  uStack_1a0 = 0x447a1fff005aa320;
  FUN_00401000();
  uStack_1a0 = CONCAT44(0x5aa328,(undefined4)uStack_1a0);
  iStack_160 = FUN_00b31c00();
  piStack_16c = *(int **)(iVar11 + 0x20);
  iStack_154 = iStack_160;
  puVar3 = local_188;
  while (local_188 = puVar3, piStack_16c != (int *)0x0) {
    puVar2 = (uint *)*piStack_16c;
    piStack_16c = (int *)piStack_16c[2];
    puVar3 = puVar13;
    if ((((int)puVar2[0x3b] < 1) && ((char)puVar2[0x41] == '\0')) && ((char)puVar2[0x59] == '\0')) {
      uStack_1a0 = CONCAT44(puVar2,0x5aa381);
      local_188 = puVar2;
      piVar5 = (int *)FUN_005cd690();
      if (DAT_0125ff7c < *piVar5) {
        piVar5 = (int *)puVar2[0xe];
        while (piVar5 != (int *)0x0) {
          iVar11 = *piVar5;
          puVar3 = *(uint **)(*(int *)(iVar11 + 0x38) + 0x22c);
          iVar6 = *(int *)(*(int *)(iVar11 + 0x38) + 0x228);
          piVar5 = (int *)piVar5[2];
          if ((int)puVar13 < (int)puVar3) {
            puVar13 = puVar3;
          }
          if (iStack_15c < iVar6) {
            iStack_15c = iVar6;
          }
          if (0 < (int)puVar3) {
            iStack_118 = iStack_118 + *(int *)(iVar11 + 0x3c);
          }
          puVar2 = local_188;
          if (0 < iVar6) {
            iStack_158 = iStack_158 + *(int *)(iVar11 + 0x3c);
          }
        }
        uStack_1a0 = CONCAT44(puVar2,0x5aa3ed);
        piVar5 = (int *)FUN_005cd690();
        iStack_168 = iStack_168 + *piVar5;
        puVar3 = puVar13;
      }
    }
  }
  if ((_DAT_013f35f4 & 1) == 0) {
    _DAT_013f35f4 = _DAT_013f35f4 | 1;
    uStack_1a0 = 0x3f000000005aa440;
    FUN_00401000();
    uStack_1a0 = CONCAT44(0x5aa448,(undefined4)uStack_1a0);
    _DAT_013f35cc = FUN_00b31c00();
    _DAT_013f35d0 = iStack_154;
    uStack_1a0 = 0x44e24fff005aa46a;
    FUN_00401000();
    uStack_1a0 = CONCAT44(0x5aa472,(undefined4)uStack_1a0);
    _DAT_013f35d4 = FUN_00b31c00();
    uStack_1a0 = 0x4514c800005aa48a;
    FUN_00401000();
    uStack_1a0 = CONCAT44(0x5aa492,(undefined4)uStack_1a0);
    _DAT_013f35d8 = FUN_00b31c00();
    uStack_1a0 = 0x4530e800005aa4aa;
    FUN_00401000();
    uStack_1a0 = CONCAT44(0x5aa4b2,(undefined4)uStack_1a0);
    _DAT_013f35dc = FUN_00b31c00();
    uStack_1a0 = 0x45476800005aa4ca;
    FUN_00401000();
    uStack_1a0 = CONCAT44(0x5aa4d2,(undefined4)uStack_1a0);
    _DAT_013f35e0 = FUN_00b31c00();
    uStack_1a0 = 0x455ac800005aa4ea;
    FUN_00401000();
    uStack_1a0 = CONCAT44(0x5aa4f2,(undefined4)uStack_1a0);
    _DAT_013f35e4 = FUN_00b31c00();
    uStack_1a0 = 0x456ba800005aa50a;
    FUN_00401000();
    uStack_1a0 = CONCAT44(0x5aa512,(undefined4)uStack_1a0);
    _DAT_013f35e8 = FUN_00b31c00();
    uStack_1a0 = 0x457a0801005aa52a;
    FUN_00401000();
    uStack_1a0 = CONCAT44(0x5aa532,(undefined4)uStack_1a0);
    _DAT_013f35ec = FUN_00b31c00();
    uStack_1a0 = 0x4583e400005aa54a;
    FUN_00401000();
    uStack_1a0 = CONCAT44(0x5aa552,(undefined4)uStack_1a0);
    _DAT_013f35f0 = FUN_00b31c00();
  }
  iVar11 = iStack_168;
  piStack_16c = (int *)(*(int *)(*(int *)(local_164[6] + 0x9c) + 0x30) / 1000);
  if (8 < (int)piStack_16c) {
    piStack_16c = (int *)0x9;
  }
  if (0 < (int)puVar13) {
    if (iStack_168 == 0) {
      iVar11 = -1;
    }
    else if (iStack_118 + 0x189373U < 0x39580e) {
      iVar11 = (iStack_118 * 1000) / iStack_168;
    }
    else {
      uStack_1a0 = 1000;
      uStack_1a8 = (longlong)iStack_118;
      uStack_1ac = 0x5aa5e1;
      uStack_1a8 = __allmul();
      uStack_1a0 = (ulonglong)iVar11;
      uStack_1ac = 0x5aa5ea;
      iVar11 = __alldiv();
      iStack_114 = iVar11 >> 0x1f;
      puVar13 = local_188;
    }
    if (iVar11 < *(int *)(*(int *)(DAT_012586dc + 0x20) + 200)) {
      iVar6 = *(int *)(*(int *)(DAT_012586dc + 0x20) + 200);
      if (iVar6 == 0) {
        iVar6 = -1;
      }
      else {
        iVar6 = (int)(1000000 / (longlong)iVar6);
      }
      uStack_1a8 = (longlong)iVar6 * (longlong)iVar11;
      uStack_1a0 = 1000;
      uStack_1ac = 0x5aa62f;
      iVar11 = __alldiv();
      uStack_1a8 = (longlong)iVar11 * (longlong)(int)puVar13;
      uStack_1a0 = 1000;
      uStack_1ac = 0x5aa63f;
      puVar13 = (uint *)__alldiv();
    }
    iVar11 = (int)((ulonglong)((longlong)(int)puVar13 * -0x10624dd3) >> 0x20);
    piStack_16c = (int *)((int)piStack_16c + ((iVar11 >> 6) - (iVar11 >> 0x1f)));
    if ((int)piStack_16c < 0) {
      piStack_16c = (int *)0x0;
    }
  }
  iVar11 = iStack_168;
  if (0 < iStack_15c) {
    if (iStack_168 == 0) {
      iVar11 = -1;
    }
    else if (iStack_158 + 0x189373U < 0x39580e) {
      iVar11 = (iStack_158 * 1000) / iStack_168;
    }
    else {
      uStack_1a0 = 1000;
      uStack_1a8 = (longlong)iStack_158;
      uStack_1ac = 0x5aa6b6;
      uStack_1a8 = __allmul();
      uStack_1a0 = (ulonglong)iVar11;
      uStack_1ac = 0x5aa6bf;
      iVar11 = __alldiv();
      puStack_184 = (uint *)(iVar11 >> 0x1f);
    }
    iVar8 = iStack_15c;
    iVar6 = *(int *)(DAT_012586dc + 0x20);
    if (iVar11 < *(int *)(iVar6 + 0xc4)) {
      if (*(int *)(iVar6 + 0xc4) == 0) {
        iVar7 = -1;
      }
      else {
        iVar7 = (int)(1000000 / (longlong)*(int *)(iVar6 + 0xc4));
      }
      uStack_1a8 = (longlong)iVar7 * (longlong)iVar11;
      uStack_1a0 = 1000;
      uStack_1ac = 0x5aa701;
      iVar11 = __alldiv();
      uStack_1a8 = (longlong)iVar11 * (longlong)iVar8;
      uStack_1a0 = 1000;
      uStack_1ac = 0x5aa711;
      iVar8 = __alldiv();
    }
    uStack_1a8 = (longlong)*(int *)(iVar6 + 0xd8) * (longlong)iVar8;
    uStack_1a0 = 1000;
    uStack_1ac = 0x5aa729;
    iVar11 = __alldiv();
    uStack_1a8 = (longlong)(iVar11 + iStack_154) * (longlong)iStack_160;
    uStack_1a0 = 1000;
    uStack_1ac = 0x5aa73f;
    iStack_160 = __alldiv();
  }
  iVar8 = iStack_160;
  iVar11 = *(int *)(DAT_012586dc + 0x20);
  iVar6 = *(int *)(iVar11 + 0x14);
  if (iVar6 + 0x189373U < 0x39580e) {
    iVar6 = (iVar6 * 1000) / 1000000;
  }
  else {
    uStack_1a0 = 1000;
    uStack_1a8 = (longlong)iVar6;
    uStack_1ac = 0x5aa78f;
    uStack_1a8 = __allmul();
    uStack_1a0 = 1000000;
    uStack_1ac = 0x5aa79d;
    iVar6 = __alldiv();
    iStack_174 = iVar6 >> 0x1f;
  }
  if (iVar6 == 0) {
    iVar6 = -1;
  }
  else if (iStack_168 + 0x189373U < 0x39580e) {
    iVar6 = (iStack_168 * 1000) / iVar6;
  }
  else {
    uStack_1a0 = 1000;
    iStack_174 = iVar6 >> 0x1f;
    uStack_1a8 = (longlong)iStack_168;
    uStack_1ac = 0x5aa7ec;
    puStack_178 = (undefined1 *)iVar6;
    uStack_1a8 = __allmul();
    uStack_1a0 = CONCAT44(iStack_174,puStack_178);
    uStack_1ac = 0x5aa7fd;
    iVar6 = __alldiv();
    iStack_174 = iVar6 >> 0x1f;
    iVar8 = iStack_160;
  }
  if (*(int *)(iVar11 + 0xcc) < iVar6) {
    if (*(int *)(iVar11 + 0xd0) < iVar6) {
      iVar6 = *(int *)(iVar11 + 0xd0);
    }
    uStack_1a8 = (longlong)(iVar6 - *(int *)(iVar11 + 0xcc)) * (longlong)*(int *)(iVar11 + 0xd4);
    uStack_1a0 = 1000;
    uStack_1ac = 0x5aa836;
    iVar11 = __alldiv();
LAB_005aa88e:
    uStack_1a8 = (longlong)iVar11 * (longlong)iVar8;
    uStack_1a0 = 1000;
    uStack_1ac = 0x5aa89e;
    iVar8 = __alldiv();
  }
  else if (iVar6 < *(int *)(iVar11 + 0xcc)) {
    iVar11 = *(int *)(iVar11 + 0xcc);
    if (iVar11 == 0) {
      iVar11 = -1;
    }
    else if ((iVar6 < -0x189373) || (0x20c49a < iVar6)) {
      uStack_1a0 = 1000;
      uStack_1a8 = (longlong)iVar6;
      uStack_1ac = 0x5aa87c;
      uStack_1a8 = __allmul();
      uStack_1a0 = (ulonglong)iVar11;
      uStack_1ac = 0x5aa885;
      iVar11 = __alldiv();
      iStack_174 = iVar11 >> 0x1f;
      iVar8 = iStack_160;
    }
    else {
      iVar11 = (iVar6 * 1000) / iVar11;
    }
    goto LAB_005aa88e;
  }
  iVar11 = *(int *)(&DAT_013f35cc + (int)piStack_16c * 4);
  uStack_1a0 = 1000;
  uStack_1a8 = (longlong)iVar8;
  uStack_1ac = 0x5aa8bc;
  uStack_1a8 = __allmul();
  uStack_1a0 = (ulonglong)(iVar11 + 1000);
  uStack_1ac = 0x5aa8d0;
  iVar11 = __alldiv();
  uStack_1a0 = 8;
  uStack_1a8 = CONCAT44(0x5aa8db,(undefined4)uStack_1a8);
  iVar6 = FUN_009b7950();
  iVar6 = iVar6 % 10;
  if (iVar6 < 1) {
    iVar11 = 0;
  }
  else {
    if (iVar6 < 2) {
      uStack_1a0 = 0x43488000005aa906;
      FUN_00401000();
      uStack_1a0 = CONCAT44(0x5aa90e,(undefined4)uStack_1a0);
      iVar6 = FUN_00b31c00();
      uStack_1a8 = (longlong)iVar6 * (longlong)iVar11;
    }
    else if (iVar6 < 3) {
      uStack_1a0 = 0x43fa4001005aa92d;
      FUN_00401000();
      uStack_1a0 = CONCAT44(0x5aa935,(undefined4)uStack_1a0);
      iVar6 = FUN_00b31c00();
      uStack_1a8 = (longlong)iVar6 * (longlong)iVar11;
    }
    else if (iVar6 < 5) {
      uStack_1a0 = 0x443ba000005aa951;
      FUN_00401000();
      uStack_1a0 = CONCAT44(0x5aa959,(undefined4)uStack_1a0);
      iVar6 = FUN_00b31c00();
      uStack_1a8 = (longlong)iVar6 * (longlong)iVar11;
    }
    else if (iVar6 < 6) {
      uStack_1a8 = (longlong)iVar11 * (longlong)iStack_154;
    }
    else {
      if (iVar6 < 8) {
        uVar9 = 0x44899000;
      }
      else {
        uVar9 = 0x449c5000;
      }
      uStack_1a0 = CONCAT44(uVar9,0x5aa98c);
      FUN_00401000();
      uStack_1a0 = CONCAT44(0x5aa994,(undefined4)uStack_1a0);
      iVar6 = FUN_00b31c00();
      uStack_1a8 = (longlong)iVar11 * (longlong)iVar6;
    }
    uStack_1a0 = 1000;
    uStack_1ac = 0x5aa9a8;
    iVar11 = __alldiv();
  }
  iVar6 = local_164[6];
  iVar8 = local_164[4];
  uStack_1a0 = CONCAT44(0x5aa9c2,(undefined4)uStack_1a0);
  cVar4 = FUN_0042bb00();
  if (cVar4 == '\0') {
    if ((*(int *)(iVar8 + 0x38) - *(int *)(iVar8 + 0x34) & 0xfffffff8U) != 0) {
      uStack_1a0 = CONCAT44(0x5aa9e8,(undefined4)uStack_1a0);
      cVar4 = FUN_004b64e0();
      if (cVar4 != '\0') {
        uVar9 = 0x44899000;
        goto LAB_005aa9f4;
      }
    }
  }
  else {
    uVar9 = 0x449c5000;
LAB_005aa9f4:
    uStack_1a0 = CONCAT44(uVar9,0x5aa9ff);
    FUN_00401000();
    uStack_1a0 = CONCAT44(0x5aaa07,(undefined4)uStack_1a0);
    iVar8 = FUN_00b31c00();
    uStack_1a8 = (longlong)iVar8 * (longlong)iVar11;
    uStack_1a0 = 1000;
    uStack_1ac = 0x5aaa17;
    iVar11 = __alldiv();
  }
  iVar11 = *(int *)(iVar6 + 0x114) - iVar11;
  if (100000 < iVar11) {
    iVar11 = 100000;
  }
  *(int *)(iVar6 + 0x114) = iVar11;
  iVar11 = local_164[6];
  if (0 < *(int *)(iVar11 + 0x114)) {
    ExceptionList = local_14;
    return local_16d;
  }
  puStack_178 = *(undefined1 **)(iVar11 + 0x128);
  iVar11 = *(int *)(iVar11 + 300);
  local_16d = 1;
  uStack_1a0 = CONCAT44(*(undefined4 *)(local_164[4] + 0x34),0x5aaa6a);
  FUN_004b50a0();
  *(undefined4 *)(local_164[6] + 0x114) = 100000;
  iVar6 = *(int *)(local_164[6] + 300);
  if ((iVar6 == *(int *)(local_164[6] + 0x134)) && (iVar11 == iVar6)) {
    puVar12 = *(undefined4 **)(local_164[4] + 0x34);
    local_188 = (uint *)(local_164[4] + 0x34);
    puVar13 = local_188;
    while (((undefined4 *)*puVar13 <= puVar12 && (puVar12 < (undefined4 *)puVar13[1]))) {
      puStack_178 = (undefined1 *)*puVar12;
      piVar5 = puVar12 + 1;
      puVar12 = puVar12 + 2;
      if (*piVar5 != *(int *)(local_164[6] + 300)) {
        puStack_178 = (undefined1 *)((int)&uStack_1a0 + 4);
        uStack_1a0 = 0x61a8005aaae9;
        FUN_005179e0();
        puVar13 = local_188;
      }
    }
  }
  uStack_1a0 = 5;
  uStack_1a8 = CONCAT44(0x5aaaf8,(undefined4)uStack_1a8);
  uVar9 = FUN_009b7950();
  uStack_1a0 = CONCAT44(uVar9,0x5aab05);
  FUN_008a8650();
  uStack_58 = **(undefined4 **)(local_164[4] + 0x34);
  uStack_54 = (*(undefined4 **)(local_164[4] + 0x34))[1];
  uStack_50 = *(undefined4 *)(local_164[6] + 0x58);
  uStack_1a0 = CONCAT44(0x5aab3c,(undefined4)uStack_1a0);
  FUN_009885d0();
  uStack_c = 0xc;
  uStack_1a0._0_4_ = 0x5aab4f;
  uStack_1a0._4_4_ = auStack_b4;
  uVar9 = FUN_008b26e0();
  uStack_1a0 = CONCAT44(uStack_1a0._4_4_,uVar9);
  uStack_1a8 = CONCAT44(0x5aab5c,(undefined4)uStack_1a8);
  FUN_008b2680();
  uStack_c = 0xffffffff;
  uStack_1a0 = CONCAT44(0x5aab6e,(undefined4)uStack_1a0);
  FUN_00408ad0();
  uStack_1a0 = CONCAT44(0x5aab77,(undefined4)uStack_1a0);
  iVar6 = (**(code **)(*local_164 + 0x24))();
  iVar11 = DAT_012588e8;
  if (iVar6 == 3) {
    uStack_1a0 = CONCAT44(0x5aab93,(undefined4)uStack_1a0);
    cVar4 = FUN_0042bb00();
    if (cVar4 != '\0') goto LAB_005aabad;
  }
  if (local_164[0xc] != *(int *)(iVar11 + 0xb60)) {
    ExceptionList = local_14;
    return local_16d;
  }
LAB_005aabad:
  puStack_178 = *(undefined1 **)(iVar11 + 0xb5c);
  uStack_1a0 = CONCAT44(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar11 + 0xb60) * 4),
                        0x5aabcf);
  FUN_005061e0();
  uStack_1a0 = CONCAT44(0x5aabd8,(undefined4)uStack_1a0);
  FUN_004e9500();
  uStack_c = 0xd;
  uStack_1a0 = CONCAT44(0x5aabf1,(undefined4)uStack_1a0);
  FUN_009885d0();
  uStack_c._0_1_ = 0xe;
  uStack_1a0 = CONCAT44(0x5aac0a,(undefined4)uStack_1a0);
  FUN_009885d0();
  uStack_c._0_1_ = 0xf;
  uStack_1a0 = CONCAT44(0x5aac17,(undefined4)uStack_1a0);
  FUN_006a4f40();
  uStack_1a0 = CONCAT44(auStack_150,auStack_134);
  uStack_1a8 = CONCAT44(0x5aac26,(undefined4)uStack_1a8);
  uVar9 = FUN_00424ce0();
  uStack_1a0 = CONCAT44(uVar9,auStack_108);
  uStack_c._0_1_ = 0x10;
  uStack_1a8 = CONCAT44(auStack_ec,0x5aac3f);
  FUN_00424aa0();
  puVar13 = puStack_184;
  uStack_c._0_1_ = 0x11;
  uStack_1a0 = 0x44005aac54;
  puStack_178 = (undefined1 *)FUN_00aae9af();
  uStack_c._0_1_ = 0x12;
  if (puStack_178 == (undefined1 *)0x0) {
    puStack_184 = (uint *)0x0;
  }
  else {
    uStack_1a0 = CONCAT44(puVar13,puStack_178);
    uStack_1a8 = CONCAT44(0x5aac70,(undefined4)uStack_1a8);
    puStack_184 = (uint *)FUN_0042b900();
  }
  puVar3 = puStack_184;
  if (iStack_180 != 0) {
    *(uint **)((int)puVar13 + 0x3c) = puStack_184;
    puVar3 = local_188;
  }
  local_188 = puVar3;
  uStack_1a0 = CONCAT44(0x5aac9c,(undefined4)uStack_1a0);
  iStack_180 = iStack_180 + 1;
  FUN_00a39a80();
  uStack_1a0 = CONCAT44(0x5aaca5,(undefined4)uStack_1a0);
  FUN_00408ad0();
  uStack_1a0 = CONCAT44(0x5aacb1,(undefined4)uStack_1a0);
  FUN_00408ad0();
  uStack_c._0_1_ = 0xd;
  uStack_1a0 = CONCAT44(0x5aacc2,(undefined4)uStack_1a0);
  FUN_00408ad0();
  uStack_1a0 = CONCAT44(0x5aacd0,(undefined4)uStack_1a0);
  FUN_009885d0();
  uStack_c._0_1_ = 0x13;
  uStack_1a0 = CONCAT44(auStack_134,0x5aace4);
  uVar9 = FUN_005a9230();
  uStack_1a0 = CONCAT44(uVar9,auStack_150);
  uStack_c._0_1_ = 0x14;
  uStack_1a8 = CONCAT44(auStack_ec,0x5aacfd);
  FUN_00424aa0();
  puVar13 = puStack_184;
  uStack_c._0_1_ = 0x15;
  uStack_1a0 = 0x44005aad12;
  puStack_178 = (undefined1 *)FUN_00aae9af();
  uStack_c._0_1_ = 0x16;
  if (puStack_178 == (undefined1 *)0x0) {
    puStack_184 = (uint *)0x0;
  }
  else {
    uStack_1a0 = CONCAT44(puVar13,puStack_178);
    uStack_1a8 = CONCAT44(0x5aad2e,(undefined4)uStack_1a8);
    puStack_184 = (uint *)FUN_0042b900();
  }
  puVar3 = puStack_184;
  if (iStack_180 != 0) {
    puVar13[0xf] = (uint)puStack_184;
    puVar3 = local_188;
  }
  local_188 = puVar3;
  uStack_1a0 = CONCAT44(0x5aad5a,(undefined4)uStack_1a0);
  iStack_180 = iStack_180 + 1;
  FUN_00a39a80();
  uStack_1a0 = CONCAT44(0x5aad63,(undefined4)uStack_1a0);
  FUN_00408ad0();
  uStack_c._0_1_ = 0xd;
  uStack_1a0 = CONCAT44(0x5aad74,(undefined4)uStack_1a0);
  FUN_00408ad0();
  uStack_1a0 = CONCAT44(0x5aad82,(undefined4)uStack_1a0);
  FUN_009885d0();
  uStack_c._0_1_ = 0x17;
  uStack_1a0 = CONCAT44(auStack_134,0x5aad97);
  uVar9 = FUN_009888f0();
  uStack_1a0 = CONCAT44(uVar9,auStack_150);
  uStack_c._0_1_ = 0x18;
  uStack_1a8 = CONCAT44(auStack_ec,0x5aadb0);
  FUN_00424aa0();
  puVar13 = puStack_184;
  uStack_c._0_1_ = 0x19;
  uStack_1a0 = 0x44005aadc5;
  puStack_178 = (undefined1 *)FUN_00aae9af();
  uStack_c._0_1_ = 0x1a;
  if (puStack_178 == (undefined1 *)0x0) {
    puStack_184 = (uint *)0x0;
  }
  else {
    uStack_1a0 = CONCAT44(puVar13,puStack_178);
    uStack_1a8 = CONCAT44(0x5aade1,(undefined4)uStack_1a8);
    puStack_184 = (uint *)FUN_0042b900();
  }
  puVar3 = puStack_184;
  if (iStack_180 != 0) {
    puVar13[0xf] = (uint)puStack_184;
    puVar3 = local_188;
  }
  local_188 = puVar3;
  uStack_1a0 = CONCAT44(0x5aae0d,(undefined4)uStack_1a0);
  iStack_180 = iStack_180 + 1;
  FUN_00a39a80();
  uStack_1a0 = CONCAT44(0x5aae16,(undefined4)uStack_1a0);
  FUN_00408ad0();
  uStack_c._0_1_ = 0xd;
  uStack_1a0 = CONCAT44(0x5aae27,(undefined4)uStack_1a0);
  FUN_00408ad0();
  uStack_1a0 = CONCAT44(0x5aae3b,(undefined4)uStack_1a0);
  FUN_0055dd40();
  uStack_c._0_1_ = 0x1b;
  iVar11 = local_164[6];
  uStack_1a0 = CONCAT44(0x5aae51,(undefined4)uStack_1a0);
  cVar4 = FUN_00416e40();
  if (cVar4 != '\0') {
    uStack_1a0 = CONCAT44(iVar11,0x5aae60);
    iVar11 = FUN_0068bb30();
    if (iVar11 != 0) {
      uStack_1a0 = CONCAT44(iVar11,0x5aae6e);
      uVar9 = FUN_0041a080();
      uStack_1a0 = 0xffffffff00000000;
      uStack_c._0_1_ = 0x1c;
      uStack_1a8 = CONCAT44(uVar9,0x5aae87);
      FUN_00408ed0();
      uStack_c._0_1_ = 0x1b;
      uStack_1a0 = CONCAT44(0x5aae96,(undefined4)uStack_1a0);
      FUN_00408ad0();
    }
  }
  uStack_1a0 = CONCAT44(0x5aaea4,(undefined4)uStack_1a0);
  FUN_009885d0();
  uStack_1a0 = CONCAT44(auStack_b4,auStack_150);
  uStack_c._0_1_ = 0x1d;
  uStack_1a8 = CONCAT44(auStack_ec,0x5aaec4);
  FUN_00424aa0();
  puVar13 = puStack_184;
  uStack_c._0_1_ = 0x1e;
  uStack_1a0 = 0x44005aaed9;
  puStack_178 = (undefined1 *)FUN_00aae9af();
  uStack_c._0_1_ = 0x1f;
  if (puStack_178 == (undefined1 *)0x0) {
    puStack_184 = (uint *)0x0;
  }
  else {
    uStack_1a0 = CONCAT44(puVar13,puStack_178);
    uStack_1a8 = CONCAT44(0x5aaef5,(undefined4)uStack_1a8);
    puStack_184 = (uint *)FUN_0042b900();
  }
  puVar3 = puStack_184;
  if (iStack_180 != 0) {
    puVar13[0xf] = (uint)puStack_184;
    puVar3 = local_188;
  }
  local_188 = puVar3;
  uStack_1a0 = CONCAT44(0x5aaf21,(undefined4)uStack_1a0);
  iStack_180 = iStack_180 + 1;
  FUN_00a39a80();
  uStack_c._0_1_ = 0x1b;
  uStack_1a0 = CONCAT44(0x5aaf32,(undefined4)uStack_1a0);
  FUN_00408ad0();
  uStack_1a0 = CONCAT44(0x5aaf40,(undefined4)uStack_1a0);
  FUN_009885d0();
  uStack_c._0_1_ = 0x20;
  uStack_1a0 = CONCAT44(0x5aaf56,(undefined4)uStack_1a0);
  FUN_009885d0();
  uStack_1a0 = CONCAT44(auStack_134,auStack_108);
  uStack_c._0_1_ = 0x21;
  uStack_1a8 = CONCAT44(0x5aaf70,(undefined4)uStack_1a8);
  FUN_009a8ee0();
  uStack_c._0_1_ = 0x22;
  uStack_1a0 = CONCAT44(0x5aaf7f,(undefined4)uStack_1a0);
  iVar11 = FUN_00475500();
  uStack_1a8 = *(undefined8 *)(iVar11 + 0x6c);
  uStack_1a0 = *(undefined8 *)(iVar11 + 0x74);
  uStack_1ac = 0x5aafa5;
  uVar9 = FUN_009a9880();
  uStack_1a0 = CONCAT44(uVar9,auStack_150);
  uStack_c._0_1_ = 0x23;
  uStack_1a8 = CONCAT44(auStack_98,0x5aafc0);
  FUN_00424aa0();
  puVar13 = puStack_184;
  uStack_c._0_1_ = 0x24;
  uStack_1a0 = 0x44005aafd5;
  puStack_178 = (undefined1 *)FUN_00aae9af();
  uStack_c._0_1_ = 0x25;
  if (puStack_178 == (undefined1 *)0x0) {
    puStack_184 = (uint *)0x0;
  }
  else {
    uStack_1a0 = CONCAT44(puVar13,puStack_178);
    uStack_1a8 = CONCAT44(0x5aaff1,(undefined4)uStack_1a8);
    puStack_184 = (uint *)FUN_0042b900();
  }
  puVar3 = puStack_184;
  if (iStack_180 != 0) {
    puVar13[0xf] = (uint)puStack_184;
    puVar3 = local_188;
  }
  local_188 = puVar3;
  uStack_1a0 = CONCAT44(0x5ab01d,(undefined4)uStack_1a0);
  iStack_180 = iStack_180 + 1;
  FUN_00a39a80();
  uStack_1a0 = CONCAT44(0x5ab029,(undefined4)uStack_1a0);
  FUN_00408ad0();
  uStack_c._0_1_ = 0x21;
  uStack_1a0 = CONCAT44(auStack_108,0x5ab03e);
  FUN_009a9740();
  uStack_1a0 = CONCAT44(0x5ab047,(undefined4)uStack_1a0);
  FUN_00408ad0();
  uStack_c._0_1_ = 0x1b;
  uStack_1a0 = CONCAT44(0x5ab058,(undefined4)uStack_1a0);
  FUN_00408ad0();
  uStack_1a0 = CONCAT44(0x5ab066,(undefined4)uStack_1a0);
  FUN_009885d0();
  uStack_c._0_1_ = 0x26;
  uStack_1a0 = CONCAT44(0x5ab07c,(undefined4)uStack_1a0);
  FUN_009885d0();
  uStack_1a0 = CONCAT44(auStack_150,auStack_108);
  uStack_c._0_1_ = 0x27;
  uStack_1a8 = CONCAT44(0x5ab096,(undefined4)uStack_1a8);
  FUN_009a8ee0();
  uStack_c._0_1_ = 0x28;
  uStack_1a0 = CONCAT44(0x5ab0a5,(undefined4)uStack_1a0);
  iVar11 = FUN_00475500();
  uStack_1a8 = *(undefined8 *)(iVar11 + 0x6c);
  uStack_1a0 = *(undefined8 *)(iVar11 + 0x74);
  uStack_1ac = 0x5ab0cb;
  uVar9 = FUN_009a9880();
  uStack_1a0 = CONCAT44(uVar9,auStack_134);
  uStack_c._0_1_ = 0x29;
  uStack_1a8 = CONCAT44(auStack_98,0x5ab0e6);
  FUN_00424aa0();
  puVar13 = puStack_184;
  uStack_c._0_1_ = 0x2a;
  uStack_1a0 = 0x44005ab0fb;
  puStack_178 = (undefined1 *)FUN_00aae9af();
  uStack_c._0_1_ = 0x2b;
  if (puStack_178 == (undefined1 *)0x0) {
    puStack_184 = (uint *)0x0;
  }
  else {
    uStack_1a0 = CONCAT44(puVar13,puStack_178);
    uStack_1a8 = CONCAT44(0x5ab117,(undefined4)uStack_1a8);
    puStack_184 = (uint *)FUN_0042b900();
  }
  puVar3 = puStack_184;
  if (iStack_180 != 0) {
    puVar13[0xf] = (uint)puStack_184;
    puVar3 = local_188;
  }
  local_188 = puVar3;
  uStack_1a0 = CONCAT44(0x5ab143,(undefined4)uStack_1a0);
  iStack_180 = iStack_180 + 1;
  FUN_00a39a80();
  uStack_1a0 = CONCAT44(0x5ab14f,(undefined4)uStack_1a0);
  FUN_00408ad0();
  uStack_c._0_1_ = 0x27;
  uStack_1a0 = CONCAT44(auStack_108,0x5ab164);
  FUN_009a9740();
  uStack_1a0 = CONCAT44(0x5ab16d,(undefined4)uStack_1a0);
  FUN_00408ad0();
  uStack_c._0_1_ = 0x1b;
  uStack_1a0 = CONCAT44(0x5ab17e,(undefined4)uStack_1a0);
  FUN_00408ad0();
  puStack_178 = (undefined1 *)local_164[0xb];
  if (local_164[0xc] == *(int *)(DAT_012588e8 + 0xb60)) {
    uStack_1a0 = CONCAT44(0x5ab1a8,(undefined4)uStack_1a0);
    FUN_009885d0();
    uStack_c._0_1_ = 0x2c;
    uStack_1a0 = CONCAT44(0x5ab1be,(undefined4)uStack_1a0);
    FUN_009885d0();
    uStack_1a0 = CONCAT44(auStack_150,auStack_108);
    uStack_c._0_1_ = 0x2d;
    uStack_1a8 = CONCAT44(0x5ab1d8,(undefined4)uStack_1a8);
    FUN_009a8ee0();
    uStack_c._0_1_ = 0x2e;
    uStack_1a0 = CONCAT44(0x5ab1e7,(undefined4)uStack_1a0);
    iVar11 = FUN_00475500();
    uStack_1a8 = *(undefined8 *)(iVar11 + 0x6c);
    uStack_1a0 = *(undefined8 *)(iVar11 + 0x74);
    uStack_1ac = 0x5ab20d;
    uVar9 = FUN_009a9880();
    uStack_1a0 = CONCAT44(uVar9,auStack_134);
    uStack_c._0_1_ = 0x2f;
    uStack_1a8 = CONCAT44(auStack_98,0x5ab228);
    FUN_00424aa0();
    puVar13 = puStack_184;
    uStack_c._0_1_ = 0x30;
    uStack_1a0 = 0x44005ab23d;
    puStack_178 = (undefined1 *)FUN_00aae9af();
    uStack_c._0_1_ = 0x31;
    if (puStack_178 == (undefined1 *)0x0) {
      puStack_184 = (uint *)0x0;
    }
    else {
      uStack_1a0 = CONCAT44(puVar13,puStack_178);
      uStack_1a8 = CONCAT44(0x5ab259,(undefined4)uStack_1a8);
      puStack_184 = (uint *)FUN_0042b900();
    }
    puVar3 = puStack_184;
    if (iStack_180 != 0) {
      puVar13[0xf] = (uint)puStack_184;
      puVar3 = local_188;
    }
    local_188 = puVar3;
    uStack_1a0 = CONCAT44(0x5ab285,(undefined4)uStack_1a0);
    iStack_180 = iStack_180 + 1;
    FUN_00a39a80();
    uStack_1a0 = CONCAT44(0x5ab291,(undefined4)uStack_1a0);
    FUN_00408ad0();
    uStack_c._0_1_ = 0x2d;
  }
  else {
    uStack_1a0 = CONCAT44(0x5ab2a8,(undefined4)uStack_1a0);
    FUN_009885d0();
    uStack_c._0_1_ = 0x32;
    uStack_1a0 = CONCAT44(0x5ab2be,(undefined4)uStack_1a0);
    FUN_009885d0();
    uStack_1a0 = CONCAT44(auStack_150,auStack_108);
    uStack_c._0_1_ = 0x33;
    uStack_1a8 = CONCAT44(0x5ab2d8,(undefined4)uStack_1a8);
    FUN_009a8ee0();
    uStack_c._0_1_ = 0x34;
    uStack_1a0 = CONCAT44(0x5ab2e7,(undefined4)uStack_1a0);
    iVar11 = FUN_00475500();
    uStack_1a8 = *(undefined8 *)(iVar11 + 0x6c);
    uStack_1a0 = *(undefined8 *)(iVar11 + 0x74);
    uStack_1ac = 0x5ab30d;
    uVar9 = FUN_009a9880();
    uStack_1a0 = CONCAT44(uVar9,auStack_134);
    uStack_c._0_1_ = 0x35;
    uStack_1a8 = CONCAT44(auStack_98,0x5ab328);
    FUN_00424aa0();
    puVar13 = puStack_184;
    uStack_c._0_1_ = 0x36;
    uStack_1a0 = 0x44005ab33d;
    puStack_178 = (undefined1 *)FUN_00aae9af();
    uStack_c._0_1_ = 0x37;
    if (puStack_178 == (undefined1 *)0x0) {
      puStack_184 = (uint *)0x0;
    }
    else {
      uStack_1a0 = CONCAT44(puVar13,puStack_178);
      uStack_1a8 = CONCAT44(0x5ab359,(undefined4)uStack_1a8);
      puStack_184 = (uint *)FUN_0042b900();
    }
    puVar3 = puStack_184;
    if (iStack_180 != 0) {
      puVar13[0xf] = (uint)puStack_184;
      puVar3 = local_188;
    }
    local_188 = puVar3;
    uStack_1a0 = CONCAT44(0x5ab385,(undefined4)uStack_1a0);
    iStack_180 = iStack_180 + 1;
    FUN_00a39a80();
    uStack_1a0 = CONCAT44(0x5ab391,(undefined4)uStack_1a0);
    FUN_00408ad0();
    uStack_c._0_1_ = 0x33;
  }
  uStack_1a0 = CONCAT44(auStack_108,0x5ab3a6);
  FUN_009a9740();
  uStack_1a0 = CONCAT44(0x5ab3af,(undefined4)uStack_1a0);
  FUN_00408ad0();
  uStack_c._0_1_ = 0x1b;
  uStack_1a0 = CONCAT44(0x5ab3c0,(undefined4)uStack_1a0);
  FUN_00408ad0();
  uStack_1a0 = CONCAT44(0x5ab3ce,(undefined4)uStack_1a0);
  FUN_009885d0();
  uStack_c._0_1_ = 0x38;
  puStack_178 = (undefined1 *)&uStack_1a0;
  uStack_1a0 = (ulonglong)*(uint *)(local_164[4] + 0x54);
  uStack_1a8 = CONCAT44(auStack_ec,0x5ab3f4);
  uVar9 = FUN_00988a50();
  uStack_1a0 = CONCAT44(uVar9,auStack_134);
  uStack_c._0_1_ = 0x39;
  uStack_1a8 = CONCAT44(auStack_98,0x5ab40d);
  FUN_00424aa0();
  puVar13 = puStack_184;
  uStack_c._0_1_ = 0x3a;
  uStack_1a0 = 0x44005ab422;
  puStack_178 = (undefined1 *)FUN_00aae9af();
  uStack_c._0_1_ = 0x3b;
  if (puStack_178 == (undefined1 *)0x0) {
    puStack_184 = (uint *)0x0;
  }
  else {
    uStack_1a0 = CONCAT44(puVar13,puStack_178);
    uStack_1a8 = CONCAT44(0x5ab43e,(undefined4)uStack_1a8);
    puStack_184 = (uint *)FUN_0042b900();
  }
  puVar3 = puStack_184;
  if (iStack_180 != 0) {
    puVar13[0xf] = (uint)puStack_184;
    puVar3 = local_188;
  }
  local_188 = puVar3;
  uStack_1a0 = CONCAT44(0x5ab46a,(undefined4)uStack_1a0);
  iStack_180 = iStack_180 + 1;
  FUN_00a39a80();
  uStack_1a0 = CONCAT44(0x5ab476,(undefined4)uStack_1a0);
  FUN_00408ad0();
  uStack_c._0_1_ = 0x1b;
  uStack_1a0 = CONCAT44(0x5ab487,(undefined4)uStack_1a0);
  FUN_00408ad0();
  uStack_1a0 = CONCAT44(0x5ab495,(undefined4)uStack_1a0);
  FUN_009885d0();
  uStack_c._0_1_ = 0x3c;
  uStack_1a0 = CONCAT44(local_164[4] + 0x20,auStack_ec);
  uStack_1a8 = CONCAT44(0x5ab4b1,(undefined4)uStack_1a8);
  uVar9 = FUN_0059dbf0();
  uStack_1a0 = CONCAT44(uVar9,auStack_150);
  uStack_c._0_1_ = 0x3d;
  uStack_1a8 = CONCAT44(auStack_98,0x5ab4cd);
  FUN_00424aa0();
  puVar13 = puStack_184;
  uStack_c._0_1_ = 0x3e;
  uStack_1a0 = 0x44005ab4e2;
  puStack_178 = (undefined1 *)FUN_00aae9af();
  uStack_c._0_1_ = 0x3f;
  if (puStack_178 == (undefined1 *)0x0) {
    puStack_184 = (uint *)0x0;
  }
  else {
    uStack_1a0 = CONCAT44(puVar13,puStack_178);
    uStack_1a8 = CONCAT44(0x5ab4fe,(undefined4)uStack_1a8);
    puStack_184 = (uint *)FUN_0042b900();
  }
  puVar3 = puStack_184;
  if (iStack_180 != 0) {
    puVar13[0xf] = (uint)puStack_184;
    puVar3 = local_188;
  }
  local_188 = puVar3;
  uStack_1a0 = CONCAT44(0x5ab52a,(undefined4)uStack_1a0);
  iStack_180 = iStack_180 + 1;
  FUN_00a39a80();
  uStack_1a0 = CONCAT44(0x5ab536,(undefined4)uStack_1a0);
  FUN_00408ad0();
  uStack_c._0_1_ = 0x1b;
  uStack_1a0 = CONCAT44(0x5ab547,(undefined4)uStack_1a0);
  FUN_00408ad0();
  uStack_1a0 = CONCAT44(0x5ab558,(undefined4)uStack_1a0);
  FUN_009885d0();
  uStack_c._0_1_ = 0x40;
  uStack_1a0 = CONCAT44(0x5ab56e,(undefined4)uStack_1a0);
  FUN_009885d0();
  uStack_c._0_1_ = 0x41;
  puStack_178 = auStack_218;
  puStack_10c = (undefined1 *)&uStack_220;
  uStack_220 = 0;
  pcStack_21c = (code *)0x0;
  iVar11 = local_164[0xc];
  iVar6 = local_164[0xb];
  uVar9 = (*(undefined4 **)(local_164[4] + 0x34))[1];
  uVar17 = **(undefined4 **)(local_164[4] + 0x34);
  iVar8 = local_164[6];
  uVar16 = 0;
  puVar15 = auStack_108;
  ppuVar14 = &local_188;
  FUN_006a4f40(ppuVar14,iVar8,puVar15,0,uVar17,uVar9,iVar6,iVar11);
  uVar10 = FUN_006a55b0();
  FUN_006a7ed0(auStack_218,uVar10,ppuVar14,iVar8,puVar15,uVar16,uVar17,uVar9,iVar6,iVar11);
  pcStack_21c = FUN_006a5730;
  uStack_c._0_1_ = 0x42;
  uStack_220 = 0x5ab5f5;
  uStack_220 = FUN_006a4f40();
  uVar9 = FUN_006a4f40();
  uStack_c = CONCAT31(uStack_c._1_3_,0x41);
  FUN_004e9540(uVar9);
  uStack_1a0 = CONCAT44(0x5ab612,(undefined4)uStack_1a0);
  FUN_00408ad0();
  uStack_1a0 = CONCAT44(0x5ab61e,(undefined4)uStack_1a0);
  FUN_00408ad0();
  uStack_1a0 = CONCAT44(0x5ab62a,(undefined4)uStack_1a0);
  FUN_00408ad0();
  uStack_1a0 = CONCAT44(&local_188,0x5ab634);
  FUN_0042b9f0();
  ExceptionList = local_14;
  return local_16d;
code_r0x005aa220:
  uStack_1a0 = CONCAT44(uVar1,0x5aa22a);
  piVar5 = (int *)FUN_005cd690();
  if ((*piVar5 <= DAT_0125ff7c) ||
     (*(int *)(*(int *)(uVar1 + 0xdc) + 0x58) != *(int *)(local_164[6] + 0x58))) {
LAB_005aa249:
    uStack_1a0 = (ulonglong)uVar1;
    uStack_1a8 = CONCAT44(0x5aa25a,(undefined4)uStack_1a8);
    (**(code **)(*(int *)local_164[4] + 0x30))();
    *(undefined4 *)(uVar1 + 0x70) = 0;
  }
  goto joined_r0x005aa1f5;
}

