// FUN_00afcd00 @ 00afcd00 body=[[00afcd00, 00afd6dc] [00afd6e0, 00afda9c] [00afdaa0, 00afe173]]


void FUN_00afcd00(int *param_1,undefined4 *param_2)

{
  undefined2 *puVar1;
  float fVar2;
  char cVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  float fVar6;
  undefined1 uVar7;
  int iVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  int iVar12;
  int *piVar13;
  undefined4 *puVar14;
  undefined2 *puVar15;
  int iVar16;
  undefined4 uVar17;
  uint uVar18;
  int *piVar19;
  undefined2 *unaff_EDI;
  undefined2 *puVar20;
  char *pcVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  float *pfVar24;
  double dVar25;
  undefined2 *puVar26;
  ushort uVar27;
  float fVar28;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  int iStack_1ec;
  int *piStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  char *pcStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  int *local_1c8;
  int local_1c4;
  undefined **ppuStack_1c0;
  int *local_1bc;
  int iStack_1b8;
  undefined4 *puStack_1ac;
  float fStack_1a8;
  undefined4 *puStack_1a4;
  float fStack_1a0;
  undefined4 *puStack_19c;
  int iStack_194;
  void *pvStack_190;
  size_t sStack_18c;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  int iStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  undefined4 *puStack_148;
  float fStack_144;
  undefined4 *puStack_140;
  float fStack_13c;
  undefined4 uStack_138;
  int *piStack_134;
  float fStack_130;
  float fStack_12c;
  int iStack_128;
  int *piStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  uint uStack_10c;
  uint uStack_104;
  int *piStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  undefined4 *puStack_b4;
  float fStack_b0;
  undefined4 *puStack_ac;
  float fStack_a8;
  undefined4 uStack_a4;
  int *piStack_a0;
  float fStack_9c;
  float fStack_98;
  int iStack_94;
  int *piStack_90;
  uint uStack_8c;
  uint local_84;
  void *pvStack_54;
  void *local_4c;
  undefined1 *puStack_48;
  undefined4 uStack_44;
  
  uStack_44 = 0xffffffff;
  puStack_48 = &LAB_00b38b06;
  local_4c = ExceptionList;
  local_84 = DAT_00ef259c ^ (uint)&uStack_1f4;
  ExceptionList = &local_4c;
  local_1e0 = (int *)0x0;
  local_1bc = (int *)*param_2;
  iVar12 = param_2[7];
  puVar26 = (undefined2 *)0x18;
  local_1c8 = param_1;
  local_1c4 = iVar12;
  (**(code **)(*param_1 + 8))(&local_d8,0x18,DAT_00ef259c ^ (uint)&stack0xfffffe00);
  if (iVar12 == 1) {
    uVar4 = (undefined1)uStack_e0;
    uVar7 = uStack_e0._1_1_;
    uStack_e0._0_2_ = CONCAT11(uStack_e0._2_1_,uStack_e0._3_1_);
    uStack_e0 = CONCAT13(uVar4,CONCAT12(uVar7,(undefined2)uStack_e0));
    uVar4 = (undefined1)uStack_dc;
    uVar7 = uStack_dc._1_1_;
    uStack_dc._0_2_ = CONCAT11(uStack_dc._2_1_,uStack_dc._3_1_);
    uStack_dc = (float)CONCAT13(uVar4,CONCAT12(uVar7,(undefined2)uStack_dc));
    uVar4 = (undefined1)local_d8;
    uVar7 = local_d8._1_1_;
    local_d8._0_2_ = CONCAT11(local_d8._2_1_,local_d8._3_1_);
    local_d8 = CONCAT13(uVar4,CONCAT12(uVar7,(undefined2)local_d8));
    uVar4 = (undefined1)uStack_d4;
    uVar7 = uStack_d4._1_1_;
    uStack_d4._0_2_ = CONCAT11(uStack_d4._2_1_,uStack_d4._3_1_);
    uStack_d4 = CONCAT13(uVar4,CONCAT12(uVar7,(undefined2)uStack_d4));
    uVar4 = (undefined1)uStack_d0;
    uVar7 = uStack_d0._1_1_;
    uStack_d0._0_2_ = CONCAT11(uStack_d0._2_1_,uStack_d0._3_1_);
    uStack_d0 = CONCAT13(uVar4,CONCAT12(uVar7,(undefined2)uStack_d0));
    uVar4 = (undefined1)uStack_cc;
    uVar7 = uStack_cc._1_1_;
    uStack_cc._0_2_ = CONCAT11(uStack_cc._2_1_,uStack_cc._3_1_);
    uStack_cc = CONCAT13(uVar4,CONCAT12(uVar7,(undefined2)uStack_cc));
  }
  pcStack_1d4 = (char *)FUN_00aee020();
  iStack_1ec = local_d8;
  if (*(char *)(iStack_1b8 + 0xc) != '\0') {
    FUN_00b15e80();
    FUN_00b15e80();
    FUN_00b15e80();
    FUN_00b15e80();
    dVar25 = (double)uStack_dc;
    pcVar21 = "    + RangeMax           = %f";
    FUN_00b15e80();
    uVar23 = CONCAT44(pcVar21,uStack_d4);
    pcVar21 = "    + NumDeformDatas     = %d";
    FUN_00b15e80();
    uVar22 = CONCAT44(pcVar21,uStack_d0);
    pcVar21 = "    + NumTransformations = %d";
    FUN_00b15e80();
    FUN_00b12f80(&fStack_184,uStack_cc,pcVar21,uVar22,uVar23,dVar25);
    local_4c = (void *)0x0;
    FUN_00b15e80("    + PhonemeSets: %s");
    local_4c = (void *)0xffffffff;
    FUN_00b13650();
  }
  iVar12 = iStack_1ec * 8;
  if ((*(int *)(*(int *)(local_1c4 + 0xd8) + 4 + iVar12) == 0) ||
     (iVar8 = (**(code **)(**(int **)(*(int *)(local_1c4 + 0xd8) + 4 + iVar12) + 0x10))(),
     iVar8 == 0)) {
    iVar8 = (*(code *)PTR_FUN_00f01b08)(0x10,0xcd,4,0,0);
    local_4c = (void *)0x1;
    if (iVar8 != 0) {
      FUN_00aeb4b0();
    }
    local_4c = (void *)0xffffffff;
    ppuStack_1c0 = &PTR_FUN_00ddd998;
    local_1bc = (int *)0x0;
    FUN_00ad8b40();
    piVar19 = local_1bc;
    iVar8 = *(int *)(local_1c4 + 0xd8);
    local_4c = (void *)0x2;
    if (local_1bc != (int *)0x0) {
      (**(code **)(*local_1bc + 4))();
    }
    piVar13 = *(int **)(iVar8 + 4 + iVar12);
    *(int **)(iVar8 + 4 + iVar12) = piVar19;
    if (piVar13 != (int *)0x0) {
      (**(code **)(*piVar13 + 8))();
    }
    local_4c = (void *)0xffffffff;
    if (piVar19 != (int *)0x0) {
      (**(code **)(*piVar19 + 8))();
    }
  }
  iVar8 = (*(code *)PTR_FUN_00f01b08)(0x34,0xcd,4,0,0);
  pcVar21 = pcStack_1d4;
  local_4c = (void *)0x3;
  if (iVar8 == 0) {
    local_1c8 = (int *)0x0;
  }
  else {
    pvStack_190 = (void *)0x0;
    sStack_18c = 0;
    fStack_188 = 0.0;
    if (pcStack_1d4 != (char *)0x0) {
      pcVar9 = pcStack_1d4;
      do {
        cVar3 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar3 != '\0');
      FUN_00b13660((int)pcVar9 - (int)(pcStack_1d4 + 1),0);
      if (pvStack_190 != (void *)0x0) {
        FID_conflict__memcpy(pvStack_190,pcVar21,sStack_18c);
      }
    }
    local_4c = (void *)CONCAT31(local_4c._1_3_,4);
    piStack_1e8 = (int *)0x1;
    local_1c8 = (int *)FUN_00b0ba10();
  }
  piVar19 = local_1c8;
  local_4c = (void *)0xffffffff;
  if (((uint)piStack_1e8 & 1) != 0) {
    FUN_00b13650();
  }
  *(undefined4 *)((int)piVar19 + 8) = uStack_e0;
  *(float *)((int)piVar19 + 0xc) = uStack_dc;
  *(undefined4 *)((int)piVar19 + 0x10) = uStack_cc;
  if (*(int *)(*(int *)(local_1c4 + 0xd8) + 4 + iVar12) != 0) {
    (**(code **)(**(int **)(*(int *)(local_1c4 + 0xd8) + 4 + iVar12) + 0x10))();
  }
  FUN_00aeb600();
  FUN_00b0c270();
  pcStack_1d4 = (char *)0x0;
  if (uStack_d4 != 0) {
    iStack_15c = iStack_1ec << 5;
    do {
      piVar19 = uStack_1d0;
      (**(code **)(*uStack_1d0 + 8))(&uStack_f0,0x10);
      if (pcStack_1d4 == (char *)0x1) {
        uVar4 = (undefined1)uStack_f4;
        uVar7 = uStack_f4._1_1_;
        uStack_f4._0_2_ = CONCAT11(uStack_f4._2_1_,uStack_f4._3_1_);
        uStack_f4 = CONCAT13(uVar4,CONCAT12(uVar7,(undefined2)uStack_f4));
        uVar4 = (undefined1)uStack_f0;
        uVar7 = uStack_f0._1_1_;
        uStack_f0._0_2_ = CONCAT11(uStack_f0._2_1_,uStack_f0._3_1_);
        uStack_f0 = CONCAT13(uVar4,CONCAT12(uVar7,(undefined2)uStack_f0));
        uVar4 = (undefined1)uStack_ec;
        uVar7 = uStack_ec._1_1_;
        uStack_ec._0_2_ = CONCAT11(uStack_ec._2_1_,uStack_ec._3_1_);
        uStack_ec = CONCAT13(uVar4,CONCAT12(uVar7,(undefined2)uStack_ec));
        uVar4 = (undefined1)uStack_f8;
        uVar7 = uStack_f8._1_1_;
        uStack_f8._0_2_ = CONCAT11(uStack_f8._2_1_,uStack_f8._3_1_);
        uStack_f8 = (float)CONCAT13(uVar4,CONCAT12(uVar7,(undefined2)uStack_f8));
      }
      puVar14 = *(undefined4 **)(*(int *)(uStack_1cc + 0x80) + (int)uStack_f8 * 4);
      puVar20 = puVar26;
      puStack_19c = puVar14;
      if (*(char *)(ppuStack_1c0 + 3) != '\0') {
        uVar17 = *puVar14;
        puVar10 = (undefined4 *)FUN_00b15770();
        puVar11 = (undefined1 *)*puVar10;
        if (puVar11 == (undefined1 *)0x0) {
          puVar11 = &DAT_00ded94d;
        }
        FUN_00b15e80("    + Deform data #%d: Node=\'%s\' (index=%d)",uStack_1dc,puVar11,uVar17);
        FUN_00b15e80("       - NumVertices = %d",uStack_ec);
        FUN_00b15e80();
        FUN_00b15e80();
        puVar20 = puVar26;
      }
      puVar26 = puVar20;
      if ((*(int *)(puVar14[7] + (int)fStack_164 + 4) == 0) ||
         (fStack_1a0 = (float)(**(code **)(**(int **)(puVar14[7] + (int)fStack_164 + 4) + 0x10))(),
         puVar26 = puVar20, fStack_1a0 == 0.0)) {
        (**(code **)(*piVar19 + 0x80))();
      }
      else {
        iVar12 = (*(code *)PTR_FUN_00f01b08)(0x14,0xcd,4,0,0);
        pvStack_54 = (void *)0x6;
        if (iVar12 == 0) {
          piVar13 = (int *)0x0;
        }
        else {
          piVar13 = (int *)FUN_00b0b840(*puVar14,uStack_ec);
        }
        pvStack_54 = (void *)0xffffffff;
        FUN_00b0c320();
        piVar13[3] = uStack_f4;
        piVar13[4] = uStack_f0;
        puVar14 = (undefined4 *)(*(code *)PTR_FUN_00f01b08)(uStack_ec * 6,600,4,0,0);
        puStack_1a4 = puVar14;
        (**(code **)(*piVar19 + 8))(puVar14);
        piStack_1e8 = piStack_fc;
        if (*(char *)(*DAT_00f209e4 + 0x8c) == '\0') {
          uVar18 = 0;
          piVar13[3] = 0x7f7fffff;
          piVar13[4] = -0x800001;
          if (uStack_f4 != 0) {
            do {
              puVar20 = (undefined2 *)*puVar14;
              uVar27 = *(ushort *)(puVar14 + 1);
              if (uStack_1dc == 1.4013e-45) {
                puVar20 = (undefined2 *)
                          CONCAT13((char)((uint)puVar20 >> 0x10),
                                   CONCAT12((char)((uint)puVar20 >> 0x18),
                                            CONCAT11((char)puVar20,(char)((uint)puVar20 >> 8))));
                uVar27 = CONCAT11((char)uVar27,(char)(uVar27 >> 8));
              }
              piStack_1e8 = (int *)(uint)uVar27;
              fVar28 = (uStack_f8 - (float)piStack_fc) * 1.5259022e-05;
              fStack_188 = (float)((uint)puVar20 & 0xffff) * fVar28 + (float)piStack_fc;
              fStack_184 = (float)((uint)puVar20 >> 0x10) * fVar28 + (float)piStack_fc;
              fStack_180 = (float)(int)piStack_1e8 * fVar28 + (float)piStack_fc;
              FUN_00b18c30(&fStack_188,1);
              fVar28 = fStack_180 * fStack_180 + fStack_188 * fStack_188 + fStack_184 * fStack_184;
              if (fVar28 <= 1e-05) {
                fVar28 = 0.0;
              }
              else {
                fVar28 = SQRT(fVar28);
              }
              if (1e-05 < fVar28) {
                fVar28 = fStack_184;
                if (fStack_188 < fStack_184) {
                  fVar28 = fStack_188;
                }
                if (fStack_180 <= fVar28) {
                  fVar28 = fStack_180;
                }
                fVar6 = fStack_184;
                if (fStack_184 < fStack_188) {
                  fVar6 = fStack_188;
                }
                fVar2 = fStack_180;
                if (fStack_180 < fVar6) {
                  fVar2 = fVar6;
                }
                if ((float)piVar13[3] <= fVar28) {
                  fVar28 = (float)piVar13[3];
                }
                piVar13[3] = (int)fVar28;
                if (fVar2 <= (float)piVar13[4]) {
                  fVar2 = (float)piVar13[4];
                }
                piVar13[4] = (int)fVar2;
              }
              uVar18 = uVar18 + 1;
              puVar14 = (undefined4 *)((int)puVar14 + 6);
            } while (uVar18 < uStack_f4);
          }
          if ((float)piVar13[4] - (float)piVar13[3] < 1.0) {
            if (((float)piVar13[3] < 0.0) && (-1.0 < (float)piVar13[3])) {
              piVar13[3] = -0x40800000;
            }
            if ((0.0 < (float)piVar13[4]) && ((float)piVar13[4] < 1.0)) {
              piVar13[4] = 0x3f800000;
            }
          }
          piStack_1e8 = (int *)piVar13[3];
        }
        uVar18 = 0;
        if (uStack_f4 != 0) {
          iVar12 = 0;
          puVar14 = puStack_1ac;
          do {
            puVar20 = (undefined2 *)*puVar14;
            uVar27 = *(ushort *)(puVar14 + 1);
            if (uStack_1dc == 1.4013e-45) {
              puVar20 = (undefined2 *)
                        CONCAT13((char)((uint)puVar20 >> 0x10),
                                 CONCAT12((char)((uint)puVar20 >> 0x18),
                                          CONCAT11((char)puVar20,(char)((uint)puVar20 >> 8))));
              uVar27 = CONCAT11((char)uVar27,(char)(uVar27 >> 8));
            }
            fVar28 = (uStack_f8 - (float)piStack_fc) * 1.5259022e-05;
            fStack_120 = (float)((uint)puVar20 & 0xffff) * fVar28 + (float)piStack_fc;
            fStack_11c = (float)((uint)puVar20 >> 0x10) * fVar28 + (float)piStack_fc;
            fStack_118 = (float)uVar27 * fVar28 + (float)piStack_fc;
            FUN_00b18c30(&fStack_120,1);
            puVar10 = (undefined4 *)FUN_00afff40();
            iVar8 = *piVar13;
            *(undefined4 *)(iVar8 + iVar12) = *puVar10;
            *(undefined2 *)(iVar8 + 4 + iVar12) = *(undefined2 *)(puVar10 + 1);
            uVar18 = uVar18 + 1;
            puVar14 = (undefined4 *)((int)puVar14 + 6);
            iVar12 = iVar12 + 0x10;
          } while (uVar18 < uStack_f4);
        }
        (*(code *)PTR__free_00f01b10)();
        (*(code *)PTR_FUN_00f01b08)(uStack_f4 * 3,600,4,0,0,0);
        (**(code **)(*local_1e0 + 8))();
        piVar19 = (int *)0x0;
        if (piStack_fc != (int *)0x0) {
          puVar26 = unaff_EDI;
          iVar12 = 0;
          do {
            uVar5 = *puVar26;
            uStack_1cc = CONCAT22(uStack_1cc._2_2_,uVar5);
            iVar8 = uStack_1cc;
            uStack_1cc._1_1_ = (byte)((ushort)uVar5 >> 8);
            piStack_134 = (int *)((float)(byte)uVar5 * 0.007843138 - 1.0);
            fStack_130 = (float)uStack_1cc._1_1_ * 0.007843138 - 1.0;
            fStack_12c = (float)*(byte *)(puVar26 + 1) * 0.007843138 - 1.0;
            uStack_1cc = iVar8;
            FUN_00b18c30(&piStack_134,1);
            puVar15 = (undefined2 *)FUN_00b00020(&piStack_134,0xbf800000,0x3f800000);
            puVar1 = (undefined2 *)(iVar12 + 6 + *piVar13);
            *puVar1 = *puVar15;
            *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar15 + 1);
            piVar19 = (int *)((int)piVar19 + 1);
            puVar26 = (undefined2 *)((int)puVar26 + 3);
            iVar12 = iVar12 + 0x10;
          } while (piVar19 < piStack_fc);
        }
        piVar19 = piStack_1e8;
        (**(code **)(*piStack_1e8 + 8))();
        uVar18 = 0;
        puVar26 = puVar20;
        if (uStack_104 != 0) {
          iVar12 = 0;
          do {
            uVar5 = *puVar20;
            uStack_1d0 = (int *)CONCAT22(uStack_1d0._2_2_,uVar5);
            piVar19 = uStack_1d0;
            uStack_1d0._1_1_ = (byte)((ushort)uVar5 >> 8);
            puStack_1a4 = (undefined4 *)((float)(byte)uVar5 * 0.007843138 - 1.0);
            fStack_1a0 = (float)uStack_1d0._1_1_ * 0.007843138 - 1.0;
            puStack_19c = (undefined4 *)((float)*(byte *)(puVar20 + 1) * 0.007843138 - 1.0);
            uStack_1d0 = piVar19;
            FUN_00b18c30(&puStack_1a4,1);
            puVar15 = (undefined2 *)FUN_00b00020(&puStack_1a4,0xbf800000,0x3f800000);
            puVar1 = (undefined2 *)(iVar12 + 9 + *piVar13);
            *puVar1 = *puVar15;
            *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar15 + 1);
            uVar18 = uVar18 + 1;
            puVar20 = (undefined2 *)((int)puVar20 + 3);
            iVar12 = iVar12 + 0x10;
            piVar19 = uStack_1f0;
          } while (uVar18 < uStack_104);
        }
        (*(code *)PTR__free_00f01b10)(puVar26);
        iVar12 = (*(code *)PTR_FUN_00f01b08)(uStack_104 * 4,600,4,0,0,0);
        (**(code **)(*piVar19 + 8))(iVar12,uStack_104 * 4);
        if ((uStack_1f4 == 1) && (uStack_10c != 0)) {
          puVar11 = (undefined1 *)(iVar12 + 2);
          uVar18 = uStack_10c;
          do {
            uVar4 = puVar11[-2];
            puVar11[-2] = puVar11[1];
            puVar11[1] = uVar4;
            uVar4 = puVar11[-1];
            puVar11[-1] = *puVar11;
            *puVar11 = uVar4;
            puVar11 = puVar11 + 4;
            uVar18 = uVar18 - 1;
          } while (uVar18 != 0);
        }
        uVar18 = 0;
        if (uStack_10c != 0) {
          iVar8 = 0;
          do {
            *(undefined4 *)(iVar8 + 0xc + *piVar13) = *(undefined4 *)(iVar12 + uVar18 * 4);
            uVar18 = uVar18 + 1;
            iVar8 = iVar8 + 0x10;
          } while (uVar18 < uStack_10c);
        }
        (*(code *)PTR__free_00f01b10)(iVar12);
        iVar12 = *(int *)(iStack_194 + 0x1c);
        if ((*(int **)(iVar12 + 0x14) == (int *)0x0) ||
           (iVar8 = (**(code **)(**(int **)(iVar12 + 0x14) + 0x10))(), iVar8 == 0)) {
          iVar8 = (*(code *)PTR_FUN_00f01b08)(0x14,0xcb,4,0,0);
          local_4c = (void *)0x7;
          if (iVar8 == 0) {
            iVar8 = 0;
          }
          else {
            iVar8 = FUN_00aeb090();
          }
          local_4c = (void *)0xffffffff;
          ppuStack_1c0 = &PTR_FUN_00ddd998;
          if ((iVar8 == 0) ||
             (piVar19 = (int *)(*(code *)PTR_FUN_00f01b08)(0xc,6,4,0,0), piVar19 == (int *)0x0)) {
            piVar19 = (int *)0x0;
          }
          else {
            piVar19[2] = iVar8;
            piVar19[1] = 0;
            *piVar19 = (int)&PTR_FUN_00ddcbf0;
            (**(code **)(*piVar19 + 4))();
          }
          local_4c = (void *)0x8;
          local_1bc = piVar19;
          if (piVar19 != (int *)0x0) {
            (**(code **)(*piVar19 + 4))();
          }
          piVar13 = *(int **)(iVar12 + 0x14);
          *(int **)(iVar12 + 0x14) = piVar19;
          if (piVar13 != (int *)0x0) {
            (**(code **)(*piVar13 + 8))();
          }
          local_4c = (void *)0xffffffff;
          ppuStack_1c0 = &PTR_FUN_00ddd998;
          local_1bc = (int *)0x0;
          if (piVar19 != (int *)0x0) {
            (**(code **)(*piVar19 + 8))();
          }
          piVar19 = *(int **)(iVar12 + 0x14);
          iVar8 = *(int *)(iStack_194 + 0x1c);
          if (piVar19 != (int *)0x0) {
            (**(code **)(*piVar19 + 4))();
          }
          piVar13 = *(int **)(iVar8 + 0x14);
          *(int **)(iVar8 + 0x14) = piVar19;
          if (piVar13 != (int *)0x0) {
            (**(code **)(*piVar13 + 8))();
          }
        }
        if (*(int **)(iVar12 + 0x14) != (int *)0x0) {
          (**(code **)(**(int **)(iVar12 + 0x14) + 0x10))();
        }
        iVar8 = FUN_00aeb040(2,0);
        if (iVar8 == 0) {
          iVar8 = (*(code *)PTR_FUN_00f01b08)(0x1c,0xcb,4,0,0);
          local_4c = (void *)0x9;
          if (iVar8 == 0) {
            iVar8 = 0;
          }
          else {
            iVar8 = FUN_00b120e0();
          }
          local_4c = (void *)0xffffffff;
          if (*(int **)(iVar12 + 0x14) != (int *)0x0) {
            (**(code **)(**(int **)(iVar12 + 0x14) + 0x10))();
          }
          FUN_00aeb2a0(0,iVar8);
        }
        uStack_f4 = uStack_f4 & 0xffffff00;
        iVar16 = FUN_00b0b9c0();
        iVar12 = *(int *)(iVar8 + 0x10);
        uVar18 = iVar12 + 1;
        *(uint *)(iVar8 + 0x10) = uVar18;
        if (*(uint *)(iVar8 + 0x14) < uVar18) {
          iVar12 = iVar12 + 2;
          if (iVar12 == 0) {
            *(undefined4 *)(iVar8 + 0x10) = 0;
            *(undefined4 *)(iVar8 + 0x14) = 0;
            if (*(int *)(iVar8 + 0xc) != 0) {
              (*(code *)PTR__free_00f01b10)();
              *(undefined4 *)(iVar8 + 0xc) = 0;
            }
          }
          else {
            if (*(int *)(iVar8 + 0xc) == 0) {
              uVar17 = (*(code *)PTR_FUN_00f01b08)(iVar12 * 0xc,*(undefined2 *)(iVar8 + 0x18),4);
            }
            else {
              uVar17 = (*(code *)PTR_FUN_00f01b0c)();
            }
            *(undefined4 *)(iVar8 + 0xc) = uVar17;
            *(int *)(iVar8 + 0x14) = iVar12;
          }
        }
        piVar19 = (int *)(*(int *)(iVar8 + 0xc) + -0xc + *(int *)(iVar8 + 0x10) * 0xc);
        if (piVar19 != (int *)0x0) {
          *piVar19 = (int)local_1c8;
          piVar19[1] = iVar16 + -1;
          piVar19[2] = uStack_f4;
        }
      }
      pcStack_1d4 = (char *)((int)pcStack_1d4 + 1);
    } while (pcStack_1d4 < uStack_d4);
  }
  iVar12 = uStack_1cc;
  uVar18 = 0;
  if (uStack_d0 != 0) {
    do {
      (**(code **)(*uStack_1d0 + 8))(&uStack_c8,0x3c);
      fVar28 = fStack_98;
      uStack_1e4 = uStack_a4;
      local_1e0 = piStack_a0;
      uStack_1dc = fStack_9c;
      uStack_1f4 = iStack_94;
      uStack_1f0 = piStack_90;
      fStack_16c = fStack_c4;
      fStack_168 = fStack_c0;
      fStack_164 = fStack_bc;
      fStack_160 = fStack_b8;
      puStack_1ac = puStack_b4;
      fStack_1a8 = fStack_b0;
      puStack_1a4 = puStack_ac;
      fStack_1a0 = fStack_a8;
      if (iVar12 == 1) {
        uStack_1e4._0_1_ = (undefined1)uStack_a4;
        uStack_1e4._3_1_ = (undefined1)((uint)uStack_a4 >> 0x18);
        uStack_1e4._2_1_ = (undefined1)((uint)uStack_a4 >> 0x10);
        uStack_1e4._1_1_ = (undefined1)((uint)uStack_a4 >> 8);
        uVar5 = CONCAT11((undefined1)uStack_1e4,uStack_1e4._1_1_);
        local_1e0._0_1_ = SUB41(piStack_a0,0);
        local_1e0._3_1_ = (undefined1)((uint)piStack_a0 >> 0x18);
        uStack_1e4 = CONCAT22(uVar5,CONCAT11(uStack_1e4._2_1_,uStack_1e4._3_1_));
        local_1e0._2_1_ = (undefined1)((uint)piStack_a0 >> 0x10);
        local_1e0._1_1_ = (undefined1)((uint)piStack_a0 >> 8);
        uVar5 = CONCAT11((undefined1)local_1e0,local_1e0._1_1_);
        uStack_1dc._0_1_ = SUB41(fStack_9c,0);
        uVar4 = (undefined1)uStack_1dc;
        uStack_1dc._3_1_ = (undefined1)((uint)fStack_9c >> 0x18);
        local_1e0 = (int *)CONCAT22(uVar5,CONCAT11(local_1e0._2_1_,local_1e0._3_1_));
        uStack_1dc._2_1_ = (undefined1)((uint)fStack_9c >> 0x10);
        uStack_1dc._1_1_ = (undefined1)((uint)fStack_9c >> 8);
        uVar7 = uStack_1dc._1_1_;
        uStack_1dc._0_2_ = CONCAT11(uStack_1dc._2_1_,uStack_1dc._3_1_);
        uStack_1dc = (float)CONCAT13(uVar4,CONCAT12(uVar7,(undefined2)uStack_1dc));
      }
      FUN_00b18c30(&uStack_1e4,1);
      if (iVar12 == 1) {
        fVar28 = (float)CONCAT22(CONCAT11(SUB41(fVar28,0),(char)((uint)fVar28 >> 8)),
                                 CONCAT11((char)((uint)fVar28 >> 0x10),(char)((uint)fVar28 >> 0x18))
                                );
        uVar5 = CONCAT11((undefined1)uStack_1f4,uStack_1f4._1_1_);
        uVar4 = (undefined1)uStack_1f0;
        uStack_1f4 = CONCAT22(uVar5,CONCAT11(uStack_1f4._2_1_,uStack_1f4._3_1_));
        uVar7 = uStack_1f0._1_1_;
        uStack_1f0._0_2_ = CONCAT11(uStack_1f0._2_1_,uStack_1f0._3_1_);
        uStack_1f0 = (int *)CONCAT13(uVar4,CONCAT12(uVar7,(undefined2)uStack_1f0));
      }
      FUN_00b18bf0(&stack0xfffffe08,1);
      pfVar24 = &fStack_16c;
      uVar22 = CONCAT44(1,iVar12);
      FUN_00b00190();
      FUN_00b00190(&puStack_1ac,iVar12,1,pfVar24,uVar22);
      if (iVar12 == 1) {
        uVar4 = (undefined1)uStack_c8;
        uVar7 = uStack_c8._1_1_;
        uStack_c8._0_2_ = CONCAT11(uStack_c8._2_1_,uStack_c8._3_1_);
        uStack_c8 = (float)CONCAT13(uVar4,CONCAT12(uVar7,(undefined2)uStack_c8));
      }
      uStack_138 = uStack_1e4;
      piStack_134 = local_1e0;
      fStack_120 = uStack_c8;
      fStack_130 = uStack_1dc;
      iStack_128 = uStack_1f4;
      piStack_124 = uStack_1f0;
      fStack_158 = fStack_16c;
      fStack_154 = fStack_168;
      fStack_150 = fStack_164;
      fStack_14c = fStack_160;
      puStack_148 = puStack_1ac;
      fStack_144 = fStack_1a8;
      puStack_140 = puStack_1a4;
      fStack_13c = fStack_1a0;
      fStack_12c = fVar28;
      if (*(char *)(iStack_1b8 + 0xc) != '\0') {
        puVar14 = (undefined4 *)FUN_00b15770();
        puVar11 = (undefined1 *)*puVar14;
        if (puVar11 == (undefined1 *)0x0) {
          puVar11 = &DAT_00ded94d;
        }
        FUN_00b15e80("    - Transform #%d: Node=\'%s\' (index=%d)",uVar18,puVar11,fStack_120);
        FUN_00b15e80();
        FUN_00b15e80("       + Rotation: %f, %f, %f %f",(double)fStack_158,(double)fStack_154,
                     (double)fStack_150,(double)fStack_14c);
        FUN_00b15e80();
        FUN_00b15e80("       + ScaleRot: %f, %f, %f %f",(double)(float)puStack_1ac,
                     (double)fStack_1a8,(double)(float)puStack_1a4,(double)fStack_1a0);
      }
      FUN_00b0c350();
      uVar18 = uVar18 + 1;
    } while (uVar18 < uStack_d0);
  }
  ExceptionList = pvStack_54;
  __security_check_cookie(uStack_8c ^ (uint)&stack0xfffffe04);
  return;
}

