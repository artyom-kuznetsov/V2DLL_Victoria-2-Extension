// FUN_005d4540 @ 005d4540  (requested 005D4540, first bytes: 55 8B EC 83 E4 F8 64 A1)


void FUN_005d4540(int *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  float *pfVar5;
  char cVar6;
  short sVar7;
  undefined4 uVar8;
  int iVar9;
  int *piVar10;
  float *pfVar11;
  float *pfVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  uint uVar15;
  int iVar16;
  int *piVar17;
  float fVar18;
  int iVar19;
  int iVar20;
  bool bVar21;
  bool bVar22;
  undefined1 auVar23 [16];
  float fVar24;
  char cStack_179;
  float *pfStack_170;
  float *pfStack_168;
  float *pfStack_164;
  int iStack_160;
  undefined1 uStack_15c;
  int *piStack_158;
  undefined4 *local_154;
  int iStack_150;
  int iStack_14c;
  int iStack_148;
  int iStack_144;
  float fStack_140;
  int iStack_13c;
  int *piStack_138;
  int *piStack_134;
  int *piStack_130;
  int iStack_12c;
  undefined1 uStack_128;
  int iStack_124;
  int iStack_120;
  undefined8 uStack_11c;
  float fStack_114;
  uint auStack_110 [4];
  undefined4 uStack_100;
  uint uStack_fc;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined4 uStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  undefined4 uStack_90;
  float fStack_8c;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined1 uStack_5c;
  int iStack_58;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_3c;
  undefined1 auStack_34 [8];
  int iStack_2c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b5a513;
  if (param_1[0x42] == 0) {
    return;
  }
  local_154 = (undefined4 *)*param_2;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  while (local_154 != (undefined4 *)0x0) {
    piVar10 = (int *)*local_154;
    local_154 = (undefined4 *)local_154[2];
    (**(code **)(*piVar10 + 0x38))();
    piVar17 = (int *)param_1[0x42];
    uVar8 = (**(code **)(*piVar10 + 0x44))();
    (**(code **)(*piVar17 + 0x40))(uVar8);
    FUN_009962f0(uVar8);
    iVar9 = (**(code **)(*(int *)param_1[0x42] + 0x38))();
    piStack_158 = piVar10;
    FUN_004f2680(&piStack_158);
    if ((iStack_13c != *(int *)(iVar9 + 0x3a00)) && (*(int *)(iStack_13c + 0x10) != -1)) {
      piVar17 = (int *)(*(int *)(*(int *)(*(int *)(iVar9 + 0x20d8) + *(int *)(iStack_13c + 0x10) * 4
                                         ) + 0xc) + 0x394);
      *piVar17 = *piVar17 + -1;
      piStack_158 = piVar10;
      FUN_004c9400(&iStack_124,&piStack_158);
      FUN_00445600(iStack_124,iStack_120);
    }
  }
  FUN_009a63f0();
  if (param_1[0x3b] < 1) {
    ExceptionList = local_14;
    return;
  }
  piStack_134 = (int *)0x0;
  piStack_130 = (int *)0x0;
  iStack_12c = 0;
  uStack_128 = 0;
  pfStack_168 = (float *)0x0;
  pfStack_164 = (float *)0x0;
  iStack_160 = 0;
  uStack_15c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_c._0_1_ = 2;
  uStack_c._1_3_ = 0;
  piStack_158 = (int *)param_1[0x39];
  iStack_148 = param_1[0x37];
  local_154 = (undefined4 *)0x0;
  if (piStack_158 != (int *)0x0) {
    do {
      iVar4 = iStack_148;
      piVar10 = (int *)piStack_158[2];
      iStack_13c = *(int *)(*(int *)(DAT_0125870c + 0x2238) + *piStack_158 * 4);
      iVar9 = *(int *)(iStack_148 + 0x5c);
      fStack_140 = *(float *)(iVar9 + 0x80);
      iVar16 = *(int *)(iStack_13c + 0x5c);
      local_154 = (undefined4 *)((int)local_154 + 1);
      iVar19 = *(int *)(iVar9 + 0x7c);
      iVar20 = (*(int *)(iVar9 + 0xcc) - *(int *)(iVar9 + 200)) / 0x24;
      pfStack_170 = (float *)0x0;
      if (0 < iVar20) {
        piVar17 = (int *)(*(int *)(iVar9 + 200) + 4);
        do {
          if (*piVar17 == *(int *)(iVar16 + 0xb4)) {
            iVar9 = *(int *)(iVar9 + 200) + (int)pfStack_170 * 0x24;
            goto LAB_005d4778;
          }
          pfStack_170 = (float *)((int)pfStack_170 + 1);
          piVar17 = piVar17 + 9;
        } while ((int)pfStack_170 < iVar20);
      }
      iVar9 = *(int *)(iVar9 + 200);
LAB_005d4778:
      iStack_120 = *(int *)(iVar9 + 0x18);
      iStack_124 = *(int *)(iVar9 + 0x14);
      iStack_150 = *(int *)(iVar16 + 0x7c);
      iStack_14c = *(int *)(iVar16 + 0x80);
      fVar18 = SQRT((float)((iStack_120 - (int)fStack_140) * (iStack_120 - (int)fStack_140)) +
                    (float)(iStack_124 - iVar19) * (float)(iStack_124 - iVar19));
      auVar23 = ZEXT416((uint)fVar18);
      if (fVar18 <= 2.5) {
LAB_005d481c:
        bVar22 = true;
      }
      else {
        fVar18 = SQRT((float)((iStack_14c - iStack_120) * (iStack_14c - iStack_120)) +
                      (float)(iStack_150 - iStack_124) * (float)(iStack_150 - iStack_124));
        auVar23 = ZEXT416((uint)fVar18);
        bVar22 = false;
        if (fVar18 <= 2.5) goto LAB_005d481c;
      }
      iVar9 = 1;
      bVar3 = false;
      piStack_158 = piVar10;
      if (local_154 == (undefined4 *)0x1) {
        iStack_144 = iVar19;
        if (param_1[0x1d] != 0) {
          cVar6 = FUN_005cf260();
          iVar9 = 3 - (uint)(cVar6 != '\0');
        }
        iVar16 = *(int *)(iVar4 + 0x5c);
        piVar10 = (int *)(**(code **)(*param_1 + 0x70))(auStack_34,iVar4);
        uStack_11c = *(undefined8 *)(*(int *)(iVar4 + 0x5c) + 0x100 + iVar9 * 0xc);
        fStack_114 = *(float *)(*(int *)(iVar4 + 0x5c) + iVar9 * 0xc + 0x108);
        iVar19 = (int)(((float)uStack_11c - (float)(*piVar10 - *(int *)(iVar16 + 0x74))) +
                      (float)iVar19);
        auVar23._0_8_ =
             ((double)fStack_114 - (double)(piVar10[1] - *(int *)(iVar16 + 0x78))) +
             (double)(int)fStack_140;
        auVar23._8_8_ = 0;
        fStack_140 = (float)(int)auVar23._0_8_;
      }
      iStack_144 = iVar19;
      cVar6 = (**(code **)(*param_1 + 0x3c))();
      if (cVar6 != '\0') {
        if ((*(char *)(*(int *)(iVar4 + 0x5c) + 0x2a) != '\0') &&
           (*(char *)(*(int *)(iStack_13c + 0x5c) + 0x2a) == '\0')) {
          iVar9 = FUN_004c4570(*(int *)(iVar4 + 0x5c));
          fStack_140 = (float)(int)*(float *)(iVar9 + 0xc);
          iVar19 = (int)*(float *)(iVar9 + 8);
          bVar3 = true;
          iStack_144 = iVar19;
        }
        if ((*(char *)(*(int *)(iVar4 + 0x5c) + 0x2a) == '\0') &&
           (*(char *)(*(int *)(iStack_13c + 0x5c) + 0x2a) != '\0')) {
          iVar9 = FUN_004c4570(*(int *)(iStack_13c + 0x5c));
          iStack_14c = (int)*(float *)(iVar9 + 0xc);
          iStack_150 = (int)*(float *)(iVar9 + 8);
          bVar3 = true;
        }
      }
      pfVar11 = pfStack_168;
      if (local_154 == (undefined4 *)0x1) {
        iVar9 = *(int *)(DAT_0125870c + 0x2abc);
        uVar15 = iVar19 - iStack_150;
        if (iVar9 / 2 < (int)((uVar15 ^ (int)uVar15 >> 0x1f) - ((int)uVar15 >> 0x1f))) {
          if (iVar19 < iStack_150) {
            iVar9 = -iVar9;
          }
          iStack_70 = (int)((float)(iVar19 - (iStack_150 + iVar9)) * DAT_00f14a8c);
          iStack_3c = iStack_150 + iVar9 + iStack_70;
          iStack_70 = iStack_70 + iStack_150;
          iVar9 = iStack_14c + (int)((float)((int)fStack_140 - iStack_14c) * DAT_00f14a8c);
          iStack_6c = iVar9;
          FUN_004a0bd0();
          pfVar12 = pfStack_164;
          fStack_a4 = (float)iVar9;
          fStack_ac = (float)iStack_3c;
          uStack_a8 = auVar23._0_4_;
          pfVar11 = (float *)FUN_00aae9af(0x18);
          if (pfVar11 == (float *)0x0) goto LAB_005d4b34;
          uVar1 = CONCAT44(uStack_a8,fStack_ac);
          fVar18 = fStack_a4;
LAB_005d4b19:
          *(undefined8 *)pfVar11 = uVar1;
          pfVar11[2] = fVar18;
          pfVar11[3] = (float)pfStack_164;
          pfVar11[4] = 0.0;
          *(undefined1 *)(pfVar11 + 5) = 0;
        }
        else {
          iStack_78 = (int)((float)(int)uVar15 * DAT_00f14a8c) + iVar19;
          iVar9 = (int)((float)((int)fStack_140 - iStack_14c) * DAT_00f14a8c) + (int)fStack_140;
          fVar18 = (float)iStack_78;
          iStack_74 = iVar9;
          FUN_004a0bd0();
          pfVar12 = pfStack_164;
          fStack_8c = (float)iVar9;
          uStack_90 = auVar23._0_4_;
          fStack_94 = fVar18;
          pfVar11 = (float *)FUN_00aae9af(0x18);
          if (pfVar11 != (float *)0x0) {
            uVar1 = CONCAT44(uStack_90,fStack_94);
            fVar18 = fStack_8c;
            goto LAB_005d4b19;
          }
LAB_005d4b34:
          pfVar11 = (float *)0x0;
        }
        iVar9 = iStack_160 + 1;
        bVar21 = iStack_160 != 0;
        pfStack_164 = pfVar11;
        iStack_160 = iVar9;
        if (bVar21) {
          pfVar12[4] = (float)pfVar11;
          pfVar11 = pfStack_168;
        }
      }
      pfStack_168 = pfVar11;
      pfVar11 = pfStack_164;
      iVar16 = *(int *)(DAT_0125870c + 0x212c);
      iVar9 = iVar19;
      if (*(int *)(iVar16 + 4) + -1 < iVar19) {
        iVar9 = *(int *)(iVar16 + 4) + -1;
      }
      fVar18 = fStack_140;
      if ((int)fStack_140 < 0) {
        fVar18 = 0.0;
      }
      if (*(int *)(iVar16 + 8) + -1 < (int)fVar18) {
        fVar18 = (float)(*(int *)(iVar16 + 8) + -1);
      }
      iVar9 = *(int *)(*(int *)(DAT_0125870c + 0x2aa4) +
                      (uint)*(ushort *)
                             (*(int *)(iVar16 + 0x18) * (int)fVar18 + *(int *)(iVar16 + 0xc) * iVar9
                             + *(int *)(iVar16 + 0x20)) * 4);
      fVar18 = DAT_00f141d0;
      if ((iVar9 != 0) && (*(char *)(iVar9 + 0x2a) == '\0')) {
        fVar18 = 0.0;
      }
      fStack_e8 = (float)iVar19;
      fStack_e0 = (float)(int)fStack_140;
      fStack_e4 = fVar18;
      pfVar12 = (float *)FUN_00aae9af(0x18);
      iVar9 = iStack_150;
      if (pfVar12 == (float *)0x0) {
        pfVar12 = (float *)0x0;
      }
      else {
        *pfVar12 = fStack_e8;
        pfVar12[1] = fStack_e4;
        pfVar12[2] = fStack_e0;
        pfVar12[3] = (float)pfVar11;
        pfVar12[4] = 0.0;
        *(undefined1 *)(pfVar12 + 5) = 0;
        fVar18 = fStack_e8;
      }
      iVar16 = iStack_160 + 1;
      pfVar5 = pfVar12;
      if (iStack_160 != 0) {
        pfVar11[4] = (float)pfVar12;
        pfVar5 = pfStack_168;
      }
      pfStack_168 = pfVar5;
      iVar20 = *(int *)(DAT_0125870c + 0x2abc);
      uVar15 = iVar19 - iStack_150 >> 0x1f;
      pfStack_164 = pfVar12;
      iStack_160 = iVar16;
      if (iVar20 / 2 < (int)((iVar19 - iStack_150 ^ uVar15) - uVar15)) {
        if (iVar19 < iStack_150) {
          iVar20 = -iVar20;
        }
        iVar20 = iStack_150 + iVar20;
        fVar24 = (float)iVar20;
        FUN_004a0bd0();
        fStack_b0 = (float)iStack_14c;
        fStack_b8 = fVar24;
        fStack_b4 = fVar18;
        pfVar11 = (float *)FUN_00aae9af(0x18);
        if (pfVar11 == (float *)0x0) {
          pfVar11 = (float *)0x0;
        }
        else {
          *pfVar11 = fStack_b8;
          pfVar11[1] = fStack_b4;
          pfVar11[2] = fStack_b0;
          pfVar11[3] = (float)pfVar12;
          pfVar11[4] = 0.0;
          *(undefined1 *)(pfVar11 + 5) = 0;
          fVar18 = fStack_b8;
        }
        pfVar5 = pfVar11;
        if (iStack_160 != 0) {
          pfVar12[4] = (float)pfVar11;
          pfVar5 = pfStack_168;
        }
        pfStack_168 = pfVar5;
        iVar9 = (int)((float)(iVar20 - iStack_144) * DAT_00f14a8c);
        iVar16 = iStack_14c + (int)((float)(iStack_14c - (int)fStack_140) * DAT_00f14a8c);
        iStack_58 = iVar9 + iVar20;
        iVar9 = iVar9 + iStack_150;
        pfStack_164 = pfVar11;
        iStack_160 = iStack_160 + 1;
        iStack_88 = iVar9;
        iStack_84 = iVar16;
        FUN_004a0bd0();
        fStack_a0 = (float)iVar9;
        fStack_98 = (float)iVar16;
        fStack_d0 = (float)iStack_58;
        fStack_c8 = (float)iVar16;
        fStack_cc = fVar18;
        fStack_9c = fVar18;
        pfStack_164 = (float *)FUN_00aae9af(0x18);
        if (pfStack_164 == (float *)0x0) {
          pfStack_164 = (float *)0x0;
        }
        else {
          *pfStack_164 = fStack_d0;
          pfStack_164[1] = fStack_cc;
          pfStack_164[2] = fStack_c8;
          pfStack_164[3] = (float)pfVar11;
          pfStack_164[4] = 0.0;
          *(undefined1 *)(pfStack_164 + 5) = 0;
          fVar18 = fStack_d0;
        }
        pfVar12 = pfStack_164;
        if (iStack_160 != 0) {
          pfVar11[4] = (float)pfStack_164;
          pfVar12 = pfStack_168;
        }
        pfStack_168 = pfVar12;
        iStack_160 = iStack_160 + 1;
        iVar9 = FUN_005daf60(&pfStack_168);
        piVar10 = piStack_130;
        uStack_c._0_1_ = 3;
        piVar17 = (int *)FUN_00aae9af(0x20);
        uStack_c._0_1_ = 4;
        piStack_138 = piVar17;
        if (piVar17 == (int *)0x0) {
          piStack_130 = (int *)0x0;
        }
        else {
          FUN_005daca0();
          piVar17[4] = *(int *)(iVar9 + 0x10);
          piVar17[5] = (int)piVar10;
          piVar17[6] = 0;
          *(undefined1 *)(piVar17 + 7) = 0;
          piStack_130 = piVar17;
        }
        iVar9 = iStack_12c + 1;
        piVar17 = piStack_130;
        if (iStack_12c != 0) {
          piVar10[6] = (int)piStack_130;
          piVar17 = piStack_134;
        }
        piStack_134 = piVar17;
        uStack_c._0_1_ = 2;
        iStack_12c = iVar9;
        if (iStack_2c != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(iStack_2c);
        }
        if (pfStack_168 != (float *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(pfStack_168);
        }
        pfStack_168 = (float *)0x0;
        pfStack_164 = (float *)0x0;
        iStack_160 = 0;
        pfStack_164 = (float *)FUN_00aae9af(0x18);
        if (pfStack_164 == (float *)0x0) {
          pfStack_164 = (float *)0x0;
        }
        else {
          *pfStack_164 = fStack_a0;
          pfStack_164[1] = fStack_9c;
          pfStack_164[2] = fStack_98;
          pfStack_164[3] = 0.0;
          pfStack_164[4] = 0.0;
          *(undefined1 *)(pfStack_164 + 5) = 0;
          fVar18 = fStack_a0;
        }
        iStack_160 = 1;
        iVar19 = iStack_144;
        iVar9 = iStack_150;
        pfVar11 = pfStack_164;
      }
      else {
        pfVar11 = pfStack_168;
        if (((!bVar3) && (-1 < iStack_124)) && (!bVar22)) {
          fVar24 = (float)iStack_124;
          FUN_004a0bd0();
          fStack_ec = (float)iStack_120;
          fStack_f4 = fVar24;
          fStack_f0 = fVar18;
          pfStack_164 = (float *)FUN_00aae9af(0x18);
          if (pfStack_164 == (float *)0x0) {
            pfStack_164 = (float *)0x0;
          }
          else {
            *pfStack_164 = fStack_f4;
            pfStack_164[1] = fStack_f0;
            pfStack_164[2] = fStack_ec;
            pfStack_164[3] = (float)pfVar12;
            pfStack_164[4] = 0.0;
            *(undefined1 *)(pfStack_164 + 5) = 0;
            fVar18 = fStack_f4;
          }
          iVar16 = iStack_160 + 1;
          bVar22 = iStack_160 != 0;
          pfVar11 = pfStack_164;
          iStack_160 = iVar16;
          if (bVar22) {
            pfVar12[4] = (float)pfStack_164;
            pfVar11 = pfStack_168;
          }
        }
      }
      pfStack_168 = pfVar11;
      if (local_154 == (undefined4 *)param_1[0x3b]) {
        fVar24 = (float)iVar9;
        FUN_004a0bd0();
        iVar16 = iStack_14c;
        pfVar11 = pfStack_164;
        fStack_d4 = (float)iStack_14c;
        fStack_dc = fVar24;
        fStack_d8 = fVar18;
        pfStack_170 = (float *)FUN_00aae9af(0x18);
        if (pfStack_170 == (float *)0x0) {
          pfStack_170 = (float *)0x0;
        }
        else {
          *pfStack_170 = fStack_dc;
          pfStack_170[1] = fStack_d8;
          pfStack_170[2] = fStack_d4;
          pfStack_170[3] = (float)pfStack_164;
          pfStack_170[4] = 0.0;
          *(undefined1 *)(pfStack_170 + 5) = 0;
          fVar18 = fStack_dc;
        }
        pfVar12 = pfStack_170;
        if (iStack_160 != 0) {
          pfVar11[4] = (float)pfStack_170;
          pfVar12 = pfStack_168;
        }
        pfStack_168 = pfVar12;
        iStack_80 = (int)((float)(iVar9 - iVar19) * DAT_00f14a8c) + iVar9;
        iVar16 = (int)((float)(iVar16 - (int)fStack_140) * DAT_00f14a8c) + iVar16;
        fVar24 = (float)iStack_80;
        pfStack_164 = pfStack_170;
        iStack_160 = iStack_160 + 1;
        iStack_7c = iVar16;
        FUN_004a0bd0();
        fStack_bc = (float)iVar16;
        fStack_c4 = fVar24;
        fStack_c0 = fVar18;
        pfStack_164 = (float *)FUN_00aae9af(0x18);
        if (pfStack_164 == (float *)0x0) {
          pfStack_164 = (float *)0x0;
        }
        else {
          *(ulonglong *)pfStack_164 = CONCAT44(fStack_c0,fStack_c4);
          pfStack_164[2] = fStack_bc;
          pfStack_164[3] = (float)pfStack_170;
          pfStack_164[4] = 0.0;
          *(undefined1 *)(pfStack_164 + 5) = 0;
        }
        pfVar11 = pfStack_164;
        if (iStack_160 != 0) {
          pfStack_170[4] = (float)pfStack_164;
          pfVar11 = pfStack_168;
        }
        pfStack_168 = pfVar11;
        iStack_160 = iStack_160 + 1;
        iVar9 = FUN_005daf60(&pfStack_168);
        piVar10 = piStack_130;
        uStack_c._0_1_ = 5;
        piVar17 = (int *)FUN_00aae9af(0x20);
        uStack_c._0_1_ = 6;
        piStack_138 = piVar17;
        if (piVar17 == (int *)0x0) {
          piStack_130 = (int *)0x0;
        }
        else {
          FUN_005daca0();
          piVar17[4] = *(int *)(iVar9 + 0x10);
          piVar17[5] = (int)piStack_130;
          piVar17[6] = 0;
          *(undefined1 *)(piVar17 + 7) = 0;
          piStack_130 = piVar17;
        }
        piVar17 = piStack_130;
        if (iStack_12c != 0) {
          piVar10[6] = (int)piStack_130;
          piVar17 = piStack_134;
        }
        piStack_134 = piVar17;
        uStack_c._0_1_ = 2;
        if (iStack_50 != 0) {
          iStack_12c = iStack_12c + 1;
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(iStack_50);
        }
        iStack_50 = 0;
        uStack_4c = 0;
        uStack_48 = 0;
        iStack_12c = iStack_12c + 1;
      }
      iStack_148 = iStack_13c;
    } while (piStack_158 != (int *)0x0);
    if (iStack_12c != 0) {
      uStack_fc = 0xf;
      uStack_100 = 0;
      auStack_110[0] = auStack_110[0] & 0xffffff00;
      FUN_00409350("moveArrow",9);
      uStack_c._0_1_ = 7;
      if ((char)param_1[0x41] == '\0') {
        cVar6 = FUN_005cf1b0();
        piVar10 = piStack_134;
        if (cVar6 != '\0') {
          FUN_004012f0(auStack_110);
          piVar10 = piStack_134;
        }
      }
      else {
        FUN_00409350("retreatArrow",0xc);
        piVar10 = piStack_134;
      }
      while (piVar10 != (int *)0x0) {
        piStack_158 = (int *)piVar10[6];
        iVar9 = piVar10[4];
        iVar16 = (**(code **)(*(int *)param_1[0x42] + 0x38))();
        local_154 = (undefined4 *)(iVar16 + 0x8f4);
        iVar16 = FUN_00aae9af(0x164);
        uStack_c._0_1_ = 8;
        if (iVar16 == 0) {
          piVar10 = (int *)0x0;
        }
        else {
          iStack_13c = CONCAT31(iStack_13c._1_3_,
                                *(undefined1 *)(*(int *)(param_1[0x37] + 0x5c) + 0x2a));
          (**(code **)(*(int *)param_1[0x42] + 0x40))();
          iStack_148 = FUN_005c2ad0(auStack_110);
          piVar17 = (int *)param_1[0x42];
          iVar19 = iStack_13c;
          uVar8 = (**(code **)(*piVar17 + 0x38))(piVar10,iStack_13c);
          puVar14 = local_154;
          uVar13 = (**(code **)(*piVar17 + 0x40))(local_154,uVar8);
          piVar10 = (int *)FUN_00817bb0(iVar16,uVar13,puVar14,uVar8,piVar10,iVar19);
        }
        uStack_c._0_1_ = 7;
        iVar16 = *(int *)(*(int *)(*(int *)(DAT_0125870c + 0x2238) + iVar9 * 4) + 0x5c);
        fStack_114 = -(float)*(int *)(iVar16 + 0x78);
        uStack_11c = CONCAT44(0xbf051eb8,-(float)*(int *)(iVar16 + 0x74));
        (**(code **)(*piVar10 + 0x84))(&uStack_11c);
        (**(code **)(*piVar10 + 0xb0))();
        piVar17 = (int *)(**(code **)(*piVar10 + 0x44))();
        (**(code **)(*piVar17 + 0x10))(piVar10);
        iVar16 = (**(code **)(*(int *)param_1[0x42] + 0x38))();
        if (*(int *)(*(int *)(iVar16 + 0x20d8) + iVar9 * 4) != 0) {
          FUN_00644a70(iVar16,piVar10,1);
        }
        iVar16 = (**(code **)(*(int *)param_1[0x42] + 0x38))();
        piVar17 = (int *)(*(int *)(*(int *)(*(int *)(iVar16 + 0x20d8) + iVar9 * 4) + 0xc) + 0x394);
        *piVar17 = *piVar17 + 1;
        piVar17 = (int *)FUN_0098bce0();
        *piVar17 = iVar9;
        iVar9 = param_2[1];
        puVar14 = (undefined4 *)FUN_00aae9af(0x10);
        if (puVar14 == (undefined4 *)0x0) {
          puVar14 = (undefined4 *)0x0;
        }
        else {
          *puVar14 = piVar10;
          puVar14[1] = iVar9;
          puVar14[2] = 0;
          *(undefined1 *)(puVar14 + 3) = 0;
        }
        iVar16 = param_2[2];
        param_2[1] = puVar14;
        param_2[2] = iVar16 + 1;
        if (iVar16 == 0) {
          *param_2 = puVar14;
        }
        else {
          *(undefined4 **)(iVar9 + 8) = puVar14;
        }
        if (cStack_179 == '\0') {
          fVar18 = 0.0;
        }
        else {
          iVar9 = param_1[0x40];
          if (iVar9 == 0) {
            iVar9 = param_1[0x50];
            if (99 < iVar9) {
              do {
                iVar9 = iVar9 + -100;
              } while (99 < iVar9);
              param_1[0x50] = iVar9;
            }
            iVar16 = *piVar10;
            iVar9 = param_1[0x50];
            sVar7 = (**(code **)(iVar16 + 0x68))();
            sVar7 = sVar7 + (short)iVar9;
          }
          else {
            iVar16 = *piVar10;
            sVar7 = (**(code **)(iVar16 + 0x68))();
            sVar7 = sVar7 + (short)iVar9;
          }
          (**(code **)(iVar16 + 0x5c))(sVar7);
          fStack_140 = (float)param_1[0x3e] / 1000.0;
          piVar17 = (int *)FUN_005d5680(param_1,&piStack_158);
          fVar18 = fStack_140 / ((float)*piVar17 / 1000.0);
          cStack_179 = '\0';
        }
        pcVar2 = *(code **)(*piVar10 + 0x34);
        piVar10[0x58] = (int)fVar18;
        (*pcVar2)();
        piVar10 = piStack_158;
      }
      piStack_158 = piVar10;
      if (0xf < uStack_fc) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_110[0]);
      }
      uStack_fc = 0xf;
      uStack_100 = 0;
      auStack_110[0] = auStack_110[0] & 0xffffff00;
      FUN_005daf00(&uStack_68);
      FUN_00a157e0();
      goto LAB_005d5661;
    }
  }
  FUN_005daf00(&uStack_68);
  FUN_00a157e0();
LAB_005d5661:
  FUN_005daea0(&piStack_134);
  ExceptionList = local_14;
  return;
}

