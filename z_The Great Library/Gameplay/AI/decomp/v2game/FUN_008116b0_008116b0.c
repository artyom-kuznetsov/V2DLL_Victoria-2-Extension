// FUN_008116b0 @ 008116b0 body=[[008116b0, 00812c4e] [00812c52, 00812e3c] [00812e40, 008135af] [008135b3, 0081387b] [0081387f, 00814119] [00814120, 0081418f] [00814193, 008141a2] [008141a6, 008141b5] [008141b9, 008141c5] [008141c9, 008141d8] [008141dc, 008141eb] [008141ef, 00814201]]


void FUN_008116b0(int *param_1,int *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  float *pfVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  float *pfVar14;
  undefined4 *puVar15;
  float fVar16;
  undefined8 *puVar17;
  uint uVar18;
  float fVar19;
  int iVar20;
  ushort in_FPUControlWord;
  float10 fVar21;
  float fVar22;
  float fVar23;
  double dVar24;
  undefined4 uVar25;
  undefined **local_4ec [151];
  undefined8 local_290;
  undefined4 local_288;
  undefined8 local_284;
  undefined4 local_27c;
  undefined8 local_278;
  float local_270;
  undefined8 local_26c;
  float local_264;
  float local_260;
  float local_25c;
  float local_258;
  float local_254;
  undefined4 local_250;
  float local_24c;
  undefined4 local_248;
  undefined4 local_244;
  float local_240;
  undefined4 local_23c;
  float local_238;
  float local_234;
  float local_230;
  float local_22c;
  undefined4 local_228;
  float local_224;
  float local_220;
  float local_21c;
  undefined4 local_218;
  float local_214;
  undefined4 local_210;
  float local_20c;
  float local_208;
  float local_204;
  float local_200;
  float fStack_1fc;
  float local_1f8;
  float local_1f4;
  float fStack_1f0;
  float local_1ec;
  float local_1e8;
  undefined4 uStack_1e4;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_19c;
  float fStack_198;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  int local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 *local_158;
  undefined4 local_154;
  undefined4 local_150;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  undefined8 *local_138;
  int local_134;
  undefined4 local_130;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  double local_114;
  float local_10c [2];
  uint local_104 [4];
  undefined4 local_f4;
  uint local_f0;
  int local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  int local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  float local_c8;
  float local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float fStack_a0;
  float local_9c;
  float local_98;
  float local_94;
  undefined8 *local_90;
  int local_8c;
  undefined4 local_88;
  undefined8 local_80;
  float local_78;
  float local_74;
  float fStack_70;
  float local_6c;
  float *local_68;
  float *local_64;
  float *local_60;
  float local_58;
  undefined8 local_54;
  float local_4c;
  int local_48;
  int *local_44;
  undefined8 local_40;
  float local_38;
  int local_34;
  float local_30;
  undefined8 local_2c;
  float local_24;
  float local_1c;
  int *local_18;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b58ea7;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar12 = (int)param_2;
  FUN_0099e240(param_2);
  piVar7 = (int *)FUN_00868600(iVar12);
  if ((int *)*piVar7 == (int *)0x0) {
    iVar12 = 0;
  }
  else {
    iVar12 = *(int *)*piVar7;
  }
  uVar8 = piVar7[2];
  if (*(uint *)(iVar12 + 8) <= uVar8) {
    uVar8 = uVar8 - *(uint *)(iVar12 + 8);
  }
  iVar12 = *(int *)(*(int *)(iVar12 + 4) + uVar8 * 4);
  local_e8 = *(int *)(param_1[7] + (int)param_2 * 4);
  local_90 = (undefined8 *)0x0;
  local_8c = 0;
  local_88 = 0;
  local_d8 = 0;
  local_d4 = 0;
  local_d0 = 0;
  local_68 = (float *)0x0;
  local_64 = (float *)0x0;
  local_60 = (float *)0x0;
  local_138 = (undefined8 *)0x0;
  local_134 = 0;
  local_130 = 0;
  local_168 = 0;
  local_164 = 0;
  local_160 = 0;
  local_158 = (undefined4 *)0x0;
  local_154 = 0;
  local_150 = 0;
  local_8._0_1_ = 5;
  local_8._1_3_ = 0;
  FUN_004bf380(4);
  FUN_004237e0(4);
  FUN_004237e0(4);
  uVar25 = 0;
  bVar6 = true;
  FUN_0099e240(0);
  piVar7 = (int *)FUN_00868600(uVar25);
  if ((int *)*piVar7 == (int *)0x0) {
    iVar13 = 0;
  }
  else {
    iVar13 = *(int *)*piVar7;
  }
  uVar8 = piVar7[2];
  if (*(uint *)(iVar13 + 8) <= uVar8) {
    uVar8 = uVar8 - *(uint *)(iVar13 + 8);
  }
  local_18 = *(int **)(*(int *)(iVar13 + 4) + uVar8 * 4);
  uVar25 = 0;
  FUN_0099e240(0);
  piVar7 = (int *)FUN_00868600(uVar25);
  if ((int *)*piVar7 == (int *)0x0) {
    iVar13 = 0;
  }
  else {
    iVar13 = *(int *)*piVar7;
  }
  uVar8 = piVar7[2];
  if (*(uint *)(iVar13 + 8) <= uVar8) {
    uVar8 = uVar8 - *(uint *)(iVar13 + 8);
  }
  local_1c = (float)**(int **)(*(int *)(iVar13 + 4) + uVar8 * 4);
  local_98 = (float)*(int *)((int)local_18 + 4);
  uVar25 = 0;
  FUN_0099e240(0);
  piVar7 = (int *)FUN_00868600(uVar25);
  if ((int *)*piVar7 == (int *)0x0) {
    iVar13 = 0;
  }
  else {
    iVar13 = *(int *)*piVar7;
  }
  uVar8 = piVar7[2];
  if (*(uint *)(iVar13 + 8) <= uVar8) {
    uVar8 = uVar8 - *(uint *)(iVar13 + 8);
  }
  local_18 = *(int **)(*(int *)(iVar13 + 4) + uVar8 * 4);
  uVar25 = 1;
  FUN_0099e240(1);
  piVar7 = (int *)FUN_00868600(uVar25);
  if ((int *)*piVar7 == (int *)0x0) {
    iVar13 = 0;
  }
  else {
    iVar13 = *(int *)*piVar7;
  }
  uVar8 = piVar7[2];
  if (*(uint *)(iVar13 + 8) <= uVar8) {
    uVar8 = uVar8 - *(uint *)(iVar13 + 8);
  }
  fVar16 = (float)*(int *)(iVar12 + 0x10);
  piVar7 = *(int **)(*(int *)(iVar13 + 4) + uVar8 * 4);
  local_74 = local_1c - (float)(*piVar7 - *local_18);
  local_6c = local_98 - (float)(piVar7[1] - local_18[1]);
  local_40._4_4_ = 0.0;
  fStack_70 = 0.0;
  local_124 = DAT_00f092fc;
  local_44 = (int *)0x1;
  if (*(int *)(iVar12 + 0x10) < 0) {
    fVar16 = fVar16 + 4.2949673e+09;
  }
  local_18 = (int *)(in_FPUControlWord | 0xc00);
  local_2c = (ulonglong)ROUND(fVar16 + fVar16);
  local_38 = local_6c;
  local_40._0_4_ = local_74;
  FUN_004bf380((float)local_2c);
  fVar16 = (float)*(int *)(iVar12 + 0x10);
  if (*(int *)(iVar12 + 0x10) < 0) {
    fVar16 = fVar16 + 4.2949673e+09;
  }
  local_18 = (int *)(in_FPUControlWord | 0xc00);
  local_2c = (ulonglong)ROUND(fVar16 + fVar16);
  FUN_004237e0((float)local_2c);
  fVar16 = (float)*(int *)(iVar12 + 0x10);
  if (*(int *)(iVar12 + 0x10) < 0) {
    fVar16 = fVar16 + 4.2949673e+09;
  }
  local_18 = (int *)(in_FPUControlWord | 0xc00);
  local_2c = (ulonglong)ROUND(fVar16 + fVar16);
  FUN_004237e0((float)local_2c);
  uVar25 = 0;
  local_34 = 0;
  local_48 = 0;
  FUN_0099e240(0);
  piVar7 = (int *)FUN_00868600(uVar25);
  if ((int *)*piVar7 == (int *)0x0) {
    iVar13 = 0;
  }
  else {
    iVar13 = *(int *)*piVar7;
  }
  uVar8 = piVar7[2];
  if (*(uint *)(iVar13 + 8) <= uVar8) {
    uVar8 = uVar8 - *(uint *)(iVar13 + 8);
  }
  local_18 = *(int **)(*(int *)(iVar13 + 4) + uVar8 * 4);
  uVar25 = 0;
  FUN_0099e240(0);
  piVar7 = (int *)FUN_00868600(uVar25);
  if ((int *)*piVar7 == (int *)0x0) {
    iVar13 = 0;
  }
  else {
    iVar13 = *(int *)*piVar7;
  }
  uVar8 = piVar7[2];
  if (*(uint *)(iVar13 + 8) <= uVar8) {
    uVar8 = uVar8 - *(uint *)(iVar13 + 8);
  }
  local_c0 = **(int **)(*(int *)(iVar13 + 4) + uVar8 * 4);
  local_bc = *(int *)((int)local_18 + 4);
  local_b8 = 1;
  local_b4 = 1;
  local_14 = 0.0;
  if (*(int *)(iVar12 + 0x10) != 1) {
    fStack_1fc = 0.0;
    do {
      iVar13 = local_34 + 1;
      local_34 = iVar13;
      FUN_0099e240(iVar13);
      piVar7 = (int *)FUN_00868600(iVar13);
      iVar20 = local_c0;
      iVar13 = 0;
      if ((int *)*piVar7 != (int *)0x0) {
        iVar13 = *(int *)*piVar7;
      }
      uVar8 = piVar7[2];
      if (*(uint *)(iVar13 + 8) <= uVar8) {
        uVar8 = uVar8 - *(uint *)(iVar13 + 8);
      }
      if (**(int **)(*(int *)(iVar13 + 4) + uVar8 * 4) < local_c0) {
        iVar13 = local_34;
        FUN_0099e240(local_34);
        piVar7 = (int *)FUN_00868600(iVar13);
        iVar13 = 0;
        if ((int *)*piVar7 != (int *)0x0) {
          iVar13 = *(int *)*piVar7;
        }
        uVar8 = piVar7[2];
        if (*(uint *)(iVar13 + 8) <= uVar8) {
          uVar8 = uVar8 - *(uint *)(iVar13 + 8);
        }
        local_c0 = **(int **)(*(int *)(iVar13 + 4) + uVar8 * 4);
        local_b8 = local_b8 + (iVar20 - local_c0);
      }
      iVar20 = local_c0;
      iVar13 = local_34;
      FUN_0099e240(local_34);
      piVar7 = (int *)FUN_00868600(iVar13);
      iVar13 = 0;
      if ((int *)*piVar7 != (int *)0x0) {
        iVar13 = *(int *)*piVar7;
      }
      uVar8 = piVar7[2];
      if (*(uint *)(iVar13 + 8) <= uVar8) {
        uVar8 = uVar8 - *(uint *)(iVar13 + 8);
      }
      if (iVar20 + local_b8 < **(int **)(*(int *)(iVar13 + 4) + uVar8 * 4)) {
        iVar13 = local_34;
        FUN_0099e240(local_34);
        piVar7 = (int *)FUN_00868600(iVar13);
        iVar13 = 0;
        if ((int *)*piVar7 != (int *)0x0) {
          iVar13 = *(int *)*piVar7;
        }
        uVar8 = piVar7[2];
        if (*(uint *)(iVar13 + 8) <= uVar8) {
          uVar8 = uVar8 - *(uint *)(iVar13 + 8);
        }
        local_b8 = **(int **)(*(int *)(iVar13 + 4) + uVar8 * 4) - iVar20;
      }
      iVar13 = local_34;
      FUN_0099e240(local_34);
      piVar7 = (int *)FUN_00868600(iVar13);
      iVar20 = local_bc;
      iVar13 = 0;
      if ((int *)*piVar7 != (int *)0x0) {
        iVar13 = *(int *)*piVar7;
      }
      uVar8 = piVar7[2];
      if (*(uint *)(iVar13 + 8) <= uVar8) {
        uVar8 = uVar8 - *(uint *)(iVar13 + 8);
      }
      if (*(int *)(*(int *)(*(int *)(iVar13 + 4) + uVar8 * 4) + 4) < local_bc) {
        iVar13 = local_34;
        FUN_0099e240(local_34);
        piVar7 = (int *)FUN_00868600(iVar13);
        iVar13 = 0;
        if ((int *)*piVar7 != (int *)0x0) {
          iVar13 = *(int *)*piVar7;
        }
        uVar8 = piVar7[2];
        if (*(uint *)(iVar13 + 8) <= uVar8) {
          uVar8 = uVar8 - *(uint *)(iVar13 + 8);
        }
        local_bc = *(int *)(*(int *)(*(int *)(iVar13 + 4) + uVar8 * 4) + 4);
        local_b4 = local_b4 + (iVar20 - local_bc);
      }
      iVar20 = local_bc;
      iVar13 = local_34;
      FUN_0099e240(local_34);
      piVar7 = (int *)FUN_00868600(iVar13);
      iVar13 = 0;
      if ((int *)*piVar7 != (int *)0x0) {
        iVar13 = *(int *)*piVar7;
      }
      uVar8 = piVar7[2];
      if (*(uint *)(iVar13 + 8) <= uVar8) {
        uVar8 = uVar8 - *(uint *)(iVar13 + 8);
      }
      if (local_b4 + iVar20 < *(int *)(*(int *)(*(int *)(iVar13 + 4) + uVar8 * 4) + 4)) {
        iVar13 = local_34;
        FUN_0099e240(local_34);
        piVar7 = (int *)FUN_00868600(iVar13);
        iVar13 = 0;
        if ((int *)*piVar7 != (int *)0x0) {
          iVar13 = *(int *)*piVar7;
        }
        uVar8 = piVar7[2];
        if (*(uint *)(iVar13 + 8) <= uVar8) {
          uVar8 = uVar8 - *(uint *)(iVar13 + 8);
        }
        local_b4 = *(int *)(*(int *)(*(int *)(iVar13 + 4) + uVar8 * 4) + 4) - iVar20;
      }
      fVar16 = local_14;
      local_148 = local_124;
      local_40._0_4_ = local_74;
      local_40._4_4_ = fStack_70;
      local_38 = local_6c;
      fVar19 = local_14;
      FUN_0099e240(local_14);
      piVar7 = (int *)FUN_00868600(fVar19);
      iVar13 = 0;
      if ((int *)*piVar7 != (int *)0x0) {
        iVar13 = *(int *)*piVar7;
      }
      uVar8 = piVar7[2];
      if (*(uint *)(iVar13 + 8) <= uVar8) {
        uVar8 = uVar8 - *(uint *)(iVar13 + 8);
      }
      local_144 = (float)*(int *)(*(int *)(*(int *)(iVar13 + 4) + uVar8 * 4) + 8);
      FUN_0099e240(fVar16);
      piVar7 = (int *)FUN_00868600(fVar16);
      iVar13 = 0;
      if ((int *)*piVar7 != (int *)0x0) {
        iVar13 = *(int *)*piVar7;
      }
      uVar8 = piVar7[2];
      if (*(uint *)(iVar13 + 8) <= uVar8) {
        uVar8 = uVar8 - *(uint *)(iVar13 + 8);
      }
      iVar13 = *(int *)(*(int *)(iVar13 + 4) + uVar8 * 4);
      fVar16 = local_14;
      FUN_0099e240(local_14);
      piVar7 = (int *)FUN_00868600(fVar16);
      iVar20 = 0;
      if ((int *)*piVar7 != (int *)0x0) {
        iVar20 = *(int *)*piVar7;
      }
      uVar8 = piVar7[2];
      if (*(uint *)(iVar20 + 8) <= uVar8) {
        uVar8 = uVar8 - *(uint *)(iVar20 + 8);
      }
      fVar19 = (float)((int)local_14 + 1);
      local_200 = (float)**(int **)(*(int *)(iVar20 + 4) + uVar8 * 4);
      local_1f8 = (float)*(int *)(iVar13 + 4);
      fVar16 = fVar19;
      local_e4 = local_200;
      local_c4 = local_1f8;
      local_30 = fVar19;
      FUN_0099e240(fVar19);
      piVar7 = (int *)FUN_00868600(fVar16);
      iVar13 = 0;
      if ((int *)*piVar7 != (int *)0x0) {
        iVar13 = *(int *)*piVar7;
      }
      uVar8 = piVar7[2];
      if (*(uint *)(iVar13 + 8) <= uVar8) {
        uVar8 = uVar8 - *(uint *)(iVar13 + 8);
      }
      local_140 = (float)*(int *)(*(int *)(*(int *)(iVar13 + 4) + uVar8 * 4) + 8);
      fVar16 = fVar19;
      FUN_0099e240(fVar19);
      piVar7 = (int *)FUN_00868600(fVar16);
      iVar13 = 0;
      if ((int *)*piVar7 != (int *)0x0) {
        iVar13 = *(int *)*piVar7;
      }
      uVar8 = piVar7[2];
      if (*(uint *)(iVar13 + 8) <= uVar8) {
        uVar8 = uVar8 - *(uint *)(iVar13 + 8);
      }
      local_1c = *(float *)(*(int *)(iVar13 + 4) + uVar8 * 4);
      FUN_0099e240(fVar19);
      piVar7 = (int *)FUN_00868600(fVar19);
      iVar13 = 0;
      if ((int *)*piVar7 != (int *)0x0) {
        iVar13 = *(int *)*piVar7;
      }
      uVar8 = piVar7[2];
      if (*(uint *)(iVar13 + 8) <= uVar8) {
        uVar8 = uVar8 - *(uint *)(iVar13 + 8);
      }
      iVar13 = **(int **)(*(int *)(iVar13 + 4) + uVar8 * 4);
      local_118 = (float)iVar13;
      local_128 = (float)*(int *)((int)local_1c + 4);
      if ((uint)local_14 < (uint)(*(int *)(iVar12 + 0x10) + -2)) {
        iVar20 = (int)local_14 + 2;
        iVar13 = iVar20;
        FUN_0099e240(iVar20);
        piVar7 = (int *)FUN_00868600(iVar13);
        iVar13 = 0;
        if ((int *)*piVar7 != (int *)0x0) {
          iVar13 = *(int *)*piVar7;
        }
        uVar8 = piVar7[2];
        if (*(uint *)(iVar13 + 8) <= uVar8) {
          uVar8 = uVar8 - *(uint *)(iVar13 + 8);
        }
        local_13c = (float)*(int *)(*(int *)(*(int *)(iVar13 + 4) + uVar8 * 4) + 8);
        iVar13 = iVar20;
        FUN_0099e240(iVar20);
        piVar7 = (int *)FUN_00868600(iVar13);
        iVar13 = 0;
        if ((int *)*piVar7 != (int *)0x0) {
          iVar13 = *(int *)*piVar7;
        }
        uVar8 = piVar7[2];
        if (*(uint *)(iVar13 + 8) <= uVar8) {
          uVar8 = uVar8 - *(uint *)(iVar13 + 8);
        }
        local_1c = *(float *)(*(int *)(iVar13 + 4) + uVar8 * 4);
        FUN_0099e240(iVar20);
        piVar7 = (int *)FUN_00868600(iVar20);
        iVar13 = 0;
        if ((int *)*piVar7 != (int *)0x0) {
          iVar13 = *(int *)*piVar7;
        }
        uVar8 = piVar7[2];
        if (*(uint *)(iVar13 + 8) <= uVar8) {
          uVar8 = uVar8 - *(uint *)(iVar13 + 8);
        }
        local_1e8 = (float)**(int **)(*(int *)(iVar13 + 4) + uVar8 * 4);
        local_1e0 = (float)*(int *)((int)local_1c + 4);
        uStack_1e4 = 0;
        local_80 = (ulonglong)(uint)local_1e8;
        local_78 = local_1e0;
      }
      else {
        local_13c = (local_140 - local_144) + local_140;
        fStack_1f0 = (0.0 - fStack_70) + 0.0;
        local_1ec = (local_c4 - local_6c) + local_128;
        local_1f4 = (local_e4 - local_74) + (float)iVar13;
        local_80 = CONCAT44(fStack_1f0,local_1f4);
        local_78 = local_1ec;
      }
      local_74 = local_200;
      fStack_70 = fStack_1fc;
      local_124 = local_144;
      local_6c = local_1f8;
      local_1c = 0.0;
      local_94 = 0.0;
      do {
        fVar16 = local_94 * 0.5;
        fVar5 = fVar16 * 0.7;
        fVar23 = fVar16 * fVar16 * fVar5;
        fVar19 = fVar23 - fVar16 * fVar5;
        local_1a8 = (float)local_80 * fVar19;
        local_1d0 = fVar19 * local_80._4_4_;
        local_1b0 = fVar19 * local_78;
        fVar22 = (fVar16 * 1.6 * fVar16 - fVar16 * 1.3 * fVar16 * fVar16) + fVar5;
        local_1b8 = fVar22 * local_118;
        local_190 = fVar22 * 0.0;
        local_1c0 = fVar22 * local_128;
        local_11c = (fVar16 * 1.3 * fVar16 * fVar16 - fVar16 * 2.3 * fVar16) + 1.0;
        local_178 = local_11c * local_e4;
        local_18c = local_11c * 0.0;
        local_188 = local_11c * local_c4;
        fVar5 = (fVar16 * 1.4 * fVar16 - fVar23) - fVar5;
        local_120 = fVar5 * (float)local_40 + local_178 + local_1b8 + local_1a8;
        local_98 = fVar5 * local_38 + local_188 + local_1c0 + local_1b0;
        local_1c8 = local_148 * fVar5 + local_144 * local_11c + local_140 * fVar22 +
                    local_13c * fVar19;
        local_dc = (float)((int)local_1c + 1);
        fVar4 = (float)(int)local_dc * 0.5;
        fVar19 = fVar4 * 0.7;
        fVar22 = fVar4 * fVar4 * fVar19;
        fVar23 = fVar22 - fVar4 * fVar19;
        local_1a0 = fVar23 * local_80._4_4_;
        local_1d8 = fVar23 * local_78;
        local_16c = (fVar4 * 1.6 * fVar4 - fVar4 * 1.3 * fVar4 * fVar4) + fVar19;
        local_1c4 = local_16c * local_118;
        local_1cc = local_16c * 0.0;
        local_16c = local_16c * local_128;
        fVar16 = (fVar4 * 1.3 * fVar4 * fVar4 - fVar4 * 2.3 * fVar4) + 1.0;
        local_1bc = fVar16 * local_e4;
        fVar19 = (fVar4 * 1.4 * fVar4 - fVar22) - fVar19;
        local_170 = (fVar19 * (float)local_40 + local_1bc + local_1c4 + fVar23 * (float)local_80) -
                    local_120;
        local_1a4 = (fVar19 * local_40._4_4_ + fVar16 * 0.0 + local_1cc + local_1a0) -
                    (fVar5 * local_40._4_4_ + local_18c + local_190 + local_1d0);
        local_1ac = (fVar19 * local_38 + fVar16 * local_c4 + local_16c + local_1d8) - local_98;
        fVar21 = (float10)FUN_00401030(local_170 * local_170 + local_1a4 * local_1a4 +
                                       local_1ac * local_1ac);
        local_58 = (float)((float10)1 / fVar21);
        local_1dc = local_1a4 * local_58 * 0.0;
        local_1b4 = local_1dc - local_1ac * local_58;
        local_1dc = local_170 * local_58 - local_1dc;
        local_1d4 = local_1ac * local_58 * 0.0 - local_170 * local_58 * 0.0;
        fVar21 = (float10)FUN_00401030(local_1b4 * local_1b4 + local_1d4 * local_1d4 +
                                       local_1dc * local_1dc);
        dVar24 = 0.10000000149011612;
        local_58 = (float)((float10)1 / fVar21);
        fVar23 = local_1b4 * local_58;
        fVar16 = local_1d4 * local_58;
        fVar22 = local_1dc * local_58;
        fVar19 = local_1c8 * 0.1 + 0.2;
        iVar13 = param_1[0x1e];
        if (*(int *)(iVar13 + 0x9c0) == 0) {
          dVar24 = 0.10000000149011612;
          FUN_009b7700();
        }
        uVar8 = *(uint *)(iVar13 + *(int *)(iVar13 + 0x9c0) * 4);
        uVar8 = uVar8 ^ (int)uVar8 >> 0xb;
        uVar8 = uVar8 ^ (uVar8 & 0xff3a58ad) << 7;
        uVar8 = uVar8 ^ (uVar8 & 0xffffdf8c) << 0xf;
        fVar19 = (float)(((double)((float)((uVar8 ^ (int)uVar8 >> 0x12) & 0x7fffffff) * 4.656613e-10
                                  ) * dVar24 + (double)fVar19) - 0.05000000074505806);
        *(int *)(iVar13 + 0x9c0) = (*(int *)(iVar13 + 0x9c0) + 1) % 0x270;
        if (-1 < (int)local_44) {
          if ((local_1c == 0.0) && (iVar13 = (local_8c - (int)local_90) / 0xc, 2 < iVar13)) {
            iVar20 = iVar13 * 3 + -6;
            local_290 = *(undefined8 *)((int)local_90 + iVar20 * 4);
            local_288 = *(undefined4 *)((int)local_90 + iVar20 * 4 + 8);
            puVar17 = (undefined8 *)((int)local_90 + iVar13 * 0xc + -0xc);
            local_27c = *(undefined4 *)(puVar17 + 1);
            local_284 = *puVar17;
            iVar13 = (int)local_64 - (int)local_68 >> 3;
            local_260 = local_68[iVar13 * 2 + -4];
            local_25c = local_68[iVar13 * 2 + -3];
            local_258 = local_68[iVar13 * 2 + -2];
            local_254 = local_68[iVar13 * 2 + -1];
            FUN_007ea300();
            iVar13 = FUN_00815950();
            if (*(int *)(iVar13 + 0xc) == 0) {
              local_240 = DAT_00f092fc;
              local_23c = DAT_00f14a8c;
              FUN_00423920();
            }
            else {
              iVar13 = FUN_00815950();
              local_234 = (float)*(int *)(iVar13 + 0xc) * 0.25 + 0.25;
              local_238 = DAT_00f092fc;
              FUN_00423920();
              local_f0 = 0xf;
              local_f4 = 0;
              local_104[0] = local_104[0] & 0xffffff00;
              FUN_00409350("rivermanager.cpp",0x10);
              local_8._0_1_ = 6;
              FUN_004015b0(local_104,0x14e,0x10005);
              local_8 = CONCAT31(local_8._1_3_,7);
              iVar13 = FUN_00815950();
              uVar25 = FUN_00987d20((float)*(int *)(iVar13 + 0xc) * 0.25 + 0.25);
              piVar7 = (int *)FUN_0048b410(uVar25);
              FUN_00408be0(piVar7);
              uVar8 = 0;
              if (((*(byte *)(*(int *)(*piVar7 + 4) + 0xc + (int)piVar7) & 6) == 0) &&
                 (iVar13 = (**(code **)(**(int **)(*(int *)(*piVar7 + 4) + 0x38 + (int)piVar7) +
                                       0x34))(), iVar13 == -1)) {
                uVar8 = 4;
              }
              if (uVar8 != 0) {
                uVar8 = *(uint *)((int)piVar7 + *(int *)(*piVar7 + 4) + 0xc) | uVar8;
                if (*(int *)((int)piVar7 + *(int *)(*piVar7 + 4) + 0x38) == 0) {
                  uVar8 = uVar8 | 4;
                }
                FUN_00401120(uVar8,0);
              }
              local_8._0_1_ = 6;
              FUN_00987ac0(local_4ec);
              local_4ec[0] = std::ios_base::vftable;
              FUN_00aad52d(local_4ec);
              local_8._0_1_ = 5;
              if (0xf < local_f0) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b(local_104[0]);
              }
            }
            FUN_00423920();
            FUN_007ea300();
            iVar13 = FUN_00815950();
            if (*(int *)(iVar13 + 0xc) == 0) {
              local_248 = 0;
              local_244 = DAT_00f14a8c;
              FUN_00423920();
              FUN_00423920();
            }
            else {
              iVar13 = FUN_00815950();
              local_24c = (float)*(int *)(iVar13 + 0xc) * 0.25 + 0.25;
              local_250 = 0;
              FUN_00423920();
              local_f0 = 0xf;
              local_f4 = 0;
              local_104[0] = local_104[0] & 0xffffff00;
              FUN_00409350("rivermanager.cpp",0x10);
              local_8._0_1_ = 8;
              FUN_004015b0(local_104,0x15b,0x10005);
              local_8 = CONCAT31(local_8._1_3_,9);
              iVar13 = FUN_00815950();
              uVar25 = FUN_00987d20((float)*(int *)(iVar13 + 0xc) * 0.25 + 0.25);
              piVar7 = (int *)FUN_0048b410(uVar25);
              FUN_00408be0(piVar7);
              uVar8 = 0;
              if (((*(byte *)(*(int *)(*piVar7 + 4) + 0xc + (int)piVar7) & 6) == 0) &&
                 (iVar13 = (**(code **)(**(int **)(*(int *)(*piVar7 + 4) + 0x38 + (int)piVar7) +
                                       0x34))(), iVar13 == -1)) {
                uVar8 = 4;
              }
              if (uVar8 != 0) {
                uVar8 = *(uint *)((int)piVar7 + *(int *)(*piVar7 + 4) + 0xc) | uVar8;
                if (*(int *)((int)piVar7 + *(int *)(*piVar7 + 4) + 0x38) == 0) {
                  uVar8 = uVar8 | 4;
                }
                FUN_00401120(uVar8,0);
              }
              local_8._0_1_ = 8;
              FUN_00987ac0(local_4ec);
              local_4ec[0] = std::ios_base::vftable;
              FUN_00aad52d(local_4ec);
              local_8._0_1_ = 5;
              if (0xf < local_f0) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b(local_104[0]);
              }
              FUN_00423920();
            }
          }
          else {
            local_174 = fVar19 * fVar22 * 0.5;
            local_18 = (int *)(local_120 + fVar23 * fVar19 * 0.5);
            local_17c = local_120 - fVar23 * fVar19 * 0.5;
            local_184 = 0.0 - fVar19 * fVar16 * 0.5;
            local_180 = fVar19 * fVar16 * 0.5 + 0.0;
            local_c8 = local_98 - fVar19 * fVar22 * 0.5;
            iVar9 = (int)((float)local_18 - 1.0);
            iVar13 = (int)((local_98 + local_174) - 1.0);
            iVar20 = *(int *)(DAT_0125870c + 0x212c);
            if (*(int *)(iVar20 + 4) + -1 < iVar9) {
              iVar9 = *(int *)(iVar20 + 4) + -1;
            }
            if (iVar13 < 0) {
              iVar13 = 0;
            }
            if (*(int *)(iVar20 + 8) + -1 < iVar13) {
              iVar13 = *(int *)(iVar20 + 8) + -1;
            }
            iVar3 = *(int *)(DAT_0125870c + 0x2aa4);
            iVar13 = *(int *)(iVar3 + (uint)*(ushort *)
                                             (*(int *)(iVar20 + 0x18) * iVar13 +
                                              *(int *)(iVar20 + 0xc) * iVar9 +
                                             *(int *)(iVar20 + 0x20)) * 4);
            fStack_198 = DAT_00f141d0;
            if ((iVar13 != 0) && (*(char *)(iVar13 + 0x2a) == '\0')) {
              fStack_198 = 0.0;
            }
            local_1c = (float)(int)(local_120 - 1.0);
            fStack_198 = fStack_198 + 0.4;
            local_a8 = (float)(int)(local_98 - 1.0);
            if (*(int *)(iVar20 + 4) + -1 < (int)local_1c) {
              local_1c = (float)(*(int *)(iVar20 + 4) + -1);
            }
            fVar16 = local_a8;
            if ((int)local_a8 < 0) {
              fVar16 = 0.0;
            }
            if (*(int *)(iVar20 + 8) + -1 < (int)fVar16) {
              fVar16 = (float)(*(int *)(iVar20 + 8) + -1);
            }
            iVar13 = *(int *)(iVar3 + (uint)*(ushort *)
                                             (*(int *)(iVar20 + 0x18) * (int)fVar16 +
                                              *(int *)(iVar20 + 0xc) * (int)local_1c +
                                             *(int *)(iVar20 + 0x20)) * 4);
            fVar16 = DAT_00f141d0;
            if ((iVar13 != 0) && (*(char *)(iVar13 + 0x2a) == '\0')) {
              fVar16 = 0.0;
            }
            local_1c = (float)(int)(local_17c - 1.0);
            fVar16 = fVar16 + 0.4;
            local_9c = (float)(int)(local_c8 - 1.0);
            if (*(int *)(iVar20 + 4) + -1 < (int)local_1c) {
              local_1c = (float)(*(int *)(iVar20 + 4) + -1);
            }
            fVar19 = local_9c;
            if ((int)local_9c < 0) {
              fVar19 = 0.0;
            }
            if (*(int *)(iVar20 + 8) + -1 < (int)fVar19) {
              fVar19 = (float)(*(int *)(iVar20 + 8) + -1);
            }
            iVar13 = *(int *)(iVar3 + (uint)*(ushort *)
                                             (*(int *)(iVar20 + 0x18) * (int)fVar19 +
                                              *(int *)(iVar20 + 0xc) * (int)local_1c +
                                             *(int *)(iVar20 + 0x20)) * 4);
            local_e0 = DAT_00f141d0;
            if ((iVar13 != 0) && (*(char *)(iVar13 + 0x2a) == '\0')) {
              local_e0 = 0.0;
            }
            local_e0 = local_e0 + 0.4;
            if (fStack_198 < 0.15) {
              fStack_198 = 0.15;
            }
            if (local_e0 < 0.15) {
              local_e0 = 0.15;
            }
            if (fStack_198 < fVar16) {
              fStack_198 = fVar16;
            }
            if (local_e0 < fVar16) {
              local_e0 = fVar16;
            }
            fStack_198 = fStack_198 + local_180;
            local_264 = local_98 + local_174 + 0.0;
            local_19c = (float)local_18 + 0.0;
            local_26c = CONCAT44(fStack_198,local_19c);
            local_194 = local_264;
            FUN_007ea300();
            local_10c[1] = (float)local_48 / 3.0;
            local_10c[0] = DAT_00f092fc;
            if ((local_10c < local_64) && (local_68 <= local_10c)) {
              iVar13 = (int)local_10c - (int)local_68 >> 3;
              if (local_64 == local_60) {
                uVar8 = (int)local_64 - (int)local_68 >> 3;
                if (0x1ffffffe < uVar8) {
LAB_00813f41:
                    /* WARNING: Subroutine does not return */
                  FUN_00aad3ad("vector<T> too long");
                }
                uVar8 = uVar8 + 1;
                uVar18 = (int)local_60 - (int)local_68 >> 3;
                if (uVar18 < uVar8) {
                  if (0x1fffffff - (uVar18 >> 1) < uVar18) {
                    uVar18 = 0;
                  }
                  else {
                    uVar18 = uVar18 + (uVar18 >> 1);
                  }
                  if (uVar18 < uVar8) {
                    uVar18 = uVar8;
                  }
                  FUN_004237e0(uVar18);
                }
              }
              if (local_64 != (float *)0x0) {
                *local_64 = local_68[iVar13 * 2];
                fVar16 = local_68[iVar13 * 2 + 1];
LAB_00813388:
                local_64[1] = fVar16;
              }
            }
            else {
              if (local_64 == local_60) {
                uVar8 = (int)local_64 - (int)local_68 >> 3;
                if (0x1ffffffe < uVar8) goto LAB_00813f41;
                uVar8 = uVar8 + 1;
                uVar18 = (int)local_60 - (int)local_68 >> 3;
                if (uVar18 < uVar8) {
                  if (0x1fffffff - (uVar18 >> 1) < uVar18) {
                    uVar18 = 0;
                  }
                  else {
                    uVar18 = uVar18 + (uVar18 >> 1);
                  }
                  if (uVar18 < uVar8) {
                    uVar18 = uVar8;
                  }
                  FUN_004237e0(uVar18);
                }
              }
              if (local_64 != (float *)0x0) {
                *local_64 = local_10c[0];
                fVar16 = local_10c[1];
                goto LAB_00813388;
              }
            }
            local_48 = local_48 + 1;
            local_64 = local_64 + 2;
            if (bVar6) {
              local_220 = DAT_00f092fc;
              local_114 = (double)local_94 * 0.125;
              local_21c = (float)local_114;
              FUN_00423920();
            }
            else {
              iVar13 = FUN_00815950();
              if (*(int *)(iVar13 + 0xc) == 0) {
                local_208 = DAT_00f092fc;
                local_114 = (double)local_94 * 0.125;
                local_204 = (float)(local_114 + 0.25);
                FUN_00423920();
              }
              else {
                local_114 = (double)local_94 * 0.125;
                iVar13 = FUN_00815950();
                local_22c = (float)((double)*(int *)(iVar13 + 0xc) * 0.25 + local_114 + 0.25);
                local_230 = DAT_00f092fc;
                FUN_00423920();
                local_f0 = 0xf;
                local_f4 = 0;
                local_104[0] = local_104[0] & 0xffffff00;
                FUN_00409350("rivermanager.cpp",0x10);
                local_8._0_1_ = 10;
                FUN_004015b0(local_104,0x1a4,0x10005);
                local_8._0_1_ = 0xb;
                iVar13 = FUN_00815950();
                uVar25 = FUN_00987d20((float)*(int *)(iVar13 + 0xc) * 0.25 + 0.25);
                uVar25 = FUN_0048b410(uVar25);
                FUN_00401280(uVar25);
                local_8._0_1_ = 10;
                FUN_00987ac0(local_4ec);
                local_4ec[0] = std::ios_base::vftable;
                FUN_00aad52d(local_4ec);
                local_8._0_1_ = 5;
                if (0xf < local_f0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00aae91b(local_104[0]);
                }
              }
            }
            local_270 = local_c8 + 0.0;
            local_54 = CONCAT44(local_e0 + local_184,local_17c + 0.0);
            local_278 = local_54;
            local_4c = local_270;
            FUN_007ea300();
            iVar13 = local_48;
            local_20c = (float)local_48 / 3.0;
            local_210 = 0;
            FUN_00423920();
            local_48 = iVar13 + 1;
            if (bVar6) {
              local_218 = 0;
              local_214 = (float)local_114;
              FUN_00423920();
            }
            else {
              iVar13 = FUN_00815950();
              if (*(int *)(iVar13 + 0xc) == 0) {
                local_228 = 0;
                local_224 = (float)(local_114 + 0.25);
                FUN_00423920();
              }
              else {
                iVar13 = FUN_00815950();
                local_2c = local_2c & 0xffffffff;
                local_24 = (float)((double)*(int *)(iVar13 + 0xc) * 0.25 + local_114 + 0.25);
                FUN_00423920();
                local_f0 = 0xf;
                local_f4 = 0;
                local_104[0] = local_104[0] & 0xffffff00;
                FUN_00409350("rivermanager.cpp",0x10);
                local_8._0_1_ = 0xc;
                FUN_004015b0(local_104,0x1bf,0x10005);
                local_8._0_1_ = 0xd;
                iVar13 = FUN_00815950();
                uVar25 = FUN_00987d20((float)*(int *)(iVar13 + 0xc) * 0.25 + 0.25);
                uVar25 = FUN_0048b410(uVar25);
                FUN_00401280(uVar25);
                local_8._0_1_ = 0xc;
                FUN_00987ac0(local_4ec);
                local_4ec[0] = std::ios_base::vftable;
                FUN_00aad52d(local_4ec);
                local_8._0_1_ = 5;
                if (0xf < local_f0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00aae91b(local_104[0]);
                }
              }
            }
          }
        }
        local_1c = local_dc;
        local_94 = (float)(int)local_dc;
      } while (local_94 < DAT_00f092b0);
      local_14 = local_30;
      local_44 = (int *)((int)local_44 + 1);
      bVar6 = false;
    } while ((uint)local_30 < (uint)(*(int *)(iVar12 + 0x10) + -1));
  }
  iVar12 = local_8c;
  if (-1 < local_e8) {
    local_c8 = (float)param_1[0xf];
    iVar20 = (local_8c - (int)local_90) / 0xc;
    fVar19 = (float)local_e8 * local_c8;
    iVar13 = iVar20 * 3 + -6;
    uVar1 = *(undefined8 *)((int)local_90 + iVar13 * 4);
    local_4c = *(float *)((int)local_90 + iVar13 * 4 + 8);
    uVar2 = *(undefined8 *)((int)local_90 + iVar20 * 0xc + -0xc);
    local_38 = *(float *)((int)local_90 + iVar20 * 0xc + -4);
    local_54._0_4_ = (float)uVar1;
    local_40._0_4_ = (float)uVar2;
    local_40._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
    local_b0 = (float)local_54 - (float)local_40;
    local_54._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
    local_ac = local_54._4_4_ - local_40._4_4_;
    local_a8 = local_4c - local_38;
    local_54 = uVar1;
    local_40 = uVar2;
    fVar21 = (float10)FUN_00401030(local_b0 * local_b0 + local_ac * local_ac + local_a8 * local_a8);
    local_dc = (float)fVar21;
    local_80 = CONCAT44(local_ac * 0.5 + local_40._4_4_,local_b0 * 0.5 + (float)local_40);
    local_78 = local_a8 * 0.5 + local_38;
    fVar16 = 1.0 / local_dc;
    local_b0 = local_b0 * fVar16;
    local_ac = fVar16 * local_ac;
    local_a8 = fVar16 * local_a8;
    local_2c._0_4_ = local_a8 - local_ac * 0.0;
    local_24 = local_ac * 0.0 - local_b0;
    local_2c._4_4_ = local_b0 * 0.0 - local_a8 * 0.0;
    local_18 = (int *)local_dc;
    fVar21 = (float10)FUN_00401030((float)local_2c * (float)local_2c +
                                   local_2c._4_4_ * local_2c._4_4_ + local_24 * local_24);
    local_30 = (float)((float10)1 / fVar21);
    local_2c._0_4_ = (float)local_2c * local_30;
    local_2c._4_4_ = local_30 * local_2c._4_4_;
    local_24 = local_30 * local_24;
    _local_a4 = CONCAT44(local_2c._4_4_ * 3.0,(float)local_2c * 3.0);
    local_9c = local_24 * 3.0;
    local_74 = (float)local_80 - local_b0 * local_dc;
    fStack_70 = local_80._4_4_ - local_dc * local_ac;
    local_40._0_4_ = local_b0 * local_dc + (float)local_80;
    local_6c = local_78 - local_dc * local_a8;
    local_40._4_4_ = local_dc * local_ac + local_80._4_4_;
    local_38 = local_dc * local_a8 + local_78;
    FUN_007ea300();
    FUN_007ea300();
    local_30 = fVar19 + local_c8;
    local_2c = CONCAT44(local_30,(float)local_2c);
    local_24 = 0.0;
    FUN_00423920();
    local_2c = CONCAT44(fVar19,(float)local_2c);
    local_24 = 0.0;
    FUN_00423920();
    local_54 = CONCAT44(local_40._4_4_ + fStack_a0,(float)local_40 + local_a4);
    local_4c = local_38 + local_9c;
    FUN_007ea300();
    local_54 = CONCAT44(fStack_70 + fStack_a0,local_74 + local_a4);
    local_4c = local_6c + local_9c;
    FUN_007ea300();
    local_2c = CONCAT44(local_30,(float)local_2c);
    local_24 = DAT_00f092fc;
    FUN_00423920();
    local_2c = CONCAT44(fVar19,(float)local_2c);
    local_24 = DAT_00f092fc;
    FUN_00423920();
    iVar13 = local_48;
    local_2c = CONCAT44(DAT_00f092fc,(float)local_2c);
    local_24 = (float)local_48;
    FUN_00423920();
    local_2c = local_2c & 0xffffffff;
    local_24 = (float)(iVar13 + 1);
    FUN_00423920();
    local_2c = CONCAT44(DAT_00f092fc,(float)local_2c);
    local_24 = (float)(iVar13 + 2);
    FUN_00423920();
    local_2c = local_2c & 0xffffffff;
    local_24 = (float)(iVar13 + 3);
    FUN_00423920();
  }
  param_2 = (int *)FUN_00aae9af(0x24);
  if (param_2 == (int *)0x0) {
    param_2 = (int *)0x0;
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    *(undefined1 *)(param_2 + 5) = 1;
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[8] = 1;
  }
  iVar12 = (iVar12 - (int)local_90) / 0xc;
  local_44 = param_2;
  FUN_009f9630(param_2,*(undefined4 *)(*param_1 + 100),iVar12,0x1c,0x202,0);
  piVar7 = (int *)*param_2;
  if (piVar7 == (int *)0x0) {
    fVar16 = 0.0;
  }
  else {
    uVar25 = 0;
    if ((*(char *)((int)param_2 + 0x15) != '\0') && (*(char *)((int)param_2 + 0x16) == '\0')) {
      uVar25 = 0x2000;
    }
    (**(code **)(*piVar7 + 0x2c))(piVar7,0,0,&local_30,uVar25);
    fVar16 = local_30;
  }
  if (0 < iVar12) {
    pfVar10 = (float *)((int)fVar16 + 0x14);
    pfVar14 = local_68;
    puVar17 = local_90;
    do {
      *(undefined8 *)(pfVar10 + -5) = *puVar17;
      pfVar10[-3] = *(float *)(puVar17 + 1);
      pfVar10[-2] = *(float *)((local_d8 - (int)local_68) + (int)pfVar14);
      pfVar10[-1] = *(float *)((local_d8 - (int)local_68) + 4 + (int)pfVar14);
      *pfVar10 = *pfVar14;
      pfVar10[1] = pfVar14[1];
      puVar17 = (undefined8 *)((int)puVar17 + 0xc);
      pfVar14 = pfVar14 + 2;
      pfVar10 = pfVar10 + 7;
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
  }
  (**(code **)(*(int *)*param_2 + 0x30))((int *)*param_2);
  FUN_0068f390();
  param_2 = (int *)FUN_00aae9af(0x24);
  if (local_e8 == -1) {
    if (param_2 != (int *)0x0) {
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      *(undefined1 *)(param_2 + 5) = 0;
      param_2[6] = 0;
      param_2[7] = 0;
      param_2[8] = 0;
    }
    FUN_0068f390();
  }
  else {
    if (param_2 == (int *)0x0) {
      param_2 = (int *)0x0;
    }
    else {
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      *(undefined1 *)(param_2 + 5) = 1;
      param_2[6] = 0;
      param_2[7] = 0;
      param_2[8] = 1;
    }
    iVar12 = (local_134 - (int)local_138) / 0xc;
    local_44 = param_2;
    FUN_009f9630(param_2,*(undefined4 *)(*param_1 + 100),iVar12,0x1c,0x202,0);
    piVar7 = (int *)*param_2;
    if (piVar7 == (int *)0x0) {
      fVar16 = 0.0;
    }
    else {
      uVar25 = 0;
      if ((*(char *)((int)param_2 + 0x15) != '\0') && (*(char *)((int)param_2 + 0x16) == '\0')) {
        uVar25 = 0x2000;
      }
      (**(code **)(*piVar7 + 0x2c))(piVar7,0,0,&local_30,uVar25);
      fVar16 = local_30;
    }
    if (0 < iVar12) {
      puVar11 = (undefined4 *)((int)fVar16 + 0x14);
      puVar15 = local_158;
      puVar17 = local_138;
      do {
        *(undefined8 *)(puVar11 + -5) = *puVar17;
        puVar11[-3] = *(undefined4 *)(puVar17 + 1);
        puVar11[-2] = *(undefined4 *)((local_168 - (int)local_158) + (int)puVar15);
        puVar11[-1] = *(undefined4 *)((local_168 - (int)local_158) + 4 + (int)puVar15);
        *puVar11 = *puVar15;
        puVar11[1] = puVar15[1];
        puVar17 = (undefined8 *)((int)puVar17 + 0xc);
        puVar15 = puVar15 + 2;
        puVar11 = puVar11 + 7;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
    }
    (**(code **)(*(int *)*param_2 + 0x30))((int *)*param_2);
    FUN_0068f390();
  }
  FUN_00815a60();
  if (local_158 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_158);
  }
  if (local_168 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_168);
  }
  if (local_138 != (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_138);
  }
  if (local_68 != (float *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_68);
  }
  if (local_d8 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_d8);
  }
  if (local_90 != (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_90);
  }
  ExceptionList = local_10;
  return;
}

