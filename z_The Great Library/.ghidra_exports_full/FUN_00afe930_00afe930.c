// FUN_00afe930 @ 00afe930 body=[[00afe930, 00afff34]]


void FUN_00afe930(int *param_1,int *param_2)

{
  undefined2 *puVar1;
  void *pvVar2;
  char cVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  void *pvVar6;
  float fVar7;
  void *pvVar8;
  undefined1 uVar9;
  int *piVar10;
  int iVar11;
  char *_Src;
  char *pcVar12;
  undefined4 *puVar13;
  undefined1 *puVar14;
  int *piVar15;
  uint *puVar16;
  undefined4 *puVar17;
  undefined2 *puVar18;
  int iVar19;
  undefined4 uVar20;
  int in_ECX;
  int iVar21;
  uint uVar22;
  undefined2 *puVar23;
  int *piVar24;
  undefined8 uVar25;
  double dVar26;
  float *pfVar27;
  ushort uVar28;
  undefined1 auStack_234 [4];
  int iStack_230;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 local_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  int iStack_204;
  int iStack_1fc;
  int *piStack_1f8;
  undefined4 uStack_1f4;
  undefined4 local_1f0;
  uint local_1ec;
  int iStack_1e8;
  undefined **local_1e4;
  int *piStack_1e0;
  int iStack_1dc;
  undefined4 uStack_1d8;
  uint uStack_1d0;
  undefined4 uStack_1cc;
  uint *puStack_1c8;
  undefined4 *puStack_1c4;
  uint *puStack_1c0;
  int iStack_1bc;
  uint uStack_1b0;
  void *local_1ac;
  void *pvStack_1a8;
  void *pvStack_1a4;
  undefined4 uStack_1a0;
  float fStack_190;
  int *piStack_18c;
  float fStack_188;
  float fStack_184;
  int iStack_180;
  float fStack_178;
  int *local_174;
  float fStack_170;
  float fStack_16c;
  undefined4 uStack_168;
  uint *puStack_164;
  undefined4 *puStack_160;
  uint *puStack_15c;
  int *piStack_158;
  float fStack_154;
  int *piStack_150;
  undefined2 *puStack_14c;
  int *piStack_148;
  undefined2 *puStack_144;
  undefined4 uStack_140;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  uint uStack_10c;
  uint uStack_108;
  uint auStack_104 [2];
  int *piStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 uStack_e8;
  undefined1 uStack_e7;
  undefined1 uStack_e6;
  undefined1 uStack_e5;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  uint uStack_d0;
  int iStack_cc;
  undefined4 uStack_c8;
  float fStack_c4;
  int *piStack_c0;
  float fStack_bc;
  float fStack_b8;
  undefined4 uStack_b4;
  uint *puStack_b0;
  undefined4 *puStack_ac;
  uint *puStack_a8;
  int *piStack_a4;
  float fStack_a0;
  int *piStack_9c;
  undefined2 *puStack_98;
  int *piStack_94;
  undefined2 *puStack_90;
  uint uStack_8c;
  uint local_84;
  void *pvStack_54;
  void *local_4c;
  undefined1 *puStack_48;
  undefined4 uStack_44;
  
  uStack_44 = 0xffffffff;
  puStack_48 = &LAB_00b38c23;
  local_4c = ExceptionList;
  local_84 = DAT_00ef259c ^ (uint)auStack_234;
  ExceptionList = &local_4c;
  local_1e4 = (undefined **)0x0;
  uVar22 = param_2[7];
  pvVar6 = (void *)*param_2;
  local_174 = param_2;
  local_1f0 = param_1;
  local_1ec = uVar22;
  local_1ac = pvVar6;
  (**(code **)(*param_1 + 8))(&local_21c,8,DAT_00ef259c ^ (uint)&stack0xfffffdc0);
  if (uVar22 == 1) {
    uVar4 = (undefined1)uStack_224;
    uVar9 = uStack_224._1_1_;
    uStack_224._0_2_ = CONCAT11(uStack_224._2_1_,uStack_224._3_1_);
    uStack_224 = CONCAT13(uVar4,CONCAT12(uVar9,(undefined2)uStack_224));
    uVar4 = (undefined1)uStack_220;
    uVar9 = uStack_220._1_1_;
    uStack_220._0_2_ = CONCAT11(uStack_220._2_1_,uStack_220._3_1_);
    uStack_220 = CONCAT13(uVar4,CONCAT12(uVar9,(undefined2)uStack_220));
  }
  if (*(char *)(in_ECX + 0xc) != '\0') {
    FUN_00b15e80();
  }
  iVar11 = *(int *)((int)pvVar6 + 0xd8) + uStack_220 * 8;
  if ((*(int *)(iVar11 + 4) == 0) ||
     (iVar11 = (**(code **)(**(int **)(iVar11 + 4) + 0x10))(), iVar11 == 0)) {
    iStack_230 = (*(code *)PTR_FUN_00f01b08)(0x10,0xcd,4,0,0);
    local_4c = (void *)0x0;
    if (iStack_230 != 0) {
      FUN_00aeb4b0();
    }
    local_4c = (void *)0xffffffff;
    local_1e4 = &PTR_FUN_00ddd998;
    piStack_1e0 = (int *)0x0;
    FUN_00ad8b40();
    piVar24 = piStack_1e0;
    local_4c = (void *)0x1;
    iVar11 = *(int *)((int)pvVar6 + 0xd8) + uStack_220 * 8;
    if (piStack_1e0 != (int *)0x0) {
      (**(code **)(*piStack_1e0 + 4))();
    }
    piVar15 = *(int **)(iVar11 + 4);
    *(int **)(iVar11 + 4) = piVar24;
    if (piVar15 != (int *)0x0) {
      (**(code **)(*piVar15 + 8))();
    }
    local_4c = (void *)0xffffffff;
    if (piVar24 != (int *)0x0) {
      (**(code **)(*piVar24 + 8))();
    }
  }
  if (*(int *)(*(int *)((int)pvVar6 + 0xd8) + 4 + uStack_220 * 8) == 0) {
    local_1ac = (void *)0x0;
  }
  else {
    local_1ac = (void *)(**(code **)(**(int **)(*(int *)((int)pvVar6 + 0xd8) + uStack_220 * 8 + 4) +
                                    0x10))();
  }
  if (*(uint *)((int)local_1ac + 8) < uStack_224) {
    FUN_00aeb6c0();
  }
  uStack_1b0 = 0;
  if (uStack_224 != 0) {
    do {
      (**(code **)(*piStack_1f8 + 8))(&uStack_e0);
      if (iStack_1fc == 1) {
        uVar4 = uStack_e8;
        uVar9 = uStack_e7;
        _uStack_e8 = CONCAT11(uStack_e6,uStack_e5);
        _uStack_e8 = CONCAT13(uVar4,CONCAT12(uVar9,_uStack_e8));
        uVar4 = (undefined1)uStack_e4;
        uVar9 = uStack_e4._1_1_;
        uStack_e4._0_2_ = CONCAT11(uStack_e4._2_1_,uStack_e4._3_1_);
        uStack_e4 = (float)CONCAT13(uVar4,CONCAT12(uVar9,(undefined2)uStack_e4));
        uVar4 = (undefined1)uStack_e0;
        uVar9 = uStack_e0._1_1_;
        uStack_e0._0_2_ = CONCAT11(uStack_e0._2_1_,uStack_e0._3_1_);
        uStack_e0 = CONCAT13(uVar4,CONCAT12(uVar9,(undefined2)uStack_e0));
        uVar4 = (undefined1)uStack_dc;
        uVar9 = uStack_dc._1_1_;
        uStack_dc._0_2_ = CONCAT11(uStack_dc._2_1_,uStack_dc._3_1_);
        uStack_dc = CONCAT13(uVar4,CONCAT12(uVar9,(undefined2)uStack_dc));
        uVar4 = (undefined1)uStack_d8;
        uVar9 = uStack_d8._1_1_;
        uStack_d8._0_2_ = CONCAT11(uStack_d8._2_1_,uStack_d8._3_1_);
        uStack_d8 = CONCAT13(uVar4,CONCAT12(uVar9,(undefined2)uStack_d8));
        uVar4 = (undefined1)uStack_d4;
        uVar9 = uStack_d4._1_1_;
        uStack_d4._0_2_ = CONCAT11(uStack_d4._2_1_,uStack_d4._3_1_);
        uStack_d4 = CONCAT13(uVar4,CONCAT12(uVar9,(undefined2)uStack_d4));
      }
      _Src = (char *)FUN_00aee020();
      local_1f0 = (int *)uStack_e0;
      if (*(char *)(local_1e4 + 3) != '\0') {
        FUN_00b15e80();
        FUN_00b15e80();
        FUN_00b15e80();
        FUN_00b15e80();
        dVar26 = (double)uStack_e4;
        pcVar12 = "     - RangeMax           = %f";
        FUN_00b15e80();
        uVar25 = CONCAT44(pcVar12,uStack_dc);
        pcVar12 = "     - NumDeformDatas     = %d";
        FUN_00b15e80();
        FUN_00b15e80("     - NumTransformations = %d",uStack_d8,pcVar12,uVar25,dVar26);
        FUN_00b12f80(auStack_104,uStack_d4);
        pvStack_54 = (void *)0x2;
        FUN_00b15e80("     - PhonemeSets: %s");
        pvStack_54 = (void *)0xffffffff;
        FUN_00b13650();
      }
      iStack_230 = (*(code *)PTR_FUN_00f01b08)(0x34,0xcd,4,0,0);
      local_4c = (void *)0x3;
      if (iStack_230 == 0) {
        local_1f0 = (int *)0x0;
      }
      else {
        pvStack_1a8 = (void *)0x0;
        pvStack_1a4 = (void *)0x0;
        uStack_1a0 = 0;
        if (_Src != (char *)0x0) {
          pcVar12 = _Src;
          do {
            cVar3 = *pcVar12;
            pcVar12 = pcVar12 + 1;
          } while (cVar3 != '\0');
          FUN_00b13660((int)pcVar12 - (int)(_Src + 1),0);
          if (pvStack_1a8 != (void *)0x0) {
            FID_conflict__memcpy(pvStack_1a8,_Src,(size_t)pvStack_1a4);
          }
        }
        local_1ec = local_1ec | 1;
        local_4c = (void *)CONCAT31(local_4c._1_3_,4);
        local_1f0 = (int *)FUN_00b0ba10();
      }
      piVar24 = local_1f0;
      local_4c = (void *)0xffffffff;
      if ((local_1ec & 1) != 0) {
        local_1ec = local_1ec & 0xfffffffe;
        FUN_00b13650();
      }
      piVar24[2] = uStack_e0;
      piVar24[3] = uStack_dc;
      piVar24[4] = iStack_cc;
      FUN_00aeb600();
      FUN_00b0c270();
      FUN_00b0c290();
      uStack_1d0 = 0;
      if (uStack_d4 != 0) {
        iStack_180 = iStack_1e8 << 5;
        do {
          piVar24 = piStack_1f8;
          (**(code **)(*piStack_1f8 + 8))(&uStack_f0);
          if (iStack_1fc == 1) {
            uVar4 = (undefined1)uStack_f4;
            uVar9 = uStack_f4._1_1_;
            uStack_f4._0_2_ = CONCAT11(uStack_f4._2_1_,uStack_f4._3_1_);
            uStack_f4 = (undefined2 *)CONCAT13(uVar4,CONCAT12(uVar9,(undefined2)uStack_f4));
            uVar4 = (undefined1)uStack_f0;
            uVar9 = uStack_f0._1_1_;
            uStack_f0._0_2_ = CONCAT11(uStack_f0._2_1_,uStack_f0._3_1_);
            uStack_f0 = CONCAT13(uVar4,CONCAT12(uVar9,(undefined2)uStack_f0));
            uVar4 = (undefined1)uStack_ec;
            uVar9 = uStack_ec._1_1_;
            uStack_ec._0_2_ = CONCAT11(uStack_ec._2_1_,uStack_ec._3_1_);
            uStack_ec = CONCAT13(uVar4,CONCAT12(uVar9,(undefined2)uStack_ec));
            uVar4 = (undefined1)uStack_f8;
            uVar9 = uStack_f8._1_1_;
            uStack_f8._0_2_ = CONCAT11(uStack_f8._2_1_,uStack_f8._3_1_);
            uStack_f8 = (float)CONCAT13(uVar4,CONCAT12(uVar9,(undefined2)uStack_f8));
          }
          puVar17 = *(undefined4 **)(*(int *)(iStack_1bc + 0x80) + (int)uStack_f8 * 4);
          puStack_1c4 = puVar17;
          if (*(char *)(local_1e4 + 3) != '\0') {
            uVar20 = *puVar17;
            puVar13 = (undefined4 *)FUN_00b15770();
            puVar14 = (undefined1 *)*puVar13;
            if (puVar14 == (undefined1 *)0x0) {
              puVar14 = &DAT_00ded94d;
            }
            FUN_00b15e80("     - Deform data #%d: Node=\'%s\' (index=%d)",uStack_1d8,puVar14,uVar20)
            ;
            FUN_00b15e80();
            FUN_00b15e80();
            FUN_00b15e80();
          }
          if ((*(int *)(puVar17[7] + (int)fStack_188 + 4) == 0) ||
             (local_1f0 = (int *)(**(code **)(**(int **)(puVar17[7] + (int)fStack_188 + 4) + 0x10))
                                           (), local_1f0 == (int *)0x0)) {
            (**(code **)(*piVar24 + 0x80))();
          }
          else {
            iVar11 = (*(code *)PTR_FUN_00f01b08)(0x14,0xcd,4,0,0);
            pvStack_54 = (void *)0x6;
            if (iVar11 == 0) {
              piVar15 = (int *)0x0;
            }
            else {
              piVar15 = (int *)FUN_00b0b840(*puVar17,uStack_ec);
            }
            pvStack_54 = (void *)0xffffffff;
            FUN_00b0c320();
            piVar15[3] = (int)uStack_f4;
            piVar15[4] = uStack_f0;
            puVar16 = (uint *)(*(code *)PTR_FUN_00f01b08)(uStack_ec * 6,600,4,0,0);
            puStack_1c0 = puVar16;
            (**(code **)(*piVar24 + 8))(puVar16);
            uStack_210 = piStack_fc;
            uStack_20c = uStack_f8;
            if (*(char *)(*DAT_00f209e4 + 0x8c) == '\0') {
              puVar23 = (undefined2 *)0x0;
              piVar15[3] = 0x7f7fffff;
              piVar15[4] = -0x800001;
              if (uStack_f4 != (undefined2 *)0x0) {
                do {
                  uVar22 = *puVar16;
                  uVar28 = (ushort)puVar16[1];
                  if (iStack_204 == 1) {
                    uVar22 = CONCAT13((char)(uVar22 >> 0x10),
                                      CONCAT12((char)(uVar22 >> 0x18),
                                               CONCAT11((char)uVar22,(char)(uVar22 >> 8))));
                    uVar28 = CONCAT11((char)uVar28,(char)(uVar28 >> 8));
                  }
                  uStack_210 = (int *)(uint)uVar28;
                  fVar7 = (uStack_f8 - (float)piStack_fc) * 1.5259022e-05;
                  local_1ac = (void *)((float)(uVar22 & 0xffff) * fVar7 + (float)piStack_fc);
                  pvStack_1a8 = (void *)((float)(uVar22 >> 0x10) * fVar7 + (float)piStack_fc);
                  pvStack_1a4 = (void *)((float)(int)uStack_210 * fVar7 + (float)piStack_fc);
                  FUN_00b18c30(&local_1ac,1);
                  fVar7 = (float)pvStack_1a4 * (float)pvStack_1a4 +
                          (float)local_1ac * (float)local_1ac +
                          (float)pvStack_1a8 * (float)pvStack_1a8;
                  if (fVar7 <= 1e-05) {
                    fVar7 = 0.0;
                  }
                  else {
                    fVar7 = SQRT(fVar7);
                  }
                  if (1e-05 < fVar7) {
                    pvVar6 = pvStack_1a8;
                    if ((float)local_1ac < (float)pvStack_1a8) {
                      pvVar6 = local_1ac;
                    }
                    if ((float)pvStack_1a4 <= (float)pvVar6) {
                      pvVar6 = pvStack_1a4;
                    }
                    pvVar8 = pvStack_1a8;
                    if ((float)pvStack_1a8 < (float)local_1ac) {
                      pvVar8 = local_1ac;
                    }
                    pvVar2 = pvStack_1a4;
                    if ((float)pvStack_1a4 < (float)pvVar8) {
                      pvVar2 = pvVar8;
                    }
                    if ((float)piVar15[3] <= (float)pvVar6) {
                      pvVar6 = (void *)piVar15[3];
                    }
                    piVar15[3] = (int)pvVar6;
                    if ((float)pvVar2 <= (float)piVar15[4]) {
                      pvVar2 = (void *)piVar15[4];
                    }
                    piVar15[4] = (int)pvVar2;
                  }
                  puVar23 = (undefined2 *)((int)puVar23 + 1);
                  puVar16 = (uint *)((int)puVar16 + 6);
                } while (puVar23 < uStack_f4);
              }
              if ((float)piVar15[4] - (float)piVar15[3] < 1.0) {
                if (((float)piVar15[3] < 0.0) && (-1.0 < (float)piVar15[3])) {
                  piVar15[3] = -0x40800000;
                }
                if ((0.0 < (float)piVar15[4]) && ((float)piVar15[4] < 1.0)) {
                  piVar15[4] = 0x3f800000;
                }
              }
              uStack_210 = (int *)piVar15[3];
              uStack_20c = (float)piVar15[4];
            }
            uStack_214 = (undefined2 *)0x0;
            if (uStack_f4 != (undefined2 *)0x0) {
              iVar11 = 0;
              puVar16 = puStack_1c8;
              do {
                uVar22 = *puVar16;
                uVar28 = (ushort)puVar16[1];
                if (iStack_204 == 1) {
                  uVar22 = CONCAT13((char)(uVar22 >> 0x10),
                                    CONCAT12((char)(uVar22 >> 0x18),
                                             CONCAT11((char)uVar22,(char)(uVar22 >> 8))));
                  uVar28 = CONCAT11((char)uVar28,(char)(uVar28 >> 8));
                }
                fVar7 = (uStack_f8 - (float)piStack_fc) * 1.5259022e-05;
                fStack_134 = (float)(uVar22 & 0xffff) * fVar7 + (float)piStack_fc;
                fStack_130 = (float)(uVar22 >> 0x10) * fVar7 + (float)piStack_fc;
                fStack_12c = (float)uVar28 * fVar7 + (float)piStack_fc;
                FUN_00b18c30(&fStack_134,1);
                puVar17 = (undefined4 *)FUN_00afff40();
                iVar21 = *piVar15;
                *(undefined4 *)(iVar21 + iVar11) = *puVar17;
                *(undefined2 *)(iVar21 + 4 + iVar11) = *(undefined2 *)(puVar17 + 1);
                uStack_214 = (undefined2 *)((int)uStack_214 + 1);
                puVar16 = (uint *)((int)puVar16 + 6);
                iVar11 = iVar11 + 0x10;
              } while (uStack_214 < uStack_f4);
            }
            (*(code *)PTR__free_00f01b10)();
            uStack_20c = (float)(*(code *)PTR_FUN_00f01b08)((int)uStack_f4 * 3,600,4,0,0,0);
            (**(code **)(*uStack_208 + 8))();
            piVar24 = (int *)0x0;
            if (piStack_fc != (int *)0x0) {
              local_21c = (undefined2 *)0x0;
              puVar23 = uStack_214;
              do {
                uVar5 = *puVar23;
                local_1f0 = (int *)CONCAT22(local_1f0._2_2_,uVar5);
                piVar10 = local_1f0;
                local_1f0._1_1_ = (byte)((ushort)uVar5 >> 8);
                fStack_154 = (float)(byte)uVar5 * 0.007843138 - 1.0;
                piStack_150 = (int *)((float)local_1f0._1_1_ * 0.007843138 - 1.0);
                puStack_14c = (undefined2 *)((float)*(byte *)(puVar23 + 1) * 0.007843138 - 1.0);
                local_1f0 = piVar10;
                FUN_00b18c30(&fStack_154,1);
                puVar18 = (undefined2 *)FUN_00b00020(&fStack_154,0xbf800000,0x3f800000);
                puVar1 = local_21c + 8;
                local_21c = (undefined2 *)(*piVar15 + 6 + (int)local_21c);
                *local_21c = *puVar18;
                *(undefined1 *)(local_21c + 1) = *(undefined1 *)(puVar18 + 1);
                piVar24 = (int *)((int)piVar24 + 1);
                puVar23 = (undefined2 *)((int)puVar23 + 3);
                local_21c = puVar1;
              } while (piVar24 < piStack_fc);
            }
            piVar24 = uStack_210;
            (**(code **)(*uStack_210 + 8))();
            uStack_224 = 0;
            if (auStack_104[0] != 0) {
              iVar11 = 0;
              puVar23 = local_21c;
              do {
                uVar5 = *puVar23;
                uStack_1f4 = CONCAT22(uStack_1f4._2_2_,uVar5);
                iVar21 = uStack_1f4;
                uStack_1f4._1_1_ = (byte)((ushort)uVar5 >> 8);
                piStack_150 = (int *)((float)(byte)uVar5 * 0.007843138 - 1.0);
                puStack_14c = (undefined2 *)((float)uStack_1f4._1_1_ * 0.007843138 - 1.0);
                piStack_148 = (int *)((float)*(byte *)(puVar23 + 1) * 0.007843138 - 1.0);
                uStack_1f4 = iVar21;
                FUN_00b18c30(&piStack_150,1);
                puVar18 = (undefined2 *)FUN_00b00020(&piStack_150,0xbf800000,0x3f800000);
                puVar1 = (undefined2 *)(*piVar15 + 9 + iVar11);
                *puVar1 = *puVar18;
                *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar18 + 1);
                uStack_224 = uStack_224 + 1;
                puVar23 = (undefined2 *)((int)puVar23 + 3);
                iVar11 = iVar11 + 0x10;
                piVar24 = uStack_218;
              } while (uStack_224 < auStack_104[0]);
            }
            (*(code *)PTR__free_00f01b10)(local_21c);
            iVar11 = (*(code *)PTR_FUN_00f01b08)(auStack_104[0] * 4,600,4,0,0,0);
            (**(code **)(*piVar24 + 8))(iVar11,auStack_104[0] * 4);
            if ((local_21c == (undefined2 *)0x1) && (uStack_10c != 0)) {
              puVar14 = (undefined1 *)(iVar11 + 2);
              uVar22 = uStack_10c;
              do {
                uVar4 = puVar14[-2];
                puVar14[-2] = puVar14[1];
                puVar14[1] = uVar4;
                uVar4 = puVar14[-1];
                puVar14[-1] = *puVar14;
                *puVar14 = uVar4;
                puVar14 = puVar14 + 4;
                uVar22 = uVar22 - 1;
              } while (uVar22 != 0);
            }
            uVar22 = 0;
            if (uStack_10c != 0) {
              iVar21 = 0;
              do {
                *(undefined4 *)(*piVar15 + 0xc + iVar21) = *(undefined4 *)(iVar11 + uVar22 * 4);
                uVar22 = uVar22 + 1;
                iVar21 = iVar21 + 0x10;
              } while (uVar22 < uStack_10c);
            }
            (*(code *)PTR__free_00f01b10)(iVar11);
            iVar11 = *(int *)(iStack_1bc + 0x1c);
            if ((*(int **)(iVar11 + 0x14) == (int *)0x0) ||
               (iVar21 = (**(code **)(**(int **)(iVar11 + 0x14) + 0x10))(), iVar21 == 0)) {
              iStack_230 = (*(code *)PTR_FUN_00f01b08)(0x14,0xcb,4,0,0);
              local_4c = (void *)0x7;
              if (iStack_230 == 0) {
                iVar21 = 0;
              }
              else {
                iVar21 = FUN_00aeb090();
              }
              local_4c = (void *)0xffffffff;
              local_1e4 = &PTR_FUN_00ddd998;
              if ((iVar21 == 0) ||
                 (piVar24 = (int *)(*(code *)PTR_FUN_00f01b08)(0xc,6,4,0,0), piVar24 == (int *)0x0))
              {
                piVar24 = (int *)0x0;
              }
              else {
                piVar24[2] = iVar21;
                piVar24[1] = 0;
                *piVar24 = (int)&PTR_FUN_00ddcbf0;
                (**(code **)(*piVar24 + 4))();
              }
              local_4c = (void *)0x8;
              piStack_1e0 = piVar24;
              if (piVar24 != (int *)0x0) {
                (**(code **)(*piVar24 + 4))();
              }
              piVar15 = *(int **)(iVar11 + 0x14);
              *(int **)(iVar11 + 0x14) = piVar24;
              if (piVar15 != (int *)0x0) {
                (**(code **)(*piVar15 + 8))();
              }
              local_4c = (void *)0xffffffff;
              local_1e4 = &PTR_FUN_00ddd998;
              piStack_1e0 = (int *)0x0;
              if (piVar24 != (int *)0x0) {
                (**(code **)(*piVar24 + 8))();
              }
              piVar24 = *(int **)(iVar11 + 0x14);
              iVar21 = *(int *)(iStack_1bc + 0x1c);
              if (piVar24 != (int *)0x0) {
                (**(code **)(*piVar24 + 4))();
              }
              piVar15 = *(int **)(iVar21 + 0x14);
              *(int **)(iVar21 + 0x14) = piVar24;
              if (piVar15 != (int *)0x0) {
                (**(code **)(*piVar15 + 8))();
              }
            }
            if (*(int **)(iVar11 + 0x14) != (int *)0x0) {
              (**(code **)(**(int **)(iVar11 + 0x14) + 0x10))();
            }
            iVar21 = FUN_00aeb040(2,0);
            if (iVar21 == 0) {
              iStack_230 = (*(code *)PTR_FUN_00f01b08)(0x1c,0xcb,4,0,0);
              local_4c = (void *)0x9;
              if (iStack_230 == 0) {
                iVar21 = 0;
              }
              else {
                iVar21 = FUN_00b120e0();
              }
              local_4c = (void *)0xffffffff;
              if (*(int **)(iVar11 + 0x14) != (int *)0x0) {
                (**(code **)(**(int **)(iVar11 + 0x14) + 0x10))();
              }
              FUN_00aeb2a0(0,iVar21);
              uVar22 = uStack_224;
              if (*(uint *)(iVar21 + 0x14) < uStack_224) {
                if (uStack_224 == 0) {
                  *(undefined4 *)(iVar21 + 0x10) = 0;
                  *(undefined4 *)(iVar21 + 0x14) = 0;
                  if (*(int *)(iVar21 + 0xc) != 0) {
                    (*(code *)PTR__free_00f01b10)();
                    *(undefined4 *)(iVar21 + 0xc) = 0;
                  }
                }
                else {
                  if (*(int *)(iVar21 + 0xc) == 0) {
                    uVar20 = (*(code *)PTR_FUN_00f01b08)
                                       (uStack_224 * 0xc,*(undefined2 *)(iVar21 + 0x18),4,2,0);
                  }
                  else {
                    uVar20 = (*(code *)PTR_FUN_00f01b0c)();
                  }
                  *(undefined4 *)(iVar21 + 0xc) = uVar20;
                  *(uint *)(iVar21 + 0x14) = uVar22;
                }
              }
            }
            uStack_108 = uStack_108 & 0xffffff00;
            iVar19 = FUN_00b0b9c0();
            iVar11 = *(int *)(iVar21 + 0x10);
            uVar22 = iVar11 + 1;
            *(uint *)(iVar21 + 0x10) = uVar22;
            if (*(uint *)(iVar21 + 0x14) < uVar22) {
              iVar11 = iVar11 + 2;
              if (iVar11 == 0) {
                *(undefined4 *)(iVar21 + 0x10) = 0;
                *(undefined4 *)(iVar21 + 0x14) = 0;
                if (*(int *)(iVar21 + 0xc) != 0) {
                  (*(code *)PTR__free_00f01b10)();
                  *(undefined4 *)(iVar21 + 0xc) = 0;
                }
              }
              else {
                if (*(int *)(iVar21 + 0xc) == 0) {
                  uVar20 = (*(code *)PTR_FUN_00f01b08)
                                     (iVar11 * 0xc,*(undefined2 *)(iVar21 + 0x18),4,2,0);
                }
                else {
                  uVar20 = (*(code *)PTR_FUN_00f01b0c)();
                }
                *(undefined4 *)(iVar21 + 0xc) = uVar20;
                *(int *)(iVar21 + 0x14) = iVar11;
              }
            }
            puVar17 = (undefined4 *)(*(int *)(iVar21 + 0xc) + -0xc + *(int *)(iVar21 + 0x10) * 0xc);
            if (puVar17 != (undefined4 *)0x0) {
              *puVar17 = local_1f0;
              puVar17[1] = iVar19 + -1;
              puVar17[2] = uStack_108;
            }
          }
          uStack_1d0 = uStack_1d0 + 1;
        } while (uStack_1d0 < uStack_d4);
      }
      iVar11 = uStack_1f4;
      uVar22 = 0;
      if (uStack_d0 != 0) {
        do {
          (**(code **)(*piStack_1f8 + 8))(&uStack_c8);
          uStack_210 = piStack_a4;
          uStack_20c = fStack_a0;
          uStack_208 = piStack_9c;
          local_21c = puStack_98;
          uStack_218 = piStack_94;
          uStack_214 = puStack_90;
          fStack_190 = fStack_c4;
          piStack_18c = piStack_c0;
          fStack_188 = fStack_bc;
          fStack_184 = fStack_b8;
          uStack_1cc = uStack_b4;
          puStack_1c8 = puStack_b0;
          puStack_1c4 = puStack_ac;
          puStack_1c0 = puStack_a8;
          if (iVar11 == 1) {
            uStack_210._0_1_ = SUB41(piStack_a4,0);
            uStack_210._3_1_ = (undefined1)((uint)piStack_a4 >> 0x18);
            uStack_210._2_1_ = (undefined1)((uint)piStack_a4 >> 0x10);
            uStack_210._1_1_ = (undefined1)((uint)piStack_a4 >> 8);
            uVar5 = CONCAT11((undefined1)uStack_210,uStack_210._1_1_);
            uStack_20c._0_1_ = SUB41(fStack_a0,0);
            uStack_20c._3_1_ = (undefined1)((uint)fStack_a0 >> 0x18);
            uStack_210 = (int *)CONCAT22(uVar5,CONCAT11(uStack_210._2_1_,uStack_210._3_1_));
            uStack_20c._2_1_ = (undefined1)((uint)fStack_a0 >> 0x10);
            uStack_20c._1_1_ = (undefined1)((uint)fStack_a0 >> 8);
            uVar5 = CONCAT11((undefined1)uStack_20c,uStack_20c._1_1_);
            uStack_208._0_1_ = SUB41(piStack_9c,0);
            uVar4 = (undefined1)uStack_208;
            uStack_208._3_1_ = (undefined1)((uint)piStack_9c >> 0x18);
            uStack_20c = (float)CONCAT22(uVar5,CONCAT11(uStack_20c._2_1_,uStack_20c._3_1_));
            uStack_208._2_1_ = (undefined1)((uint)piStack_9c >> 0x10);
            uStack_208._1_1_ = (undefined1)((uint)piStack_9c >> 8);
            uVar9 = uStack_208._1_1_;
            uStack_208._0_2_ = CONCAT11(uStack_208._2_1_,uStack_208._3_1_);
            uStack_208 = (int *)CONCAT13(uVar4,CONCAT12(uVar9,(undefined2)uStack_208));
          }
          FUN_00b18c30(&uStack_210,1);
          if (iVar11 == 1) {
            uVar5 = CONCAT11((undefined1)local_21c,local_21c._1_1_);
            local_21c = (undefined2 *)CONCAT22(uVar5,CONCAT11(local_21c._2_1_,local_21c._3_1_));
            uVar5 = CONCAT11((undefined1)uStack_218,uStack_218._1_1_);
            uVar4 = (undefined1)uStack_214;
            uStack_218 = (int *)CONCAT22(uVar5,CONCAT11(uStack_218._2_1_,uStack_218._3_1_));
            uVar9 = uStack_214._1_1_;
            uStack_214._0_2_ = CONCAT11(uStack_214._2_1_,uStack_214._3_1_);
            uStack_214 = (undefined2 *)CONCAT13(uVar4,CONCAT12(uVar9,(undefined2)uStack_214));
          }
          FUN_00b18bf0(&local_21c,1);
          pfVar27 = &fStack_190;
          uVar25 = CONCAT44(1,iVar11);
          FUN_00b00190();
          FUN_00b00190(&uStack_1cc,iVar11,1,pfVar27,uVar25);
          if (iVar11 == 1) {
            uVar4 = (undefined1)uStack_c8;
            uVar9 = uStack_c8._1_1_;
            uStack_c8._0_2_ = CONCAT11(uStack_c8._2_1_,uStack_c8._3_1_);
            uStack_c8 = CONCAT13(uVar4,CONCAT12(uVar9,(undefined2)uStack_c8));
          }
          piStack_158 = uStack_210;
          fStack_154 = uStack_20c;
          uStack_140 = uStack_c8;
          piStack_150 = uStack_208;
          puStack_14c = local_21c;
          piStack_148 = uStack_218;
          puStack_144 = uStack_214;
          fStack_178 = fStack_190;
          local_174 = piStack_18c;
          fStack_170 = fStack_188;
          fStack_16c = fStack_184;
          uStack_168 = uStack_1cc;
          puStack_164 = puStack_1c8;
          puStack_160 = puStack_1c4;
          puStack_15c = puStack_1c0;
          if (*(char *)(iStack_1dc + 0xc) != '\0') {
            puVar17 = (undefined4 *)FUN_00b15770();
            puVar14 = (undefined1 *)*puVar17;
            if (puVar14 == (undefined1 *)0x0) {
              puVar14 = &DAT_00ded94d;
            }
            FUN_00b15e80("     + Transform #%d: Node=\'%s\' (index=%d)",uVar22,puVar14,uStack_140);
            FUN_00b15e80();
            FUN_00b15e80("        - Rotation: %f, %f, %f %f",(double)fStack_178,
                         (double)(float)local_174,(double)fStack_170,(double)fStack_16c);
            FUN_00b15e80();
            FUN_00b15e80("        - ScaleRot: %f, %f, %f %f");
          }
          FUN_00b0c350();
          uVar22 = uVar22 + 1;
        } while (uVar22 < uStack_d0);
      }
      uStack_1b0 = uStack_1b0 + 1;
    } while (uStack_1b0 < uStack_224);
  }
  ExceptionList = pvStack_54;
  __security_check_cookie(uStack_8c ^ (uint)&stack0xfffffdc4);
  return;
}

